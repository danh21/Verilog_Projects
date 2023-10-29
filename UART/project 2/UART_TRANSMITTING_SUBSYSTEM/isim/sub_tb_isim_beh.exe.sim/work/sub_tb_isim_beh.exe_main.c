/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002920967704_0236360315_init();
    work_m_00000000003371618424_4144471541_init();
    work_m_00000000004131977521_2070929554_init();
    work_m_00000000003906999164_2176885088_init();
    work_m_00000000000949344425_1962744142_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000949344425_1962744142");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
