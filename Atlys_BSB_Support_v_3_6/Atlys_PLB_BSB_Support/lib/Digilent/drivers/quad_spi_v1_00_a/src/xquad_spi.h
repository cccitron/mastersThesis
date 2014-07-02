/******************************************************************************
 * @file xquad_spi.h
 *
 * This header file contains identifiers and driver functions (or
 * macros) that can be used to access the device.  The user should refer to the
 * hardware device specification for more details of the device operation.
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

#ifndef XQUAD_SPI_H	/* prevent circular inclusions */
#define XQUAD_SPI_H	/* by using protection macros */

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/

#include <stdio.h>
#include "xquad_spi_l.h"
#include "xil_assert.h"
#include "xparameters.h"

/**************************** Type Definitions *******************************/

typedef struct {
	Xuint32 BaseAddress;
} XQuadSpi_Config;

typedef struct {
	Xuint32 BaseAddress; /* Device base address */
} XQuadSpi;

/************************** Function Prototypes ******************************/

ErrorCode XQuadSpi_CfgInitialize(XQuadSpi * InstancePtr);


char * XQuadSpi_ErrorStr (ErrorCode rErrNum);
ErrorCode XQuadSpi_EnableMultiMode (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 CurrentMode, Xuint32 Mode);
ErrorCode XQuadSpi_EnableXiP (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 Mode, u8 Data[256]);
ErrorCode XQuadSpi_ReadInXiP (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 Mode, u8 Data[256]);
ErrorCode XQuadSpi_DisableXiP (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 Mode, u8 Data[256]);
u8 XQuadSpi_CheckBusy (XQuadSpi * InstancePtr, Xuint32 DivRate, Xuint32 Mode);
ErrorCode XQuadSpi_ReadIdentification (XQuadSpi * InstancePtr, Xuint32 DivRate,
		u8 Data[19]);
ErrorCode XQuadSpi_MultipleIOReadIdentification (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode, u8 Data[2]);
ErrorCode XQuadSpi_Read (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes, u8 Data[256]);
ErrorCode XQuadSpi_FastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode, Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks,
		u8 Data[256]);
ErrorCode XQuadSpi_DualOutputFastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks, u8 Data[256]);
ErrorCode XQuadSpi_DualIOFastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks, u8 Data[256]);
ErrorCode XQuadSpi_QuadOutputFastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks, u8 Data[256]);
ErrorCode XQuadSpi_QuadIOFastRead (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Address, Xuint32 NrOfBytes,Xuint32 NrOfDummyClks, u8 Data[256]);
ErrorCode XQuadSpi_ReadOTP (XQuadSpi * InstancePtr, Xuint32 DivRate, Xuint32 Mode,
		Xuint32 Address, Xuint32 NrOfBytes, Xuint32 NrOfDummyClks, u8 Data[65]);
ErrorCode XQuadSpi_WriteEnable (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode);
ErrorCode XQuadSpi_WriteDisable (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode);
ErrorCode XQuadSpi_PageProgram (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode, Xuint32 Type, Xuint32 Address,
		Xuint32 NrOfBytes, u8 Data[256]);
ErrorCode XQuadSpi_DualInputFastProgram (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Type, Xuint32 Address,
		Xuint32 NrOfBytes, u8 Data[256]);
ErrorCode XQuadSpi_DualInputExtendedFastProgram (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Address, Xuint32 NrOfBytes,
		u8 Data[256]);
ErrorCode XQuadSpi_QuadInputFastProgram (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Type, Xuint32 Address,
		Xuint32 NrOfBytes, u8 Data[256]);
ErrorCode XQuadSpi_QuadInputExtendedFastProgram (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Address, Xuint32 NrOfBytes,
		u8 Data[256]);
ErrorCode XQuadSpi_ProgramOTP (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode,Xuint32 Address, Xuint32 NrOfBytes,
		u8 Data[65]);
ErrorCode XQuadSpi_SubsectorErase (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode, Xuint32 Address);
ErrorCode XQuadSpi_SectorErase (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode, Xuint32 Address);
ErrorCode XQuadSpi_BulkErase (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode);
ErrorCode XQuadSpi_ProgramEraseSuspend (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 CurrentMode, Xuint32 Mode);
ErrorCode XQuadSpi_ProgramEraseResume (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 CurrentMode, Xuint32 Mode);
u8 XQuadSpi_ReadStatusRegister (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode);
ErrorCode XQuadSpi_WriteStatusRegister (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz,
		Xuint32 DivRate, Xuint32 Mode, u8 Data);
u8 XQuadSpi_ReadLockRegister (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode, Xuint32 Address);
ErrorCode XQuadSpi_WriteToLockRegister (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode, Xuint32 Address, u8 Data);
u8 XQuadSpi_ReadFlagStatusRegister (XQuadSpi * InstancePtr, Xuint32 DivRate,
		Xuint32 Mode);
ErrorCode XQuadSpi_ClearFlagStatusRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode);
ErrorCode XQuadSpi_ReadNVConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode, u8 Data[2]);
ErrorCode XQuadSpi_WriteNVConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate, Xuint32 Mode, Xuint32 Data);
u8 XQuadSpi_ReadVolatileConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode);
ErrorCode XQuadSpi_WriteVolatileConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode, u8 Data);
u8 XQuadSpi_ReadVolatileEnhancedConfigurationRegister (XQuadSpi * InstancePtr,
		Xuint32 DivRate, Xuint32 Mode);
ErrorCode XQuadSpi_WriteVolatileEnhancedConfigurationRegister
		(XQuadSpi * InstancePtr, Xuint32 DivRate, Xuint32 Mode, u8 Data);
ErrorCode XQuadSpi_DeepPowerDown (XQuadSpi * InstancePtr, Xuint32 ClkValueMHz,
		Xuint32 DivRate);
u8 XQuadSpi_ReleaseFromDeepPowerDown (XQuadSpi * InstancePtr,
		Xuint32 ClkValueMHz, Xuint32 DivRate);



#ifdef __cplusplus
}
#endif

#endif /* end of protection macro */

