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
static unsigned int ng0[] = {1U, 0U};



static void Gate_75_0(char *t0)
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

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 1776U);
    t4 = *((char **)t3);
    t3 = (t0 + 3648);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_pmosSwitch(t8, t2, t4);
    t9 = (t0 + 3648);
    t10 = (t9 + 56U);
    xsi_vlog_switch_set_trans_strength(*((char **)t10), 0, 0, 0, 0);
    t11 = (t0 + 3648);
    xsi_driver_vfirst_trans_bufif_delayed(t11, 0, 0, 1LL, 0);
    t12 = (t0 + 3568);
    *((int *)t12) = 1;

LAB1:    return;
}


extern void secureip_m_12237212170652746254_2305312857_init()
{
	static char *pe[] = {(void *)Gate_75_0};
	xsi_register_didat("secureip_m_12237212170652746254_2305312857", "isim/tb_ddr2_interface_isim_beh.exe.sim/secureip/m_12237212170652746254_2305312857.didat");
	xsi_register_executes(pe);
}
