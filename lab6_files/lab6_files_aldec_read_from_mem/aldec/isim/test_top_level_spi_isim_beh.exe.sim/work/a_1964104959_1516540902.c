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
static const char *ng0 = "/home/cccitron/mastersThesis/lab6_files/lab6_files_aldec_read_from_mem/aldec/top_level_spi.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_13554554585326073636_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_1366267000076357978_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_1964104959_1516540902_p_0(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(83, ng0);

LAB3:    t1 = (t0 + 18036);
    t3 = (t0 + 9888);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 24U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1964104959_1516540902_p_1(char *t0)
{
    char *t1;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(84, ng0);

LAB3:    t1 = (t0 + 18060);
    t3 = (t0 + 9952);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1964104959_1516540902_p_2(char *t0)
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

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10016);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 9696);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1964104959_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 9712);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 18064);
    t6 = (t0 + 10080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2152U);
    t6 = *((char **)t2);
    t2 = (t0 + 10080);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)8);
    t3 = t12;
    goto LAB9;

}

static void work_a_1964104959_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1472U);
    t3 = ieee_p_2592010699_sub_13554554585326073636_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 9728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 18072);
    t6 = (t0 + 10144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 18078);
    t6 = (t0 + 10144);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB7:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3752U);
    t5 = *((char **)t2);
    t2 = (t0 + 10144);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 6U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_1964104959_1516540902_p_5(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(125, ng0);

LAB3:    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 17784U);
    t4 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t1, t3, t2, 1);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (6U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 10208);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 6U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 9744);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(6U, t7, 0);
    goto LAB6;

}

static void work_a_1964104959_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t11 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 9760);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 18084);
    t6 = (t0 + 10272);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(136, ng0);
    t7 = (t0 + 4072U);
    t8 = *((char **)t7);
    t7 = (t0 + 10272);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t20 = (t10 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t8, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB7:    t2 = (t0 + 3432U);
    t6 = *((char **)t2);
    t14 = (2 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t2 = (t6 + t17);
    t18 = *((unsigned char *)t2);
    t19 = (t18 == (unsigned char)3);
    t3 = t19;
    goto LAB9;

LAB10:    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t12 = *((unsigned char *)t5);
    t13 = (t12 == (unsigned char)6);
    t4 = t13;
    goto LAB12;

}

static void work_a_1964104959_1516540902_p_7(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(139, ng0);

LAB3:    t2 = (t0 + 3912U);
    t3 = *((char **)t2);
    t2 = (t0 + 17800U);
    t4 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t1, t3, t2, 1);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (4U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 10336);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 4U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 9776);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t7, 0);
    goto LAB6;

}

static void work_a_1964104959_1516540902_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 9792);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 10400);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2632U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 10400);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_1964104959_1516540902_p_9(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11};

LAB0:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 10464);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(168, ng0);
    t1 = (t0 + 10528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t7);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 9808);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(171, ng0);
    t3 = (t0 + 10592);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 18088);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    t1 = (t0 + 10784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t9 = (t7 == (unsigned char)3);
    if (t9 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB4:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 10592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(191, ng0);
    t1 = (t0 + 18091);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(192, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(193, ng0);
    t1 = (t0 + 5448U);
    t2 = *((char **)t1);
    t1 = (t0 + 10784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 17784U);
    t3 = (t0 + 18094);
    t5 = (t10 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (5 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t3, t10);
    if (t7 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB16:    goto LAB2;

LAB5:    xsi_set_current_line(200, ng0);
    t1 = (t0 + 10592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(201, ng0);
    t1 = (t0 + 18100);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(202, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t12 = (23 - 23);
    t16 = (t12 * 1U);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = (t0 + 10784);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 17784U);
    t3 = (t0 + 18103);
    t5 = (t10 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (5 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t3, t10);
    if (t7 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB19:    goto LAB2;

LAB6:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 10592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 18109);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(212, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t12 = (23 - 15);
    t16 = (t12 * 1U);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = (t0 + 10784);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(214, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 17784U);
    t3 = (t0 + 18112);
    t5 = (t10 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (5 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t3, t10);
    if (t7 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(217, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB22:    goto LAB2;

LAB7:    xsi_set_current_line(220, ng0);
    t1 = (t0 + 10592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(221, ng0);
    t1 = (t0 + 18118);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(222, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(223, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t12 = (23 - 7);
    t16 = (t12 * 1U);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t3 = (t0 + 10784);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(224, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 17784U);
    t3 = (t0 + 18121);
    t5 = (t10 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (5 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t3, t10);
    if (t7 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB25:    goto LAB2;

LAB8:    xsi_set_current_line(230, ng0);
    t1 = (t0 + 10592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(230, ng0);
    t1 = (t0 + 18127);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(230, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(230, ng0);
    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    t1 = (t0 + 10784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(231, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 17784U);
    t3 = (t0 + 18130);
    t5 = (t10 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t11 = (5 - 0);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t12;
    t7 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t3, t10);
    if (t7 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);

LAB28:    goto LAB2;

LAB9:    xsi_set_current_line(241, ng0);
    t1 = (t0 + 10592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(241, ng0);
    t1 = (t0 + 18136);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(241, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(241, ng0);
    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    t1 = (t0 + 10784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(242, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t11 = (2 - 7);
    t12 = (t11 * -1);
    t16 = (1U * t12);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t7 = *((unsigned char *)t1);
    t9 = (t7 == (unsigned char)2);
    if (t9 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(252, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);

LAB31:    goto LAB2;

LAB10:    xsi_set_current_line(256, ng0);
    t1 = (t0 + 10592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(256, ng0);
    t1 = (t0 + 18139);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(256, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(256, ng0);
    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    t1 = (t0 + 10784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(257, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(259, ng0);
    t1 = (t0 + 10592);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(259, ng0);
    t1 = (t0 + 18142);
    t3 = (t0 + 10656);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(259, ng0);
    t1 = (t0 + 10720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(259, ng0);
    t1 = (t0 + 4848U);
    t2 = *((char **)t1);
    t1 = (t0 + 10784);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(265, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 17800U);
    t3 = (t0 + 4552U);
    t4 = *((char **)t3);
    t3 = (t0 + 17832U);
    t7 = ieee_p_3620187407_sub_1366267000076357978_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t7 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(275, ng0);
    t1 = (t0 + 10528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(276, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);

LAB34:    goto LAB2;

LAB12:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 10848);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB15:    xsi_set_current_line(195, ng0);
    t6 = (t0 + 10848);
    t8 = (t6 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    goto LAB16;

LAB18:    xsi_set_current_line(205, ng0);
    t6 = (t0 + 10848);
    t8 = (t6 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    goto LAB19;

LAB21:    xsi_set_current_line(215, ng0);
    t6 = (t0 + 10848);
    t8 = (t6 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB22;

LAB24:    xsi_set_current_line(225, ng0);
    t6 = (t0 + 10848);
    t8 = (t6 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t6);
    goto LAB25;

LAB27:    xsi_set_current_line(232, ng0);
    t6 = (t0 + 10848);
    t8 = (t6 + 56U);
    t13 = *((char **)t8);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)5;
    xsi_driver_first_trans_fast(t6);
    goto LAB28;

LAB30:    xsi_set_current_line(243, ng0);
    t3 = (t0 + 10848);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)6;
    xsi_driver_first_trans_fast(t3);
    goto LAB31;

LAB33:    xsi_set_current_line(272, ng0);
    t5 = (t0 + 10528);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t13 = (t8 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(273, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB34;

}


extern void work_a_1964104959_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1964104959_1516540902_p_0,(void *)work_a_1964104959_1516540902_p_1,(void *)work_a_1964104959_1516540902_p_2,(void *)work_a_1964104959_1516540902_p_3,(void *)work_a_1964104959_1516540902_p_4,(void *)work_a_1964104959_1516540902_p_5,(void *)work_a_1964104959_1516540902_p_6,(void *)work_a_1964104959_1516540902_p_7,(void *)work_a_1964104959_1516540902_p_8,(void *)work_a_1964104959_1516540902_p_9};
	xsi_register_didat("work_a_1964104959_1516540902", "isim/test_top_level_spi_isim_beh.exe.sim/work/a_1964104959_1516540902.didat");
	xsi_register_executes(pe);
}
