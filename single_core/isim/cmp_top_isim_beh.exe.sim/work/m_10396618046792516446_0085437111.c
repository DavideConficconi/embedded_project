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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/l2_mshr_decoder.v";



static void Always_70_0(char *t0)
{
    char t4[16];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 4920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5240);
    *((int *)t2) = 1;
    t3 = (t0 + 4952);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    xsi_vlog_get_part_select_value(t4, 40, t6, 39, 0);
    t5 = (t0 + 1448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 40);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 8);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 8);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 3U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 3U);
    t14 = (t0 + 1608);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 2);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 10);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 10);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t14 = (t0 + 1768);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 18);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 18);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 19);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 19);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 7U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 7U);
    t14 = (t0 + 2088);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 3);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 22);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 22);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t14 = (t0 + 2248);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 30);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 30);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 2408);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 8);
    t6 = (t3 + 12);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 31);
    *((unsigned int *)t2) = t11;
    t14 = (t3 + 16);
    t15 = (t3 + 20);
    t12 = *((unsigned int *)t14);
    t13 = (t12 << 1);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 | t13);
    t17 = *((unsigned int *)t15);
    t18 = (t17 << 1);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 | t18);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 16383U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 16383U);
    t22 = (t0 + 2568);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 14);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 16);
    t6 = (t3 + 20);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 13);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 13);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t14 = (t0 + 2728);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 16);
    t6 = (t3 + 20);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 21);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 255U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 255U);
    t14 = (t0 + 2888);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 16);
    t6 = (t3 + 20);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 29);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 29);
    *((unsigned int *)t2) = t11;
    t14 = (t3 + 24);
    t15 = (t3 + 28);
    t12 = *((unsigned int *)t14);
    t13 = (t12 << 3);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 | t13);
    t17 = *((unsigned int *)t15);
    t18 = (t17 << 3);
    t19 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t19 | t18);
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 15U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 15U);
    t22 = (t0 + 3048);
    xsi_vlogvar_assign_value(t22, t7, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 24);
    t6 = (t3 + 28);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 1023U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 1023U);
    t14 = (t0 + 3208);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 10);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 24);
    t6 = (t3 + 28);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 11);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t14 = (t0 + 3368);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 6);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 24);
    t6 = (t3 + 28);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 17);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 17);
    *((unsigned int *)t2) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 63U);
    t13 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t13 & 63U);
    t14 = (t0 + 3528);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 6);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 24);
    t6 = (t3 + 28);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 23);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 23);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 3688);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 24);
    t6 = (t3 + 28);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 24);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 24);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 3848);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t5 = (t3 + 24);
    t6 = (t3 + 28);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 25);
    t10 = (t9 & 1);
    *((unsigned int *)t7) = t10;
    t11 = *((unsigned int *)t6);
    t12 = (t11 >> 25);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t14 = (t0 + 4008);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 1);
    goto LAB2;

}


extern void work_m_10396618046792516446_0085437111_init()
{
	static char *pe[] = {(void *)Always_70_0};
	xsi_register_didat("work_m_10396618046792516446_0085437111", "isim/cmp_top_isim_beh.exe.sim/work/m_10396618046792516446_0085437111.didat");
	xsi_register_executes(pe);
}
