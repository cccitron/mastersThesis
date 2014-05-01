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



static void Gate_91_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    double t16;
    double t17;

LAB0:    t1 = (t0 + 2816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1504U);
    t4 = *((char **)t2);
    t2 = (t0 + 3480);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1304U);
    xsi_vlog_nmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 3480);
    t11 = (t10 + 56U);
    t12 = (t0 + 1304U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 0);
    t13 = (t0 + 3480);
    t14 = (t0 + 472);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t17 = (t16 < 0.0000000000000000);
    if (t17 == 1)
        goto LAB4;

LAB5:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB6:    t16 = (t16 * 1.0000000000000000);
    xsi_driver_vfirst_trans_bufif_delayed(t13, 0, 0, t16, 0);
    t14 = (t0 + 3384);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    t16 = 0.0000000000000000;
    goto LAB6;

}

static void Gate_92_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    double t16;
    double t17;

LAB0:    t1 = (t0 + 3064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 1664U);
    t4 = *((char **)t2);
    t2 = (t0 + 3544);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1304U);
    xsi_vlog_pmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 3544);
    t11 = (t10 + 56U);
    t12 = (t0 + 1304U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 0);
    t13 = (t0 + 3544);
    t14 = (t0 + 472);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t17 = (t16 < 0.0000000000000000);
    if (t17 == 1)
        goto LAB4;

LAB5:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB6:    t16 = (t16 * 1.0000000000000000);
    xsi_driver_vfirst_trans_bufif_delayed(t13, 0, 0, t16, 0);
    t14 = (t0 + 3400);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    t16 = 0.0000000000000000;
    goto LAB6;

}


extern void secureip_m_17664717937572001208_3117393013_init()
{
	static char *pe[] = {(void *)Gate_91_0,(void *)Gate_92_1};
	xsi_register_didat("secureip_m_17664717937572001208_3117393013", "isim/tb_ddr2_testbench_isim_beh.exe.sim/secureip/m_17664717937572001208_3117393013.didat");
	xsi_register_executes(pe);
}
