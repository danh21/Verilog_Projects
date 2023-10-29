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
static const char *ng0 = "D:/cd/thiet ke he thong va vi mach/PONG CHU/UART/UART RECEIVING SUBSYSTEM/project 2/UART_RECEIVER_COMPLETE/FIFO_rx.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};



static void Always_33_0(char *t0)
{
    char t15[8];
    char t39[8];
    char t47[8];
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
    char *t13;
    char *t14;
    char *t16;
    char *t17;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4240);
    *((int *)t2) = 1;
    t3 = (t0 + 3952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB31;

LAB32:
LAB33:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3000);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2840);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t16 = (t11 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB17;

LAB14:    if (t27 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t15) = 1;

LAB17:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t5) == 0)
        goto LAB21;

LAB23:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;

LAB24:    t12 = (t15 + 4);
    t13 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t15) = t19;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB26;

LAB25:    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 1U);
    t14 = (t15 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t32 = (t29 != 0);
    if (t32 > 0)
        goto LAB27;

LAB28:
LAB29:    goto LAB12;

LAB16:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(45, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 1, 0LL);
    goto LAB20;

LAB21:    *((unsigned int *)t15) = 1;
    goto LAB24;

LAB26:    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t15) = (t20 | t21);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t22 | t23);
    goto LAB25;

LAB27:    xsi_set_current_line(47, ng0);

LAB30:    xsi_set_current_line(48, ng0);
    t16 = (t0 + 2680);
    t17 = (t16 + 56U);
    t30 = *((char **)t17);
    t31 = (t0 + 2680);
    t37 = (t31 + 72U);
    t38 = *((char **)t37);
    t40 = (t0 + 2680);
    t41 = (t40 + 64U);
    t42 = *((char **)t41);
    t43 = (t0 + 3000);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    xsi_vlog_generic_get_array_select_value(t39, 8, t30, t38, t42, 2, 1, t45, 4, 2);
    t46 = (t0 + 2520);
    xsi_vlogvar_wait_assign_value(t46, t39, 0, 0, 8, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 4, t4, 4, t5, 4);
    t11 = (t0 + 3000);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB29;

LAB31:    xsi_set_current_line(54, ng0);

LAB34:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 2840);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t11, 4, t12, 32);
    t13 = (t0 + 3000);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memset(t39, 0, 8);
    t17 = (t15 + 4);
    t30 = (t16 + 4);
    t18 = *((unsigned int *)t15);
    t19 = *((unsigned int *)t16);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t17);
    t22 = *((unsigned int *)t30);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t30);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB38;

LAB35:    if (t27 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t39) = 1;

LAB38:    t37 = (t39 + 4);
    t32 = *((unsigned int *)t37);
    t33 = (~(t32));
    t34 = *((unsigned int *)t39);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t5) == 0)
        goto LAB42;

LAB44:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;

LAB45:    t12 = (t15 + 4);
    t13 = (t4 + 4);
    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    *((unsigned int *)t15) = t19;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB47;

LAB46:    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t25 & 1U);
    t14 = (t15 + 4);
    t26 = *((unsigned int *)t14);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t32 = (t29 != 0);
    if (t32 > 0)
        goto LAB48;

LAB49:
LAB50:    goto LAB33;

LAB37:    t31 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(56, ng0);
    t38 = ((char*)((ng1)));
    t40 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t40, t38, 0, 0, 1, 0LL);
    goto LAB41;

LAB42:    *((unsigned int *)t15) = 1;
    goto LAB45;

LAB47:    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t15) = (t20 | t21);
    t22 = *((unsigned int *)t12);
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t22 | t23);
    goto LAB46;

LAB48:    xsi_set_current_line(58, ng0);

LAB51:    xsi_set_current_line(59, ng0);
    t16 = (t0 + 1320U);
    t17 = *((char **)t16);
    t16 = (t0 + 2680);
    t30 = (t0 + 2680);
    t31 = (t30 + 72U);
    t37 = *((char **)t31);
    t38 = (t0 + 2680);
    t40 = (t38 + 64U);
    t41 = *((char **)t40);
    t42 = (t0 + 2840);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_convert_array_indices(t39, t47, t37, t41, 2, 1, t44, 4, 2);
    t45 = (t39 + 4);
    t33 = *((unsigned int *)t45);
    t48 = (!(t33));
    t46 = (t47 + 4);
    t34 = *((unsigned int *)t46);
    t49 = (!(t34));
    t50 = (t48 && t49);
    if (t50 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2840);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 4, t4, 4, t5, 4);
    t11 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t11, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2200);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB50;

LAB52:    t35 = *((unsigned int *)t39);
    t36 = *((unsigned int *)t47);
    t51 = (t35 - t36);
    t52 = (t51 + 1);
    xsi_vlogvar_wait_assign_value(t16, t17, 0, *((unsigned int *)t47), t52, 0LL);
    goto LAB53;

}


extern void work_m_00000000002920967704_0524941095_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000002920967704_0524941095", "isim/UART_comp_tb_isim_beh.exe.sim/work/m_00000000002920967704_0524941095.didat");
	xsi_register_executes(pe);
}
