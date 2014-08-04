#sudo LD_LIBRARY_PATH=../../linux.x86_64/rel ./fpgalink3.py -s -v 1443:0007 -i 1443:0007 -x ../../hdl/fx2/vhdl/ex_cksum-me/source/default.xsvf
#sudo LD_LIBRARY_PATH=../../linux.x86_64/rel ./cksum-fpgalink3.py -s -v 1443:0007 -i 1443:0007 -x ../../hdl/fx2/vhdl/atlys_ddr_test/default.xsvf
#sudo LD_LIBRARY_PATH=../../linux.x86_64/rel ./cksum-fpgalink3.py -s -v 1443:0007 -i 1443:0007 -x /home/cccitron/mastersThesis/lab6_files/lab6_files_ISE_read_from_mem/spi/default.xsvf

#sudo LD_LIBRARY_PATH=../../linux.x86_64/rel ./cksum_comp-to-fpga_fpgalink3.py -s -v 1443:0007 -i 1443:0007 -x ../../hdl/fx2/vhdl/ex_cksum-me_compToFPGA/top_level/default.xsvf

sudo LD_LIBRARY_PATH=../../linux.x86_64/rel ./calib_comp-to-fpga_fpgalink3.py -s -v 1443:0007 -i 1443:0007 -x ../../hdl/fx2/vhdl/sad_simple_reg_9x9/top_level/default.xsvf

#sudo LD_LIBRARY_PATH=../../linux.x86_64/rel ./calib_comp-to-fpga_fpgalink3.py -s -v 1443:0007 -i 1443:0007 -x ../../hdl/fx2/vhdl/sad_noJ_9x9/top_level/default.xsvf

