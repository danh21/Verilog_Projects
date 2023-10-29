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
static const char *ng0 = "D:/cd/TT FPGA/kiemtra_ic7485/ic7485.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {4, 0};
static int ng4[] = {2, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {1U, 0U};
static int ng7[] = {6, 0};
static unsigned int ng8[] = {0U, 0U};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {6U, 0U};



static void Always_26_0(char *t0)
{
    char t6[8];
    char t16[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    int t36;

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

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 1208U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 3);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t14) = t23;
    memset(t24, 0, 8);
    t25 = (t6 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB7;

LAB6:    t26 = (t16 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) > *((unsigned int *)t16))
        goto LAB8;

LAB9:    t28 = (t24 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 3);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 3);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t24, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB15;

LAB14:    t17 = (t16 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB18:    if (*((unsigned int *)t6) < *((unsigned int *)t16))
        goto LAB16;

LAB17:    t26 = (t24 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 2);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 2);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t24, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB23;

LAB22:    t17 = (t16 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t6) > *((unsigned int *)t16))
        goto LAB24;

LAB25:    t26 = (t24 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 2);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 2);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t24, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB31;

LAB30:    t17 = (t16 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t6) < *((unsigned int *)t16))
        goto LAB32;

LAB33:    t26 = (t24 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t24, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB39;

LAB38:    t17 = (t16 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB39;

LAB42:    if (*((unsigned int *)t6) > *((unsigned int *)t16))
        goto LAB40;

LAB41:    t26 = (t24 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t24, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB47;

LAB46:    t17 = (t16 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t6) < *((unsigned int *)t16))
        goto LAB48;

LAB49:    t26 = (t24 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t24, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB55;

LAB54:    t17 = (t16 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t6) > *((unsigned int *)t16))
        goto LAB56;

LAB57:    t26 = (t24 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t0 + 1208U);
    t7 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t5) = t23;
    memset(t24, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB63;

LAB62:    t17 = (t16 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t6) < *((unsigned int *)t16))
        goto LAB64;

LAB65:    t26 = (t24 + 4);
    t29 = *((unsigned int *)t26);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB70:    t2 = ((char*)((ng3)));
    t36 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t36 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng4)));
    t36 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t36 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng5)));
    t36 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t36 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng7)));
    t36 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t36 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng9)));
    t36 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 32);
    if (t36 == 1)
        goto LAB79;

LAB80:
LAB82:
LAB81:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);

LAB83:
LAB69:
LAB61:
LAB53:
LAB45:
LAB37:
LAB29:
LAB21:
LAB13:    goto LAB2;

LAB7:    t27 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t24) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(29, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 3);
    goto LAB13;

LAB15:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB17;

LAB16:    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB19:    xsi_set_current_line(31, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 3);
    goto LAB21;

LAB23:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB27:    xsi_set_current_line(34, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 3);
    goto LAB29;

LAB31:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t24) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(36, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 3);
    goto LAB37;

LAB39:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB41;

LAB40:    *((unsigned int *)t24) = 1;
    goto LAB41;

LAB43:    xsi_set_current_line(39, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 3);
    goto LAB45;

LAB47:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t24) = 1;
    goto LAB49;

LAB51:    xsi_set_current_line(41, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 3);
    goto LAB53;

LAB55:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t24) = 1;
    goto LAB57;

LAB59:    xsi_set_current_line(44, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 3);
    goto LAB61;

LAB63:    t25 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t24) = 1;
    goto LAB65;

LAB67:    xsi_set_current_line(46, ng0);
    t27 = ((char*)((ng2)));
    t28 = (t0 + 1768);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 3);
    goto LAB69;

LAB71:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB83;

LAB73:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB83;

LAB75:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB83;

LAB77:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB83;

LAB79:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB83;

}


extern void work_m_00000000001014683497_0679626142_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000001014683497_0679626142", "isim/tb_isim_beh.exe.sim/work/m_00000000001014683497_0679626142.didat");
	xsi_register_executes(pe);
}
