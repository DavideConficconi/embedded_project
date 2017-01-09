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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/lsu_dcache_lfsr.v";
static unsigned int ng1[] = {31U, 0U};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {0, 0};



static void Always_57_0(char *t0)
{
    char t13[8];
    char t20[8];
    char t28[8];
    char t39[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4048);
    *((int *)t2) = 1;
    t3 = (t0 + 3512);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 5);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(60, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 5);
    goto LAB8;

LAB9:    xsi_set_current_line(62, ng0);

LAB12:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 2168U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t13 + 4);
    t11 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t13) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t4) = t19;
    t12 = (t0 + 2568);
    t21 = (t0 + 2568);
    t22 = (t21 + 72U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t20, t23, 2, t24, 32, 1);
    t25 = (t20 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    if (t27 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t20, t21, 2, t22, 32, 1);
    t23 = (t20 + 4);
    t15 = *((unsigned int *)t23);
    t27 = (!(t15));
    if (t27 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 2);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t20, t21, 2, t22, 32, 1);
    t23 = (t20 + 4);
    t15 = *((unsigned int *)t23);
    t27 = (!(t15));
    if (t27 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t21 = *((char **)t12);
    t22 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t20, t21, 2, t22, 32, 1);
    t23 = (t20 + 4);
    t15 = *((unsigned int *)t23);
    t27 = (!(t15));
    if (t27 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t14 = (t10 & 1);
    *((unsigned int *)t2) = t14;
    t5 = (t0 + 2168U);
    t11 = *((char **)t5);
    memset(t20, 0, 8);
    t5 = (t20 + 4);
    t12 = (t11 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 4);
    t17 = (t16 & 1);
    *((unsigned int *)t20) = t17;
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 4);
    t26 = (t19 & 1);
    *((unsigned int *)t5) = t26;
    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t20);
    t31 = (t29 ^ t30);
    *((unsigned int *)t28) = t31;
    t21 = (t13 + 4);
    t22 = (t20 + 4);
    t23 = (t28 + 4);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t22);
    t34 = (t32 | t33);
    *((unsigned int *)t23) = t34;
    t35 = *((unsigned int *)t23);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB21;

LAB22:
LAB23:    t24 = (t0 + 2568);
    t25 = (t0 + 2568);
    t40 = (t25 + 72U);
    t41 = *((char **)t40);
    t42 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t39, t41, 2, t42, 32, 1);
    t43 = (t39 + 4);
    t44 = *((unsigned int *)t43);
    t27 = (!(t44));
    if (t27 == 1)
        goto LAB24;

LAB25:    goto LAB11;

LAB13:    xsi_vlogvar_assign_value(t12, t13, 0, *((unsigned int *)t20), 1);
    goto LAB14;

LAB15:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t20), 1);
    goto LAB16;

LAB17:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t20), 1);
    goto LAB18;

LAB19:    xsi_vlogvar_assign_value(t5, t13, 0, *((unsigned int *)t20), 1);
    goto LAB20;

LAB21:    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t23);
    *((unsigned int *)t28) = (t37 | t38);
    goto LAB23;

LAB24:    xsi_vlogvar_assign_value(t24, t28, 0, *((unsigned int *)t39), 1);
    goto LAB25;

}

static void Cont_74_1(char *t0)
{
    char t3[8];
    char t5[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 2);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 2);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t13 = (t0 + 2168U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 0);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 0);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    xsi_vlogtype_concat(t3, 2, 2, 2U, t15, 1, t5, 1);
    t23 = (t0 + 4144);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 3U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 1);
    t36 = (t0 + 4064);
    *((int *)t36) = 1;

LAB1:    return;
}


extern void work_m_01434722418148330066_1044962021_init()
{
	static char *pe[] = {(void *)Always_57_0,(void *)Cont_74_1};
	xsi_register_didat("work_m_01434722418148330066_1044962021", "isim/cmp_top_isim_beh.exe.sim/work/m_01434722418148330066_1044962021.didat");
	xsi_register_executes(pe);
}
