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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/bw_r_irf_register.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {2, 0};
static unsigned int ng3[] = {0U, 0U, 0U, 0U, 0U, 0U};



static void Always_209_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 8048);
    *((int *)t2) = 1;
    t3 = (t0 + 6024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(209, ng0);

LAB5:    xsi_set_current_line(210, ng0);
    t4 = (t0 + 2280U);
    t5 = *((char **)t4);
    t4 = (t0 + 4760);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 4);
    goto LAB2;

}

static void NetDecl_213_1(char *t0)
{
    char t5[24];
    char t12[8];
    char t13[8];
    char t25[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 6240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 4280);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 4280);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 4280);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t14 = (t0 + 4760);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t13, 0, 8);
    t17 = (t13 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t23 & 3U);
    t24 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t24 & 3U);
    t26 = (t0 + 4760);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t25, 0, 8);
    t29 = (t25 + 4);
    t30 = (t28 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (t31 >> 2);
    *((unsigned int *)t25) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 2);
    *((unsigned int *)t29) = t34;
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 3U);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 & 3U);
    t37 = (t0 + 608);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_rshift(t39, 2, t25, 2, t38, 32);
    xsi_vlogtype_concat(t12, 4, 4, 2U, t39, 2, t13, 2);
    xsi_vlog_generic_get_array_select_value(t5, 72, t4, t8, t11, 2, 1, t12, 4, 2);
    t37 = (t0 + 8240);
    t40 = (t37 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    xsi_vlog_bit_copy(t43, 0, t5, 0, 72);
    xsi_driver_vfirst_trans(t37, 0, 71U);
    t44 = (t0 + 8064);
    *((int *)t44) = 1;

LAB1:    return;
}

static void Always_215_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 8080);
    *((int *)t2) = 1;
    t3 = (t0 + 6520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(215, ng0);

LAB5:    xsi_set_current_line(216, ng0);
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    t4 = (t0 + 4920);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 4, 0LL);
    goto LAB2;

}

static void Always_218_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 6736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 8096);
    *((int *)t2) = 1;
    t3 = (t0 + 6768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(218, ng0);

LAB5:    xsi_set_current_line(219, ng0);
    t4 = (t0 + 1800U);
    t5 = *((char **)t4);
    t4 = (t0 + 5080);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_231_4(char *t0)
{
    char t15[8];
    char t16[8];
    char t23[8];
    char t24[8];
    char t36[8];
    char t50[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t51;
    int t52;
    char *t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    int t60;

LAB0:    t1 = (t0 + 6984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 8112);
    *((int *)t2) = 1;
    t3 = (t0 + 7016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(231, ng0);

LAB5:    xsi_set_current_line(232, ng0);
    t4 = (t0 + 5080);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(232, ng0);
    t13 = (t0 + 3240U);
    t14 = *((char **)t13);
    t13 = (t0 + 4280);
    t17 = (t0 + 4280);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4280);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t25 = (t0 + 4920);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t24, 0, 8);
    t28 = (t24 + 4);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t27);
    t31 = (t30 >> 0);
    *((unsigned int *)t24) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 3U);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 3U);
    t37 = (t0 + 4920);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t36, 0, 8);
    t40 = (t36 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t39);
    t43 = (t42 >> 2);
    *((unsigned int *)t36) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 2);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t46 & 3U);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 & 3U);
    t48 = (t0 + 608);
    t49 = *((char **)t48);
    memset(t50, 0, 8);
    xsi_vlog_unsigned_rshift(t50, 2, t36, 2, t49, 32);
    xsi_vlogtype_concat(t23, 4, 4, 2U, t50, 2, t24, 2);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t23, 4, 2);
    t48 = (t15 + 4);
    t51 = *((unsigned int *)t48);
    t52 = (!(t51));
    t53 = (t16 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    t56 = (t52 && t55);
    if (t56 == 1)
        goto LAB9;

LAB10:    goto LAB8;

LAB9:    t57 = *((unsigned int *)t15);
    t58 = *((unsigned int *)t16);
    t59 = (t57 - t58);
    t60 = (t59 + 1);
    xsi_vlogvar_wait_assign_value(t13, t14, 0, *((unsigned int *)t16), t60, 0LL);
    goto LAB10;

}

static void NetDecl_237_5(char *t0)
{
    char t6[8];
    char t15[8];
    char t16[8];
    char t20[8];
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
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;

LAB0:    t1 = (t0 + 7232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(237, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4760);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 3);
    t11 = (t10 & 1);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 3);
    t14 = (t13 & 1);
    *((unsigned int *)t7) = t14;
    memset(t15, 0, 8);
    xsi_vlog_unsigned_lshift(t15, 2, t2, 2, t6, 1);
    t17 = ((char*)((ng2)));
    t18 = (t0 + 2120U);
    t19 = *((char **)t18);
    xsi_vlog_mul_concat(t16, 2, 1, t17, 1U, t19, 1);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    t23 = (t21 & t22);
    *((unsigned int *)t20) = t23;
    t18 = (t15 + 4);
    t24 = (t16 + 4);
    t25 = (t20 + 4);
    t26 = *((unsigned int *)t18);
    t27 = *((unsigned int *)t24);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = *((unsigned int *)t25);
    t30 = (t29 != 0);
    if (t30 == 1)
        goto LAB4;

LAB5:
LAB6:    t51 = (t0 + 8304);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    memset(t55, 0, 8);
    t56 = 3U;
    t57 = t56;
    t58 = (t20 + 4);
    t59 = *((unsigned int *)t20);
    t56 = (t56 & t59);
    t60 = *((unsigned int *)t58);
    t57 = (t57 & t60);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t62 | t56);
    t63 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t63 | t57);
    xsi_driver_vfirst_trans(t51, 0, 1U);
    t64 = (t0 + 8128);
    *((int *)t64) = 1;

LAB1:    return;
LAB4:    t31 = *((unsigned int *)t20);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t20) = (t31 | t32);
    t33 = (t15 + 4);
    t34 = (t16 + 4);
    t35 = *((unsigned int *)t15);
    t36 = (~(t35));
    t37 = *((unsigned int *)t33);
    t38 = (~(t37));
    t39 = *((unsigned int *)t16);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (~(t41));
    t43 = (t36 & t38);
    t44 = (t40 & t42);
    t45 = (~(t43));
    t46 = (~(t44));
    t47 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t47 & t45);
    t48 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t48 & t46);
    t49 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t49 & t45);
    t50 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t50 & t46);
    goto LAB6;

}

static void NetDecl_258_6(char *t0)
{
    char t5[8];
    char t6[8];
    char t18[8];
    char t30[8];
    char t46[8];
    char t78[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    int t70;
    int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
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
    int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t109;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;

LAB0:    t1 = (t0 + 7480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(258, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 3400U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 4920);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t11 = (t9 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 0);
    *((unsigned int *)t6) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 0);
    *((unsigned int *)t10) = t15;
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 15U);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 & 15U);
    t19 = (t0 + 4760);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t18, 0, 8);
    t22 = (t18 + 4);
    t23 = (t21 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t18) = t25;
    t26 = *((unsigned int *)t23);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t28 & 15U);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 15U);
    memset(t30, 0, 8);
    t31 = (t6 + 4);
    t32 = (t18 + 4);
    t33 = *((unsigned int *)t6);
    t34 = *((unsigned int *)t18);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t38 = (t36 ^ t37);
    t39 = (t35 | t38);
    t40 = *((unsigned int *)t31);
    t41 = *((unsigned int *)t32);
    t42 = (t40 | t41);
    t43 = (~(t42));
    t44 = (t39 & t43);
    if (t44 != 0)
        goto LAB5;

LAB4:    if (t42 != 0)
        goto LAB6;

LAB7:    xsi_vlog_mul_concat(t5, 2, 1, t2, 1U, t30, 1);
    t47 = *((unsigned int *)t4);
    t48 = *((unsigned int *)t5);
    t49 = (t47 & t48);
    *((unsigned int *)t46) = t49;
    t50 = (t4 + 4);
    t51 = (t5 + 4);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t50);
    t54 = *((unsigned int *)t51);
    t55 = (t53 | t54);
    *((unsigned int *)t52) = t55;
    t56 = *((unsigned int *)t52);
    t57 = (t56 != 0);
    if (t57 == 1)
        goto LAB8;

LAB9:
LAB10:    t79 = *((unsigned int *)t3);
    t80 = *((unsigned int *)t46);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = (t3 + 4);
    t83 = (t46 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB11;

LAB12:
LAB13:    t106 = (t0 + 8368);
    t107 = (t106 + 56U);
    t108 = *((char **)t107);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    memset(t110, 0, 8);
    t111 = 3U;
    t112 = t111;
    t113 = (t78 + 4);
    t114 = *((unsigned int *)t78);
    t111 = (t111 & t114);
    t115 = *((unsigned int *)t113);
    t112 = (t112 & t115);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t117 | t111);
    t118 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t118 | t112);
    xsi_driver_vfirst_trans(t106, 0, 1U);
    t119 = (t0 + 8144);
    *((int *)t119) = 1;

LAB1:    return;
LAB5:    *((unsigned int *)t30) = 1;
    goto LAB7;

LAB6:    t45 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB7;

LAB8:    t58 = *((unsigned int *)t46);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t46) = (t58 | t59);
    t60 = (t4 + 4);
    t61 = (t5 + 4);
    t62 = *((unsigned int *)t4);
    t63 = (~(t62));
    t64 = *((unsigned int *)t60);
    t65 = (~(t64));
    t66 = *((unsigned int *)t5);
    t67 = (~(t66));
    t68 = *((unsigned int *)t61);
    t69 = (~(t68));
    t70 = (t63 & t65);
    t71 = (t67 & t69);
    t72 = (~(t70));
    t73 = (~(t71));
    t74 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t74 & t72);
    t75 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t75 & t73);
    t76 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t76 & t72);
    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & t73);
    goto LAB10;

LAB11:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t3 + 4);
    t93 = (t46 + 4);
    t94 = *((unsigned int *)t92);
    t95 = (~(t94));
    t96 = *((unsigned int *)t3);
    t97 = (t96 & t95);
    t98 = *((unsigned int *)t93);
    t99 = (~(t98));
    t100 = *((unsigned int *)t46);
    t101 = (t100 & t99);
    t102 = (~(t97));
    t103 = (~(t101));
    t104 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t104 & t102);
    t105 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t105 & t103);
    goto LAB13;

}

static void Always_261_7(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;

LAB0:    t1 = (t0 + 7728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(261, ng0);
    t2 = (t0 + 8160);
    *((int *)t2) = 1;
    t3 = (t0 + 7760);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(261, ng0);

LAB5:    xsi_set_current_line(262, ng0);
    t5 = (t0 + 1480U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(268, ng0);

LAB14:    xsi_set_current_line(269, ng0);
    t2 = (t0 + 3880U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB15;

LAB16:
LAB17:    xsi_set_current_line(270, ng0);
    t2 = (t0 + 3880U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t4 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t21 = (t18 != 0);
    if (t21 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(263, ng0);

LAB13:    xsi_set_current_line(264, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 72, 0LL);
    xsi_set_current_line(265, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 72, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(269, ng0);
    t12 = (t0 + 3560U);
    t13 = *((char **)t12);
    t12 = (t0 + 4440);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 72, 0LL);
    goto LAB17;

LAB18:    xsi_set_current_line(270, ng0);
    t12 = (t0 + 3720U);
    t13 = *((char **)t12);
    t12 = (t0 + 4600);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 72, 0LL);
    goto LAB20;

}


extern void work_m_12703348720498223860_3036736221_init()
{
	static char *pe[] = {(void *)Always_209_0,(void *)NetDecl_213_1,(void *)Always_215_2,(void *)Always_218_3,(void *)Always_231_4,(void *)NetDecl_237_5,(void *)NetDecl_258_6,(void *)Always_261_7};
	xsi_register_didat("work_m_12703348720498223860_3036736221", "isim/cmp_top_isim_beh.exe.sim/work/m_12703348720498223860_3036736221.didat");
	xsi_register_executes(pe);
}
