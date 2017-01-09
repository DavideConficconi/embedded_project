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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/l15_home_encoder.tmp.v";
static unsigned int ng1[] = {31U, 0U};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {7U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {63U, 0U};



static void Always_63_0(char *t0)
{
    char t6[8];
    char t22[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 4224);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 4);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 4);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 2);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 2);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t4);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t5 = (t6 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(96, ng0);

LAB80:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB78:
LAB64:
LAB50:
LAB36:
LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(67, ng0);
    t20 = ((char*)((ng1)));
    t21 = (t0 + 1928);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 6);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t12 & 31U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 31U);
    memset(t22, 0, 8);
    t5 = (t23 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t19 = (t18 & 31U);
    if (t19 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t5) != 0)
        goto LAB12;

LAB13:    memset(t6, 0, 8);
    t14 = (t22 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t14) == 0)
        goto LAB14;

LAB16:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;

LAB17:    t21 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    *((unsigned int *)t6) = t31;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB19;

LAB18:    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & 1U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 1U);
    t38 = (t0 + 2248);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 1);
    goto LAB8;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t7 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB19:    t32 = *((unsigned int *)t6);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t32 | t33);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t21) = (t34 | t35);
    goto LAB18;

LAB20:    xsi_set_current_line(71, ng0);

LAB23:    xsi_set_current_line(72, ng0);
    t7 = ((char*)((ng2)));
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 6);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t12 & 15U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 15U);
    memset(t22, 0, 8);
    t5 = (t23 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t19 = (t18 & 15U);
    if (t19 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t5) != 0)
        goto LAB26;

LAB27:    memset(t6, 0, 8);
    t14 = (t22 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t14) == 0)
        goto LAB28;

LAB30:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;

LAB31:    t21 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    *((unsigned int *)t6) = t31;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB33;

LAB32:    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & 1U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 1U);
    t38 = (t0 + 2248);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 1);
    goto LAB22;

LAB24:    *((unsigned int *)t22) = 1;
    goto LAB27;

LAB26:    t7 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB27;

LAB28:    *((unsigned int *)t6) = 1;
    goto LAB31;

LAB33:    t32 = *((unsigned int *)t6);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t32 | t33);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t21) = (t34 | t35);
    goto LAB32;

LAB34:    xsi_set_current_line(76, ng0);

LAB37:    xsi_set_current_line(77, ng0);
    t7 = ((char*)((ng3)));
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 6);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    memset(t22, 0, 8);
    t5 = (t23 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t19 = (t18 & 7U);
    if (t19 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t5) != 0)
        goto LAB40;

LAB41:    memset(t6, 0, 8);
    t14 = (t22 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB45;

LAB43:    if (*((unsigned int *)t14) == 0)
        goto LAB42;

LAB44:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;

LAB45:    t21 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    *((unsigned int *)t6) = t31;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB47;

LAB46:    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & 1U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 1U);
    t38 = (t0 + 2248);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 1);
    goto LAB36;

LAB38:    *((unsigned int *)t22) = 1;
    goto LAB41;

LAB40:    t7 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB47:    t32 = *((unsigned int *)t6);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t32 | t33);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t21) = (t34 | t35);
    goto LAB46;

LAB48:    xsi_set_current_line(81, ng0);

LAB51:    xsi_set_current_line(82, ng0);
    t7 = ((char*)((ng4)));
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 6);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    memset(t22, 0, 8);
    t5 = (t23 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t19 = (t18 & 3U);
    if (t19 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t5) != 0)
        goto LAB54;

LAB55:    memset(t6, 0, 8);
    t14 = (t22 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t14) == 0)
        goto LAB56;

LAB58:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;

LAB59:    t21 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    *((unsigned int *)t6) = t31;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB61;

LAB60:    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & 1U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 1U);
    t38 = (t0 + 2248);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 1);
    goto LAB50;

LAB52:    *((unsigned int *)t22) = 1;
    goto LAB55;

LAB54:    t7 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t6) = 1;
    goto LAB59;

LAB61:    t32 = *((unsigned int *)t6);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t32 | t33);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t21) = (t34 | t35);
    goto LAB60;

LAB62:    xsi_set_current_line(86, ng0);

LAB65:    xsi_set_current_line(87, ng0);
    t7 = ((char*)((ng5)));
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 6);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t23, 0, 8);
    t2 = (t23 + 4);
    t4 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 0);
    *((unsigned int *)t23) = t9;
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t12 & 1U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 1U);
    memset(t22, 0, 8);
    t5 = (t23 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t23);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t5) != 0)
        goto LAB68;

LAB69:    memset(t6, 0, 8);
    t14 = (t22 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB73;

LAB71:    if (*((unsigned int *)t14) == 0)
        goto LAB70;

LAB72:    t20 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t20) = 1;

LAB73:    t21 = (t6 + 4);
    t29 = (t22 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    *((unsigned int *)t6) = t31;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB75;

LAB74:    t36 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t36 & 1U);
    t37 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t37 & 1U);
    t38 = (t0 + 2248);
    xsi_vlogvar_assign_value(t38, t6, 0, 0, 1);
    goto LAB64;

LAB66:    *((unsigned int *)t22) = 1;
    goto LAB69;

LAB68:    t7 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t6) = 1;
    goto LAB73;

LAB75:    t32 = *((unsigned int *)t6);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t6) = (t32 | t33);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t21) = (t34 | t35);
    goto LAB74;

LAB76:    xsi_set_current_line(91, ng0);

LAB79:    xsi_set_current_line(92, ng0);
    t7 = ((char*)((ng6)));
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 6);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB78;

}

static void Always_103_1(char *t0)
{
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t19;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4240);
    *((int *)t2) = 1;
    t3 = (t0 + 3440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(104, ng0);

LAB5:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(110, ng0);

LAB10:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1928);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t18, 0, 8);
    t6 = (t18 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t18) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t12 & 31U);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t19 & 31U);
    xsi_vlogtype_concat(t17, 6, 6, 2U, t18, 5, t2, 1);
    t13 = (t0 + 1768);
    xsi_vlogvar_assign_value(t13, t17, 0, 0, 6);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(106, ng0);

LAB9:    xsi_set_current_line(107, ng0);
    t13 = (t0 + 1928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t0 + 1768);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 6);
    goto LAB8;

}

static void Always_115_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4256);
    *((int *)t2) = 1;
    t3 = (t0 + 3688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(116, ng0);

LAB5:    xsi_set_current_line(117, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1768);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 & t10);
    *((unsigned int *)t8) = t11;
    t12 = (t5 + 4);
    t13 = (t7 + 4);
    t14 = (t8 + 4);
    t15 = *((unsigned int *)t12);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB6;

LAB7:
LAB8:    t40 = (t0 + 2088);
    xsi_vlogvar_assign_value(t40, t8, 0, 0, 6);
    goto LAB2;

LAB6:    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t8) = (t20 | t21);
    t22 = (t5 + 4);
    t23 = (t7 + 4);
    t24 = *((unsigned int *)t5);
    t25 = (~(t24));
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (~(t30));
    t32 = (t25 & t27);
    t33 = (t29 & t31);
    t34 = (~(t32));
    t35 = (~(t33));
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t35);
    t38 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t38 & t34);
    t39 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t39 & t35);
    goto LAB8;

}

static void Always_120_3(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;

LAB0:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4272);
    *((int *)t2) = 1;
    t3 = (t0 + 3936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);

LAB5:    xsi_set_current_line(122, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1208U);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t8))
        goto LAB8;

LAB9:    t12 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t9);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(127, ng0);

LAB15:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 & t14);
    *((unsigned int *)t9) = t15;
    t8 = (t4 + 4);
    t10 = (t7 + 4);
    t11 = (t9 + 4);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t10);
    t22 = (t16 | t17);
    *((unsigned int *)t11) = t22;
    t23 = *((unsigned int *)t11);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB16;

LAB17:
LAB18:    t19 = (t0 + 1608);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 6);

LAB13:    goto LAB2;

LAB7:    t11 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(123, ng0);

LAB14:    xsi_set_current_line(124, ng0);
    t18 = (t0 + 2088);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t0 + 1608);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 6);
    goto LAB13;

LAB16:    t25 = *((unsigned int *)t9);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t9) = (t25 | t26);
    t12 = (t4 + 4);
    t18 = (t7 + 4);
    t27 = *((unsigned int *)t4);
    t28 = (~(t27));
    t29 = *((unsigned int *)t12);
    t30 = (~(t29));
    t31 = *((unsigned int *)t7);
    t32 = (~(t31));
    t33 = *((unsigned int *)t18);
    t34 = (~(t33));
    t35 = (t28 & t30);
    t36 = (t32 & t34);
    t37 = (~(t35));
    t38 = (~(t36));
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t39 & t37);
    t40 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t40 & t38);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t37);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t38);
    goto LAB18;

}


extern void work_m_11477234225041716672_3774221202_init()
{
	static char *pe[] = {(void *)Always_63_0,(void *)Always_103_1,(void *)Always_115_2,(void *)Always_120_3};
	xsi_register_didat("work_m_11477234225041716672_3774221202", "isim/cmp_top_isim_beh.exe.sim/work/m_11477234225041716672_3774221202.didat");
	xsi_register_executes(pe);
}
