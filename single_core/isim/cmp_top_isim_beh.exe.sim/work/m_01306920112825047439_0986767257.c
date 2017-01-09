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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/sparc_exu_aluadder64.v";



static void Cont_54_0(char *t0)
{
    char t3[16];
    char t5[16];
    char t7[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 33, t4, 31, 0);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    xsi_vlog_get_part_select_value(t5, 33, t6, 31, 0);
    xsi_vlog_unsigned_add(t7, 33, t3, 33, t5, 33);
    t2 = (t0 + 1368U);
    t8 = *((char **)t2);
    xsi_vlog_unsigned_add(t9, 33, t7, 33, t8, 1);
    t2 = (t0 + 3728);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t13, 0, t9, 0, 32);
    xsi_driver_vfirst_trans(t2, 0, 31);
    t14 = (t0 + 3664);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_bit_copy(t18, 0, t9, 32, 1);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t19 = (t0 + 3568);
    *((int *)t19) = 1;

LAB1:    return;
}

static void Cont_56_1(char *t0)
{
    char t3[16];
    char t5[16];
    char t7[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 33, t4, 63, 32);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    xsi_vlog_get_part_select_value(t5, 33, t6, 63, 32);
    xsi_vlog_unsigned_add(t7, 33, t3, 33, t5, 33);
    t2 = (t0 + 1688U);
    t8 = *((char **)t2);
    xsi_vlog_unsigned_add(t9, 33, t7, 33, t8, 1);
    t2 = (t0 + 3856);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t13, 0, t9, 0, 32);
    xsi_driver_vfirst_trans(t2, 32, 63);
    t14 = (t0 + 3792);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    xsi_vlog_bit_copy(t18, 0, t9, 32, 1);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t19 = (t0 + 3584);
    *((int *)t19) = 1;

LAB1:    return;
}


extern void work_m_01306920112825047439_0986767257_init()
{
	static char *pe[] = {(void *)Cont_54_0,(void *)Cont_56_1};
	xsi_register_didat("work_m_01306920112825047439_0986767257", "isim/cmp_top_isim_beh.exe.sim/work/m_01306920112825047439_0986767257.didat");
	xsi_register_executes(pe);
}
