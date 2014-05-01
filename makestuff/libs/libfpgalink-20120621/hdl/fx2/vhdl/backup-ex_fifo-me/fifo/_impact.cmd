setMode -bs
setMode -bs
setMode -bs
setCable -port auto
setMode -bs
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
setMode -bs
setMode -bs
addDevice -p 1 -file "/home/cccitron/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me/fifo/top_level.bit"
expressxsvf -p 1 -program -erase -verify -file "/home/cccitron/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me/fifo/default.xsvf" 
setMode -bs
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
setMode -bs
saveProjectFile -file "/home/cccitron/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me/fifo//auto_project.ipf"
setMode -bs
deleteDevice -position 1
setMode -bs
setMode -ss
setMode -sm
setMode -hw140
setMode -spi
setMode -acecf
setMode -acempm
setMode -pff
