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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/cpx_arbitrator.v";
static int ng1[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {144, 0};
static unsigned int ng4[] = {7U, 0U};
static int ng5[] = {143, 0};
static int ng6[] = {140, 0};
static int ng7[] = {135, 0};
static int ng8[] = {134, 0};
static int ng9[] = {63, 0};
static int ng10[] = {0, 0};
static int ng11[] = {4, 0};
static int ng12[] = {1, 0};



static void Always_73_0(char *t0)
{
    char t6[8];
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    int t11;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5008);
    *((int *)t2) = 1;
    t3 = (t0 + 4472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 145);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t8, 32, 1);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng5)));
    t9 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t6, t12, t13, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t14 = (t6 + 4);
    t10 = *((unsigned int *)t14);
    t11 = (!(t10));
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t11 && t17);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng7)));
    t9 = ((char*)((ng8)));
    xsi_vlog_convert_partindices(t6, t12, t13, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t14 = (t6 + 4);
    t10 = *((unsigned int *)t14);
    t11 = (!(t10));
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t11 && t17);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    t4 = (t0 + 3528);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng9)));
    t9 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t6, t12, t13, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t14 = (t6 + 4);
    t10 = *((unsigned int *)t14);
    t11 = (!(t10));
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t11 && t17);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB12;

LAB13:    goto LAB2;

LAB6:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB7;

LAB8:    t23 = *((unsigned int *)t13);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t12);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t12), t28);
    goto LAB9;

LAB10:    t23 = *((unsigned int *)t13);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t12);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, t24, *((unsigned int *)t12), t28);
    goto LAB11;

LAB12:    t23 = *((unsigned int *)t13);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t6);
    t26 = *((unsigned int *)t12);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t2, t3, t24, *((unsigned int *)t12), t28);
    goto LAB13;

}

static void Always_83_1(char *t0)
{
    char t7[8];
    char t36[8];
    char t64[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    int t65;
    int t66;
    int t67;
    int t68;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5024);
    *((int *)t2) = 1;
    t3 = (t0 + 4720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t0 + 1848U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t34 = (t0 + 2328U);
    t35 = *((char **)t34);
    t37 = *((unsigned int *)t7);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t34 = (t7 + 4);
    t40 = (t35 + 4);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t40);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB9;

LAB10:
LAB11:    t63 = (t0 + 3048);
    xsi_vlogvar_assign_value(t63, t36, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 145);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB18;

LAB19:
LAB20:
LAB17:
LAB14:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    t4 = (t0 + 3368);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng11)));
    t12 = ((char*)((ng12)));
    xsi_vlog_convert_partindices(t7, t36, t64, ((int*)(t6)), 2, t11, 32, 1, t12, 32, 1);
    t20 = (t7 + 4);
    t8 = *((unsigned int *)t20);
    t25 = (!(t8));
    t21 = (t36 + 4);
    t9 = *((unsigned int *)t21);
    t29 = (!(t9));
    t54 = (t25 && t29);
    t34 = (t64 + 4);
    t10 = *((unsigned int *)t34);
    t58 = (!(t10));
    t65 = (t54 && t58);
    if (t65 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB23;

LAB24:
LAB25:    t20 = (t0 + 3368);
    t21 = (t0 + 3368);
    t34 = (t21 + 72U);
    t35 = *((char **)t34);
    t40 = ((char*)((ng10)));
    xsi_vlog_generic_convert_bit_index(t36, t35, 2, t40, 32, 1);
    t41 = (t36 + 4);
    t37 = *((unsigned int *)t41);
    t54 = (!(t37));
    if (t54 == 1)
        goto LAB26;

LAB27:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB8;

LAB9:    t47 = *((unsigned int *)t36);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t36) = (t47 | t48);
    t49 = (t7 + 4);
    t50 = (t35 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t7);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t35);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB11;

LAB12:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 145);
    goto LAB14;

LAB15:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = (t0 + 3208);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 145);
    goto LAB17;

LAB18:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t6, 0, 0, 145);
    goto LAB20;

LAB21:    t13 = *((unsigned int *)t64);
    t66 = (t13 + 0);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t36);
    t67 = (t14 - t15);
    t68 = (t67 + 1);
    xsi_vlogvar_assign_value(t2, t3, t66, *((unsigned int *)t36), t68);
    goto LAB22;

LAB23:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t30);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t31);
    goto LAB25;

LAB26:    xsi_vlogvar_assign_value(t20, t7, 0, *((unsigned int *)t36), 1);
    goto LAB27;

}


extern void work_m_16779018597033966027_3152985113_init()
{
	static char *pe[] = {(void *)Always_73_0,(void *)Always_83_1};
	xsi_register_didat("work_m_16779018597033966027_3152985113", "isim/cmp_top_isim_beh.exe.sim/work/m_16779018597033966027_3152985113.didat");
	xsi_register_executes(pe);
}
