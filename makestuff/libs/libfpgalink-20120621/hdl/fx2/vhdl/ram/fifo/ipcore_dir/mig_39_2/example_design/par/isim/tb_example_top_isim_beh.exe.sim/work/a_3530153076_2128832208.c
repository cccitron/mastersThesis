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
static const char *ng0 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ram/fifo/ipcore_dir/mig_39_2/example_design/rtl/traffic_gen/data_prbs_gen.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3530153076_2128832208_p_0(char *t0)
{
    char t24[16];
    char t25[16];
    char t32[16];
    char t39[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    char *t37;
    char *t40;
    char *t41;
    int t42;
    char *t43;
    unsigned int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4816);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 1672U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB14;

LAB15:    t9 = (unsigned char)0;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t20 = (t0 + 1352U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)3);
    t8 = t23;

LAB13:    if (t8 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB25;

LAB26:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(108, ng0);
    t20 = (t0 + 1832U);
    t26 = *((char **)t20);
    t20 = (t0 + 9320U);
    t27 = (t0 + 1512U);
    t28 = *((char **)t27);
    t29 = (31 - 31);
    t30 = (t29 * 1U);
    t31 = (0 + t30);
    t27 = (t28 + t31);
    t33 = (t32 + 0U);
    t34 = (t33 + 0U);
    *((int *)t34) = 31;
    t34 = (t33 + 4U);
    *((int *)t34) = 0;
    t34 = (t33 + 8U);
    *((int *)t34) = -1;
    t35 = (0 - 31);
    t36 = (t35 * -1);
    t36 = (t36 + 1);
    t34 = (t33 + 12U);
    *((unsigned int *)t34) = t36;
    t34 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t25, t26, t20, t27, t32);
    t37 = (t0 + 9550);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 0;
    t41 = (t40 + 4U);
    *((int *)t41) = 31;
    t41 = (t40 + 8U);
    *((int *)t41) = 1;
    t42 = (31 - 0);
    t36 = (t42 * 1);
    t36 = (t36 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t36;
    t41 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t24, t34, t25, t37, t39);
    t43 = (t24 + 12U);
    t36 = *((unsigned int *)t43);
    t44 = (1U * t36);
    t45 = (32U != t44);
    if (t45 == 1)
        goto LAB23;

LAB24:    t46 = (t0 + 4928);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    memcpy(t50, t41, 32U);
    xsi_driver_first_trans_fast(t46);
    goto LAB9;

LAB11:    t8 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (t0 + 9540);
    t14 = (t0 + 9545);
    t16 = 1;
    if (5U == 5U)
        goto LAB17;

LAB18:    t16 = 0;

LAB19:    t9 = t16;
    goto LAB16;

LAB17:    t17 = 0;

LAB20:    if (t17 < 5U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t18 = (t4 + t17);
    t19 = (t14 + t17);
    if (*((unsigned char *)t18) != *((unsigned char *)t19))
        goto LAB18;

LAB22:    t17 = (t17 + 1);
    goto LAB20;

LAB23:    xsi_size_not_matching(32U, t44, 0);
    goto LAB24;

LAB25:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t17 = (32 - 31);
    t29 = (t17 * 1U);
    t30 = (0 + t29);
    t2 = (t5 + t30);
    t10 = (t0 + 4928);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    memcpy(t18, t2, 24U);
    xsi_driver_first_trans_delta(t10, 0U, 24U, 0LL);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t35 = (32 - 32);
    t17 = (t35 * -1);
    t29 = (1U * t17);
    t30 = (0 + t29);
    t2 = (t4 + t30);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2312U);
    t10 = *((char **)t5);
    t42 = (7 - 32);
    t31 = (t42 * -1);
    t36 = (1U * t31);
    t44 = (0 + t36);
    t5 = (t10 + t44);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t1, t3);
    t13 = (t0 + 4928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t6;
    xsi_driver_first_trans_delta(t13, 24U, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t35 = (32 - 32);
    t17 = (t35 * -1);
    t29 = (1U * t17);
    t30 = (0 + t29);
    t2 = (t4 + t30);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2312U);
    t10 = *((char **)t5);
    t42 = (6 - 32);
    t31 = (t42 * -1);
    t36 = (1U * t31);
    t44 = (0 + t36);
    t5 = (t10 + t44);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t1, t3);
    t13 = (t0 + 4928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t6;
    xsi_driver_first_trans_delta(t13, 25U, 1, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t17 = (32 - 5);
    t29 = (t17 * 1U);
    t30 = (0 + t29);
    t2 = (t4 + t30);
    t5 = (t0 + 4928);
    t10 = (t5 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 3U);
    xsi_driver_first_trans_delta(t5, 26U, 3U, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t35 = (32 - 32);
    t17 = (t35 * -1);
    t29 = (1U * t17);
    t30 = (0 + t29);
    t2 = (t4 + t30);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 2312U);
    t10 = *((char **)t5);
    t42 = (2 - 32);
    t31 = (t42 * -1);
    t36 = (1U * t31);
    t44 = (0 + t36);
    t5 = (t10 + t44);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t1, t3);
    t13 = (t0 + 4928);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t6;
    xsi_driver_first_trans_delta(t13, 29U, 1, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t35 = (1 - 32);
    t17 = (t35 * -1);
    t29 = (1U * t17);
    t30 = (0 + t29);
    t2 = (t4 + t30);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 4928);
    t10 = (t5 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_delta(t5, 30U, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t35 = (32 - 32);
    t17 = (t35 * -1);
    t29 = (1U * t17);
    t30 = (0 + t29);
    t2 = (t4 + t30);
    t1 = *((unsigned char *)t2);
    t5 = (t0 + 4928);
    t10 = (t5 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t1;
    xsi_driver_first_trans_delta(t5, 31U, 1, 0LL);
    goto LAB9;

}

static void work_a_3530153076_2128832208_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = (32 - 32);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 4992);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_fast(t6);
    t1 = (t0 + 4832);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_3530153076_2128832208_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(131, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 5056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4848);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3530153076_2128832208_init()
{
	static char *pe[] = {(void *)work_a_3530153076_2128832208_p_0,(void *)work_a_3530153076_2128832208_p_1,(void *)work_a_3530153076_2128832208_p_2};
	xsi_register_didat("work_a_3530153076_2128832208", "isim/tb_example_top_isim_beh.exe.sim/work/a_3530153076_2128832208.didat");
	xsi_register_executes(pe);
}
