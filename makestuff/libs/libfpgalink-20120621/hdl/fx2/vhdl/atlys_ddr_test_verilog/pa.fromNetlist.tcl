
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name atlys_ddr_test -dir "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/atlys_ddr_test_verilog/planAhead_run_4" -part xc6slx45csg324-2
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/atlys_ddr_test_verilog/atlys_ddr_test.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/atlys_ddr_test_verilog} {ipcore_dir} }
set_property target_constrs_file "atlys.ucf" [current_fileset -constrset]
add_files [list {atlys.ucf}] -fileset [get_property constrset [current_run]]
link_design
