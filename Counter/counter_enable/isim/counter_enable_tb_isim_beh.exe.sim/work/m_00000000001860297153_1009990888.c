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
static const char *ng0 = "D:/cd/thiet ke he thong va vi mach/BAI TAP/counter_enable/counter_enable.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {8U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {12U, 0U};



static void Always_34_0(char *t0)
{
    char t13[8];
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

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 4, t4, 4, t5, 4);
    t11 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_42_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4088);
    *((int *)t2) = 1;
    t3 = (t0 + 3536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 2176);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB13;

LAB9:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2176);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB13;

}

static void Cont_50_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 4104);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001860297153_1009990888_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_42_1,(void *)Cont_50_2};
	xsi_register_didat("work_m_00000000001860297153_1009990888", "isim/counter_enable_tb_isim_beh.exe.sim/work/m_00000000001860297153_1009990888.didat");
	xsi_register_executes(pe);
}
