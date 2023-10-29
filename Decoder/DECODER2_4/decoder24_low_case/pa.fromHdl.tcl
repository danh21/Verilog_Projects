
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name decoder24_low_case -dir "D:/cd/TT FPGA/project/ch2/DECODER2_4/decoder24_low_case/planAhead_run_1" -part xc3s500efg320-4
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "decoder24_low_case.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {decoder24_low_case.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top decoder24_low_case $srcset
add_files [list {decoder24_low_case.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc3s500efg320-4
