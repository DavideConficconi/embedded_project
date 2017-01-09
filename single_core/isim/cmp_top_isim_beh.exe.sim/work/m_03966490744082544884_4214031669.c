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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/lsu_dc_parity_gen.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};



static void Always_41_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t17[8];
    char t27[8];
    char t28[8];
    char t35[8];
    char t41[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    unsigned int t63;

LAB0:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3680);
    *((int *)t2) = 1;
    t3 = (t0 + 3144);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2040);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB5:    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_minus(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_leq(t8, 32, t4, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB6;

LAB7:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);

LAB8:    xsi_set_current_line(43, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t0 + 1880);
    t18 = (t0 + 1880);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2040);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t17, t20, 2, t23, 32, 1);
    t24 = (t17 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    if (t26 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 2040);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_signed_multiply(t7, 32, t3, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);

LAB11:    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = (t0 + 2040);
    t9 = (t5 + 56U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t15, 32, t16, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t6, 32, t7, 32);
    t18 = ((char*)((ng2)));
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t8, 32, t18, 32);
    memset(t27, 0, 8);
    xsi_vlog_signed_leq(t27, 32, t4, 32, t17, 32);
    t19 = (t27 + 4);
    t10 = *((unsigned int *)t19);
    t11 = (~(t10));
    t12 = *((unsigned int *)t27);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2040);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB5;

LAB9:    xsi_vlogvar_assign_value(t16, t15, 0, *((unsigned int *)t17), 1);
    goto LAB10;

LAB12:    xsi_set_current_line(44, ng0);

LAB14:    xsi_set_current_line(45, ng0);
    t20 = (t0 + 1880);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t0 + 1880);
    t24 = (t23 + 72U);
    t29 = *((char **)t24);
    t30 = (t0 + 2040);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_index_select_value(t28, 1, t22, t29, 2, t32, 32, 1);
    t33 = (t0 + 1320U);
    t34 = *((char **)t33);
    t33 = (t0 + 1280U);
    t36 = (t33 + 72U);
    t37 = *((char **)t36);
    t38 = (t0 + 2200);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    xsi_vlog_generic_get_index_select_value(t35, 1, t34, t37, 2, t40, 32, 1);
    t25 = *((unsigned int *)t28);
    t42 = *((unsigned int *)t35);
    t43 = (t25 ^ t42);
    *((unsigned int *)t41) = t43;
    t44 = (t28 + 4);
    t45 = (t35 + 4);
    t46 = (t41 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB15;

LAB16:
LAB17:    t54 = (t0 + 1880);
    t56 = (t0 + 1880);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 2040);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    xsi_vlog_generic_convert_bit_index(t55, t58, 2, t61, 32, 1);
    t62 = (t55 + 4);
    t63 = *((unsigned int *)t62);
    t26 = (!(t63));
    if (t26 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2200);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2200);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB11;

LAB15:    t52 = *((unsigned int *)t41);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t41) = (t52 | t53);
    goto LAB17;

LAB18:    xsi_vlogvar_assign_value(t54, t41, 0, *((unsigned int *)t55), 1);
    goto LAB19;

}

static void Cont_49_1(char *t0)
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

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1880);
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
    *((unsigned int *)t3) = (t12 & 65535U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = (t0 + 3776);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 65535U;
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
    xsi_driver_vfirst_trans(t14, 0, 15);
    t27 = (t0 + 3696);
    *((int *)t27) = 1;

LAB1:    return;
}


extern void work_m_03966490744082544884_4214031669_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Cont_49_1};
	xsi_register_didat("work_m_03966490744082544884_4214031669", "isim/cmp_top_isim_beh.exe.sim/work/m_03966490744082544884_4214031669.didat");
	xsi_register_executes(pe);
}
