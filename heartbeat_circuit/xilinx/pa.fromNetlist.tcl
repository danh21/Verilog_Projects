
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name heartbeat_circuit -dir "D:/cd/thiet ke he thong va vi mach/heartbeat_circuit/planAhead_run_1" -part xc7a100tcsg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/cd/thiet ke he thong va vi mach/heartbeat_circuit/segment7.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/cd/thiet ke he thong va vi mach/heartbeat_circuit} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "segment7.ucf" [current_fileset -constrset]
add_files [list {segment7.ucf}] -fileset [get_property constrset [current_run]]
link_design
