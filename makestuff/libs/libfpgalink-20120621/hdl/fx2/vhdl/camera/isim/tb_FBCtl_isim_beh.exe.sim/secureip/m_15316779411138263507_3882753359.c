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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_calibration_drp.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {9U, 0U};
static int ng11[] = {7, 0};



static void Cont_93_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 6784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 7448);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 7352);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Always_95_1(char *t0)
{
    char t13[8];
    char t16[8];
    char t19[8];
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
    char *t14;
    int t15;
    unsigned int t17;
    char *t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;

LAB0:    t1 = (t0 + 7032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 7368);
    *((int *)t2) = 1;
    t3 = (t0 + 7064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);

LAB5:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 2432U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(111, ng0);

LAB12:    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 1);
    *((unsigned int *)t16) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t10 & 131071U);
    t17 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t17 & 131071U);
    t12 = (t0 + 5392);
    t14 = (t12 + 56U);
    t18 = *((char **)t14);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t21 = (t18 + 4);
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 0);
    t27 = (t26 & 1);
    *((unsigned int *)t20) = t27;
    xsi_vlogtype_concat(t13, 18, 18, 2U, t19, 1, t16, 17);
    t28 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t28, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng2)));

LAB13:    t3 = (t0 + 5552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    t17 = (t10 & 1);
    *((unsigned int *)t11) = t17;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t13, 1);
    if (t15 == 1)
        goto LAB14;

LAB15:    t3 = (t0 + 5552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 1);
    t17 = (t10 & 1);
    *((unsigned int *)t11) = t17;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t13, 1);
    if (t15 == 1)
        goto LAB16;

LAB17:    t3 = (t0 + 5552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 2);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 2);
    t17 = (t10 & 1);
    *((unsigned int *)t11) = t17;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t13, 1);
    if (t15 == 1)
        goto LAB18;

LAB19:    t3 = (t0 + 5552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 3);
    t17 = (t10 & 1);
    *((unsigned int *)t11) = t17;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t13, 1);
    if (t15 == 1)
        goto LAB20;

LAB21:    t3 = (t0 + 5552);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 4);
    t8 = (t7 & 1);
    *((unsigned int *)t13) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 4);
    t17 = (t10 & 1);
    *((unsigned int *)t11) = t17;
    t15 = xsi_vlog_unsigned_case_compare(t2, 1, t13, 1);
    if (t15 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(207, ng0);

LAB140:    xsi_set_current_line(208, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB141;

LAB142:
LAB26:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(96, ng0);

LAB9:    xsi_set_current_line(97, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5552);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 5552);
    t4 = (t0 + 5552);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t12, 32, 1);
    t14 = (t13 + 4);
    t6 = *((unsigned int *)t14);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5712);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng1)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t2, 32, t3, 32);
    t4 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t4, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5872);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB11;

LAB14:    xsi_set_current_line(119, ng0);

LAB27:    xsi_set_current_line(120, ng0);
    t14 = ((char*)((ng1)));
    t18 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t18, t14, 0, 0, 4, 0LL);
    xsi_set_current_line(121, ng0);
    t3 = (t0 + 3072U);
    t4 = *((char **)t3);
    t3 = (t0 + 4592);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(122, ng0);
    t3 = (t0 + 2752U);
    t4 = *((char **)t3);
    t3 = (t0 + 5072);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5712);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t3 = (t0 + 2592U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2912U);
    t11 = *((char **)t5);
    xsi_vlogtype_concat(t13, 18, 18, 3U, t11, 8, t3, 2, t4, 8);
    t5 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t5, t13, 0, 0, 18, 0LL);
    xsi_set_current_line(125, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 5872);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t3 = (t0 + 3232U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t4 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t3) != 0)
        goto LAB30;

LAB31:    t11 = (t13 + 4);
    t17 = *((unsigned int *)t13);
    t22 = (!(t17));
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB32;

LAB33:    memcpy(t19, t13, 8);

LAB34:    t54 = (t19 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t19);
    t58 = (t57 & t56);
    t59 = (t58 != 0);
    if (t59 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(143, ng0);

LAB61:    xsi_set_current_line(144, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB62;

LAB63:
LAB44:    goto LAB26;

LAB16:    xsi_set_current_line(147, ng0);

LAB64:    xsi_set_current_line(149, ng0);
    t14 = (t0 + 5232);
    t18 = (t14 + 56U);
    t20 = *((char **)t18);
    t21 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 4, t20, 4, t21, 4);
    t28 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t28, t16, 0, 0, 4, 0LL);
    xsi_set_current_line(150, ng0);
    t3 = (t0 + 5232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t17 = (t9 ^ t10);
    t22 = (t8 | t17);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB68;

LAB65:    if (t25 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t13) = 1;

LAB68:    t20 = (t13 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB69;

LAB70:    xsi_set_current_line(154, ng0);

LAB75:    xsi_set_current_line(155, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(157, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB76;

LAB77:
LAB71:    goto LAB26;

LAB18:    xsi_set_current_line(160, ng0);

LAB78:    xsi_set_current_line(162, ng0);
    t14 = (t0 + 5232);
    t18 = (t14 + 56U);
    t20 = *((char **)t18);
    t21 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 4, t20, 4, t21, 4);
    t28 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t28, t16, 0, 0, 4, 0LL);
    xsi_set_current_line(163, ng0);
    t3 = (t0 + 5232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    t12 = ((char*)((ng7)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t11, 32, t12, 32);
    memset(t16, 0, 8);
    t14 = (t5 + 4);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t18);
    t17 = (t9 ^ t10);
    t22 = (t8 | t17);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t18);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB82;

LAB79:    if (t25 != 0)
        goto LAB81;

LAB80:    *((unsigned int *)t16) = 1;

LAB82:    t21 = (t16 + 4);
    t29 = *((unsigned int *)t21);
    t30 = (~(t29));
    t31 = *((unsigned int *)t16);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB83;

LAB84:    xsi_set_current_line(170, ng0);

LAB91:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB92;

LAB93:
LAB85:    goto LAB26;

LAB20:    xsi_set_current_line(174, ng0);

LAB94:    xsi_set_current_line(176, ng0);
    t14 = (t0 + 5232);
    t18 = (t14 + 56U);
    t20 = *((char **)t18);
    t21 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 4, t20, 4, t21, 4);
    t28 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t28, t16, 0, 0, 4, 0LL);
    xsi_set_current_line(177, ng0);
    t3 = (t0 + 5232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t17 = (t9 ^ t10);
    t22 = (t8 | t17);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB98;

LAB95:    if (t25 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t13) = 1;

LAB98:    t20 = (t13 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(182, ng0);

LAB105:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB106;

LAB107:
LAB101:    goto LAB26;

LAB22:    xsi_set_current_line(187, ng0);

LAB108:    xsi_set_current_line(188, ng0);
    t14 = (t0 + 5232);
    t18 = (t14 + 56U);
    t20 = *((char **)t18);
    t21 = ((char*)((ng2)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 4, t20, 4, t21, 4);
    t28 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t28, t16, 0, 0, 4, 0LL);
    xsi_set_current_line(189, ng0);
    t3 = (t0 + 5232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB110;

LAB109:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB110;

LAB113:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB112;

LAB111:    *((unsigned int *)t13) = 1;

LAB112:    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB114;

LAB115:
LAB116:    xsi_set_current_line(193, ng0);
    t3 = (t0 + 5232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t17 = (t9 ^ t10);
    t22 = (t8 | t17);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB121;

LAB118:    if (t25 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t13) = 1;

LAB121:    t20 = (t13 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(198, ng0);

LAB128:    xsi_set_current_line(200, ng0);
    t3 = (t0 + 5232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng11)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB130;

LAB129:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB130;

LAB133:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB131;

LAB132:    t20 = (t13 + 4);
    t6 = *((unsigned int *)t20);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB134;

LAB135:
LAB136:    xsi_set_current_line(204, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB138;

LAB139:
LAB124:    goto LAB26;

LAB28:    *((unsigned int *)t13) = 1;
    goto LAB31;

LAB30:    t5 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB31;

LAB32:    t12 = (t0 + 3392U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t12 = (t14 + 4);
    t25 = *((unsigned int *)t12);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t29 = (t27 & t26);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t12) != 0)
        goto LAB37;

LAB38:    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t16);
    t33 = (t31 | t32);
    *((unsigned int *)t19) = t33;
    t20 = (t13 + 4);
    t21 = (t16 + 4);
    t28 = (t19 + 4);
    t34 = *((unsigned int *)t20);
    t35 = *((unsigned int *)t21);
    t36 = (t34 | t35);
    *((unsigned int *)t28) = t36;
    t37 = *((unsigned int *)t28);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB34;

LAB35:    *((unsigned int *)t16) = 1;
    goto LAB38;

LAB37:    t18 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB38;

LAB39:    t39 = *((unsigned int *)t19);
    t40 = *((unsigned int *)t28);
    *((unsigned int *)t19) = (t39 | t40);
    t41 = (t13 + 4);
    t42 = (t16 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t13);
    t15 = (t45 & t44);
    t46 = *((unsigned int *)t42);
    t47 = (~(t46));
    t48 = *((unsigned int *)t16);
    t49 = (t48 & t47);
    t50 = (~(t15));
    t51 = (~(t49));
    t52 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t52 & t50);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t53 & t51);
    goto LAB41;

LAB42:    xsi_set_current_line(126, ng0);

LAB45:    xsi_set_current_line(127, ng0);
    t60 = (t0 + 3232U);
    t61 = *((char **)t60);
    t60 = (t0 + 5712);
    xsi_vlogvar_wait_assign_value(t60, t61, 0, 0, 1, 0LL);
    xsi_set_current_line(128, ng0);
    t3 = (t0 + 3392U);
    t4 = *((char **)t3);
    t3 = (t0 + 5872);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t3 = (t0 + 2592U);
    t4 = *((char **)t3);
    t3 = (t0 + 5392);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t12 = (t13 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t14);
    t9 = (t8 >> 0);
    *((unsigned int *)t12) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 255U);
    memset(t16, 0, 8);
    t18 = (t4 + 4);
    t20 = (t13 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t13);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t18);
    t26 = *((unsigned int *)t20);
    t27 = (t25 ^ t26);
    t29 = (t24 | t27);
    t30 = *((unsigned int *)t18);
    t31 = *((unsigned int *)t20);
    t32 = (t30 | t31);
    t33 = (~(t32));
    t34 = (t29 & t33);
    if (t34 != 0)
        goto LAB49;

LAB46:    if (t32 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t16) = 1;

LAB49:    t28 = (t16 + 4);
    t35 = *((unsigned int *)t28);
    t36 = (~(t35));
    t37 = *((unsigned int *)t16);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(137, ng0);

LAB58:    xsi_set_current_line(138, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4432);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(140, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB59;

LAB60:
LAB52:    goto LAB44;

LAB48:    t21 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(131, ng0);

LAB53:    xsi_set_current_line(132, ng0);
    t41 = ((char*)((ng2)));
    t42 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t42, t41, 0, 0, 1, 0LL);
    xsi_set_current_line(133, ng0);
    t3 = (t0 + 3392U);
    t4 = *((char **)t3);
    t3 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB54;

LAB55:    xsi_set_current_line(134, ng0);
    t3 = (t0 + 3232U);
    t4 = *((char **)t3);
    t3 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(135, ng0);
    t3 = (t0 + 2912U);
    t4 = *((char **)t3);
    t3 = (t0 + 2592U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 18, 18, 3U, t3, 2, t5, 8, t4, 8);
    t11 = (t0 + 5392);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 18, 0LL);
    goto LAB52;

LAB54:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB55;

LAB56:    xsi_vlogvar_wait_assign_value(t3, t4, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB57;

LAB59:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB60;

LAB62:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB63;

LAB67:    t18 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(150, ng0);

LAB72:    xsi_set_current_line(151, ng0);
    t21 = ((char*)((ng1)));
    t28 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t28, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(152, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB73;

LAB74:    goto LAB71;

LAB73:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB74;

LAB76:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB77;

LAB81:    t20 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB82;

LAB83:    xsi_set_current_line(163, ng0);

LAB86:    xsi_set_current_line(164, ng0);
    t28 = ((char*)((ng1)));
    t41 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t41, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(165, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(166, ng0);
    t3 = (t0 + 5712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(167, ng0);
    t3 = (t0 + 5872);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 5552);
    t12 = (t0 + 5552);
    t14 = (t12 + 72U);
    t18 = *((char **)t14);
    t20 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t13, t18, 2, t20, 32, 1);
    t21 = (t13 + 4);
    t6 = *((unsigned int *)t21);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB87;

LAB88:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 5712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t11 = (t0 + 5552);
    t12 = (t0 + 5552);
    t14 = (t12 + 72U);
    t18 = *((char **)t14);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t13, t18, 2, t20, 32, 1);
    t21 = (t13 + 4);
    t6 = *((unsigned int *)t21);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB89;

LAB90:    goto LAB85;

LAB87:    xsi_vlogvar_wait_assign_value(t11, t5, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB88;

LAB89:    xsi_vlogvar_wait_assign_value(t11, t5, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB90;

LAB92:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB93;

LAB97:    t18 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(177, ng0);

LAB102:    xsi_set_current_line(178, ng0);
    t21 = ((char*)((ng1)));
    t28 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t28, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(180, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB103;

LAB104:    goto LAB101;

LAB103:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB104;

LAB106:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB107;

LAB110:    t18 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB112;

LAB114:    xsi_set_current_line(189, ng0);

LAB117:    xsi_set_current_line(191, ng0);
    t21 = (t0 + 4112);
    t28 = (t21 + 56U);
    t41 = *((char **)t28);
    memset(t19, 0, 8);
    t42 = (t19 + 4);
    t54 = (t41 + 4);
    t17 = *((unsigned int *)t41);
    t22 = (t17 >> 1);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t54);
    t24 = (t23 >> 1);
    *((unsigned int *)t42) = t24;
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t25 & 127U);
    t26 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t26 & 127U);
    t60 = (t0 + 3552U);
    t61 = *((char **)t60);
    xsi_vlogtype_concat(t16, 8, 8, 2U, t61, 1, t19, 7);
    t60 = (t0 + 4112);
    xsi_vlogvar_wait_assign_value(t60, t16, 0, 0, 8, 0LL);
    goto LAB116;

LAB120:    t18 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(193, ng0);

LAB125:    xsi_set_current_line(194, ng0);
    t21 = ((char*)((ng1)));
    t28 = (t0 + 5232);
    xsi_vlogvar_wait_assign_value(t28, t21, 0, 0, 4, 0LL);
    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(196, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 5552);
    t5 = (t0 + 5552);
    t11 = (t5 + 72U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t13, t12, 2, t14, 32, 1);
    t18 = (t13 + 4);
    t6 = *((unsigned int *)t18);
    t15 = (!(t6));
    if (t15 == 1)
        goto LAB126;

LAB127:    goto LAB124;

LAB126:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB127;

LAB130:    t18 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB132;

LAB131:    *((unsigned int *)t13) = 1;
    goto LAB132;

LAB134:    xsi_set_current_line(200, ng0);

LAB137:    xsi_set_current_line(201, ng0);
    t21 = ((char*)((ng2)));
    t28 = (t0 + 4752);
    xsi_vlogvar_wait_assign_value(t28, t21, 0, 0, 1, 0LL);
    xsi_set_current_line(202, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB136;

LAB138:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB139;

LAB141:    xsi_vlogvar_wait_assign_value(t4, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB142;

}


extern void secureip_m_15316779411138263507_3882753359_init()
{
	static char *pe[] = {(void *)Cont_93_0,(void *)Always_95_1};
	xsi_register_didat("secureip_m_15316779411138263507_3882753359", "isim/tb_FBCtl_isim_beh.exe.sim/secureip/m_15316779411138263507_3882753359.didat");
	xsi_register_executes(pe);
}
