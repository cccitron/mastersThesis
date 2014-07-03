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
   VHDL code that corresponds with cksum_comp-to-fpga_fpgalink3.py. It is able 
   to recieve data for both images, currently 3 lines at a time and send back 
   the image data, the SAD results, and the disparity values. Also, if another
   line is sent to the board for each image, it is able to incorporate those 
   new rows a return the next line of disparity values.

ex_fifo-me/source/
   Has example camera code with fifo fpgalink code in it.

ex_fifo-me_compToFPGA/fifo/
   VHDL code that corresponds with cksum_comp-to-fpga_fpgalink3.py. It will 
   display the value sent from the computer to the LEDs. Doesn't really work.

pipeline_cksum-me/
   Pipelined the SAD algorithm. Next is to implement BRAM to work with arrays.
   Also using array packets.

sad_fifo_3x3/fifo/
   Implements a 3x3 SAD algorithm with fifo fpgalink code.






INTALLS

Python:
   be sure to instal numpy for python3 not just python




