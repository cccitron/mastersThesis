/******************************************************************************
 * @file xquad_spi.c
 *
 * This file contains the implementation of the XQuadSpi driver's basic
 * functionality. See xquad_spi.h for more information about the driver.
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

#include "xquad_spi.h"

/************************** Variable Definitions *****************************/

Xuint32 u32Status;
Xuint32 u32StartCommand;
Xuint32 u32EndCommand;
Xuint32 u32DivRate;
Xuint32 u32NrOfBytes;
Xuint32 u32NrOfDummyBytes;
Xuint32 u32CheckAddrRez;
Xuint32 i;

u8 u8DataRead;
u8 u8Status;
u8 u8Addr0; // Most Significant
u8 u8Addr1;
u8 u8Addr2; // Least Significant
u8 u8ReturnType;
u8 u8TimerReturnType;

extern XQuadSpi_Config XQuadSpi_ConfigTable[];

/************************** Function Definitions *****************************/

/******************************************************************************
 * Initializes the driver.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance. The memory the
 *		pointer references must be pre-allocated by the caller. Further
 *		calls to manipulate the driver through the XQuadSpi API must be
 *		made with this pointer.
 *
 * @return	Success if initialization was OK.
 *
 * @note	None.
 *****************************************************************************/
ErrorCode XQuadSpi_CfgInitialize(XQuadSpi * InstancePtr) {

	XQuadSpi_Config * CfgPtr;
	Xil_AssertNonvoid(InstancePtr != NULL);

	CfgPtr = &XQuadSpi_ConfigTable[0];
	InstancePtr->BaseAddress = CfgPtr->BaseAddress;

	return Success;
}

/******************************************************************************
 * This function is used to generate a text string describing the error from
 * the Flash memory. Call with the return value from other Flash memory routines.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Current mode is the current mode of operation.
 * @param	Mode is the mode on which the communication between Quad-SPI IP
 * 		Core and Flash Memory is made: can be Extended Mode, Dual Mode, Quad
 * 		Mode.
 *
 * @return	A pointer to a string with the error message.
 *
 * @note	None.
 *****************************************************************************/
#ifdef VERBOSE
char * XQuadSpi_ErrorStr (ErrorCode rErrNum) {
	switch (rErrNum) {
	case Success:
		return "Operation Completed Successfully";
	case AddressInvalid:
		return "Invalid Address";
	case AddressOutOfRange:
		return "Address is out of Range";
	case PageOverflow:
		return "Page Size Overflows";
	case NoInformationAvailable:
		return "No Additional Information Available";
	case ProgramFailed:
		return "Flash Program Failed";
	case WrongType:
		return "Wrong Type of Flash Memory";
	case EraseTimeOut:
		return "Flash Erase Time-Out";
	case WriteTimeOut:
		return "Flash Write Time-Out";
	default:
		return "Undefined Error Value";
	}
}
#endif

/******************************************************************************
 * This function enables Multi-Mode operation by setting the Volatile Enhanced
 * Register to the desired Mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Current mode is the current mode of operation.
 * @param	Mode is the mode on which the communication between Quad-SPI IP
 * 		Core and Flash Memory is made: can be Extended Mode, Dual Mode, Quad
 * 		Mode.
 *
 * @return	Success if setting the desired mode was OK.
 *
 * @note	None.
 *****************************************************************************/
ErrorCode XQuadSpi_EnableMultiMode (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 CurrentMode, Xuint32 Mode) {

	if (CurrentMode != Mode) {
		if (Mode == 2) { // quad command input
			XQuadSpi_WriteVolatileEnhancedConfigurationRegister (InstancePtr,
					DivRate, CurrentMode, 0x7F);
		}
		else if (Mode == 1) { // dual command input
			XQuadSpi_WriteVolatileEnhancedConfigurationRegister (InstancePtr,
					DivRate, CurrentMode, 0xBF);
		}
		else { // single command input
			XQuadSpi_WriteVolatileEnhancedConfigurationRegister (InstancePtr,
					DivRate, CurrentMode, 0xFF);
		}
	}

	return Success;
}

/******************************************************************************
 * This function enables XiP Mode by performing a Write Volatile Configuration
 * Register instruction, to set VCR.3 to 0, after which performing a fast read
 * instruction to set the specific XiP Mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param   Address is the address from which reading will be performed.
 * @param   Mode is the mode on which reading will be performed (Extended,
 * 		Dual or Quad).
 * @param   Data is the data read from Flash.
 *
 * @return	Success if everything is OK.
 * 			AddressInvalid if an invalid address was selected.
 *
 * @note	None.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_EnableXiP (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 Mode, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteVolatileConfigurationRegister (InstancePtr, DivRate, Mode,
				0x80); // Set bit3 of VCR to 0
	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	if (Mode == 2) { // Set modes
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, FAST_READ); //Command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0); //Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_DataToTxFifo (InstancePtr, 0x7F);//Dummy
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);//Dummy
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 10, 256, 0, 1, 1, 1, 1, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < 256; i++) { // Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}
#endif

/******************************************************************************
 * This function reads a chunk of max. 256 Bytes in XiP Mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param   Address is the address from which reading will be performed.
 * @param   Mode is the mode on which reading will be performed (Extended,
 * 		Dual or Quad).
 * @param   Data is the data read from Flash.
 *
 * @return	Success if everything is OK.
 * 			AddressInvalid if an invalid address was selected.
 *
 * @note	None.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_ReadInXiP (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 Mode, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	if (Mode == 2) { // Set modes
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0); //Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_DataToTxFifo (InstancePtr, 0x7F);//Dummy
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);//Dummy
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 10, 256, 0, 1, 1, 1, 1, 1);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < 256; i++) { // Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}
#endif

/******************************************************************************
 * This function disables XiP Mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param   Address is the address from which reading will be performed.
 * @param   Mode is the mode on which reading will be performed (Extended,
 * 		Dual or Quad).
 * @param   Data is the data read from Flash.
 *
 * @return	Success if everything is OK.
 * 			AddressInvalid if an invalid address was selected.
 *
 * @note	None.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_DisableXiP (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 Mode, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	if (Mode == 2) { // Set modes
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0); //Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);//Dummy
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);//Dummy
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_DataToTxFifo (InstancePtr, 0xFF);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 10, 256, 0, 1, 1, 1, 1, 1);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < 256; i++) { // Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}
#endif

/******************************************************************************
 * Checks if any Write, Program or Erase operation is running.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Current mode is the current mode of operation.
 * @param	Mode is the mode on which the communication between Quad-SPI IP
 * 		Core and Flash Memory is made: can be Extended Mode, Dual Mode, Quad
 * 		Mode.
 *
 * @return	0xFF if Busy.
 * 			0xEF if Not Busy.
 *
 * @note	None.
 *****************************************************************************/
u8 XQuadSpi_CheckBusy (XQuadSpi * InstancePtr, Xuint32 DivRate, Xuint32 Mode) {

	// Read status register
	u8DataRead = XQuadSpi_ReadStatusRegister (InstancePtr, DivRate, Mode);
	u8DataRead &= 0x01;
	if (u8DataRead == 0x01) {
		return 0xFF; // Busy
	}
	else {
		return 0xEF; // Not Busy
	}
}

/******************************************************************************
 * This function reads the Flag Status Register, returning its value as an 8-bit
 * unsigned number. The Flag Status Register has the following structure:
 *
 *   bit 7 = Program/Erase Controller Status
 *   bit 6 = Erase Suspend
 *   bit 5 = Erase Error
 *   bit 4 = Program Error
 *   bit 3 = Vpp Error
 *   bit 2 = Program Suspend
 *   bit 1 = Protection Error
 *   Bit 0 = Reserved
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the communication between Quad-SPI IP
 * 		Core and Flash Memory is made: can be Extended Mode, Dual Mode, Quad
 * 		Mode.
 *
 * @return	The Flag Status Register value read from the memory.
 *
 * @note	This function is available for all three modes.
 *****************************************************************************/
u8 XQuadSpi_ReadFlagStatusRegister (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) { // cmd mode, read mode = 2
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) { // cmd mode, read mode = 1
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {  // cmd mode, read mode = 0
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, RFSR);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 0, 1, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_DataFromRxFifo (InstancePtr); // Read value of register
	u8DataRead = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);

	return u8DataRead;
}

/******************************************************************************
 * This function enables the WEL bit from the Write Latch. This must be done
 * prior to every Program, Erase or Write operation.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the communication between Quad-SPI IP
 * 		Core and Flash Memory is made: can be Extended Mode, Dual Mode, Quad
 * 		Mode.
 *
 * @return	Success if everything was OK.
 *
 * @note	This function is available for all three modes.
 *****************************************************************************/
ErrorCode XQuadSpi_WriteEnable (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) { // cmd_mode = 2
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) { // cmd_mode = 1
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else { // cmd_mode = 0
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, WREN);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 0, 0, 0, 0, 0, 0, 0);

	while (!(u8Status & 0x11)) { // Wait until session ends
		u8Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u8Status &= 0x11;
	}

	return Success;
}

/******************************************************************************
 * This function resets the WEL bit from the Write Latch.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the communication between Quad-SPI IP
 * 		Core and Flash Memory is made: can be Extended Mode, Dual Mode, Quad
 * 		Mode.
 *
 * @return	Success if everything was OK.
 *
 * @note	This function is available for all three modes.
 *****************************************************************************/
ErrorCode XquadSpi_WriteDisable (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode){

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	// Setting modes
	if (Mode == 2) { // cmd_mode = 2
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) { // cmd_mode = 1
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else { // cmd_mode = 0
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, WRDI);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 0, 0, 0, 0, 0, 0, 0);

	while (!(u8Status & 0x11)) { // Wait until session ends
		u8Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u8Status &= 0x11;
	}

	return Success;
}

/******************************************************************************
 * This function allows new values to be written to the Volatile Enhanced
 * Configuration Register. The Volatile Enhanced Configuration Register has the
 * following structure:
 *
 *   bit 7 = Quad Input Command
 *   bit 6 = Dual Input Command
 *   Bit 5 = Reserved
 *   bit 4 = Reset/Hold Disable
 *   bit 3 = Accelerator pin enable
 *   bit 2 to bit 0 = Output Driver Strength
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the communication between Quad-SPI IP
 * 		Core and Flash Memory is made: can be Extended Mode, Dual Mode, Quad
 * 		Mode.
 * @param	Data is the value to write to register.
 *
 * @return	Success if everything was OK.
 *
 * @note	This function is available for all three modes.
 *****************************************************************************/
ErrorCode XQuadSpi_WriteVolatileEnhancedConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode, u8 Data) {

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode); // Enable writing
	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) { // cmd_mode, write_mode = 2
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) { // cmd_mode, write_mode = 1
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else { // cmd_mode, write_mode = 0
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, WRVECR);
	XQuadSpi_DataToTxFifo (InstancePtr, Data);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 1, 0, 0, 0, 0, 0);

	while (!(u8Status & 0x11)) { // Wait until session ends
		u8Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u8Status &= 0x11;
	}

	return Success;
}

/******************************************************************************
 * This function reads Flash Memory's identification data.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Data is the Identification Data read from the memory with the
 * 		following contents:
 * 					Data[0] = Manufacturer Identification
 * 					Data[1] = Memory Type
 * 					Data[2] = Memory Capacity
 * 					Data[3..19] = Unique ID Code (on customer request)
 *
 * @return	Success if everything was OK.
 * 			WrongType if the device isn't the selected one.
 *
 * @note	This function is available only for Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_ReadIdentification (XQuadSpi * InstancePtr, Xuint32 DivRate,
		u8 Data[19]) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's
	XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);// Set modes
	XQuadSpi_DataToTxFifo (InstancePtr, RDID); //instruction command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 20, 0, 1, 0, 0, 0, 0);

	while (!(u8Status & 0x11)) { // Wait until session ends
		u8Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < 20; i++) {
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	if (((Data[0] << 16) | (Data[1] << 8) | Data[2]) == EXPECTED_DEVICE) {
		return Success;
	}
	else {
		return WrongType;
	}
}

/******************************************************************************
 * This function reads Flash Memory's identification data.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	The mode on which the reading will be performed (Dual or Quad).
 * @param	Data is the Identification Data read from the memory with the
 * 		following contents:
 * 					Data[0] = Manufacturer Identification
 * 					Data[1] = Memory Type
 * 					Data[2] = Memory Capacity
 *
 * @return	Success if everything was OK.
 * 			WrongType if the device isn't the selected one.
 *
 * @note	This function is available only for Dual and Quad Modes.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_MultipleIOReadIdentification (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode, u8 Data[2]) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) { // cmd_mode = 2, read_mode = 2
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else { // cmd_mode = 1, read_mode = 1
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, MIORDID); //instruction into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 3, 0, 1, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < 3; i++) {
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	if (((Data[0] << 16) | (Data[1] << 8) | Data[2]) == EXPECTED_DEVICE) {
		return Success;
	}
	else {
		return WrongType;
	}
}
#endif

/******************************************************************************
 * Reads data from the Flash memory.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Address is the starting address from which the reading will be
 * 		performed.
 * @param	NrOfBytes is the number of Bytes to read.
 * @param	Data is the data read from the memory.
 *
 * @return	AddressInvalid if the address is not a valid one.
 * 			Success if everything was OK.
 *
 * @note	This function is available only for Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_Read (XQuadSpi * InstancePtr, Xuint32 DivRate, Xuint32 Address,
		Xuint32 NrOfBytes, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr); //Reset FSM's and FIFO's
	XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);//Set mode
	XQuadSpi_DataToTxFifo (InstancePtr, READ);//Instruction to TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);//Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, NrOfBytes, 0, 1, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { //Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < NrOfBytes; i++) { //Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}

/******************************************************************************
 * Reads data from the Flash memory at faster speed.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	The mode on which the reading will be performed.
 * @param	Address is the start address from which the data will be read.
 * @param	NrOfBytes is the number of bytes to read.
 * @param	NrOfDummyClks is number of dummy clock cycles until data is ready
 * 		to be read.
 * @param	Data is the data read from the memory.
 *
 * @return	AddressInvalid if the address is not a valid one.
 * 			Success if everything was OK.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
ErrorCode XQuadSpi_FastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode, Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks,
		u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	// Set modes
	if (Mode == 2) { // cmd_mode, addr_mode, read_mode = 2
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) { // cmd_mode, addr_mode, read_mode = 1
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else { // cmd_mode, addr_mode, read_mode = 0
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, FAST_READ); //Command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0); //Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, NrOfDummyClks, NrOfBytes,
			0, 1, 1, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < NrOfBytes; i++) { // Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}

/******************************************************************************
 * Reads data from the Flash memory at faster speed with command and address
 * sent in Single mode and data read in Dual mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Address is the start address from which the data will be read.
 * @param	NrOfBytes is the number of bytes to read.
 * @param	NrOfDummyClks is number of dummy clock cycles until data is ready
 * 		to be read.
 * @param	Data is the data read.
 *
 * @return	AddressInvalid if the address is not a valid one.
 * 			Success if everything was OK.
 *
 * @note	This function is available only in Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_DualOutputFastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, DUAL, SINGLE);
	XQuadSpi_DataToTxFifo (InstancePtr, DOFR);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, NrOfDummyClks, NrOfBytes,
				0, 1, 1, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < NrOfBytes; i++) { //Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}

/******************************************************************************
 * Reads data from the Flash memory at faster speed with command and address
 * sent in Dual mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Address is the start address from which the data will be read.
 * @param	NrOfBytes is the number of bytes to read.
 * @param	NrOfDummyClks is number of dummy clock cycles until data is ready
 * 		to be read.
 * @param	Data is the data read.
 *
 * @return	AddressInvalid if the address is not a valid one.
 * 			Success if everything was OK.
 *
 * @note	This function is available only in Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_DualIOFastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	XQuadSpi_DataToTxFifo (InstancePtr, DIOFR);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, NrOfDummyClks, NrOfBytes,
				0, 1, 1, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < NrOfBytes; i++) { //Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}

/******************************************************************************
 * Reads data from the Flash memory at faster speed with command and address
 * sent in Single mode and the data read in Quad mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Address is the start address from which the data will be read.
 * @param	NrOfBytes is the number of bytes to read.
 * @param	NrOfDummyClks is number of dummy clock cycles until data is ready
 * 		to be read.
 * @param	Data is the data read.
 *
 * @return	AddressInvalid if the address is not a valid one.
 * 			Success if everything was OK.
 *
 * @note	This function is available only in Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_QuadOutputFastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's
	XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, QUAD, SINGLE);
	XQuadSpi_DataToTxFifo (InstancePtr, QOFR);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, NrOfDummyClks, NrOfBytes,
				0, 1, 1, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < NrOfBytes; i++) { // Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}

/******************************************************************************
 * Reads data from the Flash memory at faster speed with command and address
 * sent in Quad mode.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Address is the start address from which the data will be read.
 * @param	NrOfBytes is the number of bytes to read.
 * @param	NrOfDummyClks is number of dummy clock cycles until data is ready
 * 		to be read.
 * @param	Data is the data read.
 *
 * @return	AddressInvalid if the address is not a valid one.
 * 			Success if everything was OK.
 *
 * @note	This function is available only in Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_QuadIOFastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes,Xuint32 NrOfDummyClks, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr); // Reset FSM's and FIFO's
	XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	XQuadSpi_DataToTxFifo (InstancePtr, QIOFR);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, NrOfDummyClks, NrOfBytes,
				0, 1, 1, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < NrOfBytes; i++) { //Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}

/******************************************************************************
 * This function reads the Flash OTP(One Time Programming) area.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the reading will be performed.
 * @param	Address is the start address from which the data will be read.
 * @param	NrOfBytes is the number of bytes to read.
 * @param	NrOfDummyClks is number of dummy clock cycles until data is ready
 * 		to be read.
 * @param	Data is the data read.
 *
 * @return	AddressInvalid if the address is not a valid one.
 * 			Success if everything was OK.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_ReadOTP (XQuadSpi * InstancePtr, Xuint32 DivRate, Xuint32 Mode,
		Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks, u8 Data[65]) {

	if(!(Address < FLASH_OTP_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr);

	// Set modes
	if (Mode == 2) { // cmd_mode, addr_mode, read_mode = 2
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) { // cmd_mode, addr_mode, read_mode = 1
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else { // cmd_mode, addr_mode, read_mode = 0
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, ROTP);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, NrOfDummyClks, NrOfBytes,
				0, 1, 1, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < NrOfBytes; i++) { //Read data
		XQuadSpi_DataFromRxFifo (InstancePtr);
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}
#endif

/******************************************************************************
 * This function writes a chunk of data into the memory at one go. This function
 * assumes that the memory to be programmed has been previously erased or that
 * bits are only changed from 1 to 0.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be performed.
 * @param	Address is the start address from which the data will be written.
 * @param	NrOfBytes is the number of bytes to write.
 * @param	Data is the data to write.
 *
 * @return	Success if writing was OK.
 * 			AddressInvalid if the address is not a valid one.
 * 			NoInformationAvailable if the OTP area is not readable.
 * 			WriteTimeOut if writing reached the time-out limit.
 * 			ProgramFailed if the OTP area is no writable.
 *
 * @note	This function is available in all modes.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_ProgramOTP (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode,Xuint32 Address, Xuint32 NrOfBytes,
		u8 Data[65]) {

	u8 arru8OTPRead[65];

	if(!(Address < FLASH_OTP_SIZE)) { // Check if Address is valid
		return AddressInvalid;
	}

	if (!(Success != XQuadSpi_ReadOTP (InstancePtr, DivRate, Mode, 0, 65, 8,
			arru8OTPRead))) {
		return NoInformationAvailable;
	}

	if ((arru8OTPRead[64] && 0x01) == 1) {

		u8Addr2 = Address;
		u8Addr1 = (Address >> 8);
		u8Addr0 = (Address >> 16);

		XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode);
		XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
		XQuadSpi_ResetTimer(InstancePtr); // Reset counter

		if (Mode == 2) { // cmd mode, addr mode, write mode = 2
			XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
		}
		else if (Mode == 1) { // cmd mode, addr mode, write mode = 1
			XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
		}
		else { // cmd mode, addr mode, write mode = 0
			XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
		}

		XQuadSpi_DataToTxFifo (InstancePtr, POTP); // Command into TxFIFO
		XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
		XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
		XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);

		for (i = 0; i < NrOfBytes; i++) { // Data to write into TxFIFO
			XQuadSpi_DataToTxFifo(InstancePtr, Data[i]);
		}

		XQuadSpi_StartCycle(InstancePtr, DivRate, 0, NrOfBytes, 1, 0, 0, 1, 0, 0);
		while (!(u32Status & 0x11)) { // Wait until session ends
			u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
			u32Status &= 0x11;
		}

		XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, OTP_TIMEOUT);

		do { // Wait until write ends
			u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, Mode);
			u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
			if (u8TimerReturnType) { // Time-Out limit reached
				return WriteTimeOut;
			}
		}
		while (u8ReturnType == 0xFF);

		return Success;
	}
	else { // OTP area not writable
		return ProgramFailed;
	}
}
#endif

/******************************************************************************
 * This function writes a chunk of data into the memory at one go. This function
 * assumes that the memory to be programmed has been previously erased or that
 * bits are only changed from 1 to 0.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 * @param 	Type represents the type of page program: 0x00 - Legacy Program
 * 													  0x01 - Bit-Alterable
 * 													  0x02 - On all 1's
 * @param	Address is the start address from which the data will be read.
 * @param	NrOfBytes is the number of bytes to read.
 * @param	Data is the data to write.
 *
 * @return	Success if everything was OK.
 * 			AddressInvalid if the address is not a valid one.
 * 			PageOverflow if the maximum page size was over-sized.
 * 			WriteTimeOut if writing reached the time-out limit.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
ErrorCode XQuadSpi_PageProgram (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode, Xuint32 Type, Xuint32 Address,
		Xuint32 NrOfBytes, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) { // Check if Address is valid
		return AddressInvalid;
	}

	if (!(NrOfBytes <= FLASH_WRITE_MAX_SIZE)) {
		return PageOverflow;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode);// Enable writing
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter

	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	if (Type == 0x02) { // On all 1's
		XQuadSpi_DataToTxFifo (InstancePtr, PP_ALL_1);
	}
	else if (Type == 0x01) { // Bit-Alterable
		XQuadSpi_DataToTxFifo (InstancePtr, PP_BIT_ALT);
	}
	else { // Legacy Program
		XQuadSpi_DataToTxFifo (InstancePtr, PP);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);

	for (i = 0; i < NrOfBytes; i++) { // Data to write into TxFIFO
		XQuadSpi_DataToTxFifo(InstancePtr, Data[i]);
	}

	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, NrOfBytes, 1, 0, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, PP_TIMEOUT);

	do { // Wait until write ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, Mode);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return WriteTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}

/******************************************************************************
 * This function writes a chunk of data into the memory at one go. This function
 * assumes that the memory to be programmed has been previously erased or that
 * bits are only changed from 1 to 0.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param 	Type represents the type of page program: 0x00 - Legacy Program
 * 													  0x01 - Bit-Alterable
 * 													  0x02 - On all 1's
 * @param	Address is the start address from which the data will be written.
 * @param	NrOfBytes is the number of bytes to write.
 * @param	Data is the data to write.
 *
 * @return	Success if everything was OK.
 * 			AddressInvalid if the address is not a valid one.
 * 			PageOverflow if the maximum page size was over-sized.
 * 			WriteTimeOut if writing reached the time-out limit.
 *
 * @note	This function is available only in Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_DualInputFastProgram (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Type, Xuint32 Address,
		Xuint32 NrOfBytes, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) { // Check if Address is valid
		return AddressInvalid;
	}

	if (!(NrOfBytes <= FLASH_WRITE_MAX_SIZE)) {
		return PageOverflow;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, 0);
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, DUAL);
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter

	if (Type == 0x02) { // On all 1's
		XQuadSpi_DataToTxFifo (InstancePtr, DIFP_ALL_1);
	}
	else if (Type == 0x01) { //Bit-Alterable
		XQuadSpi_DataToTxFifo (InstancePtr, DIFP_BIT_ALT);
	}
	else { // Legacy Program
		XQuadSpi_DataToTxFifo (InstancePtr, DIFP);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);

	for (i = 0; i < NrOfBytes; i++) { // Data to write into TxFIFO
		XQuadSpi_DataToTxFifo(InstancePtr, Data[i]);
	}

	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, NrOfBytes, 1, 0, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, PP_TIMEOUT);

	do { // Wait until write ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, 0);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return WriteTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}

/******************************************************************************
 * This function writes a chunk of data into the memory at one go. This function
 * assumes that the memory to be programmed has been previously erased or that
 * bits are only changed from 1 to 0.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Address is the start address from which the data will be written.
 * @param	NrOfBytes is the number of bytes to write.
 * @param	Data is the data to write.
 *
 * @return	Success if everything was OK.
 * 			AddressInvalid if the address is not a valid one.
 * 			PageOverflow if the maximum page size was over-sized.
 * 			WriteTimeOut if writing reached the time-out limit.
 *
 * @note	This function is available only in Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_DualInputExtendedFastProgram (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Address, Xuint32 NrOfBytes,
		u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) { // Check if Address is valid
		return AddressInvalid;
	}

	if (!(NrOfBytes <= FLASH_WRITE_MAX_SIZE)) {
		return PageOverflow;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, 0);
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_SetModes(InstancePtr, SINGLE, DUAL, SINGLE, DUAL);
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter
	XQuadSpi_DataToTxFifo (InstancePtr, DIEFP); // Command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);

	for (i = 0; i < NrOfBytes; i++) { // Data to write into TxFIFO
		XQuadSpi_DataToTxFifo(InstancePtr, Data[i]);
	}

	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, NrOfBytes, 1, 0, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, PP_TIMEOUT);

	do { // Wait until write ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, 0);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return WriteTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}

/******************************************************************************
 * This function writes a chunk of data into the memory at one go. This function
 * assumes that the memory to be programmed has been previously erased or that
 * bits are only changed from 1 to 0.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param 	Type represents the type of page program: 0x00 - Legacy Program
 * 													  0x01 - Bit-Alterable
 * 													  0x02 - On all 1's
 * @param	Address is the start address from which the data will be written.
 * @param	NrOfBytes is the number of bytes to write.
 * @param	Data is the data to write.
 *
 * @return	Success if everything was OK.
 * 			AddressInvalid if the address is not a valid one.
 * 			PageOverflow if the maximum page size was over-sized.
 * 			WriteTimeOut if writing reached the time-out limit.
 *
 * @note	This function is available only in Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_QuadInputFastProgram (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Type, Xuint32 Address,
		Xuint32 NrOfBytes, u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) { // Check if Address is valid
		return AddressInvalid;
	}

	if (!(NrOfBytes <= FLASH_WRITE_MAX_SIZE)) {
		return PageOverflow;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, 0);
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter
	XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, QUAD);

	if (Type == 0x02) { // On all 1's
		XQuadSpi_DataToTxFifo (InstancePtr, QIFP_ALL_1);
	}
	else if (Type == 0x01) { // Bit-Alterable
		XQuadSpi_DataToTxFifo (InstancePtr, QIFP_BIT_ALT);
	}
	else { // Legacy Program
		XQuadSpi_DataToTxFifo (InstancePtr, QIFP);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);

	for (i = 0; i < NrOfBytes; i++) { // Data to write into TxFIFO
		XQuadSpi_DataToTxFifo(InstancePtr, Data[i]);
	}

	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, NrOfBytes, 1, 0, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, PP_TIMEOUT);

	do { // Wait until write ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, 0);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return WriteTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}

/******************************************************************************
 * This function writes a chunk of data into the memory at one go. This function
 * assumes that the memory to be programmed has been previously erased or that
 * bits are only changed from 1 to 0.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Address is the start address from which the data will be written.
 * @param	NrOfBytes is the number of bytes to write.
 * @param	Data is the data to write.
 *
 * @return	Success if everything was OK.
 * 			AddressInvalid if the address is not a valid one.
 * 			PageOverflow if the maximum page size was over-sized.
 * 			WriteTimeOut if writing reached the time-out limit.
 *
 * @note	This function is available only in Extended Mode.
 *****************************************************************************/
ErrorCode XQuadSpi_QuadInputExtendedFastProgram (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Address, Xuint32 NrOfBytes,
		u8 Data[256]) {

	if(!(Address < FLASH_SIZE)) { // Check if Address is valid
		return AddressInvalid;
	}

	if (!(NrOfBytes <= FLASH_WRITE_MAX_SIZE)) {
		return PageOverflow;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, 0);
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter
	XQuadSpi_SetModes(InstancePtr, SINGLE, QUAD, SINGLE, QUAD);
	XQuadSpi_DataToTxFifo (InstancePtr, QIEFP); // Command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);

	for (i = 0; i < NrOfBytes; i++) { // Data to write into TxFIFO
		XQuadSpi_DataToTxFifo(InstancePtr, Data[i]);
	}

	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, NrOfBytes, 1, 0, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, PP_TIMEOUT);

	do { // Wait until write ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, 0);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return WriteTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}

/******************************************************************************
 * This function erases a SubSector of data from Flash Memory.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the data will be erased: can be Extended
 * 		Mode, Dual Mode, Quad Mode.
 * @param	Address is the start address from which the data will be erased.
 *
 * @return	Success if writing was OK.
 * 			EraseTimeOut if erasing took longer than it should be.
 * 			AddressOutOfRange if the address if out of Bottom/Top area.
 * 			AddressInvalid if the address is not at the beginning of a
 * 		subsector.
 *
 * @note	This function is available in all modes.
 * 			This function does not check whether the target memory area is in
 * 		a Software Protection Mode(SPM) or Hardware Protection Mode(HPM), in
 * 		which case the PP Instruction will be ignored. It assumes that the
 * 		target memory area has previously been unprotected at both the hardware
 * 		and software levels.
 * 			This function is only available on the Bottom (Top) boot sectors,
 * 		and is not available in uniform architecture parts.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_SubsectorErase (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode, Xuint32 Address) {

	u32CheckAddrRez = Address % FLASH_SUBSECTOR_SIZE;
	if (u32CheckAddrRez) {
		return AddressInvalid; // Check if Address is valid
	}
	if(((Address < FLASH_TOP_AREA_LIMIT) &&
		(Address > FLASH_BOTTOM_AREA_LIMIT)) ||
		(Address > FLASH_SIZE)) {
		return AddressOutOfRange; // Check if Address is in range
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode); // Enable writing
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, SSE); // Command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 0, 0, 0, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, SSE_TIMEOUT);

	do { // Wait until erase ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, Mode);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return EraseTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}
#endif

/******************************************************************************
 * This function erases a Sector of data from Flash Memory.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the data will be erased: can be Extended
 * 		Mode, Dual Mode, Quad Mode.
 * @param	Address is the start address from which the data will be erased.
 *
 * @return	Success if writing was OK.
 * 			EraseTimeOut if erasing took longer than it should be.
 * 			AddressOutOfRange if the address if out of supported range.
 * 			AddressInvalid if the address is not at the beginning of a sector.
 *
 * @note	This function is available in all modes.
 * 			This function does not check whether the target memory area is in
 * 		a Software Protection Mode(SPM) or Hardware Protection Mode(HPM), in
 * 		which case the PP Instruction will be ignored. It assumes that the
 * 		target memory area has previously been unprotected at both the hardware
 * 		and software levels.
 *****************************************************************************/
ErrorCode XQuadSpi_SectorErase (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode, Xuint32 Address) {

	u32CheckAddrRez = Address % FLASH_SECTOR_SIZE;
	if (u32CheckAddrRez) {
		return AddressInvalid; // Check if Address is valid
	}
	if(!(Address < FLASH_SIZE)) { // Check if Address is in range
		return AddressOutOfRange;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode); // Enable writing
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, SE); // Command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 0, 0, 0, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, SE_TIMEOUT);

	do { // Wait until erase ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, Mode);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return EraseTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}

/******************************************************************************
 * This function erases the whole Flash Memory.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the data will be erased: can be Extended
 * 		Mode, Dual Mode, Quad Mode.
 *
 * @return	Success if writing was OK.
 * 			EraseTimeOut if erasing took longer than it should be.
 *
 * @note	This function is available in all modes.
 * 			This function does not check whether the target memory area is in
 * 		a Software Protection Mode(SPM) or Hardware Protection Mode(HPM), in
 * 		which case the PP Instruction will be ignored. It assumes that the
 * 		target memory area has previously been unprotected at both the hardware
 * 		and software levels.
 *****************************************************************************/
ErrorCode XQuadSpi_BulkErase (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode) {

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode); // Enable writing
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, BE); // Command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 0, 0, 0, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, BE_TIMEOUT);

	do { // Wait until erase ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, Mode);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return EraseTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}

/******************************************************************************
 * Read the Status Register. Its structure is the following:
 *
 *   bit 7 = Status register write protect
 *   bit 6 = Block protect 3
 *   bit 5 = Top/Bottom bit
 *   bit 4 = Block protect 2
 *   bit 3 = Block protect 1
 *   bit 2 = Block protect 0
 *   bit 1 = Write enable latch
 *   bit 0 = Write in progress
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 *
 * @return	Status Register's value.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
u8 XQuadSpi_ReadStatusRegister (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) { // cmd_mode, read_mode = 2
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) { // cmd_mode, read_mode = 1
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else { // cmd_mode, read_mode = 0
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, RDSR);//command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 0, 1, 0, 0, 0, 0);

	while (!(u8Status & 0x11)) { // Wait until session ends
		u8Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_DataFromRxFifo (InstancePtr);// read data
	u8DataRead = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);

	return u8DataRead;
}

/******************************************************************************
 * This function modifies the Status Register.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	ClkValueMHz is the value of the System Clock, in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 * @param	Data is the 8-bit data to write.
 *
 * @return	Success if everything was OK.
 * 			WriteTimeOut if writing took longer than it should be.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
ErrorCode XQuadSpi_WriteStatusRegister (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode, u8 Data) {

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode); // Enable writing
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, WRDSR);//command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, Data);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 1, 0, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, WRST_TIMEOUT);

	do { // Wait until writing ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, Mode);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return WriteTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}

/******************************************************************************
 * This function is used to read the Sector/Subsector Lock Register.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 * @param	Address is the address from which the reading will be performed.
 *
 * @return	Lock Register's value.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
u8 XQuadSpi_ReadLockRegister (XQuadSpi * InstancePtr, Xuint32 DivRate, Xuint32 Mode,
		Xuint32 Address) {

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, RDLR); // Command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 0, 1, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_DataFromRxFifo (InstancePtr);// read data
	u8DataRead = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);

	return u8DataRead;
}

/******************************************************************************
 * This function is used to write the Sector/Subsector Lock Register.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 * @param	Address is the address from which the reading will be performed.
 * @param	Data is the data to be written to the Lock Register.
 *
 * @return	Success if everything was OK.
 * 			AddressInvalid if the address is no a valid one.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
ErrorCode XQuadSpi_WriteToLockRegister (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode, Xuint32 Address, u8 Data) {

	if(!(Address < FLASH_SIZE)) {
		return AddressInvalid;
	}

	u8Addr2 = Address;
	u8Addr1 = (Address >> 8);
	u8Addr0 = (Address >> 16);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode);
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's

	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, WRLR); // Command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr0);// Address into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr1);
	XQuadSpi_DataToTxFifo (InstancePtr, u8Addr2);
	XQuadSpi_DataToTxFifo (InstancePtr, Data);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 1, 0, 0, 1, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	return Success;
}

/******************************************************************************
 * This function is used to reset the error Flag Status Register bits.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 *
 * @return	Success if everything was OK.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
ErrorCode XQuadSpi_ClearFlagStatusRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's

	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, CLFSR); // Command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 0, 0, 0, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	return Success;
}

/******************************************************************************
 * This function reads the Non Volatile Configuration Register.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 * @param	Data is the data read from the NV Configuration Register.
 *
 * @return	Success if everything was OK.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
ErrorCode XQuadSpi_ReadNVConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode, u8 Data[2]) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, RDNVCR); // Command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 2, 0, 1, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	for (i = 0; i < 2; i++) {
		XQuadSpi_DataFromRxFifo (InstancePtr);// read data
		Data[i] = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);
	}

	return Success;
}

/******************************************************************************
 * This function modifies the Non Volatile Configuration Register.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param   ClkValueMHz is the value of the System Clock in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 * @param	Data is the data read from the NV Configuration Register.
 *
 * @return	Success if everything was OK.
 * 			WriteTimeOut if writing took longer than it should be.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_WriteNVConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Mode, Xuint32 Data) {

	u8 u8DataSecondByte;
	u8 u8DataFirstByte;

	u8DataSecondByte = Data;
	u8DataFirstByte = (Data >> 8);

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode); // Enable writing
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, WRNVCR);//command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, u8DataFirstByte);
	XQuadSpi_DataToTxFifo (InstancePtr, u8DataSecondByte);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 2, 1, 0, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, WRNV_TIMEOUT);

	do { // Wait until writing ends
		u8ReturnType = XQuadSpi_CheckBusy (InstancePtr, DivRate, Mode);
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
		if (u8TimerReturnType) { // Time-Out limit reached
			return WriteTimeOut;
		}
	}
	while (u8ReturnType == 0xFF);

	return Success;
}
#endif

/******************************************************************************
 * This function reads the Volatile Configuration Register.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 *
 * @return	Data read from the Volatile Configuration Register.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
#ifdef USE_N25Q128
u8 XQuadSpi_ReadVolatileConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes (InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes (InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, RDVCR);//command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 0, 1, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_DataFromRxFifo (InstancePtr);// read data
	u8DataRead = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);

	return u8DataRead;
}
#endif

/******************************************************************************
 * This function modifies the Non Volatile Configuration Register.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 * @param	Data is the data read from the NV Configuration Register.
 *
 * @return	Success if everything was OK.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
#ifdef USE_N25Q128
ErrorCode XQuadSpi_WriteVolatileConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode, u8 Data) {

	XQuadSpi_WriteEnable (InstancePtr, DivRate, Mode); // Enable writing
	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, WRVCR);//command into TxFIFO
	XQuadSpi_DataToTxFifo (InstancePtr, Data);
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 1, 0, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	return Success;
}
#endif

/******************************************************************************
 * This function reads the Volatile Configuration Register.
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 * @param	Mode is the mode on which the writing will be done.
 *
 * @return	Data read from the Volatile Configuration Register.
 *
 * @note	This function is available for all modes.
 *****************************************************************************/
#ifdef USE_N25Q128
u8 XQuadSpi_ReadVolatileEnhancedConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's

	// Set modes
	if (Mode == 2) {
		XQuadSpi_SetModes(InstancePtr, QUAD, QUAD, QUAD, QUAD);
	}
	else if (Mode == 1) {
		XQuadSpi_SetModes(InstancePtr, DUAL, DUAL, DUAL, DUAL);
	}
	else {
		XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	}

	XQuadSpi_DataToTxFifo (InstancePtr, WRDSR);//command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 1, 0, 1, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_DataFromRxFifo (InstancePtr);// read data
	u8DataRead = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);

	return u8DataRead;
}
#endif

/******************************************************************************
 * This function puts the device in the lowest consumption mode (the Deep
 * Power-down mode).
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param   ClkValueMHz is the value of the System Clock in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 *
 * @return	Success if everything is OK.
 *
 * @note	After calling this routine, the Flash memory will not respond to
 * 		any subsequent Instruction except for the Release from Deep Power-Down
 * 		Instruction.
 *****************************************************************************/
#if defined (USE_M25P40) || defined (USE_M25P16)
ErrorCode XQuadSpi_DeepPowerDown (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_SetModes(InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	XQuadSpi_DataToTxFifo (InstancePtr, DP);//command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 0, 0, 0, 0, 0, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, WAIT_DP);

	do { // Wait until Deep Power-Down is active
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
	}
	while (u8TimerReturnType);

	return Success;
}
#endif

/******************************************************************************
 * This function puts the device in the lowest consumption mode (the Deep
 * Power-down mode).
 *
 * @param	InstancePtr is a pointer to an XQuadSpi instance.
 * @param   ClkValueMHz is the value of the system Clock in MHz.
 * @param	DivRate is the divide rate of the System Clock, for generating
 * 		Serial Clock.
 *
 * @return	Success if everything is OK.
 *
 * @note	After calling this routine, the Flash memory will not respond to
 * 		any subsequent Instruction except for the Release from Deep Power-Down
 * 		Instruction.
 *****************************************************************************/
#if defined (USE_M25P40) || defined (USE_M25P16)
u8 XQuadSpi_ReleaseFromDeepPowerDown (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate) {

	XQuadSpi_ResetFsmAndFifo (InstancePtr);// Reset FSM's and FIFO's
	XQuadSpi_ResetTimer(InstancePtr); // Reset counter
	XQuadSpi_SetModes (InstancePtr, SINGLE, SINGLE, SINGLE, SINGLE);
	XQuadSpi_DataToTxFifo (InstancePtr, RDP);//command into TxFIFO
	XQuadSpi_StartCycle(InstancePtr, DivRate, 24, 1, 0, 1, 1, 0, 0, 0);

	while (!(u32Status & 0x11)) { // Wait until session ends
		u32Status = XQuadSpi_ReadReg(InstancePtr, STATUS_REG);
		u32Status &= 0x11;
	}

	XQuadSpi_DataFromRxFifo (InstancePtr);// read data
	u8DataRead = XQuadSpi_ReadReg(InstancePtr, DATA_OUT_REG);

	XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, WAIT_RDP);
	do { // Wait
		u8TimerReturnType = XQuadSpi_PollTimer(InstancePtr);
	}
	while (u8ReturnType == 0xFF);

	return u8DataRead;
}
#endif




