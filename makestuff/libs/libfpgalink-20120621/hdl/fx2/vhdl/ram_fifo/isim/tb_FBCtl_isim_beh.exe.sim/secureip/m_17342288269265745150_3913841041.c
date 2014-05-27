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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_mui.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {31, 0};
static int ng3[] = {24, 0};
static int ng4[] = {23, 0};
static int ng5[] = {16, 0};
static int ng6[] = {15, 0};
static int ng7[] = {8, 0};
static int ng8[] = {7, 0};
static int ng9[] = {0, 0};



static void Cont_1009_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1009, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 6320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 15, 100LL, 0);
    t16 = (t0 + 6160);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_1010_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1010, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 6384);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans_delayed(t2, 0, 15, 100LL, 0);
    t16 = (t0 + 6176);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_1019_2(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 5096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1019, ng0);
    t2 = (t0 + 6192);
    *((int *)t2) = 1;
    t3 = (t0 + 5128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1020, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(1023, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 24);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t5 = (t0 + 3688);
    t11 = (t0 + 3688);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng2)));
    t18 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t14 + 4);
    t25 = *((unsigned int *)t19);
    t23 = (!(t25));
    t20 = (t15 + 4);
    t29 = *((unsigned int *)t20);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t21 = (t38 + 4);
    t32 = *((unsigned int *)t21);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(1021, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3688);
    t16 = (t0 + 3688);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng2)));
    t20 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB8;

LAB9:    goto LAB7;

LAB8:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, t33, *((unsigned int *)t14), t37, 0LL);
    goto LAB9;

LAB10:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t33, *((unsigned int *)t15), t37, 0LL);
    goto LAB11;

}

static void Always_1025_3(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 5344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1025, ng0);
    t2 = (t0 + 6208);
    *((int *)t2) = 1;
    t3 = (t0 + 5376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1026, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(1029, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 16);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 16);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t5 = (t0 + 3688);
    t11 = (t0 + 3688);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng4)));
    t18 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t14 + 4);
    t25 = *((unsigned int *)t19);
    t23 = (!(t25));
    t20 = (t15 + 4);
    t29 = *((unsigned int *)t20);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t21 = (t38 + 4);
    t32 = *((unsigned int *)t21);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(1027, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3688);
    t16 = (t0 + 3688);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng4)));
    t20 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB8;

LAB9:    goto LAB7;

LAB8:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, t33, *((unsigned int *)t14), t37, 0LL);
    goto LAB9;

LAB10:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t33, *((unsigned int *)t15), t37, 0LL);
    goto LAB11;

}

static void Always_1031_4(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 5592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1031, ng0);
    t2 = (t0 + 6224);
    *((int *)t2) = 1;
    t3 = (t0 + 5624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1032, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(1035, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t5 = (t0 + 3688);
    t11 = (t0 + 3688);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng6)));
    t18 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t14 + 4);
    t25 = *((unsigned int *)t19);
    t23 = (!(t25));
    t20 = (t15 + 4);
    t29 = *((unsigned int *)t20);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t21 = (t38 + 4);
    t32 = *((unsigned int *)t21);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(1033, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3688);
    t16 = (t0 + 3688);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    t20 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB8;

LAB9:    goto LAB7;

LAB8:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, t33, *((unsigned int *)t14), t37, 0LL);
    goto LAB9;

LAB10:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t33, *((unsigned int *)t15), t37, 0LL);
    goto LAB11;

}

static void Always_1037_5(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t38[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t39;

LAB0:    t1 = (t0 + 5840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1037, ng0);
    t2 = (t0 + 6240);
    *((int *)t2) = 1;
    t3 = (t0 + 5872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1038, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(1041, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 255U);
    t5 = (t0 + 3688);
    t11 = (t0 + 3688);
    t12 = (t11 + 72U);
    t16 = *((char **)t12);
    t17 = ((char*)((ng8)));
    t18 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t14, t15, t38, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t14 + 4);
    t25 = *((unsigned int *)t19);
    t23 = (!(t25));
    t20 = (t15 + 4);
    t29 = *((unsigned int *)t20);
    t26 = (!(t29));
    t27 = (t23 && t26);
    t21 = (t38 + 4);
    t32 = *((unsigned int *)t21);
    t30 = (!(t32));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(1039, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3688);
    t16 = (t0 + 3688);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng8)));
    t20 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB8;

LAB9:    goto LAB7;

LAB8:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, t33, *((unsigned int *)t14), t37, 0LL);
    goto LAB9;

LAB10:    t34 = *((unsigned int *)t38);
    t33 = (t34 + 0);
    t35 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t15);
    t36 = (t35 - t39);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t5, t13, t33, *((unsigned int *)t15), t37, 0LL);
    goto LAB11;

}


extern void secureip_m_17342288269265745150_3913841041_init()
{
	static char *pe[] = {(void *)Cont_1009_0,(void *)Cont_1010_1,(void *)Always_1019_2,(void *)Always_1025_3,(void *)Always_1031_4,(void *)Always_1037_5};
	xsi_register_didat("secureip_m_17342288269265745150_3913841041", "isim/tb_FBCtl_isim_beh.exe.sim/secureip/m_17342288269265745150_3913841041.didat");
	xsi_register_executes(pe);
}
