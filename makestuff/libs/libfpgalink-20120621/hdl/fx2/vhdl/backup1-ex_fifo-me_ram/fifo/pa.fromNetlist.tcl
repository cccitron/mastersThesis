
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name fifo -dir "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me/fifo/planAhead_run_2" -part xc6slx45csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me/fifo/top_level.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me/fifo} {ipcore_dir} }
add_files [list {ipcore_dir/fifo.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "platform.ucf" [current_fileset -constrset]
add_files [list {platform.ucf}] -fileset [get_property constrset [current_run]]
link_design
