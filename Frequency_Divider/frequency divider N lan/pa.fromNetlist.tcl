
# PlanAhead Launch Script for Post-Synthesis pin planning, created by Project Navigator

create_project -name fre_div_100khz_10khz -dir "D:/cd/thiet ke he thong va vi mach/fre_div_100khz_10khz/planAhead_run_2" -part xc7a100tcsg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "D:/cd/thiet ke he thong va vi mach/fre_div_100khz_10khz/fre_div.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {D:/cd/thiet ke he thong va vi mach/fre_div_100khz_10khz} }
set_param project.pinAheadLayout  yes
set_property target_constrs_file "fre_div.ucf" [current_fileset -constrset]
add_files [list {fre_div.ucf}] -fileset [get_property constrset [current_run]]
link_design
