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
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {32767U, 32767U};
static unsigned int ng5[] = {0U, 0U};



static void NetDecl_574_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(574, ng0);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = (t0 + 1664U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 2, 2, 2U, t5, 1, t4, 1);
    t2 = (t0 + 3800);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 3U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 1U);
    t18 = (t0 + 3704);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_576_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(576, ng0);
    t2 = (t0 + 3720);
    *((int *)t2) = 1;
    t3 = (t0 + 3416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(578, ng0);
    t5 = (t0 + 1504U);
    t6 = *((char **)t5);
    t5 = (t0 + 1664U);
    t7 = *((char **)t5);
    xsi_vlogtype_concat(t4, 2, 2, 2U, t7, 1, t6, 1);

LAB5:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB15:
LAB14:    xsi_set_current_line(594, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 15);

LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(579, ng0);
    t9 = (t0 + 1184U);
    t10 = *((char **)t9);
    t9 = (t0 + 2224);
    xsi_vlogvar_assign_value(t9, t10, 0, 0, 15);
    goto LAB16;

LAB8:    xsi_set_current_line(580, ng0);
    t3 = (t0 + 1344U);
    t5 = *((char **)t3);
    t3 = (t0 + 2224);
    xsi_vlogvar_assign_value(t3, t5, 0, 0, 15);
    goto LAB16;

LAB10:    xsi_set_current_line(581, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 15);
    goto LAB16;

LAB12:    xsi_set_current_line(582, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2224);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 15);
    goto LAB16;

}


extern void work_m_15369716834402575605_2828802196_init()
{
	static char *pe[] = {(void *)NetDecl_574_0,(void *)Always_576_1};
	xsi_register_didat("work_m_15369716834402575605_2828802196", "isim/cmp_top_isim_beh.exe.sim/work/m_15369716834402575605_2828802196.didat");
	xsi_register_executes(pe);
}
