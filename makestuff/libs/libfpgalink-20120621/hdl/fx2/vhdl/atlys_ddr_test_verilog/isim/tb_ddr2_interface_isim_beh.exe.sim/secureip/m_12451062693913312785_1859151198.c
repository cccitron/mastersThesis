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
static unsigned int ng0[] = {0U, 0U};
static unsigned int ng1[] = {1U, 0U};



static void Gate_27_0(char *t0)
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

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 1776U);
    t4 = *((char **)t3);
    t3 = (t0 + 4016);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_rnmosSwitch(t8, t2, t4);
    t9 = (t0 + 4016);
    t10 = (t9 + 56U);
    xsi_vlog_switch_set_trans_strength(*((char **)t10), 0, 0, 0, 1);
    t11 = (t0 + 4016);
    xsi_driver_vfirst_trans_bufif_delayed(t11, 0, 0, 1LL, 0);
    t12 = (t0 + 3904);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Gate_28_1(char *t0)
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

LAB0:    t1 = (t0 + 3336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t0 + 1616U);
    t4 = *((char **)t2);
    t2 = (t0 + 4080);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1896U);
    xsi_vlog_nmosSwitch_new(t8, t9, 0, 0, t4);
    t10 = (t0 + 4080);
    t11 = (t10 + 56U);
    t12 = (t0 + 1896U);
    xsi_vlog_switch_set_trans_strength(*((char **)t11), t12, 0, 0, 1);
    t13 = (t0 + 4080);
    xsi_driver_vfirst_trans_bufif_delayed(t13, 0, 0, 1LL, 0);
    t14 = (t0 + 3920);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Gate_29_2(char *t0)
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

LAB0:    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 1616U);
    t4 = *((char **)t3);
    t3 = (t0 + 4144);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_rpmosSwitch(t8, t2, t4);
    t9 = (t0 + 4144);
    t10 = (t9 + 56U);
    xsi_vlog_switch_set_trans_strength(*((char **)t10), 0, 0, 0, 1);
    t11 = (t0 + 4144);
    xsi_driver_vfirst_trans_bufif_delayed(t11, 0, 0, 1LL, 0);
    t12 = (t0 + 3936);
    *((int *)t12) = 1;

LAB1:    return;
}


extern void secureip_m_12451062693913312785_1859151198_init()
{
	static char *pe[] = {(void *)Gate_27_0,(void *)Gate_28_1,(void *)Gate_29_2};
	xsi_register_didat("secureip_m_12451062693913312785_1859151198", "isim/tb_ddr2_interface_isim_beh.exe.sim/secureip/m_12451062693913312785_1859151198.didat");
	xsi_register_executes(pe);
}
