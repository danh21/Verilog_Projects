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
static const char *ng0 = "D:/cd/thiet ke he thong va vi mach/PONG CHU/UART/UART RECEIVING SUBSYSTEM/project 2/UART_RECEIVER_COMPLETE/UART_receiver.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {15, 0};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {1, 0};



static void Always_42_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5984);
    *((int *)t2) = 1;
    t3 = (t0 + 4704);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1912U);
    t5 = *((char **)t4);
    t4 = (t0 + 3592);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_48_1(char *t0)
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

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6000);
    *((int *)t2) = 1;
    t3 = (t0 + 4952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_57_2(char *t0)
{
    char t4[8];
    char t20[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;

LAB0:    t1 = (t0 + 5168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 6016);
    *((int *)t2) = 1;
    t3 = (t0 + 5200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);
    t5 = (t0 + 2792);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 3U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 3U);

LAB5:    t16 = ((char*)((ng1)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t16, 2);
    if (t17 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng8)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t17 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);

LAB17:    xsi_set_current_line(61, ng0);
    t18 = ((char*)((ng2)));
    t19 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t20, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t21 = (t12 | t15);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB21;

LAB18:    if (t24 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t20) = 1;

LAB21:    t16 = (t20 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t20);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB24:    goto LAB16;

LAB8:    xsi_set_current_line(71, ng0);

LAB25:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB16;

LAB10:    xsi_set_current_line(90, ng0);

LAB46:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB16;

LAB12:    xsi_set_current_line(115, ng0);

LAB70:    xsi_set_current_line(116, ng0);
    t3 = (t0 + 2072U);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB71;

LAB72:
LAB73:    goto LAB16;

LAB20:    t9 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(65, ng0);
    t18 = ((char*)((ng3)));
    t19 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 2, 0LL);
    goto LAB24;

LAB26:    xsi_set_current_line(73, ng0);
    t6 = (t0 + 3272);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng4)));
    memset(t20, 0, 8);
    t16 = (t8 + 4);
    t18 = (t9 + 4);
    t15 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t15 ^ t21);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t18);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t18);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB32;

LAB29:    if (t29 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t20) = 1;

LAB32:    t32 = (t20 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t20);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(83, ng0);

LAB45:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 4, t5, 4, t6, 4);
    t7 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 4, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB35:    goto LAB28;

LAB31:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(74, ng0);

LAB36:    xsi_set_current_line(75, ng0);
    t38 = (t0 + 3592);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    t41 = ((char*)((ng1)));
    memset(t42, 0, 8);
    t43 = (t40 + 4);
    t44 = (t41 + 4);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB40;

LAB37:    if (t54 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t42) = 1;

LAB40:    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB43:    goto LAB35;

LAB39:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(76, ng0);

LAB44:    xsi_set_current_line(77, ng0);
    t64 = ((char*)((ng5)));
    t65 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t65, t64, 0, 0, 2, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB43;

LAB47:    xsi_set_current_line(92, ng0);
    t6 = (t0 + 3272);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    memset(t20, 0, 8);
    t16 = (t8 + 4);
    t18 = (t9 + 4);
    t15 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t15 ^ t21);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t18);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t18);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB53;

LAB50:    if (t29 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t20) = 1;

LAB53:    t32 = (t20 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t20);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(108, ng0);

LAB69:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 4, t5, 4, t6, 4);
    t7 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 4, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB56:    goto LAB49;

LAB52:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(93, ng0);

LAB57:    xsi_set_current_line(94, ng0);
    t38 = ((char*)((ng2)));
    t39 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 4, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3592);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3112);
    t7 = (t0 + 3112);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t16 = (t0 + 3752);
    t18 = (t16 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_generic_convert_bit_index(t20, t9, 2, t19, 3, 2);
    t32 = (t20 + 4);
    t10 = *((unsigned int *)t32);
    t17 = (!(t10));
    if (t17 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t20, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t21 = (t12 | t15);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB63;

LAB60:    if (t24 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t20) = 1;

LAB63:    t16 = (t20 + 4);
    t27 = *((unsigned int *)t16);
    t28 = (~(t27));
    t29 = *((unsigned int *)t20);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(102, ng0);

LAB68:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3752);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 3, t5, 3, t6, 3);
    t7 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 3, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB66:    goto LAB56;

LAB58:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t20), 1, 0LL);
    goto LAB59;

LAB62:    t9 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(97, ng0);

LAB67:    xsi_set_current_line(98, ng0);
    t18 = ((char*)((ng8)));
    t19 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 2, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB66;

LAB71:    xsi_set_current_line(117, ng0);
    t6 = (t0 + 3272);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng6)));
    memset(t20, 0, 8);
    t16 = (t8 + 4);
    t18 = (t9 + 4);
    t15 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t9);
    t22 = (t15 ^ t21);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t18);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t18);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB77;

LAB74:    if (t29 != 0)
        goto LAB76;

LAB75:    *((unsigned int *)t20) = 1;

LAB77:    t32 = (t20 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t20);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(124, ng0);

LAB82:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3272);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 4, t5, 4, t6, 4);
    t7 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t7, t20, 0, 0, 4, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB80:    goto LAB73;

LAB76:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB77;

LAB78:    xsi_set_current_line(118, ng0);

LAB81:    xsi_set_current_line(119, ng0);
    t38 = ((char*)((ng9)));
    t39 = (t0 + 3432);
    xsi_vlogvar_wait_assign_value(t39, t38, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB80;

}

static void Cont_132_3(char *t0)
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

LAB0:    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6128);
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
    t18 = (t0 + 6032);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_133_4(char *t0)
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

LAB0:    t1 = (t0 + 5664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6192);
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
    t18 = (t0 + 6048);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001444168345_2635300876_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_48_1,(void *)Always_57_2,(void *)Cont_132_3,(void *)Cont_133_4};
	xsi_register_didat("work_m_00000000001444168345_2635300876", "isim/UART_comp_tb_isim_beh.exe.sim/work/m_00000000001444168345_2635300876.didat");
	xsi_register_executes(pe);
}
