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
static const char *ng0 = "D:/cd/TT FPGA/project/tuan 2/giai da hop/demux14_to_demux18/demux14_enable.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {15U, 15U};



static void Always_26_0(char *t0)
{
    char t4[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB9:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB13:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB9;

LAB11:    xsi_set_current_line(28, ng0);
    t29 = (t0 + 1368U);
    t30 = *((char **)t29);

LAB14:    t29 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t30, 2, t29, 32);
    if (t31 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t31 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 32);
    if (t31 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t31 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 32);
    if (t31 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t31 = xsi_vlog_unsigned_case_compare(t30, 2, t2, 32);
    if (t31 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB25:    goto LAB13;

LAB15:    xsi_set_current_line(29, ng0);
    t32 = (t0 + 1208U);
    t33 = *((char **)t32);
    t32 = (t0 + 1768);
    t35 = (t0 + 1768);
    t36 = (t35 + 72U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t34, t37, 2, t38, 32, 1);
    t39 = (t34 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    if (t41 == 1)
        goto LAB26;

LAB27:    goto LAB25;

LAB17:    xsi_set_current_line(30, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1768);
    t6 = (t0 + 1768);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t14, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t41 = (!(t7));
    if (t41 == 1)
        goto LAB28;

LAB29:    goto LAB25;

LAB19:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1768);
    t6 = (t0 + 1768);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t14, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t41 = (!(t7));
    if (t41 == 1)
        goto LAB30;

LAB31:    goto LAB25;

LAB21:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    t3 = (t0 + 1768);
    t6 = (t0 + 1768);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t4, t13, 2, t14, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t41 = (!(t7));
    if (t41 == 1)
        goto LAB32;

LAB33:    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t32, t33, 0, *((unsigned int *)t34), 1);
    goto LAB27;

LAB28:    xsi_vlogvar_assign_value(t3, t5, 0, *((unsigned int *)t4), 1);
    goto LAB29;

LAB30:    xsi_vlogvar_assign_value(t3, t5, 0, *((unsigned int *)t4), 1);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t3, t5, 0, *((unsigned int *)t4), 1);
    goto LAB33;

}


extern void work_m_00000000000690231756_1041371933_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000000690231756_1041371933", "isim/tb_isim_beh.exe.sim/work/m_00000000000690231756_1041371933.didat");
	xsi_register_executes(pe);
}
