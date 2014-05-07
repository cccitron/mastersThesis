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
static const char *ng0 = "/home/cccitron/mastersThesis/lab5_files/mem_internal/top_level.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0178362298_1181938964_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 3592U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 5672);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void work_a_0178362298_1181938964_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4};

LAB0:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5576);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(104, ng0);
    t4 = (t0 + 2472U);
    t5 = *((char **)t4);
    t4 = (t0 + 2152U);
    t6 = *((char **)t4);
    t4 = (t0 + 10000U);
    t7 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t6, t4);
    t8 = (t7 - 0);
    t9 = (t8 * 1);
    t10 = (8U * t9);
    t11 = (0U + t10);
    t12 = (t0 + 5736);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 8U);
    xsi_driver_first_trans_delta(t12, t11, 8U, 0LL);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 10654);
    t4 = (t0 + 5864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB4:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 10660);
    t4 = (t0 + 5864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

LAB5:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 10666);
    t4 = (t0 + 5864);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t12 = (t6 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB2;

}

static void work_a_0178362298_1181938964_p_2(char *t0)
{
    char t19[16];
    char t21[16];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    static char *nl0[] = {&&LAB11, &&LAB11, &&LAB9, &&LAB10, &&LAB11, &&LAB11, &&LAB11, &&LAB11, &&LAB11};

LAB0:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5592);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(138, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = (7 - 7);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t4 = (t8 + t12);
    t13 = *((unsigned char *)t4);
    t14 = (char *)((nl0) + t13);
    goto **((char **)t14);

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 9984U);
    t5 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t19, t4, t2, 1);
    t8 = (t0 + 5992);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t2 = (t0 + 10048U);
    t5 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t19, t4, t2, 1);
    t8 = (t0 + 6056);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB3;

LAB9:    xsi_set_current_line(140, ng0);
    t15 = (t0 + 10672);
    t17 = (t0 + 2152U);
    t18 = *((char **)t17);
    t20 = ((IEEE_P_2592010699) + 4000);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 1;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t24 = (1 - 0);
    t25 = (t24 * 1);
    t25 = (t25 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t25;
    t23 = (t0 + 10000U);
    t17 = xsi_base_array_concat(t17, t19, t20, (char)97, t15, t21, (char)97, t18, t23, (char)101);
    t25 = (2U + 6U);
    t26 = (8U != t25);
    if (t26 == 1)
        goto LAB12;

LAB13:    t27 = (t0 + 5928);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t17, 8U);
    xsi_driver_first_trans_fast_port(t27);
    goto LAB8;

LAB10:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t9 = (0 - 0);
    t10 = (t9 * 1);
    t11 = (8U * t10);
    t12 = (0 + t11);
    t2 = (t4 + t12);
    t5 = (t0 + 5928);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB11:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 10674);
    t5 = (t0 + 5928);
    t8 = (t5 + 56U);
    t14 = *((char **)t8);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB8;

LAB12:    xsi_size_not_matching(8U, t25, 0);
    goto LAB13;

}


extern void work_a_0178362298_1181938964_init()
{
	static char *pe[] = {(void *)work_a_0178362298_1181938964_p_0,(void *)work_a_0178362298_1181938964_p_1,(void *)work_a_0178362298_1181938964_p_2};
	xsi_register_didat("work_a_0178362298_1181938964", "isim/tb_top_level_isim_beh.exe.sim/work/a_0178362298_1181938964.didat");
	xsi_register_executes(pe);
}
