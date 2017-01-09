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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/l2_encoder.v";
static unsigned int ng1[] = {0U, 0U};



static void Always_73_0(char *t0)
{
    char t4[48];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5880);
    *((int *)t2) = 1;
    t3 = (t0 + 5592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t5 = (t0 + 2968U);
    t6 = *((char **)t5);
    t5 = (t0 + 3128U);
    t7 = *((char **)t5);
    t5 = (t0 + 2808U);
    t8 = *((char **)t5);
    t5 = (t0 + 2648U);
    t9 = *((char **)t5);
    t5 = (t0 + 2008U);
    t10 = *((char **)t5);
    t5 = (t0 + 1848U);
    t11 = *((char **)t5);
    t5 = (t0 + 1688U);
    t12 = *((char **)t5);
    t5 = (t0 + 1528U);
    t13 = *((char **)t5);
    t5 = (t0 + 1368U);
    t14 = *((char **)t5);
    t5 = (t0 + 1208U);
    t15 = *((char **)t5);
    t5 = (t0 + 1048U);
    t16 = *((char **)t5);
    t5 = ((char*)((ng1)));
    t17 = (t0 + 2168U);
    t18 = *((char **)t17);
    t17 = (t0 + 2328U);
    t19 = *((char **)t17);
    t17 = (t0 + 2488U);
    t20 = *((char **)t17);
    t17 = (t0 + 3288U);
    t21 = *((char **)t17);
    t17 = ((char*)((ng1)));
    t22 = ((char*)((ng1)));
    t23 = (t0 + 4248U);
    t24 = *((char **)t23);
    t23 = (t0 + 4088U);
    t25 = *((char **)t23);
    t23 = (t0 + 3928U);
    t26 = *((char **)t23);
    t23 = (t0 + 3768U);
    t27 = *((char **)t23);
    t23 = (t0 + 3608U);
    t28 = *((char **)t23);
    t23 = (t0 + 3448U);
    t29 = *((char **)t23);
    xsi_vlogtype_concat(t4, 192, 192, 24U, t29, 14, t28, 8, t27, 8, t26, 4, t25, 10, t24, 6, t22, 14, t17, 8, t21, 40, t20, 4, t19, 1, t18, 3, t5, 8, t16, 14, t15, 8, t14, 8, t13, 4, t12, 8, t11, 8, t10, 8, t9, 2, t8, 1, t7, 2, t6, 1);
    t23 = (t0 + 4648);
    xsi_vlogvar_assign_value(t23, t4, 0, 0, 192);
    goto LAB2;

}


extern void work_m_13662610067677493504_4022367911_init()
{
	static char *pe[] = {(void *)Always_73_0};
	xsi_register_didat("work_m_13662610067677493504_4022367911", "isim/cmp_top_isim_beh.exe.sim/work/m_13662610067677493504_4022367911.didat");
	xsi_register_executes(pe);
}
