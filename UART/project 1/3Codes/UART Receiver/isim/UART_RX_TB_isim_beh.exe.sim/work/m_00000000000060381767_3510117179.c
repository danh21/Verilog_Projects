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
static const char *ng0 = "D:/cd/thiet ke he thong va vi mach/UART/3Codes/UART Receiver/UART_RX_tb.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {8, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {53U, 0U};
static const char *ng7 = "Test Passed - Correct Byte Received";
static const char *ng8 = "Test Failed - Incorrect Byte Received";
static const char *ng9 = "dump.vcd";



static int sp_UART_WRITE_BYTE(char *t1, char *t2)
{
    char t8[8];
    char t18[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1256);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(20, ng0);

LAB5:    xsi_set_current_line(22, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 2448);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(23, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 8600000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(24, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;
    goto LAB1;

LAB7:    xsi_set_current_line(27, ng0);
    xsi_set_current_line(27, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 2768);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB8:    t4 = (t1 + 2768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 2448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 8600000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(28, ng0);

LAB11:    xsi_set_current_line(29, ng0);
    t15 = (t1 + 2608);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t19 = (t1 + 2608);
    t20 = (t19 + 72U);
    t21 = *((char **)t20);
    t22 = (t1 + 2768);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_index_select_value(t18, 1, t17, t21, 2, t24, 32, 1);
    t25 = (t1 + 2448);
    xsi_vlogvar_wait_assign_value(t25, t18, 0, 0, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 8600000LL);
    *((char **)t3) = &&LAB12;
    t0 = 1;
    goto LAB1;

LAB12:    xsi_set_current_line(27, ng0);
    t4 = (t1 + 2768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 2768);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB8;

LAB13:    goto LAB4;

}

static void Always_46_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3496);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 2288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t0 + 2288);
    xsi_vlogvar_wait_assign_value(t14, t3, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

}

static void Initial_49_1(char *t0)
{
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;

LAB0:    t1 = (t0 + 3936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);

LAB4:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4504);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3744);
    t4 = (t0 + 1256);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2608);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 8);

LAB8:    t7 = (t0 + 3840);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 1256);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 3840);
    t17 = *((char **)t16);
    t16 = (t0 + 1256);
    t18 = (t0 + 3744);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4520);
    *((int *)t2) = 1;
    t3 = (t0 + 3968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:;
LAB11:    t7 = (t0 + 3936U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

LAB12:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1888U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t20, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t21 = *((unsigned int *)t3);
    t22 = *((unsigned int *)t2);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t5);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t4);
    t29 = *((unsigned int *)t5);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB16;

LAB13:    if (t30 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t20) = 1;

LAB16:    t7 = (t20 + 4);
    t33 = *((unsigned int *)t7);
    t34 = (~(t33));
    t35 = *((unsigned int *)t20);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(60, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);

LAB19:    xsi_set_current_line(61, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB15:    t6 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    goto LAB19;

}

static void Initial_64_2(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(65, ng0);

LAB2:    xsi_set_current_line(66, ng0);
    xsi_vcd_dumpfile(ng9);
    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng2)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)109, t0, (char)101);

LAB1:    return;
}


extern void work_m_00000000000060381767_3510117179_init()
{
	static char *pe[] = {(void *)Always_46_0,(void *)Initial_49_1,(void *)Initial_64_2};
	static char *se[] = {(void *)sp_UART_WRITE_BYTE};
	xsi_register_didat("work_m_00000000000060381767_3510117179", "isim/UART_RX_TB_isim_beh.exe.sim/work/m_00000000000060381767_3510117179.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
