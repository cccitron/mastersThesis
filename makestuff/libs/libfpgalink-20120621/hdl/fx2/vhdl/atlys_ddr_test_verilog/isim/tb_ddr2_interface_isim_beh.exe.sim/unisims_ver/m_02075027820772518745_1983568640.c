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
static int ng0[] = {5001047, 0, 0, 0, 0, 0};
static int ng1[] = {1380794700, 0, 20047, 0, 0, 0};
static int ng2[] = {1128354373, 0, 1330533471, 0, 68, 0};
static const char *ng3 = "Attribute Syntax Error : The attribute CAPACITANCE on OBUFTDS instance %m is set to %s.  Legal values for this attribute are DONT_CARE, LOW or NORMAL.";
static int ng4[] = {1398747701, 0, 5002820, 0};
static int ng5[] = {1415524917, 0, 1146307928, 0, 19542, 0};
static const char *ng6 = "DRC Warning : The IOSTANDARD attribute on OBUFTDS instance %m is set to %s.  LVDS_25 is a fixed impedance structure optimized to 100ohm differential. If the intended usage is a bus architecture, please use BLVDS. This is only intended to be used in point to point transmissions that do not have turn around timing requirements";



static void NetDecl_37_0(char *t0)
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
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6552);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 4848);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 4720);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_39_1(char *t0)
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

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = (t0 + 1936U);
    t4 = *((char **)t2);
    t2 = (t0 + 4912);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_OrGate(t8, 2, t3, t4);
    t9 = (t0 + 4912);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 4736);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Gate_40_2(char *t0)
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

LAB0:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 4976);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bufIf0Gate(t8, t3, t4);
    t9 = (t0 + 4976);
    xsi_driver_vfirst_trans_bufif(t9, 0, 0);
    t10 = (t0 + 4752);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Gate_41_3(char *t0)
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

LAB0:    t1 = (t0 + 4152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = (t0 + 2096U);
    t4 = *((char **)t2);
    t2 = (t0 + 5040);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_notIf0Gate(t8, t3, t4);
    t9 = (t0 + 5040);
    xsi_driver_vfirst_trans_bufif(t9, 0, 0);
    t10 = (t0 + 4768);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Initial_43_4(char *t0)
{
    char t10[16];
    char t11[8];
    char t23[24];
    char t24[8];
    char t32[8];
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;

LAB0:
LAB2:    t1 = (t0 + 472);
    t2 = *((char **)t1);

LAB3:    t1 = ((char*)((ng0)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 72, t1, 72);
    if (t3 == 1)
        goto LAB4;

LAB5:    t4 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t2, 72, t4, 72);
    if (t5 == 1)
        goto LAB6;

LAB7:    t6 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t2, 72, t6, 72);
    if (t7 == 1)
        goto LAB8;

LAB9:
LAB11:
LAB10:
LAB13:    t8 = (t0 + 472);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t9, 72);
    xsi_vlog_finish(1);

LAB12:    t1 = (t0 + 608);
    t4 = *((char **)t1);
    t1 = ((char*)((ng4)));
    xsi_vlog_unsigned_equal(t10, 56, t4, 56, t1, 56);
    memset(t11, 0, 8);
    t6 = (t10 + 4);
    t12 = *((unsigned int *)t6);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t6) != 0)
        goto LAB16;

LAB17:    t9 = (t11 + 4);
    t17 = *((unsigned int *)t11);
    t18 = (!(t17));
    t19 = *((unsigned int *)t9);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB18;

LAB19:    memcpy(t32, t11, 8);

LAB20:    t58 = (t32 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t32);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB28;

LAB29:
LAB30:
LAB1:    return;
LAB4:    goto LAB12;

LAB6:    goto LAB4;

LAB8:    goto LAB4;

LAB14:    *((unsigned int *)t11) = 1;
    goto LAB17;

LAB16:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB18:    t21 = (t0 + 608);
    t22 = *((char **)t21);
    t21 = ((char*)((ng5)));
    xsi_vlog_unsigned_equal(t23, 80, t22, 56, t21, 80);
    memset(t24, 0, 8);
    t25 = (t23 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t23);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t25) != 0)
        goto LAB23;

LAB24:    t33 = *((unsigned int *)t11);
    t34 = *((unsigned int *)t24);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = (t11 + 4);
    t37 = (t24 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t36);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t24) = 1;
    goto LAB24;

LAB23:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB24;

LAB25:    t44 = *((unsigned int *)t32);
    t45 = *((unsigned int *)t38);
    *((unsigned int *)t32) = (t44 | t45);
    t46 = (t11 + 4);
    t47 = (t24 + 4);
    t48 = *((unsigned int *)t46);
    t49 = (~(t48));
    t50 = *((unsigned int *)t11);
    t3 = (t50 & t49);
    t51 = *((unsigned int *)t47);
    t52 = (~(t51));
    t53 = *((unsigned int *)t24);
    t5 = (t53 & t52);
    t54 = (~(t3));
    t55 = (~(t5));
    t56 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t56 & t54);
    t57 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t57 & t55);
    goto LAB27;

LAB28:
LAB31:    t64 = (t0 + 608);
    t65 = *((char **)t64);
    xsi_vlogfile_write(1, 0, 0, ng6, 2, t0, (char)118, t65, 56);
    goto LAB30;

}


extern void unisims_ver_m_02075027820772518745_1983568640_init()
{
	static char *pe[] = {(void *)NetDecl_37_0,(void *)Gate_39_1,(void *)Gate_40_2,(void *)Gate_41_3,(void *)Initial_43_4};
	xsi_register_didat("unisims_ver_m_02075027820772518745_1983568640", "isim/tb_ddr2_interface_isim_beh.exe.sim/unisims_ver/m_02075027820772518745_1983568640.didat");
	xsi_register_executes(pe);
}
