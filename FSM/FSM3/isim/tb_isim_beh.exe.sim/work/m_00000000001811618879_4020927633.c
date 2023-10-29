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
static const char *ng0 = "D:/cd/TT FPGA/project/tuan 8/bai3/FSM.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};



static void Always_31_0(char *t0)
{
    char t4[8];
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

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 1616U);
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

LAB12:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);

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

LAB11:    xsi_set_current_line(33, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 2, 0LL);
    goto LAB13;

}

static void Always_37_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4248);
    *((int *)t2) = 1;
    t3 = (t0 + 3696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2336);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:
LAB13:
LAB12:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t10 = (t0 + 1776U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t10) == 0)
        goto LAB15;

LAB17:    t17 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t17) = 1;

LAB18:    t18 = (t9 + 4);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB20;

LAB19:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t28 = (t9 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB23:    goto LAB14;

LAB8:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1776U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t3) == 0)
        goto LAB24;

LAB26:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB27:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB29;

LAB28:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB32:    goto LAB14;

LAB10:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1776U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB36;

LAB34:    if (*((unsigned int *)t3) == 0)
        goto LAB33;

LAB35:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB36:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB38;

LAB37:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB41:    goto LAB14;

LAB15:    *((unsigned int *)t9) = 1;
    goto LAB18;

LAB20:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t24 | t25);
    goto LAB19;

LAB21:    xsi_set_current_line(40, ng0);
    t34 = ((char*)((ng2)));
    t35 = (t0 + 2496);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 2);
    goto LAB23;

LAB24:    *((unsigned int *)t9) = 1;
    goto LAB27;

LAB29:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB28;

LAB30:    xsi_set_current_line(44, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 2496);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 2);
    goto LAB32;

LAB33:    *((unsigned int *)t9) = 1;
    goto LAB36;

LAB38:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB37;

LAB39:    xsi_set_current_line(48, ng0);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 2496);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 2);
    goto LAB41;

}

static void Cont_54_2(char *t0)
{
    char t6[8];
    char t24[8];
    char t55[8];
    char t72[8];
    char t88[8];
    char t107[8];
    char t139[8];
    char t147[8];
    char t175[8];
    char t192[8];
    char t208[8];
    char t227[8];
    char t261[8];
    char t292[8];
    char t300[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t188;
    char *t189;
    char *t190;
    char *t191;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    char *t207;
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    char *t241;
    char *t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    int t251;
    int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    char *t260;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    char *t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    char *t274;
    char *t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    int t284;
    int t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    char *t299;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    char *t304;
    char *t305;
    char *t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    char *t315;
    unsigned int t316;
    unsigned int t317;
    unsigned int t318;
    int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    int t323;
    unsigned int t324;
    unsigned int t325;
    unsigned int t326;
    unsigned int t327;
    char *t328;
    char *t329;
    char *t330;
    char *t331;
    char *t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;
    unsigned int t336;
    unsigned int t337;
    char *t338;
    unsigned int t339;
    unsigned int t340;
    char *t341;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    t22 = (t0 + 1776U);
    t23 = *((char **)t22);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t23);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t22 = (t6 + 4);
    t28 = (t23 + 4);
    t29 = (t24 + 4);
    t30 = *((unsigned int *)t22);
    t31 = *((unsigned int *)t28);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = *((unsigned int *)t29);
    t34 = (t33 != 0);
    if (t34 == 1)
        goto LAB8;

LAB9:
LAB10:    memset(t55, 0, 8);
    t56 = (t24 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t24);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t56) != 0)
        goto LAB13;

LAB14:    t63 = (t55 + 4);
    t64 = *((unsigned int *)t55);
    t65 = (!(t64));
    t66 = *((unsigned int *)t63);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB15;

LAB16:    memcpy(t147, t55, 8);

LAB17:    memset(t175, 0, 8);
    t176 = (t147 + 4);
    t177 = *((unsigned int *)t176);
    t178 = (~(t177));
    t179 = *((unsigned int *)t147);
    t180 = (t179 & t178);
    t181 = (t180 & 1U);
    if (t181 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t176) != 0)
        goto LAB40;

LAB41:    t183 = (t175 + 4);
    t184 = *((unsigned int *)t175);
    t185 = (!(t184));
    t186 = *((unsigned int *)t183);
    t187 = (t185 || t186);
    if (t187 > 0)
        goto LAB42;

LAB43:    memcpy(t300, t175, 8);

LAB44:    t328 = (t0 + 4344);
    t329 = (t328 + 56U);
    t330 = *((char **)t329);
    t331 = (t330 + 56U);
    t332 = *((char **)t331);
    memset(t332, 0, 8);
    t333 = 1U;
    t334 = t333;
    t335 = (t300 + 4);
    t336 = *((unsigned int *)t300);
    t333 = (t333 & t336);
    t337 = *((unsigned int *)t335);
    t334 = (t334 & t337);
    t338 = (t332 + 4);
    t339 = *((unsigned int *)t332);
    *((unsigned int *)t332) = (t339 | t333);
    t340 = *((unsigned int *)t338);
    *((unsigned int *)t338) = (t340 | t334);
    xsi_driver_vfirst_trans(t328, 0, 0);
    t341 = (t0 + 4264);
    *((int *)t341) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t24) = (t35 | t36);
    t37 = (t6 + 4);
    t38 = (t23 + 4);
    t39 = *((unsigned int *)t6);
    t40 = (~(t39));
    t41 = *((unsigned int *)t37);
    t42 = (~(t41));
    t43 = *((unsigned int *)t23);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (~(t45));
    t47 = (t40 & t42);
    t48 = (t44 & t46);
    t49 = (~(t47));
    t50 = (~(t48));
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t51 & t49);
    t52 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t52 & t50);
    t53 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t53 & t49);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    goto LAB10;

LAB11:    *((unsigned int *)t55) = 1;
    goto LAB14;

LAB13:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB14;

LAB15:    t68 = (t0 + 2336);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = ((char*)((ng3)));
    memset(t72, 0, 8);
    t73 = (t70 + 4);
    t74 = (t71 + 4);
    t75 = *((unsigned int *)t70);
    t76 = *((unsigned int *)t71);
    t77 = (t75 ^ t76);
    t78 = *((unsigned int *)t73);
    t79 = *((unsigned int *)t74);
    t80 = (t78 ^ t79);
    t81 = (t77 | t80);
    t82 = *((unsigned int *)t73);
    t83 = *((unsigned int *)t74);
    t84 = (t82 | t83);
    t85 = (~(t84));
    t86 = (t81 & t85);
    if (t86 != 0)
        goto LAB21;

LAB18:    if (t84 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t72) = 1;

LAB21:    t89 = (t0 + 1776U);
    t90 = *((char **)t89);
    memset(t88, 0, 8);
    t89 = (t90 + 4);
    t91 = *((unsigned int *)t89);
    t92 = (~(t91));
    t93 = *((unsigned int *)t90);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB25;

LAB23:    if (*((unsigned int *)t89) == 0)
        goto LAB22;

LAB24:    t96 = (t88 + 4);
    *((unsigned int *)t88) = 1;
    *((unsigned int *)t96) = 1;

LAB25:    t97 = (t88 + 4);
    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = (~(t99));
    *((unsigned int *)t88) = t100;
    *((unsigned int *)t97) = 0;
    if (*((unsigned int *)t98) != 0)
        goto LAB27;

LAB26:    t105 = *((unsigned int *)t88);
    *((unsigned int *)t88) = (t105 & 1U);
    t106 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t106 & 1U);
    t108 = *((unsigned int *)t72);
    t109 = *((unsigned int *)t88);
    t110 = (t108 & t109);
    *((unsigned int *)t107) = t110;
    t111 = (t72 + 4);
    t112 = (t88 + 4);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t111);
    t115 = *((unsigned int *)t112);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 != 0);
    if (t118 == 1)
        goto LAB28;

LAB29:
LAB30:    memset(t139, 0, 8);
    t140 = (t107 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t107);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t140) != 0)
        goto LAB33;

LAB34:    t148 = *((unsigned int *)t55);
    t149 = *((unsigned int *)t139);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = (t55 + 4);
    t152 = (t139 + 4);
    t153 = (t147 + 4);
    t154 = *((unsigned int *)t151);
    t155 = *((unsigned int *)t152);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 != 0);
    if (t158 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB17;

LAB20:    t87 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t88) = 1;
    goto LAB25;

LAB27:    t101 = *((unsigned int *)t88);
    t102 = *((unsigned int *)t98);
    *((unsigned int *)t88) = (t101 | t102);
    t103 = *((unsigned int *)t97);
    t104 = *((unsigned int *)t98);
    *((unsigned int *)t97) = (t103 | t104);
    goto LAB26;

LAB28:    t119 = *((unsigned int *)t107);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t107) = (t119 | t120);
    t121 = (t72 + 4);
    t122 = (t88 + 4);
    t123 = *((unsigned int *)t72);
    t124 = (~(t123));
    t125 = *((unsigned int *)t121);
    t126 = (~(t125));
    t127 = *((unsigned int *)t88);
    t128 = (~(t127));
    t129 = *((unsigned int *)t122);
    t130 = (~(t129));
    t131 = (t124 & t126);
    t132 = (t128 & t130);
    t133 = (~(t131));
    t134 = (~(t132));
    t135 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t135 & t133);
    t136 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t136 & t134);
    t137 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t137 & t133);
    t138 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t138 & t134);
    goto LAB30;

LAB31:    *((unsigned int *)t139) = 1;
    goto LAB34;

LAB33:    t146 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB34;

LAB35:    t159 = *((unsigned int *)t147);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t147) = (t159 | t160);
    t161 = (t55 + 4);
    t162 = (t139 + 4);
    t163 = *((unsigned int *)t161);
    t164 = (~(t163));
    t165 = *((unsigned int *)t55);
    t166 = (t165 & t164);
    t167 = *((unsigned int *)t162);
    t168 = (~(t167));
    t169 = *((unsigned int *)t139);
    t170 = (t169 & t168);
    t171 = (~(t166));
    t172 = (~(t170));
    t173 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t173 & t171);
    t174 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t174 & t172);
    goto LAB37;

LAB38:    *((unsigned int *)t175) = 1;
    goto LAB41;

LAB40:    t182 = (t175 + 4);
    *((unsigned int *)t175) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB41;

LAB42:    t188 = (t0 + 2336);
    t189 = (t188 + 56U);
    t190 = *((char **)t189);
    t191 = ((char*)((ng1)));
    memset(t192, 0, 8);
    t193 = (t190 + 4);
    t194 = (t191 + 4);
    t195 = *((unsigned int *)t190);
    t196 = *((unsigned int *)t191);
    t197 = (t195 ^ t196);
    t198 = *((unsigned int *)t193);
    t199 = *((unsigned int *)t194);
    t200 = (t198 ^ t199);
    t201 = (t197 | t200);
    t202 = *((unsigned int *)t193);
    t203 = *((unsigned int *)t194);
    t204 = (t202 | t203);
    t205 = (~(t204));
    t206 = (t201 & t205);
    if (t206 != 0)
        goto LAB48;

LAB45:    if (t204 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t192) = 1;

LAB48:    t209 = (t0 + 1776U);
    t210 = *((char **)t209);
    memset(t208, 0, 8);
    t209 = (t210 + 4);
    t211 = *((unsigned int *)t209);
    t212 = (~(t211));
    t213 = *((unsigned int *)t210);
    t214 = (t213 & t212);
    t215 = (t214 & 1U);
    if (t215 != 0)
        goto LAB52;

LAB50:    if (*((unsigned int *)t209) == 0)
        goto LAB49;

LAB51:    t216 = (t208 + 4);
    *((unsigned int *)t208) = 1;
    *((unsigned int *)t216) = 1;

LAB52:    t217 = (t208 + 4);
    t218 = (t210 + 4);
    t219 = *((unsigned int *)t210);
    t220 = (~(t219));
    *((unsigned int *)t208) = t220;
    *((unsigned int *)t217) = 0;
    if (*((unsigned int *)t218) != 0)
        goto LAB54;

LAB53:    t225 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t225 & 1U);
    t226 = *((unsigned int *)t217);
    *((unsigned int *)t217) = (t226 & 1U);
    t228 = *((unsigned int *)t192);
    t229 = *((unsigned int *)t208);
    t230 = (t228 & t229);
    *((unsigned int *)t227) = t230;
    t231 = (t192 + 4);
    t232 = (t208 + 4);
    t233 = (t227 + 4);
    t234 = *((unsigned int *)t231);
    t235 = *((unsigned int *)t232);
    t236 = (t234 | t235);
    *((unsigned int *)t233) = t236;
    t237 = *((unsigned int *)t233);
    t238 = (t237 != 0);
    if (t238 == 1)
        goto LAB55;

LAB56:
LAB57:    t259 = (t0 + 1776U);
    t260 = *((char **)t259);
    t262 = *((unsigned int *)t227);
    t263 = *((unsigned int *)t260);
    t264 = (t262 & t263);
    *((unsigned int *)t261) = t264;
    t259 = (t227 + 4);
    t265 = (t260 + 4);
    t266 = (t261 + 4);
    t267 = *((unsigned int *)t259);
    t268 = *((unsigned int *)t265);
    t269 = (t267 | t268);
    *((unsigned int *)t266) = t269;
    t270 = *((unsigned int *)t266);
    t271 = (t270 != 0);
    if (t271 == 1)
        goto LAB58;

LAB59:
LAB60:    memset(t292, 0, 8);
    t293 = (t261 + 4);
    t294 = *((unsigned int *)t293);
    t295 = (~(t294));
    t296 = *((unsigned int *)t261);
    t297 = (t296 & t295);
    t298 = (t297 & 1U);
    if (t298 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t293) != 0)
        goto LAB63;

LAB64:    t301 = *((unsigned int *)t175);
    t302 = *((unsigned int *)t292);
    t303 = (t301 | t302);
    *((unsigned int *)t300) = t303;
    t304 = (t175 + 4);
    t305 = (t292 + 4);
    t306 = (t300 + 4);
    t307 = *((unsigned int *)t304);
    t308 = *((unsigned int *)t305);
    t309 = (t307 | t308);
    *((unsigned int *)t306) = t309;
    t310 = *((unsigned int *)t306);
    t311 = (t310 != 0);
    if (t311 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB44;

LAB47:    t207 = (t192 + 4);
    *((unsigned int *)t192) = 1;
    *((unsigned int *)t207) = 1;
    goto LAB48;

LAB49:    *((unsigned int *)t208) = 1;
    goto LAB52;

LAB54:    t221 = *((unsigned int *)t208);
    t222 = *((unsigned int *)t218);
    *((unsigned int *)t208) = (t221 | t222);
    t223 = *((unsigned int *)t217);
    t224 = *((unsigned int *)t218);
    *((unsigned int *)t217) = (t223 | t224);
    goto LAB53;

LAB55:    t239 = *((unsigned int *)t227);
    t240 = *((unsigned int *)t233);
    *((unsigned int *)t227) = (t239 | t240);
    t241 = (t192 + 4);
    t242 = (t208 + 4);
    t243 = *((unsigned int *)t192);
    t244 = (~(t243));
    t245 = *((unsigned int *)t241);
    t246 = (~(t245));
    t247 = *((unsigned int *)t208);
    t248 = (~(t247));
    t249 = *((unsigned int *)t242);
    t250 = (~(t249));
    t251 = (t244 & t246);
    t252 = (t248 & t250);
    t253 = (~(t251));
    t254 = (~(t252));
    t255 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t255 & t253);
    t256 = *((unsigned int *)t233);
    *((unsigned int *)t233) = (t256 & t254);
    t257 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t257 & t253);
    t258 = *((unsigned int *)t227);
    *((unsigned int *)t227) = (t258 & t254);
    goto LAB57;

LAB58:    t272 = *((unsigned int *)t261);
    t273 = *((unsigned int *)t266);
    *((unsigned int *)t261) = (t272 | t273);
    t274 = (t227 + 4);
    t275 = (t260 + 4);
    t276 = *((unsigned int *)t227);
    t277 = (~(t276));
    t278 = *((unsigned int *)t274);
    t279 = (~(t278));
    t280 = *((unsigned int *)t260);
    t281 = (~(t280));
    t282 = *((unsigned int *)t275);
    t283 = (~(t282));
    t284 = (t277 & t279);
    t285 = (t281 & t283);
    t286 = (~(t284));
    t287 = (~(t285));
    t288 = *((unsigned int *)t266);
    *((unsigned int *)t266) = (t288 & t286);
    t289 = *((unsigned int *)t266);
    *((unsigned int *)t266) = (t289 & t287);
    t290 = *((unsigned int *)t261);
    *((unsigned int *)t261) = (t290 & t286);
    t291 = *((unsigned int *)t261);
    *((unsigned int *)t261) = (t291 & t287);
    goto LAB60;

LAB61:    *((unsigned int *)t292) = 1;
    goto LAB64;

LAB63:    t299 = (t292 + 4);
    *((unsigned int *)t292) = 1;
    *((unsigned int *)t299) = 1;
    goto LAB64;

LAB65:    t312 = *((unsigned int *)t300);
    t313 = *((unsigned int *)t306);
    *((unsigned int *)t300) = (t312 | t313);
    t314 = (t175 + 4);
    t315 = (t292 + 4);
    t316 = *((unsigned int *)t314);
    t317 = (~(t316));
    t318 = *((unsigned int *)t175);
    t319 = (t318 & t317);
    t320 = *((unsigned int *)t315);
    t321 = (~(t320));
    t322 = *((unsigned int *)t292);
    t323 = (t322 & t321);
    t324 = (~(t319));
    t325 = (~(t323));
    t326 = *((unsigned int *)t306);
    *((unsigned int *)t306) = (t326 & t324);
    t327 = *((unsigned int *)t306);
    *((unsigned int *)t306) = (t327 & t325);
    goto LAB67;

}


extern void work_m_00000000001811618879_4020927633_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Always_37_1,(void *)Cont_54_2};
	xsi_register_didat("work_m_00000000001811618879_4020927633", "isim/tb_isim_beh.exe.sim/work/m_00000000001811618879_4020927633.didat");
	xsi_register_executes(pe);
}
