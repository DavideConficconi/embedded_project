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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/sram_l1d_data.v";
static int ng1[] = {0, 0};
static int ng2[] = {512, 0};
static int ng3[] = {4, 0};
static int ng4[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {0U, 0U};



static void Initial_105_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t16[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;

LAB0:    xsi_set_current_line(106, ng0);

LAB2:    xsi_set_current_line(107, ng0);
    xsi_set_current_line(107, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3368);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t3, 32, t6, 32);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(108, ng0);

LAB6:    xsi_set_current_line(109, ng0);
    t14 = ((char*)((ng4)));
    t15 = (t0 + 3208);
    t18 = (t0 + 3208);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 3208);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 3368);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_convert_array_indices(t16, t17, t20, t23, 2, 1, t26, 32, 1);
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3368);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t3, 32, t4, 32);
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB3;

LAB7:    t34 = *((unsigned int *)t16);
    t35 = *((unsigned int *)t17);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t15, t14, 0, *((unsigned int *)t17), t37);
    goto LAB8;

}

static void Cont_117_1(char *t0)
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
    char *t10;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5352);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 576);
    xsi_driver_vfirst_trans(t5, 0, 575);
    t10 = (t0 + 5256);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_119_2(char *t0)
{
    char t13[8];
    char t38[144];
    char t87[144];
    char t96[144];
    char t98[144];
    char t144[144];
    char t188[8];
    char t189[8];
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
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
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
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t97;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    int t136;
    int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    char *t158;
    unsigned int t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    unsigned int t170;
    char *t171;
    char *t172;
    unsigned int t173;
    char *t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    char *t187;
    char *t190;
    char *t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    unsigned int t198;
    int t199;
    char *t200;
    unsigned int t201;
    int t202;
    int t203;
    unsigned int t204;
    unsigned int t205;
    int t206;
    int t207;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5272);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(120, ng0);

LAB5:    xsi_set_current_line(121, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(122, ng0);

LAB9:    xsi_set_current_line(123, ng0);
    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB13;

LAB10:    if (t25 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = (t0 + 3208);
    t15 = (t14 + 64U);
    t28 = *((char **)t15);
    t29 = (t0 + 1528U);
    t35 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t38, 576, t4, t12, t28, 2, 1, t35, 7, 2);
    t29 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t29, t38, 0, 0, 576, 0LL);

LAB16:    goto LAB8;

LAB12:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(124, ng0);
    t35 = (t0 + 2008U);
    t36 = *((char **)t35);
    t35 = (t0 + 1848U);
    t37 = *((char **)t35);
    t39 = 0;

LAB20:    t40 = (t39 < 18);
    if (t40 == 1)
        goto LAB21;

LAB22:    t84 = (t0 + 3208);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t88 = (t0 + 3208);
    t89 = (t88 + 72U);
    t90 = *((char **)t89);
    t91 = (t0 + 3208);
    t92 = (t91 + 64U);
    t93 = *((char **)t92);
    t94 = (t0 + 1528U);
    t95 = *((char **)t94);
    xsi_vlog_generic_get_array_select_value(t87, 576, t86, t90, t93, 2, 1, t95, 7, 2);
    t94 = (t0 + 1848U);
    t97 = *((char **)t94);
    xsi_vlogtype_unsigned_bit_neg(t96, 576, t97, 576);
    t99 = 0;

LAB26:    t100 = (t99 < 18);
    if (t100 == 1)
        goto LAB27;

LAB28:    t145 = 0;

LAB32:    t146 = (t145 < 18);
    if (t146 == 1)
        goto LAB33;

LAB34:    t187 = (t0 + 3208);
    t190 = (t0 + 3208);
    t191 = (t190 + 72U);
    t192 = *((char **)t191);
    t193 = (t0 + 3208);
    t194 = (t193 + 64U);
    t195 = *((char **)t194);
    t196 = (t0 + 1528U);
    t197 = *((char **)t196);
    xsi_vlog_generic_convert_array_indices(t188, t189, t192, t195, 2, 1, t197, 7, 2);
    t196 = (t188 + 4);
    t198 = *((unsigned int *)t196);
    t199 = (!(t198));
    t200 = (t189 + 4);
    t201 = *((unsigned int *)t200);
    t202 = (!(t201));
    t203 = (t199 && t202);
    if (t203 == 1)
        goto LAB35;

LAB36:    goto LAB16;

LAB17:    t59 = (t39 * 8);
    t60 = *((unsigned int *)t43);
    t61 = *((unsigned int *)t53);
    *((unsigned int *)t43) = (t60 | t61);
    t62 = (t36 + t59);
    t63 = (t59 + 4);
    t64 = (t36 + t63);
    t65 = (t37 + t59);
    t66 = (t59 + 4);
    t67 = (t37 + t66);
    t68 = *((unsigned int *)t62);
    t69 = (~(t68));
    t70 = *((unsigned int *)t64);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t80 & t78);
    t81 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t81 & t79);
    t82 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t82 & t78);
    t83 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t83 & t79);

LAB19:    t39 = (t39 + 1);
    goto LAB20;

LAB18:    goto LAB19;

LAB21:    t41 = (t39 * 8);
    t35 = (t36 + t41);
    t42 = (t37 + t41);
    t43 = (t38 + t41);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t42);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t39 * 8);
    t48 = (t47 + 4);
    t49 = (t36 + t48);
    t50 = (t47 + 4);
    t51 = (t37 + t50);
    t52 = (t47 + 4);
    t53 = (t38 + t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t51);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB17;
    else
        goto LAB18;

LAB23:    t119 = (t99 * 8);
    t120 = *((unsigned int *)t103);
    t121 = *((unsigned int *)t113);
    *((unsigned int *)t103) = (t120 | t121);
    t122 = (t87 + t119);
    t123 = (t119 + 4);
    t124 = (t87 + t123);
    t125 = (t96 + t119);
    t126 = (t119 + 4);
    t127 = (t96 + t126);
    t128 = *((unsigned int *)t122);
    t129 = (~(t128));
    t130 = *((unsigned int *)t124);
    t131 = (~(t130));
    t132 = *((unsigned int *)t125);
    t133 = (~(t132));
    t134 = *((unsigned int *)t127);
    t135 = (~(t134));
    t136 = (t129 & t131);
    t137 = (t133 & t135);
    t138 = (~(t136));
    t139 = (~(t137));
    t140 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t140 & t138);
    t141 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t141 & t139);
    t142 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t142 & t138);
    t143 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t143 & t139);

LAB25:    t99 = (t99 + 1);
    goto LAB26;

LAB24:    goto LAB25;

LAB27:    t101 = (t99 * 8);
    t94 = (t87 + t101);
    t102 = (t96 + t101);
    t103 = (t98 + t101);
    t104 = *((unsigned int *)t94);
    t105 = *((unsigned int *)t102);
    t106 = (t104 & t105);
    *((unsigned int *)t103) = t106;
    t107 = (t99 * 8);
    t108 = (t107 + 4);
    t109 = (t87 + t108);
    t110 = (t107 + 4);
    t111 = (t96 + t110);
    t112 = (t107 + 4);
    t113 = (t98 + t112);
    t114 = *((unsigned int *)t109);
    t115 = *((unsigned int *)t111);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 != 0);
    if (t118 == 1)
        goto LAB23;
    else
        goto LAB24;

LAB29:    t166 = (t145 * 8);
    t167 = *((unsigned int *)t150);
    t168 = *((unsigned int *)t160);
    *((unsigned int *)t150) = (t167 | t168);
    t169 = (t38 + t166);
    t170 = (t166 + 4);
    t171 = (t38 + t170);
    t172 = (t98 + t166);
    t173 = (t166 + 4);
    t174 = (t98 + t173);
    t175 = *((unsigned int *)t171);
    t176 = (~(t175));
    t177 = *((unsigned int *)t169);
    t178 = (t177 & t176);
    t179 = *((unsigned int *)t174);
    t180 = (~(t179));
    t181 = *((unsigned int *)t172);
    t182 = (t181 & t180);
    t183 = (~(t178));
    t184 = (~(t182));
    t185 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t185 & t183);
    t186 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t186 & t184);

LAB31:    t145 = (t145 + 1);
    goto LAB32;

LAB30:    goto LAB31;

LAB33:    t147 = (t145 * 8);
    t148 = (t38 + t147);
    t149 = (t98 + t147);
    t150 = (t144 + t147);
    t151 = *((unsigned int *)t148);
    t152 = *((unsigned int *)t149);
    t153 = (t151 | t152);
    *((unsigned int *)t150) = t153;
    t154 = (t145 * 8);
    t155 = (t154 + 4);
    t156 = (t38 + t155);
    t157 = (t154 + 4);
    t158 = (t98 + t157);
    t159 = (t154 + 4);
    t160 = (t144 + t159);
    t161 = *((unsigned int *)t156);
    t162 = *((unsigned int *)t158);
    t163 = (t161 | t162);
    *((unsigned int *)t160) = t163;
    t164 = *((unsigned int *)t160);
    t165 = (t164 != 0);
    if (t165 == 1)
        goto LAB29;
    else
        goto LAB30;

LAB35:    t204 = *((unsigned int *)t188);
    t205 = *((unsigned int *)t189);
    t206 = (t204 - t205);
    t207 = (t206 + 1);
    xsi_vlogvar_wait_assign_value(t187, t144, 0, *((unsigned int *)t189), t207, 0LL);
    goto LAB36;

}


extern void work_m_18119429446037084532_3154773499_init()
{
	static char *pe[] = {(void *)Initial_105_0,(void *)Cont_117_1,(void *)Always_119_2};
	xsi_register_didat("work_m_18119429446037084532_3154773499", "isim/cmp_top_isim_beh.exe.sim/work/m_18119429446037084532_3154773499.didat");
	xsi_register_executes(pe);
}
