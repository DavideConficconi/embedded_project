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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/sparc_ffu_vis.v";
static int ng1[] = {64, 0};



static void Cont_92_0(char *t0)
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

LAB0:    t1 = (t0 + 8920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 64, t4, 63, 0);
    t2 = (t0 + 12224);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t8, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63);
    t9 = (t0 + 11968);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Cont_93_1(char *t0)
{
    char t3[16];
    char t5[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 9168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 64, t4, 63, 0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    xsi_vlog_mul_concat(t5, 64, 1, t2, 1U, t7, 1);
    t9 = 0;

LAB7:    t10 = (t9 < 2);
    if (t10 == 1)
        goto LAB8;

LAB9:    t31 = (t0 + 12288);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_bit_copy(t35, 0, t8, 0, 64);
    xsi_driver_vfirst_trans(t31, 0, 63);
    t36 = (t0 + 11984);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t13) = (t29 | t30);

LAB6:    t9 = (t9 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t11 = (t9 * 8);
    t6 = (t3 + t11);
    t12 = (t5 + t11);
    t13 = (t8 + t11);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    *((unsigned int *)t13) = t16;
    t17 = (t9 * 8);
    t18 = (t17 + 4);
    t19 = (t3 + t18);
    t20 = (t17 + 4);
    t21 = (t5 + t20);
    t22 = (t17 + 4);
    t23 = (t8 + t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB4;
    else
        goto LAB5;

}

static void Cont_137_2(char *t0)
{
    char t3[16];
    char t5[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 9416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 64, t4, 63, 0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 3768U);
    t7 = *((char **)t6);
    xsi_vlog_mul_concat(t5, 64, 1, t2, 1U, t7, 1);
    t9 = 0;

LAB7:    t10 = (t9 < 2);
    if (t10 == 1)
        goto LAB8;

LAB9:    t31 = (t0 + 12352);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_bit_copy(t35, 0, t8, 0, 64);
    xsi_driver_vfirst_trans(t31, 0, 63);
    t36 = (t0 + 12000);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t13) = (t29 | t30);

LAB6:    t9 = (t9 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t11 = (t9 * 8);
    t6 = (t3 + t11);
    t12 = (t5 + t11);
    t13 = (t8 + t11);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    *((unsigned int *)t13) = t16;
    t17 = (t9 * 8);
    t18 = (t17 + 4);
    t19 = (t3 + t18);
    t20 = (t17 + 4);
    t21 = (t5 + t20);
    t22 = (t17 + 4);
    t23 = (t8 + t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB4;
    else
        goto LAB5;

}

static void Cont_138_3(char *t0)
{
    char t3[16];
    char t5[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 9664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 64, t4, 63, 0);
    t2 = ((char*)((ng1)));
    t6 = (t0 + 3928U);
    t7 = *((char **)t6);
    xsi_vlog_mul_concat(t5, 64, 1, t2, 1U, t7, 1);
    t9 = 0;

LAB7:    t10 = (t9 < 2);
    if (t10 == 1)
        goto LAB8;

LAB9:    t31 = (t0 + 12416);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_bit_copy(t35, 0, t8, 0, 64);
    xsi_driver_vfirst_trans(t31, 0, 63);
    t36 = (t0 + 12016);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t13) = (t29 | t30);

LAB6:    t9 = (t9 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t11 = (t9 * 8);
    t6 = (t3 + t11);
    t12 = (t5 + t11);
    t13 = (t8 + t11);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    *((unsigned int *)t13) = t16;
    t17 = (t9 * 8);
    t18 = (t17 + 4);
    t19 = (t3 + t18);
    t20 = (t17 + 4);
    t21 = (t5 + t20);
    t22 = (t17 + 4);
    t23 = (t8 + t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB4;
    else
        goto LAB5;

}

static void Cont_141_4(char *t0)
{
    char t3[16];
    char t4[16];
    char t6[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;

LAB0:    t1 = (t0 + 9912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 6808U);
    t5 = *((char **)t2);
    xsi_vlog_get_part_select_value(t4, 64, t5, 63, 0);
    t2 = (t0 + 6968U);
    t7 = *((char **)t2);
    xsi_vlog_get_part_select_value(t6, 64, t7, 63, 0);
    t9 = 0;

LAB7:    t10 = (t9 < 2);
    if (t10 == 1)
        goto LAB8;

LAB9:    xsi_vlogtype_unsigned_bit_neg(t3, 64, t8, 64);
    t50 = (t0 + 12480);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    xsi_vlog_bit_copy(t54, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t50, 0, 63);
    t55 = (t0 + 12032);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    t29 = (t9 * 8);
    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t13) = (t30 | t31);
    t32 = (t4 + t29);
    t33 = (t29 + 4);
    t34 = (t4 + t33);
    t35 = (t6 + t29);
    t36 = (t29 + 4);
    t37 = (t6 + t36);
    t38 = *((unsigned int *)t34);
    t39 = (~(t38));
    t40 = *((unsigned int *)t32);
    t41 = (t40 & t39);
    t42 = *((unsigned int *)t37);
    t43 = (~(t42));
    t44 = *((unsigned int *)t35);
    t45 = (t44 & t43);
    t46 = (~(t41));
    t47 = (~(t45));
    t48 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t48 & t46);
    t49 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t49 & t47);

LAB6:    t9 = (t9 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t11 = (t9 * 8);
    t2 = (t4 + t11);
    t12 = (t6 + t11);
    t13 = (t8 + t11);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t12);
    t16 = (t14 | t15);
    *((unsigned int *)t13) = t16;
    t17 = (t9 * 8);
    t18 = (t17 + 4);
    t19 = (t4 + t18);
    t20 = (t17 + 4);
    t21 = (t6 + t20);
    t22 = (t17 + 4);
    t23 = (t8 + t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB4;
    else
        goto LAB5;

}

static void Cont_142_5(char *t0)
{
    char t3[16];
    char t4[16];
    char t6[16];
    char t8[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    t1 = (t0 + 10160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 6808U);
    t5 = *((char **)t2);
    xsi_vlog_get_part_select_value(t4, 64, t5, 63, 0);
    t2 = (t0 + 6968U);
    t7 = *((char **)t2);
    xsi_vlog_get_part_select_value(t6, 64, t7, 63, 0);
    t9 = 0;

LAB7:    t10 = (t9 < 2);
    if (t10 == 1)
        goto LAB8;

LAB9:    xsi_vlogtype_unsigned_bit_neg(t3, 64, t8, 64);
    t54 = (t0 + 12544);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    xsi_vlog_bit_copy(t58, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t54, 0, 63);
    t59 = (t0 + 12048);
    *((int *)t59) = 1;

LAB1:    return;
LAB4:    t29 = (t9 * 8);
    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t13) = (t30 | t31);
    t32 = (t4 + t29);
    t33 = (t29 + 4);
    t34 = (t4 + t33);
    t35 = (t6 + t29);
    t36 = (t29 + 4);
    t37 = (t6 + t36);
    t38 = *((unsigned int *)t32);
    t39 = (~(t38));
    t40 = *((unsigned int *)t34);
    t41 = (~(t40));
    t42 = *((unsigned int *)t35);
    t43 = (~(t42));
    t44 = *((unsigned int *)t37);
    t45 = (~(t44));
    t46 = (t39 & t41);
    t47 = (t43 & t45);
    t48 = (~(t46));
    t49 = (~(t47));
    t50 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t50 & t48);
    t51 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t51 & t49);
    t52 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t52 & t48);
    t53 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t53 & t49);

LAB6:    t9 = (t9 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t11 = (t9 * 8);
    t2 = (t4 + t11);
    t12 = (t6 + t11);
    t13 = (t8 + t11);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t12);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t17 = (t9 * 8);
    t18 = (t17 + 4);
    t19 = (t4 + t18);
    t20 = (t17 + 4);
    t21 = (t6 + t20);
    t22 = (t17 + 4);
    t23 = (t8 + t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t21);
    t26 = (t24 | t25);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t23);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB4;
    else
        goto LAB5;

}

static void Cont_143_6(char *t0)
{
    char t3[16];
    char t5[16];
    char t7[16];
    char *t1;
    char *t2;
    char *t4;
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
    char *t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 10408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 6808U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 64, t4, 63, 0);
    t2 = (t0 + 6968U);
    t6 = *((char **)t2);
    xsi_vlog_get_part_select_value(t5, 64, t6, 63, 0);
    t8 = 0;

LAB7:    t9 = (t8 < 2);
    if (t9 == 1)
        goto LAB8;

LAB9:    t30 = (t0 + 12608);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_bit_copy(t34, 0, t7, 0, 64);
    xsi_driver_vfirst_trans(t30, 0, 63);
    t35 = (t0 + 12064);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    t28 = *((unsigned int *)t12);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t12) = (t28 | t29);

LAB6:    t8 = (t8 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t10 = (t8 * 8);
    t2 = (t3 + t10);
    t11 = (t5 + t10);
    t12 = (t7 + t10);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t11);
    t15 = (t13 ^ t14);
    *((unsigned int *)t12) = t15;
    t16 = (t8 * 8);
    t17 = (t16 + 4);
    t18 = (t3 + t17);
    t19 = (t16 + 4);
    t20 = (t5 + t19);
    t21 = (t16 + 4);
    t22 = (t7 + t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t20);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB4;
    else
        goto LAB5;

}

static void implSig1_execute(char *t0)
{
    char t3[24];
    char t4[8];
    char t14[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 10656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5208U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 8);
    t7 = (t5 + 12);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 16);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t15 = (t0 + 5048U);
    t16 = *((char **)t15);
    xsi_vlog_get_part_select_value(t14, 64, t16, 63, 0);
    xsi_vlogtype_concat(t3, 72, 72, 2U, t14, 64, t4, 8);
    t15 = (t0 + 12672);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 72);
    xsi_driver_vfirst_trans(t15, 0, 71);
    t21 = (t0 + 12080);
    *((int *)t21) = 1;

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char t3[24];
    char t4[8];
    char t14[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 10904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5208U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 8);
    t7 = (t5 + 12);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 16777215U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 16777215U);
    t15 = (t0 + 5048U);
    t16 = *((char **)t15);
    xsi_vlog_get_part_select_value(t14, 48, t16, 47, 0);
    xsi_vlogtype_concat(t3, 72, 72, 2U, t14, 48, t4, 24);
    t15 = (t0 + 12736);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_bit_copy(t20, 0, t3, 0, 72);
    xsi_driver_vfirst_trans(t15, 0, 71);
    t21 = (t0 + 12096);
    *((int *)t21) = 1;

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char t3[24];
    char t4[16];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 11152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5208U);
    t5 = *((char **)t2);
    xsi_vlog_get_part_select_value(t4, 40, t5, 55, 16);
    t2 = (t0 + 5048U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 4294967295U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 4294967295U);
    xsi_vlogtype_concat(t3, 72, 72, 2U, t6, 32, t4, 40);
    t15 = (t0 + 12800);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t3, 0, 72);
    xsi_driver_vfirst_trans(t15, 0, 71);
    t20 = (t0 + 12112);
    *((int *)t20) = 1;

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char t3[24];
    char t4[16];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 11400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 5208U);
    t5 = *((char **)t2);
    xsi_vlog_get_part_select_value(t4, 56, t5, 55, 0);
    t2 = (t0 + 5048U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    xsi_vlogtype_concat(t3, 72, 72, 2U, t6, 16, t4, 56);
    t15 = (t0 + 12864);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    xsi_vlog_bit_copy(t19, 0, t3, 0, 72);
    xsi_driver_vfirst_trans(t15, 0, 71);
    t20 = (t0 + 12128);
    *((int *)t20) = 1;

LAB1:    return;
}

static void implSig5_execute(char *t0)
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

LAB0:    t1 = (t0 + 11648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t4 = (t0 + 4088U);
    t5 = *((char **)t4);
    xsi_vlog_mul_concat(t3, 64, 1, t2, 1U, t5, 1);
    t4 = (t0 + 12928);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t3, 0, 64);
    xsi_driver_vfirst_trans(t4, 0, 63);
    t10 = (t0 + 12144);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_12464081140042232711_1468969167_init()
{
	static char *pe[] = {(void *)Cont_92_0,(void *)Cont_93_1,(void *)Cont_137_2,(void *)Cont_138_3,(void *)Cont_141_4,(void *)Cont_142_5,(void *)Cont_143_6,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute};
	xsi_register_didat("work_m_12464081140042232711_1468969167", "isim/cmp_top_isim_beh.exe.sim/work/m_12464081140042232711_1468969167.didat");
	xsi_register_executes(pe);
}
