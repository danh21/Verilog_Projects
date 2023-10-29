
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name fre_div_100khz_10khz -dir "D:/cd/thiet ke he thong va vi mach/fre_div_100khz_10khz/planAhead_run_1" -part xc7a100tcsg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "fre_div.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {fre_div.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top fre_div $srcset
add_files [list {fre_div.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tcsg324-3
