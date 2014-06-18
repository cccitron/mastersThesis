makestuff/libs/libfpgalink-20120621/examples/python-me/.

cksum_comp-to-fpga_fpgalink3.py
   python script to write 1 byte to FPGA and read it back.



makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/

backup-ex_fifo-me/fifo
   The fifo fpgalink code.

backup1-ex_cksum-me/top_level/
   Not of importance. Has ex_cksum code in for xise.

backup1-ex_fifo-me_ram/fifo/
   Tries to use fifo fpgalink with a ddr ram ipcore. (Core) Doesn't work.

backup2-ex_cksum-me/
   Not of importance. Doesn't even have any fpgalink code in it.

backup2-ex_fifo-me_base/source/
   Base code for using the fifo fpgalink code with the example camera code.

camera/
   Example camera code with fifo fpgalink code in it.

ex_cksum-me_compToFPGA/top_level/
   VHDL code that corresponds with cksum_comp-to-fpga_fpgalink3.py. It will 
   display the value sent from the computer to the LEDs.

ex_fifo-me/source/
   Has example camera code with fifo fpgalink code in it.

ex_fifo-me_compToFPGA/fifo/
   VHDL code that corresponds with cksum_comp-to-fpga_fpgalink3.py. It will 
   display the value sent from the computer to the LEDs. Doesn't really work.

sad_fifo_3x3/fifo/
   Implements a 3x3 SAD algorithm with fifo fpgalink code.

