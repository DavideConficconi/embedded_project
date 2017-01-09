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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/pcx_decoder.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};



static void NetDecl_73_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 6200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 7128);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_bit_copy(t7, 0, t3, 0, 124);
    xsi_driver_vfirst_trans(t2, 0, 123U);
    t8 = (t0 + 7016);
    *((int *)t8) = 1;

LAB1:    return;
}

static void Always_77_1(char *t0)
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

LAB0:    t1 = (t0 + 6448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 7032);
    *((int *)t2) = 1;
    t3 = (t0 + 6480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(78, ng0);

LAB5:    xsi_set_current_line(79, ng0);
    t5 = (t0 + 1208U);
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

LAB11:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(80, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_85_2(char *t0)
{
    char t6[8];
    char t19[8];
    char t28[8];
    char t36[8];
    char t68[8];
    char t83[8];
    char t91[8];
    char t124[8];
    char t127[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
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
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t125;
    unsigned int t126;

LAB0:    t1 = (t0 + 6696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 7048);
    *((int *)t2) = 1;
    t3 = (t0 + 6728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);

LAB5:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t36, t6, 8);

LAB12:    memset(t68, 0, 8);
    t69 = (t36 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t36);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t69) != 0)
        goto LAB22;

LAB23:    t76 = (t68 + 4);
    t77 = *((unsigned int *)t68);
    t78 = *((unsigned int *)t76);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB24;

LAB25:    memcpy(t91, t68, 8);

LAB26:    t123 = (t0 + 4328);
    xsi_vlogvar_assign_value(t123, t91, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t2) != 0)
        goto LAB36;

LAB37:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (!(t14));
    t16 = *((unsigned int *)t5);
    t22 = (t15 || t16);
    if (t22 > 0)
        goto LAB38;

LAB39:    memcpy(t124, t6, 8);

LAB40:    t105 = (t0 + 2728);
    xsi_vlogvar_assign_value(t105, t124, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 4968);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 33);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 22);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 22);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 31U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 31U);
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 5);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 21);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 16);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 16);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t12 = (t0 + 3368);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 14);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 14);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t12 = (t0 + 3528);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 14);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 14);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t12 = (t0 + 3848);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 15);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 15);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t12 = (t0 + 3688);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 13);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 13);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t12 = (t0 + 4008);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 1);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 11);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 11);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 3U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 3U);
    t12 = (t0 + 4168);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 2);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 24);
    t5 = (t3 + 28);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 8);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 8);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 3);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t127, 40, t3, 103, 64);
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t127, 0, 0, 40);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t127, 64, t3, 63, 0);
    t2 = (t0 + 4648);
    xsi_vlogvar_assign_value(t2, t127, 0, 0, 64);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t127, 64, t3, 63, 0);
    t2 = (t0 + 4808);
    xsi_vlogvar_assign_value(t2, t127, 0, 0, 64);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t19, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t2) != 0)
        goto LAB68;

LAB69:    t5 = (t19 + 4);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB70;

LAB71:    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t5) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t19) > 0)
        goto LAB76;

LAB77:    memcpy(t6, t28, 8);

LAB78:    t41 = (t0 + 5288);
    xsi_vlogvar_assign_value(t41, t6, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 2328U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t19 + 4);
    t20 = (t18 + 24);
    t21 = (t18 + 28);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 27);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 27);
    t27 = (t26 & 1);
    *((unsigned int *)t17) = t27;
    memset(t28, 0, 8);
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t29) != 0)
        goto LAB15;

LAB16:    t37 = *((unsigned int *)t6);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t6 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t28) = 1;
    goto LAB16;

LAB15:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB16;

LAB17:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t6 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t6);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB19;

LAB20:    *((unsigned int *)t68) = 1;
    goto LAB23;

LAB22:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB23;

LAB24:    t80 = (t0 + 5128);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t83, 0, 8);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t82);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t84) != 0)
        goto LAB29;

LAB30:    t92 = *((unsigned int *)t68);
    t93 = *((unsigned int *)t83);
    t94 = (t92 & t93);
    *((unsigned int *)t91) = t94;
    t95 = (t68 + 4);
    t96 = (t83 + 4);
    t97 = (t91 + 4);
    t98 = *((unsigned int *)t95);
    t99 = *((unsigned int *)t96);
    t100 = (t98 | t99);
    *((unsigned int *)t97) = t100;
    t101 = *((unsigned int *)t97);
    t102 = (t101 != 0);
    if (t102 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB26;

LAB27:    *((unsigned int *)t83) = 1;
    goto LAB30;

LAB29:    t90 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB30;

LAB31:    t103 = *((unsigned int *)t91);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t91) = (t103 | t104);
    t105 = (t68 + 4);
    t106 = (t83 + 4);
    t107 = *((unsigned int *)t68);
    t108 = (~(t107));
    t109 = *((unsigned int *)t105);
    t110 = (~(t109));
    t111 = *((unsigned int *)t83);
    t112 = (~(t111));
    t113 = *((unsigned int *)t106);
    t114 = (~(t113));
    t115 = (t108 & t110);
    t116 = (t112 & t114);
    t117 = (~(t115));
    t118 = (~(t116));
    t119 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t119 & t117);
    t120 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t120 & t118);
    t121 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t121 & t117);
    t122 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t122 & t118);
    goto LAB33;

LAB34:    *((unsigned int *)t6) = 1;
    goto LAB37;

LAB36:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB37;

LAB38:    t12 = (t0 + 1848U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t12) != 0)
        goto LAB43;

LAB44:    t18 = (t19 + 4);
    t30 = *((unsigned int *)t19);
    t31 = *((unsigned int *)t18);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB45;

LAB46:    memcpy(t83, t19, 8);

LAB47:    memset(t91, 0, 8);
    t81 = (t83 + 4);
    t93 = *((unsigned int *)t81);
    t94 = (~(t93));
    t98 = *((unsigned int *)t83);
    t99 = (t98 & t94);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t81) != 0)
        goto LAB61;

LAB62:    t101 = *((unsigned int *)t6);
    t102 = *((unsigned int *)t91);
    t103 = (t101 | t102);
    *((unsigned int *)t124) = t103;
    t84 = (t6 + 4);
    t90 = (t91 + 4);
    t95 = (t124 + 4);
    t104 = *((unsigned int *)t84);
    t107 = *((unsigned int *)t90);
    t108 = (t104 | t107);
    *((unsigned int *)t95) = t108;
    t109 = *((unsigned int *)t95);
    t110 = (t109 != 0);
    if (t110 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB40;

LAB41:    *((unsigned int *)t19) = 1;
    goto LAB44;

LAB43:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB44;

LAB45:    t20 = (t0 + 2328U);
    t21 = *((char **)t20);
    memset(t36, 0, 8);
    t20 = (t36 + 4);
    t29 = (t21 + 24);
    t35 = (t21 + 28);
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 27);
    t37 = (t34 & 1);
    *((unsigned int *)t36) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 27);
    t43 = (t39 & 1);
    *((unsigned int *)t20) = t43;
    memset(t28, 0, 8);
    t40 = (t36 + 4);
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t36);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB51;

LAB49:    if (*((unsigned int *)t40) == 0)
        goto LAB48;

LAB50:    t41 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t41) = 1;

LAB51:    memset(t68, 0, 8);
    t42 = (t28 + 4);
    t49 = *((unsigned int *)t42);
    t52 = (~(t49));
    t53 = *((unsigned int *)t28);
    t54 = (t53 & t52);
    t55 = (t54 & 1U);
    if (t55 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t42) != 0)
        goto LAB54;

LAB55:    t56 = *((unsigned int *)t19);
    t57 = *((unsigned int *)t68);
    t58 = (t56 & t57);
    *((unsigned int *)t83) = t58;
    t51 = (t19 + 4);
    t69 = (t68 + 4);
    t75 = (t83 + 4);
    t59 = *((unsigned int *)t51);
    t62 = *((unsigned int *)t69);
    t63 = (t59 | t62);
    *((unsigned int *)t75) = t63;
    t64 = *((unsigned int *)t75);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB47;

LAB48:    *((unsigned int *)t28) = 1;
    goto LAB51;

LAB52:    *((unsigned int *)t68) = 1;
    goto LAB55;

LAB54:    t50 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB55;

LAB56:    t66 = *((unsigned int *)t83);
    t67 = *((unsigned int *)t75);
    *((unsigned int *)t83) = (t66 | t67);
    t76 = (t19 + 4);
    t80 = (t68 + 4);
    t70 = *((unsigned int *)t19);
    t71 = (~(t70));
    t72 = *((unsigned int *)t76);
    t73 = (~(t72));
    t74 = *((unsigned int *)t68);
    t77 = (~(t74));
    t78 = *((unsigned int *)t80);
    t79 = (~(t78));
    t60 = (t71 & t73);
    t61 = (t77 & t79);
    t85 = (~(t60));
    t86 = (~(t61));
    t87 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t87 & t85);
    t88 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t88 & t86);
    t89 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t89 & t85);
    t92 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t92 & t86);
    goto LAB58;

LAB59:    *((unsigned int *)t91) = 1;
    goto LAB62;

LAB61:    t82 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t82) = 1;
    goto LAB62;

LAB63:    t111 = *((unsigned int *)t124);
    t112 = *((unsigned int *)t95);
    *((unsigned int *)t124) = (t111 | t112);
    t96 = (t6 + 4);
    t97 = (t91 + 4);
    t113 = *((unsigned int *)t96);
    t114 = (~(t113));
    t117 = *((unsigned int *)t6);
    t115 = (t117 & t114);
    t118 = *((unsigned int *)t97);
    t119 = (~(t118));
    t120 = *((unsigned int *)t91);
    t116 = (t120 & t119);
    t121 = (~(t115));
    t122 = (~(t116));
    t125 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t125 & t121);
    t126 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t126 & t122);
    goto LAB65;

LAB66:    *((unsigned int *)t19) = 1;
    goto LAB69;

LAB68:    t4 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB69;

LAB70:    t12 = ((char*)((ng1)));
    goto LAB71;

LAB72:    t13 = (t0 + 2168U);
    t17 = *((char **)t13);
    memset(t36, 0, 8);
    t13 = (t17 + 4);
    t26 = *((unsigned int *)t13);
    t27 = (~(t26));
    t30 = *((unsigned int *)t17);
    t31 = (t30 & t27);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t13) != 0)
        goto LAB81;

LAB82:    t20 = (t36 + 4);
    t33 = *((unsigned int *)t36);
    t34 = *((unsigned int *)t20);
    t37 = (t33 || t34);
    if (t37 > 0)
        goto LAB83;

LAB84:    t38 = *((unsigned int *)t36);
    t39 = (~(t38));
    t43 = *((unsigned int *)t20);
    t44 = (t39 || t43);
    if (t44 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t20) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t36) > 0)
        goto LAB89;

LAB90:    memcpy(t28, t40, 8);

LAB91:    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t6, 1, t12, 1, t28, 1);
    goto LAB78;

LAB76:    memcpy(t6, t12, 8);
    goto LAB78;

LAB79:    *((unsigned int *)t36) = 1;
    goto LAB82;

LAB81:    t18 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB82;

LAB83:    t21 = ((char*)((ng2)));
    goto LAB84;

LAB85:    t29 = (t0 + 5128);
    t35 = (t29 + 56U);
    t40 = *((char **)t35);
    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t28, 1, t21, 1, t40, 1);
    goto LAB91;

LAB89:    memcpy(t28, t21, 8);
    goto LAB91;

}


extern void work_m_11260656360497422007_1407589050_init()
{
	static char *pe[] = {(void *)NetDecl_73_0,(void *)Always_77_1,(void *)Always_85_2};
	xsi_register_didat("work_m_11260656360497422007_1407589050", "isim/cmp_top_isim_beh.exe.sim/work/m_11260656360497422007_1407589050.didat");
	xsi_register_executes(pe);
}
