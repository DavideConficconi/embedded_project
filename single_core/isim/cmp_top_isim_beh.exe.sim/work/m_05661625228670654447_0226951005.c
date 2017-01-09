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



static void Always_112_0(char *t0)
{
    char t4[32];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 2656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2976);
    *((int *)t2) = 1;
    t3 = (t0 + 2688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(114, ng0);
    t5 = (t0 + 1184U);
    t6 = *((char **)t5);
    xsi_vlog_get_part_select_value(t4, 128, t6, 127, 0);
    t5 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 128, 0LL);
    goto LAB2;

}


extern void work_m_05661625228670654447_0226951005_init()
{
	static char *pe[] = {(void *)Always_112_0};
	xsi_register_didat("work_m_05661625228670654447_0226951005", "isim/cmp_top_isim_beh.exe.sim/work/m_05661625228670654447_0226951005.didat");
	xsi_register_executes(pe);
}
