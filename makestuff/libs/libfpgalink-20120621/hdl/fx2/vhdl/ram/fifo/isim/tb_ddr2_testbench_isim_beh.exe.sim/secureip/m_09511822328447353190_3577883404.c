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



static void Gate_65_0(char *t0)
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

LAB0:    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    t2 = (t0 + 2416U);
    t4 = *((char **)t2);
    t2 = (t0 + 4232);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_NandGate(t8, 2, t3, t4);
    t9 = (t0 + 4232);
    xsi_driver_vfirst_trans_delayed(t9, 0, 0, 1LL, 0);
    t10 = (t0 + 4136);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Gate_66_1(char *t0)
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

LAB0:    t1 = (t0 + 3816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1616U);
    t3 = *((char **)t2);
    t2 = (t0 + 4296);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 4296);
    xsi_driver_vfirst_trans_delayed(t8, 0, 0, 1LL, 0);
    t9 = (t0 + 4152);
    *((int *)t9) = 1;

LAB1:    return;
}


extern void secureip_m_09511822328447353190_3577883404_init()
{
	static char *pe[] = {(void *)Gate_65_0,(void *)Gate_66_1};
	xsi_register_didat("secureip_m_09511822328447353190_3577883404", "isim/tb_ddr2_testbench_isim_beh.exe.sim/secureip/m_09511822328447353190_3577883404.didat");
	xsi_register_executes(pe);
}
