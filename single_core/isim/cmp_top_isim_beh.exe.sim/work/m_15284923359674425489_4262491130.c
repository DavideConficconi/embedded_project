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
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {31U, 31U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {9U, 0U};
static unsigned int ng12[] = {10U, 0U};
static unsigned int ng13[] = {11U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {14U, 0U};
static unsigned int ng17[] = {15U, 0U};



static void NetDecl_667_0(char *t0)
{
    char t3[8];
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
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;

LAB0:    t1 = (t0 + 3776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(667, ng0);
    t2 = (t0 + 1824U);
    t4 = *((char **)t2);
    t2 = (t0 + 1984U);
    t5 = *((char **)t2);
    t2 = (t0 + 2144U);
    t6 = *((char **)t2);
    t2 = (t0 + 2304U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t3, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 4440);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t11, 0, 8);
    t12 = 15U;
    t13 = t12;
    t14 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t12 = (t12 & t15);
    t16 = *((unsigned int *)t14);
    t13 = (t13 & t16);
    t17 = (t11 + 4);
    t18 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t18 | t12);
    t19 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t19 | t13);
    xsi_driver_vfirst_trans(t2, 0, 3U);
    t20 = (t0 + 4344);
    *((int *)t20) = 1;

LAB1:    return;
}

static void Always_670_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(670, ng0);
    t2 = (t0 + 4360);
    *((int *)t2) = 1;
    t3 = (t0 + 4056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(672, ng0);
    t5 = (t0 + 1824U);
    t6 = *((char **)t5);
    t5 = (t0 + 1984U);
    t7 = *((char **)t5);
    t5 = (t0 + 2144U);
    t8 = *((char **)t5);
    t5 = (t0 + 2304U);
    t9 = *((char **)t5);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t9, 1, t8, 1, t7, 1, t6, 1);

LAB5:    t5 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t10 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng9)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng10)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng13)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng14)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng15)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng16)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng17)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t10 == 1)
        goto LAB36;

LAB37:
LAB39:
LAB38:    xsi_set_current_line(689, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);

LAB40:    goto LAB2;

LAB6:    xsi_set_current_line(673, ng0);
    t11 = (t0 + 1184U);
    t12 = *((char **)t11);
    t11 = (t0 + 2864);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 5);
    goto LAB40;

LAB8:    xsi_set_current_line(674, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB40;

LAB10:    xsi_set_current_line(675, ng0);
    t3 = (t0 + 1504U);
    t5 = *((char **)t3);
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB40;

LAB12:    xsi_set_current_line(676, ng0);
    t3 = (t0 + 1664U);
    t5 = *((char **)t3);
    t3 = (t0 + 2864);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 5);
    goto LAB40;

LAB14:    xsi_set_current_line(677, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB16:    xsi_set_current_line(678, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB18:    xsi_set_current_line(679, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB20:    xsi_set_current_line(680, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB22:    xsi_set_current_line(681, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB24:    xsi_set_current_line(682, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB26:    xsi_set_current_line(683, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB28:    xsi_set_current_line(684, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB30:    xsi_set_current_line(685, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB32:    xsi_set_current_line(686, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB34:    xsi_set_current_line(687, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

LAB36:    xsi_set_current_line(688, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 2864);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 5);
    goto LAB40;

}


extern void work_m_15284923359674425489_4262491130_init()
{
	static char *pe[] = {(void *)NetDecl_667_0,(void *)Always_670_1};
	xsi_register_didat("work_m_15284923359674425489_4262491130", "isim/cmp_top_isim_beh.exe.sim/work/m_15284923359674425489_4262491130.didat");
	xsi_register_executes(pe);
}
