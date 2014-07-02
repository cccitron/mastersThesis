--------------------------------------------------------
- Introduction
--------------------------------------------------------
This folder contains the files needed for the Digilent 
Custom IP Cores in order for them to work properly and 
to be used in an AXI based EDK design.

--------------------------------------------------------
- Requirements
--------------------------------------------------------
OS: Linux, Windows XP, Windows 7
HDD: maximum usage of 244 kB
Software: Xilinx EDK 13.2 to 14.1

--------------------------------------------------------
- Usage
--------------------------------------------------------
1. Windows - either run the inst_uninst.bat file and follow the instructions
			or manually copy the ipxact folder to "<Xilinx_Install_Dir>\
             <EDK_Version>\ISE_DS\EDK\data\wizards\". You can use this batch
             file to uninstall the files too when not needed anymore.
2. Linux   1. Copy the content of the ../Digilent_AXI_IPCore_Support_v_1_33/ipxact/busdefs 
			  directory to $XILINX/EDK/data/wizards/ipxact/busdefs, 
			  where $XILINX is the XIlinx ISE Software installation path
		   2. Copy the content of the ../Digilent_AXI_IPCore_Support_v_1_33/ipxact/hurri/xilinx.com/
			  directory to $XILINX/EDK/data/wizards/ipxact/hurri/xilinx.com
		   3. Copy the content of the ../Digilent_AXI_IPCore_Support_v_1_21/ipxact/pcores/
		      directory to $XILINX/EDK/data/wizards/ipxact/pcores
