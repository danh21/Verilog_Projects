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
static const char *ng0 = "D:/cd/thiet ke he thong va vi mach/algorithm_of_Booth/Booth.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};

static void NetReassign_31_3(char *);
static void NetReassign_32_4(char *);


static void Always_29_0(char *t0)
{
    char t6[8];
    char t14[8];
    char t15[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4800);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 2248);
    xsi_set_assignedflag(t4);
    t5 = (t0 + 6600);
    *((int *)t5) = 1;
    NetReassign_31_3(t0);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2408);
    xsi_set_assignedflag(t2);
    t3 = (t0 + 6604);
    *((int *)t3) = 1;
    NetReassign_32_4(t0);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 3U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 3U);

LAB6:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 2, t5, 2);
    if (t13 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t13 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(45, ng0);

LAB16:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t11 & 7U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 7U);
    t5 = (t0 + 1048U);
    t16 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t17 = (t16 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t30) = t23;
    t24 = *((unsigned int *)t17);
    t25 = (t24 >> 3);
    t26 = (t25 & 1);
    *((unsigned int *)t5) = t26;
    xsi_vlogtype_concat(t14, 4, 4, 2U, t30, 1, t15, 3);
    t18 = (t0 + 2088);
    xsi_vlogvar_assign_value(t18, t14, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    t5 = (t0 + 1048U);
    t16 = *((char **)t5);
    memset(t30, 0, 8);
    t5 = (t30 + 4);
    t17 = (t16 + 4);
    t21 = *((unsigned int *)t16);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t30) = t23;
    t24 = *((unsigned int *)t17);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t5) = t26;
    xsi_vlogtype_concat(t14, 5, 5, 2U, t30, 1, t15, 4);
    t18 = (t0 + 2568);
    xsi_vlogvar_assign_value(t18, t14, 0, 0, 5);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);

LAB14:    xsi_set_current_line(36, ng0);
    t16 = (t0 + 2248);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t15 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 1);
    *((unsigned int *)t15) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 7U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 7U);
    t27 = (t0 + 2248);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 3);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 3);
    t38 = (t37 & 1);
    *((unsigned int *)t31) = t38;
    xsi_vlogtype_concat(t14, 4, 4, 2U, t30, 1, t15, 3);
    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t14, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    t5 = (t0 + 2248);
    t16 = (t5 + 56U);
    t17 = *((char **)t16);
    memset(t30, 0, 8);
    t18 = (t30 + 4);
    t19 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t30) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t18) = t26;
    xsi_vlogtype_concat(t14, 5, 5, 2U, t30, 1, t15, 4);
    t20 = (t0 + 2568);
    xsi_vlogvar_assign_value(t20, t14, 0, 0, 5);
    goto LAB13;

LAB9:    xsi_set_current_line(40, ng0);

LAB15:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2408);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t11 & 7U);
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 7U);
    t18 = (t0 + 2408);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t30, 0, 8);
    t27 = (t30 + 4);
    t28 = (t20 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t30) = t23;
    t24 = *((unsigned int *)t28);
    t25 = (t24 >> 3);
    t26 = (t25 & 1);
    *((unsigned int *)t27) = t26;
    xsi_vlogtype_concat(t14, 4, 4, 2U, t30, 1, t15, 3);
    t29 = (t0 + 2088);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    *((unsigned int *)t15) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    t5 = (t0 + 2408);
    t16 = (t5 + 56U);
    t17 = *((char **)t16);
    memset(t30, 0, 8);
    t18 = (t30 + 4);
    t19 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t30) = t23;
    t24 = *((unsigned int *)t19);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t18) = t26;
    xsi_vlogtype_concat(t14, 5, 5, 2U, t30, 1, t15, 4);
    t20 = (t0 + 2568);
    xsi_vlogvar_assign_value(t20, t14, 0, 0, 5);
    goto LAB13;

}

static void Cont_51_1(char *t0)
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

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4944);
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
    t18 = (t0 + 4816);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_52_2(char *t0)
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

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5008);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
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
    xsi_driver_vfirst_trans(t5, 0, 4);
    t18 = (t0 + 4832);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetReassign_31_3(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 4, t4, 4, t5, 4);
    t2 = (t0 + 6600);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 4848);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 2248);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 4, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 4848);
    *((int *)t8) = 1;
    goto LAB8;

}

static void NetReassign_32_4(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 4480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t3 = 0;
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 4, t4, 4, t5, 4);
    t2 = (t0 + 6604);
    if (*((int *)t2) > 0)
        goto LAB4;

LAB5:    if (t3 > 0)
        goto LAB6;

LAB7:    t9 = (t0 + 4864);
    *((int *)t9) = 0;

LAB8:
LAB1:    return;
LAB4:    t7 = (t0 + 2408);
    xsi_vlogvar_assignassignvalue(t7, t6, 0, 0, 0, 4, ((int*)(t2)));
    t3 = 1;
    goto LAB5;

LAB6:    t8 = (t0 + 4864);
    *((int *)t8) = 1;
    goto LAB8;

}


extern void work_m_00000000003872560786_3257383561_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Cont_51_1,(void *)Cont_52_2,(void *)NetReassign_31_3,(void *)NetReassign_32_4};
	xsi_register_didat("work_m_00000000003872560786_3257383561", "isim/BoothTop_tb_isim_beh.exe.sim/work/m_00000000003872560786_3257383561.didat");
	xsi_register_executes(pe);
}
