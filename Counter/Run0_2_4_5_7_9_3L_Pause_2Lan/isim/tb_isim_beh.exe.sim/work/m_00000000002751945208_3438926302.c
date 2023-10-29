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
static const char *ng0 = "D:/cd/TT FPGA/project/tuan 4/Run0_2_4_5_7_9_3L_Pause_2Lan/SynCounter4bits.v";
static int ng1[] = {0, 0};
static int ng2[] = {9, 0};
static int ng3[] = {1, 0};
static int ng4[] = {4, 0};
static int ng5[] = {5, 0};
static int ng6[] = {2, 0};



static void Always_29_0(char *t0)
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

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3824);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);
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

LAB6:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(31, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB7;

}

static void Cont_37_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t71[8];
    char t72[8];
    char t77[8];
    char t109[8];
    char t110[8];
    char t115[8];
    char t117[8];
    char t148[8];
    char t157[8];
    char t162[8];
    char t163[8];
    char t168[8];
    char t200[8];
    char t201[8];
    char t206[8];
    char t208[8];
    char t239[8];
    char t248[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
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
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
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
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t111;
    char *t112;
    char *t113;
    char *t114;
    char *t116;
    char *t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    char *t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    char *t207;
    char *t209;
    char *t210;
    unsigned int t211;
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
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    char *t235;
    char *t236;
    char *t237;
    char *t238;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    char *t245;
    char *t246;
    char *t247;
    char *t249;
    char *t250;
    char *t251;
    char *t252;
    char *t253;
    unsigned int t254;
    unsigned int t255;
    char *t256;
    unsigned int t257;
    unsigned int t258;
    char *t259;
    unsigned int t260;
    unsigned int t261;
    char *t262;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2088);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t249 = (t0 + 3936);
    t250 = (t249 + 56U);
    t251 = *((char **)t250);
    t252 = (t251 + 56U);
    t253 = *((char **)t252);
    memset(t253, 0, 8);
    t254 = 15U;
    t255 = t254;
    t256 = (t3 + 4);
    t257 = *((unsigned int *)t3);
    t254 = (t254 & t257);
    t258 = *((unsigned int *)t256);
    t255 = (t255 & t258);
    t259 = (t253 + 4);
    t260 = *((unsigned int *)t253);
    *((unsigned int *)t253) = (t260 | t254);
    t261 = *((unsigned int *)t259);
    *((unsigned int *)t259) = (t261 | t255);
    xsi_driver_vfirst_trans(t249, 0, 3);
    t262 = (t0 + 3840);
    *((int *)t262) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng1)));
    goto LAB13;

LAB14:    t42 = (t0 + 1368U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng3)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t158 = *((unsigned int *)t41);
    t159 = (~(t158));
    t160 = *((unsigned int *)t67);
    t161 = (t159 || t160);
    if (t161 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t162, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t73 = (t0 + 2088);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = ((char*)((ng4)));
    memset(t77, 0, 8);
    t78 = (t75 + 4);
    t79 = (t76 + 4);
    t80 = *((unsigned int *)t75);
    t81 = *((unsigned int *)t76);
    t82 = (t80 ^ t81);
    t83 = *((unsigned int *)t78);
    t84 = *((unsigned int *)t79);
    t85 = (t83 ^ t84);
    t86 = (t82 | t85);
    t87 = *((unsigned int *)t78);
    t88 = *((unsigned int *)t79);
    t89 = (t87 | t88);
    t90 = (~(t89));
    t91 = (t86 & t90);
    if (t91 != 0)
        goto LAB41;

LAB38:    if (t89 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t77) = 1;

LAB41:    memset(t72, 0, 8);
    t93 = (t77 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t77);
    t97 = (t96 & t95);
    t98 = (t97 & 1U);
    if (t98 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t93) != 0)
        goto LAB44;

LAB45:    t100 = (t72 + 4);
    t101 = *((unsigned int *)t72);
    t102 = *((unsigned int *)t100);
    t103 = (t101 || t102);
    if (t103 > 0)
        goto LAB46;

LAB47:    t105 = *((unsigned int *)t72);
    t106 = (~(t105));
    t107 = *((unsigned int *)t100);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t100) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t72) > 0)
        goto LAB52;

LAB53:    memcpy(t71, t109, 8);

LAB54:    goto LAB30;

LAB31:    t164 = (t0 + 2088);
    t165 = (t164 + 56U);
    t166 = *((char **)t165);
    t167 = ((char*)((ng2)));
    memset(t168, 0, 8);
    t169 = (t166 + 4);
    t170 = (t167 + 4);
    t171 = *((unsigned int *)t166);
    t172 = *((unsigned int *)t167);
    t173 = (t171 ^ t172);
    t174 = *((unsigned int *)t169);
    t175 = *((unsigned int *)t170);
    t176 = (t174 ^ t175);
    t177 = (t173 | t176);
    t178 = *((unsigned int *)t169);
    t179 = *((unsigned int *)t170);
    t180 = (t178 | t179);
    t181 = (~(t180));
    t182 = (t177 & t181);
    if (t182 != 0)
        goto LAB75;

LAB72:    if (t180 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t168) = 1;

LAB75:    memset(t163, 0, 8);
    t184 = (t168 + 4);
    t185 = *((unsigned int *)t184);
    t186 = (~(t185));
    t187 = *((unsigned int *)t168);
    t188 = (t187 & t186);
    t189 = (t188 & 1U);
    if (t189 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t184) != 0)
        goto LAB78;

LAB79:    t191 = (t163 + 4);
    t192 = *((unsigned int *)t163);
    t193 = *((unsigned int *)t191);
    t194 = (t192 || t193);
    if (t194 > 0)
        goto LAB80;

LAB81:    t196 = *((unsigned int *)t163);
    t197 = (~(t196));
    t198 = *((unsigned int *)t191);
    t199 = (t197 || t198);
    if (t199 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t191) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t163) > 0)
        goto LAB86;

LAB87:    memcpy(t162, t200, 8);

LAB88:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t71, 32, t162, 32);
    goto LAB37;

LAB35:    memcpy(t40, t71, 8);
    goto LAB37;

LAB40:    t92 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t92) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t72) = 1;
    goto LAB45;

LAB44:    t99 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB45;

LAB46:    t104 = ((char*)((ng5)));
    goto LAB47;

LAB48:    t111 = (t0 + 2088);
    t112 = (t111 + 56U);
    t113 = *((char **)t112);
    t114 = ((char*)((ng6)));
    memset(t115, 0, 8);
    xsi_vlog_unsigned_mod(t115, 32, t113, 4, t114, 32);
    t116 = ((char*)((ng1)));
    memset(t117, 0, 8);
    t118 = (t115 + 4);
    t119 = (t116 + 4);
    t120 = *((unsigned int *)t115);
    t121 = *((unsigned int *)t116);
    t122 = (t120 ^ t121);
    t123 = *((unsigned int *)t118);
    t124 = *((unsigned int *)t119);
    t125 = (t123 ^ t124);
    t126 = (t122 | t125);
    t127 = *((unsigned int *)t118);
    t128 = *((unsigned int *)t119);
    t129 = (t127 | t128);
    t130 = (~(t129));
    t131 = (t126 & t130);
    if (t131 != 0)
        goto LAB58;

LAB55:    if (t129 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t117) = 1;

LAB58:    memset(t110, 0, 8);
    t133 = (t117 + 4);
    t134 = *((unsigned int *)t133);
    t135 = (~(t134));
    t136 = *((unsigned int *)t117);
    t137 = (t136 & t135);
    t138 = (t137 & 1U);
    if (t138 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t133) != 0)
        goto LAB61;

LAB62:    t140 = (t110 + 4);
    t141 = *((unsigned int *)t110);
    t142 = *((unsigned int *)t140);
    t143 = (t141 || t142);
    if (t143 > 0)
        goto LAB63;

LAB64:    t149 = *((unsigned int *)t110);
    t150 = (~(t149));
    t151 = *((unsigned int *)t140);
    t152 = (t150 || t151);
    if (t152 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t140) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t110) > 0)
        goto LAB69;

LAB70:    memcpy(t109, t157, 8);

LAB71:    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t71, 32, t104, 32, t109, 32);
    goto LAB54;

LAB52:    memcpy(t71, t104, 8);
    goto LAB54;

LAB57:    t132 = (t117 + 4);
    *((unsigned int *)t117) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t110) = 1;
    goto LAB62;

LAB61:    t139 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t139) = 1;
    goto LAB62;

LAB63:    t144 = (t0 + 2088);
    t145 = (t144 + 56U);
    t146 = *((char **)t145);
    t147 = ((char*)((ng6)));
    memset(t148, 0, 8);
    xsi_vlog_unsigned_add(t148, 32, t146, 4, t147, 32);
    goto LAB64;

LAB65:    t153 = (t0 + 2088);
    t154 = (t153 + 56U);
    t155 = *((char **)t154);
    t156 = ((char*)((ng3)));
    memset(t157, 0, 8);
    xsi_vlog_unsigned_add(t157, 32, t155, 4, t156, 32);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t109, 32, t148, 32, t157, 32);
    goto LAB71;

LAB69:    memcpy(t109, t148, 8);
    goto LAB71;

LAB74:    t183 = (t168 + 4);
    *((unsigned int *)t168) = 1;
    *((unsigned int *)t183) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t163) = 1;
    goto LAB79;

LAB78:    t190 = (t163 + 4);
    *((unsigned int *)t163) = 1;
    *((unsigned int *)t190) = 1;
    goto LAB79;

LAB80:    t195 = ((char*)((ng1)));
    goto LAB81;

LAB82:    t202 = (t0 + 2088);
    t203 = (t202 + 56U);
    t204 = *((char **)t203);
    t205 = ((char*)((ng6)));
    memset(t206, 0, 8);
    xsi_vlog_unsigned_mod(t206, 32, t204, 4, t205, 32);
    t207 = ((char*)((ng1)));
    memset(t208, 0, 8);
    t209 = (t206 + 4);
    t210 = (t207 + 4);
    t211 = *((unsigned int *)t206);
    t212 = *((unsigned int *)t207);
    t213 = (t211 ^ t212);
    t214 = *((unsigned int *)t209);
    t215 = *((unsigned int *)t210);
    t216 = (t214 ^ t215);
    t217 = (t213 | t216);
    t218 = *((unsigned int *)t209);
    t219 = *((unsigned int *)t210);
    t220 = (t218 | t219);
    t221 = (~(t220));
    t222 = (t217 & t221);
    if (t222 != 0)
        goto LAB92;

LAB89:    if (t220 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t208) = 1;

LAB92:    memset(t201, 0, 8);
    t224 = (t208 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (~(t225));
    t227 = *((unsigned int *)t208);
    t228 = (t227 & t226);
    t229 = (t228 & 1U);
    if (t229 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t224) != 0)
        goto LAB95;

LAB96:    t231 = (t201 + 4);
    t232 = *((unsigned int *)t201);
    t233 = *((unsigned int *)t231);
    t234 = (t232 || t233);
    if (t234 > 0)
        goto LAB97;

LAB98:    t240 = *((unsigned int *)t201);
    t241 = (~(t240));
    t242 = *((unsigned int *)t231);
    t243 = (t241 || t242);
    if (t243 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t231) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t201) > 0)
        goto LAB103;

LAB104:    memcpy(t200, t248, 8);

LAB105:    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t162, 32, t195, 32, t200, 32);
    goto LAB88;

LAB86:    memcpy(t162, t195, 8);
    goto LAB88;

LAB91:    t223 = (t208 + 4);
    *((unsigned int *)t208) = 1;
    *((unsigned int *)t223) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t201) = 1;
    goto LAB96;

LAB95:    t230 = (t201 + 4);
    *((unsigned int *)t201) = 1;
    *((unsigned int *)t230) = 1;
    goto LAB96;

LAB97:    t235 = (t0 + 2088);
    t236 = (t235 + 56U);
    t237 = *((char **)t236);
    t238 = ((char*)((ng3)));
    memset(t239, 0, 8);
    xsi_vlog_unsigned_add(t239, 32, t237, 4, t238, 32);
    goto LAB98;

LAB99:    t244 = (t0 + 2088);
    t245 = (t244 + 56U);
    t246 = *((char **)t245);
    t247 = ((char*)((ng6)));
    memset(t248, 0, 8);
    xsi_vlog_unsigned_add(t248, 32, t246, 4, t247, 32);
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t200, 32, t239, 32, t248, 32);
    goto LAB105;

LAB103:    memcpy(t200, t239, 8);
    goto LAB105;

}

static void Cont_46_2(char *t0)
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

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
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
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 3856);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002751945208_3438926302_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Cont_37_1,(void *)Cont_46_2};
	xsi_register_didat("work_m_00000000002751945208_3438926302", "isim/tb_isim_beh.exe.sim/work/m_00000000002751945208_3438926302.didat");
	xsi_register_executes(pe);
}
