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
static const char *ng0 = "/home/dave/embedded_project/embedded_project/single_core/sparc_tlu_dec64.tmp.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U, 0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U, 0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U, 0U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {8U, 0U, 0U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {16U, 0U, 0U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {32U, 0U, 0U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {64U, 0U, 0U, 0U};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {128U, 0U, 0U, 0U};
static unsigned int ng17[] = {8U, 0U};
static unsigned int ng18[] = {256U, 0U, 0U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {512U, 0U, 0U, 0U};
static unsigned int ng21[] = {10U, 0U};
static unsigned int ng22[] = {1024U, 0U, 0U, 0U};
static unsigned int ng23[] = {11U, 0U};
static unsigned int ng24[] = {2048U, 0U, 0U, 0U};
static unsigned int ng25[] = {12U, 0U};
static unsigned int ng26[] = {4096U, 0U, 0U, 0U};
static unsigned int ng27[] = {13U, 0U};
static unsigned int ng28[] = {8192U, 0U, 0U, 0U};
static unsigned int ng29[] = {14U, 0U};
static unsigned int ng30[] = {16384U, 0U, 0U, 0U};
static unsigned int ng31[] = {15U, 0U};
static unsigned int ng32[] = {32768U, 0U, 0U, 0U};
static unsigned int ng33[] = {16U, 0U};
static unsigned int ng34[] = {65536U, 0U, 0U, 0U};
static unsigned int ng35[] = {17U, 0U};
static unsigned int ng36[] = {131072U, 0U, 0U, 0U};
static unsigned int ng37[] = {18U, 0U};
static unsigned int ng38[] = {262144U, 0U, 0U, 0U};
static unsigned int ng39[] = {19U, 0U};
static unsigned int ng40[] = {524288U, 0U, 0U, 0U};
static unsigned int ng41[] = {20U, 0U};
static unsigned int ng42[] = {1048576U, 0U, 0U, 0U};
static unsigned int ng43[] = {21U, 0U};
static unsigned int ng44[] = {2097152U, 0U, 0U, 0U};
static unsigned int ng45[] = {22U, 0U};
static unsigned int ng46[] = {4194304U, 0U, 0U, 0U};
static unsigned int ng47[] = {23U, 0U};
static unsigned int ng48[] = {8388608U, 0U, 0U, 0U};
static unsigned int ng49[] = {24U, 0U};
static unsigned int ng50[] = {16777216U, 0U, 0U, 0U};
static unsigned int ng51[] = {25U, 0U};
static unsigned int ng52[] = {33554432U, 0U, 0U, 0U};
static unsigned int ng53[] = {26U, 0U};
static unsigned int ng54[] = {67108864U, 0U, 0U, 0U};
static unsigned int ng55[] = {27U, 0U};
static unsigned int ng56[] = {134217728U, 0U, 0U, 0U};
static unsigned int ng57[] = {28U, 0U};
static unsigned int ng58[] = {268435456U, 0U, 0U, 0U};
static unsigned int ng59[] = {29U, 0U};
static unsigned int ng60[] = {536870912U, 0U, 0U, 0U};
static unsigned int ng61[] = {30U, 0U};
static unsigned int ng62[] = {1073741824U, 0U, 0U, 0U};
static unsigned int ng63[] = {31U, 0U};
static unsigned int ng64[] = {2147483648U, 0U, 0U, 0U};
static unsigned int ng65[] = {32U, 0U};
static unsigned int ng66[] = {0U, 0U, 1U, 0U};
static unsigned int ng67[] = {33U, 0U};
static unsigned int ng68[] = {0U, 0U, 2U, 0U};
static unsigned int ng69[] = {34U, 0U};
static unsigned int ng70[] = {0U, 0U, 4U, 0U};
static unsigned int ng71[] = {35U, 0U};
static unsigned int ng72[] = {0U, 0U, 8U, 0U};
static unsigned int ng73[] = {36U, 0U};
static unsigned int ng74[] = {0U, 0U, 16U, 0U};
static unsigned int ng75[] = {37U, 0U};
static unsigned int ng76[] = {0U, 0U, 32U, 0U};
static unsigned int ng77[] = {38U, 0U};
static unsigned int ng78[] = {0U, 0U, 64U, 0U};
static unsigned int ng79[] = {39U, 0U};
static unsigned int ng80[] = {0U, 0U, 128U, 0U};
static unsigned int ng81[] = {40U, 0U};
static unsigned int ng82[] = {0U, 0U, 256U, 0U};
static unsigned int ng83[] = {41U, 0U};
static unsigned int ng84[] = {0U, 0U, 512U, 0U};
static unsigned int ng85[] = {42U, 0U};
static unsigned int ng86[] = {0U, 0U, 1024U, 0U};
static unsigned int ng87[] = {43U, 0U};
static unsigned int ng88[] = {0U, 0U, 2048U, 0U};
static unsigned int ng89[] = {44U, 0U};
static unsigned int ng90[] = {0U, 0U, 4096U, 0U};
static unsigned int ng91[] = {45U, 0U};
static unsigned int ng92[] = {0U, 0U, 8192U, 0U};
static unsigned int ng93[] = {46U, 0U};
static unsigned int ng94[] = {0U, 0U, 16384U, 0U};
static unsigned int ng95[] = {47U, 0U};
static unsigned int ng96[] = {0U, 0U, 32768U, 0U};
static unsigned int ng97[] = {48U, 0U};
static unsigned int ng98[] = {0U, 0U, 65536U, 0U};
static unsigned int ng99[] = {49U, 0U};
static unsigned int ng100[] = {0U, 0U, 131072U, 0U};
static unsigned int ng101[] = {50U, 0U};
static unsigned int ng102[] = {0U, 0U, 262144U, 0U};
static unsigned int ng103[] = {51U, 0U};
static unsigned int ng104[] = {0U, 0U, 524288U, 0U};
static unsigned int ng105[] = {52U, 0U};
static unsigned int ng106[] = {0U, 0U, 1048576U, 0U};
static unsigned int ng107[] = {53U, 0U};
static unsigned int ng108[] = {0U, 0U, 2097152U, 0U};
static unsigned int ng109[] = {54U, 0U};
static unsigned int ng110[] = {0U, 0U, 4194304U, 0U};
static unsigned int ng111[] = {55U, 0U};
static unsigned int ng112[] = {0U, 0U, 8388608U, 0U};
static unsigned int ng113[] = {56U, 0U};
static unsigned int ng114[] = {0U, 0U, 16777216U, 0U};
static unsigned int ng115[] = {57U, 0U};
static unsigned int ng116[] = {0U, 0U, 33554432U, 0U};
static unsigned int ng117[] = {58U, 0U};
static unsigned int ng118[] = {0U, 0U, 67108864U, 0U};
static unsigned int ng119[] = {59U, 0U};
static unsigned int ng120[] = {0U, 0U, 134217728U, 0U};
static unsigned int ng121[] = {60U, 0U};
static unsigned int ng122[] = {0U, 0U, 268435456U, 0U};
static unsigned int ng123[] = {61U, 0U};
static unsigned int ng124[] = {0U, 0U, 536870912U, 0U};
static unsigned int ng125[] = {62U, 0U};
static unsigned int ng126[] = {0U, 0U, 1073741824U, 0U};
static unsigned int ng127[] = {63U, 0U};
static unsigned int ng128[] = {0U, 0U, 2147483648U, 0U};



static void Always_58_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2680);
    *((int *)t2) = 1;
    t3 = (t0 + 2392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng41)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng43)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng45)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng47)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng49)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng51)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng53)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng55)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng57)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng59)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng61)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng63)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng65)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng67)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng69)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng71)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng73)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng75)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng77)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng79)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng81)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng83)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng85)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng87)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng89)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB95;

LAB96:    t2 = ((char*)((ng91)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB97;

LAB98:    t2 = ((char*)((ng93)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB99;

LAB100:    t2 = ((char*)((ng95)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB101;

LAB102:    t2 = ((char*)((ng97)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB103;

LAB104:    t2 = ((char*)((ng99)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng101)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng103)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB109;

LAB110:    t2 = ((char*)((ng105)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB111;

LAB112:    t2 = ((char*)((ng107)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB113;

LAB114:    t2 = ((char*)((ng109)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB115;

LAB116:    t2 = ((char*)((ng111)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB117;

LAB118:    t2 = ((char*)((ng113)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB119;

LAB120:    t2 = ((char*)((ng115)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB121;

LAB122:    t2 = ((char*)((ng117)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB123;

LAB124:    t2 = ((char*)((ng119)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB125;

LAB126:    t2 = ((char*)((ng121)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB127;

LAB128:    t2 = ((char*)((ng123)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB129;

LAB130:    t2 = ((char*)((ng125)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB131;

LAB132:    t2 = ((char*)((ng127)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB133;

LAB134:
LAB135:    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1448);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 64);
    goto LAB135;

LAB9:    xsi_set_current_line(62, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB11:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB13:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB15:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB17:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB19:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB21:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB23:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB25:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB27:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB29:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB31:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB33:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB35:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB37:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB39:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB41:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB43:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB45:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB47:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng42)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB49:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng44)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB51:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng46)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB53:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng48)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB55:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng50)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB57:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng52)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB59:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng54)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB61:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng56)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB63:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng58)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB65:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng60)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB67:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng62)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB69:    xsi_set_current_line(92, ng0);
    t3 = ((char*)((ng64)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB71:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng66)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB73:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng68)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB75:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng70)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB77:    xsi_set_current_line(96, ng0);
    t3 = ((char*)((ng72)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB79:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng74)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB81:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng76)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB83:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng78)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB85:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng80)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB87:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng82)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB89:    xsi_set_current_line(102, ng0);
    t3 = ((char*)((ng84)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB91:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng86)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB93:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng88)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB95:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng90)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB97:    xsi_set_current_line(106, ng0);
    t3 = ((char*)((ng92)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB99:    xsi_set_current_line(107, ng0);
    t3 = ((char*)((ng94)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB101:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng96)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB103:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng98)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB105:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng100)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB107:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng102)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB109:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng104)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB111:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng106)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB113:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng108)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB115:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng110)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB117:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng112)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB119:    xsi_set_current_line(117, ng0);
    t3 = ((char*)((ng114)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB121:    xsi_set_current_line(118, ng0);
    t3 = ((char*)((ng116)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB123:    xsi_set_current_line(119, ng0);
    t3 = ((char*)((ng118)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB125:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng120)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB127:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng122)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB129:    xsi_set_current_line(122, ng0);
    t3 = ((char*)((ng124)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB131:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng126)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

LAB133:    xsi_set_current_line(124, ng0);
    t3 = ((char*)((ng128)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 64);
    goto LAB135;

}


extern void work_m_13087851982289781693_3624621511_init()
{
	static char *pe[] = {(void *)Always_58_0};
	xsi_register_didat("work_m_13087851982289781693_3624621511", "isim/cmp_top_isim_beh.exe.sim/work/m_13087851982289781693_3624621511.didat");
	xsi_register_executes(pe);
}
