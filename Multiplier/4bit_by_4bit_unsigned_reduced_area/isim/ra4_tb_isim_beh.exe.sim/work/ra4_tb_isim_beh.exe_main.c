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
    work_m_00000000002509861472_3823529506_init();
    work_m_00000000000372003887_2779239139_init();
    work_m_00000000003883018569_0992280429_init();
    work_m_00000000003986420131_3231610320_init();
    work_m_00000000001547654193_0140618804_init();
    work_m_00000000003308412386_3299322839_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003308412386_3299322839");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
