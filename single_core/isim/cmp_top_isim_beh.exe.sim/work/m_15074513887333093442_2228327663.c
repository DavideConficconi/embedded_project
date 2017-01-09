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
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {268435455U, 268435455U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};



static void NetDecl_622_0(char *t0)
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
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 3456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(622, ng0);
    t2 = (t0 + 1664U);
    t4 = *((char **)t2);
    t2 = (t0 + 1824U);
    t5 = *((char **)t2);
    t2 = (t0 + 1984U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 3, 3, 3U, t6, 1, t5, 1, t4, 1);
    t2 = (t0 + 4120);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 7U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 2U);
    t19 = (t0 + 4024);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Always_625_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(625, ng0);
    t2 = (t0 + 4040);
    *((int *)t2) = 1;
    t3 = (t0 + 3736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(627, ng0);
    t5 = (t0 + 1664U);
    t6 = *((char **)t5);
    t5 = (t0 + 1824U);
    t7 = *((char **)t5);
    t5 = (t0 + 1984U);
    t8 = *((char **)t5);
    xsi_vlogtype_concat(t4, 3, 3, 3U, t8, 1, t7, 1, t6, 1);

LAB5:    t5 = ((char*)((ng1)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t9 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng6)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng8)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng9)));
    t9 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t9 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:    xsi_set_current_line(636, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 28);

LAB24:    goto LAB2;

LAB6:    xsi_set_current_line(628, ng0);
    t10 = (t0 + 1184U);
    t11 = *((char **)t10);
    t10 = (t0 + 2544);
    xsi_vlogvar_assign_value(t10, t11, 0, 0, 28);
    goto LAB24;

LAB8:    xsi_set_current_line(629, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 28);
    goto LAB24;

LAB10:    xsi_set_current_line(630, ng0);
    t3 = (t0 + 1504U);
    t5 = *((char **)t3);
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 28);
    goto LAB24;

LAB12:    xsi_set_current_line(631, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2544);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 28);
    goto LAB24;

LAB14:    xsi_set_current_line(632, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2544);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 28);
    goto LAB24;

LAB16:    xsi_set_current_line(633, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2544);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 28);
    goto LAB24;

LAB18:    xsi_set_current_line(634, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2544);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 28);
    goto LAB24;

LAB20:    xsi_set_current_line(635, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2544);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 28);
    goto LAB24;

}


extern void work_m_15074513887333093442_2228327663_init()
{
	static char *pe[] = {(void *)NetDecl_622_0,(void *)Always_625_1};
	xsi_register_didat("work_m_15074513887333093442_2228327663", "isim/cmp_top_isim_beh.exe.sim/work/m_15074513887333093442_2228327663.didat");
	xsi_register_executes(pe);
}
