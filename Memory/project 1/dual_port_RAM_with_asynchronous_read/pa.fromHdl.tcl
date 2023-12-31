
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name dual_port_RAM_with_asynchronous_read -dir "D:/cd/thiet ke he thong va vi mach/dual_port_RAM_with_asynchronous_read/planAhead_run_1" -part xc7a100tcsg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "xilinx_dual_port_ram_async.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {xilinx_dual_port_ram_async.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top xilinx_dual_port_ram_async $srcset
add_files [list {xilinx_dual_port_ram_async.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tcsg324-3
