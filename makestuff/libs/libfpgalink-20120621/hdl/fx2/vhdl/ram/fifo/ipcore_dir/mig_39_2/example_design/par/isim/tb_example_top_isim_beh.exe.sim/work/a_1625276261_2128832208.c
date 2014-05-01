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
static const char *ng0 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ram/fifo/ipcore_dir/mig_39_2/example_design/rtl/traffic_gen/tg_status.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_1625276261_2128832208_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(100, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5592);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5480);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1625276261_2128832208_p_1(char *t0)
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

LAB0:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5496);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 1512U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 5656);
    t10 = (t4 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_1625276261_2128832208_p_2(char *t0)
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
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5512);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(114, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (t0 + 1352U);
    t10 = *((char **)t4);
    t11 = *((unsigned char *)t10);
    t12 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t9, t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 3112U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t7 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t1, t6);
    t2 = (t0 + 3272U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t11 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t9);
    t12 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t7, t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 10843);
    t1 = (2U != 2U);
    if (t1 == 1)
        goto LAB14;

LAB15:    t5 = (t0 + 5720);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 2U);
    xsi_driver_first_trans_delta(t5, 88U, 2U, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 10845);
    t1 = (21U != 21U);
    if (t1 == 1)
        goto LAB16;

LAB17:    t5 = (t0 + 5720);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 21U);
    xsi_driver_first_trans_delta(t5, 64U, 21U, 0LL);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(116, ng0);
    t4 = xsi_get_transient_memory(128U);
    memset(t4, 0, 128U);
    t14 = t4;
    memset(t14, (unsigned char)2, 128U);
    t15 = (t0 + 5720);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 128U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5784);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1992U);
    t10 = *((char **)t2);
    t2 = (t0 + 5720);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t10, 32U);
    xsi_driver_first_trans_delta(t2, 96U, 32U, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 5720);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t4, 6U);
    xsi_driver_first_trans_delta(t2, 90U, 6U, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5720);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t14 = *((char **)t10);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_delta(t2, 87U, 1, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5720);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t14 = *((char **)t10);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_delta(t2, 86U, 1, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5720);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t14 = *((char **)t10);
    *((unsigned char *)t14) = t1;
    xsi_driver_first_trans_delta(t2, 85U, 1, 0LL);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5784);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5720);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t4, 32U);
    xsi_driver_first_trans_delta(t2, 32U, 32U, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 5720);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t14 = *((char **)t10);
    memcpy(t14, t4, 32U);
    xsi_driver_first_trans_delta(t2, 0U, 32U, 0LL);
    goto LAB12;

LAB14:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(21U, 21U, 0);
    goto LAB17;

}


extern void work_a_1625276261_2128832208_init()
{
	static char *pe[] = {(void *)work_a_1625276261_2128832208_p_0,(void *)work_a_1625276261_2128832208_p_1,(void *)work_a_1625276261_2128832208_p_2};
	xsi_register_didat("work_a_1625276261_2128832208", "isim/tb_example_top_isim_beh.exe.sim/work/a_1625276261_2128832208.didat");
	xsi_register_executes(pe);
}
