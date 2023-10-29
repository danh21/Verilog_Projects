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
static const char *ng0 = "D:/cd/ch2/DECODER3_8/decoder38_enable_high_case/decoder38_enable_high_case.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {16U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {32U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {64U, 0U};
static unsigned int ng15[] = {128U, 0U};
static unsigned int ng16[] = {254U, 0U};
static unsigned int ng17[] = {253U, 0U};
static unsigned int ng18[] = {251U, 0U};
static unsigned int ng19[] = {247U, 0U};
static unsigned int ng20[] = {239U, 0U};
static unsigned int ng21[] = {223U, 0U};
static unsigned int ng22[] = {191U, 0U};
static unsigned int ng23[] = {127U, 0U};
static unsigned int ng24[] = {255U, 0U};



static void Always_26_0(char *t0)
{
    char t11[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    char *t40;

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
    t4 = (t0 + 1208U);
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
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB38;

LAB36:    if (*((unsigned int *)t2) == 0)
        goto LAB35;

LAB37:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB38:    t5 = (t11 + 4);
    t12 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t11) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB40;

LAB39:    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 1U);
    t24 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t24 & 1U);
    t13 = (t11 + 4);
    t25 = *((unsigned int *)t13);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng24)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB43:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(28, ng0);
    t12 = (t0 + 1048U);
    t13 = *((char **)t12);
    memset(t11, 0, 8);
    t12 = (t13 + 4);
    t14 = *((unsigned int *)t12);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t12) == 0)
        goto LAB8;

LAB10:    t19 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t19) = 1;

LAB11:    t20 = (t11 + 4);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (~(t22));
    *((unsigned int *)t11) = t23;
    *((unsigned int *)t20) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB13;

LAB12:    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t29 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t29 & 1U);
    t30 = (t11 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (~(t31));
    t33 = *((unsigned int *)t11);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB16:    goto LAB7;

LAB8:    *((unsigned int *)t11) = 1;
    goto LAB11;

LAB13:    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t21);
    *((unsigned int *)t11) = (t24 | t25);
    t26 = *((unsigned int *)t20);
    t27 = *((unsigned int *)t21);
    *((unsigned int *)t20) = (t26 | t27);
    goto LAB12;

LAB14:    xsi_set_current_line(29, ng0);
    t36 = (t0 + 1368U);
    t37 = *((char **)t36);

LAB17:    t36 = ((char*)((ng1)));
    t38 = xsi_vlog_unsigned_case_compare(t37, 3, t36, 32);
    if (t38 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t38 = xsi_vlog_unsigned_case_compare(t37, 3, t2, 32);
    if (t38 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng5)));
    t38 = xsi_vlog_unsigned_case_compare(t37, 3, t2, 32);
    if (t38 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng7)));
    t38 = xsi_vlog_unsigned_case_compare(t37, 3, t2, 32);
    if (t38 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng9)));
    t38 = xsi_vlog_unsigned_case_compare(t37, 3, t2, 32);
    if (t38 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng11)));
    t38 = xsi_vlog_unsigned_case_compare(t37, 3, t2, 32);
    if (t38 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng13)));
    t38 = xsi_vlog_unsigned_case_compare(t37, 3, t2, 32);
    if (t38 == 1)
        goto LAB30;

LAB31:
LAB33:
LAB32:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB34:    goto LAB16;

LAB18:    xsi_set_current_line(30, ng0);
    t39 = ((char*)((ng2)));
    t40 = (t0 + 1768);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 8);
    goto LAB34;

LAB20:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB34;

LAB22:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB34;

LAB24:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB34;

LAB26:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB34;

LAB28:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB34;

LAB30:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB34;

LAB35:    *((unsigned int *)t11) = 1;
    goto LAB38;

LAB40:    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t5) = (t18 | t22);
    goto LAB39;

LAB41:    xsi_set_current_line(42, ng0);
    t19 = (t0 + 1368U);
    t20 = *((char **)t19);

LAB44:    t19 = ((char*)((ng1)));
    t38 = xsi_vlog_unsigned_case_compare(t20, 3, t19, 32);
    if (t38 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng3)));
    t38 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 32);
    if (t38 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng5)));
    t38 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 32);
    if (t38 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng7)));
    t38 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 32);
    if (t38 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng9)));
    t38 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 32);
    if (t38 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng11)));
    t38 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 32);
    if (t38 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng13)));
    t38 = xsi_vlog_unsigned_case_compare(t20, 3, t2, 32);
    if (t38 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng23)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB61:    goto LAB43;

LAB45:    xsi_set_current_line(43, ng0);
    t21 = ((char*)((ng16)));
    t30 = (t0 + 1768);
    xsi_vlogvar_assign_value(t30, t21, 0, 0, 8);
    goto LAB61;

LAB47:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB61;

LAB49:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB61;

LAB51:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB61;

LAB53:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB61;

LAB55:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB61;

LAB57:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    goto LAB61;

}


extern void work_m_00000000003597874458_0304680330_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000003597874458_0304680330", "isim/tb_isim_beh.exe.sim/work/m_00000000003597874458_0304680330.didat");
	xsi_register_executes(pe);
}
