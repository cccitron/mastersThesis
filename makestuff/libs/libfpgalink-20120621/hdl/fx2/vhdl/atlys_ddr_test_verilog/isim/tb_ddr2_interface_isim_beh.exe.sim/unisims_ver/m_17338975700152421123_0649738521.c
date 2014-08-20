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
static unsigned int ng0[] = {0U, 1U};
static int ng1[] = {1414681925, 0, 0, 0};
static int ng2[] = {1095521093, 0, 70, 0};
static const char *ng3 = "Attribute Syntax Error : The attribute DIFF_TERM on %s instance %m is set to %s.  Legal values for this attribute are TRUE or FALSE.";
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {0U, 0U};
static const char *ng6 = "Attribute Syntax Error : The attribute DQS_BIAS on %s instance %m is set to %s.  Legal values for this attribute are TRUE or FALSE.";
static int ng7[] = {5001047, 0, 0, 0, 0, 0};
static int ng8[] = {1380794700, 0, 20047, 0, 0, 0};
static int ng9[] = {1128354373, 0, 1330533471, 0, 68, 0};
static const char *ng10 = "Attribute Syntax Error : The attribute CAPACITANCE on %s instance %m is set to %s.  Legal values for this attribute are DONT_CARE, LOW or NORMAL.";
static int ng11[] = {48, 0};
static int ng12[] = {49, 0};
static int ng13[] = {50, 0};
static int ng14[] = {51, 0};
static int ng15[] = {52, 0};
static int ng16[] = {53, 0};
static int ng17[] = {54, 0};
static int ng18[] = {55, 0};
static int ng19[] = {56, 0};
static int ng20[] = {57, 0};
static int ng21[] = {12592, 0};
static int ng22[] = {12593, 0};
static int ng23[] = {12594, 0};
static int ng24[] = {12595, 0};
static int ng25[] = {12596, 0};
static int ng26[] = {12597, 0};
static int ng27[] = {12598, 0};
static const char *ng28 = "Attribute Syntax Error : The attribute IBUF_DELAY_VALUE on %s instance %m is set to %s.  Legal values for this attribute are 0, 1, 2, ... or 16.";
static const char *ng29 = "Attribute Syntax Error : The attribute IBUF_LOW_PWR on %s instance %m is set to %s.  Legal values for this attribute are TRUE or FALSE.";
static int ng30[] = {1096111183, 0};
static const char *ng31 = "Attribute Syntax Error : The attribute IFD_DELAY_VALUE on %s instance %m is set to %s.  Legal values for this attribute are AUTO, 0, 1, 2, ... or 8.";
static int ng32[] = {1398747701, 0, 5002820, 0};
static int ng33[] = {1415524917, 0, 1146307928, 0, 19542, 0};
static const char *ng34 = "DRC Warning : The IOSTANDARD attribute on %s instance %m is set to %s.  LVDS_25 is a fixed impedance structure optimized to 100ohm differential. If the intended usage is a bus architecture, please use BLVDS. This is only intended to be used in point to point transmissions that do not have turn around timing requirements";
static unsigned int ng35[] = {1U, 1U};



static void NetDecl_58_0(char *t0)
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

LAB0:    t1 = (t0 + 5824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 11384);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 8848);
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
    t18 = (t0 + 8624);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_60_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2752U);
    t3 = *((char **)t2);
    t2 = (t0 + 8912);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8640);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_61_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2912U);
    t3 = *((char **)t2);
    t2 = (t0 + 8976);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8656);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_62_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6568U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2432U);
    t3 = *((char **)t2);
    t2 = (t0 + 9040);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8672);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_63_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 6816U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9104);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 8688);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_65_5(char *t0)
{
    char t4[8];
    char t18[8];
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 7064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3872U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t11 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (!(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t25, t4, 8);

LAB10:    t53 = (t0 + 9168);
    t54 = (t53 + 56U);
    t55 = *((char **)t54);
    t56 = (t55 + 56U);
    t57 = *((char **)t56);
    memset(t57, 0, 8);
    t58 = 1U;
    t59 = t58;
    t60 = (t25 + 4);
    t61 = *((unsigned int *)t25);
    t58 = (t58 & t61);
    t62 = *((unsigned int *)t60);
    t59 = (t59 & t62);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 | t58);
    t65 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t65 | t59);
    xsi_driver_vfirst_trans(t53, 0, 0);
    t66 = (t0 + 8704);
    *((int *)t66) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3552U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t16 = (t17 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (~(t19));
    t21 = *((unsigned int *)t17);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t16) != 0)
        goto LAB13;

LAB14:    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t18);
    t28 = (t26 | t27);
    *((unsigned int *)t25) = t28;
    t29 = (t4 + 4);
    t30 = (t18 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t18) = 1;
    goto LAB14;

LAB13:    t24 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB14;

LAB15:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t4 + 4);
    t40 = (t18 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (~(t41));
    t43 = *((unsigned int *)t4);
    t44 = (t43 & t42);
    t45 = *((unsigned int *)t40);
    t46 = (~(t45));
    t47 = *((unsigned int *)t18);
    t48 = (t47 & t46);
    t49 = (~(t44));
    t50 = (~(t48));
    t51 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t51 & t49);
    t52 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t52 & t50);
    goto LAB17;

}

static void Cont_66_6(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 7312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3712U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t22, 8);

LAB16:    t21 = (t0 + 9232);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t3 + 4);
    t30 = *((unsigned int *)t3);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t35 = (t0 + 8720);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng0)));
    goto LAB9;

LAB10:    t21 = (t0 + 3072U);
    t22 = *((char **)t21);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t22, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_67_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;

LAB0:    t1 = (t0 + 7560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3712U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t17 = *((unsigned int *)t4);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t21, 8);

LAB16:    t40 = (t0 + 9296);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t44, 0, 8);
    t45 = 1U;
    t46 = t45;
    t47 = (t3 + 4);
    t48 = *((unsigned int *)t3);
    t45 = (t45 & t48);
    t49 = *((unsigned int *)t47);
    t46 = (t46 & t49);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 | t45);
    t52 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t52 | t46);
    xsi_driver_vfirst_trans(t40, 0, 0);
    t53 = (t0 + 8736);
    *((int *)t53) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng0)));
    goto LAB9;

LAB10:    t22 = (t0 + 3072U);
    t23 = *((char **)t22);
    memset(t21, 0, 8);
    t22 = (t23 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t23);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t22) == 0)
        goto LAB17;

LAB19:    t29 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t29) = 1;

LAB20:    t30 = (t21 + 4);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = (~(t32));
    *((unsigned int *)t21) = t33;
    *((unsigned int *)t30) = 0;
    if (*((unsigned int *)t31) != 0)
        goto LAB22;

LAB21:    t38 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t38 & 1U);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t39 & 1U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t21, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t21) = 1;
    goto LAB20;

LAB22:    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t31);
    *((unsigned int *)t21) = (t34 | t35);
    t36 = *((unsigned int *)t30);
    t37 = *((unsigned int *)t31);
    *((unsigned int *)t30) = (t36 | t37);
    goto LAB21;

}

static void Initial_69_8(char *t0)
{
    char t43[16];
    char t44[8];
    char t54[24];
    char t55[8];
    char t61[8];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    char *t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    char *t24;
    int t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    char *t32;
    int t33;
    char *t34;
    int t35;
    char *t36;
    int t37;
    char *t38;
    int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;

LAB0:    t1 = (t0 + 7808U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:
LAB4:    t2 = (t0 + 608);
    t3 = *((char **)t2);

LAB5:    t2 = ((char*)((ng1)));
    t4 = xsi_vlog_unsigned_case_compare(t3, 40, t2, 40);
    if (t4 == 1)
        goto LAB6;

LAB7:    t5 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 40, t5, 40);
    if (t6 == 1)
        goto LAB8;

LAB9:
LAB11:
LAB10:
LAB13:    t7 = (t0 + 1560);
    t8 = *((char **)t7);
    t7 = (t0 + 608);
    t9 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 0, ng3, 3, t0, (char)118, t8, 56, (char)118, t9, 40);
    xsi_vlog_finish(1);

LAB12:    t2 = (t0 + 744);
    t5 = *((char **)t2);

LAB14:    t2 = ((char*)((ng1)));
    t4 = xsi_vlog_unsigned_case_compare(t5, 40, t2, 40);
    if (t4 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t4 = xsi_vlog_unsigned_case_compare(t5, 40, t2, 40);
    if (t4 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:
LAB22:    t2 = (t0 + 1560);
    t7 = *((char **)t2);
    t2 = (t0 + 744);
    t8 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng6, 3, t0, (char)118, t7, 56, (char)118, t8, 40);
    xsi_vlog_finish(1);

LAB21:    t2 = (t0 + 472);
    t7 = *((char **)t2);

LAB23:    t2 = ((char*)((ng7)));
    t4 = xsi_vlog_unsigned_case_compare(t7, 72, t2, 72);
    if (t4 == 1)
        goto LAB24;

LAB25:    t8 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 72, t8, 72);
    if (t6 == 1)
        goto LAB26;

LAB27:    t9 = ((char*)((ng9)));
    t10 = xsi_vlog_unsigned_case_compare(t7, 72, t9, 72);
    if (t10 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:
LAB33:    t11 = (t0 + 1560);
    t12 = *((char **)t11);
    t11 = (t0 + 472);
    t13 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)118, t12, 56, (char)118, t13, 72);
    xsi_vlog_finish(1);

LAB32:    t2 = (t0 + 880);
    t8 = *((char **)t2);

LAB34:    t2 = ((char*)((ng11)));
    t4 = xsi_vlog_unsigned_case_compare(t8, 8, t2, 16);
    if (t4 == 1)
        goto LAB35;

LAB36:    t9 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 8, t9, 16);
    if (t6 == 1)
        goto LAB37;

LAB38:    t11 = ((char*)((ng13)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 8, t11, 16);
    if (t10 == 1)
        goto LAB39;

LAB40:    t12 = ((char*)((ng14)));
    t14 = xsi_vlog_unsigned_case_compare(t8, 8, t12, 16);
    if (t14 == 1)
        goto LAB41;

LAB42:    t13 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t8, 8, t13, 16);
    if (t15 == 1)
        goto LAB43;

LAB44:    t16 = ((char*)((ng16)));
    t17 = xsi_vlog_unsigned_case_compare(t8, 8, t16, 16);
    if (t17 == 1)
        goto LAB45;

LAB46:    t18 = ((char*)((ng17)));
    t19 = xsi_vlog_unsigned_case_compare(t8, 8, t18, 16);
    if (t19 == 1)
        goto LAB47;

LAB48:    t20 = ((char*)((ng18)));
    t21 = xsi_vlog_unsigned_case_compare(t8, 8, t20, 16);
    if (t21 == 1)
        goto LAB49;

LAB50:    t22 = ((char*)((ng19)));
    t23 = xsi_vlog_unsigned_case_compare(t8, 8, t22, 16);
    if (t23 == 1)
        goto LAB51;

LAB52:    t24 = ((char*)((ng20)));
    t25 = xsi_vlog_unsigned_case_compare(t8, 8, t24, 16);
    if (t25 == 1)
        goto LAB53;

LAB54:    t26 = ((char*)((ng21)));
    t27 = xsi_vlog_unsigned_case_compare(t8, 8, t26, 16);
    if (t27 == 1)
        goto LAB55;

LAB56:    t28 = ((char*)((ng22)));
    t29 = xsi_vlog_unsigned_case_compare(t8, 8, t28, 16);
    if (t29 == 1)
        goto LAB57;

LAB58:    t30 = ((char*)((ng23)));
    t31 = xsi_vlog_unsigned_case_compare(t8, 8, t30, 16);
    if (t31 == 1)
        goto LAB59;

LAB60:    t32 = ((char*)((ng24)));
    t33 = xsi_vlog_unsigned_case_compare(t8, 8, t32, 16);
    if (t33 == 1)
        goto LAB61;

LAB62:    t34 = ((char*)((ng25)));
    t35 = xsi_vlog_unsigned_case_compare(t8, 8, t34, 16);
    if (t35 == 1)
        goto LAB63;

LAB64:    t36 = ((char*)((ng26)));
    t37 = xsi_vlog_unsigned_case_compare(t8, 8, t36, 16);
    if (t37 == 1)
        goto LAB65;

LAB66:    t38 = ((char*)((ng27)));
    t39 = xsi_vlog_unsigned_case_compare(t8, 8, t38, 16);
    if (t39 == 1)
        goto LAB67;

LAB68:
LAB70:
LAB69:
LAB72:    t40 = (t0 + 1560);
    t41 = *((char **)t40);
    t40 = (t0 + 880);
    t42 = *((char **)t40);
    xsi_vlogfile_write(1, 0, 0, ng28, 3, t0, (char)118, t41, 56, (char)118, t42, 8);
    xsi_vlog_finish(1);

LAB71:    t2 = (t0 + 1016);
    t9 = *((char **)t2);

LAB73:    t2 = ((char*)((ng2)));
    t4 = xsi_vlog_unsigned_case_compare(t9, 32, t2, 40);
    if (t4 == 1)
        goto LAB74;

LAB75:    t11 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 32, t11, 40);
    if (t6 == 1)
        goto LAB76;

LAB77:
LAB79:
LAB78:
LAB81:    t12 = (t0 + 1560);
    t13 = *((char **)t12);
    t12 = (t0 + 1016);
    t16 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 0, ng29, 3, t0, (char)118, t13, 56, (char)118, t16, 32);
    xsi_vlog_finish(1);

LAB80:    t2 = (t0 + 1152);
    t11 = *((char **)t2);

LAB82:    t2 = ((char*)((ng30)));
    t4 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t4 == 1)
        goto LAB83;

LAB84:    t12 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t11, 32, t12, 32);
    if (t6 == 1)
        goto LAB85;

LAB86:    t13 = ((char*)((ng12)));
    t10 = xsi_vlog_unsigned_case_compare(t11, 32, t13, 32);
    if (t10 == 1)
        goto LAB87;

LAB88:    t16 = ((char*)((ng13)));
    t14 = xsi_vlog_unsigned_case_compare(t11, 32, t16, 32);
    if (t14 == 1)
        goto LAB89;

LAB90:    t18 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t11, 32, t18, 32);
    if (t15 == 1)
        goto LAB91;

LAB92:    t20 = ((char*)((ng15)));
    t17 = xsi_vlog_unsigned_case_compare(t11, 32, t20, 32);
    if (t17 == 1)
        goto LAB93;

LAB94:    t22 = ((char*)((ng16)));
    t19 = xsi_vlog_unsigned_case_compare(t11, 32, t22, 32);
    if (t19 == 1)
        goto LAB95;

LAB96:    t24 = ((char*)((ng17)));
    t21 = xsi_vlog_unsigned_case_compare(t11, 32, t24, 32);
    if (t21 == 1)
        goto LAB97;

LAB98:    t26 = ((char*)((ng18)));
    t23 = xsi_vlog_unsigned_case_compare(t11, 32, t26, 32);
    if (t23 == 1)
        goto LAB99;

LAB100:    t28 = ((char*)((ng19)));
    t25 = xsi_vlog_unsigned_case_compare(t11, 32, t28, 32);
    if (t25 == 1)
        goto LAB101;

LAB102:
LAB104:
LAB103:
LAB106:    t30 = (t0 + 1560);
    t32 = *((char **)t30);
    t30 = (t0 + 1152);
    t34 = *((char **)t30);
    xsi_vlogfile_write(1, 0, 0, ng31, 3, t0, (char)118, t32, 56, (char)118, t34, 32);
    xsi_vlog_finish(1);

LAB105:    t2 = (t0 + 1288);
    t12 = *((char **)t2);
    t2 = ((char*)((ng32)));
    xsi_vlog_unsigned_equal(t43, 56, t12, 56, t2, 56);
    memset(t44, 0, 8);
    t13 = (t43 + 4);
    t45 = *((unsigned int *)t13);
    t46 = (~(t45));
    t47 = *((unsigned int *)t43);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t13) != 0)
        goto LAB109;

LAB110:    t18 = (t44 + 4);
    t50 = *((unsigned int *)t44);
    t51 = (!(t50));
    t52 = *((unsigned int *)t18);
    t53 = (t51 || t52);
    if (t53 > 0)
        goto LAB111;

LAB112:    memcpy(t61, t44, 8);

LAB113:    t38 = (t61 + 4);
    t82 = *((unsigned int *)t38);
    t83 = (~(t82));
    t84 = *((unsigned int *)t61);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB121;

LAB122:
LAB123:
LAB1:    return;
LAB6:    goto LAB12;

LAB8:    goto LAB6;

LAB15:    t7 = ((char*)((ng4)));
    t8 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 1LL);
    goto LAB21;

LAB17:    t7 = ((char*)((ng5)));
    t8 = (t0 + 4912);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 1, 1LL);
    goto LAB21;

LAB24:    goto LAB32;

LAB26:    goto LAB24;

LAB28:    goto LAB24;

LAB35:    goto LAB71;

LAB37:    goto LAB35;

LAB39:    goto LAB35;

LAB41:    goto LAB35;

LAB43:    goto LAB35;

LAB45:    goto LAB35;

LAB47:    goto LAB35;

LAB49:    goto LAB35;

LAB51:    goto LAB35;

LAB53:    goto LAB35;

LAB55:    goto LAB35;

LAB57:    goto LAB35;

LAB59:    goto LAB35;

LAB61:    goto LAB35;

LAB63:    goto LAB35;

LAB65:    goto LAB35;

LAB67:    goto LAB35;

LAB74:    goto LAB80;

LAB76:    goto LAB74;

LAB83:    goto LAB105;

LAB85:    goto LAB83;

LAB87:    goto LAB83;

LAB89:    goto LAB83;

LAB91:    goto LAB83;

LAB93:    goto LAB83;

LAB95:    goto LAB83;

LAB97:    goto LAB83;

LAB99:    goto LAB83;

LAB101:    goto LAB83;

LAB107:    *((unsigned int *)t44) = 1;
    goto LAB110;

LAB109:    t16 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB110;

LAB111:    t20 = (t0 + 1288);
    t22 = *((char **)t20);
    t20 = ((char*)((ng33)));
    xsi_vlog_unsigned_equal(t54, 80, t22, 56, t20, 80);
    memset(t55, 0, 8);
    t24 = (t54 + 4);
    t56 = *((unsigned int *)t24);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (t58 & t57);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB114;

LAB115:    if (*((unsigned int *)t24) != 0)
        goto LAB116;

LAB117:    t62 = *((unsigned int *)t44);
    t63 = *((unsigned int *)t55);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t28 = (t44 + 4);
    t30 = (t55 + 4);
    t32 = (t61 + 4);
    t65 = *((unsigned int *)t28);
    t66 = *((unsigned int *)t30);
    t67 = (t65 | t66);
    *((unsigned int *)t32) = t67;
    t68 = *((unsigned int *)t32);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB118;

LAB119:
LAB120:    goto LAB113;

LAB114:    *((unsigned int *)t55) = 1;
    goto LAB117;

LAB116:    t26 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB117;

LAB118:    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t32);
    *((unsigned int *)t61) = (t70 | t71);
    t34 = (t44 + 4);
    t36 = (t55 + 4);
    t72 = *((unsigned int *)t34);
    t73 = (~(t72));
    t74 = *((unsigned int *)t44);
    t4 = (t74 & t73);
    t75 = *((unsigned int *)t36);
    t76 = (~(t75));
    t77 = *((unsigned int *)t55);
    t6 = (t77 & t76);
    t78 = (~(t4));
    t79 = (~(t6));
    t80 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t80 & t78);
    t81 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t81 & t79);
    goto LAB120;

LAB121:
LAB124:    t40 = (t0 + 1560);
    t41 = *((char **)t40);
    t40 = (t0 + 1288);
    t42 = *((char **)t40);
    xsi_vlogfile_write(1, 0, 0, ng34, 3, t0, (char)118, t41, 56, (char)118, t42, 56);
    goto LAB123;

}

static void Always_139_9(char *t0)
{
    char t6[8];
    char t22[8];
    char t36[8];
    char t52[8];
    char t60[8];
    char t100[8];
    char t101[8];
    char t103[8];
    char t109[8];
    char t122[8];
    char t130[8];
    char t158[8];
    char t166[8];
    char t208[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    char *t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    char *t171;
    char *t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    int t190;
    int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;
    char *t206;
    char *t207;
    char *t209;
    char *t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    unsigned int t216;
    unsigned int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    char *t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    char *t231;

LAB0:    t1 = (t0 + 8056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 8752);
    *((int *)t2) = 1;
    t3 = (t0 + 8088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 3232U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    memcpy(t60, t22, 8);

LAB16:    t92 = (t60 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB28;

LAB29:    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB34;

LAB31:    if (t18 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;

LAB34:    memset(t22, 0, 8);
    t8 = (t6 + 4);
    t24 = *((unsigned int *)t8);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t8) != 0)
        goto LAB37;

LAB38:    t23 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t23);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB39;

LAB40:    memcpy(t60, t22, 8);

LAB41:    t74 = (t60 + 4);
    t93 = *((unsigned int *)t74);
    t94 = (~(t93));
    t95 = *((unsigned int *)t60);
    t96 = (t95 & t94);
    t97 = (t96 != 0);
    if (t97 > 0)
        goto LAB53;

LAB54:    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB58;

LAB56:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB58;

LAB57:    *((unsigned int *)t6) = 1;

LAB58:    memset(t22, 0, 8);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t7) != 0)
        goto LAB61;

LAB62:    t21 = (t22 + 4);
    t14 = *((unsigned int *)t22);
    t15 = (!(t14));
    t16 = *((unsigned int *)t21);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB63;

LAB64:    memcpy(t60, t22, 8);

LAB65:    memset(t100, 0, 8);
    t66 = (t60 + 4);
    t73 = *((unsigned int *)t66);
    t76 = (~(t73));
    t77 = *((unsigned int *)t60);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t66) != 0)
        goto LAB79;

LAB80:    t75 = (t100 + 4);
    t80 = *((unsigned int *)t100);
    t81 = *((unsigned int *)t75);
    t82 = (t80 || t81);
    if (t82 > 0)
        goto LAB81;

LAB82:    memcpy(t166, t100, 8);

LAB83:    t198 = (t166 + 4);
    t199 = *((unsigned int *)t198);
    t200 = (~(t199));
    t201 = *((unsigned int *)t166);
    t202 = (t201 & t200);
    t203 = (t202 != 0);
    if (t203 > 0)
        goto LAB112;

LAB113:    t2 = (t0 + 3232U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng35)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB124;

LAB122:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB124;

LAB123:    *((unsigned int *)t6) = 1;

LAB124:    memset(t22, 0, 8);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t7) != 0)
        goto LAB127;

LAB128:    t21 = (t22 + 4);
    t14 = *((unsigned int *)t22);
    t15 = (!(t14));
    t16 = *((unsigned int *)t21);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB129;

LAB130:    memcpy(t60, t22, 8);

LAB131:    t66 = (t60 + 4);
    t73 = *((unsigned int *)t66);
    t76 = (~(t73));
    t77 = *((unsigned int *)t60);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB143;

LAB144:
LAB145:
LAB114:
LAB55:
LAB30:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB12:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = (t0 + 3392U);
    t35 = *((char **)t34);
    t34 = ((char*)((ng5)));
    memset(t36, 0, 8);
    t37 = (t35 + 4);
    t38 = (t34 + 4);
    t39 = *((unsigned int *)t35);
    t40 = *((unsigned int *)t34);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t38);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB20;

LAB17:    if (t48 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t36) = 1;

LAB20:    memset(t52, 0, 8);
    t53 = (t36 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t53) != 0)
        goto LAB23;

LAB24:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t64);
    t68 = *((unsigned int *)t65);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = *((unsigned int *)t66);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t51 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t52) = 1;
    goto LAB24;

LAB23:    t59 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t60) = (t72 | t73);
    t74 = (t22 + 4);
    t75 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t74);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t75);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t88 & t86);
    t89 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB27;

LAB28:    t98 = ((char*)((ng4)));
    t99 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t99, t98, 0, 0, 1, 0LL);
    goto LAB30;

LAB33:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t22) = 1;
    goto LAB38;

LAB37:    t21 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB38;

LAB39:    t29 = (t0 + 3392U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng4)));
    memset(t36, 0, 8);
    t34 = (t30 + 4);
    t35 = (t29 + 4);
    t39 = *((unsigned int *)t30);
    t40 = *((unsigned int *)t29);
    t41 = (t39 ^ t40);
    t42 = *((unsigned int *)t34);
    t43 = *((unsigned int *)t35);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t35);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB45;

LAB42:    if (t48 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t36) = 1;

LAB45:    memset(t52, 0, 8);
    t38 = (t36 + 4);
    t54 = *((unsigned int *)t38);
    t55 = (~(t54));
    t56 = *((unsigned int *)t36);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t38) != 0)
        goto LAB48;

LAB49:    t61 = *((unsigned int *)t22);
    t62 = *((unsigned int *)t52);
    t63 = (t61 & t62);
    *((unsigned int *)t60) = t63;
    t53 = (t22 + 4);
    t59 = (t52 + 4);
    t64 = (t60 + 4);
    t67 = *((unsigned int *)t53);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    *((unsigned int *)t64) = t69;
    t70 = *((unsigned int *)t64);
    t71 = (t70 != 0);
    if (t71 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t37 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t52) = 1;
    goto LAB49;

LAB48:    t51 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB49;

LAB50:    t72 = *((unsigned int *)t60);
    t73 = *((unsigned int *)t64);
    *((unsigned int *)t60) = (t72 | t73);
    t65 = (t22 + 4);
    t66 = (t52 + 4);
    t76 = *((unsigned int *)t22);
    t77 = (~(t76));
    t78 = *((unsigned int *)t65);
    t79 = (~(t78));
    t80 = *((unsigned int *)t52);
    t81 = (~(t80));
    t82 = *((unsigned int *)t66);
    t83 = (~(t82));
    t84 = (t77 & t79);
    t85 = (t81 & t83);
    t86 = (~(t84));
    t87 = (~(t85));
    t88 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t88 & t86);
    t89 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t89 & t87);
    t90 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t90 & t86);
    t91 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t91 & t87);
    goto LAB52;

LAB53:    t75 = ((char*)((ng5)));
    t92 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t92, t75, 0, 0, 1, 0LL);
    goto LAB55;

LAB59:    *((unsigned int *)t22) = 1;
    goto LAB62;

LAB61:    t8 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB62;

LAB63:    t23 = (t0 + 3232U);
    t29 = *((char **)t23);
    t23 = ((char*)((ng5)));
    memset(t36, 0, 8);
    t30 = (t29 + 4);
    t34 = (t23 + 4);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t23);
    t20 = (t18 ^ t19);
    t24 = *((unsigned int *)t30);
    t25 = *((unsigned int *)t34);
    t26 = (t24 ^ t25);
    t27 = (t20 | t26);
    t28 = *((unsigned int *)t30);
    t31 = *((unsigned int *)t34);
    t32 = (t28 | t31);
    t33 = (~(t32));
    t39 = (t27 & t33);
    if (t39 != 0)
        goto LAB69;

LAB66:    if (t32 != 0)
        goto LAB68;

LAB67:    *((unsigned int *)t36) = 1;

LAB69:    memset(t52, 0, 8);
    t37 = (t36 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t37) != 0)
        goto LAB72;

LAB73:    t45 = *((unsigned int *)t22);
    t46 = *((unsigned int *)t52);
    t47 = (t45 | t46);
    *((unsigned int *)t60) = t47;
    t51 = (t22 + 4);
    t53 = (t52 + 4);
    t59 = (t60 + 4);
    t48 = *((unsigned int *)t51);
    t49 = *((unsigned int *)t53);
    t50 = (t48 | t49);
    *((unsigned int *)t59) = t50;
    t54 = *((unsigned int *)t59);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB74;

LAB75:
LAB76:    goto LAB65;

LAB68:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB69;

LAB70:    *((unsigned int *)t52) = 1;
    goto LAB73;

LAB72:    t38 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB73;

LAB74:    t56 = *((unsigned int *)t60);
    t57 = *((unsigned int *)t59);
    *((unsigned int *)t60) = (t56 | t57);
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t58 = *((unsigned int *)t64);
    t61 = (~(t58));
    t62 = *((unsigned int *)t22);
    t84 = (t62 & t61);
    t63 = *((unsigned int *)t65);
    t67 = (~(t63));
    t68 = *((unsigned int *)t52);
    t85 = (t68 & t67);
    t69 = (~(t84));
    t70 = (~(t85));
    t71 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t71 & t69);
    t72 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t72 & t70);
    goto LAB76;

LAB77:    *((unsigned int *)t100) = 1;
    goto LAB80;

LAB79:    t74 = (t100 + 4);
    *((unsigned int *)t100) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB80;

LAB81:    t92 = (t0 + 3392U);
    t98 = *((char **)t92);
    t92 = ((char*)((ng0)));
    memset(t101, 0, 8);
    if (*((unsigned int *)t98) != *((unsigned int *)t92))
        goto LAB86;

LAB84:    t99 = (t98 + 4);
    t102 = (t92 + 4);
    if (*((unsigned int *)t99) != *((unsigned int *)t102))
        goto LAB86;

LAB85:    *((unsigned int *)t101) = 1;

LAB86:    memset(t103, 0, 8);
    t104 = (t101 + 4);
    t83 = *((unsigned int *)t104);
    t86 = (~(t83));
    t87 = *((unsigned int *)t101);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t104) != 0)
        goto LAB89;

LAB90:    t106 = (t103 + 4);
    t90 = *((unsigned int *)t103);
    t91 = (!(t90));
    t93 = *((unsigned int *)t106);
    t94 = (t91 || t93);
    if (t94 > 0)
        goto LAB91;

LAB92:    memcpy(t130, t103, 8);

LAB93:    memset(t158, 0, 8);
    t159 = (t130 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t130);
    t163 = (t162 & t161);
    t164 = (t163 & 1U);
    if (t164 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t159) != 0)
        goto LAB107;

LAB108:    t167 = *((unsigned int *)t100);
    t168 = *((unsigned int *)t158);
    t169 = (t167 & t168);
    *((unsigned int *)t166) = t169;
    t170 = (t100 + 4);
    t171 = (t158 + 4);
    t172 = (t166 + 4);
    t173 = *((unsigned int *)t170);
    t174 = *((unsigned int *)t171);
    t175 = (t173 | t174);
    *((unsigned int *)t172) = t175;
    t176 = *((unsigned int *)t172);
    t177 = (t176 != 0);
    if (t177 == 1)
        goto LAB109;

LAB110:
LAB111:    goto LAB83;

LAB87:    *((unsigned int *)t103) = 1;
    goto LAB90;

LAB89:    t105 = (t103 + 4);
    *((unsigned int *)t103) = 1;
    *((unsigned int *)t105) = 1;
    goto LAB90;

LAB91:    t107 = (t0 + 3392U);
    t108 = *((char **)t107);
    t107 = ((char*)((ng4)));
    memset(t109, 0, 8);
    t110 = (t108 + 4);
    t111 = (t107 + 4);
    t95 = *((unsigned int *)t108);
    t96 = *((unsigned int *)t107);
    t97 = (t95 ^ t96);
    t112 = *((unsigned int *)t110);
    t113 = *((unsigned int *)t111);
    t114 = (t112 ^ t113);
    t115 = (t97 | t114);
    t116 = *((unsigned int *)t110);
    t117 = *((unsigned int *)t111);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB97;

LAB94:    if (t118 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t109) = 1;

LAB97:    memset(t122, 0, 8);
    t123 = (t109 + 4);
    t124 = *((unsigned int *)t123);
    t125 = (~(t124));
    t126 = *((unsigned int *)t109);
    t127 = (t126 & t125);
    t128 = (t127 & 1U);
    if (t128 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t123) != 0)
        goto LAB100;

LAB101:    t131 = *((unsigned int *)t103);
    t132 = *((unsigned int *)t122);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = (t103 + 4);
    t135 = (t122 + 4);
    t136 = (t130 + 4);
    t137 = *((unsigned int *)t134);
    t138 = *((unsigned int *)t135);
    t139 = (t137 | t138);
    *((unsigned int *)t136) = t139;
    t140 = *((unsigned int *)t136);
    t141 = (t140 != 0);
    if (t141 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB93;

LAB96:    t121 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB97;

LAB98:    *((unsigned int *)t122) = 1;
    goto LAB101;

LAB100:    t129 = (t122 + 4);
    *((unsigned int *)t122) = 1;
    *((unsigned int *)t129) = 1;
    goto LAB101;

LAB102:    t142 = *((unsigned int *)t130);
    t143 = *((unsigned int *)t136);
    *((unsigned int *)t130) = (t142 | t143);
    t144 = (t103 + 4);
    t145 = (t122 + 4);
    t146 = *((unsigned int *)t144);
    t147 = (~(t146));
    t148 = *((unsigned int *)t103);
    t149 = (t148 & t147);
    t150 = *((unsigned int *)t145);
    t151 = (~(t150));
    t152 = *((unsigned int *)t122);
    t153 = (t152 & t151);
    t154 = (~(t149));
    t155 = (~(t153));
    t156 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t156 & t154);
    t157 = *((unsigned int *)t136);
    *((unsigned int *)t136) = (t157 & t155);
    goto LAB104;

LAB105:    *((unsigned int *)t158) = 1;
    goto LAB108;

LAB107:    t165 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t165) = 1;
    goto LAB108;

LAB109:    t178 = *((unsigned int *)t166);
    t179 = *((unsigned int *)t172);
    *((unsigned int *)t166) = (t178 | t179);
    t180 = (t100 + 4);
    t181 = (t158 + 4);
    t182 = *((unsigned int *)t100);
    t183 = (~(t182));
    t184 = *((unsigned int *)t180);
    t185 = (~(t184));
    t186 = *((unsigned int *)t158);
    t187 = (~(t186));
    t188 = *((unsigned int *)t181);
    t189 = (~(t188));
    t190 = (t183 & t185);
    t191 = (t187 & t189);
    t192 = (~(t190));
    t193 = (~(t191));
    t194 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t194 & t192);
    t195 = *((unsigned int *)t172);
    *((unsigned int *)t172) = (t195 & t193);
    t196 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t196 & t192);
    t197 = *((unsigned int *)t166);
    *((unsigned int *)t166) = (t197 & t193);
    goto LAB111;

LAB112:    t204 = (t0 + 4912);
    t205 = (t204 + 56U);
    t206 = *((char **)t205);
    t207 = ((char*)((ng4)));
    memset(t208, 0, 8);
    t209 = (t206 + 4);
    t210 = (t207 + 4);
    t211 = *((unsigned int *)t206);
    t212 = *((unsigned int *)t207);
    t213 = (t211 ^ t212);
    t214 = *((unsigned int *)t209);
    t215 = *((unsigned int *)t210);
    t216 = (t214 ^ t215);
    t217 = (t213 | t216);
    t218 = *((unsigned int *)t209);
    t219 = *((unsigned int *)t210);
    t220 = (t218 | t219);
    t221 = (~(t220));
    t222 = (t217 & t221);
    if (t222 != 0)
        goto LAB118;

LAB115:    if (t220 != 0)
        goto LAB117;

LAB116:    *((unsigned int *)t208) = 1;

LAB118:    t224 = (t208 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (~(t225));
    t227 = *((unsigned int *)t208);
    t228 = (t227 & t226);
    t229 = (t228 != 0);
    if (t229 > 0)
        goto LAB119;

LAB120:    t2 = ((char*)((ng35)));
    t3 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB121:    goto LAB114;

LAB117:    t223 = (t208 + 4);
    *((unsigned int *)t208) = 1;
    *((unsigned int *)t223) = 1;
    goto LAB118;

LAB119:    t230 = ((char*)((ng5)));
    t231 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t231, t230, 0, 0, 1, 0LL);
    goto LAB121;

LAB125:    *((unsigned int *)t22) = 1;
    goto LAB128;

LAB127:    t8 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB128;

LAB129:    t23 = (t0 + 3392U);
    t29 = *((char **)t23);
    t23 = ((char*)((ng35)));
    memset(t36, 0, 8);
    t30 = (t29 + 4);
    t34 = (t23 + 4);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t23);
    t20 = (t18 ^ t19);
    t24 = *((unsigned int *)t30);
    t25 = *((unsigned int *)t34);
    t26 = (t24 ^ t25);
    t27 = (t20 | t26);
    t28 = *((unsigned int *)t30);
    t31 = *((unsigned int *)t34);
    t32 = (t28 | t31);
    t33 = (~(t32));
    t39 = (t27 & t33);
    if (t39 != 0)
        goto LAB135;

LAB132:    if (t32 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t36) = 1;

LAB135:    memset(t52, 0, 8);
    t37 = (t36 + 4);
    t40 = *((unsigned int *)t37);
    t41 = (~(t40));
    t42 = *((unsigned int *)t36);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t37) != 0)
        goto LAB138;

LAB139:    t45 = *((unsigned int *)t22);
    t46 = *((unsigned int *)t52);
    t47 = (t45 | t46);
    *((unsigned int *)t60) = t47;
    t51 = (t22 + 4);
    t53 = (t52 + 4);
    t59 = (t60 + 4);
    t48 = *((unsigned int *)t51);
    t49 = *((unsigned int *)t53);
    t50 = (t48 | t49);
    *((unsigned int *)t59) = t50;
    t54 = *((unsigned int *)t59);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB140;

LAB141:
LAB142:    goto LAB131;

LAB134:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB135;

LAB136:    *((unsigned int *)t52) = 1;
    goto LAB139;

LAB138:    t38 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB139;

LAB140:    t56 = *((unsigned int *)t60);
    t57 = *((unsigned int *)t59);
    *((unsigned int *)t60) = (t56 | t57);
    t64 = (t22 + 4);
    t65 = (t52 + 4);
    t58 = *((unsigned int *)t64);
    t61 = (~(t58));
    t62 = *((unsigned int *)t22);
    t84 = (t62 & t61);
    t63 = *((unsigned int *)t65);
    t67 = (~(t63));
    t68 = *((unsigned int *)t52);
    t85 = (t68 & t67);
    t69 = (~(t84));
    t70 = (~(t85));
    t71 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t71 & t69);
    t72 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t72 & t70);
    goto LAB142;

LAB143:    t74 = ((char*)((ng35)));
    t75 = (t0 + 4272);
    xsi_vlogvar_wait_assign_value(t75, t74, 0, 0, 1, 0LL);
    goto LAB145;

}

static void Cont_154_10(char *t0)
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

LAB0:    t1 = (t0 + 8304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4272);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9360);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 8768);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void unisims_ver_m_17338975700152421123_0649738521_init()
{
	static char *pe[] = {(void *)NetDecl_58_0,(void *)Cont_60_1,(void *)Cont_61_2,(void *)Cont_62_3,(void *)Cont_63_4,(void *)Cont_65_5,(void *)Cont_66_6,(void *)Cont_67_7,(void *)Initial_69_8,(void *)Always_139_9,(void *)Cont_154_10};
	xsi_register_didat("unisims_ver_m_17338975700152421123_0649738521", "isim/tb_ddr2_interface_isim_beh.exe.sim/unisims_ver/m_17338975700152421123_0649738521.didat");
	xsi_register_executes(pe);
}
