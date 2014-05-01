/******************************************************************************
 * @file xquad_spi_l.h
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

#ifndef XQUAD_SPI_L_H	/* prevent circular inclusions */
#define XQUAD_SPI_L_H	/* by using protection macros */

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/

#include "xio.h"
#include "xbasic_types.h"

/************************** Constant Definitions *****************************/

/*
 * Select one of the following memory type to enable its functions
 *
 * 	 #define USE_N25Q128
 *   #define USE_M25P40
 *   #define USE_M25P16
 *   #define USE_P5Q
 */

#define USE_N25Q128

#define VERBOSE	/* activates additional routines */

/* @name Registers
 *
 * Register offsets for this device
 * @{
 */

#define RESET_REG				0x00
#define STATUS_REG				0x04
#define OCCUPANCY_RXFIFO_REG	0x08
#define OCCUPANCY_TXFIFO_REG	0x0C
#define CONTROL_CYCLE_REG		0x10
#define DATA_IN_REG				0x14
#define DATA_OUT_REG			0x18
#define CONTROL_FIFO_REG		0x1C
#define MODES_REG				0x20
#define COUNTER_CONTROL_REG     0x24
#define COUNTER_END_VALUE_REG   0x28
#define COUNTER_STATUS_REG      0x2C

/* @} */

/* @name Modes
 * @{
 */

#define QUAD	0x02
#define DUAL	0x01
#define SINGLE	0x00

/* @} */

/* @name Commands
 *
 * Command for Flash operation
 * @{
 */

enum {
	RDID	  		=	0x9F, /* read identification */
	READ	  		=	0x03, /* read data bytes */
	MIORDID	  		=	0xAF, /* multiple i/o read identification */
	ROTP	  		=	0x4B, /* read OTP */
	WREN	  		=	0x06, /* write enable */
	WRDI	  		=	0x04, /* write disable */
	POTP	  		=	0x42, /* program OTP */
	SSE		  		=	0x20, /* subsector erase */
	SE		  		=	0xD8, /* sector erase */
	BE		  		=	0xC7, /* bulk erase */
	PER		  		=	0x7A, /* program/erase resume */
	PES		  		=	0x75, /* program/erase suspend */
	RDSR	  		=	0x05, /* read status register */
	WRDSR	  		=	0x01, /* write status register */
	RDLR	  		=	0xE8, /* read lock register */
	WRLR	  		=	0xE5, /* write to lock register */
	RFSR	  		=	0x70, /* read flag status register */
	CLFSR	  		=	0x50, /* clear flag status register */
	RDNVCR	  		=	0xB5, /* read non volatile configuration register */
	WRNVCR	  		=	0xB1, /* write non volatile configuration register */
	RDVCR	  		=	0x85, /* read volatile configuration register */
	WRVCR	  		=	0x81, /* write volatile configuration register */
	RDVECR	  		=	0x65, /* read volatile enhanced configuration register */
	WRVECR	  		=	0x61, /* write volatile enhanced configuration register */
	FAST_READ 		=	0x0B, /* read data bytes at higher speed */
	DOFR	  		=	0x3B, /* dual output fast read */
	DIOFR	  		=	0xBB, /* dual input/output fast read */
	QOFR	  		=	0x6B, /* quad output fast read */
	QIOFR	  		=	0xEB, /* quad input/output fast read */
	PP		  		= 	0x02, /* page program */
	PP_BIT_ALT 		= 	0x22, /* page program, bit-alterable */
	PP_ALL_1		= 	0xD1, /* page program, on all 1's */
	DIFP	  		=	0xA2, /* dual input fast read */
	DIFP_BIT_ALT	=	0xD3, /* dual input fast read, bit-alterable */
	DIFP_ALL_1		=	0xD5, /* dual input fast read, on all 1's */
	DIEFP	  		=	0xD2, /* dual input extended fast program */
	QIFP	  		=	0x32, /* quad input fast program */
	QIFP_BIT_ALT	=	0xD7, /* quad input fast program, bit-alterable */
	QIFP_ALL_1		=	0xD9, /* quad input fast program, on all 1's */
	QIEFP	  		=	0x12, /* quad input extended fast program */
	DP		  		= 	0xB9, /* deep power-down */
	RDP		  		= 	0xAB  /* release from deep power-down */
};

/* @} */

/* @name Error Codes
 *
 * @{
 */

typedef enum {
	Success,
	AddressInvalid,
	AddressOutOfRange,
	PageOverflow,
	NoInformationAvailable,
	ProgramFailed,
	WrongType,
	EraseTimeOut,
	WriteTimeOut
} ErrorCode;

/* @} */

/*
 * @name N25Q128 memory settings
 *
 * @{
 */

#ifdef USE_N25Q128	/* using N25Q128 type Flash memory */
	#define EXPECTED_DEVICE			(0x20BA18)	/* Device Identification */
	#define FLASH_SIZE				(0x1000000)	/* 128Mbits */
	#define FLASH_OTP_SIZE			(0x40)		/* OTP size of the device (64B)*/
	#define FLASH_SUBSECTOR_SIZE 	(0x1000)	/* SubSector Size in Bytes (4kB)*/
	#define FLASH_SECTOR_SIZE 		(0x10000)   /* Sector Size in Bytes (64kB)*/
	#define FLASH_WRITE_MAX_SIZE  	(0x100)    	/* Write Buffer = 256 bytes */
    #define FLASH_BOTTOM_AREA_LIMIT (0x7FFFF)	/* Limit address of Bottom Area */
	#define FLASH_TOP_AREA_LIMIT    (0xF80000)	/* Limit address of Top Area */
	#define WRST_TIMEOUT			(8000)		/* Timeout for Write Status
												   Register */
	#define WRNV_TIMEOUT 			(3000000)	/* Timeout for Write NV
												   Configuration Register */
	#define OTP_TIMEOUT				(1000)		/* Timeout for Program OTP */
	#define PP_TIMEOUT				(5000)		/* Timeout for Page Program */
	#define SSE_TIMEOUT				(2000000)	/* Timeout for Subsector Erase
												   (value in microseconds) */
	#define SE_TIMEOUT				(3000000)	/* Timeout for Sector Erase
												   (value in microseconds) */
	#define BE_TIMEOUT				(250000000)	/* Timeout for Bulk Erase
												   (value in microseconds) */
#endif

/* @} */

/*
 * @name M25P40 memory settings
 *
 * @{
 */

#ifdef USE_M25P40	/* using M25P40 type Flash memory */
	#define EXPECTED_DEVICE			(0x202013)	/* Device Identification */
	#define FLASH_SIZE				(0x80000)	/* 4Mbit */
	#define FLASH_SECTOR_SIZE 		(0x10000)   /* Sector Size in Bytes (64kB)*/
	#define FLASH_WRITE_MAX_SIZE  	(0x100)    	/* Write Buffer = 256 bytes */
	#define WAIT_DP					(3)			/* Time to wait until Deep Power-
												   Down is activated */
	#define WAIT_RDP				(30)		/* Time to wait releases from Deep
												   Power-Down */
	#define WRST_TIMEOUT			(15000)		/* Timeout for Write Status
												   Register */
	#define PP_TIMEOUT				(5000)		/* Timeout for Page Program */
	#define SE_TIMEOUT				(3000000)	/* Timeout for Sector Erase
												   (value in microseconds) */
	#define BE_TIMEOUT				(10000000)	/* Timeout for Bulk Erase
												   (value in microseconds) */
#endif

/* @} */

/*
 * @name M25P16 memory settings
 *
 * @{
 */

#ifdef USE_M25P16	/* using M25P16 type Flash memory */
	#define EXPECTED_DEVICE			(0x202015)	/* Device Identification */
	#define FLASH_SIZE				(0x200000)	/* 16Mbit */
	#define FLASH_SECTOR_SIZE 		(0x10000)   /* Sector Size in Bytes (64kB)*/
	#define FLASH_WRITE_MAX_SIZE  	(0x100)    	/* Write Buffer = 256 bytes */
	#define WAIT_DP					(3)			/* Time to wait until Deep Power-
												   Down is activated */
	#define WAIT_RDP				(30)		/* Time to wait releases from
												   Deep Power-Down */
	#define WRST_TIMEOUT			(15000)		/* Timeout for Write Status
												   Register */
	#define PP_TIMEOUT				(5000)		/* Timeout for Page Program */
	#define SE_TIMEOUT				(3000000)	/* Timeout for Sector Erase
												   (value in microseconds) */
	#define BE_TIMEOUT				(40000000)	/* Timeout for Bulk Erase
												   (value in microseconds) */
#endif

/* @} */

/*
 * @name P5Q memory settings
 *
 * @{
 */

#ifdef USE_P5Q	/* using P5Q type Flash memory */
	#define EXPECTED_DEVICE			(0x20DA18)	/* Device Identification */
	#define FLASH_SIZE				(0x1000000)	/* 128Mbit */
	#define FLASH_SECTOR_SIZE 		(0x20000)   /* Sector Size in Bytes (128kB)*/
	#define FLASH_WRITE_MAX_SIZE  	(0x40)    	/* Write Buffer = 64 bytes */
	#define WRST_TIMEOUT			(350)		/* Timeout for Write Status
												   Register */
	#define PP_TIMEOUT				(360)		/* Timeout for Page Program */
	#define SE_TIMEOUT				(800000)	/* Timeout for Sector Erase
												   (value in microseconds) */
	#define BE_TIMEOUT				(100000000)	/* Timeout for Bulk Erase
												   (value in microseconds) */
#endif

/* @} */


/***************** Macros (Inline Functions) Definitions *********************/

#define XQuadSpi_Out32 		XIo_Out32
#define XQuadSpi_In32		XIo_In32

/******************************************************************************
 * Write a value to a register. A 32 bit write is performed. If the
 * core is implemented in a smaller width, only the least significant data
 * is written.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 * @param	RegOffset is the register offset from the base to write to.
 * @param	Data is the data written to the register.
 *
 * @return	None.
 *
 * @note		C-style signature:
 *		void XQuadSpi_WriteReg(Xuint32 BaseAddress, Xuint32 RegOffset,
 *			 	Xuint32 Data)
 *****************************************************************************/
#define XQuadSpi_WriteReg(InstancePtr, RegOffset, Data) \
	XQuadSpi_Out32(((InstancePtr)->BaseAddress) + (RegOffset), (Xuint32)(Data))

/******************************************************************************
 * Read a value from a register. A 32 bit read is performed. If the
 * core is implemented in a smaller width, only the least significant data is
 * read from the register. The most significant data will be read as 0.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 * @param	RegOffset is the register offset from the base to read from.
 *
 * @return	Data read from the register.
 *
 * @note		C-style signature:
 *		Xuint32 XQuadSpi_ReadReg(Xuint32 BaseAddress, Xuint32 RegOffset)
 *****************************************************************************/
#define XQuadSpi_ReadReg(InstancePtr, RegOffset) \
	XQuadSpi_In32(((InstancePtr)->BaseAddress) + (RegOffset))

/******************************************************************************
 * Resets internal FSM's and Tx/Rx Fifo's.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 *
 * @return	None.
 *
 * @note		C-style signature:
 *		void XQuadSpi_ResetFsmAndFifo(Xuint32 BaseAddress)
 *****************************************************************************/
#define XQuadSpi_ResetFsmAndFifo(InstancePtr) { \
	XQuadSpi_WriteReg(InstancePtr, RESET_REG, 0x01); \
	XQuadSpi_WriteReg(InstancePtr, RESET_REG, 0x00); }

/******************************************************************************
 * Writes one Byte to TxFifo.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 * @param	Data is the data written to the TxFifo.
 *
 * @return	None.
 *
 * @note		C-style signature:
 *		void XQuadSpi_DataToTxFifo(Xuint32 BaseAddress, Xuint32 Data)
 *****************************************************************************/
#define XQuadSpi_DataToTxFifo(InstancePtr, Data) { \
	XQuadSpi_WriteReg(InstancePtr, DATA_IN_REG, Data); \
	XQuadSpi_WriteReg(InstancePtr, CONTROL_FIFO_REG, 0x02); \
	XQuadSpi_WriteReg(InstancePtr, CONTROL_FIFO_REG, 0x00); }

/******************************************************************************
 * Enables reading one Byte from RxFifo.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 *
 * @return	Data read from RxFifo.
 *
 * @note		C-style signature:
 *		void XQuadSpi_DataFromRxFifo(Xuint32 BaseAddress)
 *****************************************************************************/
#define XQuadSpi_DataFromRxFifo(InstancePtr) { \
	XQuadSpi_WriteReg(InstancePtr, CONTROL_FIFO_REG, 0x01); \
	XQuadSpi_WriteReg(InstancePtr, CONTROL_FIFO_REG, 0x00); }

/******************************************************************************
 * Sets the mode on which the instruction command, address, reading and writing
 * will be sent/read.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 * @param	Cmd sets the mode on which the command instruction will be sent.
 * @param	Addr sets the mode on which the address will be sent.
 * @param	Rd sets the mode on which reading data will be made.
 * @param	Wr sets the mode on which writing data will be made.
 *
 * @return	None.
 *
 * @note		C-style signature:
 *		void XQuadSpi_SetModes(Xuint32 BaseAddress, u8 Cmd, u8 Addr, u8 Rd,
 *				u8 Wr)
 *****************************************************************************/
#define XQuadSpi_SetModes(InstancePtr, Cmd, Addr, Rd, Wr) { \
	u8 u8DataToModesReg; \
	u8DataToModesReg = ((Wr << 6)|(Rd << 4)|(Addr << 2)|(Cmd)); \
	XQuadSpi_WriteReg(InstancePtr, MODES_REG, u8DataToModesReg); }

/******************************************************************************
 * Sets the mode on which the instruction command, address, reading and writing
 * will be sent/read.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 * @param	DivRate is the rate on with which the clock will be divided.
 * @param	NrOfDummyClks.
 * @param	NrOfBytes required for the command.
 * @param	Wr enables writing data to memory.
 * @param	Rd enables reading data from the memory.
 * @param	Dummy enables sending dummy bytes.
 * @param	Addr enables sending address to the memory.
 * @param	Xip enables XiP mode.
 * @param	NoInstruction sends address without command (for XiP mode).
 *
 * @return	None.
 *
 * @note		C-style signature:
 *		void XQuadSpi_StartCycle(Xuint32 BaseAddress, Xuint32 DivRate,
 *				Xuint32 NrOfDummyClks, Xuint32 NrOfBytes, u8 Wr, u8 Rd,
 *				u8 Dummy, u8 Addr, u8 Xip, u8 NoInstruction)
 *****************************************************************************/
#define XQuadSpi_StartCycle(InstancePtr, DivRate, NrOfDummyClks, NrOfBytes, \
		Wr, Rd, Dummy, Addr, Xip, NoInstruction) { \
	Xuint32 u32StartCmd, u32EndCmd; \
	u32StartCmd = 0x80000000 | (NoInstruction<<31) | (Xip<<30) | \
				(DivRate<<17) | (NrOfDummyClks<<13) | (NrOfBytes<<4) | \
				(Wr<<3) | (Rd<<2) | (Dummy<<1) | Addr; \
	u32EndCmd = 0x10000000 | (NoInstruction<<31) | (Xip<<30) | \
				(DivRate<<17) | (NrOfDummyClks<<13) | (NrOfBytes<<4) | \
				(Wr<<3) | (Rd<<2) | (Dummy<<1) | Addr; \
	XQuadSpi_WriteReg(InstancePtr, CONTROL_CYCLE_REG, u32StartCmd); \
	XQuadSpi_WriteReg(InstancePtr, CONTROL_CYCLE_REG, u32EndCmd); }

/******************************************************************************
 * Starts the internal Counter.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 * @param	ClkValueMHz is a pointer to Microblaze's clock frequency.
 * @param	TimerEndValue is the number, in microseconds, until to count.
 *
 * @return	None.
 *
 * @note		C-style signature:
 *		void XQuadSpi_StartTimer(Xuint32 BaseAddress, Xuint32 ClkValueMHz,
 *				Xuint32 TimerEndValue)
 *****************************************************************************/
#define XQuadSpi_StartTimer(InstancePtr, ClkValueMHz, TimerEndValue) { \
	Xuint32 u32Buf; \
	u32Buf = (Xuint32)ClkValueMHz; \
	XQuadSpi_WriteReg(InstancePtr, COUNTER_END_VALUE_REG, TimerEndValue); \
	XQuadSpi_WriteReg(InstancePtr, COUNTER_CONTROL_REG, \
	(((u32Buf/1000000) << 4) & 0x00000FF0) | 0x01); }

/******************************************************************************
 * Reads the Status Register of the Counter.
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 *
 * @return	0x00 if it's still counting
 *          0x01 if counter reached the TimerEndValue (us).
 *
 * @note		C-style signature:
 *		void XQuadSpi_PollTimer(Xuint32 BaseAddress)
 *****************************************************************************/
#define XQuadSpi_PollTimer(InstancePtr) \
	XQuadSpi_ReadReg(InstancePtr, COUNTER_STATUS_REG);

/******************************************************************************
 * Resets the timer to its reset value (0).
 *
 * @param	InstancePtr is a pointer to the base address of the device.
 *
 * @return	None.
 *
 * @note		C-style signature:
 *		void XQuadSpi_ResetTimer(Xuint32 BaseAddress)
 *****************************************************************************/
#define XQuadSpi_ResetTimer(InstancePtr) \
	XQuadSpi_WriteReg(InstancePtr, COUNTER_CONTROL_REG, 0x80000000);


/*****************************************************************************/
#ifdef __cplusplus
}
#endif

#endif /* end of protection macro */
