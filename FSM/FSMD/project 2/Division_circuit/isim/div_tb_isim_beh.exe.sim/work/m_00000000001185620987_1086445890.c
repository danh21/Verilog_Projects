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
static const char *ng0 = "D:/cd/thiet ke he thong va vi mach/PONG CHU/FSMD/Division_circuit/div.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static void Always_50_0(char *t0)
{
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

LAB0:    t1 = (t0 + 6224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 7536);
    *((int *)t2) = 1;
    t3 = (t0 + 6256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);
    t4 = (t0 + 2024U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(60, ng0);

LAB9:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(52, ng0);

LAB8:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4184);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4664);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4984);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB7;

}

static void Always_69_1(char *t0)
{
    char t14[8];
    char t15[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 7552);
    *((int *)t2) = 1;
    t3 = (t0 + 6504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3704);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5144);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(80, ng0);

LAB18:    xsi_set_current_line(81, ng0);
    t6 = ((char*)((ng3)));
    t7 = (t0 + 3224);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB17;

LAB9:    xsi_set_current_line(92, ng0);

LAB23:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 5304);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4184);
    t16 = (t7 + 56U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t18 = (t15 + 4);
    t19 = (t17 + 4);
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t19);
    t12 = (t11 >> 0);
    *((unsigned int *)t18) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 127U);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 & 127U);
    xsi_vlogtype_concat(t14, 8, 8, 2U, t15, 7, t6, 1);
    t21 = (t0 + 4344);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t7 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 7);
    t11 = (t10 & 1);
    *((unsigned int *)t15) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 7);
    t20 = (t13 & 1);
    *((unsigned int *)t6) = t20;
    t16 = (t0 + 4504);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t22, 0, 8);
    t19 = (t22 + 4);
    t21 = (t18 + 4);
    t23 = *((unsigned int *)t18);
    t24 = (t23 >> 0);
    *((unsigned int *)t22) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 0);
    *((unsigned int *)t19) = t26;
    t27 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t27 & 127U);
    t28 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t28 & 127U);
    xsi_vlogtype_concat(t14, 8, 8, 2U, t22, 7, t15, 1);
    t29 = (t0 + 4024);
    xsi_vlogvar_assign_value(t29, t14, 0, 0, 8);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 4984);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 4, t5, 4, t6, 4);
    t7 = (t0 + 5144);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 4);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t7 = (t5 + 4);
    t16 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t16);
    t20 = (t12 ^ t13);
    t23 = (t11 | t20);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t16);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB27;

LAB24:    if (t26 != 0)
        goto LAB26;

LAB25:    *((unsigned int *)t14) = 1;

LAB27:    t18 = (t14 + 4);
    t30 = *((unsigned int *)t18);
    t31 = (~(t30));
    t32 = *((unsigned int *)t14);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB17;

LAB11:    xsi_set_current_line(102, ng0);

LAB31:    xsi_set_current_line(103, ng0);
    t3 = (t0 + 5304);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4184);
    t16 = (t7 + 56U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t18 = (t15 + 4);
    t19 = (t17 + 4);
    t9 = *((unsigned int *)t17);
    t10 = (t9 >> 0);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t19);
    t12 = (t11 >> 0);
    *((unsigned int *)t18) = t12;
    t13 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t13 & 127U);
    t20 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t20 & 127U);
    xsi_vlogtype_concat(t14, 8, 8, 2U, t15, 7, t6, 1);
    t21 = (t0 + 4344);
    xsi_vlogvar_assign_value(t21, t14, 0, 0, 8);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4504);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB17;

LAB13:    xsi_set_current_line(108, ng0);

LAB32:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3384);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB17;

LAB19:    xsi_set_current_line(83, ng0);

LAB22:    xsi_set_current_line(84, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 4024);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 8);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    t2 = (t0 + 4344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2344U);
    t3 = *((char **)t2);
    t2 = (t0 + 4824);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t3, 32, t2, 32);
    t5 = (t0 + 5144);
    xsi_vlogvar_assign_value(t5, t14, 0, 0, 4);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB21;

LAB26:    t17 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(99, ng0);
    t19 = ((char*)((ng5)));
    t21 = (t0 + 3704);
    xsi_vlogvar_assign_value(t21, t19, 0, 0, 2);
    goto LAB30;

}

static void Always_117_2(char *t0)
{
    char t10[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t27;

LAB0:    t1 = (t0 + 6720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 7568);
    *((int *)t2) = 1;
    t3 = (t0 + 6752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(118, ng0);
    t4 = (t0 + 3864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4664);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB6;

LAB5:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB6;

LAB9:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB8:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(124, ng0);

LAB14:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4504);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB6:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB8;

LAB10:    xsi_set_current_line(119, ng0);

LAB13:    xsi_set_current_line(120, ng0);
    t20 = (t0 + 3864);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 4664);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 8, t22, 8, t25, 8);
    t27 = (t0 + 4504);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 8);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 5304);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

}

static void Cont_130_3(char *t0)
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

LAB0:    t1 = (t0 + 6968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 7584);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_131_4(char *t0)
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

LAB0:    t1 = (t0 + 7216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 7744);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 7600);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001185620987_1086445890_init()
{
	static char *pe[] = {(void *)Always_50_0,(void *)Always_69_1,(void *)Always_117_2,(void *)Cont_130_3,(void *)Cont_131_4};
	xsi_register_didat("work_m_00000000001185620987_1086445890", "isim/div_tb_isim_beh.exe.sim/work/m_00000000001185620987_1086445890.didat");
	xsi_register_executes(pe);
}
