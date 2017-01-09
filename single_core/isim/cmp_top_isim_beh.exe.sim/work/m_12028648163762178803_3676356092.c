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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/sparc_exu_alulogic.v";
static int ng1[] = {32, 0};
static int ng2[] = {64, 0};



static void Cont_78_0(char *t0)
{
    char t3[8];
    char t13[8];
    char t15[8];
    char t34[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 8);
    t6 = (t4 + 12);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t3) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t11 & 4294967295U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 4294967295U);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 2168U);
    t17 = *((char **)t16);
    memset(t15, 0, 8);
    t16 = (t17 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (~(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t16) == 0)
        goto LAB4;

LAB6:    t23 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t23) = 1;

LAB7:    t24 = (t15 + 4);
    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = (~(t26));
    *((unsigned int *)t15) = t27;
    *((unsigned int *)t24) = 0;
    if (*((unsigned int *)t25) != 0)
        goto LAB9;

LAB8:    t32 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t32 & 1U);
    t33 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t33 & 1U);
    xsi_vlog_mul_concat(t13, 32, 1, t14, 1U, t15, 1);
    t35 = *((unsigned int *)t3);
    t36 = *((unsigned int *)t13);
    t37 = (t35 & t36);
    *((unsigned int *)t34) = t37;
    t38 = (t3 + 4);
    t39 = (t13 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB10;

LAB11:
LAB12:    t66 = (t0 + 6056);
    t67 = (t66 + 56U);
    t68 = *((char **)t67);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    memcpy(t70, t34, 8);
    xsi_driver_vfirst_trans(t66, 32, 63);
    t71 = (t0 + 5912);
    *((int *)t71) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB9:    t28 = *((unsigned int *)t15);
    t29 = *((unsigned int *)t25);
    *((unsigned int *)t15) = (t28 | t29);
    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t24) = (t30 | t31);
    goto LAB8;

LAB10:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t3 + 4);
    t49 = (t13 + 4);
    t50 = *((unsigned int *)t3);
    t51 = (~(t50));
    t52 = *((unsigned int *)t48);
    t53 = (~(t52));
    t54 = *((unsigned int *)t13);
    t55 = (~(t54));
    t56 = *((unsigned int *)t49);
    t57 = (~(t56));
    t58 = (t51 & t53);
    t59 = (t55 & t57);
    t60 = (~(t58));
    t61 = (~(t59));
    t62 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t62 & t60);
    t63 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t63 & t61);
    t64 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t64 & t60);
    t65 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t65 & t61);
    goto LAB12;

}

static void Cont_82_1(char *t0)
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

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2648U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 64, t4, 63, 0);
    t2 = ((char*)((ng2)));
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    xsi_vlog_mul_concat(t5, 64, 1, t2, 1U, t7, 1);
    t9 = 0;

LAB7:    t10 = (t9 < 2);
    if (t10 == 1)
        goto LAB8;

LAB9:    t31 = (t0 + 6120);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    xsi_vlog_bit_copy(t35, 0, t8, 0, 64);
    xsi_driver_vfirst_trans(t31, 0, 63);
    t36 = (t0 + 5928);
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

static void Cont_85_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t6 = 0;

LAB7:    t7 = (t6 < 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t51 = (t0 + 6184);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    xsi_vlog_bit_copy(t55, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t51, 0, 63);
    t56 = (t0 + 5944);
    *((int *)t56) = 1;

LAB1:    return;
LAB4:    t26 = (t6 * 8);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t10) = (t27 | t28);
    t29 = (t3 + t26);
    t30 = (t26 + 4);
    t31 = (t3 + t30);
    t32 = (t4 + t26);
    t33 = (t26 + 4);
    t34 = (t4 + t33);
    t35 = *((unsigned int *)t29);
    t36 = (~(t35));
    t37 = *((unsigned int *)t31);
    t38 = (~(t37));
    t39 = *((unsigned int *)t32);
    t40 = (~(t39));
    t41 = *((unsigned int *)t34);
    t42 = (~(t41));
    t43 = (t36 & t38);
    t44 = (t40 & t42);
    t45 = (~(t43));
    t46 = (~(t44));
    t47 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t47 & t45);
    t48 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t48 & t46);
    t49 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t49 & t45);
    t50 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t50 & t46);

LAB6:    t6 = (t6 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t8 = (t6 * 8);
    t2 = (t3 + t8);
    t9 = (t4 + t8);
    t10 = (t5 + t8);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t14 = (t6 * 8);
    t15 = (t14 + 4);
    t16 = (t3 + t15);
    t17 = (t14 + 4);
    t18 = (t4 + t17);
    t19 = (t14 + 4);
    t20 = (t5 + t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB4;
    else
        goto LAB5;

}

static void Cont_86_3(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t6 = 0;

LAB7:    t7 = (t6 < 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t47 = (t0 + 6248);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    xsi_vlog_bit_copy(t51, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t47, 0, 63);
    t52 = (t0 + 5960);
    *((int *)t52) = 1;

LAB1:    return;
LAB4:    t26 = (t6 * 8);
    t27 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t10) = (t27 | t28);
    t29 = (t3 + t26);
    t30 = (t26 + 4);
    t31 = (t3 + t30);
    t32 = (t4 + t26);
    t33 = (t26 + 4);
    t34 = (t4 + t33);
    t35 = *((unsigned int *)t31);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t37 & t36);
    t39 = *((unsigned int *)t34);
    t40 = (~(t39));
    t41 = *((unsigned int *)t32);
    t42 = (t41 & t40);
    t43 = (~(t38));
    t44 = (~(t42));
    t45 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t45 & t43);
    t46 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t46 & t44);

LAB6:    t6 = (t6 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t8 = (t6 * 8);
    t2 = (t3 + t8);
    t9 = (t4 + t8);
    t10 = (t5 + t8);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = (t6 * 8);
    t15 = (t14 + 4);
    t16 = (t3 + t15);
    t17 = (t14 + 4);
    t18 = (t4 + t17);
    t19 = (t14 + 4);
    t20 = (t5 + t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB4;
    else
        goto LAB5;

}

static void Cont_87_4(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 3448U);
    t4 = *((char **)t2);
    t6 = 0;

LAB7:    t7 = (t6 < 2);
    if (t7 == 1)
        goto LAB8;

LAB9:    t28 = (t0 + 6312);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    xsi_vlog_bit_copy(t32, 0, t5, 0, 64);
    xsi_driver_vfirst_trans(t28, 0, 63);
    t33 = (t0 + 5976);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    t26 = *((unsigned int *)t10);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t10) = (t26 | t27);

LAB6:    t6 = (t6 + 1);
    goto LAB7;

LAB5:    goto LAB6;

LAB8:    t8 = (t6 * 8);
    t2 = (t3 + t8);
    t9 = (t4 + t8);
    t10 = (t5 + t8);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t14 = (t6 * 8);
    t15 = (t14 + 4);
    t16 = (t3 + t15);
    t17 = (t14 + 4);
    t18 = (t4 + t17);
    t19 = (t14 + 4);
    t20 = (t5 + t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t18);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB4;
    else
        goto LAB5;

}


extern void work_m_12028648163762178803_3676356092_init()
{
	static char *pe[] = {(void *)Cont_78_0,(void *)Cont_82_1,(void *)Cont_85_2,(void *)Cont_86_3,(void *)Cont_87_4};
	xsi_register_didat("work_m_12028648163762178803_3676356092", "isim/cmp_top_isim_beh.exe.sim/work/m_12028648163762178803_3676356092.didat");
	xsi_register_executes(pe);
}
