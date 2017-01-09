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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/fpu_buf.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U};



static void Always_58_0(char *t0)
{
    char t6[8];
    char t21[8];
    char t29[8];
    char t57[8];
    char t72[8];
    char t80[8];
    char t113[40];
    char t114[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
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
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t58;
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
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
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
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;

LAB0:    t1 = (t0 + 4760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5328);
    *((int *)t2) = 1;
    t3 = (t0 + 4792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t6, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t2) == 0)
        goto LAB6;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB9:    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t5) != 0)
        goto LAB12;

LAB13:    t14 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t15 = (!(t13));
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB14;

LAB15:    memcpy(t29, t6, 8);

LAB16:    memset(t57, 0, 8);
    t58 = (t29 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t29);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t58) != 0)
        goto LAB26;

LAB27:    t65 = (t57 + 4);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB28;

LAB29:    memcpy(t80, t57, 8);

LAB30:    t112 = (t0 + 2888);
    xsi_vlogvar_assign_value(t112, t80, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t5) != 0)
        goto LAB40;

LAB41:    t14 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t14);
    t16 = (t13 || t15);
    if (t16 > 0)
        goto LAB42;

LAB43:    t17 = *((unsigned int *)t6);
    t23 = (~(t17));
    t24 = *((unsigned int *)t14);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t14) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t6) > 0)
        goto LAB48;

LAB49:    memcpy(t113, t28, 40);

LAB50:    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t113, 0, 0, 145);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t5) != 0)
        goto LAB53;

LAB54:    t14 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t15 = (!(t13));
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB55;

LAB56:    memcpy(t29, t6, 8);

LAB57:    memset(t57, 0, 8);
    t58 = (t29 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t29);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t58) != 0)
        goto LAB67;

LAB68:    t65 = (t57 + 4);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB69;

LAB70:    memcpy(t114, t57, 8);

LAB71:    t121 = (t0 + 3208);
    xsi_vlogvar_assign_value(t121, t114, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t5) != 0)
        goto LAB85;

LAB86:    t14 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t14);
    t16 = (t13 || t15);
    if (t16 > 0)
        goto LAB87;

LAB88:    memcpy(t57, t6, 8);

LAB89:    t65 = (t0 + 3848);
    xsi_vlogvar_assign_value(t65, t57, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t5) != 0)
        goto LAB103;

LAB104:    t14 = (t6 + 4);
    t13 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t14);
    t16 = (t13 || t15);
    if (t16 > 0)
        goto LAB105;

LAB106:    t17 = *((unsigned int *)t6);
    t23 = (~(t17));
    t24 = *((unsigned int *)t14);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t14) > 0)
        goto LAB109;

LAB110:    if (*((unsigned int *)t6) > 0)
        goto LAB111;

LAB112:    memcpy(t113, t22, 40);

LAB113:    t28 = (t0 + 3528);
    xsi_vlogvar_assign_value(t28, t113, 0, 0, 145);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 145);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t6) = 1;
    goto LAB13;

LAB12:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB13;

LAB14:    t18 = (t0 + 2568);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t20);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t22) != 0)
        goto LAB19;

LAB20:    t30 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t21);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = (t6 + 4);
    t34 = (t21 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t21) = 1;
    goto LAB20;

LAB19:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB20;

LAB21:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t6 + 4);
    t44 = (t21 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t6);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t21);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & t53);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t54);
    goto LAB23;

LAB24:    *((unsigned int *)t57) = 1;
    goto LAB27;

LAB26:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB27;

LAB28:    t69 = (t0 + 2728);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t71);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t73) != 0)
        goto LAB33;

LAB34:    t81 = *((unsigned int *)t57);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t57 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB30;

LAB31:    *((unsigned int *)t72) = 1;
    goto LAB34;

LAB33:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB34;

LAB35:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t57 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t57);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t104 = (t97 & t99);
    t105 = (t101 & t103);
    t106 = (~(t104));
    t107 = (~(t105));
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t109 & t107);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    t111 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t111 & t107);
    goto LAB37;

LAB38:    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB40:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    t18 = (t0 + 3688);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB43;

LAB44:    t22 = (t0 + 1528U);
    t28 = *((char **)t22);
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t113, 145, t20, 145, t28, 145);
    goto LAB50;

LAB48:    memcpy(t113, t20, 40);
    goto LAB50;

LAB51:    *((unsigned int *)t6) = 1;
    goto LAB54;

LAB53:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB54;

LAB55:    t18 = (t0 + 2568);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t20);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t22) != 0)
        goto LAB60;

LAB61:    t30 = *((unsigned int *)t6);
    t31 = *((unsigned int *)t21);
    t32 = (t30 | t31);
    *((unsigned int *)t29) = t32;
    t33 = (t6 + 4);
    t34 = (t21 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB62;

LAB63:
LAB64:    goto LAB57;

LAB58:    *((unsigned int *)t21) = 1;
    goto LAB61;

LAB60:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB61;

LAB62:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    t43 = (t6 + 4);
    t44 = (t21 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t6);
    t48 = (t47 & t46);
    t49 = *((unsigned int *)t44);
    t50 = (~(t49));
    t51 = *((unsigned int *)t21);
    t52 = (t51 & t50);
    t53 = (~(t48));
    t54 = (~(t52));
    t55 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t55 & t53);
    t56 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t56 & t54);
    goto LAB64;

LAB65:    *((unsigned int *)t57) = 1;
    goto LAB68;

LAB67:    t64 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB68;

LAB69:    t69 = (t0 + 2888);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t71);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB75;

LAB73:    if (*((unsigned int *)t73) == 0)
        goto LAB72;

LAB74:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;

LAB75:    memset(t80, 0, 8);
    t84 = (t72 + 4);
    t81 = *((unsigned int *)t84);
    t82 = (~(t81));
    t83 = *((unsigned int *)t72);
    t87 = (t83 & t82);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t84) != 0)
        goto LAB78;

LAB79:    t89 = *((unsigned int *)t57);
    t90 = *((unsigned int *)t80);
    t91 = (t89 & t90);
    *((unsigned int *)t114) = t91;
    t86 = (t57 + 4);
    t94 = (t80 + 4);
    t95 = (t114 + 4);
    t92 = *((unsigned int *)t86);
    t93 = *((unsigned int *)t94);
    t96 = (t92 | t93);
    *((unsigned int *)t95) = t96;
    t97 = *((unsigned int *)t95);
    t98 = (t97 != 0);
    if (t98 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB71;

LAB72:    *((unsigned int *)t72) = 1;
    goto LAB75;

LAB76:    *((unsigned int *)t80) = 1;
    goto LAB79;

LAB78:    t85 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB79;

LAB80:    t99 = *((unsigned int *)t114);
    t100 = *((unsigned int *)t95);
    *((unsigned int *)t114) = (t99 | t100);
    t112 = (t57 + 4);
    t115 = (t80 + 4);
    t101 = *((unsigned int *)t57);
    t102 = (~(t101));
    t103 = *((unsigned int *)t112);
    t106 = (~(t103));
    t107 = *((unsigned int *)t80);
    t108 = (~(t107));
    t109 = *((unsigned int *)t115);
    t110 = (~(t109));
    t104 = (t102 & t106);
    t105 = (t108 & t110);
    t111 = (~(t104));
    t116 = (~(t105));
    t117 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t117 & t111);
    t118 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t118 & t116);
    t119 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t119 & t111);
    t120 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t120 & t116);
    goto LAB82;

LAB83:    *((unsigned int *)t6) = 1;
    goto LAB86;

LAB85:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB86;

LAB87:    t18 = (t0 + 2888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t21, 0, 8);
    t22 = (t20 + 4);
    t17 = *((unsigned int *)t22);
    t23 = (~(t17));
    t24 = *((unsigned int *)t20);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB93;

LAB91:    if (*((unsigned int *)t22) == 0)
        goto LAB90;

LAB92:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;

LAB93:    memset(t29, 0, 8);
    t33 = (t21 + 4);
    t27 = *((unsigned int *)t33);
    t30 = (~(t27));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t36 = (t32 & 1U);
    if (t36 != 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t33) != 0)
        goto LAB96;

LAB97:    t37 = *((unsigned int *)t6);
    t38 = *((unsigned int *)t29);
    t39 = (t37 & t38);
    *((unsigned int *)t57) = t39;
    t35 = (t6 + 4);
    t43 = (t29 + 4);
    t44 = (t57 + 4);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t43);
    t42 = (t40 | t41);
    *((unsigned int *)t44) = t42;
    t45 = *((unsigned int *)t44);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB98;

LAB99:
LAB100:    goto LAB89;

LAB90:    *((unsigned int *)t21) = 1;
    goto LAB93;

LAB94:    *((unsigned int *)t29) = 1;
    goto LAB97;

LAB96:    t34 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB97;

LAB98:    t47 = *((unsigned int *)t57);
    t49 = *((unsigned int *)t44);
    *((unsigned int *)t57) = (t47 | t49);
    t58 = (t6 + 4);
    t64 = (t29 + 4);
    t50 = *((unsigned int *)t6);
    t51 = (~(t50));
    t53 = *((unsigned int *)t58);
    t54 = (~(t53));
    t55 = *((unsigned int *)t29);
    t56 = (~(t55));
    t59 = *((unsigned int *)t64);
    t60 = (~(t59));
    t48 = (t51 & t54);
    t52 = (t56 & t60);
    t61 = (~(t48));
    t62 = (~(t52));
    t63 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t63 & t61);
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t62);
    t67 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t67 & t61);
    t68 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t68 & t62);
    goto LAB100;

LAB101:    *((unsigned int *)t6) = 1;
    goto LAB104;

LAB103:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB104;

LAB105:    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    goto LAB106;

LAB107:    t18 = (t0 + 3688);
    t20 = (t18 + 56U);
    t22 = *((char **)t20);
    goto LAB108;

LAB109:    xsi_vlog_unsigned_bit_combine(t113, 145, t19, 145, t22, 145);
    goto LAB113;

LAB111:    memcpy(t113, t19, 40);
    goto LAB113;

}

static void Always_82_1(char *t0)
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

LAB0:    t1 = (t0 + 5008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5344);
    *((int *)t2) = 1;
    t3 = (t0 + 5040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);

LAB5:    xsi_set_current_line(84, ng0);
    t5 = (t0 + 1048U);
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
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
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
        goto LAB12;

LAB13:    xsi_set_current_line(91, ng0);

LAB16:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 145, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(85, ng0);

LAB15:    xsi_set_current_line(86, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 145, 0LL);
    goto LAB14;

}


extern void work_m_15153820400086741036_0963996747_init()
{
	static char *pe[] = {(void *)Always_58_0,(void *)Always_82_1};
	xsi_register_didat("work_m_15153820400086741036_0963996747", "isim/cmp_top_isim_beh.exe.sim/work/m_15153820400086741036_0963996747.didat");
	xsi_register_executes(pe);
}
