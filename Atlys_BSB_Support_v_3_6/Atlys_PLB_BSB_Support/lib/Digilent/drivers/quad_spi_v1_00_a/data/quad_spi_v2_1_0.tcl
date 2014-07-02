##############################################################################
## Filename:          E:\LICENTA\Projects\Atlys_13_1_AXI/drivers/quad_spi_if_axi_v1_01_a/data/quad_spi_if_axi_v2_1_0.tcl
## Description:       Microprocess Driver Command (tcl)
## Date:              Thu May 05 11:40:15 2011 (by Create and Import Peripheral Wizard)
##############################################################################

#uses "xillib.tcl"

proc generate {drv_handle} {
  xdefine_include_file $drv_handle "xparameters.h" "XQuadSpi" "NUM_INSTANCES" "DEVICE_ID" "C_BASEADDR" "C_HIGHADDR" 
}
