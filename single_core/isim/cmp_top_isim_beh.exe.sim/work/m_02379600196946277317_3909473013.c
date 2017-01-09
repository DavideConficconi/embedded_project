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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/fpu_denorm_frac.v";



static void Cont_349_0(char *t0)
{
    char t4[8];
    char t17[8];
    char t24[8];
    char t56[8];
    char t69[8];
    char t78[8];
    char t90[8];
    char t99[8];
    char t107[8];
    char t139[8];
    char t147[8];
    char t175[8];
    char t188[8];
    char t197[8];
    char t211[8];
    char t218[8];
    char t250[8];
    char t258[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
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
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
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
    char *t189;
    char *t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    char *t209;
    char *t210;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    char *t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    char *t232;
    char *t233;
    unsigned int t234;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    unsigned int t238;
    unsigned int t239;
    unsigned int t240;
    unsigned int t241;
    int t242;
    int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    unsigned int t248;
    unsigned int t249;
    char *t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    char *t257;
    unsigned int t259;
    unsigned int t260;
    unsigned int t261;
    char *t262;
    char *t263;
    char *t264;
    unsigned int t265;
    unsigned int t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    int t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    int t281;
    unsigned int t282;
    unsigned int t283;
    unsigned int t284;
    unsigned int t285;
    char *t286;
    char *t287;
    char *t288;
    char *t289;
    char *t290;
    unsigned int t291;
    unsigned int t292;
    char *t293;
    unsigned int t294;
    unsigned int t295;
    char *t296;
    unsigned int t297;
    unsigned int t298;
    char *t299;

LAB0:    t1 = (t0 + 11320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(349, ng0);
    t2 = (t0 + 9688U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t11);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB8;

LAB9:    memcpy(t24, t4, 8);

LAB10:    memset(t56, 0, 8);
    t57 = (t24 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t24);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t57) != 0)
        goto LAB20;

LAB21:    t64 = (t56 + 4);
    t65 = *((unsigned int *)t56);
    t66 = (!(t65));
    t67 = *((unsigned int *)t64);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB22;

LAB23:    memcpy(t147, t56, 8);

LAB24:    memset(t175, 0, 8);
    t176 = (t147 + 4);
    t177 = *((unsigned int *)t176);
    t178 = (~(t177));
    t179 = *((unsigned int *)t147);
    t180 = (t179 & t178);
    t181 = (t180 & 1U);
    if (t181 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t176) != 0)
        goto LAB56;

LAB57:    t183 = (t175 + 4);
    t184 = *((unsigned int *)t175);
    t185 = (!(t184));
    t186 = *((unsigned int *)t183);
    t187 = (t185 || t186);
    if (t187 > 0)
        goto LAB58;

LAB59:    memcpy(t258, t175, 8);

LAB60:    t286 = (t0 + 12512);
    t287 = (t286 + 56U);
    t288 = *((char **)t287);
    t289 = (t288 + 56U);
    t290 = *((char **)t289);
    memset(t290, 0, 8);
    t291 = 1U;
    t292 = t291;
    t293 = (t258 + 4);
    t294 = *((unsigned int *)t258);
    t291 = (t291 & t294);
    t295 = *((unsigned int *)t293);
    t292 = (t292 & t295);
    t296 = (t290 + 4);
    t297 = *((unsigned int *)t290);
    *((unsigned int *)t290) = (t297 | t291);
    t298 = *((unsigned int *)t296);
    *((unsigned int *)t296) = (t298 | t292);
    xsi_driver_vfirst_trans(t286, 0, 0);
    t299 = (t0 + 12384);
    *((int *)t299) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t15 = (t0 + 9848U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t16 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (~(t18));
    t20 = *((unsigned int *)t16);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB14:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t17);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t17 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t17) = 1;
    goto LAB14;

LAB13:    t23 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB14;

LAB15:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t17 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t17);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB17;

LAB18:    *((unsigned int *)t56) = 1;
    goto LAB21;

LAB20:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB21;

LAB22:    t70 = (t0 + 9688U);
    t71 = *((char **)t70);
    memset(t69, 0, 8);
    t70 = (t71 + 4);
    t72 = *((unsigned int *)t70);
    t73 = (~(t72));
    t74 = *((unsigned int *)t71);
    t75 = (t74 & t73);
    t76 = (t75 & 1U);
    if (t76 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t70) == 0)
        goto LAB25;

LAB27:    t77 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t77) = 1;

LAB28:    memset(t78, 0, 8);
    t79 = (t69 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t69);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t79) != 0)
        goto LAB31;

LAB32:    t86 = (t78 + 4);
    t87 = *((unsigned int *)t78);
    t88 = *((unsigned int *)t86);
    t89 = (t87 || t88);
    if (t89 > 0)
        goto LAB33;

LAB34:    memcpy(t107, t78, 8);

LAB35:    memset(t139, 0, 8);
    t140 = (t107 + 4);
    t141 = *((unsigned int *)t140);
    t142 = (~(t141));
    t143 = *((unsigned int *)t107);
    t144 = (t143 & t142);
    t145 = (t144 & 1U);
    if (t145 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t140) != 0)
        goto LAB49;

LAB50:    t148 = *((unsigned int *)t56);
    t149 = *((unsigned int *)t139);
    t150 = (t148 | t149);
    *((unsigned int *)t147) = t150;
    t151 = (t56 + 4);
    t152 = (t139 + 4);
    t153 = (t147 + 4);
    t154 = *((unsigned int *)t151);
    t155 = *((unsigned int *)t152);
    t156 = (t154 | t155);
    *((unsigned int *)t153) = t156;
    t157 = *((unsigned int *)t153);
    t158 = (t157 != 0);
    if (t158 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB24;

LAB25:    *((unsigned int *)t69) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t78) = 1;
    goto LAB32;

LAB31:    t85 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB32;

LAB33:    t91 = (t0 + 10008U);
    t92 = *((char **)t91);
    memset(t90, 0, 8);
    t91 = (t92 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t92);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB39;

LAB37:    if (*((unsigned int *)t91) == 0)
        goto LAB36;

LAB38:    t98 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t98) = 1;

LAB39:    memset(t99, 0, 8);
    t100 = (t90 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t90);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t100) != 0)
        goto LAB42;

LAB43:    t108 = *((unsigned int *)t78);
    t109 = *((unsigned int *)t99);
    t110 = (t108 & t109);
    *((unsigned int *)t107) = t110;
    t111 = (t78 + 4);
    t112 = (t99 + 4);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t111);
    t115 = *((unsigned int *)t112);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 != 0);
    if (t118 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB35;

LAB36:    *((unsigned int *)t90) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t99) = 1;
    goto LAB43;

LAB42:    t106 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB43;

LAB44:    t119 = *((unsigned int *)t107);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t107) = (t119 | t120);
    t121 = (t78 + 4);
    t122 = (t99 + 4);
    t123 = *((unsigned int *)t78);
    t124 = (~(t123));
    t125 = *((unsigned int *)t121);
    t126 = (~(t125));
    t127 = *((unsigned int *)t99);
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
    goto LAB46;

LAB47:    *((unsigned int *)t139) = 1;
    goto LAB50;

LAB49:    t146 = (t139 + 4);
    *((unsigned int *)t139) = 1;
    *((unsigned int *)t146) = 1;
    goto LAB50;

LAB51:    t159 = *((unsigned int *)t147);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t147) = (t159 | t160);
    t161 = (t56 + 4);
    t162 = (t139 + 4);
    t163 = *((unsigned int *)t161);
    t164 = (~(t163));
    t165 = *((unsigned int *)t56);
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
    goto LAB53;

LAB54:    *((unsigned int *)t175) = 1;
    goto LAB57;

LAB56:    t182 = (t175 + 4);
    *((unsigned int *)t175) = 1;
    *((unsigned int *)t182) = 1;
    goto LAB57;

LAB58:    t189 = (t0 + 9688U);
    t190 = *((char **)t189);
    memset(t188, 0, 8);
    t189 = (t190 + 4);
    t191 = *((unsigned int *)t189);
    t192 = (~(t191));
    t193 = *((unsigned int *)t190);
    t194 = (t193 & t192);
    t195 = (t194 & 1U);
    if (t195 != 0)
        goto LAB64;

LAB62:    if (*((unsigned int *)t189) == 0)
        goto LAB61;

LAB63:    t196 = (t188 + 4);
    *((unsigned int *)t188) = 1;
    *((unsigned int *)t196) = 1;

LAB64:    memset(t197, 0, 8);
    t198 = (t188 + 4);
    t199 = *((unsigned int *)t198);
    t200 = (~(t199));
    t201 = *((unsigned int *)t188);
    t202 = (t201 & t200);
    t203 = (t202 & 1U);
    if (t203 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t198) != 0)
        goto LAB67;

LAB68:    t205 = (t197 + 4);
    t206 = *((unsigned int *)t197);
    t207 = *((unsigned int *)t205);
    t208 = (t206 || t207);
    if (t208 > 0)
        goto LAB69;

LAB70:    memcpy(t218, t197, 8);

LAB71:    memset(t250, 0, 8);
    t251 = (t218 + 4);
    t252 = *((unsigned int *)t251);
    t253 = (~(t252));
    t254 = *((unsigned int *)t218);
    t255 = (t254 & t253);
    t256 = (t255 & 1U);
    if (t256 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t251) != 0)
        goto LAB81;

LAB82:    t259 = *((unsigned int *)t175);
    t260 = *((unsigned int *)t250);
    t261 = (t259 | t260);
    *((unsigned int *)t258) = t261;
    t262 = (t175 + 4);
    t263 = (t250 + 4);
    t264 = (t258 + 4);
    t265 = *((unsigned int *)t262);
    t266 = *((unsigned int *)t263);
    t267 = (t265 | t266);
    *((unsigned int *)t264) = t267;
    t268 = *((unsigned int *)t264);
    t269 = (t268 != 0);
    if (t269 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB60;

LAB61:    *((unsigned int *)t188) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t197) = 1;
    goto LAB68;

LAB67:    t204 = (t197 + 4);
    *((unsigned int *)t197) = 1;
    *((unsigned int *)t204) = 1;
    goto LAB68;

LAB69:    t209 = (t0 + 10168U);
    t210 = *((char **)t209);
    memset(t211, 0, 8);
    t209 = (t210 + 4);
    t212 = *((unsigned int *)t209);
    t213 = (~(t212));
    t214 = *((unsigned int *)t210);
    t215 = (t214 & t213);
    t216 = (t215 & 1U);
    if (t216 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t209) != 0)
        goto LAB74;

LAB75:    t219 = *((unsigned int *)t197);
    t220 = *((unsigned int *)t211);
    t221 = (t219 & t220);
    *((unsigned int *)t218) = t221;
    t222 = (t197 + 4);
    t223 = (t211 + 4);
    t224 = (t218 + 4);
    t225 = *((unsigned int *)t222);
    t226 = *((unsigned int *)t223);
    t227 = (t225 | t226);
    *((unsigned int *)t224) = t227;
    t228 = *((unsigned int *)t224);
    t229 = (t228 != 0);
    if (t229 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB71;

LAB72:    *((unsigned int *)t211) = 1;
    goto LAB75;

LAB74:    t217 = (t211 + 4);
    *((unsigned int *)t211) = 1;
    *((unsigned int *)t217) = 1;
    goto LAB75;

LAB76:    t230 = *((unsigned int *)t218);
    t231 = *((unsigned int *)t224);
    *((unsigned int *)t218) = (t230 | t231);
    t232 = (t197 + 4);
    t233 = (t211 + 4);
    t234 = *((unsigned int *)t197);
    t235 = (~(t234));
    t236 = *((unsigned int *)t232);
    t237 = (~(t236));
    t238 = *((unsigned int *)t211);
    t239 = (~(t238));
    t240 = *((unsigned int *)t233);
    t241 = (~(t240));
    t242 = (t235 & t237);
    t243 = (t239 & t241);
    t244 = (~(t242));
    t245 = (~(t243));
    t246 = *((unsigned int *)t224);
    *((unsigned int *)t224) = (t246 & t244);
    t247 = *((unsigned int *)t224);
    *((unsigned int *)t224) = (t247 & t245);
    t248 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t248 & t244);
    t249 = *((unsigned int *)t218);
    *((unsigned int *)t218) = (t249 & t245);
    goto LAB78;

LAB79:    *((unsigned int *)t250) = 1;
    goto LAB82;

LAB81:    t257 = (t250 + 4);
    *((unsigned int *)t250) = 1;
    *((unsigned int *)t257) = 1;
    goto LAB82;

LAB83:    t270 = *((unsigned int *)t258);
    t271 = *((unsigned int *)t264);
    *((unsigned int *)t258) = (t270 | t271);
    t272 = (t175 + 4);
    t273 = (t250 + 4);
    t274 = *((unsigned int *)t272);
    t275 = (~(t274));
    t276 = *((unsigned int *)t175);
    t277 = (t276 & t275);
    t278 = *((unsigned int *)t273);
    t279 = (~(t278));
    t280 = *((unsigned int *)t250);
    t281 = (t280 & t279);
    t282 = (~(t277));
    t283 = (~(t281));
    t284 = *((unsigned int *)t264);
    *((unsigned int *)t264) = (t284 & t282);
    t285 = *((unsigned int *)t264);
    *((unsigned int *)t264) = (t285 & t283);
    goto LAB85;

}

static void Cont_353_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 11568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(353, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t0 + 12576);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t24 = (t0 + 12400);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_355_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 11816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(355, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 12640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 12416);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_357_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 12064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(357, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 12432);
    *((int *)t16) = 1;

LAB1:    return;
}


extern void work_m_02379600196946277317_3909473013_init()
{
	static char *pe[] = {(void *)Cont_349_0,(void *)Cont_353_1,(void *)Cont_355_2,(void *)Cont_357_3};
	xsi_register_didat("work_m_02379600196946277317_3909473013", "isim/cmp_top_isim_beh.exe.sim/work/m_02379600196946277317_3909473013.didat");
	xsi_register_executes(pe);
}
