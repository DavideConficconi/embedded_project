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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/tlu_addern_32.v";
static unsigned int ng1[] = {0U, 0U};



static void Cont_51_0(char *t0)
{
    char t3[16];
    char t5[16];
    char t6[8];
    char t16[16];
    char *t1;
    char *t2;
    char *t4;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1456U);
    t4 = *((char **)t2);
    xsi_vlog_get_part_select_value(t3, 33, t4, 32, 0);
    t2 = (t0 + 1616U);
    t7 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t2) = t12;
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 7U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 7U);
    t15 = ((char*)((ng1)));
    xsi_vlogtype_concat(t5, 33, 33, 2U, t15, 30, t6, 3);
    xsi_vlog_unsigned_add(t16, 33, t3, 33, t5, 33);
    t17 = (t0 + 3328);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_bit_copy(t21, 0, t16, 0, 33);
    xsi_driver_vfirst_trans(t17, 0, 32);
    t22 = (t0 + 3248);
    *((int *)t22) = 1;

LAB1:    return;
}


extern void work_m_11154615520944712170_3900513609_init()
{
	static char *pe[] = {(void *)Cont_51_0};
	xsi_register_didat("work_m_11154615520944712170_3900513609", "isim/cmp_top_isim_beh.exe.sim/work/m_11154615520944712170_3900513609.didat");
	xsi_register_executes(pe);
}
