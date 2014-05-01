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
static const char *ng0 = "Function c3_sim_hw ended without a return statement";
static const char *ng1 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/ram/fifo/ipcore_dir/mig_39_2/example_design/rtl/example_top.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


char *work_a_1510065680_2195797208_sub_16294435567950352401_3196894770(char *t1, char *t2, char *t3, char *t4)
{
    char t6[40];
    char t7[16];
    char t12[16];
    char *t0;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    char *t32;
    int t33;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    char *t39;
    int t40;
    unsigned int t41;

LAB0:    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 31;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 31);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t12 + 0U);
    t13 = (t9 + 0U);
    *((int *)t13) = 31;
    t13 = (t9 + 4U);
    *((int *)t13) = 0;
    t13 = (t9 + 8U);
    *((int *)t13) = -1;
    t14 = (0 - 31);
    t11 = (t14 * -1);
    t11 = (t11 + 1);
    t13 = (t9 + 12U);
    *((unsigned int *)t13) = t11;
    t13 = (t6 + 4U);
    t15 = (t3 != 0);
    if (t15 == 1)
        goto LAB3;

LAB2:    t16 = (t6 + 12U);
    *((char **)t16) = t7;
    t17 = (t6 + 20U);
    t18 = (t4 != 0);
    if (t18 == 1)
        goto LAB5;

LAB4:    t19 = (t6 + 28U);
    *((char **)t19) = t12;
    t20 = (t1 + 84683);
    t22 = (t1 + 81464U);
    t23 = (t22 + 12U);
    t11 = *((unsigned int *)t23);
    t11 = (t11 * 1U);
    t24 = (t1 + 84688);
    t26 = 1;
    if (t11 == 5U)
        goto LAB9;

LAB10:    t26 = 0;

LAB11:    if (t26 != 0)
        goto LAB6;

LAB8:    t8 = (t12 + 12U);
    t11 = *((unsigned int *)t8);
    t11 = (t11 * 1U);
    t0 = xsi_get_transient_memory(t11);
    memcpy(t0, t4, t11);
    t9 = (t12 + 0U);
    t10 = *((int *)t9);
    t20 = (t12 + 4U);
    t14 = *((int *)t20);
    t21 = (t12 + 8U);
    t33 = *((int *)t21);
    t22 = (t2 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = t10;
    t23 = (t22 + 4U);
    *((int *)t23) = t14;
    t23 = (t22 + 8U);
    *((int *)t23) = t33;
    t35 = (t14 - t10);
    t27 = (t35 * t33);
    t27 = (t27 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t27;

LAB1:    return t0;
LAB3:    *((char **)t13) = t3;
    goto LAB2;

LAB5:    *((char **)t17) = t4;
    goto LAB4;

LAB6:    t30 = (t7 + 12U);
    t31 = *((unsigned int *)t30);
    t31 = (t31 * 1U);
    t0 = xsi_get_transient_memory(t31);
    memcpy(t0, t3, t31);
    t32 = (t7 + 0U);
    t33 = *((int *)t32);
    t34 = (t7 + 4U);
    t35 = *((int *)t34);
    t36 = (t7 + 8U);
    t37 = *((int *)t36);
    t38 = (t2 + 0U);
    t39 = (t38 + 0U);
    *((int *)t39) = t33;
    t39 = (t38 + 4U);
    *((int *)t39) = t35;
    t39 = (t38 + 8U);
    *((int *)t39) = t37;
    t40 = (t35 - t33);
    t41 = (t40 * t37);
    t41 = (t41 + 1);
    t39 = (t38 + 12U);
    *((unsigned int *)t39) = t41;
    goto LAB1;

LAB7:    xsi_error(ng0);
    t0 = 0;
    goto LAB1;

LAB9:    t27 = 0;

LAB12:    if (t27 < t11)
        goto LAB13;
    else
        goto LAB11;

LAB13:    t28 = (t20 + t27);
    t29 = (t24 + t27);
    if (*((unsigned char *)t28) != *((unsigned char *)t29))
        goto LAB10;

LAB14:    t27 = (t27 + 1);
    goto LAB12;

LAB15:    goto LAB7;

LAB16:    goto LAB7;

}

static void work_a_1510065680_2195797208_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(721, ng1);

LAB3:    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 37688);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 37576);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1510065680_2195797208_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(722, ng1);

LAB3:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 37752);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 37592);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1510065680_2195797208_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(723, ng1);

LAB3:    t1 = (t0 + 37816);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1510065680_2195797208_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(724, ng1);

LAB3:    t1 = (t0 + 37880);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1510065680_2195797208_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(725, ng1);

LAB3:    t1 = (t0 + 37944);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1510065680_2195797208_p_5(char *t0)
{
    char t7[16];
    char t9[16];
    char t16[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t14;
    unsigned char t15;
    char *t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(726, ng1);

LAB3:    t1 = (t0 + 84693);
    t3 = (t0 + 5032U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t8 = ((IEEE_P_2592010699) + 4000);
    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 0;
    t11 = (t10 + 4U);
    *((int *)t11) = 5;
    t11 = (t10 + 8U);
    *((int *)t11) = 1;
    t12 = (5 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t3 = xsi_base_array_concat(t3, t7, t8, (char)97, t1, t9, (char)99, t6, (char)101);
    t11 = (t0 + 5032U);
    t14 = *((char **)t11);
    t15 = *((unsigned char *)t14);
    t17 = ((IEEE_P_2592010699) + 4000);
    t11 = xsi_base_array_concat(t11, t16, t17, (char)97, t3, t7, (char)99, t15, (char)101);
    t13 = (6U + 1U);
    t18 = (t13 + 1U);
    t19 = (8U != t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 38008);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t11, 8U);
    xsi_driver_first_trans_fast_port(t20);

LAB2:    t25 = (t0 + 37608);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t18, 0);
    goto LAB6;

}


extern void work_a_1510065680_2195797208_init()
{
	static char *pe[] = {(void *)work_a_1510065680_2195797208_p_0,(void *)work_a_1510065680_2195797208_p_1,(void *)work_a_1510065680_2195797208_p_2,(void *)work_a_1510065680_2195797208_p_3,(void *)work_a_1510065680_2195797208_p_4,(void *)work_a_1510065680_2195797208_p_5};
	static char *se[] = {(void *)work_a_1510065680_2195797208_sub_16294435567950352401_3196894770};
	xsi_register_didat("work_a_1510065680_2195797208", "isim/tb_example_top_isim_beh.exe.sim/work/a_1510065680_2195797208.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
