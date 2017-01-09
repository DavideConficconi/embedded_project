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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/sparc_ifu_swpla.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {15U, 0U};
static unsigned int ng8[] = {14U, 0U};



static void Always_46_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t39[8];
    char t46[8];
    char t70[8];
    char t71[8];
    char t76[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t17;
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
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
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
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    int t116;
    int t117;
    unsigned int t118;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2680);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);

LAB5:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 30);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 30);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 3U);
    t14 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t14);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB9;

LAB6:    if (t27 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t15) = 1;

LAB9:    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 30);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 30);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB16;

LAB13:    if (t27 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t15) = 1;

LAB16:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 30);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 30);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB31;

LAB28:    if (t27 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t15) = 1;

LAB31:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(86, ng0);

LAB123:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 24);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 24);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    memset(t15, 0, 8);
    t6 = (t15 + 4);
    t14 = (t7 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (t18 >> 23);
    t20 = (t19 & 1);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t14);
    t22 = (t21 >> 23);
    t23 = (t22 & 1);
    *((unsigned int *)t6) = t23;
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t15);
    t26 = (t24 | t25);
    *((unsigned int *)t39) = t26;
    t16 = (t4 + 4);
    t17 = (t15 + 4);
    t30 = (t39 + 4);
    t27 = *((unsigned int *)t16);
    t28 = *((unsigned int *)t17);
    t29 = (t27 | t28);
    *((unsigned int *)t30) = t29;
    t32 = *((unsigned int *)t30);
    t33 = (t32 != 0);
    if (t33 == 1)
        goto LAB124;

LAB125:
LAB126:    t38 = (t0 + 1048U);
    t47 = *((char **)t38);
    memset(t70, 0, 8);
    t38 = (t70 + 4);
    t48 = (t47 + 4);
    t52 = *((unsigned int *)t47);
    t53 = (t52 >> 21);
    t54 = (t53 & 1);
    *((unsigned int *)t70) = t54;
    t55 = *((unsigned int *)t48);
    t56 = (t55 >> 21);
    t57 = (t56 & 1);
    *((unsigned int *)t38) = t57;
    memset(t46, 0, 8);
    t61 = (t70 + 4);
    t58 = *((unsigned int *)t61);
    t59 = (~(t58));
    t60 = *((unsigned int *)t70);
    t63 = (t60 & t59);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB130;

LAB128:    if (*((unsigned int *)t61) == 0)
        goto LAB127;

LAB129:    t62 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t62) = 1;

LAB130:    t68 = (t46 + 4);
    t69 = (t70 + 4);
    t65 = *((unsigned int *)t70);
    t66 = (~(t65));
    *((unsigned int *)t46) = t66;
    *((unsigned int *)t68) = 0;
    if (*((unsigned int *)t69) != 0)
        goto LAB132;

LAB131:    t77 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t77 & 1U);
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 1U);
    t79 = *((unsigned int *)t39);
    t83 = *((unsigned int *)t46);
    t84 = (t79 | t83);
    *((unsigned int *)t71) = t84;
    t75 = (t39 + 4);
    t80 = (t46 + 4);
    t81 = (t71 + 4);
    t85 = *((unsigned int *)t75);
    t86 = *((unsigned int *)t80);
    t87 = (t85 | t86);
    *((unsigned int *)t81) = t87;
    t88 = *((unsigned int *)t81);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB133;

LAB134:
LAB135:    t91 = (t71 + 4);
    t106 = *((unsigned int *)t91);
    t107 = (~(t106));
    t109 = *((unsigned int *)t71);
    t110 = (t109 & t107);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB136;

LAB137:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 23);
    t10 = (t9 & 1);
    *((unsigned int *)t15) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 23);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t6 = (t15 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t20 = *((unsigned int *)t15);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB142;

LAB140:    if (*((unsigned int *)t6) == 0)
        goto LAB139;

LAB141:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB142:    t14 = (t4 + 4);
    t16 = (t15 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    *((unsigned int *)t4) = t24;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB144;

LAB143:    t29 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t29 & 1U);
    t32 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t32 & 1U);
    memset(t39, 0, 8);
    t17 = (t4 + 4);
    t33 = *((unsigned int *)t17);
    t34 = (~(t33));
    t35 = *((unsigned int *)t4);
    t36 = (t35 & t34);
    t40 = (t36 & 1U);
    if (t40 != 0)
        goto LAB145;

LAB146:    if (*((unsigned int *)t17) != 0)
        goto LAB147;

LAB148:    t31 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = *((unsigned int *)t31);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB149;

LAB150:    memcpy(t76, t39, 8);

LAB151:    t108 = (t76 + 4);
    t110 = *((unsigned int *)t108);
    t111 = (~(t110));
    t112 = *((unsigned int *)t76);
    t113 = (t112 & t111);
    t118 = (t113 != 0);
    if (t118 > 0)
        goto LAB163;

LAB164:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 21);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 21);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t6 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB169;

LAB166:    if (t27 != 0)
        goto LAB168;

LAB167:    *((unsigned int *)t15) = 1;

LAB169:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB170;

LAB171:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB172:
LAB165:
LAB138:
LAB34:
LAB19:
LAB12:    goto LAB2;

LAB8:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(49, ng0);
    t37 = ((char*)((ng1)));
    t38 = (t0 + 1448);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 1);
    goto LAB12;

LAB15:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(51, ng0);

LAB20:    xsi_set_current_line(52, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t39, 0, 8);
    t30 = (t39 + 4);
    t37 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (t40 >> 22);
    *((unsigned int *)t39) = t41;
    t42 = *((unsigned int *)t37);
    t43 = (t42 >> 22);
    *((unsigned int *)t30) = t43;
    t44 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t44 & 7U);
    t45 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t45 & 7U);
    t38 = ((char*)((ng3)));
    memset(t46, 0, 8);
    t47 = (t39 + 4);
    t48 = (t38 + 4);
    t49 = *((unsigned int *)t39);
    t50 = *((unsigned int *)t38);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB24;

LAB21:    if (t58 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t46) = 1;

LAB24:    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB27:    goto LAB19;

LAB23:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(53, ng0);
    t68 = ((char*)((ng2)));
    t69 = (t0 + 1448);
    xsi_vlogvar_assign_value(t69, t68, 0, 0, 1);
    goto LAB27;

LAB30:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(58, ng0);

LAB35:    xsi_set_current_line(59, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t39, 0, 8);
    t30 = (t39 + 4);
    t37 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (t40 >> 23);
    *((unsigned int *)t39) = t41;
    t42 = *((unsigned int *)t37);
    t43 = (t42 >> 23);
    *((unsigned int *)t30) = t43;
    t44 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t44 & 3U);
    t45 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t45 & 3U);
    t38 = ((char*)((ng5)));
    memset(t46, 0, 8);
    t47 = (t39 + 4);
    t48 = (t38 + 4);
    t49 = *((unsigned int *)t39);
    t50 = *((unsigned int *)t38);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB39;

LAB36:    if (t58 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t46) = 1;

LAB39:    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 24);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 24);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB46;

LAB43:    if (t27 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t15) = 1;

LAB46:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(72, ng0);

LAB83:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 19);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 19);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);
    t6 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB87;

LAB84:    if (t27 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t15) = 1;

LAB87:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB88;

LAB89:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 22);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 22);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB94;

LAB91:    if (t27 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t15) = 1;

LAB94:    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB95;

LAB96:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 19);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 19);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);
    t6 = ((char*)((ng6)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB101;

LAB98:    if (t27 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t15) = 1;

LAB101:    memset(t39, 0, 8);
    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t17) != 0)
        goto LAB104;

LAB105:    t31 = (t39 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = *((unsigned int *)t31);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB106;

LAB107:    memcpy(t76, t39, 8);

LAB108:    t108 = (t76 + 4);
    t105 = *((unsigned int *)t108);
    t106 = (~(t105));
    t107 = *((unsigned int *)t76);
    t109 = (t107 & t106);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB120;

LAB121:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB122:
LAB97:
LAB90:
LAB49:
LAB42:    goto LAB34;

LAB38:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(60, ng0);
    t68 = ((char*)((ng1)));
    t69 = (t0 + 1448);
    xsi_vlogvar_assign_value(t69, t68, 0, 0, 1);
    goto LAB42;

LAB45:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(62, ng0);

LAB50:    xsi_set_current_line(63, ng0);
    t30 = (t0 + 1048U);
    t31 = *((char **)t30);
    memset(t39, 0, 8);
    t30 = (t39 + 4);
    t37 = (t31 + 4);
    t40 = *((unsigned int *)t31);
    t41 = (t40 >> 22);
    t42 = (t41 & 1);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t37);
    t44 = (t43 >> 22);
    t45 = (t44 & 1);
    *((unsigned int *)t30) = t45;
    t38 = ((char*)((ng2)));
    memset(t46, 0, 8);
    t47 = (t39 + 4);
    t48 = (t38 + 4);
    t49 = *((unsigned int *)t39);
    t50 = *((unsigned int *)t38);
    t51 = (t49 ^ t50);
    t52 = *((unsigned int *)t47);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = (t51 | t54);
    t56 = *((unsigned int *)t47);
    t57 = *((unsigned int *)t48);
    t58 = (t56 | t57);
    t59 = (~(t58));
    t60 = (t55 & t59);
    if (t60 != 0)
        goto LAB54;

LAB51:    if (t58 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t46) = 1;

LAB54:    t62 = (t46 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t46);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 22);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 22);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t6);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t14);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t7);
    t26 = *((unsigned int *)t14);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB61;

LAB58:    if (t27 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t15) = 1;

LAB61:    memset(t39, 0, 8);
    t17 = (t15 + 4);
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t17) != 0)
        goto LAB64;

LAB65:    t31 = (t39 + 4);
    t40 = *((unsigned int *)t39);
    t41 = *((unsigned int *)t31);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB66;

LAB67:    memcpy(t76, t39, 8);

LAB68:    t108 = (t76 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t76);
    t112 = (t111 & t110);
    t113 = (t112 != 0);
    if (t113 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB82:
LAB57:    goto LAB49;

LAB53:    t61 = (t46 + 4);
    *((unsigned int *)t46) = 1;
    *((unsigned int *)t61) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(64, ng0);
    t68 = ((char*)((ng2)));
    t69 = (t0 + 1448);
    xsi_vlogvar_assign_value(t69, t68, 0, 0, 1);
    goto LAB57;

LAB60:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t39) = 1;
    goto LAB65;

LAB64:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB65;

LAB66:    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t46, 0, 8);
    t37 = (t46 + 4);
    t47 = (t38 + 4);
    t43 = *((unsigned int *)t38);
    t44 = (t43 >> 19);
    *((unsigned int *)t46) = t44;
    t45 = *((unsigned int *)t47);
    t49 = (t45 >> 19);
    *((unsigned int *)t37) = t49;
    t50 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t50 & 3U);
    t51 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t51 & 3U);
    t48 = ((char*)((ng2)));
    memset(t70, 0, 8);
    t61 = (t46 + 4);
    t62 = (t48 + 4);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t48);
    t54 = (t52 ^ t53);
    t55 = *((unsigned int *)t61);
    t56 = *((unsigned int *)t62);
    t57 = (t55 ^ t56);
    t58 = (t54 | t57);
    t59 = *((unsigned int *)t61);
    t60 = *((unsigned int *)t62);
    t63 = (t59 | t60);
    t64 = (~(t63));
    t65 = (t58 & t64);
    if (t65 != 0)
        goto LAB72;

LAB69:    if (t63 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t70) = 1;

LAB72:    memset(t71, 0, 8);
    t69 = (t70 + 4);
    t66 = *((unsigned int *)t69);
    t67 = (~(t66));
    t72 = *((unsigned int *)t70);
    t73 = (t72 & t67);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t69) != 0)
        goto LAB75;

LAB76:    t77 = *((unsigned int *)t39);
    t78 = *((unsigned int *)t71);
    t79 = (t77 & t78);
    *((unsigned int *)t76) = t79;
    t80 = (t39 + 4);
    t81 = (t71 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB77;

LAB78:
LAB79:    goto LAB68;

LAB71:    t68 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB72;

LAB73:    *((unsigned int *)t71) = 1;
    goto LAB76;

LAB75:    t75 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB76;

LAB77:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t39 + 4);
    t91 = (t71 + 4);
    t92 = *((unsigned int *)t39);
    t93 = (~(t92));
    t94 = *((unsigned int *)t90);
    t95 = (~(t94));
    t96 = *((unsigned int *)t71);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (~(t98));
    t100 = (t93 & t95);
    t101 = (t97 & t99);
    t102 = (~(t100));
    t103 = (~(t101));
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t106 & t102);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    goto LAB79;

LAB80:    xsi_set_current_line(67, ng0);
    t114 = ((char*)((ng2)));
    t115 = (t0 + 1448);
    xsi_vlogvar_assign_value(t115, t114, 0, 0, 1);
    goto LAB82;

LAB86:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB87;

LAB88:    xsi_set_current_line(74, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 1448);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB90;

LAB93:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB94;

LAB95:    xsi_set_current_line(76, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 1448);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB97;

LAB100:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t39) = 1;
    goto LAB105;

LAB104:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB105;

LAB106:    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t46, 0, 8);
    t37 = (t46 + 4);
    t47 = (t38 + 4);
    t44 = *((unsigned int *)t38);
    t45 = (t44 >> 19);
    *((unsigned int *)t46) = t45;
    t49 = *((unsigned int *)t47);
    t50 = (t49 >> 19);
    *((unsigned int *)t37) = t50;
    t51 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t51 & 15U);
    t52 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t52 & 15U);
    t48 = ((char*)((ng7)));
    memset(t70, 0, 8);
    t61 = (t46 + 4);
    t62 = (t48 + 4);
    t53 = *((unsigned int *)t46);
    t54 = *((unsigned int *)t48);
    t55 = (t53 ^ t54);
    t56 = *((unsigned int *)t61);
    t57 = *((unsigned int *)t62);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t61);
    t63 = *((unsigned int *)t62);
    t64 = (t60 | t63);
    t65 = (~(t64));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB112;

LAB109:    if (t64 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t70) = 1;

LAB112:    memset(t71, 0, 8);
    t69 = (t70 + 4);
    t67 = *((unsigned int *)t69);
    t72 = (~(t67));
    t73 = *((unsigned int *)t70);
    t74 = (t73 & t72);
    t77 = (t74 & 1U);
    if (t77 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t69) != 0)
        goto LAB115;

LAB116:    t78 = *((unsigned int *)t39);
    t79 = *((unsigned int *)t71);
    t83 = (t78 | t79);
    *((unsigned int *)t76) = t83;
    t80 = (t39 + 4);
    t81 = (t71 + 4);
    t82 = (t76 + 4);
    t84 = *((unsigned int *)t80);
    t85 = *((unsigned int *)t81);
    t86 = (t84 | t85);
    *((unsigned int *)t82) = t86;
    t87 = *((unsigned int *)t82);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB108;

LAB111:    t68 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t71) = 1;
    goto LAB116;

LAB115:    t75 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB116;

LAB117:    t89 = *((unsigned int *)t76);
    t92 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t89 | t92);
    t90 = (t39 + 4);
    t91 = (t71 + 4);
    t93 = *((unsigned int *)t90);
    t94 = (~(t93));
    t95 = *((unsigned int *)t39);
    t100 = (t95 & t94);
    t96 = *((unsigned int *)t91);
    t97 = (~(t96));
    t98 = *((unsigned int *)t71);
    t101 = (t98 & t97);
    t99 = (~(t100));
    t102 = (~(t101));
    t103 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t103 & t99);
    t104 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t104 & t102);
    goto LAB119;

LAB120:    xsi_set_current_line(78, ng0);
    t114 = ((char*)((ng2)));
    t115 = (t0 + 1448);
    xsi_vlogvar_assign_value(t115, t114, 0, 0, 1);
    goto LAB122;

LAB124:    t34 = *((unsigned int *)t39);
    t35 = *((unsigned int *)t30);
    *((unsigned int *)t39) = (t34 | t35);
    t31 = (t4 + 4);
    t37 = (t15 + 4);
    t36 = *((unsigned int *)t31);
    t40 = (~(t36));
    t41 = *((unsigned int *)t4);
    t100 = (t41 & t40);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t15);
    t101 = (t44 & t43);
    t45 = (~(t100));
    t49 = (~(t101));
    t50 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t50 & t45);
    t51 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t51 & t49);
    goto LAB126;

LAB127:    *((unsigned int *)t46) = 1;
    goto LAB130;

LAB132:    t67 = *((unsigned int *)t46);
    t72 = *((unsigned int *)t69);
    *((unsigned int *)t46) = (t67 | t72);
    t73 = *((unsigned int *)t68);
    t74 = *((unsigned int *)t69);
    *((unsigned int *)t68) = (t73 | t74);
    goto LAB131;

LAB133:    t92 = *((unsigned int *)t71);
    t93 = *((unsigned int *)t81);
    *((unsigned int *)t71) = (t92 | t93);
    t82 = (t39 + 4);
    t90 = (t46 + 4);
    t94 = *((unsigned int *)t82);
    t95 = (~(t94));
    t96 = *((unsigned int *)t39);
    t116 = (t96 & t95);
    t97 = *((unsigned int *)t90);
    t98 = (~(t97));
    t99 = *((unsigned int *)t46);
    t117 = (t99 & t98);
    t102 = (~(t116));
    t103 = (~(t117));
    t104 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t104 & t102);
    t105 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t105 & t103);
    goto LAB135;

LAB136:    xsi_set_current_line(90, ng0);
    t108 = ((char*)((ng1)));
    t114 = (t0 + 1448);
    xsi_vlogvar_assign_value(t114, t108, 0, 0, 1);
    goto LAB138;

LAB139:    *((unsigned int *)t4) = 1;
    goto LAB142;

LAB144:    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t25 | t26);
    t27 = *((unsigned int *)t14);
    t28 = *((unsigned int *)t16);
    *((unsigned int *)t14) = (t27 | t28);
    goto LAB143;

LAB145:    *((unsigned int *)t39) = 1;
    goto LAB148;

LAB147:    t30 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB148;

LAB149:    t37 = (t0 + 1048U);
    t38 = *((char **)t37);
    memset(t46, 0, 8);
    t37 = (t46 + 4);
    t47 = (t38 + 4);
    t44 = *((unsigned int *)t38);
    t45 = (t44 >> 19);
    *((unsigned int *)t46) = t45;
    t49 = *((unsigned int *)t47);
    t50 = (t49 >> 19);
    *((unsigned int *)t37) = t50;
    t51 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t51 & 15U);
    t52 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t52 & 15U);
    t48 = ((char*)((ng8)));
    memset(t70, 0, 8);
    t61 = (t46 + 4);
    t62 = (t48 + 4);
    t53 = *((unsigned int *)t46);
    t54 = *((unsigned int *)t48);
    t55 = (t53 ^ t54);
    t56 = *((unsigned int *)t61);
    t57 = *((unsigned int *)t62);
    t58 = (t56 ^ t57);
    t59 = (t55 | t58);
    t60 = *((unsigned int *)t61);
    t63 = *((unsigned int *)t62);
    t64 = (t60 | t63);
    t65 = (~(t64));
    t66 = (t59 & t65);
    if (t66 != 0)
        goto LAB155;

LAB152:    if (t64 != 0)
        goto LAB154;

LAB153:    *((unsigned int *)t70) = 1;

LAB155:    memset(t71, 0, 8);
    t69 = (t70 + 4);
    t67 = *((unsigned int *)t69);
    t72 = (~(t67));
    t73 = *((unsigned int *)t70);
    t74 = (t73 & t72);
    t77 = (t74 & 1U);
    if (t77 != 0)
        goto LAB156;

LAB157:    if (*((unsigned int *)t69) != 0)
        goto LAB158;

LAB159:    t78 = *((unsigned int *)t39);
    t79 = *((unsigned int *)t71);
    t83 = (t78 & t79);
    *((unsigned int *)t76) = t83;
    t80 = (t39 + 4);
    t81 = (t71 + 4);
    t82 = (t76 + 4);
    t84 = *((unsigned int *)t80);
    t85 = *((unsigned int *)t81);
    t86 = (t84 | t85);
    *((unsigned int *)t82) = t86;
    t87 = *((unsigned int *)t82);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB160;

LAB161:
LAB162:    goto LAB151;

LAB154:    t68 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB155;

LAB156:    *((unsigned int *)t71) = 1;
    goto LAB159;

LAB158:    t75 = (t71 + 4);
    *((unsigned int *)t71) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB159;

LAB160:    t89 = *((unsigned int *)t76);
    t92 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t89 | t92);
    t90 = (t39 + 4);
    t91 = (t71 + 4);
    t93 = *((unsigned int *)t39);
    t94 = (~(t93));
    t95 = *((unsigned int *)t90);
    t96 = (~(t95));
    t97 = *((unsigned int *)t71);
    t98 = (~(t97));
    t99 = *((unsigned int *)t91);
    t102 = (~(t99));
    t100 = (t94 & t96);
    t101 = (t98 & t102);
    t103 = (~(t100));
    t104 = (~(t101));
    t105 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t105 & t103);
    t106 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t106 & t104);
    t107 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t107 & t103);
    t109 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t109 & t104);
    goto LAB162;

LAB163:    xsi_set_current_line(96, ng0);
    t114 = ((char*)((ng2)));
    t115 = (t0 + 1448);
    xsi_vlogvar_assign_value(t115, t114, 0, 0, 1);
    goto LAB165;

LAB168:    t16 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB169;

LAB170:    xsi_set_current_line(98, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 1448);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    goto LAB172;

}


extern void work_m_12924738340503270325_2040608035_init()
{
	static char *pe[] = {(void *)Always_46_0};
	xsi_register_didat("work_m_12924738340503270325_2040608035", "isim/cmp_top_isim_beh.exe.sim/work/m_12924738340503270325_2040608035.didat");
	xsi_register_executes(pe);
}
