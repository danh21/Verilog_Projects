
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name BRAM_BASED_FIFO -dir "D:/cd/thiet ke he thong va vi mach/PONG CHU/XlLlNX SPARTAN-3 SPECIFIC MEMORY/project 2/BRAM_BASED_FIFO/planAhead_run_4" -part xc7a100tcsg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/cd/thiet ke he thong va vi mach/PONG CHU/XlLlNX SPARTAN-3 SPECIFIC MEMORY/project 2/BRAM_BASED_FIFO/FIFO_BRAM.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/cd/thiet ke he thong va vi mach/PONG CHU/XlLlNX SPARTAN-3 SPECIFIC MEMORY/project 2/BRAM_BASED_FIFO} }
set_property target_constrs_file "FIFO_BRAM.ucf" [current_fileset -constrset]
add_files [list {FIFO_BRAM.ucf}] -fileset [get_property constrset [current_run]]
link_design
