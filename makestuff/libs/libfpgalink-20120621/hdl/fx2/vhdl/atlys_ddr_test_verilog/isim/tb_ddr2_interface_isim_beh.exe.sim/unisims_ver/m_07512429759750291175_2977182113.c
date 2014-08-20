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
static int ng0[] = {0, 0};
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {5, 0};
static unsigned int ng10[] = {4U, 0U};
static int ng11[] = {6, 0};
static unsigned int ng12[] = {5U, 0U};
static int ng13[] = {7, 0};
static unsigned int ng14[] = {6U, 0U};
static int ng15[] = {8, 0};
static unsigned int ng16[] = {7U, 0U};
static const char *ng17 = "Attribute Syntax Error : The attribute DIVIDE on BUFPLL_MCB instance %m is set to %d.  Legal values for this attribute are 1, 2, 3, 4, 5, 6, 7 or 8.";
static int ng18[] = {1414487856, 0, 1329810271, 0, 76, 0};
static int ng19[] = {1414487857, 0, 1329810271, 0, 76, 0};
static const char *ng20 = "Attribute Syntax Error : The attribute LOCK_SRC on BUFPLL_MCB instance %m is set to %s.  Legal values for this attribute are LOCK_TO_0 or LOCK_TO_1";



static void NetDecl_76_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 6952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 15032);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 12088);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 11736);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_83_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;

LAB0:    t1 = (t0 + 7200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:
LAB4:    t2 = ((char*)((ng0)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_minus(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 3960);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5400);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 5560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = (t0 + 472);
    t3 = *((char **)t2);

LAB5:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_signed_case_compare(t3, 32, t2, 32);
    if (t6 == 1)
        goto LAB20;

LAB21:
LAB23:
LAB22:
LAB33:    t2 = (t0 + 472);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)119, t5, 32);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 6040);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);

LAB24:    t2 = (t0 + 608);
    t5 = *((char **)t2);

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 72, t2, 72);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 72, t2, 72);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:
LAB42:    t2 = (t0 + 608);
    t7 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng20, 2, t0, (char)118, t7, 72);
    t2 = ((char*)((ng1)));
    t7 = (t0 + 6040);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 1);

LAB41:    t2 = (t0 + 6040);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB43;

LAB44:
LAB45:
LAB1:    return;
LAB6:
LAB25:    t5 = ((char*)((ng2)));
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB24;

LAB8:
LAB26:    t5 = ((char*)((ng4)));
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB24;

LAB10:
LAB27:    t5 = ((char*)((ng6)));
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 4440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    t2 = ((char*)((ng0)));
    t5 = (t0 + 4600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB24;

LAB12:
LAB28:    t5 = ((char*)((ng8)));
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB24;

LAB14:
LAB29:    t5 = ((char*)((ng10)));
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    t2 = ((char*)((ng0)));
    t5 = (t0 + 4600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB24;

LAB16:
LAB30:    t5 = ((char*)((ng12)));
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 4440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB24;

LAB18:
LAB31:    t5 = ((char*)((ng14)));
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 4440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    t2 = ((char*)((ng0)));
    t5 = (t0 + 4600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB24;

LAB20:
LAB32:    t5 = ((char*)((ng16)));
    t7 = (t0 + 4280);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 3);
    t2 = ((char*)((ng8)));
    t5 = (t0 + 4440);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 3);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4600);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 1);
    goto LAB24;

LAB35:    t7 = ((char*)((ng4)));
    t8 = (t0 + 5720);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    goto LAB41;

LAB37:    t7 = ((char*)((ng4)));
    t8 = (t0 + 5880);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 0LL);
    goto LAB41;

LAB43:
LAB46:    t15 = (t0 + 7008);
    xsi_process_wait(t15, 1LL);
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB47:    xsi_vlog_finish(1);
    goto LAB45;

}

static void Always_180_2(char *t0)
{
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 7448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11752);
    *((int *)t2) = 1;
    t3 = (t0 + 7480);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 4920);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB5;

LAB6:    t2 = (t0 + 4120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 3, t5, 32);
    t6 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t6, t15, 0, 0, 3, 0LL);

LAB7:    goto LAB2;

LAB5:    t13 = ((char*)((ng2)));
    t14 = (t0 + 4120);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 3, 0LL);
    goto LAB7;

}

static void Always_197_3(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 7696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11768);
    *((int *)t2) = 1;
    t3 = (t0 + 7728);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 4120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3960);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB8;

LAB5:    if (t22 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t10) = 1;

LAB8:    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB9;

LAB10:    t2 = ((char*)((ng0)));
    t3 = (t0 + 4920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB11:    goto LAB2;

LAB7:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB8;

LAB9:    t32 = ((char*)((ng1)));
    t33 = (t0 + 4920);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB11;

}

static void Always_208_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 7944U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11784);
    *((int *)t2) = 1;
    t3 = (t0 + 7976);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 4920);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3640);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_210_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 8192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11800);
    *((int *)t2) = 1;
    t3 = (t0 + 8224);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 3640);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 3800);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_225_6(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 8440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11816);
    *((int *)t2) = 1;
    t3 = (t0 + 8472);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 4120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4280);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB8;

LAB5:    if (t22 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t10) = 1;

LAB8:    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB9;

LAB10:    t2 = ((char*)((ng0)));
    t3 = (t0 + 5080);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB11:    goto LAB2;

LAB7:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB8;

LAB9:    t32 = ((char*)((ng1)));
    t33 = (t0 + 5080);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB11;

}

static void Always_231_7(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 8688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11832);
    *((int *)t2) = 1;
    t3 = (t0 + 8720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 4120);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4440);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB8;

LAB5:    if (t22 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t10) = 1;

LAB8:    t26 = (t10 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t10);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB9;

LAB10:    t2 = ((char*)((ng0)));
    t3 = (t0 + 5240);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB11:    goto LAB2;

LAB7:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB8;

LAB9:    t32 = ((char*)((ng1)));
    t33 = (t0 + 5240);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 1);
    goto LAB11;

}

static void Always_239_8(char *t0)
{
    char t10[8];
    char t31[8];
    char t63[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;

LAB0:    t1 = (t0 + 8936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11848);
    *((int *)t2) = 1;
    t3 = (t0 + 8968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5080);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5400);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t0 + 5240);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t10, 0, 8);
    t14 = (t13 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t14) == 0)
        goto LAB5;

LAB7:    t20 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t20) = 1;

LAB8:    t21 = (t10 + 4);
    t22 = (t13 + 4);
    t23 = *((unsigned int *)t13);
    t24 = (~(t23));
    *((unsigned int *)t10) = t24;
    *((unsigned int *)t21) = 0;
    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB9:    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 1U);
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 1U);
    t32 = *((unsigned int *)t9);
    t33 = *((unsigned int *)t10);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t9 + 4);
    t36 = (t10 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB11;

LAB12:
LAB13:    t64 = *((unsigned int *)t6);
    t65 = *((unsigned int *)t31);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t6 + 4);
    t68 = (t31 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB14;

LAB15:
LAB16:    t91 = (t0 + 5400);
    xsi_vlogvar_wait_assign_value(t91, t63, 0, 0, 1, 0LL);
    goto LAB2;

LAB5:    *((unsigned int *)t10) = 1;
    goto LAB8;

LAB10:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t10) = (t25 | t26);
    t27 = *((unsigned int *)t21);
    t28 = *((unsigned int *)t22);
    *((unsigned int *)t21) = (t27 | t28);
    goto LAB9;

LAB11:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t9 + 4);
    t46 = (t10 + 4);
    t47 = *((unsigned int *)t9);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t10);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB13;

LAB14:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t6 + 4);
    t78 = (t31 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t6);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t31);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB16;

}

static void Always_242_9(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 9184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11864);
    *((int *)t2) = 1;
    t3 = (t0 + 9216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t5 = (t0 + 4600);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t8) == 0)
        goto LAB5;

LAB7:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB8:    t15 = (t4 + 4);
    t16 = (t7 + 4);
    t17 = *((unsigned int *)t7);
    t18 = (~(t17));
    *((unsigned int *)t4) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB10;

LAB9:    t23 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB11;

LAB12:    t2 = ((char*)((ng0)));
    t3 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB13:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t4) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB9;

LAB11:    t31 = (t0 + 5400);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 5560);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    goto LAB13;

}

static void Always_261_10(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 9432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11880);
    *((int *)t2) = 1;
    t3 = (t0 + 9464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 5400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 5560);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = (t6 + 4);
    t15 = (t9 + 4);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t15);
    t19 = (t17 | t18);
    *((unsigned int *)t16) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 != 0);
    if (t21 == 1)
        goto LAB5;

LAB6:
LAB7:    t38 = (t0 + 4760);
    xsi_vlogvar_assign_value(t38, t10, 0, 0, 1);
    goto LAB2;

LAB5:    t22 = *((unsigned int *)t10);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t10) = (t22 | t23);
    t24 = (t6 + 4);
    t25 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = *((unsigned int *)t25);
    t31 = (~(t30));
    t32 = *((unsigned int *)t9);
    t33 = (t32 & t31);
    t34 = (~(t29));
    t35 = (~(t33));
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t34);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & t35);
    goto LAB7;

}

static void Always_266_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11896);
    *((int *)t2) = 1;
    t3 = (t0 + 9712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 2440U);
    t5 = *((char **)t4);
    t4 = (t0 + 3160);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    goto LAB2;

}

static void Always_269_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 9928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11912);
    *((int *)t2) = 1;
    t3 = (t0 + 9960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 2600U);
    t5 = *((char **)t4);
    t4 = (t0 + 3320);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    goto LAB2;

}

static void Always_275_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 10176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11928);
    *((int *)t2) = 1;
    t3 = (t0 + 10208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 2280U);
    t5 = *((char **)t4);
    t4 = (t0 + 3480);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Cont_279_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 10424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12152);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 11944);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_280_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 10672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12216);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 11960);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_281_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 10920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3480);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 11976);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_282_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 11168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 11992);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_283_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 11416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3800);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 12008);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void unisims_ver_m_07512429759750291175_2977182113_init()
{
	static char *pe[] = {(void *)NetDecl_76_0,(void *)Initial_83_1,(void *)Always_180_2,(void *)Always_197_3,(void *)Always_208_4,(void *)Always_210_5,(void *)Always_225_6,(void *)Always_231_7,(void *)Always_239_8,(void *)Always_242_9,(void *)Always_261_10,(void *)Always_266_11,(void *)Always_269_12,(void *)Always_275_13,(void *)Cont_279_14,(void *)Cont_280_15,(void *)Cont_281_16,(void *)Cont_282_17,(void *)Cont_283_18};
	xsi_register_didat("unisims_ver_m_07512429759750291175_2977182113", "isim/tb_ddr2_interface_isim_beh.exe.sim/unisims_ver/m_07512429759750291175_2977182113.didat");
	xsi_register_executes(pe);
}
