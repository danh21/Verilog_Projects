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
static const char *ng0 = "D:/cd/TT FPGA/project/tuan 4/Counter4bits_3TRun_2TPause_odd_even (1)/SynCounter4bits.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {4, 0};
static int ng4[] = {5, 0};
static int ng5[] = {2, 0};
static int ng6[] = {9, 0};



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

static void Cont_36_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t33[8];
    char t34[8];
    char t39[8];
    char t71[8];
    char t72[8];
    char t77[8];
    char t79[8];
    char t110[8];
    char t119[8];
    char t124[8];
    char t125[8];
    char t130[8];
    char t162[8];
    char t163[8];
    char t168[8];
    char t170[8];
    char t201[8];
    char t210[8];
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
    char *t37;
    char *t38;
    char *t40;
    char *t41;
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
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t78;
    char *t80;
    char *t81;
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
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t126;
    char *t127;
    char *t128;
    char *t129;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t152;
    char *t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t164;
    char *t165;
    char *t166;
    char *t167;
    char *t169;
    char *t171;
    char *t172;
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
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    char *t197;
    char *t198;
    char *t199;
    char *t200;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t207;
    char *t208;
    char *t209;
    char *t211;
    char *t212;
    char *t213;
    char *t214;
    char *t215;
    unsigned int t216;
    unsigned int t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    char *t221;
    unsigned int t222;
    unsigned int t223;
    char *t224;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
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

LAB13:    t120 = *((unsigned int *)t4);
    t121 = (~(t120));
    t122 = *((unsigned int *)t29);
    t123 = (t121 || t122);
    if (t123 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t124, 8);

LAB20:    t211 = (t0 + 3936);
    t212 = (t211 + 56U);
    t213 = *((char **)t212);
    t214 = (t213 + 56U);
    t215 = *((char **)t214);
    memset(t215, 0, 8);
    t216 = 15U;
    t217 = t216;
    t218 = (t3 + 4);
    t219 = *((unsigned int *)t3);
    t216 = (t216 & t219);
    t220 = *((unsigned int *)t218);
    t217 = (t217 & t220);
    t221 = (t215 + 4);
    t222 = *((unsigned int *)t215);
    *((unsigned int *)t215) = (t222 | t216);
    t223 = *((unsigned int *)t221);
    *((unsigned int *)t221) = (t223 | t217);
    xsi_driver_vfirst_trans(t211, 0, 3);
    t224 = (t0 + 3840);
    *((int *)t224) = 1;

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

LAB12:    t35 = (t0 + 2088);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng3)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB24;

LAB21:    if (t51 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t39) = 1;

LAB24:    memset(t34, 0, 8);
    t55 = (t39 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (~(t56));
    t58 = *((unsigned int *)t39);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t55) != 0)
        goto LAB27;

LAB28:    t62 = (t34 + 4);
    t63 = *((unsigned int *)t34);
    t64 = *((unsigned int *)t62);
    t65 = (t63 || t64);
    if (t65 > 0)
        goto LAB29;

LAB30:    t67 = *((unsigned int *)t34);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t62) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t34) > 0)
        goto LAB35;

LAB36:    memcpy(t33, t71, 8);

LAB37:    goto LAB13;

LAB14:    t126 = (t0 + 2088);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    t129 = ((char*)((ng6)));
    memset(t130, 0, 8);
    t131 = (t128 + 4);
    t132 = (t129 + 4);
    t133 = *((unsigned int *)t128);
    t134 = *((unsigned int *)t129);
    t135 = (t133 ^ t134);
    t136 = *((unsigned int *)t131);
    t137 = *((unsigned int *)t132);
    t138 = (t136 ^ t137);
    t139 = (t135 | t138);
    t140 = *((unsigned int *)t131);
    t141 = *((unsigned int *)t132);
    t142 = (t140 | t141);
    t143 = (~(t142));
    t144 = (t139 & t143);
    if (t144 != 0)
        goto LAB58;

LAB55:    if (t142 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t130) = 1;

LAB58:    memset(t125, 0, 8);
    t146 = (t130 + 4);
    t147 = *((unsigned int *)t146);
    t148 = (~(t147));
    t149 = *((unsigned int *)t130);
    t150 = (t149 & t148);
    t151 = (t150 & 1U);
    if (t151 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t146) != 0)
        goto LAB61;

LAB62:    t153 = (t125 + 4);
    t154 = *((unsigned int *)t125);
    t155 = *((unsigned int *)t153);
    t156 = (t154 || t155);
    if (t156 > 0)
        goto LAB63;

LAB64:    t158 = *((unsigned int *)t125);
    t159 = (~(t158));
    t160 = *((unsigned int *)t153);
    t161 = (t159 || t160);
    if (t161 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t153) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t125) > 0)
        goto LAB69;

LAB70:    memcpy(t124, t162, 8);

LAB71:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t33, 32, t124, 32);
    goto LAB20;

LAB18:    memcpy(t3, t33, 8);
    goto LAB20;

LAB23:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t34) = 1;
    goto LAB28;

LAB27:    t61 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB28;

LAB29:    t66 = ((char*)((ng4)));
    goto LAB30;

LAB31:    t73 = (t0 + 2088);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    t76 = ((char*)((ng5)));
    memset(t77, 0, 8);
    xsi_vlog_unsigned_mod(t77, 32, t75, 4, t76, 32);
    t78 = ((char*)((ng1)));
    memset(t79, 0, 8);
    t80 = (t77 + 4);
    t81 = (t78 + 4);
    t82 = *((unsigned int *)t77);
    t83 = *((unsigned int *)t78);
    t84 = (t82 ^ t83);
    t85 = *((unsigned int *)t80);
    t86 = *((unsigned int *)t81);
    t87 = (t85 ^ t86);
    t88 = (t84 | t87);
    t89 = *((unsigned int *)t80);
    t90 = *((unsigned int *)t81);
    t91 = (t89 | t90);
    t92 = (~(t91));
    t93 = (t88 & t92);
    if (t93 != 0)
        goto LAB41;

LAB38:    if (t91 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t79) = 1;

LAB41:    memset(t72, 0, 8);
    t95 = (t79 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t79);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t95) != 0)
        goto LAB44;

LAB45:    t102 = (t72 + 4);
    t103 = *((unsigned int *)t72);
    t104 = *((unsigned int *)t102);
    t105 = (t103 || t104);
    if (t105 > 0)
        goto LAB46;

LAB47:    t111 = *((unsigned int *)t72);
    t112 = (~(t111));
    t113 = *((unsigned int *)t102);
    t114 = (t112 || t113);
    if (t114 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t102) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t72) > 0)
        goto LAB52;

LAB53:    memcpy(t71, t119, 8);

LAB54:    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t33, 32, t66, 32, t71, 32);
    goto LAB37;

LAB35:    memcpy(t33, t66, 8);
    goto LAB37;

LAB40:    t94 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t94) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t72) = 1;
    goto LAB45;

LAB44:    t101 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB45;

LAB46:    t106 = (t0 + 2088);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = ((char*)((ng5)));
    memset(t110, 0, 8);
    xsi_vlog_unsigned_add(t110, 32, t108, 4, t109, 32);
    goto LAB47;

LAB48:    t115 = (t0 + 2088);
    t116 = (t115 + 56U);
    t117 = *((char **)t116);
    t118 = ((char*)((ng2)));
    memset(t119, 0, 8);
    xsi_vlog_unsigned_add(t119, 32, t117, 4, t118, 32);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t71, 32, t110, 32, t119, 32);
    goto LAB54;

LAB52:    memcpy(t71, t110, 8);
    goto LAB54;

LAB57:    t145 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t145) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t125) = 1;
    goto LAB62;

LAB61:    t152 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t152) = 1;
    goto LAB62;

LAB63:    t157 = ((char*)((ng1)));
    goto LAB64;

LAB65:    t164 = (t0 + 2088);
    t165 = (t164 + 56U);
    t166 = *((char **)t165);
    t167 = ((char*)((ng5)));
    memset(t168, 0, 8);
    xsi_vlog_unsigned_mod(t168, 32, t166, 4, t167, 32);
    t169 = ((char*)((ng1)));
    memset(t170, 0, 8);
    t171 = (t168 + 4);
    t172 = (t169 + 4);
    t173 = *((unsigned int *)t168);
    t174 = *((unsigned int *)t169);
    t175 = (t173 ^ t174);
    t176 = *((unsigned int *)t171);
    t177 = *((unsigned int *)t172);
    t178 = (t176 ^ t177);
    t179 = (t175 | t178);
    t180 = *((unsigned int *)t171);
    t181 = *((unsigned int *)t172);
    t182 = (t180 | t181);
    t183 = (~(t182));
    t184 = (t179 & t183);
    if (t184 != 0)
        goto LAB75;

LAB72:    if (t182 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t170) = 1;

LAB75:    memset(t163, 0, 8);
    t186 = (t170 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t170);
    t190 = (t189 & t188);
    t191 = (t190 & 1U);
    if (t191 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t186) != 0)
        goto LAB78;

LAB79:    t193 = (t163 + 4);
    t194 = *((unsigned int *)t163);
    t195 = *((unsigned int *)t193);
    t196 = (t194 || t195);
    if (t196 > 0)
        goto LAB80;

LAB81:    t202 = *((unsigned int *)t163);
    t203 = (~(t202));
    t204 = *((unsigned int *)t193);
    t205 = (t203 || t204);
    if (t205 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t193) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t163) > 0)
        goto LAB86;

LAB87:    memcpy(t162, t210, 8);

LAB88:    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t124, 32, t157, 32, t162, 32);
    goto LAB71;

LAB69:    memcpy(t124, t157, 8);
    goto LAB71;

LAB74:    t185 = (t170 + 4);
    *((unsigned int *)t170) = 1;
    *((unsigned int *)t185) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t163) = 1;
    goto LAB79;

LAB78:    t192 = (t163 + 4);
    *((unsigned int *)t163) = 1;
    *((unsigned int *)t192) = 1;
    goto LAB79;

LAB80:    t197 = (t0 + 2088);
    t198 = (t197 + 56U);
    t199 = *((char **)t198);
    t200 = ((char*)((ng2)));
    memset(t201, 0, 8);
    xsi_vlog_unsigned_add(t201, 32, t199, 4, t200, 32);
    goto LAB81;

LAB82:    t206 = (t0 + 2088);
    t207 = (t206 + 56U);
    t208 = *((char **)t207);
    t209 = ((char*)((ng5)));
    memset(t210, 0, 8);
    xsi_vlog_unsigned_add(t210, 32, t208, 4, t209, 32);
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t162, 32, t201, 32, t210, 32);
    goto LAB88;

LAB86:    memcpy(t162, t201, 8);
    goto LAB88;

}

static void Cont_42_2(char *t0)
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

LAB2:    xsi_set_current_line(42, ng0);
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
	static char *pe[] = {(void *)Always_29_0,(void *)Cont_36_1,(void *)Cont_42_2};
	xsi_register_didat("work_m_00000000002751945208_3438926302", "isim/tb_isim_beh.exe.sim/work/m_00000000002751945208_3438926302.didat");
	xsi_register_executes(pe);
}
