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
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};



static void Cont_739_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[24];
    char t8[8];
    char t17[16];
    char t20[24];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(739, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = (t0 + 1368U);
    t7 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t9 = (t7 + 16);
    t10 = (t7 + 20);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t2) = t16;
    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    xsi_vlog_get_part_select_value(t17, 64, t19, 63, 0);
    xsi_vlogtype_concat(t6, 65, 65, 2U, t17, 64, t8, 1);
    xsi_vlog_unsigned_case_eq(t20, 65, t5, 65, t6, 65);
    memset(t4, 0, 8);
    t18 = (t20 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (~(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t18) != 0)
        goto LAB6;

LAB7:    t27 = (t4 + 4);
    t28 = *((unsigned int *)t4);
    t29 = *((unsigned int *)t27);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB8;

LAB9:    t32 = *((unsigned int *)t4);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t27) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t36, 8);

LAB16:    t37 = (t0 + 2920);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memset(t41, 0, 8);
    t42 = 1U;
    t43 = t42;
    t44 = (t3 + 4);
    t45 = *((unsigned int *)t3);
    t42 = (t42 & t45);
    t46 = *((unsigned int *)t44);
    t43 = (t43 & t46);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 | t42);
    t49 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t49 | t43);
    xsi_driver_vfirst_trans(t37, 0, 0);
    t50 = (t0 + 2840);
    *((int *)t50) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t26 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB7;

LAB8:    t31 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t36 = ((char*)((ng2)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t31, 1, t36, 1);
    goto LAB16;

LAB14:    memcpy(t3, t31, 8);
    goto LAB16;

}


extern void secureip_m_06351575118152779963_4031989968_init()
{
	static char *pe[] = {(void *)Cont_739_0};
	xsi_register_didat("secureip_m_06351575118152779963_4031989968", "isim/tb_FBCtl_isim_beh.exe.sim/secureip/m_06351575118152779963_4031989968.didat");
	xsi_register_executes(pe);
}
