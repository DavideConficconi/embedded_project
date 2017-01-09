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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/noc2decoder.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};
static int ng5[] = {127, 0};
static int ng6[] = {64, 0};
static int ng7[] = {191, 0};
static int ng8[] = {255, 0};
static int ng9[] = {319, 0};
static int ng10[] = {15, 0};
static int ng11[] = {8, 0};
static int ng12[] = {7, 0};
static int ng13[] = {29, 0};
static int ng14[] = {16, 0};
static unsigned int ng15[] = {0U, 0U};
static unsigned int ng16[] = {29U, 0U};



static void Always_83_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t20;

LAB0:    t1 = (t0 + 7800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 8864);
    *((int *)t2) = 1;
    t3 = (t0 + 7832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);

LAB5:    xsi_set_current_line(85, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(86, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Always_92_1(char *t0)
{
    char t6[8];
    char t18[8];
    char t26[8];
    char t59[16];
    char t60[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
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
    unsigned int t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;

LAB0:    t1 = (t0 + 8048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 8880);
    *((int *)t2) = 1;
    t3 = (t0 + 8080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);

LAB5:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t2) != 0)
        goto LAB8;

LAB9:    t5 = (t6 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t5);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    t58 = (t0 + 2888);
    xsi_vlogvar_assign_value(t58, t26, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 14);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 14);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 255U);
    t5 = (t0 + 4008);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 6);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 6);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 255U);
    t5 = (t0 + 5928);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t15 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t15);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 3U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 3U);
    t16 = (t0 + 3048);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t15 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t15);
    t10 = (t9 >> 0);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t12 & 7U);
    t16 = (t0 + 5288);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 3);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5928);
    t15 = (t5 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng2)));
    t19 = ((char*)((ng3)));
    xsi_vlog_get_indexed_partselect(t6, 1, t4, ((int*)(t16)), 2, t17, 32, 1, t19, 32, 1, 0);
    t25 = (t0 + 3208);
    xsi_vlogvar_assign_value(t25, t6, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t15 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 7);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t15);
    t11 = (t10 >> 7);
    t12 = (t11 & 1);
    *((unsigned int *)t5) = t12;
    t16 = (t0 + 3368);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 3);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 3);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t5 = (t0 + 3528);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 16);
    t5 = (t3 + 20);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 11);
    t9 = (t8 & 1);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 11);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    t15 = (t0 + 3688);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 1);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 4);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 4);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 3U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 3U);
    t5 = (t0 + 4168);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 2);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 16);
    t5 = (t3 + 20);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 12);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 12);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    t15 = (t0 + 5128);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 4);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    xsi_vlog_get_part_select_value(t59, 40, t3, 119, 80);
    t2 = (t0 + 4968);
    xsi_vlogvar_assign_value(t2, t59, 0, 0, 40);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t15 = ((char*)((ng5)));
    t16 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t59, 64, t3, ((int*)(t5)), 2, t15, 32, 1, t16, 32, 1, 0);
    t17 = (t0 + 4328);
    xsi_vlogvar_assign_value(t17, t59, 0, 0, 64);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t15 = ((char*)((ng7)));
    t16 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t59, 64, t3, ((int*)(t5)), 2, t15, 32, 1, t16, 32, 1, 0);
    t17 = (t0 + 4488);
    xsi_vlogvar_assign_value(t17, t59, 0, 0, 64);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t15 = ((char*)((ng8)));
    t16 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t59, 64, t3, ((int*)(t5)), 2, t15, 32, 1, t16, 32, 1, 0);
    t17 = (t0 + 4648);
    xsi_vlogvar_assign_value(t17, t59, 0, 0, 64);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1328U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t15 = ((char*)((ng9)));
    t16 = ((char*)((ng6)));
    xsi_vlog_get_indexed_partselect(t59, 64, t3, ((int*)(t5)), 2, t15, 32, 1, t16, 32, 1, 0);
    t17 = (t0 + 4808);
    xsi_vlogvar_assign_value(t17, t59, 0, 0, 64);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 5448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 30);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 40);
    t5 = (t3 + 44);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 2);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 2);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 255U);
    t15 = (t0 + 5448);
    t16 = (t0 + 5448);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t25 = ((char*)((ng10)));
    t30 = ((char*)((ng11)));
    xsi_vlog_convert_partindices(t18, t26, t60, ((int*)(t19)), 2, t25, 32, 1, t30, 32, 1);
    t31 = (t18 + 4);
    t13 = *((unsigned int *)t31);
    t50 = (!(t13));
    t32 = (t26 + 4);
    t14 = *((unsigned int *)t32);
    t51 = (!(t14));
    t61 = (t50 && t51);
    t40 = (t60 + 4);
    t20 = *((unsigned int *)t40);
    t62 = (!(t20));
    t63 = (t61 && t62);
    if (t63 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 40);
    t5 = (t3 + 44);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 10);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 10);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 255U);
    t15 = (t0 + 5448);
    t16 = (t0 + 5448);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t25 = ((char*)((ng12)));
    t30 = ((char*)((ng4)));
    xsi_vlog_convert_partindices(t18, t26, t60, ((int*)(t19)), 2, t25, 32, 1, t30, 32, 1);
    t31 = (t18 + 4);
    t13 = *((unsigned int *)t31);
    t50 = (!(t13));
    t32 = (t26 + 4);
    t14 = *((unsigned int *)t32);
    t51 = (!(t14));
    t61 = (t50 && t51);
    t40 = (t60 + 4);
    t20 = *((unsigned int *)t40);
    t62 = (!(t20));
    t63 = (t61 && t62);
    if (t63 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 40);
    t5 = (t3 + 44);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 18);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 18);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 16383U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 16383U);
    t15 = (t0 + 5448);
    t16 = (t0 + 5448);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t25 = ((char*)((ng13)));
    t30 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t18, t26, t60, ((int*)(t19)), 2, t25, 32, 1, t30, 32, 1);
    t31 = (t18 + 4);
    t13 = *((unsigned int *)t31);
    t50 = (!(t13));
    t32 = (t26 + 4);
    t14 = *((unsigned int *)t32);
    t51 = (!(t14));
    t61 = (t50 && t51);
    t40 = (t60 + 4);
    t20 = *((unsigned int *)t40);
    t62 = (!(t20));
    t63 = (t61 && t62);
    if (t63 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    memset(t18, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t2) != 0)
        goto LAB28;

LAB29:    t5 = (t18 + 4);
    t12 = *((unsigned int *)t18);
    t13 = *((unsigned int *)t5);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB30;

LAB31:    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t5);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t5) > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t18) > 0)
        goto LAB36;

LAB37:    memcpy(t6, t26, 8);

LAB38:    t41 = (t0 + 5768);
    xsi_vlogvar_assign_value(t41, t6, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    t15 = (t0 + 5608);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (~(t20));
    t22 = *((unsigned int *)t17);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t19) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t18);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t18 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t18) = 1;
    goto LAB16;

LAB15:    t25 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t18 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t18);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB19;

LAB20:    t21 = *((unsigned int *)t60);
    t64 = (t21 + 0);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t26);
    t65 = (t22 - t23);
    t66 = (t65 + 1);
    xsi_vlogvar_assign_value(t15, t6, t64, *((unsigned int *)t26), t66);
    goto LAB21;

LAB22:    t21 = *((unsigned int *)t60);
    t64 = (t21 + 0);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t26);
    t65 = (t22 - t23);
    t66 = (t65 + 1);
    xsi_vlogvar_assign_value(t15, t6, t64, *((unsigned int *)t26), t66);
    goto LAB23;

LAB24:    t21 = *((unsigned int *)t60);
    t64 = (t21 + 0);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t26);
    t65 = (t22 - t23);
    t66 = (t65 + 1);
    xsi_vlogvar_assign_value(t15, t6, t64, *((unsigned int *)t26), t66);
    goto LAB25;

LAB26:    *((unsigned int *)t18) = 1;
    goto LAB29;

LAB28:    t4 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB29;

LAB30:    t15 = ((char*)((ng1)));
    goto LAB31;

LAB32:    t16 = (t0 + 1848U);
    t17 = *((char **)t16);
    memset(t60, 0, 8);
    t16 = (t17 + 4);
    t24 = *((unsigned int *)t16);
    t27 = (~(t24));
    t28 = *((unsigned int *)t17);
    t29 = (t28 & t27);
    t33 = (t29 & 1U);
    if (t33 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t16) != 0)
        goto LAB41;

LAB42:    t25 = (t60 + 4);
    t34 = *((unsigned int *)t60);
    t35 = *((unsigned int *)t25);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB43;

LAB44:    t37 = *((unsigned int *)t60);
    t38 = (~(t37));
    t39 = *((unsigned int *)t25);
    t42 = (t38 || t39);
    if (t42 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t25) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t60) > 0)
        goto LAB49;

LAB50:    memcpy(t26, t40, 8);

LAB51:    goto LAB33;

LAB34:    xsi_vlog_unsigned_bit_combine(t6, 1, t15, 1, t26, 1);
    goto LAB38;

LAB36:    memcpy(t6, t15, 8);
    goto LAB38;

LAB39:    *((unsigned int *)t60) = 1;
    goto LAB42;

LAB41:    t19 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB42;

LAB43:    t30 = ((char*)((ng15)));
    goto LAB44;

LAB45:    t31 = (t0 + 5608);
    t32 = (t31 + 56U);
    t40 = *((char **)t32);
    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t26, 1, t30, 1, t40, 1);
    goto LAB51;

LAB49:    memcpy(t26, t30, 8);
    goto LAB51;

}

static void Always_138_2(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
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
    char *t20;

LAB0:    t1 = (t0 + 8296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 8896);
    *((int *)t2) = 1;
    t3 = (t0 + 8328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(139, ng0);

LAB5:    xsi_set_current_line(140, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(147, ng0);

LAB14:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 6088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6568);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 6408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 6888);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 4);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(141, ng0);

LAB13:    xsi_set_current_line(142, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 6568);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB12;

}

static void Always_155_3(char *t0)
{
    char t13[8];
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
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 8544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 8912);
    *((int *)t2) = 1;
    t3 = (t0 + 8576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);

LAB5:    xsi_set_current_line(158, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 6088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 6408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 6728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(173, ng0);
    t2 = (t0 + 6888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB2;

LAB6:    xsi_set_current_line(162, ng0);

LAB9:    xsi_set_current_line(163, ng0);
    t4 = (t0 + 4008);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng16)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB13;

LAB10:    if (t25 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB8;

LAB12:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(164, ng0);

LAB17:    xsi_set_current_line(165, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 6088);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 6248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3208);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng15)));
    xsi_vlogtype_concat(t13, 4, 4, 3U, t14, 1, t12, 1, t4, 2);
    t15 = (t0 + 6408);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 4);
    goto LAB16;

}


extern void work_m_10969430249507705028_3491855423_init()
{
	static char *pe[] = {(void *)Always_83_0,(void *)Always_92_1,(void *)Always_138_2,(void *)Always_155_3};
	xsi_register_didat("work_m_10969430249507705028_3491855423", "isim/cmp_top_isim_beh.exe.sim/work/m_10969430249507705028_3491855423.didat");
	xsi_register_executes(pe);
}
