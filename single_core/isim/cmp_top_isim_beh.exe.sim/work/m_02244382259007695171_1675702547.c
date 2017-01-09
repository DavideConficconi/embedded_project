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



static void Always_318_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t18[8];
    char t32[8];
    char t33[8];
    char t51[8];
    char t52[8];
    char t65[8];
    char t79[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t53;
    char *t54;
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
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;

LAB0:    t1 = (t0 + 3456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(318, ng0);
    t2 = (t0 + 4024);
    *((int *)t2) = 1;
    t3 = (t0 + 3488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(321, ng0);
    t6 = (t0 + 1824U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t6 = (t7 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t6) != 0)
        goto LAB7;

LAB8:    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB9;

LAB10:    t28 = *((unsigned int *)t5);
    t29 = (~(t28));
    t30 = *((unsigned int *)t14);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t14) > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) > 0)
        goto LAB15;

LAB16:    memcpy(t4, t32, 8);

LAB17:    t91 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t91, t4, 0, 0, 2, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB8;

LAB9:    t19 = (t0 + 1984U);
    t20 = *((char **)t19);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 0);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t19) = t25;
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 3U);
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 3U);
    goto LAB10;

LAB11:    t34 = (t0 + 1504U);
    t35 = *((char **)t34);
    memset(t33, 0, 8);
    t34 = (t35 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (~(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t34) != 0)
        goto LAB20;

LAB21:    t42 = (t33 + 4);
    t43 = *((unsigned int *)t33);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB22;

LAB23:    t47 = *((unsigned int *)t33);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t42) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t33) > 0)
        goto LAB28;

LAB29:    memcpy(t32, t51, 8);

LAB30:    goto LAB12;

LAB13:    xsi_vlog_unsigned_bit_combine(t4, 2, t18, 2, t32, 2);
    goto LAB17;

LAB15:    memcpy(t4, t18, 8);
    goto LAB17;

LAB18:    *((unsigned int *)t33) = 1;
    goto LAB21;

LAB20:    t41 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB21;

LAB22:    t46 = ((char*)((ng1)));
    goto LAB23;

LAB24:    t53 = (t0 + 1344U);
    t54 = *((char **)t53);
    memset(t52, 0, 8);
    t53 = (t54 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (~(t55));
    t57 = *((unsigned int *)t54);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t53) != 0)
        goto LAB33;

LAB34:    t61 = (t52 + 4);
    t62 = *((unsigned int *)t52);
    t63 = *((unsigned int *)t61);
    t64 = (t62 || t63);
    if (t64 > 0)
        goto LAB35;

LAB36:    t75 = *((unsigned int *)t52);
    t76 = (~(t75));
    t77 = *((unsigned int *)t61);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t61) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t52) > 0)
        goto LAB41;

LAB42:    memcpy(t51, t79, 8);

LAB43:    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t32, 2, t46, 2, t51, 2);
    goto LAB30;

LAB28:    memcpy(t32, t46, 8);
    goto LAB30;

LAB31:    *((unsigned int *)t52) = 1;
    goto LAB34;

LAB33:    t60 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB34;

LAB35:    t66 = (t0 + 1184U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 0);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 0);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 3U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 3U);
    goto LAB36;

LAB37:    t80 = (t0 + 2544);
    t81 = (t80 + 56U);
    t82 = *((char **)t81);
    memset(t79, 0, 8);
    t83 = (t79 + 4);
    t84 = (t82 + 4);
    t85 = *((unsigned int *)t82);
    t86 = (t85 >> 0);
    *((unsigned int *)t79) = t86;
    t87 = *((unsigned int *)t84);
    t88 = (t87 >> 0);
    *((unsigned int *)t83) = t88;
    t89 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t89 & 3U);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t90 & 3U);
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t51, 2, t65, 2, t79, 2);
    goto LAB43;

LAB41:    memcpy(t51, t65, 8);
    goto LAB43;

}

static void Cont_323_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 2544);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 3U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 3U);
    t14 = (t0 + 4120);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 3U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 1);
    t27 = (t0 + 4040);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_02244382259007695171_1675702547_init()
{
	static char *pe[] = {(void *)Always_318_0,(void *)Cont_323_1};
	xsi_register_didat("work_m_02244382259007695171_1675702547", "isim/cmp_top_isim_beh.exe.sim/work/m_02244382259007695171_1675702547.didat");
	xsi_register_executes(pe);
}
