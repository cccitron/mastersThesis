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
static const char *ng0 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/sad_simple_reg_9x9/top_level/tb_sad_wrapper.vhd";



static void work_a_2655842916_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 5936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(182, ng0);
    t2 = (t0 + 4528U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5744);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 4528U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5744);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2655842916_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    int t16;
    int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 6184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(201, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 20);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(209, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t6 = (0 - 0);
    t7 = (t6 * 1);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t10 = (t0 + 6632);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(210, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t6 = (0 - 0);
    t7 = (t6 * 1);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t10 = (t0 + 6696);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(211, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 6824);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 6888);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 18872);
    t10 = (t0 + 6952);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 7U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 18879);
    t10 = (t0 + 7016);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(216, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 1;
    xsi_set_current_line(219, ng0);

LAB16:    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t6 = *((int *)t4);
    t15 = (t6 < 243);
    if (t15 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(226, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t6 = (243 - 0);
    t7 = (t6 * 1);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t10 = (t0 + 6632);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t6 = (243 - 0);
    t7 = (t6 * 1);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t10 = (t0 + 6696);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 3432U);
    t10 = *((char **)t2);
    t2 = (t0 + 4648U);
    t11 = *((char **)t2);
    t16 = *((int *)t11);
    t17 = (t16 - 0);
    t7 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 243, 1, t16);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t10 + t9);
    t12 = (t0 + 6632);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 8U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t2 = (t0 + 4648U);
    t10 = *((char **)t2);
    t6 = *((int *)t10);
    t16 = (t6 - 0);
    t7 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 243, 1, t6);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t11 = (t0 + 6696);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB18:;
LAB20:    xsi_set_current_line(223, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t6 = *((int *)t4);
    t16 = (t6 + 1);
    t2 = (t0 + 4648U);
    t10 = *((char **)t2);
    t2 = (t10 + 0);
    *((int *)t2) = t16;
    goto LAB16;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 6824);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 6888);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 90);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 7080);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 18887);
    t10 = (t0 + 6952);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 7U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(245, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 7080);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(252, ng0);
    t2 = (t0 + 6824);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(253, ng0);
    t2 = (t0 + 6888);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(254, ng0);
    t2 = (t0 + 18894);
    t10 = (t0 + 7016);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(261, ng0);

LAB40:    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t6 = *((int *)t4);
    t15 = (t6 < 27);
    if (t15 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(268, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t2 = (t0 + 4648U);
    t10 = *((char **)t2);
    t6 = *((int *)t10);
    t16 = (t6 - 0);
    t7 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 55, 1, t6);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t11 = (t0 + 6632);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(269, ng0);
    t2 = (t0 + 3912U);
    t4 = *((char **)t2);
    t2 = (t0 + 4648U);
    t10 = *((char **)t2);
    t6 = *((int *)t10);
    t16 = (t6 - 0);
    t7 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 55, 1, t6);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t11 = (t0 + 6696);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(271, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB41:    xsi_set_current_line(262, ng0);
    t2 = (t0 + 3592U);
    t10 = *((char **)t2);
    t2 = (t0 + 4648U);
    t11 = *((char **)t2);
    t16 = *((int *)t11);
    t17 = (t16 - 0);
    t7 = (t17 * 1);
    xsi_vhdl_check_range_of_index(0, 55, 1, t16);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t10 + t9);
    t12 = (t0 + 6632);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 8U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(263, ng0);
    t2 = (t0 + 3912U);
    t4 = *((char **)t2);
    t2 = (t0 + 4648U);
    t10 = *((char **)t2);
    t6 = *((int *)t10);
    t16 = (t6 - 0);
    t7 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 55, 1, t6);
    t8 = (8U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t11 = (t0 + 6696);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(264, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB42:;
LAB44:    xsi_set_current_line(265, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t6 = *((int *)t4);
    t16 = (t6 + 1);
    t2 = (t0 + 4648U);
    t10 = *((char **)t2);
    t2 = (t10 + 0);
    *((int *)t2) = t16;
    goto LAB40;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(272, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(273, ng0);
    t2 = (t0 + 6824);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(274, ng0);
    t2 = (t0 + 6888);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 90);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(281, ng0);
    t2 = (t0 + 7080);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(282, ng0);
    t2 = (t0 + 18902);
    t10 = (t0 + 6952);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 7U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(283, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 7080);
    t4 = (t2 + 56U);
    t10 = *((char **)t4);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(286, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 2);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(287, ng0);

LAB66:    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    goto LAB2;

LAB65:    goto LAB64;

LAB67:    goto LAB65;

}


extern void work_a_2655842916_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2655842916_2372691052_p_0,(void *)work_a_2655842916_2372691052_p_1};
	xsi_register_didat("work_a_2655842916_2372691052", "isim/tb_sad_wrapper_isim_beh.exe.sim/work/a_2655842916_2372691052.didat");
	xsi_register_executes(pe);
}
