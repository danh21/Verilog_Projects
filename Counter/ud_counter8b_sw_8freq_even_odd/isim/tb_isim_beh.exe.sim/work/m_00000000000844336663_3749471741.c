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
static const char *ng0 = "D:/cd/TT FPGA/project/tuan 4/ud_counter8b_sw_8freq_pause_inv - even_odd/counter_ud_inv.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};



static void Always_30_0(char *t0)
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

LAB0:    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2144U);
    t3 = *((char **)t2);
    t2 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(32, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB7;

}

static void Cont_38_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t37[8];
    char t64[8];
    char t65[8];
    char t70[8];
    char t72[8];
    char t103[8];
    char t112[8];
    char t117[8];
    char t118[8];
    char t123[8];
    char t125[8];
    char t156[8];
    char t165[8];
    char t170[8];
    char t171[8];
    char t174[8];
    char t201[8];
    char t202[8];
    char t207[8];
    char t209[8];
    char t240[8];
    char t249[8];
    char t254[8];
    char t255[8];
    char t260[8];
    char t262[8];
    char t293[8];
    char t302[8];
    char *t1;
    char *t2;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
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
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
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
    char *t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t119;
    char *t120;
    char *t121;
    char *t122;
    char *t124;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    char *t154;
    char *t155;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t172;
    char *t173;
    char *t175;
    char *t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    char *t203;
    char *t204;
    char *t205;
    char *t206;
    char *t208;
    char *t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    char *t224;
    char *t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    char *t231;
    char *t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    char *t236;
    char *t237;
    char *t238;
    char *t239;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    char *t245;
    char *t246;
    char *t247;
    char *t248;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    char *t256;
    char *t257;
    char *t258;
    char *t259;
    char *t261;
    char *t263;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    char *t277;
    char *t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    unsigned int t282;
    unsigned int t283;
    char *t284;
    char *t285;
    unsigned int t286;
    unsigned int t287;
    unsigned int t288;
    char *t289;
    char *t290;
    char *t291;
    char *t292;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    char *t298;
    char *t299;
    char *t300;
    char *t301;
    char *t303;
    char *t304;
    char *t305;
    char *t306;
    char *t307;
    unsigned int t308;
    unsigned int t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    char *t313;
    unsigned int t314;
    unsigned int t315;
    char *t316;

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1504U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t166 = *((unsigned int *)t4);
    t167 = (~(t166));
    t168 = *((unsigned int *)t29);
    t169 = (t167 || t168);
    if (t169 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t170, 8);

LAB20:    t303 = (t0 + 4392);
    t304 = (t303 + 56U);
    t305 = *((char **)t304);
    t306 = (t305 + 56U);
    t307 = *((char **)t306);
    memset(t307, 0, 8);
    t308 = 255U;
    t309 = t308;
    t310 = (t3 + 4);
    t311 = *((unsigned int *)t3);
    t308 = (t308 & t311);
    t312 = *((unsigned int *)t310);
    t309 = (t309 & t312);
    t313 = (t307 + 4);
    t314 = *((unsigned int *)t307);
    *((unsigned int *)t307) = (t314 | t308);
    t315 = *((unsigned int *)t313);
    *((unsigned int *)t313) = (t315 | t309);
    xsi_driver_vfirst_trans(t303, 0, 7);
    t316 = (t0 + 4296);
    *((int *)t316) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t35 = (t0 + 1824U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng2)));
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
        goto LAB24;

LAB21:    if (t49 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t37) = 1;

LAB24:    memset(t34, 0, 8);
    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t53) != 0)
        goto LAB27;

LAB28:    t60 = (t34 + 4);
    t61 = *((unsigned int *)t34);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB29;

LAB30:    t113 = *((unsigned int *)t34);
    t114 = (~(t113));
    t115 = *((unsigned int *)t60);
    t116 = (t114 || t115);
    if (t116 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t60) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t34) > 0)
        goto LAB35;

LAB36:    memcpy(t33, t117, 8);

LAB37:    goto LAB13;

LAB14:    t172 = (t0 + 1824U);
    t173 = *((char **)t172);
    t172 = ((char*)((ng2)));
    memset(t174, 0, 8);
    t175 = (t173 + 4);
    t176 = (t172 + 4);
    t177 = *((unsigned int *)t173);
    t178 = *((unsigned int *)t172);
    t179 = (t177 ^ t178);
    t180 = *((unsigned int *)t175);
    t181 = *((unsigned int *)t176);
    t182 = (t180 ^ t181);
    t183 = (t179 | t182);
    t184 = *((unsigned int *)t175);
    t185 = *((unsigned int *)t176);
    t186 = (t184 | t185);
    t187 = (~(t186));
    t188 = (t183 & t187);
    if (t188 != 0)
        goto LAB75;

LAB72:    if (t186 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t174) = 1;

LAB75:    memset(t171, 0, 8);
    t190 = (t174 + 4);
    t191 = *((unsigned int *)t190);
    t192 = (~(t191));
    t193 = *((unsigned int *)t174);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t190) != 0)
        goto LAB78;

LAB79:    t197 = (t171 + 4);
    t198 = *((unsigned int *)t171);
    t199 = *((unsigned int *)t197);
    t200 = (t198 || t199);
    if (t200 > 0)
        goto LAB80;

LAB81:    t250 = *((unsigned int *)t171);
    t251 = (~(t250));
    t252 = *((unsigned int *)t197);
    t253 = (t251 || t252);
    if (t253 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t197) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t171) > 0)
        goto LAB86;

LAB87:    memcpy(t170, t254, 8);

LAB88:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t170, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB27:    t59 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB28;

LAB29:    t66 = (t0 + 2544);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = ((char*)((ng3)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_mod(t70, 32, t68, 8, t69, 32);
    t71 = ((char*)((ng1)));
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
        goto LAB41;

LAB38:    if (t84 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t72) = 1;

LAB41:    memset(t65, 0, 8);
    t88 = (t72 + 4);
    t89 = *((unsigned int *)t88);
    t90 = (~(t89));
    t91 = *((unsigned int *)t72);
    t92 = (t91 & t90);
    t93 = (t92 & 1U);
    if (t93 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t88) != 0)
        goto LAB44;

LAB45:    t95 = (t65 + 4);
    t96 = *((unsigned int *)t65);
    t97 = *((unsigned int *)t95);
    t98 = (t96 || t97);
    if (t98 > 0)
        goto LAB46;

LAB47:    t104 = *((unsigned int *)t65);
    t105 = (~(t104));
    t106 = *((unsigned int *)t95);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t95) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t65) > 0)
        goto LAB52;

LAB53:    memcpy(t64, t112, 8);

LAB54:    goto LAB30;

LAB31:    t119 = (t0 + 2544);
    t120 = (t119 + 56U);
    t121 = *((char **)t120);
    t122 = ((char*)((ng3)));
    memset(t123, 0, 8);
    xsi_vlog_unsigned_mod(t123, 32, t121, 8, t122, 32);
    t124 = ((char*)((ng1)));
    memset(t125, 0, 8);
    t126 = (t123 + 4);
    t127 = (t124 + 4);
    t128 = *((unsigned int *)t123);
    t129 = *((unsigned int *)t124);
    t130 = (t128 ^ t129);
    t131 = *((unsigned int *)t126);
    t132 = *((unsigned int *)t127);
    t133 = (t131 ^ t132);
    t134 = (t130 | t133);
    t135 = *((unsigned int *)t126);
    t136 = *((unsigned int *)t127);
    t137 = (t135 | t136);
    t138 = (~(t137));
    t139 = (t134 & t138);
    if (t139 != 0)
        goto LAB58;

LAB55:    if (t137 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t125) = 1;

LAB58:    memset(t118, 0, 8);
    t141 = (t125 + 4);
    t142 = *((unsigned int *)t141);
    t143 = (~(t142));
    t144 = *((unsigned int *)t125);
    t145 = (t144 & t143);
    t146 = (t145 & 1U);
    if (t146 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t141) != 0)
        goto LAB61;

LAB62:    t148 = (t118 + 4);
    t149 = *((unsigned int *)t118);
    t150 = *((unsigned int *)t148);
    t151 = (t149 || t150);
    if (t151 > 0)
        goto LAB63;

LAB64:    t157 = *((unsigned int *)t118);
    t158 = (~(t157));
    t159 = *((unsigned int *)t148);
    t160 = (t158 || t159);
    if (t160 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t148) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t118) > 0)
        goto LAB69;

LAB70:    memcpy(t117, t165, 8);

LAB71:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t33, 32, t64, 32, t117, 32);
    goto LAB37;

LAB35:    memcpy(t33, t64, 8);
    goto LAB37;

LAB40:    t87 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t65) = 1;
    goto LAB45;

LAB44:    t94 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB45;

LAB46:    t99 = (t0 + 2544);
    t100 = (t99 + 56U);
    t101 = *((char **)t100);
    t102 = ((char*)((ng3)));
    memset(t103, 0, 8);
    xsi_vlog_unsigned_add(t103, 32, t101, 8, t102, 32);
    goto LAB47;

LAB48:    t108 = (t0 + 2544);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = ((char*)((ng2)));
    memset(t112, 0, 8);
    xsi_vlog_unsigned_add(t112, 32, t110, 8, t111, 32);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t64, 32, t103, 32, t112, 32);
    goto LAB54;

LAB52:    memcpy(t64, t103, 8);
    goto LAB54;

LAB57:    t140 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t140) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t118) = 1;
    goto LAB62;

LAB61:    t147 = (t118 + 4);
    *((unsigned int *)t118) = 1;
    *((unsigned int *)t147) = 1;
    goto LAB62;

LAB63:    t152 = (t0 + 2544);
    t153 = (t152 + 56U);
    t154 = *((char **)t153);
    t155 = ((char*)((ng2)));
    memset(t156, 0, 8);
    xsi_vlog_unsigned_add(t156, 32, t154, 8, t155, 32);
    goto LAB64;

LAB65:    t161 = (t0 + 2544);
    t162 = (t161 + 56U);
    t163 = *((char **)t162);
    t164 = ((char*)((ng3)));
    memset(t165, 0, 8);
    xsi_vlog_unsigned_add(t165, 32, t163, 8, t164, 32);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t117, 32, t156, 32, t165, 32);
    goto LAB71;

LAB69:    memcpy(t117, t156, 8);
    goto LAB71;

LAB74:    t189 = (t174 + 4);
    *((unsigned int *)t174) = 1;
    *((unsigned int *)t189) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t171) = 1;
    goto LAB79;

LAB78:    t196 = (t171 + 4);
    *((unsigned int *)t171) = 1;
    *((unsigned int *)t196) = 1;
    goto LAB79;

LAB80:    t203 = (t0 + 2544);
    t204 = (t203 + 56U);
    t205 = *((char **)t204);
    t206 = ((char*)((ng3)));
    memset(t207, 0, 8);
    xsi_vlog_unsigned_mod(t207, 32, t205, 8, t206, 32);
    t208 = ((char*)((ng1)));
    memset(t209, 0, 8);
    t210 = (t207 + 4);
    t211 = (t208 + 4);
    t212 = *((unsigned int *)t207);
    t213 = *((unsigned int *)t208);
    t214 = (t212 ^ t213);
    t215 = *((unsigned int *)t210);
    t216 = *((unsigned int *)t211);
    t217 = (t215 ^ t216);
    t218 = (t214 | t217);
    t219 = *((unsigned int *)t210);
    t220 = *((unsigned int *)t211);
    t221 = (t219 | t220);
    t222 = (~(t221));
    t223 = (t218 & t222);
    if (t223 != 0)
        goto LAB92;

LAB89:    if (t221 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t209) = 1;

LAB92:    memset(t202, 0, 8);
    t225 = (t209 + 4);
    t226 = *((unsigned int *)t225);
    t227 = (~(t226));
    t228 = *((unsigned int *)t209);
    t229 = (t228 & t227);
    t230 = (t229 & 1U);
    if (t230 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t225) != 0)
        goto LAB95;

LAB96:    t232 = (t202 + 4);
    t233 = *((unsigned int *)t202);
    t234 = *((unsigned int *)t232);
    t235 = (t233 || t234);
    if (t235 > 0)
        goto LAB97;

LAB98:    t241 = *((unsigned int *)t202);
    t242 = (~(t241));
    t243 = *((unsigned int *)t232);
    t244 = (t242 || t243);
    if (t244 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t232) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t202) > 0)
        goto LAB103;

LAB104:    memcpy(t201, t249, 8);

LAB105:    goto LAB81;

LAB82:    t256 = (t0 + 2544);
    t257 = (t256 + 56U);
    t258 = *((char **)t257);
    t259 = ((char*)((ng3)));
    memset(t260, 0, 8);
    xsi_vlog_unsigned_mod(t260, 32, t258, 8, t259, 32);
    t261 = ((char*)((ng1)));
    memset(t262, 0, 8);
    t263 = (t260 + 4);
    t264 = (t261 + 4);
    t265 = *((unsigned int *)t260);
    t266 = *((unsigned int *)t261);
    t267 = (t265 ^ t266);
    t268 = *((unsigned int *)t263);
    t269 = *((unsigned int *)t264);
    t270 = (t268 ^ t269);
    t271 = (t267 | t270);
    t272 = *((unsigned int *)t263);
    t273 = *((unsigned int *)t264);
    t274 = (t272 | t273);
    t275 = (~(t274));
    t276 = (t271 & t275);
    if (t276 != 0)
        goto LAB109;

LAB106:    if (t274 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t262) = 1;

LAB109:    memset(t255, 0, 8);
    t278 = (t262 + 4);
    t279 = *((unsigned int *)t278);
    t280 = (~(t279));
    t281 = *((unsigned int *)t262);
    t282 = (t281 & t280);
    t283 = (t282 & 1U);
    if (t283 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t278) != 0)
        goto LAB112;

LAB113:    t285 = (t255 + 4);
    t286 = *((unsigned int *)t255);
    t287 = *((unsigned int *)t285);
    t288 = (t286 || t287);
    if (t288 > 0)
        goto LAB114;

LAB115:    t294 = *((unsigned int *)t255);
    t295 = (~(t294));
    t296 = *((unsigned int *)t285);
    t297 = (t295 || t296);
    if (t297 > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t285) > 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t255) > 0)
        goto LAB120;

LAB121:    memcpy(t254, t302, 8);

LAB122:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t170, 32, t201, 32, t254, 32);
    goto LAB88;

LAB86:    memcpy(t170, t201, 8);
    goto LAB88;

LAB91:    t224 = (t209 + 4);
    *((unsigned int *)t209) = 1;
    *((unsigned int *)t224) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t202) = 1;
    goto LAB96;

LAB95:    t231 = (t202 + 4);
    *((unsigned int *)t202) = 1;
    *((unsigned int *)t231) = 1;
    goto LAB96;

LAB97:    t236 = (t0 + 2544);
    t237 = (t236 + 56U);
    t238 = *((char **)t237);
    t239 = ((char*)((ng3)));
    memset(t240, 0, 8);
    xsi_vlog_unsigned_minus(t240, 32, t238, 8, t239, 32);
    goto LAB98;

LAB99:    t245 = (t0 + 2544);
    t246 = (t245 + 56U);
    t247 = *((char **)t246);
    t248 = ((char*)((ng2)));
    memset(t249, 0, 8);
    xsi_vlog_unsigned_minus(t249, 32, t247, 8, t248, 32);
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t201, 32, t240, 32, t249, 32);
    goto LAB105;

LAB103:    memcpy(t201, t240, 8);
    goto LAB105;

LAB108:    t277 = (t262 + 4);
    *((unsigned int *)t262) = 1;
    *((unsigned int *)t277) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t255) = 1;
    goto LAB113;

LAB112:    t284 = (t255 + 4);
    *((unsigned int *)t255) = 1;
    *((unsigned int *)t284) = 1;
    goto LAB113;

LAB114:    t289 = (t0 + 2544);
    t290 = (t289 + 56U);
    t291 = *((char **)t290);
    t292 = ((char*)((ng2)));
    memset(t293, 0, 8);
    xsi_vlog_unsigned_minus(t293, 32, t291, 8, t292, 32);
    goto LAB115;

LAB116:    t298 = (t0 + 2544);
    t299 = (t298 + 56U);
    t300 = *((char **)t299);
    t301 = ((char*)((ng3)));
    memset(t302, 0, 8);
    xsi_vlog_unsigned_minus(t302, 32, t300, 8, t301, 32);
    goto LAB117;

LAB118:    xsi_vlog_unsigned_bit_combine(t254, 32, t293, 32, t302, 32);
    goto LAB122;

LAB120:    memcpy(t254, t293, 8);
    goto LAB122;

}

static void Cont_45_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char *t1;
    char *t2;
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
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1664U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
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

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t54 = (t0 + 4456);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t58, 0, 8);
    t59 = 255U;
    t60 = t59;
    t61 = (t3 + 4);
    t62 = *((unsigned int *)t3);
    t59 = (t59 & t62);
    t63 = *((unsigned int *)t61);
    t60 = (t60 & t63);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t65 | t59);
    t66 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t66 | t60);
    xsi_driver_vfirst_trans(t54, 0, 7);
    t67 = (t0 + 4312);
    *((int *)t67) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2544);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t41 = (t0 + 2544);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t40, 0, 8);
    t44 = (t40 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (~(t46));
    *((unsigned int *)t40) = t47;
    *((unsigned int *)t44) = 0;
    if (*((unsigned int *)t45) != 0)
        goto LAB22;

LAB21:    t52 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t52 & 255U);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t53 & 255U);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 8, t35, 8, t40, 8);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB22:    t48 = *((unsigned int *)t40);
    t49 = *((unsigned int *)t45);
    *((unsigned int *)t40) = (t48 | t49);
    t50 = *((unsigned int *)t44);
    t51 = *((unsigned int *)t45);
    *((unsigned int *)t44) = (t50 | t51);
    goto LAB21;

}


extern void work_m_00000000000844336663_3749471741_init()
{
	static char *pe[] = {(void *)Always_30_0,(void *)Cont_38_1,(void *)Cont_45_2};
	xsi_register_didat("work_m_00000000000844336663_3749471741", "isim/tb_isim_beh.exe.sim/work/m_00000000000844336663_3749471741.didat");
	xsi_register_executes(pe);
}
