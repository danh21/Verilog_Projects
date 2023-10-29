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
static const char *ng0 = "D:/cd/TT FPGA/project/tuan 2/da hop/mux81_enable/mux81_enable.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static unsigned int ng9[] = {1U, 1U};



static void Always_27_0(char *t0)
{
    char t4[8];
    char t31[8];
    char t55[8];
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
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1368U);
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

LAB12:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

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

LAB11:    xsi_set_current_line(29, ng0);
    t29 = (t0 + 1208U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t32 = (t30 + 4);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t30);
    t35 = *((unsigned int *)t29);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB17;

LAB14:    if (t43 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t31) = 1;

LAB17:    t47 = (t31 + 4);
    t48 = *((unsigned int *)t47);
    t49 = (~(t48));
    t50 = *((unsigned int *)t31);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB24;

LAB21:    if (t19 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t4) = 1;

LAB24:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB31;

LAB28:    if (t19 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t4) = 1;

LAB31:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB38;

LAB35:    if (t19 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t4) = 1;

LAB38:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB45;

LAB42:    if (t19 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t4) = 1;

LAB45:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB52;

LAB49:    if (t19 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t4) = 1;

LAB52:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB59;

LAB56:    if (t19 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t4) = 1;

LAB59:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t15 = (t10 ^ t11);
    t16 = (t9 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t6);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB66;

LAB63:    if (t19 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t4) = 1;

LAB66:    t13 = (t4 + 4);
    t22 = *((unsigned int *)t13);
    t24 = (~(t22));
    t25 = *((unsigned int *)t4);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB69:
LAB62:
LAB55:
LAB48:
LAB41:
LAB34:
LAB27:
LAB20:    goto LAB13;

LAB16:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(29, ng0);
    t53 = (t0 + 1048U);
    t54 = *((char **)t53);
    memset(t55, 0, 8);
    t53 = (t55 + 4);
    t56 = (t54 + 4);
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    t59 = (t58 & 1);
    *((unsigned int *)t55) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 0);
    t62 = (t61 & 1);
    *((unsigned int *)t53) = t62;
    t63 = (t0 + 1768);
    xsi_vlogvar_assign_value(t63, t55, 0, 0, 1);
    goto LAB20;

LAB23:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(30, ng0);
    t14 = (t0 + 1048U);
    t23 = *((char **)t14);
    memset(t31, 0, 8);
    t14 = (t31 + 4);
    t29 = (t23 + 4);
    t28 = *((unsigned int *)t23);
    t34 = (t28 >> 1);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 1);
    t38 = (t37 & 1);
    *((unsigned int *)t14) = t38;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 1);
    goto LAB27;

LAB30:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(31, ng0);
    t14 = (t0 + 1048U);
    t23 = *((char **)t14);
    memset(t31, 0, 8);
    t14 = (t31 + 4);
    t29 = (t23 + 4);
    t28 = *((unsigned int *)t23);
    t34 = (t28 >> 2);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 2);
    t38 = (t37 & 1);
    *((unsigned int *)t14) = t38;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 1);
    goto LAB34;

LAB37:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(32, ng0);
    t14 = (t0 + 1048U);
    t23 = *((char **)t14);
    memset(t31, 0, 8);
    t14 = (t31 + 4);
    t29 = (t23 + 4);
    t28 = *((unsigned int *)t23);
    t34 = (t28 >> 3);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 3);
    t38 = (t37 & 1);
    *((unsigned int *)t14) = t38;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 1);
    goto LAB41;

LAB44:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(33, ng0);
    t14 = (t0 + 1048U);
    t23 = *((char **)t14);
    memset(t31, 0, 8);
    t14 = (t31 + 4);
    t29 = (t23 + 4);
    t28 = *((unsigned int *)t23);
    t34 = (t28 >> 4);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 4);
    t38 = (t37 & 1);
    *((unsigned int *)t14) = t38;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 1);
    goto LAB48;

LAB51:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(34, ng0);
    t14 = (t0 + 1048U);
    t23 = *((char **)t14);
    memset(t31, 0, 8);
    t14 = (t31 + 4);
    t29 = (t23 + 4);
    t28 = *((unsigned int *)t23);
    t34 = (t28 >> 5);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 5);
    t38 = (t37 & 1);
    *((unsigned int *)t14) = t38;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 1);
    goto LAB55;

LAB58:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(35, ng0);
    t14 = (t0 + 1048U);
    t23 = *((char **)t14);
    memset(t31, 0, 8);
    t14 = (t31 + 4);
    t29 = (t23 + 4);
    t28 = *((unsigned int *)t23);
    t34 = (t28 >> 6);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 6);
    t38 = (t37 & 1);
    *((unsigned int *)t14) = t38;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 1);
    goto LAB62;

LAB65:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(36, ng0);
    t14 = (t0 + 1048U);
    t23 = *((char **)t14);
    memset(t31, 0, 8);
    t14 = (t31 + 4);
    t29 = (t23 + 4);
    t28 = *((unsigned int *)t23);
    t34 = (t28 >> 7);
    t35 = (t34 & 1);
    *((unsigned int *)t31) = t35;
    t36 = *((unsigned int *)t29);
    t37 = (t36 >> 7);
    t38 = (t37 & 1);
    *((unsigned int *)t14) = t38;
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 1);
    goto LAB69;

}


extern void work_m_00000000001462898381_2456672860_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000001462898381_2456672860", "isim/tb_isim_beh.exe.sim/work/m_00000000001462898381_2456672860.didat");
	xsi_register_executes(pe);
}
