
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name adder4bit_convert_to_adder8bit -dir "D:/cd/thiet ke he thong va vi mach/adder4bit_convert_to_adder8bit/planAhead_run_1" -part xc7a100tcsg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "adder8bit.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {adder4bit.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {adder8bit.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top adder8bit $srcset
add_files [list {adder8bit.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tcsg324-3
