
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name atlys_ddr_test -dir "C:/Users/Administrator/Desktop/Xilinx/atlys_ddr_test/planAhead_run_1" -part xc6slx45csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Administrator/Desktop/Xilinx/atlys_ddr_test/atlys_ddr_test.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Administrator/Desktop/Xilinx/atlys_ddr_test} {ipcore_dir} }
set_param project.pinAheadLayout  yes
set_param project.paUcfFile  "atlys.ucf"
add_files "atlys.ucf" -fileset [get_property constrset [current_run]]
open_netlist_design
