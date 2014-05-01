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
extern char *STD_STANDARD;
static const char *ng1 = "Function logb2 ended without a return statement";
static const char *ng2 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ram/fifo/ipcore_dir/mig_39_2/example_design/rtl/traffic_gen/cmd_prbs_gen.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


int work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(char *t1, int t2)
{
    char t3[248];
    char t4[8];
    char t8[8];
    char t14[8];
    int t0;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    unsigned char t23;
    int t24;
    int t25;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 384);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    xsi_type_set_default_value(t6, t8, 0);
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t3 + 124U);
    t12 = ((STD_STANDARD) + 384);
    t13 = (t11 + 88U);
    *((char **)t13) = t12;
    t15 = (t11 + 56U);
    *((char **)t15) = t14;
    *((int *)t14) = 1;
    t16 = (t11 + 80U);
    *((unsigned int *)t16) = 4U;
    t17 = (t4 + 4U);
    *((int *)t17) = t2;
    t18 = (t5 + 56U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    *((int *)t18) = t2;
    t20 = 0;
    t21 = 31;

LAB2:    if (t20 <= t21)
        goto LAB3;

LAB5:    xsi_error(ng1);
    t0 = 0;

LAB1:    return t0;
LAB3:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t22 = *((int *)t7);
    t23 = (t22 == 1);
    if (t23 != 0)
        goto LAB6;

LAB8:
LAB7:    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t22 = *((int *)t7);
    t24 = (t22 / 2);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t24;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t22 = *((int *)t7);
    t24 = (t22 + 1);
    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t24;

LAB4:    if (t20 == t21)
        goto LAB5;

LAB10:    t22 = (t20 + 1);
    t20 = t22;
    goto LAB2;

LAB6:    t6 = (t11 + 56U);
    t9 = *((char **)t6);
    t24 = *((int *)t9);
    t25 = (t24 + 1);
    t6 = (t11 + 56U);
    t10 = *((char **)t6);
    t6 = (t10 + 0);
    *((int *)t6) = t25;
    t6 = (t11 + 56U);
    t7 = *((char **)t6);
    t22 = *((int *)t7);
    t0 = t22;
    goto LAB1;

LAB9:    goto LAB7;

}

static void work_a_0681005601_2128832208_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(124, ng2);

LAB3:    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t1, 0, 32);
    t3 = (t0 + 6096);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0681005601_2128832208_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(159, ng2);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5984);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(160, ng2);
    t4 = (t0 + 1456U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1616U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(161, ng2);
    t4 = (t0 + 1776U);
    t11 = *((char **)t4);
    t4 = (t0 + 6160);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 32U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(164, ng2);
    t2 = (t0 + 2416U);
    t5 = *((char **)t2);
    t16 = (32 - 31);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t2 = (t5 + t18);
    t8 = (t0 + 6160);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 24U);
    xsi_driver_first_trans_delta(t8, 0U, 24U, 0LL);
    xsi_set_current_line(165, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t19 = (32 - 32);
    t16 = (t19 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2416U);
    t8 = *((char **)t5);
    t20 = (7 - 32);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t5 = (t8 + t23);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t1, t3);
    t11 = (t0 + 6160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t11, 24U, 1, 0LL);
    xsi_set_current_line(166, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t19 = (32 - 32);
    t16 = (t19 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2416U);
    t8 = *((char **)t5);
    t20 = (6 - 32);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t5 = (t8 + t23);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t1, t3);
    t11 = (t0 + 6160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t11, 25U, 1, 0LL);
    xsi_set_current_line(168, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t16 = (32 - 5);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t5 = (t0 + 6160);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 3U);
    xsi_driver_first_trans_delta(t5, 26U, 3U, 0LL);
    xsi_set_current_line(169, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t19 = (32 - 32);
    t16 = (t19 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2416U);
    t8 = *((char **)t5);
    t20 = (2 - 32);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t5 = (t8 + t23);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t1, t3);
    t11 = (t0 + 6160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t6;
    xsi_driver_first_trans_delta(t11, 29U, 1, 0LL);
    xsi_set_current_line(170, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t19 = (1 - 32);
    t16 = (t19 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 6160);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t5, 30U, 1, 0LL);
    xsi_set_current_line(172, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t19 = (32 - 32);
    t16 = (t19 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t2 = (t4 + t18);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 6160);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t5, 31U, 1, 0LL);
    goto LAB9;

}

static void work_a_0681005601_2128832208_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned char t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned char t36;
    char *t37;
    char *t38;
    int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned char t46;
    unsigned char t47;
    char *t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;

LAB0:    xsi_set_current_line(182, ng2);
    t1 = (t0 + 12371);
    t3 = (t0 + 12379);
    t5 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t5 = 0;

LAB7:    if (t5 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(194, ng2);
    t9 = (32 - 1);
    t10 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t11 = (t10 - 4);
    t1 = (t0 + 12523);
    *((int *)t1) = t11;
    t2 = (t0 + 12527);
    *((int *)t2) = t9;
    t14 = t11;
    t15 = t9;

LAB21:    if (t14 <= t15)
        goto LAB22;

LAB24:    xsi_set_current_line(203, ng2);
    t9 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t10 = (0 - t9);
    t6 = (t10 * -1);
    t6 = (t6 + 1);
    t21 = (1U * t6);
    t1 = xsi_get_transient_memory(t21);
    memset(t1, 0, t21);
    t2 = t1;
    memset(t2, (unsigned char)2, t21);
    t11 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t22 = (31 - t11);
    t23 = (1U * t22);
    t32 = (0U + t23);
    t3 = (t0 + 6224);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t14 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t15 = (0 - t14);
    t33 = (t15 * -1);
    t33 = (t33 + 1);
    t34 = (1U * t33);
    memcpy(t12, t1, t34);
    t19 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t20 = (0 - t19);
    t42 = (t20 * -1);
    t42 = (t42 + 1);
    t43 = (1U * t42);
    xsi_driver_first_trans_delta(t3, t32, t43, 0LL);

LAB3:    t1 = (t0 + 6000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(183, ng2);
    t9 = (32 - 1);
    t10 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t11 = (t10 + 1);
    t12 = (t0 + 12387);
    *((int *)t12) = t11;
    t13 = (t0 + 12391);
    *((int *)t13) = t9;
    t14 = t11;
    t15 = t9;

LAB11:    if (t14 <= t15)
        goto LAB12;

LAB14:    xsi_set_current_line(192, ng2);
    t9 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t10 = (0 - t9);
    t6 = (t10 * -1);
    t6 = (t6 + 1);
    t21 = (1U * t6);
    t1 = xsi_get_transient_memory(t21);
    memset(t1, 0, t21);
    t2 = t1;
    memset(t2, (unsigned char)2, t21);
    t11 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t22 = (31 - t11);
    t23 = (1U * t22);
    t32 = (0U + t23);
    t3 = (t0 + 6224);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t14 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t15 = (0 - t14);
    t33 = (t15 * -1);
    t33 = (t33 + 1);
    t34 = (1U * t33);
    memcpy(t12, t1, t34);
    t19 = work_a_0681005601_2128832208_sub_1536215996542367737_2884140613(t0, 32);
    t20 = (0 - t19);
    t42 = (t20 * -1);
    t42 = (t42 + 1);
    t43 = (1U * t42);
    xsi_driver_first_trans_delta(t3, t32, t43, 0LL);
    goto LAB3;

LAB5:    t6 = 0;

LAB8:    if (t6 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t7 = (t1 + t6);
    t8 = (t3 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB6;

LAB10:    t6 = (t6 + 1);
    goto LAB8;

LAB12:    xsi_set_current_line(184, ng2);
    t16 = (t0 + 12395);
    t18 = (t0 + 12387);
    t19 = *((int *)t18);
    t20 = (t19 - 31);
    t21 = (t20 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, *((int *)t18));
    t22 = (1U * t21);
    t23 = (0 + t22);
    t24 = (t16 + t23);
    t25 = *((unsigned char *)t24);
    t26 = (t25 == (unsigned char)3);
    if (t26 != 0)
        goto LAB15;

LAB17:    t1 = (t0 + 12459);
    t3 = (t0 + 12387);
    t9 = *((int *)t3);
    t10 = (t9 - 31);
    t6 = (t10 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, *((int *)t3));
    t21 = (1U * t6);
    t22 = (0 + t21);
    t4 = (t1 + t22);
    t5 = *((unsigned char *)t4);
    t25 = (t5 == (unsigned char)3);
    if (t25 != 0)
        goto LAB18;

LAB19:    xsi_set_current_line(189, ng2);
    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    t1 = (t0 + 12387);
    t9 = *((int *)t1);
    t10 = (t9 + 1);
    t11 = (t10 - 32);
    t6 = (t11 * -1);
    xsi_vhdl_check_range_of_index(32, 1, -1, t10);
    t21 = (1U * t6);
    t22 = (0 + t21);
    t3 = (t2 + t22);
    t5 = *((unsigned char *)t3);
    t4 = (t0 + 12387);
    t19 = *((int *)t4);
    t20 = (t19 - 31);
    t23 = (t20 * -1);
    t32 = (1 * t23);
    t33 = (0U + t32);
    t7 = (t0 + 6224);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = t5;
    xsi_driver_first_trans_delta(t7, t33, 1, 0LL);

LAB16:
LAB13:    t1 = (t0 + 12387);
    t14 = *((int *)t1);
    t2 = (t0 + 12391);
    t15 = *((int *)t2);
    if (t14 == t15)
        goto LAB14;

LAB20:    t9 = (t14 + 1);
    t14 = t9;
    t3 = (t0 + 12387);
    *((int *)t3) = t14;
    goto LAB11;

LAB15:    xsi_set_current_line(185, ng2);
    t27 = (t0 + 12427);
    t29 = (t0 + 12387);
    t30 = *((int *)t29);
    t31 = (t30 - 31);
    t32 = (t31 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, *((int *)t29));
    t33 = (1U * t32);
    t34 = (0 + t33);
    t35 = (t27 + t34);
    t36 = *((unsigned char *)t35);
    t37 = (t0 + 2416U);
    t38 = *((char **)t37);
    t37 = (t0 + 12387);
    t39 = *((int *)t37);
    t40 = (t39 + 1);
    t41 = (t40 - 32);
    t42 = (t41 * -1);
    xsi_vhdl_check_range_of_index(32, 1, -1, t40);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t45 = (t38 + t44);
    t46 = *((unsigned char *)t45);
    t47 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t36, t46);
    t48 = (t0 + 12387);
    t49 = *((int *)t48);
    t50 = (t49 - 31);
    t51 = (t50 * -1);
    t52 = (1 * t51);
    t53 = (0U + t52);
    t54 = (t0 + 6224);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    *((unsigned char *)t58) = t47;
    xsi_driver_first_trans_delta(t54, t53, 1, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(187, ng2);
    t7 = (t0 + 12491);
    t12 = (t0 + 12387);
    t11 = *((int *)t12);
    t19 = (t11 - 31);
    t23 = (t19 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, *((int *)t12));
    t32 = (1U * t23);
    t33 = (0 + t32);
    t13 = (t7 + t33);
    t26 = *((unsigned char *)t13);
    t16 = (t0 + 2416U);
    t17 = *((char **)t16);
    t16 = (t0 + 12387);
    t20 = *((int *)t16);
    t30 = (t20 + 1);
    t31 = (t30 - 32);
    t34 = (t31 * -1);
    xsi_vhdl_check_range_of_index(32, 1, -1, t30);
    t42 = (1U * t34);
    t43 = (0 + t42);
    t18 = (t17 + t43);
    t36 = *((unsigned char *)t18);
    t46 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t26, t36);
    t24 = (t0 + 12387);
    t39 = *((int *)t24);
    t40 = (t39 - 31);
    t44 = (t40 * -1);
    t51 = (1 * t44);
    t52 = (0U + t51);
    t27 = (t0 + 6224);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t35 = (t29 + 56U);
    t37 = *((char **)t35);
    *((unsigned char *)t37) = t46;
    xsi_driver_first_trans_delta(t27, t52, 1, 0LL);
    goto LAB16;

LAB22:    xsi_set_current_line(195, ng2);
    t3 = (t0 + 12531);
    t7 = (t0 + 12523);
    t19 = *((int *)t7);
    t20 = (t19 - 31);
    t6 = (t20 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, *((int *)t7));
    t21 = (1U * t6);
    t22 = (0 + t21);
    t8 = (t3 + t22);
    t5 = *((unsigned char *)t8);
    t25 = (t5 == (unsigned char)3);
    if (t25 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 12595);
    t3 = (t0 + 12523);
    t9 = *((int *)t3);
    t10 = (t9 - 31);
    t6 = (t10 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, *((int *)t3));
    t21 = (1U * t6);
    t22 = (0 + t21);
    t4 = (t1 + t22);
    t5 = *((unsigned char *)t4);
    t25 = (t5 == (unsigned char)3);
    if (t25 != 0)
        goto LAB28;

LAB29:    xsi_set_current_line(200, ng2);
    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    t1 = (t0 + 12523);
    t9 = *((int *)t1);
    t10 = (t9 + 1);
    t11 = (t10 - 32);
    t6 = (t11 * -1);
    xsi_vhdl_check_range_of_index(32, 1, -1, t10);
    t21 = (1U * t6);
    t22 = (0 + t21);
    t3 = (t2 + t22);
    t5 = *((unsigned char *)t3);
    t4 = (t0 + 12523);
    t19 = *((int *)t4);
    t20 = (t19 - 31);
    t23 = (t20 * -1);
    t32 = (1 * t23);
    t33 = (0U + t32);
    t7 = (t0 + 6224);
    t8 = (t7 + 56U);
    t12 = *((char **)t8);
    t13 = (t12 + 56U);
    t16 = *((char **)t13);
    *((unsigned char *)t16) = t5;
    xsi_driver_first_trans_delta(t7, t33, 1, 0LL);

LAB26:
LAB23:    t1 = (t0 + 12523);
    t14 = *((int *)t1);
    t2 = (t0 + 12527);
    t15 = *((int *)t2);
    if (t14 == t15)
        goto LAB24;

LAB30:    t9 = (t14 + 1);
    t14 = t9;
    t3 = (t0 + 12523);
    *((int *)t3) = t14;
    goto LAB21;

LAB25:    xsi_set_current_line(196, ng2);
    t12 = (t0 + 12563);
    t16 = (t0 + 12523);
    t30 = *((int *)t16);
    t31 = (t30 - 31);
    t23 = (t31 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, *((int *)t16));
    t32 = (1U * t23);
    t33 = (0 + t32);
    t17 = (t12 + t33);
    t26 = *((unsigned char *)t17);
    t18 = (t0 + 2416U);
    t24 = *((char **)t18);
    t18 = (t0 + 12523);
    t39 = *((int *)t18);
    t40 = (t39 + 1);
    t41 = (t40 - 32);
    t34 = (t41 * -1);
    xsi_vhdl_check_range_of_index(32, 1, -1, t40);
    t42 = (1U * t34);
    t43 = (0 + t42);
    t27 = (t24 + t43);
    t36 = *((unsigned char *)t27);
    t46 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t26, t36);
    t28 = (t0 + 12523);
    t49 = *((int *)t28);
    t50 = (t49 - 31);
    t44 = (t50 * -1);
    t51 = (1 * t44);
    t52 = (0U + t51);
    t29 = (t0 + 6224);
    t35 = (t29 + 56U);
    t37 = *((char **)t35);
    t38 = (t37 + 56U);
    t45 = *((char **)t38);
    *((unsigned char *)t45) = t46;
    xsi_driver_first_trans_delta(t29, t52, 1, 0LL);
    goto LAB26;

LAB28:    xsi_set_current_line(198, ng2);
    t7 = (t0 + 12627);
    t12 = (t0 + 12523);
    t11 = *((int *)t12);
    t19 = (t11 - 31);
    t23 = (t19 * -1);
    xsi_vhdl_check_range_of_index(31, 0, -1, *((int *)t12));
    t32 = (1U * t23);
    t33 = (0 + t32);
    t13 = (t7 + t33);
    t26 = *((unsigned char *)t13);
    t16 = (t0 + 2416U);
    t17 = *((char **)t16);
    t16 = (t0 + 12523);
    t20 = *((int *)t16);
    t30 = (t20 + 1);
    t31 = (t30 - 32);
    t34 = (t31 * -1);
    xsi_vhdl_check_range_of_index(32, 1, -1, t30);
    t42 = (1U * t34);
    t43 = (0 + t42);
    t18 = (t17 + t43);
    t36 = *((unsigned char *)t18);
    t46 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t26, t36);
    t24 = (t0 + 12523);
    t39 = *((int *)t24);
    t40 = (t39 - 31);
    t44 = (t40 * -1);
    t51 = (1 * t44);
    t52 = (0U + t51);
    t27 = (t0 + 6224);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t35 = (t29 + 56U);
    t37 = *((char **)t35);
    *((unsigned char *)t37) = t46;
    xsi_driver_first_trans_delta(t27, t52, 1, 0LL);
    goto LAB26;

}

static void work_a_0681005601_2128832208_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(242, ng2);

LAB3:    t1 = (t0 + 2256U);
    t2 = *((char **)t1);
    t1 = (t0 + 6288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6016);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0681005601_2128832208_init()
{
	static char *pe[] = {(void *)work_a_0681005601_2128832208_p_0,(void *)work_a_0681005601_2128832208_p_1,(void *)work_a_0681005601_2128832208_p_2,(void *)work_a_0681005601_2128832208_p_3};
	static char *se[] = {(void *)work_a_0681005601_2128832208_sub_1536215996542367737_2884140613};
	xsi_register_didat("work_a_0681005601_2128832208", "isim/tb_example_top_isim_beh.exe.sim/work/a_0681005601_2128832208.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
