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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/l15_wrap.v";
static unsigned int ng1[] = {15U, 15U};
static unsigned int ng2[] = {67108863U, 67108863U};



static void NetDecl_88_0(char *t0)
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

LAB0:    t1 = (t0 + 8920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t3, 5, 5, 2U, t2, 4, t4, 1);
    t5 = (t0 + 9848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 31U;
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
    xsi_driver_vfirst_trans(t5, 0, 4U);
    t18 = (t0 + 9736);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_89_1(char *t0)
{
    char t3[32];
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

LAB0:    t1 = (t0 + 9168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    xsi_vlogtype_concat(t3, 124, 124, 3U, t6, 7, t2, 4, t4, 113);
    t5 = (t0 + 9912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_bit_copy(t10, 0, t3, 0, 124);
    xsi_driver_vfirst_trans(t5, 0, 123U);
    t11 = (t0 + 9752);
    *((int *)t11) = 1;

LAB1:    return;
}

static void NetDecl_90_2(char *t0)
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

LAB0:    t1 = (t0 + 9416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3768U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    xsi_vlogtype_concat(t3, 32, 32, 2U, t2, 26, t4, 6);
    t5 = (t0 + 9976);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t5, 0, 31U);
    t10 = (t0 + 9768);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_01948137289984029456_0960479586_init()
{
	static char *pe[] = {(void *)NetDecl_88_0,(void *)NetDecl_89_1,(void *)NetDecl_90_2};
	xsi_register_didat("work_m_01948137289984029456_0960479586", "isim/cmp_top_isim_beh.exe.sim/work/m_01948137289984029456_0960479586.didat");
	xsi_register_executes(pe);
}
