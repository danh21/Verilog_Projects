
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name BRAM_BASED_FIFO -dir "D:/cd/thiet ke he thong va vi mach/PONG CHU/XlLlNX SPARTAN-3 SPECIFIC MEMORY/project 2/BRAM_BASED_FIFO/planAhead_run_2" -part xc7a100tcsg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "FIFO_BRAM.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Write_CTRL.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Read_CTRL.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {FIFO_Flag.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Dual_port_ram.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {FIFO_BRAM.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top FIFO_BRAM $srcset
add_files [list {FIFO_BRAM.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tcsg324-3
