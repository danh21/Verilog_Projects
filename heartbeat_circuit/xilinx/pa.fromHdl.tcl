
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name heartbeat_circuit -dir "D:/cd/thiet ke he thong va vi mach/heartbeat_circuit/planAhead_run_2" -part xc7a100tcsg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "segment7.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {heartbeat-circuit.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top segment7 $srcset
add_files [list {segment7.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tcsg324-3
