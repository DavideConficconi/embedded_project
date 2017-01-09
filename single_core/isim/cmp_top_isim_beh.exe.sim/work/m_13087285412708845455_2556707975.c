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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/fpu_rptr_min_global.v";



static void Cont_76_0(char *t0)
{
    char t3[40];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 156, t4, 155, 0);
    t2 = (t0 + 2760);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bit_copy(t8, 0, t3, 0, 156);
    xsi_driver_vfirst_trans(t2, 0, 155);
    t9 = (t0 + 2680);
    *((int *)t9) = 1;

LAB1:    return;
}


extern void work_m_13087285412708845455_2556707975_init()
{
	static char *pe[] = {(void *)Cont_76_0};
	xsi_register_didat("work_m_13087285412708845455_2556707975", "isim/cmp_top_isim_beh.exe.sim/work/m_13087285412708845455_2556707975.didat");
	xsi_register_executes(pe);
}
