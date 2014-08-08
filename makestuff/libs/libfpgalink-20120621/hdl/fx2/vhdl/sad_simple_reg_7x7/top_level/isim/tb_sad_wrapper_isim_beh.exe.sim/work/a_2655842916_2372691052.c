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
static const char *ng0 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/sad_simple_reg_7x7/top_level/tb_sad_wrapper.vhd";



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

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4528U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 5744);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 6568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(152, ng0);
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
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    unsigned char t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 6184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(171, ng0);
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

LAB8:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 6632);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 6696);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 17720);
    t6 = (t0 + 6824);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(182, ng0);

LAB12:    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t11 = *((int *)t4);
    t12 = (t11 < 176);
    if (t12 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 6632);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 6696);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 60);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 3432U);
    t6 = *((char **)t2);
    t2 = (t0 + 4648U);
    t7 = *((char **)t2);
    t13 = *((int *)t7);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 175, 1, t13);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t2 = (t6 + t17);
    t8 = (t0 + 6888);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t2 = (t0 + 4648U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t13 = (t11 - 0);
    t15 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 175, 1, t11);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t7 = (t0 + 6952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:;
LAB16:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t11 = *((int *)t4);
    t13 = (t11 + 1);
    t2 = (t0 + 4648U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t13;
    goto LAB12;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 7016);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 17728);
    t6 = (t0 + 7080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 7016);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 6632);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 6696);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 17735);
    t6 = (t0 + 6824);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(206, ng0);

LAB28:    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t11 = *((int *)t4);
    t12 = (t11 < 26);
    if (t12 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(213, ng0);
    t2 = (t0 + 6632);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(214, ng0);
    t2 = (t0 + 6696);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(215, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(217, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 60);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB29:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 3432U);
    t6 = *((char **)t2);
    t2 = (t0 + 4648U);
    t7 = *((char **)t2);
    t13 = *((int *)t7);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 175, 1, t13);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t2 = (t6 + t17);
    t8 = (t0 + 6888);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(208, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t2 = (t0 + 4648U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t13 = (t11 - 0);
    t15 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 175, 1, t11);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t7 = (t0 + 6952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(209, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB30:;
LAB32:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t11 = *((int *)t4);
    t13 = (t11 + 1);
    t2 = (t0 + 4648U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t13;
    goto LAB28;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 7016);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 17743);
    t6 = (t0 + 7080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 25;
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 7016);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(227, ng0);
    t2 = (t0 + 6632);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(228, ng0);
    t2 = (t0 + 6696);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 17750);
    t6 = (t0 + 6824);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 26;
    xsi_set_current_line(233, ng0);

LAB44:    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t11 = *((int *)t4);
    t12 = (t11 < 52);
    if (t12 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 6632);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 6696);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(242, ng0);
    t2 = (t0 + 6760);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 60);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t5);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB45:    xsi_set_current_line(234, ng0);
    t2 = (t0 + 3432U);
    t6 = *((char **)t2);
    t2 = (t0 + 4648U);
    t7 = *((char **)t2);
    t13 = *((int *)t7);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 175, 1, t13);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t2 = (t6 + t17);
    t8 = (t0 + 6888);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t18 = (t10 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t2, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t2 = (t0 + 4648U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t13 = (t11 - 0);
    t15 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 175, 1, t11);
    t16 = (8U * t15);
    t17 = (0 + t16);
    t2 = (t4 + t17);
    t7 = (t0 + 6952);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    memcpy(t18, t2, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 4528U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t2 = (t0 + 5992);
    xsi_process_wait(t2, t3);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB46:;
LAB48:    xsi_set_current_line(237, ng0);
    t2 = (t0 + 4648U);
    t4 = *((char **)t2);
    t11 = *((int *)t4);
    t13 = (t11 + 1);
    t2 = (t0 + 4648U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((int *)t2) = t13;
    goto LAB44;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    xsi_set_current_line(245, ng0);
    t2 = (t0 + 7016);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(246, ng0);
    t2 = (t0 + 17758);
    t6 = (t0 + 7080);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 7U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(247, ng0);
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

LAB56:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 7016);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(349, ng0);
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

LAB60:    xsi_set_current_line(350, ng0);

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
