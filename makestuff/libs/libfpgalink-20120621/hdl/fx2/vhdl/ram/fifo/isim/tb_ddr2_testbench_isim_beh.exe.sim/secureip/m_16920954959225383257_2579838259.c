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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_mui.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_57_0(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2840);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(58, ng0);

LAB5:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(59, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1608);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 7);
    goto LAB8;

LAB9:    xsi_set_current_line(61, ng0);

LAB12:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t12 = (t13 + 4);
    t14 = (t11 + 4);
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 6);
    t17 = (t16 & 1);
    *((unsigned int *)t13) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 6);
    t20 = (t19 & 1);
    *((unsigned int *)t12) = t20;
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t23);
    t26 = (t25 != 0);
    if (t26 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 7, t4, 7, t5, 7);
    t11 = (t0 + 1608);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 7);

LAB15:    goto LAB11;

LAB13:    xsi_set_current_line(62, ng0);
    t27 = ((char*)((ng1)));
    t28 = (t0 + 1608);
    xsi_vlogvar_assign_value(t28, t27, 0, 0, 7);
    goto LAB15;

}


extern void secureip_m_16920954959225383257_2579838259_init()
{
	static char *pe[] = {(void *)Always_57_0};
	xsi_register_didat("secureip_m_16920954959225383257_2579838259", "isim/tb_ddr2_testbench_isim_beh.exe.sim/secureip/m_16920954959225383257_2579838259.didat");
	xsi_register_executes(pe);
}
