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
    work_m_00000000000240377260_1634987414_init();
    work_m_00000000000738873736_2031640737_init();
    work_m_00000000000521870349_2998217762_init();
    work_m_00000000000684184065_0082652744_init();
    work_m_00000000001042123931_3947207921_init();
    work_m_00000000001109681792_2028522270_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001109681792_2028522270");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
