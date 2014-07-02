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
extern char *IEEE_P_2592010699;
static const char *ng1 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ram/fifo/ipcore_dir/mig_39_2/example_design/rtl/traffic_gen/read_data_path.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_3620187407_sub_1306455576380142462_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


unsigned char work_a_3377204586_2128832208_sub_6253558502772567925_2884140613(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t9[8];
    unsigned char t0;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    char *t25;
    char *t26;
    unsigned char t27;
    int t28;
    char *t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    char *t38;
    char *t39;

LAB0:    t6 = (t4 + 4U);
    t7 = ((IEEE_P_2592010699) + 3312);
    t8 = (t6 + 88U);
    *((char **)t8) = t7;
    t10 = (t6 + 56U);
    *((char **)t10) = t9;
    *((unsigned char *)t9) = (unsigned char)2;
    t11 = (t6 + 80U);
    *((unsigned int *)t11) = 1U;
    t12 = (t5 + 4U);
    t13 = (t2 != 0);
    if (t13 == 1)
        goto LAB3;

LAB2:    t14 = (t5 + 12U);
    *((char **)t14) = t3;
    t15 = (t3 + 8U);
    t16 = *((int *)t15);
    t17 = (t3 + 4U);
    t18 = *((int *)t17);
    t19 = (t3 + 0U);
    t20 = *((int *)t19);
    t21 = t20;
    t22 = t18;

LAB4:    t23 = (t22 * t16);
    t24 = (t21 * t16);
    if (t24 <= t23)
        goto LAB5;

LAB7:    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t13 = *((unsigned char *)t8);
    t0 = t13;

LAB1:    return t0;
LAB3:    *((char **)t12) = t2;
    goto LAB2;

LAB5:    t25 = (t6 + 56U);
    t26 = *((char **)t25);
    t27 = *((unsigned char *)t26);
    t25 = (t3 + 0U);
    t28 = *((int *)t25);
    t29 = (t3 + 8U);
    t30 = *((int *)t29);
    t31 = (t21 - t28);
    t32 = (t31 * t30);
    t33 = (1U * t32);
    t34 = (0 + t33);
    t35 = (t2 + t34);
    t36 = *((unsigned char *)t35);
    t37 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t27, t36);
    t38 = (t6 + 56U);
    t39 = *((char **)t38);
    t38 = (t39 + 0);
    *((unsigned char *)t38) = t37;

LAB6:    if (t21 == t22)
        goto LAB7;

LAB8:    t18 = (t21 + t16);
    t21 = t18;
    goto LAB4;

LAB9:;
}

static void work_a_3377204586_2128832208_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(277, ng1);

LAB3:    t1 = (t0 + 12016U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 20888);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 20456);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(278, ng1);

LAB3:    t1 = (t0 + 12176U);
    t2 = *((char **)t1);
    t1 = (t0 + 20952);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 7U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20472);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_2(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(282, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20488);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(283, ng1);
    t4 = (t0 + 8816U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 21016);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(284, ng1);
    t2 = (t0 + 3696U);
    t4 = *((char **)t2);
    t2 = (t0 + 21080);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 32U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_3377204586_2128832208_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(288, ng1);

LAB3:    t1 = (t0 + 8656U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21144);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 20504);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_4(char *t0)
{
    char t20[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(291, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20520);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(292, ng1);
    t4 = (t0 + 1616U);
    t8 = *((char **)t4);
    t9 = (0 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8816U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)2);
    if (t7 == 1)
        goto LAB16;

LAB17:    t3 = (unsigned char)0;

LAB18:    if (t3 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 10256U);
    t8 = *((char **)t2);
    t2 = (t0 + 43288U);
    t15 = (t0 + 44036);
    t17 = (t20 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 7;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t9 = (7 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t10;
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t8, t2, t15, t20);
    t1 = t21;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1936U);
    t4 = *((char **)t2);
    t6 = *((unsigned char *)t4);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB24;

LAB25:    t3 = (unsigned char)0;

LAB26:    if (t3 == 1)
        goto LAB21;

LAB22:    t17 = (t0 + 8816U);
    t18 = *((char **)t17);
    t14 = *((unsigned char *)t18);
    t21 = (t14 == (unsigned char)3);
    t1 = t21;

LAB23:    if (t1 != 0)
        goto LAB19;

LAB20:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(293, ng1);
    t15 = (t0 + 21208);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);
    goto LAB9;

LAB11:    xsi_set_current_line(295, ng1);
    t18 = (t0 + 21208);
    t19 = (t18 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)2;
    xsi_driver_first_trans_fast(t18);
    goto LAB9;

LAB13:    t1 = (unsigned char)1;
    goto LAB15;

LAB16:    t2 = (t0 + 8976U);
    t5 = *((char **)t2);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB18;

LAB19:    xsi_set_current_line(297, ng1);
    t17 = (t0 + 21208);
    t19 = (t17 + 56U);
    t22 = *((char **)t19);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = (unsigned char)3;
    xsi_driver_first_trans_fast(t17);
    goto LAB9;

LAB21:    t1 = (unsigned char)1;
    goto LAB23;

LAB24:    t2 = (t0 + 3216U);
    t5 = *((char **)t2);
    t2 = (t0 + 42952U);
    t8 = (t0 + 44044);
    t16 = (t20 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 5;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t9 = (5 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t13 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t5, t2, t8, t20);
    t3 = t13;
    goto LAB26;

}

static void work_a_3377204586_2128832208_p_5(char *t0)
{
    char t22[16];
    char t23[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(304, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20536);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(305, ng1);
    t4 = (t0 + 1616U);
    t8 = *((char **)t4);
    t9 = (0 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 8816U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)2);
    if (t6 == 1)
        goto LAB13;

LAB14:    t1 = (unsigned char)0;

LAB15:    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 8656U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB16;

LAB17:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(306, ng1);
    t15 = (t0 + 44050);
    t17 = (t0 + 21272);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t15, 8U);
    xsi_driver_first_trans_fast(t17);
    goto LAB9;

LAB11:    xsi_set_current_line(308, ng1);
    t2 = (t0 + 44058);
    t15 = (t0 + 21272);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 8U);
    xsi_driver_first_trans_fast(t15);
    goto LAB9;

LAB13:    t2 = (t0 + 8976U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t13 = (t7 == (unsigned char)3);
    t1 = t13;
    goto LAB15;

LAB16:    xsi_set_current_line(310, ng1);
    t2 = (t0 + 10256U);
    t5 = *((char **)t2);
    t2 = (t0 + 43288U);
    t8 = (t0 + 44066);
    t16 = (t23 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 0;
    t17 = (t16 + 4U);
    *((int *)t17) = 7;
    t17 = (t16 + 8U);
    *((int *)t17) = 1;
    t9 = (7 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t10;
    t17 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t22, t5, t2, t8, t23);
    t18 = (t22 + 12U);
    t10 = *((unsigned int *)t18);
    t11 = (1U * t10);
    t6 = (8U != t11);
    if (t6 == 1)
        goto LAB18;

LAB19:    t19 = (t0 + 21272);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t24 = (t21 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t17, 8U);
    xsi_driver_first_trans_fast(t19);
    goto LAB9;

LAB18:    xsi_size_not_matching(8U, t11, 0);
    goto LAB19;

}

static void work_a_3377204586_2128832208_p_6(char *t0)
{
    char t20[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(317, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20552);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(318, ng1);
    t4 = (t0 + 1616U);
    t8 = *((char **)t4);
    t9 = (0 - 9);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    if (t14 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 10256U);
    t4 = *((char **)t2);
    t2 = (t0 + 43288U);
    t5 = (t0 + 44074);
    t15 = (t20 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t10;
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t4, t2, t5, t20);
    if (t1 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 5616U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t2 = (t0 + 5776U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t6);
    t13 = (t7 == (unsigned char)3);
    if (t13 == 1)
        goto LAB15;

LAB16:    t1 = (unsigned char)0;

LAB17:    if (t1 != 0)
        goto LAB13;

LAB14:    t2 = (t0 + 8816U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 7696U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t1, t3);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB18;

LAB19:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(319, ng1);
    t15 = (t0 + 21336);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast(t15);
    goto LAB9;

LAB11:    xsi_set_current_line(321, ng1);
    t16 = (t0 + 21336);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    *((unsigned char *)t21) = (unsigned char)2;
    xsi_driver_first_trans_fast(t16);
    goto LAB9;

LAB13:    xsi_set_current_line(323, ng1);
    t18 = (t0 + 21336);
    t19 = (t18 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t18);
    goto LAB9;

LAB15:    t2 = (t0 + 6096U);
    t8 = *((char **)t2);
    t2 = (t0 + 43112U);
    t15 = (t0 + 44082);
    t17 = (t20 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 5;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t9 = (5 - 0);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t10;
    t14 = ieee_std_logic_unsigned_greater_stdv_stdv(IEEE_P_3620187407, t8, t2, t15, t20);
    t1 = t14;
    goto LAB17;

LAB18:    xsi_set_current_line(325, ng1);
    t2 = (t0 + 21336);
    t8 = (t2 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_3377204586_2128832208_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(330, ng1);

LAB3:    t1 = (t0 + 7536U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21400);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 20568);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_8(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(417, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20584);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(419, ng1);
    t4 = (t0 + 7056U);
    t8 = *((char **)t4);
    t4 = (t0 + 21464);
    t9 = (t4 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 32U);
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_3377204586_2128832208_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(423, ng1);

LAB3:    t1 = (t0 + 9616U);
    t2 = *((char **)t1);
    t1 = (t0 + 21528);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20600);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_10(char *t0)
{
    char *t1;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t18;
    unsigned char t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(425, ng1);
    t1 = (t0 + 44088);
    t3 = (t0 + 44096);
    t5 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t5 = 0;

LAB7:    if (t5 != 0)
        goto LAB3;

LAB4:    t16 = (t0 + 44104);
    t18 = (t0 + 44112);
    t20 = 1;
    if (8U == 7U)
        goto LAB16;

LAB17:    t20 = 0;

LAB18:    if (t20 == 1)
        goto LAB13;

LAB14:    t15 = (unsigned char)0;

LAB15:    if (t15 != 0)
        goto LAB11;

LAB12:
LAB22:    t31 = (t0 + 3696U);
    t32 = *((char **)t31);
    t31 = (t0 + 21592);
    t33 = (t31 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t32, 32U);
    xsi_driver_first_trans_fast(t31);

LAB2:    t37 = (t0 + 20616);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 8496U);
    t10 = *((char **)t9);
    t9 = (t0 + 21592);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

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

LAB11:    t25 = (t0 + 9296U);
    t26 = *((char **)t25);
    t25 = (t0 + 21592);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t26, 32U);
    xsi_driver_first_trans_fast(t25);
    goto LAB2;

LAB13:    t24 = (4 == 4);
    t15 = t24;
    goto LAB15;

LAB16:    t21 = 0;

LAB19:    if (t21 < 8U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t22 = (t16 + t21);
    t23 = (t18 + t21);
    if (*((unsigned char *)t22) != *((unsigned char *)t23))
        goto LAB17;

LAB21:    t21 = (t21 + 1);
    goto LAB19;

LAB23:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_11(char *t0)
{
    char *t1;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t19;
    unsigned char t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(428, ng1);
    t1 = (t0 + 44119);
    t3 = (t0 + 44127);
    t5 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t5 = 0;

LAB7:    if (t5 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 44135);
    t19 = (t0 + 44143);
    t21 = 1;
    if (8U == 7U)
        goto LAB16;

LAB17:    t21 = 0;

LAB18:    if (t21 == 1)
        goto LAB13;

LAB14:    t16 = (unsigned char)0;

LAB15:    if (t16 != 0)
        goto LAB11;

LAB12:
LAB22:    t33 = (t0 + 3536U);
    t34 = *((char **)t33);
    t35 = *((unsigned char *)t34);
    t33 = (t0 + 21656);
    t36 = (t33 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t35;
    xsi_driver_first_trans_fast_port(t33);

LAB2:    t40 = (t0 + 20632);
    *((int *)t40) = 1;

LAB1:    return;
LAB3:    t9 = (t0 + 10096U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 21656);
    t12 = (t9 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t11;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

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

LAB11:    t26 = (t0 + 9136U);
    t27 = *((char **)t26);
    t28 = *((unsigned char *)t27);
    t26 = (t0 + 21656);
    t29 = (t26 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = t28;
    xsi_driver_first_trans_fast_port(t26);
    goto LAB2;

LAB13:    t25 = (4 == 4);
    t16 = t25;
    goto LAB15;

LAB16:    t22 = 0;

LAB19:    if (t22 < 8U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t23 = (t17 + t22);
    t24 = (t19 + t22);
    if (*((unsigned char *)t23) != *((unsigned char *)t24))
        goto LAB17;

LAB21:    t22 = (t22 + 1);
    goto LAB19;

LAB23:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(432, ng1);

LAB3:    t1 = (t0 + 8176U);
    t2 = *((char **)t1);
    t1 = (t0 + 21720);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20648);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(433, ng1);

LAB3:    t1 = (t0 + 5936U);
    t2 = *((char **)t1);
    t1 = (t0 + 21784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20664);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(434, ng1);

LAB3:    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    t1 = (t0 + 21848);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20680);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(443, ng1);

LAB3:    t1 = (t0 + 7856U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 21912);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 20696);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(444, ng1);

LAB3:    t1 = (t0 + 6416U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3536U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 21976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 20712);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_17(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(448, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20728);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(449, ng1);
    t4 = (t0 + 8336U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 22040);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_3377204586_2128832208_p_18(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(456, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20744);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(457, ng1);
    t4 = (t0 + 7856U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 22104);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_3377204586_2128832208_p_19(char *t0)
{
    char t17[16];
    char t27[16];
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
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(464, ng1);
    t2 = (t0 + 1256U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 20760);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(465, ng1);
    t4 = (t0 + 10096U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(472, ng1);
    t2 = (t0 + 22168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    xsi_set_current_line(474, ng1);
    t2 = (t0 + 10096U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(481, ng1);
    t2 = (t0 + 22232);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB15:    xsi_set_current_line(483, ng1);
    t2 = (t0 + 9776U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 9936U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t1, t3);
    t2 = (t0 + 22296);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t18 = (t11 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(485, ng1);
    t2 = (t0 + 6896U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB3;

LAB5:    t4 = (t0 + 1296U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(466, ng1);
    t4 = (t0 + 8496U);
    t11 = *((char **)t4);
    t12 = (32 / 2);
    t13 = (t12 - 1);
    t14 = (31 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t4 = (t11 + t16);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 15;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 15);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t0 + 8176U);
    t22 = *((char **)t19);
    t23 = (32 / 2);
    t24 = (t23 - 1);
    t21 = (31 - t24);
    t25 = (t21 * 1U);
    t26 = (0 + t25);
    t19 = (t22 + t26);
    t28 = (t27 + 0U);
    t29 = (t28 + 0U);
    *((int *)t29) = 15;
    t29 = (t28 + 4U);
    *((int *)t29) = 0;
    t29 = (t28 + 8U);
    *((int *)t29) = -1;
    t30 = (0 - 15);
    t31 = (t30 * -1);
    t31 = (t31 + 1);
    t29 = (t28 + 12U);
    *((unsigned int *)t29) = t31;
    t32 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t4, t17, t19, t27);
    if (t32 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(469, ng1);
    t2 = (t0 + 22168);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(467, ng1);
    t29 = (t0 + 22168);
    t33 = (t29 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)3;
    xsi_driver_first_trans_fast(t29);
    goto LAB12;

LAB14:    xsi_set_current_line(475, ng1);
    t2 = (t0 + 8496U);
    t5 = *((char **)t2);
    t12 = (32 - 1);
    t14 = (31 - t12);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t2 = (t5 + t16);
    t8 = (t17 + 0U);
    t11 = (t8 + 0U);
    *((int *)t11) = 31;
    t11 = (t8 + 4U);
    *((int *)t11) = 16;
    t11 = (t8 + 8U);
    *((int *)t11) = -1;
    t13 = (16 - 31);
    t21 = (t13 * -1);
    t21 = (t21 + 1);
    t11 = (t8 + 12U);
    *((unsigned int *)t11) = t21;
    t11 = (t0 + 8176U);
    t18 = *((char **)t11);
    t20 = (32 - 1);
    t21 = (31 - t20);
    t25 = (t21 * 1U);
    t26 = (0 + t25);
    t11 = (t18 + t26);
    t19 = (t27 + 0U);
    t22 = (t19 + 0U);
    *((int *)t22) = 31;
    t22 = (t19 + 4U);
    *((int *)t22) = 16;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (16 - 31);
    t31 = (t23 * -1);
    t31 = (t31 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t31;
    t6 = ieee_p_3620187407_sub_1306455576380142462_3965413181(IEEE_P_3620187407, t2, t17, t11, t27);
    if (t6 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(478, ng1);
    t2 = (t0 + 22232);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(476, ng1);
    t22 = (t0 + 22232);
    t28 = (t22 + 56U);
    t29 = *((char **)t28);
    t33 = (t29 + 56U);
    t34 = *((char **)t33);
    *((unsigned char *)t34) = (unsigned char)3;
    xsi_driver_first_trans_fast(t22);
    goto LAB18;

LAB20:    xsi_set_current_line(486, ng1);
    t2 = (t0 + 44150);
    xsi_report(t2, 10U, 0);
    goto LAB21;

}

static void work_a_3377204586_2128832208_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(628, ng1);

LAB3:    t1 = (t0 + 11376U);
    t2 = *((char **)t1);
    t1 = (t0 + 22360);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20776);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(630, ng1);

LAB3:    t1 = (t0 + 10896U);
    t2 = *((char **)t1);
    t1 = (t0 + 22424);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 2U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 20792);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3377204586_2128832208_p_22(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(632, ng1);

LAB3:    t1 = (t0 + 6896U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 22488);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 20808);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3377204586_2128832208_init()
{
	static char *pe[] = {(void *)work_a_3377204586_2128832208_p_0,(void *)work_a_3377204586_2128832208_p_1,(void *)work_a_3377204586_2128832208_p_2,(void *)work_a_3377204586_2128832208_p_3,(void *)work_a_3377204586_2128832208_p_4,(void *)work_a_3377204586_2128832208_p_5,(void *)work_a_3377204586_2128832208_p_6,(void *)work_a_3377204586_2128832208_p_7,(void *)work_a_3377204586_2128832208_p_8,(void *)work_a_3377204586_2128832208_p_9,(void *)work_a_3377204586_2128832208_p_10,(void *)work_a_3377204586_2128832208_p_11,(void *)work_a_3377204586_2128832208_p_12,(void *)work_a_3377204586_2128832208_p_13,(void *)work_a_3377204586_2128832208_p_14,(void *)work_a_3377204586_2128832208_p_15,(void *)work_a_3377204586_2128832208_p_16,(void *)work_a_3377204586_2128832208_p_17,(void *)work_a_3377204586_2128832208_p_18,(void *)work_a_3377204586_2128832208_p_19,(void *)work_a_3377204586_2128832208_p_20,(void *)work_a_3377204586_2128832208_p_21,(void *)work_a_3377204586_2128832208_p_22};
	static char *se[] = {(void *)work_a_3377204586_2128832208_sub_6253558502772567925_2884140613};
	xsi_register_didat("work_a_3377204586_2128832208", "isim/tb_example_top_isim_beh.exe.sim/work/a_3377204586_2128832208.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
