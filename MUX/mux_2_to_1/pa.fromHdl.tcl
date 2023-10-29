
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name mux_2_to_1 -dir "D:/cd/thiet ke he thong va vi mach/mux_2_to_1/planAhead_run_1" -part xc7a100tcsg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "mux_2_to_1.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {mux_2_to_1.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top mux_2_to_1 $srcset
add_files [list {mux_2_to_1.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tcsg324-3
