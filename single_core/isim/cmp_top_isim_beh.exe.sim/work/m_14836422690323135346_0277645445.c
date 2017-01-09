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



static void Always_428_0(char *t0)
{
    char t4[8];
    char t5[8];
    char t18[8];
    char t19[8];
    char t32[8];
    char t46[8];
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
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
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
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t49;
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
    char *t62;
    char *t63;

LAB0:    t1 = (t0 + 2976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(428, ng0);
    t2 = (t0 + 3296);
    *((int *)t2) = 1;
    t3 = (t0 + 3008);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(429, ng0);
    t6 = (t0 + 1504U);
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

LAB10:    t58 = *((unsigned int *)t5);
    t59 = (~(t58));
    t60 = *((unsigned int *)t14);
    t61 = (t59 || t60);
    if (t61 > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t14) > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) > 0)
        goto LAB15;

LAB16:    memcpy(t4, t62, 8);

LAB17:    t63 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t63, t4, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB8;

LAB9:    t20 = (t0 + 1344U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t20) != 0)
        goto LAB20;

LAB21:    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB22;

LAB23:    t42 = *((unsigned int *)t19);
    t43 = (~(t42));
    t44 = *((unsigned int *)t28);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t28) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t19) > 0)
        goto LAB28;

LAB29:    memcpy(t18, t46, 8);

LAB30:    goto LAB10;

LAB11:    t62 = ((char*)((ng1)));
    goto LAB12;

LAB13:    xsi_vlog_unsigned_bit_combine(t4, 1, t18, 1, t62, 1);
    goto LAB17;

LAB15:    memcpy(t4, t18, 8);
    goto LAB17;

LAB18:    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB20:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB21;

LAB22:    t33 = (t0 + 1184U);
    t34 = *((char **)t33);
    memset(t32, 0, 8);
    t33 = (t32 + 4);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t34);
    t37 = (t36 >> 0);
    *((unsigned int *)t32) = t37;
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t33) = t39;
    t40 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t40 & 1U);
    t41 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t41 & 1U);
    goto LAB23;

LAB24:    t47 = (t0 + 2064);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    memset(t46, 0, 8);
    t50 = (t46 + 4);
    t51 = (t49 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 0);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t50) = t55;
    t56 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t56 & 1U);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t57 & 1U);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t18, 1, t32, 1, t46, 1);
    goto LAB30;

LAB28:    memcpy(t18, t32, 8);
    goto LAB30;

}


extern void work_m_14836422690323135346_0277645445_init()
{
	static char *pe[] = {(void *)Always_428_0};
	xsi_register_didat("work_m_14836422690323135346_0277645445", "isim/cmp_top_isim_beh.exe.sim/work/m_14836422690323135346_0277645445.didat");
	xsi_register_executes(pe);
}
