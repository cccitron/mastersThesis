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
static const char *ng1 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ex_fifo-me_compToFPGA/fifo/timer.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


char *work_a_0141943142_1878664202_sub_16721811750989071898_1072941036(char *t1, char *t2, char *t3, char *t4)
{
    char t5[128];
    char t6[24];
    char t12[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    int t10;
    unsigned int t11;
    char *t13;
    int t14;
    char *t15;
    int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    int t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned char t48;
    char *t49;
    char *t50;
    int t51;
    char *t52;
    int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;

LAB0:    t7 = (t1 + 2368U);
    t8 = *((char **)t7);
    t9 = *((int *)t8);
    t10 = (0 - t9);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t11 = (t11 * 1U);
    t7 = (t1 + 2368U);
    t13 = *((char **)t7);
    t14 = *((int *)t13);
    t7 = (t12 + 0U);
    t15 = (t7 + 0U);
    *((int *)t15) = t14;
    t15 = (t7 + 4U);
    *((int *)t15) = 0;
    t15 = (t7 + 8U);
    *((int *)t15) = -1;
    t16 = (0 - t14);
    t17 = (t16 * -1);
    t17 = (t17 + 1);
    t15 = (t7 + 12U);
    *((unsigned int *)t15) = t17;
    t15 = (t5 + 4U);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = (t15 + 88U);
    *((char **)t19) = t18;
    t20 = (char *)alloca(t11);
    t21 = (t15 + 56U);
    *((char **)t21) = t20;
    xsi_type_set_default_value(t18, t20, t12);
    t22 = (t15 + 64U);
    *((char **)t22) = t12;
    t23 = (t15 + 80U);
    *((unsigned int *)t23) = t11;
    t24 = (t6 + 4U);
    t25 = (t3 != 0);
    if (t25 == 1)
        goto LAB3;

LAB2:    t26 = (t6 + 12U);
    *((char **)t26) = t4;
    t27 = (t12 + 8U);
    t28 = *((int *)t27);
    t29 = (t12 + 4U);
    t30 = *((int *)t29);
    t31 = (t12 + 0U);
    t32 = *((int *)t31);
    t33 = t32;
    t34 = t30;

LAB4:    t35 = (t34 * t28);
    t36 = (t33 * t28);
    if (t36 <= t35)
        goto LAB5;

LAB7:    t7 = (t15 + 56U);
    t8 = *((char **)t7);
    t7 = (t12 + 12U);
    t11 = *((unsigned int *)t7);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t8, t11);
    t13 = (t12 + 0U);
    t9 = *((int *)t13);
    t18 = (t12 + 4U);
    t10 = *((int *)t18);
    t19 = (t12 + 8U);
    t14 = *((int *)t19);
    t21 = (t2 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = t9;
    t22 = (t21 + 4U);
    *((int *)t22) = t10;
    t22 = (t21 + 8U);
    *((int *)t22) = t14;
    t16 = (t10 - t9);
    t17 = (t16 * t14);
    t17 = (t17 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t17;

LAB1:    return t0;
LAB3:    *((char **)t24) = t3;
    goto LAB2;

LAB5:    t37 = (25 - t33);
    t38 = (t4 + 0U);
    t39 = *((int *)t38);
    t40 = (t4 + 8U);
    t41 = *((int *)t40);
    t42 = (t37 - t39);
    t17 = (t42 * t41);
    t43 = (t4 + 4U);
    t44 = *((int *)t43);
    xsi_vhdl_check_range_of_index(t39, t44, t41, t37);
    t45 = (1U * t17);
    t46 = (0 + t45);
    t47 = (t3 + t46);
    t48 = *((unsigned char *)t47);
    t49 = (t15 + 56U);
    t50 = *((char **)t49);
    t49 = (t12 + 0U);
    t51 = *((int *)t49);
    t52 = (t12 + 8U);
    t53 = *((int *)t52);
    t54 = (t33 - t51);
    t55 = (t54 * t53);
    t56 = (1U * t55);
    t57 = (0 + t56);
    t58 = (t50 + t57);
    *((unsigned char *)t58) = t48;

LAB6:    if (t33 == t34)
        goto LAB7;

LAB8:    t9 = (t33 + t28);
    t33 = t9;
    goto LAB4;

LAB9:;
}

static void work_a_0141943142_1878664202_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(52, ng1);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4160);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t3 = (t0 + 4272);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t4, 26U);
    xsi_driver_first_trans_fast(t3);
    goto LAB3;

}

static void work_a_0141943142_1878664202_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(57, ng1);

LAB3:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7456U);
    t4 = work_a_0141943142_1878664202_sub_16721811750989071898_1072941036(t0, t1, t3, t2);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = (16U != t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t8 = (t0 + 4336);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 16U);
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 4176);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t6, 0);
    goto LAB6;

}

static void work_a_0141943142_1878664202_p_2(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(61, ng1);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 7440U);
    t4 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t1);
    t5 = (t4 - 15);
    t6 = (t5 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t4);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)2);
    if (t11 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(65, ng1);
    t1 = xsi_get_transient_memory(26U);
    memset(t1, 0, 26U);
    t2 = t1;
    memset(t2, (unsigned char)2, 26U);
    t3 = (t0 + 4400);
    t9 = (t3 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 26U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(66, ng1);
    t1 = (t0 + 4464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t9 = (t3 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 4192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(62, ng1);
    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t13 = (t0 + 7456U);
    t15 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t12, t14, t13, 1);
    t16 = (t0 + 4400);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t15, 26U);
    xsi_driver_first_trans_fast(t16);
    xsi_set_current_line(63, ng1);
    t1 = (t0 + 4464);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t9 = (t3 + 56U);
    t13 = *((char **)t9);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}


extern void work_a_0141943142_1878664202_init()
{
	static char *pe[] = {(void *)work_a_0141943142_1878664202_p_0,(void *)work_a_0141943142_1878664202_p_1,(void *)work_a_0141943142_1878664202_p_2};
	static char *se[] = {(void *)work_a_0141943142_1878664202_sub_16721811750989071898_1072941036};
	xsi_register_didat("work_a_0141943142_1878664202", "isim/tb_top_level_isim_beh.exe.sim/work/a_0141943142_1878664202.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
