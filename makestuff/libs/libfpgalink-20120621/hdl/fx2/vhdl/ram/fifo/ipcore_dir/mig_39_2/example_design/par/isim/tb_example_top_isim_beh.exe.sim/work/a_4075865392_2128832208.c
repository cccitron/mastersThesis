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
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


int work_a_4075865392_2128832208_sub_1536215996542367737_2884140613(char *t1, int t2)
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

static void work_a_4075865392_2128832208_p_0(char *t0)
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

static void work_a_4075865392_2128832208_p_1(char *t0)
{
    char t18[16];
    char t20[16];
    char t25[16];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t26;
    int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;

LAB0:    xsi_set_current_line(216, ng2);
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
LAB2:    xsi_set_current_line(217, ng2);
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
        goto LAB13;

LAB14:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(218, ng2);
    t4 = (t0 + 12265);
    t12 = (t0 + 1776U);
    t13 = *((char **)t12);
    t14 = (14 - 14);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t12 = (t13 + t16);
    t19 = ((IEEE_P_2592010699) + 4000);
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 4;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (4 - 0);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t22 = (t25 + 0U);
    t26 = (t22 + 0U);
    *((int *)t26) = 14;
    t26 = (t22 + 4U);
    *((int *)t26) = 0;
    t26 = (t22 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - 14);
    t24 = (t27 * -1);
    t24 = (t24 + 1);
    t26 = (t22 + 12U);
    *((unsigned int *)t26) = t24;
    t17 = xsi_base_array_concat(t17, t18, t19, (char)97, t4, t20, (char)97, t12, t25, (char)101);
    t24 = (5U + 15U);
    t28 = (20U != t24);
    if (t28 == 1)
        goto LAB11;

LAB12:    t26 = (t0 + 6160);
    t29 = (t26 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 20U);
    xsi_driver_first_trans_fast(t26);
    goto LAB9;

LAB11:    xsi_size_not_matching(20U, t24, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(221, ng2);
    t2 = (t0 + 2416U);
    t5 = *((char **)t2);
    t23 = (19 - 20);
    t14 = (t23 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t5 + t16);
    t6 = *((unsigned char *)t2);
    t8 = (t0 + 6160);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t17 = *((char **)t13);
    *((unsigned char *)t17) = t6;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);
    xsi_set_current_line(223, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t23 = (18 - 20);
    t14 = (t23 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 6160);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(225, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t23 = (20 - 20);
    t14 = (t23 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2416U);
    t8 = *((char **)t5);
    t27 = (17 - 20);
    t24 = (t27 * -1);
    t33 = (1U * t24);
    t34 = (0 + t33);
    t5 = (t8 + t34);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t1, t3);
    t11 = (t0 + 6160);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t17 = (t13 + 56U);
    t19 = *((char **)t17);
    *((unsigned char *)t19) = t6;
    xsi_driver_first_trans_delta(t11, 2U, 1, 0LL);
    xsi_set_current_line(226, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t14 = (20 - 16);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t5 = (t0 + 6160);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_delta(t5, 3U, 16U, 0LL);
    xsi_set_current_line(228, ng2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t23 = (20 - 20);
    t14 = (t23 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t2 = (t4 + t16);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 6160);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t1;
    xsi_driver_first_trans_delta(t5, 19U, 1, 0LL);
    goto LAB9;

}

static void work_a_4075865392_2128832208_p_2(char *t0)
{
    char t13[16];
    char t15[16];
    char t20[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    char *t21;
    int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(236, ng2);
    t1 = (t0 + 2096U);
    t2 = *((char **)t1);
    t3 = (15 - 1);
    t4 = (31 - t3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 2416U);
    t8 = *((char **)t7);
    t9 = (20 - 6);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t7 = (t8 + t11);
    t14 = ((IEEE_P_2592010699) + 4000);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 14;
    t17 = (t16 + 4U);
    *((int *)t17) = 6;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (6 - 14);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t17 = (t20 + 0U);
    t21 = (t17 + 0U);
    *((int *)t21) = 6;
    t21 = (t17 + 4U);
    *((int *)t21) = 1;
    t21 = (t17 + 8U);
    *((int *)t21) = -1;
    t22 = (1 - 6);
    t19 = (t22 * -1);
    t19 = (t19 + 1);
    t21 = (t17 + 12U);
    *((unsigned int *)t21) = t19;
    t12 = xsi_base_array_concat(t12, t13, t14, (char)97, t1, t15, (char)97, t7, t20, (char)101);
    t19 = (9U + 6U);
    t23 = (15U != t19);
    if (t23 == 1)
        goto LAB2;

LAB3:    t21 = (t0 + 6224);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t12, 15U);
    xsi_driver_first_trans_fast(t21);
    t1 = (t0 + 6000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_size_not_matching(15U, t19, 0);
    goto LAB3;

}

static void work_a_4075865392_2128832208_p_3(char *t0)
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
    memcpy(t6, t2, 15U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6016);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4075865392_2128832208_init()
{
	static char *pe[] = {(void *)work_a_4075865392_2128832208_p_0,(void *)work_a_4075865392_2128832208_p_1,(void *)work_a_4075865392_2128832208_p_2,(void *)work_a_4075865392_2128832208_p_3};
	static char *se[] = {(void *)work_a_4075865392_2128832208_sub_1536215996542367737_2884140613};
	xsi_register_didat("work_a_4075865392_2128832208", "isim/tb_example_top_isim_beh.exe.sim/work/a_4075865392_2128832208.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
