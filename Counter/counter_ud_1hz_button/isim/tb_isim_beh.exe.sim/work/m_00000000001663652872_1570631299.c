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
static const char *ng0 = "D:/cd/TT FPGA/project/tuan 7/counter_ud_1hz_button/button.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};



static void Always_37_0(char *t0)
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

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 6160);
    *((int *)t2) = 1;
    t3 = (t0 + 4880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t2 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 19, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3608);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 19, 0LL);
    goto LAB7;

}

static void Cont_43_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t9[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3608);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t9) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t44, 8);

LAB20:    t45 = (t0 + 6304);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t49, 0, 8);
    t50 = 524287U;
    t51 = t50;
    t52 = (t3 + 4);
    t53 = *((unsigned int *)t3);
    t50 = (t50 & t53);
    t54 = *((unsigned int *)t52);
    t51 = (t51 & t54);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t56 | t50);
    t57 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t57 | t51);
    xsi_driver_vfirst_trans(t45, 0, 18);
    t58 = (t0 + 6176);
    *((int *)t58) = 1;

LAB1:    return;
LAB6:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t40 = (t0 + 3608);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng2)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t42, 19, t43, 32);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t44, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Cont_45_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3608);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 6368);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 1U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 0);
    t54 = (t0 + 6192);
    *((int *)t54) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng3)));
    goto LAB13;

LAB14:    t40 = ((char*)((ng4)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t35, 1, t40, 1);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_48_3(char *t0)
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

LAB0:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6208);
    *((int *)t2) = 1;
    t3 = (t0 + 5624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2408U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng4)));
    t12 = (t0 + 3768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 3, 0LL);
    goto LAB7;

}

static void Always_54_4(char *t0)
{
    char t16[8];
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
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 5840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 6224);
    *((int *)t2) = 1;
    t3 = (t0 + 5872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(59, ng0);
    t6 = (t0 + 2728U);
    t7 = *((char **)t6);
    t6 = (t7 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB25;

LAB9:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t3) == 0)
        goto LAB29;

LAB31:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;

LAB32:    t7 = (t16 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB34;

LAB33:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB38;

LAB39:
LAB40:
LAB37:    goto LAB25;

LAB11:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t3) == 0)
        goto LAB41;

LAB43:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;

LAB44:    t7 = (t16 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB46;

LAB45:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB49:    goto LAB25;

LAB13:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 2728U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t5 + 4);
    t9 = *((unsigned int *)t3);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB56;

LAB54:    if (*((unsigned int *)t3) == 0)
        goto LAB53;

LAB55:    t6 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t6) = 1;

LAB56:    t7 = (t16 + 4);
    t14 = (t5 + 4);
    t17 = *((unsigned int *)t5);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB58;

LAB57:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t24 & 1U);
    t15 = (t16 + 4);
    t25 = *((unsigned int *)t15);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB62;

LAB63:
LAB64:
LAB61:    goto LAB25;

LAB15:    xsi_set_current_line(70, ng0);

LAB65:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    memset(t16, 0, 8);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB69;

LAB67:    if (*((unsigned int *)t2) == 0)
        goto LAB66;

LAB68:    t5 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t5) = 1;

LAB69:    t6 = (t16 + 4);
    t7 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t18 = (~(t17));
    *((unsigned int *)t16) = t18;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB71;

LAB70:    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 1U);
    t24 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t24 & 1U);
    t14 = (t16 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t16);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB72;

LAB73:
LAB74:    goto LAB25;

LAB17:    xsi_set_current_line(75, ng0);

LAB75:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB79;

LAB80:
LAB81:
LAB78:    goto LAB25;

LAB19:    xsi_set_current_line(83, ng0);

LAB82:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB86;

LAB87:
LAB88:
LAB85:    goto LAB25;

LAB21:    xsi_set_current_line(91, ng0);

LAB89:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 3448);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t9 = *((unsigned int *)t2);
    t10 = (~(t9));
    t11 = *((unsigned int *)t3);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB93;

LAB94:
LAB95:
LAB92:    goto LAB25;

LAB26:    xsi_set_current_line(59, ng0);
    t14 = ((char*)((ng3)));
    t15 = (t0 + 3928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB28;

LAB29:    *((unsigned int *)t16) = 1;
    goto LAB32;

LAB34:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB33;

LAB35:    xsi_set_current_line(60, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3928);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB37;

LAB38:    xsi_set_current_line(62, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB40;

LAB41:    *((unsigned int *)t16) = 1;
    goto LAB44;

LAB46:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB45;

LAB47:    xsi_set_current_line(63, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3928);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB49;

LAB50:    xsi_set_current_line(65, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB52;

LAB53:    *((unsigned int *)t16) = 1;
    goto LAB56;

LAB58:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t7) = (t21 | t22);
    goto LAB57;

LAB59:    xsi_set_current_line(66, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 3928);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB61;

LAB62:    xsi_set_current_line(68, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB64;

LAB66:    *((unsigned int *)t16) = 1;
    goto LAB69;

LAB71:    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t16) = (t19 | t20);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    *((unsigned int *)t6) = (t21 | t22);
    goto LAB70;

LAB72:    xsi_set_current_line(72, ng0);
    t15 = ((char*)((ng8)));
    t30 = (t0 + 3928);
    xsi_vlogvar_assign_value(t30, t15, 0, 0, 3);
    goto LAB74;

LAB76:    xsi_set_current_line(78, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB78;

LAB79:    xsi_set_current_line(80, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB81;

LAB83:    xsi_set_current_line(86, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB85;

LAB86:    xsi_set_current_line(88, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB88;

LAB90:    xsi_set_current_line(94, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB92;

LAB93:    xsi_set_current_line(96, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t0 + 3928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB95;

}


extern void work_m_00000000001663652872_1570631299_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Cont_43_1,(void *)Cont_45_2,(void *)Always_48_3,(void *)Always_54_4};
	xsi_register_didat("work_m_00000000001663652872_1570631299", "isim/tb_isim_beh.exe.sim/work/m_00000000001663652872_1570631299.didat");
	xsi_register_executes(pe);
}
