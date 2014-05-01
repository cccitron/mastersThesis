/******************************************************************************
 * @file xquad_spi_g.c
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
#include "xparameters.h"

/************************** Variable Prototypes ******************************/

XQuadSpi_Config XQuadSpi_ConfigTable[] = {
		{
			XPAR_QUAD_SPI_IF_AXI_0_BASEADDR
		}
};
