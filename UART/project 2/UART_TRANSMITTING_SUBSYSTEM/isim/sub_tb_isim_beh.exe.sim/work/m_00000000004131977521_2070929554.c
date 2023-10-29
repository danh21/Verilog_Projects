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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/cd/thiet ke he thong va vi mach/PONG CHU/UART/UART_TRANSMITTING_SUBSYSTEM/Transmitter.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {510U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {1, 0};



static void Always_29_0(char *t0)
{
    char t16[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 3600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3920);
    *((int *)t2) = 1;
    t3 = (t0 + 3632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(31, ng0);
    t11 = (t0 + 1800U);
    t12 = *((char **)t11);

LAB8:    t11 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 1, t11, 1);
    if (t13 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t12, 1, t2, 1);
    if (t13 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB7;

LAB9:    xsi_set_current_line(33, ng0);

LAB14:    xsi_set_current_line(34, ng0);
    t14 = (t0 + 1320U);
    t15 = *((char **)t14);
    t14 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t14, t15, 0, 0, 8, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 9, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB13;

LAB11:    xsi_set_current_line(40, ng0);

LAB15:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t16, 0, 8);
    t11 = (t16 + 4);
    t14 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 8);
    t8 = (t7 & 1);
    *((unsigned int *)t16) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 8);
    t17 = (t10 & 1);
    *((unsigned int *)t11) = t17;
    t15 = (t16 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(48, ng0);

LAB20:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB21;

LAB22:
LAB23:
LAB18:    goto LAB13;

LAB16:    xsi_set_current_line(42, ng0);

LAB19:    xsi_set_current_line(43, ng0);
    t23 = (t0 + 2680);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t25 + 4);
    t29 = *((unsigned int *)t25);
    t30 = (t29 >> 0);
    t31 = (t30 & 1);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t28);
    t33 = (t32 >> 0);
    t34 = (t33 & 1);
    *((unsigned int *)t27) = t34;
    t35 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t35, t26, 0, 0, 1, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_rshift(t16, 8, t4, 8, t5, 32);
    t11 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t11, t16, 0, 0, 8, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2520);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_lshift(t16, 9, t4, 9, t5, 32);
    t11 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t11, t16, 0, 0, 9, 0LL);
    goto LAB18;

LAB21:    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng5)));
    t14 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t14, t11, 0, 0, 1, 0LL);
    goto LAB23;

}


extern void work_m_00000000004131977521_2070929554_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000004131977521_2070929554", "isim/sub_tb_isim_beh.exe.sim/work/m_00000000004131977521_2070929554.didat");
	xsi_register_executes(pe);
}
