This project has dependencies in the 'digilent' VHDL library. For your convenience
a local copy of these dependencies are included in the remote_sources directory.

The VmodCAM_Ref_VGA demo project was built around an Atlys+VmodCAM setup.
The project configures the two cameras on the VmodCAM for VGA resolution by
using the in-built pixel binning and scaling features of the camera. The DDR memory
is used as a frame buffer. The FPGA drives the HDMI out port with either or both
of the video feeds. Switch 7 and 6 can be used to select which feed(s) to display.
The display resolution is VGA (640x480).

Project built in ISE 13.2, tested in ISE 13.1.