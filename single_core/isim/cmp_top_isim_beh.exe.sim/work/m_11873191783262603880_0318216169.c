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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/one_of_five.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};



static void Always_34_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3752);
    *((int *)t2) = 1;
    t3 = (t0 + 3464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1320U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);
    t7 = (t0 + 1480U);
    t8 = *((char **)t7);
    t7 = (t0 + 2520);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 64);
    goto LAB19;

LAB9:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1640U);
    t4 = *((char **)t3);
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB19;

LAB11:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1800U);
    t4 = *((char **)t3);
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB19;

LAB13:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1960U);
    t4 = *((char **)t3);
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB19;

LAB15:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 2120U);
    t4 = *((char **)t3);
    t3 = (t0 + 2520);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 64);
    goto LAB19;

}


extern void work_m_11873191783262603880_0318216169_init()
{
	static char *pe[] = {(void *)Always_34_0};
	xsi_register_didat("work_m_11873191783262603880_0318216169", "isim/cmp_top_isim_beh.exe.sim/work/m_11873191783262603880_0318216169.didat");
	xsi_register_executes(pe);
}
