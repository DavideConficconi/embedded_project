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



static void Always_256_0(char *t0)
{
    char t4[16];
    char t5[8];
    char t18[16];
    char t25[16];
    char t26[8];
    char t38[16];
    char t45[16];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
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
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 3296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 3864);
    *((int *)t2) = 1;
    t3 = (t0 + 3328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(258, ng0);
    t6 = (t0 + 1664U);
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

LAB10:    t21 = *((unsigned int *)t5);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t14) > 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) > 0)
        goto LAB15;

LAB16:    memcpy(t4, t25, 16);

LAB17:    t48 = (t0 + 2384);
    xsi_vlogvar_wait_assign_value(t48, t4, 0, 0, 56, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t5) = 1;
    goto LAB8;

LAB7:    t13 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB8;

LAB9:    t19 = (t0 + 1824U);
    t20 = *((char **)t19);
    xsi_vlog_get_part_select_value(t18, 56, t20, 55, 0);
    goto LAB10;

LAB11:    t19 = (t0 + 1344U);
    t27 = *((char **)t19);
    memset(t26, 0, 8);
    t19 = (t27 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    t30 = *((unsigned int *)t27);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t19) != 0)
        goto LAB20;

LAB21:    t34 = (t26 + 4);
    t35 = *((unsigned int *)t26);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB22;

LAB23:    t41 = *((unsigned int *)t26);
    t42 = (~(t41));
    t43 = *((unsigned int *)t34);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t34) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t26) > 0)
        goto LAB28;

LAB29:    memcpy(t25, t45, 16);

LAB30:    goto LAB12;

LAB13:    xsi_vlog_unsigned_bit_combine(t4, 56, t18, 56, t25, 56);
    goto LAB17;

LAB15:    memcpy(t4, t18, 16);
    goto LAB17;

LAB18:    *((unsigned int *)t26) = 1;
    goto LAB21;

LAB20:    t33 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB21;

LAB22:    t39 = (t0 + 1184U);
    t40 = *((char **)t39);
    xsi_vlog_get_part_select_value(t38, 56, t40, 55, 0);
    goto LAB23;

LAB24:    t39 = (t0 + 2384);
    t46 = (t39 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_get_part_select_value(t45, 56, t47, 55, 0);
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t25, 56, t38, 56, t45, 56);
    goto LAB30;

LAB28:    memcpy(t25, t38, 16);
    goto LAB30;

}

static void Cont_260_1(char *t0)
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

LAB2:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 2384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_get_part_select_value(t3, 56, t5, 55, 0);
    t6 = (t0 + 3960);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t10, 0, t3, 0, 56);
    xsi_driver_vfirst_trans(t6, 0, 55);
    t11 = (t0 + 3880);
    *((int *)t11) = 1;

LAB1:    return;
}


extern void work_m_09200965274998907940_3847239906_init()
{
	static char *pe[] = {(void *)Always_256_0,(void *)Cont_260_1};
	xsi_register_didat("work_m_09200965274998907940_3847239906", "isim/cmp_top_isim_beh.exe.sim/work/m_09200965274998907940_3847239906.didat");
	xsi_register_executes(pe);
}
