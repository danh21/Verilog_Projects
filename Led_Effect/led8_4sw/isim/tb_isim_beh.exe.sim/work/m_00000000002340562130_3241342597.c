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
static const char *ng0 = "D:/cd/TT FPGA/project/tuan 5/led8_4sw/Shift_SIPO_2.v";
static int ng1[] = {128, 0};
static int ng2[] = {255, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static int ng5[] = {2, 0};
static int ng6[] = {3, 0};
static int ng7[] = {4, 0};
static int ng8[] = {5, 0};
static int ng9[] = {6, 0};



static void Always_28_0(char *t0)
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

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3984);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);
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

LAB6:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(29, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    goto LAB7;

}

static void Cont_31_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t8[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char t49[8];
    char t76[8];
    char t77[8];
    char t80[8];
    char t85[8];
    char t112[8];
    char t113[8];
    char t116[8];
    char t121[8];
    char t148[8];
    char t149[8];
    char t152[8];
    char t157[8];
    char t184[8];
    char t185[8];
    char t188[8];
    char t193[8];
    char t220[8];
    char t221[8];
    char t224[8];
    char t229[8];
    char t256[8];
    char t257[8];
    char t260[8];
    char t265[8];
    char t292[8];
    char t293[8];
    char t311[8];
    char t312[8];
    char t326[8];
    char t341[8];
    char t342[8];
    char t353[8];
    char t371[8];
    char t372[8];
    char t383[8];
    char t401[8];
    char t402[8];
    char t413[8];
    char t431[8];
    char t432[8];
    char t443[8];
    char t461[8];
    char t464[8];
    char t473[8];
    char t491[8];
    char t492[8];
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
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t78;
    char *t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t114;
    char *t115;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t150;
    char *t151;
    char *t153;
    char *t154;
    char *t155;
    char *t156;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t186;
    char *t187;
    char *t189;
    char *t190;
    char *t191;
    char *t192;
    char *t194;
    char *t195;
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
    unsigned int t207;
    char *t208;
    char *t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    char *t215;
    char *t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    char *t222;
    char *t223;
    char *t225;
    char *t226;
    char *t227;
    char *t228;
    char *t230;
    char *t231;
    unsigned int t232;
    unsigned int t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    char *t244;
    char *t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    unsigned int t250;
    char *t251;
    char *t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    char *t258;
    char *t259;
    char *t261;
    char *t262;
    char *t263;
    char *t264;
    char *t266;
    char *t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    unsigned int t272;
    unsigned int t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    unsigned int t277;
    unsigned int t278;
    unsigned int t279;
    char *t280;
    char *t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    unsigned int t286;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    char *t294;
    char *t295;
    char *t296;
    char *t297;
    char *t298;
    unsigned int t299;
    unsigned int t300;
    unsigned int t301;
    unsigned int t302;
    unsigned int t303;
    unsigned int t304;
    char *t305;
    char *t306;
    unsigned int t307;
    unsigned int t308;
    unsigned int t309;
    unsigned int t310;
    char *t313;
    char *t314;
    char *t315;
    char *t316;
    unsigned int t317;
    unsigned int t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    char *t323;
    char *t324;
    char *t325;
    char *t327;
    char *t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;
    char *t336;
    unsigned int t337;
    unsigned int t338;
    unsigned int t339;
    unsigned int t340;
    char *t343;
    char *t344;
    char *t345;
    char *t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    unsigned int t351;
    unsigned int t352;
    char *t354;
    char *t355;
    char *t356;
    char *t357;
    char *t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    char *t365;
    char *t366;
    unsigned int t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    char *t373;
    char *t374;
    char *t375;
    char *t376;
    unsigned int t377;
    unsigned int t378;
    unsigned int t379;
    unsigned int t380;
    unsigned int t381;
    unsigned int t382;
    char *t384;
    char *t385;
    char *t386;
    char *t387;
    char *t388;
    unsigned int t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    char *t395;
    char *t396;
    unsigned int t397;
    unsigned int t398;
    unsigned int t399;
    unsigned int t400;
    char *t403;
    char *t404;
    char *t405;
    char *t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    unsigned int t412;
    char *t414;
    char *t415;
    char *t416;
    char *t417;
    char *t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    unsigned int t422;
    unsigned int t423;
    unsigned int t424;
    char *t425;
    char *t426;
    unsigned int t427;
    unsigned int t428;
    unsigned int t429;
    unsigned int t430;
    char *t433;
    char *t434;
    char *t435;
    char *t436;
    unsigned int t437;
    unsigned int t438;
    unsigned int t439;
    unsigned int t440;
    unsigned int t441;
    unsigned int t442;
    char *t444;
    char *t445;
    char *t446;
    char *t447;
    char *t448;
    unsigned int t449;
    unsigned int t450;
    unsigned int t451;
    unsigned int t452;
    unsigned int t453;
    unsigned int t454;
    char *t455;
    char *t456;
    unsigned int t457;
    unsigned int t458;
    unsigned int t459;
    unsigned int t460;
    char *t462;
    char *t463;
    char *t465;
    char *t466;
    unsigned int t467;
    unsigned int t468;
    unsigned int t469;
    unsigned int t470;
    unsigned int t471;
    unsigned int t472;
    char *t474;
    char *t475;
    char *t476;
    char *t477;
    char *t478;
    unsigned int t479;
    unsigned int t480;
    unsigned int t481;
    unsigned int t482;
    unsigned int t483;
    unsigned int t484;
    char *t485;
    char *t486;
    unsigned int t487;
    unsigned int t488;
    unsigned int t489;
    unsigned int t490;
    char *t493;
    char *t494;
    char *t495;
    char *t496;
    unsigned int t497;
    unsigned int t498;
    unsigned int t499;
    unsigned int t500;
    unsigned int t501;
    unsigned int t502;
    char *t503;
    char *t504;
    char *t505;
    char *t506;
    char *t507;
    char *t508;
    unsigned int t509;
    unsigned int t510;
    char *t511;
    unsigned int t512;
    unsigned int t513;
    char *t514;
    unsigned int t515;
    unsigned int t516;
    char *t517;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
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

LAB20:    t503 = (t0 + 4096);
    t505 = (t503 + 56U);
    t506 = *((char **)t505);
    t507 = (t506 + 56U);
    t508 = *((char **)t507);
    memset(t508, 0, 8);
    t509 = 255U;
    t510 = t509;
    t511 = (t3 + 4);
    t512 = *((unsigned int *)t3);
    t509 = (t509 & t512);
    t513 = *((unsigned int *)t511);
    t510 = (t510 & t513);
    t514 = (t508 + 4);
    t515 = *((unsigned int *)t508);
    *((unsigned int *)t508) = (t515 | t509);
    t516 = *((unsigned int *)t514);
    *((unsigned int *)t514) = (t516 | t510);
    xsi_driver_vfirst_trans(t503, 0, 7);
    t517 = (t0 + 4000);
    *((int *)t517) = 1;

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

LAB14:    t42 = (t0 + 1528U);
    t43 = *((char **)t42);
    t42 = (t0 + 1488U);
    t45 = (t42 + 72U);
    t46 = *((char **)t45);
    t47 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t44, 32, t43, t46, 2, t47, 32, 1);
    t48 = ((char*)((ng4)));
    memset(t49, 0, 8);
    t50 = (t44 + 4);
    t51 = (t48 + 4);
    t52 = *((unsigned int *)t44);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = *((unsigned int *)t50);
    t56 = *((unsigned int *)t51);
    t57 = (t55 ^ t56);
    t58 = (t54 | t57);
    t59 = *((unsigned int *)t50);
    t60 = *((unsigned int *)t51);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB24;

LAB21:    if (t61 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t49) = 1;

LAB24:    memset(t41, 0, 8);
    t65 = (t49 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t49);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t65) != 0)
        goto LAB27;

LAB28:    t72 = (t41 + 4);
    t73 = *((unsigned int *)t41);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB29;

LAB30:    t487 = *((unsigned int *)t41);
    t488 = (~(t487));
    t489 = *((unsigned int *)t72);
    t490 = (t488 || t489);
    if (t490 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t72) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t491, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t64 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t71 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB28;

LAB29:    t78 = (t0 + 1528U);
    t79 = *((char **)t78);
    t78 = (t0 + 1488U);
    t81 = (t78 + 72U);
    t82 = *((char **)t81);
    t83 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t80, 32, t79, t82, 2, t83, 32, 1);
    t84 = ((char*)((ng4)));
    memset(t85, 0, 8);
    t86 = (t80 + 4);
    t87 = (t84 + 4);
    t88 = *((unsigned int *)t80);
    t89 = *((unsigned int *)t84);
    t90 = (t88 ^ t89);
    t91 = *((unsigned int *)t86);
    t92 = *((unsigned int *)t87);
    t93 = (t91 ^ t92);
    t94 = (t90 | t93);
    t95 = *((unsigned int *)t86);
    t96 = *((unsigned int *)t87);
    t97 = (t95 | t96);
    t98 = (~(t97));
    t99 = (t94 & t98);
    if (t99 != 0)
        goto LAB41;

LAB38:    if (t97 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t85) = 1;

LAB41:    memset(t77, 0, 8);
    t101 = (t85 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (~(t102));
    t104 = *((unsigned int *)t85);
    t105 = (t104 & t103);
    t106 = (t105 & 1U);
    if (t106 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t101) != 0)
        goto LAB44;

LAB45:    t108 = (t77 + 4);
    t109 = *((unsigned int *)t77);
    t110 = *((unsigned int *)t108);
    t111 = (t109 || t110);
    if (t111 > 0)
        goto LAB46;

LAB47:    t457 = *((unsigned int *)t77);
    t458 = (~(t457));
    t459 = *((unsigned int *)t108);
    t460 = (t458 || t459);
    if (t460 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t108) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t77) > 0)
        goto LAB52;

LAB53:    memcpy(t76, t461, 8);

LAB54:    goto LAB30;

LAB31:    t485 = (t0 + 2088);
    t493 = (t485 + 56U);
    t494 = *((char **)t493);
    memset(t492, 0, 8);
    t495 = (t492 + 4);
    t496 = (t494 + 4);
    t497 = *((unsigned int *)t494);
    t498 = (t497 >> 1);
    *((unsigned int *)t492) = t498;
    t499 = *((unsigned int *)t496);
    t500 = (t499 >> 1);
    *((unsigned int *)t495) = t500;
    t501 = *((unsigned int *)t492);
    *((unsigned int *)t492) = (t501 & 127U);
    t502 = *((unsigned int *)t495);
    *((unsigned int *)t495) = (t502 & 127U);
    t503 = (t0 + 1368U);
    t504 = *((char **)t503);
    xsi_vlogtype_concat(t491, 32, 8, 2U, t504, 1, t492, 7);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t76, 32, t491, 32);
    goto LAB37;

LAB35:    memcpy(t40, t76, 8);
    goto LAB37;

LAB40:    t100 = (t85 + 4);
    *((unsigned int *)t85) = 1;
    *((unsigned int *)t100) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t77) = 1;
    goto LAB45;

LAB44:    t107 = (t77 + 4);
    *((unsigned int *)t77) = 1;
    *((unsigned int *)t107) = 1;
    goto LAB45;

LAB46:    t114 = (t0 + 1528U);
    t115 = *((char **)t114);
    t114 = (t0 + 1488U);
    t117 = (t114 + 72U);
    t118 = *((char **)t117);
    t119 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t116, 32, t115, t118, 2, t119, 32, 1);
    t120 = ((char*)((ng4)));
    memset(t121, 0, 8);
    t122 = (t116 + 4);
    t123 = (t120 + 4);
    t124 = *((unsigned int *)t116);
    t125 = *((unsigned int *)t120);
    t126 = (t124 ^ t125);
    t127 = *((unsigned int *)t122);
    t128 = *((unsigned int *)t123);
    t129 = (t127 ^ t128);
    t130 = (t126 | t129);
    t131 = *((unsigned int *)t122);
    t132 = *((unsigned int *)t123);
    t133 = (t131 | t132);
    t134 = (~(t133));
    t135 = (t130 & t134);
    if (t135 != 0)
        goto LAB58;

LAB55:    if (t133 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t121) = 1;

LAB58:    memset(t113, 0, 8);
    t137 = (t121 + 4);
    t138 = *((unsigned int *)t137);
    t139 = (~(t138));
    t140 = *((unsigned int *)t121);
    t141 = (t140 & t139);
    t142 = (t141 & 1U);
    if (t142 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t137) != 0)
        goto LAB61;

LAB62:    t144 = (t113 + 4);
    t145 = *((unsigned int *)t113);
    t146 = *((unsigned int *)t144);
    t147 = (t145 || t146);
    if (t147 > 0)
        goto LAB63;

LAB64:    t427 = *((unsigned int *)t113);
    t428 = (~(t427));
    t429 = *((unsigned int *)t144);
    t430 = (t428 || t429);
    if (t430 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t144) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t113) > 0)
        goto LAB69;

LAB70:    memcpy(t112, t431, 8);

LAB71:    goto LAB47;

LAB48:    t455 = (t0 + 2088);
    t462 = (t455 + 56U);
    t463 = *((char **)t462);
    memset(t464, 0, 8);
    t465 = (t464 + 4);
    t466 = (t463 + 4);
    t467 = *((unsigned int *)t463);
    t468 = (t467 >> 0);
    t469 = (t468 & 1);
    *((unsigned int *)t464) = t469;
    t470 = *((unsigned int *)t466);
    t471 = (t470 >> 0);
    t472 = (t471 & 1);
    *((unsigned int *)t465) = t472;
    t474 = (t0 + 2088);
    t475 = (t474 + 56U);
    t476 = *((char **)t475);
    memset(t473, 0, 8);
    t477 = (t473 + 4);
    t478 = (t476 + 4);
    t479 = *((unsigned int *)t476);
    t480 = (t479 >> 2);
    *((unsigned int *)t473) = t480;
    t481 = *((unsigned int *)t478);
    t482 = (t481 >> 2);
    *((unsigned int *)t477) = t482;
    t483 = *((unsigned int *)t473);
    *((unsigned int *)t473) = (t483 & 63U);
    t484 = *((unsigned int *)t477);
    *((unsigned int *)t477) = (t484 & 63U);
    t485 = (t0 + 1368U);
    t486 = *((char **)t485);
    xsi_vlogtype_concat(t461, 32, 8, 3U, t486, 1, t473, 6, t464, 1);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t76, 32, t112, 32, t461, 32);
    goto LAB54;

LAB52:    memcpy(t76, t112, 8);
    goto LAB54;

LAB57:    t136 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t136) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t113) = 1;
    goto LAB62;

LAB61:    t143 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB62;

LAB63:    t150 = (t0 + 1528U);
    t151 = *((char **)t150);
    t150 = (t0 + 1488U);
    t153 = (t150 + 72U);
    t154 = *((char **)t153);
    t155 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t152, 32, t151, t154, 2, t155, 32, 1);
    t156 = ((char*)((ng4)));
    memset(t157, 0, 8);
    t158 = (t152 + 4);
    t159 = (t156 + 4);
    t160 = *((unsigned int *)t152);
    t161 = *((unsigned int *)t156);
    t162 = (t160 ^ t161);
    t163 = *((unsigned int *)t158);
    t164 = *((unsigned int *)t159);
    t165 = (t163 ^ t164);
    t166 = (t162 | t165);
    t167 = *((unsigned int *)t158);
    t168 = *((unsigned int *)t159);
    t169 = (t167 | t168);
    t170 = (~(t169));
    t171 = (t166 & t170);
    if (t171 != 0)
        goto LAB75;

LAB72:    if (t169 != 0)
        goto LAB74;

LAB73:    *((unsigned int *)t157) = 1;

LAB75:    memset(t149, 0, 8);
    t173 = (t157 + 4);
    t174 = *((unsigned int *)t173);
    t175 = (~(t174));
    t176 = *((unsigned int *)t157);
    t177 = (t176 & t175);
    t178 = (t177 & 1U);
    if (t178 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t173) != 0)
        goto LAB78;

LAB79:    t180 = (t149 + 4);
    t181 = *((unsigned int *)t149);
    t182 = *((unsigned int *)t180);
    t183 = (t181 || t182);
    if (t183 > 0)
        goto LAB80;

LAB81:    t397 = *((unsigned int *)t149);
    t398 = (~(t397));
    t399 = *((unsigned int *)t180);
    t400 = (t398 || t399);
    if (t400 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t180) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t149) > 0)
        goto LAB86;

LAB87:    memcpy(t148, t401, 8);

LAB88:    goto LAB64;

LAB65:    t425 = (t0 + 2088);
    t433 = (t425 + 56U);
    t434 = *((char **)t433);
    memset(t432, 0, 8);
    t435 = (t432 + 4);
    t436 = (t434 + 4);
    t437 = *((unsigned int *)t434);
    t438 = (t437 >> 0);
    *((unsigned int *)t432) = t438;
    t439 = *((unsigned int *)t436);
    t440 = (t439 >> 0);
    *((unsigned int *)t435) = t440;
    t441 = *((unsigned int *)t432);
    *((unsigned int *)t432) = (t441 & 3U);
    t442 = *((unsigned int *)t435);
    *((unsigned int *)t435) = (t442 & 3U);
    t444 = (t0 + 2088);
    t445 = (t444 + 56U);
    t446 = *((char **)t445);
    memset(t443, 0, 8);
    t447 = (t443 + 4);
    t448 = (t446 + 4);
    t449 = *((unsigned int *)t446);
    t450 = (t449 >> 3);
    *((unsigned int *)t443) = t450;
    t451 = *((unsigned int *)t448);
    t452 = (t451 >> 3);
    *((unsigned int *)t447) = t452;
    t453 = *((unsigned int *)t443);
    *((unsigned int *)t443) = (t453 & 31U);
    t454 = *((unsigned int *)t447);
    *((unsigned int *)t447) = (t454 & 31U);
    t455 = (t0 + 1368U);
    t456 = *((char **)t455);
    xsi_vlogtype_concat(t431, 32, 8, 3U, t456, 1, t443, 5, t432, 2);
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t112, 32, t148, 32, t431, 32);
    goto LAB71;

LAB69:    memcpy(t112, t148, 8);
    goto LAB71;

LAB74:    t172 = (t157 + 4);
    *((unsigned int *)t157) = 1;
    *((unsigned int *)t172) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t149) = 1;
    goto LAB79;

LAB78:    t179 = (t149 + 4);
    *((unsigned int *)t149) = 1;
    *((unsigned int *)t179) = 1;
    goto LAB79;

LAB80:    t186 = (t0 + 1528U);
    t187 = *((char **)t186);
    t186 = (t0 + 1488U);
    t189 = (t186 + 72U);
    t190 = *((char **)t189);
    t191 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t188, 32, t187, t190, 2, t191, 32, 1);
    t192 = ((char*)((ng4)));
    memset(t193, 0, 8);
    t194 = (t188 + 4);
    t195 = (t192 + 4);
    t196 = *((unsigned int *)t188);
    t197 = *((unsigned int *)t192);
    t198 = (t196 ^ t197);
    t199 = *((unsigned int *)t194);
    t200 = *((unsigned int *)t195);
    t201 = (t199 ^ t200);
    t202 = (t198 | t201);
    t203 = *((unsigned int *)t194);
    t204 = *((unsigned int *)t195);
    t205 = (t203 | t204);
    t206 = (~(t205));
    t207 = (t202 & t206);
    if (t207 != 0)
        goto LAB92;

LAB89:    if (t205 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t193) = 1;

LAB92:    memset(t185, 0, 8);
    t209 = (t193 + 4);
    t210 = *((unsigned int *)t209);
    t211 = (~(t210));
    t212 = *((unsigned int *)t193);
    t213 = (t212 & t211);
    t214 = (t213 & 1U);
    if (t214 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t209) != 0)
        goto LAB95;

LAB96:    t216 = (t185 + 4);
    t217 = *((unsigned int *)t185);
    t218 = *((unsigned int *)t216);
    t219 = (t217 || t218);
    if (t219 > 0)
        goto LAB97;

LAB98:    t367 = *((unsigned int *)t185);
    t368 = (~(t367));
    t369 = *((unsigned int *)t216);
    t370 = (t368 || t369);
    if (t370 > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t216) > 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t185) > 0)
        goto LAB103;

LAB104:    memcpy(t184, t371, 8);

LAB105:    goto LAB81;

LAB82:    t395 = (t0 + 2088);
    t403 = (t395 + 56U);
    t404 = *((char **)t403);
    memset(t402, 0, 8);
    t405 = (t402 + 4);
    t406 = (t404 + 4);
    t407 = *((unsigned int *)t404);
    t408 = (t407 >> 0);
    *((unsigned int *)t402) = t408;
    t409 = *((unsigned int *)t406);
    t410 = (t409 >> 0);
    *((unsigned int *)t405) = t410;
    t411 = *((unsigned int *)t402);
    *((unsigned int *)t402) = (t411 & 7U);
    t412 = *((unsigned int *)t405);
    *((unsigned int *)t405) = (t412 & 7U);
    t414 = (t0 + 2088);
    t415 = (t414 + 56U);
    t416 = *((char **)t415);
    memset(t413, 0, 8);
    t417 = (t413 + 4);
    t418 = (t416 + 4);
    t419 = *((unsigned int *)t416);
    t420 = (t419 >> 4);
    *((unsigned int *)t413) = t420;
    t421 = *((unsigned int *)t418);
    t422 = (t421 >> 4);
    *((unsigned int *)t417) = t422;
    t423 = *((unsigned int *)t413);
    *((unsigned int *)t413) = (t423 & 15U);
    t424 = *((unsigned int *)t417);
    *((unsigned int *)t417) = (t424 & 15U);
    t425 = (t0 + 1368U);
    t426 = *((char **)t425);
    xsi_vlogtype_concat(t401, 32, 8, 3U, t426, 1, t413, 4, t402, 3);
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t148, 32, t184, 32, t401, 32);
    goto LAB88;

LAB86:    memcpy(t148, t184, 8);
    goto LAB88;

LAB91:    t208 = (t193 + 4);
    *((unsigned int *)t193) = 1;
    *((unsigned int *)t208) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t185) = 1;
    goto LAB96;

LAB95:    t215 = (t185 + 4);
    *((unsigned int *)t185) = 1;
    *((unsigned int *)t215) = 1;
    goto LAB96;

LAB97:    t222 = (t0 + 1528U);
    t223 = *((char **)t222);
    t222 = (t0 + 1488U);
    t225 = (t222 + 72U);
    t226 = *((char **)t225);
    t227 = ((char*)((ng8)));
    xsi_vlog_generic_get_index_select_value(t224, 32, t223, t226, 2, t227, 32, 1);
    t228 = ((char*)((ng4)));
    memset(t229, 0, 8);
    t230 = (t224 + 4);
    t231 = (t228 + 4);
    t232 = *((unsigned int *)t224);
    t233 = *((unsigned int *)t228);
    t234 = (t232 ^ t233);
    t235 = *((unsigned int *)t230);
    t236 = *((unsigned int *)t231);
    t237 = (t235 ^ t236);
    t238 = (t234 | t237);
    t239 = *((unsigned int *)t230);
    t240 = *((unsigned int *)t231);
    t241 = (t239 | t240);
    t242 = (~(t241));
    t243 = (t238 & t242);
    if (t243 != 0)
        goto LAB109;

LAB106:    if (t241 != 0)
        goto LAB108;

LAB107:    *((unsigned int *)t229) = 1;

LAB109:    memset(t221, 0, 8);
    t245 = (t229 + 4);
    t246 = *((unsigned int *)t245);
    t247 = (~(t246));
    t248 = *((unsigned int *)t229);
    t249 = (t248 & t247);
    t250 = (t249 & 1U);
    if (t250 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t245) != 0)
        goto LAB112;

LAB113:    t252 = (t221 + 4);
    t253 = *((unsigned int *)t221);
    t254 = *((unsigned int *)t252);
    t255 = (t253 || t254);
    if (t255 > 0)
        goto LAB114;

LAB115:    t337 = *((unsigned int *)t221);
    t338 = (~(t337));
    t339 = *((unsigned int *)t252);
    t340 = (t338 || t339);
    if (t340 > 0)
        goto LAB116;

LAB117:    if (*((unsigned int *)t252) > 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t221) > 0)
        goto LAB120;

LAB121:    memcpy(t220, t341, 8);

LAB122:    goto LAB98;

LAB99:    t365 = (t0 + 2088);
    t373 = (t365 + 56U);
    t374 = *((char **)t373);
    memset(t372, 0, 8);
    t375 = (t372 + 4);
    t376 = (t374 + 4);
    t377 = *((unsigned int *)t374);
    t378 = (t377 >> 0);
    *((unsigned int *)t372) = t378;
    t379 = *((unsigned int *)t376);
    t380 = (t379 >> 0);
    *((unsigned int *)t375) = t380;
    t381 = *((unsigned int *)t372);
    *((unsigned int *)t372) = (t381 & 15U);
    t382 = *((unsigned int *)t375);
    *((unsigned int *)t375) = (t382 & 15U);
    t384 = (t0 + 2088);
    t385 = (t384 + 56U);
    t386 = *((char **)t385);
    memset(t383, 0, 8);
    t387 = (t383 + 4);
    t388 = (t386 + 4);
    t389 = *((unsigned int *)t386);
    t390 = (t389 >> 5);
    *((unsigned int *)t383) = t390;
    t391 = *((unsigned int *)t388);
    t392 = (t391 >> 5);
    *((unsigned int *)t387) = t392;
    t393 = *((unsigned int *)t383);
    *((unsigned int *)t383) = (t393 & 7U);
    t394 = *((unsigned int *)t387);
    *((unsigned int *)t387) = (t394 & 7U);
    t395 = (t0 + 1368U);
    t396 = *((char **)t395);
    xsi_vlogtype_concat(t371, 32, 8, 3U, t396, 1, t383, 3, t372, 4);
    goto LAB100;

LAB101:    xsi_vlog_unsigned_bit_combine(t184, 32, t220, 32, t371, 32);
    goto LAB105;

LAB103:    memcpy(t184, t220, 8);
    goto LAB105;

LAB108:    t244 = (t229 + 4);
    *((unsigned int *)t229) = 1;
    *((unsigned int *)t244) = 1;
    goto LAB109;

LAB110:    *((unsigned int *)t221) = 1;
    goto LAB113;

LAB112:    t251 = (t221 + 4);
    *((unsigned int *)t221) = 1;
    *((unsigned int *)t251) = 1;
    goto LAB113;

LAB114:    t258 = (t0 + 1528U);
    t259 = *((char **)t258);
    t258 = (t0 + 1488U);
    t261 = (t258 + 72U);
    t262 = *((char **)t261);
    t263 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t260, 32, t259, t262, 2, t263, 32, 1);
    t264 = ((char*)((ng4)));
    memset(t265, 0, 8);
    t266 = (t260 + 4);
    t267 = (t264 + 4);
    t268 = *((unsigned int *)t260);
    t269 = *((unsigned int *)t264);
    t270 = (t268 ^ t269);
    t271 = *((unsigned int *)t266);
    t272 = *((unsigned int *)t267);
    t273 = (t271 ^ t272);
    t274 = (t270 | t273);
    t275 = *((unsigned int *)t266);
    t276 = *((unsigned int *)t267);
    t277 = (t275 | t276);
    t278 = (~(t277));
    t279 = (t274 & t278);
    if (t279 != 0)
        goto LAB126;

LAB123:    if (t277 != 0)
        goto LAB125;

LAB124:    *((unsigned int *)t265) = 1;

LAB126:    memset(t257, 0, 8);
    t281 = (t265 + 4);
    t282 = *((unsigned int *)t281);
    t283 = (~(t282));
    t284 = *((unsigned int *)t265);
    t285 = (t284 & t283);
    t286 = (t285 & 1U);
    if (t286 != 0)
        goto LAB127;

LAB128:    if (*((unsigned int *)t281) != 0)
        goto LAB129;

LAB130:    t288 = (t257 + 4);
    t289 = *((unsigned int *)t257);
    t290 = *((unsigned int *)t288);
    t291 = (t289 || t290);
    if (t291 > 0)
        goto LAB131;

LAB132:    t307 = *((unsigned int *)t257);
    t308 = (~(t307));
    t309 = *((unsigned int *)t288);
    t310 = (t308 || t309);
    if (t310 > 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t288) > 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t257) > 0)
        goto LAB137;

LAB138:    memcpy(t256, t311, 8);

LAB139:    goto LAB115;

LAB116:    t335 = (t0 + 2088);
    t343 = (t335 + 56U);
    t344 = *((char **)t343);
    memset(t342, 0, 8);
    t345 = (t342 + 4);
    t346 = (t344 + 4);
    t347 = *((unsigned int *)t344);
    t348 = (t347 >> 0);
    *((unsigned int *)t342) = t348;
    t349 = *((unsigned int *)t346);
    t350 = (t349 >> 0);
    *((unsigned int *)t345) = t350;
    t351 = *((unsigned int *)t342);
    *((unsigned int *)t342) = (t351 & 31U);
    t352 = *((unsigned int *)t345);
    *((unsigned int *)t345) = (t352 & 31U);
    t354 = (t0 + 2088);
    t355 = (t354 + 56U);
    t356 = *((char **)t355);
    memset(t353, 0, 8);
    t357 = (t353 + 4);
    t358 = (t356 + 4);
    t359 = *((unsigned int *)t356);
    t360 = (t359 >> 6);
    *((unsigned int *)t353) = t360;
    t361 = *((unsigned int *)t358);
    t362 = (t361 >> 6);
    *((unsigned int *)t357) = t362;
    t363 = *((unsigned int *)t353);
    *((unsigned int *)t353) = (t363 & 3U);
    t364 = *((unsigned int *)t357);
    *((unsigned int *)t357) = (t364 & 3U);
    t365 = (t0 + 1368U);
    t366 = *((char **)t365);
    xsi_vlogtype_concat(t341, 32, 8, 3U, t366, 1, t353, 2, t342, 5);
    goto LAB117;

LAB118:    xsi_vlog_unsigned_bit_combine(t220, 32, t256, 32, t341, 32);
    goto LAB122;

LAB120:    memcpy(t220, t256, 8);
    goto LAB122;

LAB125:    t280 = (t265 + 4);
    *((unsigned int *)t265) = 1;
    *((unsigned int *)t280) = 1;
    goto LAB126;

LAB127:    *((unsigned int *)t257) = 1;
    goto LAB130;

LAB129:    t287 = (t257 + 4);
    *((unsigned int *)t257) = 1;
    *((unsigned int *)t287) = 1;
    goto LAB130;

LAB131:    t294 = (t0 + 2088);
    t295 = (t294 + 56U);
    t296 = *((char **)t295);
    memset(t293, 0, 8);
    t297 = (t293 + 4);
    t298 = (t296 + 4);
    t299 = *((unsigned int *)t296);
    t300 = (t299 >> 0);
    *((unsigned int *)t293) = t300;
    t301 = *((unsigned int *)t298);
    t302 = (t301 >> 0);
    *((unsigned int *)t297) = t302;
    t303 = *((unsigned int *)t293);
    *((unsigned int *)t293) = (t303 & 127U);
    t304 = *((unsigned int *)t297);
    *((unsigned int *)t297) = (t304 & 127U);
    t305 = (t0 + 1368U);
    t306 = *((char **)t305);
    xsi_vlogtype_concat(t292, 32, 8, 2U, t306, 1, t293, 7);
    goto LAB132;

LAB133:    t305 = (t0 + 2088);
    t313 = (t305 + 56U);
    t314 = *((char **)t313);
    memset(t312, 0, 8);
    t315 = (t312 + 4);
    t316 = (t314 + 4);
    t317 = *((unsigned int *)t314);
    t318 = (t317 >> 0);
    *((unsigned int *)t312) = t318;
    t319 = *((unsigned int *)t316);
    t320 = (t319 >> 0);
    *((unsigned int *)t315) = t320;
    t321 = *((unsigned int *)t312);
    *((unsigned int *)t312) = (t321 & 63U);
    t322 = *((unsigned int *)t315);
    *((unsigned int *)t315) = (t322 & 63U);
    t323 = (t0 + 2088);
    t324 = (t323 + 56U);
    t325 = *((char **)t324);
    memset(t326, 0, 8);
    t327 = (t326 + 4);
    t328 = (t325 + 4);
    t329 = *((unsigned int *)t325);
    t330 = (t329 >> 7);
    t331 = (t330 & 1);
    *((unsigned int *)t326) = t331;
    t332 = *((unsigned int *)t328);
    t333 = (t332 >> 7);
    t334 = (t333 & 1);
    *((unsigned int *)t327) = t334;
    t335 = (t0 + 1368U);
    t336 = *((char **)t335);
    xsi_vlogtype_concat(t311, 32, 8, 3U, t336, 1, t326, 1, t312, 6);
    goto LAB134;

LAB135:    xsi_vlog_unsigned_bit_combine(t256, 32, t292, 32, t311, 32);
    goto LAB139;

LAB137:    memcpy(t256, t292, 8);
    goto LAB139;

}

static void Cont_59_2(char *t0)
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

LAB0:    t1 = (t0 + 3664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4160);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 255U;
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
    xsi_driver_vfirst_trans(t5, 0, 7);
    t18 = (t0 + 4016);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002340562130_3241342597_init()
{
	static char *pe[] = {(void *)Always_28_0,(void *)Cont_31_1,(void *)Cont_59_2};
	xsi_register_didat("work_m_00000000002340562130_3241342597", "isim/tb_isim_beh.exe.sim/work/m_00000000002340562130_3241342597.didat");
	xsi_register_executes(pe);
}
