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
static const char *ng0 = "D:/cd/thiet ke he thong va vi mach/UART/3Codes/UART Receiver/ba.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {7, 0};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {4U, 0U};



static void Always_32_0(char *t0)
{
    char t11[8];
    char t30[8];
    char t31[8];
    char t37[8];
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 5120);
    *((int *)t2) = 1;
    t3 = (t0 + 4336);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 3384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);

LAB20:    xsi_set_current_line(37, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t5);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    t9 = (t11 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(48, ng0);

LAB28:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 2744);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 32, t7, 32);
    t10 = ((char*)((ng5)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_divide(t30, 32, t11, 32, t10, 32);
    memset(t31, 0, 8);
    t29 = (t5 + 4);
    t32 = (t30 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t30);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t29);
    t16 = *((unsigned int *)t32);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t29);
    t20 = *((unsigned int *)t32);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB32;

LAB29:    if (t21 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t31) = 1;

LAB32:    t34 = (t31 + 4);
    t24 = *((unsigned int *)t34);
    t25 = (~(t24));
    t26 = *((unsigned int *)t31);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(60, ng0);

LAB45:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_add(t11, 32, t4, 8, t5, 32);
    t7 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t7, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB35:    goto LAB19;

LAB11:    xsi_set_current_line(68, ng0);

LAB46:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2744);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 32, t7, 32);
    memset(t30, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB48;

LAB47:    t29 = (t11 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB49;

LAB50:    t33 = (t30 + 4);
    t12 = *((unsigned int *)t33);
    t13 = (~(t12));
    t14 = *((unsigned int *)t30);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(75, ng0);

LAB56:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = (t0 + 3064);
    t4 = (t0 + 3064);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = (t0 + 2904);
    t10 = (t9 + 56U);
    t29 = *((char **)t10);
    xsi_vlog_generic_convert_bit_index(t11, t7, 2, t29, 3, 2);
    t32 = (t11 + 4);
    t12 = *((unsigned int *)t32);
    t8 = (!(t12));
    if (t8 == 1)
        goto LAB57;

LAB58:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t11, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB60;

LAB59:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB60;

LAB63:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB61;

LAB62:    t29 = (t11 + 4);
    t12 = *((unsigned int *)t29);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(85, ng0);

LAB68:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB66:
LAB54:    goto LAB19;

LAB13:    xsi_set_current_line(94, ng0);

LAB69:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 2744);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 472);
    t9 = *((char **)t7);
    t7 = ((char*)((ng4)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_minus(t11, 32, t9, 32, t7, 32);
    memset(t30, 0, 8);
    t10 = (t5 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB71;

LAB70:    t29 = (t11 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB72;

LAB73:    t33 = (t30 + 4);
    t12 = *((unsigned int *)t33);
    t13 = (~(t12));
    t14 = *((unsigned int *)t30);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(102, ng0);

LAB79:    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB77:    goto LAB19;

LAB15:    xsi_set_current_line(111, ng0);

LAB80:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB19;

LAB23:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(41, ng0);
    t10 = ((char*)((ng3)));
    t29 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t29, t10, 0, 0, 3, 0LL);
    goto LAB27;

LAB31:    t33 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(50, ng0);

LAB36:    xsi_set_current_line(51, ng0);
    t35 = (t0 + 2024U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB40;

LAB37:    if (t49 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t37) = 1;

LAB40:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB43:    goto LAB35;

LAB39:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(52, ng0);

LAB44:    xsi_set_current_line(53, ng0);
    t59 = ((char*)((ng2)));
    t60 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t60, t59, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB43;

LAB48:    t32 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t30) = 1;
    goto LAB50;

LAB52:    xsi_set_current_line(70, ng0);

LAB55:    xsi_set_current_line(71, ng0);
    t34 = (t0 + 2744);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t36, 8, t38, 32);
    t39 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t39, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB54;

LAB57:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t11), 1, 0LL);
    goto LAB58;

LAB60:    t10 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB62;

LAB61:    *((unsigned int *)t11) = 1;
    goto LAB62;

LAB64:    xsi_set_current_line(80, ng0);

LAB67:    xsi_set_current_line(81, ng0);
    t32 = (t0 + 2904);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 32, t34, 3, t35, 32);
    t36 = (t0 + 2904);
    xsi_vlogvar_wait_assign_value(t36, t30, 0, 0, 3, 0LL);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB66;

LAB71:    t32 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t30) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(97, ng0);

LAB78:    xsi_set_current_line(98, ng0);
    t34 = (t0 + 2744);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    t38 = ((char*)((ng4)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_add(t31, 32, t36, 8, t38, 32);
    t39 = (t0 + 2744);
    xsi_vlogvar_wait_assign_value(t39, t31, 0, 0, 8, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB77;

}

static void Cont_122_1(char *t0)
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

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5232);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 5136);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_123_2(char *t0)
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

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5296);
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
    t18 = (t0 + 5152);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002631760160_1484956586_init()
{
	static char *pe[] = {(void *)Always_32_0,(void *)Cont_122_1,(void *)Cont_123_2};
	xsi_register_didat("work_m_00000000002631760160_1484956586", "isim/UART_RX_TB_isim_beh.exe.sim/work/m_00000000002631760160_1484956586.didat");
	xsi_register_executes(pe);
}
