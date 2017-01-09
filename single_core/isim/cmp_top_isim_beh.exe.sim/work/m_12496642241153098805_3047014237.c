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
static unsigned int ng1[] = {0U, 0U, 0U, 0U};



static void Always_175_0(char *t0)
{
    char t4[16];
    char t5[8];
    char t18[16];
    char t19[8];
    char t32[16];
    char t39[16];
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 3296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 3864);
    *((int *)t2) = 1;
    t3 = (t0 + 3328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(177, ng0);
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

LAB10:    t41 = *((unsigned int *)t5);
    t42 = (~(t41));
    t43 = *((unsigned int *)t14);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t14) > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) > 0)
        goto LAB15;

LAB16:    memcpy(t4, t33, 16);

LAB17:    t45 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t45, t4, 0, 0, 41, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB8;

LAB9:    t20 = (t0 + 1664U);
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

LAB23:    t35 = *((unsigned int *)t19);
    t36 = (~(t35));
    t37 = *((unsigned int *)t28);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t28) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t19) > 0)
        goto LAB28;

LAB29:    memcpy(t18, t39, 16);

LAB30:    goto LAB10;

LAB11:    t33 = ((char*)((ng1)));
    goto LAB12;

LAB13:    xsi_vlog_unsigned_bit_combine(t4, 41, t18, 41, t33, 41);
    goto LAB17;

LAB15:    memcpy(t4, t18, 16);
    goto LAB17;

LAB18:    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB20:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB21;

LAB22:    t33 = (t0 + 1824U);
    t34 = *((char **)t33);
    xsi_vlog_get_part_select_value(t32, 41, t34, 40, 0);
    goto LAB23;

LAB24:    t33 = (t0 + 1184U);
    t40 = *((char **)t33);
    xsi_vlog_get_part_select_value(t39, 41, t40, 40, 0);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t18, 41, t32, 41, t39, 41);
    goto LAB30;

LAB28:    memcpy(t18, t32, 16);
    goto LAB30;

}

static void Cont_179_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(179, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t3, 41, t5, 40, 0);
    t6 = (t0 + 3960);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t10, 0, t3, 0, 41);
    xsi_driver_vfirst_trans(t6, 0, 40);
    t11 = (t0 + 3880);
    *((int *)t11) = 1;

LAB1:    return;
}


extern void work_m_12496642241153098805_3047014237_init()
{
	static char *pe[] = {(void *)Always_175_0,(void *)Cont_179_1};
	xsi_register_didat("work_m_12496642241153098805_3047014237", "isim/cmp_top_isim_beh.exe.sim/work/m_12496642241153098805_3047014237.didat");
	xsi_register_executes(pe);
}
