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
static const char *ng0 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/source/remote_sources/_/lib/digilent/InputSync.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void digilent_a_0133522252_3212880686_p_0(char *t0)
{
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1312U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2984);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t5 = (1 - 1);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t3 = (t4 + t8);
    t9 = *((unsigned char *)t3);
    t10 = (t0 + 3064);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t9;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t5 = (0 - 1);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t3 + t8);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 1032U);
    t10 = *((char **)t4);
    t9 = *((unsigned char *)t10);
    t11 = ((IEEE_P_2592010699) + 4000);
    t4 = xsi_base_array_concat(t4, t15, t11, (char)99, t2, (char)99, t9, (char)101);
    t16 = (1U + 1U);
    t17 = (2U != t16);
    if (t17 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 3128);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 2U);
    xsi_driver_first_trans_fast(t12);
    goto LAB3;

LAB5:    xsi_size_not_matching(2U, t16, 0);
    goto LAB6;

}


extern void digilent_a_0133522252_3212880686_init()
{
	static char *pe[] = {(void *)digilent_a_0133522252_3212880686_p_0};
	xsi_register_didat("digilent_a_0133522252_3212880686", "isim/tb_VmodCAM_Ref_isim_beh.exe.sim/digilent/a_0133522252_3212880686.didat");
	xsi_register_executes(pe);
}
