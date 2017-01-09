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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/swrvr_clib.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {17, 0};



static void Always_530_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t6[8];
    char t41[8];
    char t45[8];
    char t54[8];
    char *t1;
    char *t2;
    char *t3;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    int t78;
    int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;

LAB0:    t1 = (t0 + 2816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(530, ng0);
    t2 = (t0 + 3136);
    *((int *)t2) = 1;
    t3 = (t0 + 2848);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(531, ng0);
    t7 = (t0 + 1504U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t7 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t8);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;

LAB8:    t15 = (t6 + 4);
    t16 = (t8 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    *((unsigned int *)t6) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB10;

LAB9:    t23 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    memset(t5, 0, 8);
    t25 = (t6 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t25) != 0)
        goto LAB13;

LAB14:    t32 = (t5 + 4);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB15;

LAB16:    t37 = *((unsigned int *)t5);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t32) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t5) > 0)
        goto LAB21;

LAB22:    memcpy(t4, t54, 8);

LAB23:    t86 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t86, t4, 0, 0, 17, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t6) = 1;
    goto LAB8;

LAB10:    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t6) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB9;

LAB11:    *((unsigned int *)t5) = 1;
    goto LAB14;

LAB13:    t31 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB14;

LAB15:    t36 = ((char*)((ng1)));
    goto LAB16;

LAB17:    t42 = ((char*)((ng2)));
    t43 = (t0 + 1504U);
    t44 = *((char **)t43);
    xsi_vlog_mul_concat(t41, 17, 1, t42, 1U, t44, 1);
    t43 = (t0 + 1184U);
    t46 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t47 = (t46 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (t48 >> 0);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 0);
    *((unsigned int *)t43) = t51;
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 & 131071U);
    t53 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t53 & 131071U);
    t55 = *((unsigned int *)t41);
    t56 = *((unsigned int *)t45);
    t57 = (t55 & t56);
    *((unsigned int *)t54) = t57;
    t58 = (t41 + 4);
    t59 = (t45 + 4);
    t60 = (t54 + 4);
    t61 = *((unsigned int *)t58);
    t62 = *((unsigned int *)t59);
    t63 = (t61 | t62);
    *((unsigned int *)t60) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 != 0);
    if (t65 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t4, 17, t36, 17, t54, 17);
    goto LAB23;

LAB21:    memcpy(t4, t36, 8);
    goto LAB23;

LAB24:    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t54) = (t66 | t67);
    t68 = (t41 + 4);
    t69 = (t45 + 4);
    t70 = *((unsigned int *)t41);
    t71 = (~(t70));
    t72 = *((unsigned int *)t68);
    t73 = (~(t72));
    t74 = *((unsigned int *)t45);
    t75 = (~(t74));
    t76 = *((unsigned int *)t69);
    t77 = (~(t76));
    t78 = (t71 & t73);
    t79 = (t75 & t77);
    t80 = (~(t78));
    t81 = (~(t79));
    t82 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t82 & t80);
    t83 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t83 & t81);
    t84 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t84 & t80);
    t85 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t85 & t81);
    goto LAB26;

}


extern void work_m_12845507561000226905_0357822678_init()
{
	static char *pe[] = {(void *)Always_530_0};
	xsi_register_didat("work_m_12845507561000226905_0357822678", "isim/cmp_top_isim_beh.exe.sim/work/m_12845507561000226905_0357822678.didat");
	xsi_register_executes(pe);
}
