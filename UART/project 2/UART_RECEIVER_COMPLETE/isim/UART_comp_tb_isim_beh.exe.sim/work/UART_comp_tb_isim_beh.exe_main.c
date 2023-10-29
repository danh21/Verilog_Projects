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
    work_m_00000000001561620985_2214504757_init();
    work_m_00000000001444168345_2635300876_init();
    work_m_00000000002920967704_0524941095_init();
    work_m_00000000002806505944_0034155090_init();
    work_m_00000000002372281047_1847798859_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002372281047_1847798859");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
