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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_calibration_datacapture.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};
static unsigned int ng15[] = {14U, 0U};
static unsigned int ng16[] = {15U, 0U};



static void Always_44_0(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 3320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 3888);
    *((int *)t2) = 1;
    t3 = (t0 + 3352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(47, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB12;

LAB15:    xsi_set_current_line(50, ng0);
    t11 = (t0 + 1208U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t11) = t21;
    t22 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t22, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB17:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB19:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB21:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB23:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 4);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB25:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 5);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB27:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 6);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB29:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB31:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 8);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB33:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 9);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 9);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB35:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 10);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 10);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB37:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 11);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 11);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB39:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 12);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB41:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 13);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 13);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 14);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 14);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB45:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 15);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 15);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

}

static void Always_74_1(char *t0)
{
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3904);
    *((int *)t2) = 1;
    t3 = (t0 + 3600);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(74, ng0);

LAB5:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(75, ng0);

LAB9:    xsi_set_current_line(76, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(77, ng0);

LAB13:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t13 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB12;

LAB15:    xsi_set_current_line(80, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t14) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t11) = t21;
    t22 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t22, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB17:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 1);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB19:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 2);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB21:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 3);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB23:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 4);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB25:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 5);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 5);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB27:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 6);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 6);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB29:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 7);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB31:    xsi_set_current_line(88, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 8);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB33:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 9);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 9);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB35:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 10);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 10);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB37:    xsi_set_current_line(91, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 11);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 11);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB39:    xsi_set_current_line(92, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 12);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 12);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB41:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 13);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 13);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB43:    xsi_set_current_line(94, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 14);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 14);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

LAB45:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 1368U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t3 = (t14 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 15);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t11);
    t10 = (t9 >> 15);
    t16 = (t10 & 1);
    *((unsigned int *)t3) = t16;
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t14, 0, 0, 1, 0LL);
    goto LAB47;

}


extern void secureip_m_01436198511566322049_0231826499_init()
{
	static char *pe[] = {(void *)Always_44_0,(void *)Always_74_1};
	xsi_register_didat("secureip_m_01436198511566322049_0231826499", "isim/tb_VmodCAM_Ref_isim_beh.exe.sim/secureip/m_01436198511566322049_0231826499.didat");
	xsi_register_executes(pe);
}
