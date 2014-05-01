/******************************************************************************
 * @file xquad_spi_example.c
 *
 * This file contains some examples showing how to use the functions defined
 * in file xquad_spi.c.
 *
 * <pre>
 * MODIFICATION HISTORY:
 *
 * Ver   Who  Date     Changes
 * ----- ---- -------- -----------------------------------------------
 * 1.00a mn   11/12/10 First release
 *
 * </pre>
 *
 *****************************************************************************/

/***************************** Include Files *********************************/

#include <stdio.h>
#include "xquad_spi.h"

/************************** Variable Definitions *****************************/

XQuadSpi QSpi;
ErrorCode ReturnType;

u8 arru8Data[19];
u8 arru8ReadData[256];
u8 arru8WriteData[6];

u8 u8ReturnValue;
u8 u8CurrentMode;

char * Ret;

/************************** Function Prototypes ******************************/

u8 XQuadSpi_CheckCurrentMode (XQuadSpi * InstancePtr, Xuint32 DivRate);
u8 XQuadSpi_FlashTest (XQuadSpi * InstancePtr, Xuint32 ClkMHz, Xuint32 DivRate);
Xuint32 XQuadSpi_BlankCheckEntireMemory (XQuadSpi * InstancePtr, Xuint32 DivRate);
Xuint32 XQuadSpi_BlankCheckSector (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Addr);
u8 XQuadSpi_FastReadXiP (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 Mode, Xuint32 NrOfBytes, u8 Data[NrOfBytes]);

/************************** Function Definitions *****************************/

int main(void) {

	xil_printf("\n\n QUAD-SPI FLASH MEMORY TEST EXAMPLE \n\n");

	XQuadSpi_CfgInitialize(&QSpi);

	u8ReturnValue = XQuadSpi_BlankCheckEntireMemory (&QSpi, 4);

	if (u8ReturnValue) {
		xil_printf("\nNumber of non-blank Bytes: %d", u8ReturnValue);
	}

	u8ReturnValue = XQuadSpi_FlashTest (&QSpi, 66, 4);

	xil_printf("\n\n END OF TEST EXAMPLE \n\n");
	return 1;
}

/******************************************************************************
 * This function verifies in which mode (Extended, Dual or Quad) is the Flash
 * memory currently set.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 *
 * @return	0x00 - Extended Mode (or Single)
 * 			0x02 - Dual Mode
 * 			0x04 - Quad Mode
 * 			0xFF - Error
 *
 * @note	For additional information about the result please define in file
 * 		xquad_spi_l.h a VERBOSE macro.
 *****************************************************************************/
u8 XQuadSpi_CheckCurrentMode (XQuadSpi * InstancePtr, Xuint32 DivRate) {

	/* Check ID in Mode Extended */
	ReturnType = XQuadSpi_ReadIdentification (InstancePtr, (DivRate+2), arru8Data);
	if (ReturnType != Success) {
		/* Check ID in Mode Dual */
		ReturnType = XQuadSpi_MultipleIOReadIdentification (InstancePtr,
				(DivRate+2), 1, arru8Data);
		if (ReturnType != Success) {
			/* Check ID in Mode Quad */
			ReturnType = XQuadSpi_MultipleIOReadIdentification (InstancePtr,
					(DivRate+2), 2, arru8Data);
			if (ReturnType != Success) {
				xil_printf("\nError: ");
#ifdef VERBOSE
				Ret = XQuadSpi_ErrorStr (ReturnType);
				xil_printf("%s\n", Ret);
				return 0xFF;
#endif
			}
			else {
				xil_printf("\nCurrent Command Mode: Quad");
#ifdef VERBOSE
				Ret = XQuadSpi_ErrorStr (ReturnType);
				xil_printf("\nQuad Command Mode ID result: %s\n", Ret);
				return 0x04;
#endif
			}
		}
		else {
			xil_printf("\nCurrent Command Mode: Dual");
#ifdef VERBOSE
			Ret = XQuadSpi_ErrorStr (ReturnType);
			xil_printf("\nDual Command Mode ID result: %s\n", Ret);
			return 0x02;
#endif
		}
	}
	else {
		xil_printf("\nCurrent Command Mode: Extended");
#ifdef VERBOSE
		Ret = XQuadSpi_ErrorStr (ReturnType);
		xil_printf("\nExtended Command Mode ID result: %s\n", Ret);
		return 0x00;
#endif
	}
}

/******************************************************************************
 * This function does a basic test of the Flash memory by writing consequently:
 * 0x00, 0x01, 0x04, 0x08, 0xFF and then read it back. It then compares read
 * data with the written one.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param   ClkMHz is the System Clock value in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 *
 * @return	0x00 - Flash memory passed the test
 * 			0xFF - Error
 *
 * @note	For additional information about the result please define in file
 * 		xquad_spi_l.h a VERBOSE macro.
 *****************************************************************************/
u8 XQuadSpi_FlashTest (XQuadSpi * InstancePtr, Xuint32 ClkMHz, Xuint32 DivRate) {

	/* Assign the control data to write */
	arru8WriteData[0] = 0x00;
	arru8WriteData[1] = 0x01;
	arru8WriteData[2] = 0x02;
	arru8WriteData[3] = 0x04;
	arru8WriteData[4] = 0x08;
	arru8WriteData[5] = 0xFF;

	/* Check the current mode */
	u8CurrentMode = XQuadSpi_CheckCurrentMode (InstancePtr, DivRate);

	if (u8CurrentMode != 0xFF) {
		/* Reset VECR to Single command input */
#ifdef USE_N25Q128
		if (u8CurrentMode != 0x00) {
			ReturnType = XQuadSpi_EnableMultiMode (InstancePtr, DivRate,
					u8CurrentMode, 0x00);
		}
#endif
		if (ReturnType == Success) {
			/* Erase the first sector to ensure a proper writing */
			ReturnType = XQuadSpi_SectorErase (InstancePtr, ClkMHz,
					DivRate, 0x00, 0x00);
			if (ReturnType == Success) {
				/* Write control data to Flash */
				ReturnType = XQuadSpi_PageProgram (InstancePtr, ClkMHz,
						DivRate, 0x00, 0x00, 0x00, 0x06, arru8WriteData);
				if (ReturnType == Success) {
					/* Read the written control data */
					ReturnType = XQuadSpi_FastRead (InstancePtr, DivRate,
							0x00, 0x00, 0x06, 0x08, arru8Data);
					if (ReturnType == Success) {
						if ((arru8Data[0] == arru8WriteData[0]) &&
								(arru8Data[1] == arru8WriteData[1]) &&
								(arru8Data[2] == arru8WriteData[2]) &&
								(arru8Data[3] == arru8WriteData[3]) &&
								(arru8Data[4] == arru8WriteData[4]) &&
								(arru8Data[5] == arru8WriteData[5])) {
							xil_printf("\nFlash memory passed the test !");
							XQuadSpi_SectorErase (InstancePtr, ClkMHz,
												DivRate, 0x00, 0x00);
							return 0x00;
						}
						else {
							xil_printf("\nWritten data doesn't match the "
									"read one");
							return 0xFF;
						}
					}
					else {
						xil_printf("\nReading Flash failed");
#ifdef VERBOSE
						Ret = XQuadSpi_ErrorStr (ReturnType);
						xil_printf("\n%s", Ret);
#endif
						return 0xFF;
					}
				}
				else {
					xil_printf("\nWriting Flash failed");
#ifdef VERBOSE
					Ret = XQuadSpi_ErrorStr (ReturnType);
					xil_printf("\n%s", Ret);
#endif
					return 0xFF;
				}
			}
			else {
				xil_printf("\nErasing Flash failed");
#ifdef VERBOSE
				Ret = XQuadSpi_ErrorStr (ReturnType);
				xil_printf("\n%s", Ret);
#endif
				return 0xFF;
			}
		}
		else {
			xil_printf("\nCannot complete the Flash test");
			return 0xFF;
		}
	}
	else {
		xil_printf("\nCannot complete the Flash test");
		return 0xFF;
	}
}

/******************************************************************************
 * This function checks if the Flash memory is empty by reading it and comparing
 * every Byte with 0xFF (default value after an Erase operation).
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 *
 * @return	0x00000000 - The Flash memory is blank
 * 			0x???????? - Number of non-blank Bytes
 * 			0xFFFFFFFF - Error
 *
 * @note	For additional information about the result please define in file
 * 		xquad_spi_l.h a VERBOSE macro.
 *****************************************************************************/
Xuint32 XQuadSpi_BlankCheckEntireMemory (XQuadSpi * InstancePtr, Xuint32 DivRate) {

	Xuint32 u32NonBlankBytes = 0;
	Xuint32 i = 0;
	Xuint32 j = 0;
	Xuint32 k = 0;

	/* Check the current mode */
	u8CurrentMode = XQuadSpi_CheckCurrentMode (InstancePtr, DivRate);

	if (u8CurrentMode != 0xFF) {

		for (i=0; i<FLASH_SIZE; i+=256) {
			/* Read chunks of 256 Bytes */
			ReturnType = XQuadSpi_FastRead (InstancePtr, DivRate, u8CurrentMode,
					i, 256, 8, arru8ReadData);
			if (ReturnType != Success) {
				xil_printf("\nReading Flash failed");
#ifdef VERBOSE
				Ret = XQuadSpi_ErrorStr (ReturnType);
				xil_printf("\n%s", Ret);
#endif
				return 0xFFFFFFFF;
			}

			if (i == k) {
				xil_printf("\nData[0x%x]: 0x%x", i, arru8ReadData[1]);
				k += 0x10000;
			}

			/* Check if the read Bytes are blank */
			for (j=0; j<256; j++) {
				if (arru8ReadData[j] != 0xFF) {
					u32NonBlankBytes++;
				}
			}
		}
	}
	else {
		xil_printf("\nCannot perform the blank check");
		return 0xFFFFFFFF;
	}

	/* Return the number of non-blank Bytes (if there are any) */
	if (u32NonBlankBytes != 0) {
		return u32NonBlankBytes;
	}
	else {
		return 0x00000000;
	}
}

/******************************************************************************
 * This function checks if a certain sector from the Flash memory is empty by
 * reading its contents and comparing every Byte with 0xFF (default value after
 * an Erase operation).
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 *
 * @return	0x00000000 - The Flash memory is blank
 * 			0x???????? - Number of non-blank Bytes
 * 			0xFFFFFFFF - Error
 *
 * @note	For additional information about the result please define in file
 * 		xquad_spi_l.h a VERBOSE macro.
 *****************************************************************************/
Xuint32 XQuadSpi_BlankCheckSector (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address) {

	Xuint32 u32NonBlankBytes = 0;
	Xuint32 u32CheckAddrRez;
	long i = 0;
	Xuint32 j = 0;
	Xuint32 k = Address;

	u32CheckAddrRez = Address % FLASH_SECTOR_SIZE;
	if (u32CheckAddrRez) {
		xil_printf("\nInvalid Address");
		return 0xFFFFFFFF;
	}
	if(!(Address < FLASH_SIZE)) {
		xil_printf("\nAddress out of range");
		return 0xFFFFFFFF;
	}

	/* Check the current mode */
	u8CurrentMode = XQuadSpi_CheckCurrentMode (InstancePtr, DivRate);

	if (u8CurrentMode != 0xFF) {
		for (i=Address; i<(Address + FLASH_SECTOR_SIZE); i+=256) {
			/* Read chunks of 256 Bytes */
			ReturnType = XQuadSpi_FastRead (InstancePtr, DivRate, u8CurrentMode,
					i, 256, 8, arru8ReadData);
			if (ReturnType != Success) {
				xil_printf("\nReading Flash failed");
#ifdef VERBOSE
				Ret = XQuadSpi_ErrorStr (ReturnType);
				xil_printf("\n%s", Ret);
#endif
				return 0xFFFFFFFF;
			}
			if (i == k) {
				xil_printf("\nData[0x%x]: 0x%x", i, arru8ReadData[1]);
				k += 0x1000;
			}
			/* Check if the read Bytes are blank */
			for (j=0; j<256; j++) {
				if (arru8ReadData[j] != 0xFF) {
					u32NonBlankBytes++;
				}
			}
		}
	}
	else {
		xil_printf("\nCannot perform the blank check");
		return 0xFFFFFFFF;
	}

	/* Return the number of non-blank Bytes (if there are any) */
	if (u32NonBlankBytes != 0) {
		return u32NonBlankBytes;
	}
	else {
		return 0x00000000;
	}
}

/******************************************************************************
 * This function reads data from the Flash memory in XiP Mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param   Address if the start address from which reading will be performed.
 * @param   Mode is the mode on which reading will be performed (Extended,
 * 		Dual or Quad).
 * @param   NrOfBytes is the number of Bytes to read from the Flash memory
 * 		( > 512 Bytes).
 * @param   Data is the data read.
 *
 * @return	0x00 - Everything went OK
 * 			0xFF - Error
 *
 * @note	This is only an illustrative example !
 *
 * 			How to read in XiP Mode:
 * 				1) Check if the number of Bytes to read is bigger than 512.
 * 				2) Call function XQuadSpi_EnableXiP that enables XiP Modes and
 * 				sets it to the one selected with Mode parameter. It also
 * 				returns the first 256 Bytes from the start address.
 * 				3) For the number of Bytes minus 512 Bytes call the function
 * 				XQuadSpi_ReadInXiP which reads 256 Bytes at a time.
 * 				4) At almost at the end ("end" minus 256 Bytes) call function
 * 				XQuadSpi_DisableXiP which resets Flash to work in default mode
 * 				and returns the last 256 Bytes, read.
 *****************************************************************************/
u8 XQuadSpi_FastReadXiP (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 Mode, Xuint32 NrOfBytes, u8 Data[NrOfBytes]) {

	u8 arru8FirstDataRead[256];
	u8 arru8SecDataRead[256];
	u8 arru8LastDataRead[256];
	long i = 0;

	if (NrOfBytes <= 512) {
		xil_printf("\nInvalid number of Bytes");
		return 0xFF;
	}

	/* Enable and set XiP Mode */
	ReturnType = XQuadSpi_EnableXiP (InstancePtr, DivRate, Address, Mode,
			arru8FirstDataRead);
	if (ReturnType != Success) {
		xil_printf("\nError");
#ifdef VERBOSE
		Ret = XQuadSpi_ErrorStr (ReturnType);
		xil_printf("\n%s", Ret);
#endif
		return 0xFF;
	}

	/* Read chunks of 256 Bytes in XiP Mode */
	for (i=(Address+256); i<((Address+256)+(NrOfBytes-512)); i+=256) {
		ReturnType = XQuadSpi_ReadInXiP (InstancePtr, DivRate, Address, Mode,
				arru8SecDataRead);
	}

	/* Disable XiP Mode */
	ReturnType = XQuadSpi_DisableXiP (InstancePtr, DivRate, (NrOfBytes-256),
			Mode, arru8LastDataRead);
	if (ReturnType != Success) {
		xil_printf("\nError");
#ifdef VERBOSE
		Ret = XQuadSpi_ErrorStr (ReturnType);
		xil_printf("\n%s", Ret);
#endif
		return 0xFF;
	}

	/* Export data */
	for (i=0; i<256; i++) {
		Data[i] = arru8FirstDataRead[i];
		Data[i+256] = arru8SecDataRead[i];
		Data[i+512] = arru8LastDataRead[i];
	}

	return 0x00;
}
