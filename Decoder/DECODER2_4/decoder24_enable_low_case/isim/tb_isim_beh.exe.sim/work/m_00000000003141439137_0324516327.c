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
static const char *ng0 = "D:/cd/ch2/DECODER2_4/decoder24_enable_low_case/decoder24_enable_low_case.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {15U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {14U, 0U};
static unsigned int ng5[] = {13U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {11U, 0U};
static unsigned int ng8[] = {7U, 0U};



static void Always_26_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:
LAB9:
LAB8:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t6 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 4);

LAB20:
LAB10:    goto LAB2;

LAB6:    xsi_set_current_line(28, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    goto LAB10;

LAB12:    xsi_set_current_line(31, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    goto LAB20;

LAB14:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng5)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    goto LAB20;

LAB16:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng7)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 4);
    goto LAB20;

}


extern void work_m_00000000003141439137_0324516327_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000003141439137_0324516327", "isim/tb_isim_beh.exe.sim/work/m_00000000003141439137_0324516327.didat");
	xsi_register_executes(pe);
}
