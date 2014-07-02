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
static unsigned int ng2[] = {3U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {15, 0};
static int ng5[] = {8, 0};
static int ng6[] = {7, 0};
static int ng7[] = {4, 0};
static int ng8[] = {3, 0};
static int ng9[] = {0, 0};
static unsigned int ng10[] = {0U, 65535U};
static unsigned int ng11[] = {0U, 1U};



static void Cont_1179_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 7800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1179, ng0);
    t2 = (t0 + 2328U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB11:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB12;

LAB13:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t20);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t20) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t24, 8);

LAB20:    t30 = (t0 + 12688);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t3, 8);
    xsi_driver_vfirst_trans(t30, 0, 31);
    t35 = (t0 + 12336);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 3128U);
    t25 = *((char **)t24);
    goto LAB13;

LAB14:    t24 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t25, 32, t24, 32);
    goto LAB20;

LAB18:    memcpy(t3, t25, 8);
    goto LAB20;

}

static void Cont_1180_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 8048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1180, ng0);
    t2 = (t0 + 2328U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB11:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB12;

LAB13:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t20);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t20) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t24, 8);

LAB20:    t30 = (t0 + 12752);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t34, 0, 8);
    t35 = 15U;
    t36 = t35;
    t37 = (t3 + 4);
    t38 = *((unsigned int *)t3);
    t35 = (t35 & t38);
    t39 = *((unsigned int *)t37);
    t36 = (t36 & t39);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 | t35);
    t42 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t42 | t36);
    xsi_driver_vfirst_trans(t30, 0, 3);
    t43 = (t0 + 12352);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 3448U);
    t25 = *((char **)t24);
    goto LAB13;

LAB14:    t24 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 4, t25, 4, t24, 4);
    goto LAB20;

LAB18:    memcpy(t3, t25, 8);
    goto LAB20;

}

static void Cont_1181_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
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
    char *t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t1 = (t0 + 8296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1181, ng0);
    t2 = (t0 + 2328U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB11:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t20);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t20) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t41 = (t0 + 12816);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t45, 0, 8);
    t46 = 3U;
    t47 = t46;
    t48 = (t3 + 4);
    t49 = *((unsigned int *)t3);
    t46 = (t46 & t49);
    t50 = *((unsigned int *)t48);
    t47 = (t47 & t50);
    t51 = (t45 + 4);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 | t46);
    t53 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t53 | t47);
    xsi_driver_vfirst_trans(t41, 0, 1);
    t54 = (t0 + 12368);
    *((int *)t54) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB12:    t25 = (t0 + 2968U);
    t26 = *((char **)t25);
    memset(t24, 0, 8);
    t25 = (t24 + 4);
    t27 = (t26 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    *((unsigned int *)t24) = t29;
    *((unsigned int *)t25) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB22;

LAB21:    t34 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t34 & 3U);
    t35 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t35 & 3U);
    goto LAB13;

LAB14:    t40 = ((char*)((ng2)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 2, t24, 2, t40, 2);
    goto LAB20;

LAB18:    memcpy(t3, t24, 8);
    goto LAB20;

LAB22:    t30 = *((unsigned int *)t24);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t24) = (t30 | t31);
    t32 = *((unsigned int *)t25);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t25) = (t32 | t33);
    goto LAB21;

}

static void Always_1187_3(char *t0)
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;

LAB0:    t1 = (t0 + 8544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1187, ng0);
    t2 = (t0 + 12384);
    *((int *)t2) = 1;
    t3 = (t0 + 8576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1188, ng0);

LAB5:    xsi_set_current_line(1189, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(1190, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t2) == 0)
        goto LAB9;

LAB11:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB12:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t13);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(1191, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(1189, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(1190, ng0);
    t11 = (t0 + 2008U);
    t12 = *((char **)t11);
    t11 = (t0 + 5928);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    goto LAB15;

}

static void Cont_1194_4(char *t0)
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

LAB0:    t1 = (t0 + 8792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1194, ng0);
    t2 = (t0 + 5928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 12880);
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
    xsi_driver_vfirst_trans_delayed(t5, 0, 0, 20LL, 0);
    t18 = (t0 + 12400);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_1206_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t25[8];
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
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    int t49;
    int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;

LAB0:    t1 = (t0 + 9040U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1206, ng0);
    t2 = (t0 + 2328U);
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

LAB15:    memcpy(t3, t25, 8);

LAB16:    t57 = (t0 + 12944);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 1U;
    t63 = t62;
    t64 = (t3 + 4);
    t65 = *((unsigned int *)t3);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 0);
    t70 = (t0 + 12416);
    *((int *)t70) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = ((char*)((ng1)));
    goto LAB9;

LAB10:    t21 = (t0 + 5528U);
    t22 = *((char **)t21);
    t21 = (t0 + 5928);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t22);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t29 = (t22 + 4);
    t30 = (t24 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    t39 = (t22 + 4);
    t40 = (t24 + 4);
    t41 = *((unsigned int *)t22);
    t42 = (~(t41));
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t24);
    t46 = (~(t45));
    t47 = *((unsigned int *)t40);
    t48 = (~(t47));
    t49 = (t42 & t44);
    t50 = (t46 & t48);
    t51 = (~(t49));
    t52 = (~(t50));
    t53 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t53 & t51);
    t54 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t54 & t52);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    t56 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t56 & t52);
    goto LAB19;

}

static void Cont_1208_6(char *t0)
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
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

LAB0:    t1 = (t0 + 9288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1208, ng0);
    t2 = (t0 + 4728U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t16, 8);

LAB16:    t22 = (t0 + 13008);
    t23 = (t22 + 56U);
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
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 12432);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1848U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t16, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_1209_7(char *t0)
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
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

LAB0:    t1 = (t0 + 9536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1209, ng0);
    t2 = (t0 + 4888U);
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

LAB9:    t18 = *((unsigned int *)t4);
    t19 = (~(t18));
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t16, 8);

LAB16:    t22 = (t0 + 13072);
    t23 = (t22 + 56U);
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
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 12448);
    *((int *)t35) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 1848U);
    t17 = *((char **)t16);
    goto LAB9;

LAB10:    t16 = ((char*)((ng3)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t17, 1, t16, 1);
    goto LAB16;

LAB14:    memcpy(t3, t17, 8);
    goto LAB16;

}

static void Cont_1211_8(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char *t1;
    char *t2;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;

LAB0:    t1 = (t0 + 9784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1211, ng0);
    t2 = (t0 + 2328U);
    t6 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t6 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t12 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    memset(t4, 0, 8);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t13) != 0)
        goto LAB10;

LAB11:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB12;

LAB13:    t26 = *((unsigned int *)t4);
    t27 = (~(t26));
    t28 = *((unsigned int *)t20);
    t29 = (t27 || t28);
    if (t29 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t20) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t24, 8);

LAB20:    t30 = (t0 + 13136);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t34, 0, 8);
    t35 = 1U;
    t36 = t35;
    t37 = (t3 + 4);
    t38 = *((unsigned int *)t3);
    t35 = (t35 & t38);
    t39 = *((unsigned int *)t37);
    t36 = (t36 & t39);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t41 | t35);
    t42 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t42 | t36);
    xsi_driver_vfirst_trans(t30, 0, 0);
    t43 = (t0 + 12464);
    *((int *)t43) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB11;

LAB12:    t24 = (t0 + 2168U);
    t25 = *((char **)t24);
    goto LAB13;

LAB14:    t24 = ((char*)((ng1)));
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 1, t25, 1, t24, 1);
    goto LAB20;

LAB18:    memcpy(t3, t25, 8);
    goto LAB20;

}

static void Always_1216_9(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t42[8];
    char t43[8];
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
    char *t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 10032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1216, ng0);
    t2 = (t0 + 12480);
    *((int *)t2) = 1;
    t3 = (t0 + 10064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1217, ng0);

LAB5:    xsi_set_current_line(1218, ng0);
    t4 = (t0 + 5208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(1226, ng0);

LAB14:    xsi_set_current_line(1227, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 3);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 3);
    t26 = (t10 & 1);
    *((unsigned int *)t2) = t26;
    memset(t13, 0, 8);
    t5 = (t14 + 4);
    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t14);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t5) == 0)
        goto LAB15;

LAB17:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB18:    t12 = (t13 + 4);
    t16 = (t14 + 4);
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    *((unsigned int *)t13) = t35;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB20;

LAB19:    t40 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t40 & 1U);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & 1U);
    t17 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(1228, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t14) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 1);
    t26 = (t10 & 1);
    *((unsigned int *)t2) = t26;
    memset(t13, 0, 8);
    t5 = (t14 + 4);
    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t14);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t5) == 0)
        goto LAB21;

LAB23:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB24:    t12 = (t13 + 4);
    t16 = (t14 + 4);
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    *((unsigned int *)t13) = t35;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB26;

LAB25:    t40 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t40 & 1U);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & 1U);
    t17 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t17, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(1229, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 24);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 24);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t26 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t26 & 255U);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t14 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    *((unsigned int *)t13) = t30;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB28;

LAB27:    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & 255U);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 255U);
    t12 = (t0 + 6728);
    t16 = (t0 + 6728);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t22 = ((char*)((ng4)));
    t44 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t15, t42, t43, ((int*)(t19)), 2, t22, 32, 1, t44, 32, 1);
    t45 = (t15 + 4);
    t37 = *((unsigned int *)t45);
    t18 = (!(t37));
    t46 = (t42 + 4);
    t38 = *((unsigned int *)t46);
    t20 = (!(t38));
    t21 = (t18 && t20);
    t47 = (t43 + 4);
    t39 = *((unsigned int *)t47);
    t23 = (!(t39));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(1230, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 8);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 8);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 255U);
    t26 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t26 & 255U);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t14 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    *((unsigned int *)t13) = t30;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB32;

LAB31:    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & 255U);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 255U);
    t12 = (t0 + 6888);
    t16 = (t0 + 6888);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t22 = ((char*)((ng4)));
    t44 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t15, t42, t43, ((int*)(t19)), 2, t22, 32, 1, t44, 32, 1);
    t45 = (t15 + 4);
    t37 = *((unsigned int *)t45);
    t18 = (!(t37));
    t46 = (t42 + 4);
    t38 = *((unsigned int *)t46);
    t20 = (!(t38));
    t21 = (t18 && t20);
    t47 = (t43 + 4);
    t39 = *((unsigned int *)t47);
    t23 = (!(t39));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB33;

LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(1219, ng0);

LAB9:    xsi_set_current_line(1220, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6088);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(1221, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(1222, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6728);
    t4 = (t0 + 6728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    t16 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t11)), 2, t12, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t20 = (!(t7));
    t21 = (t18 && t20);
    t22 = (t15 + 4);
    t8 = *((unsigned int *)t22);
    t23 = (!(t8));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(1223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng4)));
    t16 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t11)), 2, t12, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t20 = (!(t7));
    t21 = (t18 && t20);
    t22 = (t15 + 4);
    t8 = *((unsigned int *)t22);
    t23 = (!(t8));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t9 = *((unsigned int *)t15);
    t25 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t10 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t25, *((unsigned int *)t14), t28, 0LL);
    goto LAB11;

LAB12:    t9 = *((unsigned int *)t15);
    t25 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t10 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t25, *((unsigned int *)t14), t28, 0LL);
    goto LAB13;

LAB15:    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB20:    t36 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t13) = (t36 | t37);
    t38 = *((unsigned int *)t12);
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t12) = (t38 | t39);
    goto LAB19;

LAB21:    *((unsigned int *)t13) = 1;
    goto LAB24;

LAB26:    t36 = *((unsigned int *)t13);
    t37 = *((unsigned int *)t16);
    *((unsigned int *)t13) = (t36 | t37);
    t38 = *((unsigned int *)t12);
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t12) = (t38 | t39);
    goto LAB25;

LAB28:    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t31 | t32);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t33 | t34);
    goto LAB27;

LAB29:    t40 = *((unsigned int *)t43);
    t25 = (t40 + 0);
    t41 = *((unsigned int *)t15);
    t48 = *((unsigned int *)t42);
    t27 = (t41 - t48);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t25, *((unsigned int *)t42), t28, 0LL);
    goto LAB30;

LAB32:    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t31 | t32);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t33 | t34);
    goto LAB31;

LAB33:    t40 = *((unsigned int *)t43);
    t25 = (t40 + 0);
    t41 = *((unsigned int *)t15);
    t48 = *((unsigned int *)t42);
    t27 = (t41 - t48);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t25, *((unsigned int *)t42), t28, 0LL);
    goto LAB34;

}

static void Always_1234_10(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t41[8];
    char t42[8];
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
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 10280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1234, ng0);
    t2 = (t0 + 12496);
    *((int *)t2) = 1;
    t3 = (t0 + 10312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1235, ng0);

LAB5:    xsi_set_current_line(1236, ng0);
    t4 = (t0 + 5368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(1242, ng0);

LAB14:    xsi_set_current_line(1243, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 15U);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t14 + 4);
    t25 = *((unsigned int *)t14);
    t29 = (~(t25));
    *((unsigned int *)t13) = t29;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB16;

LAB15:    t39 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t39 & 15U);
    t40 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t40 & 15U);
    t12 = (t0 + 6728);
    t16 = (t0 + 6728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    t20 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t15, t41, t42, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t15 + 4);
    t43 = *((unsigned int *)t21);
    t23 = (!(t43));
    t24 = (t41 + 4);
    t44 = *((unsigned int *)t24);
    t26 = (!(t44));
    t27 = (t23 && t26);
    t28 = (t42 + 4);
    t45 = *((unsigned int *)t28);
    t30 = (!(t45));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(1244, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 4);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 4);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t22 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t22 & 15U);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t14 + 4);
    t25 = *((unsigned int *)t14);
    t29 = (~(t25));
    *((unsigned int *)t13) = t29;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB20;

LAB19:    t39 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t39 & 15U);
    t40 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t40 & 15U);
    t12 = (t0 + 6888);
    t16 = (t0 + 6888);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    t20 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t15, t41, t42, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t15 + 4);
    t43 = *((unsigned int *)t21);
    t23 = (!(t43));
    t24 = (t41 + 4);
    t44 = *((unsigned int *)t24);
    t26 = (!(t44));
    t27 = (t23 && t26);
    t28 = (t42 + 4);
    t45 = *((unsigned int *)t28);
    t30 = (!(t45));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB21;

LAB22:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(1237, ng0);

LAB9:    xsi_set_current_line(1238, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6728);
    t16 = (t0 + 6728);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng6)));
    t20 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t18)), 2, t19, 32, 1, t20, 32, 1);
    t21 = (t13 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    t24 = (t14 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t23 && t26);
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(1239, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng6)));
    t16 = ((char*)((ng7)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t11)), 2, t12, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t23 = (!(t6));
    t18 = (t14 + 4);
    t7 = *((unsigned int *)t18);
    t26 = (!(t7));
    t27 = (t23 && t26);
    t19 = (t15 + 4);
    t8 = *((unsigned int *)t19);
    t30 = (!(t8));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t32 = *((unsigned int *)t15);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t13);
    t35 = *((unsigned int *)t14);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t11, t33, *((unsigned int *)t14), t37, 0LL);
    goto LAB11;

LAB12:    t9 = *((unsigned int *)t15);
    t33 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t14);
    t36 = (t10 - t22);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t33, *((unsigned int *)t14), t37, 0LL);
    goto LAB13;

LAB16:    t32 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t32 | t34);
    t35 = *((unsigned int *)t5);
    t38 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t35 | t38);
    goto LAB15;

LAB17:    t46 = *((unsigned int *)t42);
    t33 = (t46 + 0);
    t47 = *((unsigned int *)t15);
    t48 = *((unsigned int *)t41);
    t36 = (t47 - t48);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t33, *((unsigned int *)t41), t37, 0LL);
    goto LAB18;

LAB20:    t32 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t32 | t34);
    t35 = *((unsigned int *)t5);
    t38 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t35 | t38);
    goto LAB19;

LAB21:    t46 = *((unsigned int *)t42);
    t33 = (t46 + 0);
    t47 = *((unsigned int *)t15);
    t48 = *((unsigned int *)t41);
    t36 = (t47 - t48);
    t37 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t33, *((unsigned int *)t41), t37, 0LL);
    goto LAB22;

}

static void Always_1248_11(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t37[8];
    char t38[8];
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
    char *t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    int t21;
    char *t22;
    int t23;
    int t24;
    int t25;
    unsigned int t26;
    int t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t39;
    char *t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 10528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1248, ng0);
    t2 = (t0 + 12512);
    *((int *)t2) = 1;
    t3 = (t0 + 10560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(1249, ng0);

LAB5:    xsi_set_current_line(1250, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(1258, ng0);

LAB14:    xsi_set_current_line(1259, ng0);
    t2 = (t0 + 4408U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB18:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t26 = *((unsigned int *)t3);
    t29 = (~(t26));
    *((unsigned int *)t13) = t29;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB20;

LAB19:    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & 1U);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & 1U);
    t12 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(1260, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t2) == 0)
        goto LAB21;

LAB23:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB24:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t26 = *((unsigned int *)t3);
    t29 = (~(t26));
    *((unsigned int *)t13) = t29;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB26;

LAB25:    t34 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t34 & 1U);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & 1U);
    t12 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(1261, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t26 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t26 & 15U);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t14 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    *((unsigned int *)t13) = t30;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB28;

LAB27:    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & 15U);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 15U);
    t12 = (t0 + 6728);
    t16 = (t0 + 6728);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t22 = ((char*)((ng8)));
    t39 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t15, t37, t38, ((int*)(t19)), 2, t22, 32, 1, t39, 32, 1);
    t40 = (t15 + 4);
    t41 = *((unsigned int *)t40);
    t18 = (!(t41));
    t42 = (t37 + 4);
    t43 = *((unsigned int *)t42);
    t20 = (!(t43));
    t21 = (t18 && t20);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t44);
    t23 = (!(t45));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(1262, ng0);
    t2 = (t0 + 3768U);
    t3 = *((char **)t2);
    memset(t14, 0, 8);
    t2 = (t14 + 4);
    t4 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 15U);
    t26 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t26 & 15U);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t14 + 4);
    t29 = *((unsigned int *)t14);
    t30 = (~(t29));
    *((unsigned int *)t13) = t30;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB32;

LAB31:    t35 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t35 & 15U);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 15U);
    t12 = (t0 + 6888);
    t16 = (t0 + 6888);
    t17 = (t16 + 72U);
    t19 = *((char **)t17);
    t22 = ((char*)((ng8)));
    t39 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t15, t37, t38, ((int*)(t19)), 2, t22, 32, 1, t39, 32, 1);
    t40 = (t15 + 4);
    t41 = *((unsigned int *)t40);
    t18 = (!(t41));
    t42 = (t37 + 4);
    t43 = *((unsigned int *)t42);
    t20 = (!(t43));
    t21 = (t18 && t20);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t44);
    t23 = (!(t45));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB33;

LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(1251, ng0);

LAB9:    xsi_set_current_line(1252, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 6408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(1253, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(1254, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6728);
    t4 = (t0 + 6728);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng8)));
    t16 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t11)), 2, t12, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t20 = (!(t7));
    t21 = (t18 && t20);
    t22 = (t15 + 4);
    t8 = *((unsigned int *)t22);
    t23 = (!(t8));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(1255, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6888);
    t4 = (t0 + 6888);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng8)));
    t16 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t13, t14, t15, ((int*)(t11)), 2, t12, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t18 = (!(t6));
    t19 = (t14 + 4);
    t7 = *((unsigned int *)t19);
    t20 = (!(t7));
    t21 = (t18 && t20);
    t22 = (t15 + 4);
    t8 = *((unsigned int *)t22);
    t23 = (!(t8));
    t24 = (t21 && t23);
    if (t24 == 1)
        goto LAB12;

LAB13:    goto LAB8;

LAB10:    t9 = *((unsigned int *)t15);
    t25 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t10 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t25, *((unsigned int *)t14), t28, 0LL);
    goto LAB11;

LAB12:    t9 = *((unsigned int *)t15);
    t25 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t14);
    t27 = (t10 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t25, *((unsigned int *)t14), t28, 0LL);
    goto LAB13;

LAB15:    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB20:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t30 | t31);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t32 | t33);
    goto LAB19;

LAB21:    *((unsigned int *)t13) = 1;
    goto LAB24;

LAB26:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t30 | t31);
    t32 = *((unsigned int *)t5);
    t33 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t32 | t33);
    goto LAB25;

LAB28:    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t31 | t32);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t33 | t34);
    goto LAB27;

LAB29:    t46 = *((unsigned int *)t38);
    t25 = (t46 + 0);
    t47 = *((unsigned int *)t15);
    t48 = *((unsigned int *)t37);
    t27 = (t47 - t48);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t25, *((unsigned int *)t37), t28, 0LL);
    goto LAB30;

LAB32:    t31 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t31 | t32);
    t33 = *((unsigned int *)t5);
    t34 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t33 | t34);
    goto LAB31;

LAB33:    t46 = *((unsigned int *)t38);
    t25 = (t46 + 0);
    t47 = *((unsigned int *)t15);
    t48 = *((unsigned int *)t37);
    t27 = (t47 - t48);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t12, t13, t25, *((unsigned int *)t37), t28, 0LL);
    goto LAB34;

}

static void Cont_1268_12(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 10776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1268, ng0);
    t2 = (t0 + 1048U);
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

LAB9:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t12);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t43, 8);

LAB16:    t44 = (t0 + 13200);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 65535U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans_delayed(t44, 0, 15, 5LL, 0);
    t57 = (t0 + 12528);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 6888);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 65535U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 65535U);
    memset(t16, 0, 8);
    t29 = (t16 + 4);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    *((unsigned int *)t16) = t32;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB18;

LAB17:    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 65535U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 65535U);
    goto LAB9;

LAB10:    t43 = ((char*)((ng10)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t16, 16, t43, 16);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB18:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t30);
    *((unsigned int *)t16) = (t33 | t34);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t35 | t36);
    goto LAB17;

}

static void Cont_1270_13(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
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
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;

LAB0:    t1 = (t0 + 11024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1270, ng0);
    t2 = (t0 + 1048U);
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

LAB9:    t39 = *((unsigned int *)t4);
    t40 = (~(t39));
    t41 = *((unsigned int *)t12);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t43, 8);

LAB16:    t44 = (t0 + 13264);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 65535U;
    t50 = t49;
    t51 = (t3 + 4);
    t52 = *((unsigned int *)t3);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans_delayed(t44, 0, 15, 5LL, 0);
    t57 = (t0 + 12544);
    *((int *)t57) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 6728);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 65535U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 65535U);
    memset(t16, 0, 8);
    t29 = (t16 + 4);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t17);
    t32 = (~(t31));
    *((unsigned int *)t16) = t32;
    *((unsigned int *)t29) = 0;
    if (*((unsigned int *)t30) != 0)
        goto LAB18;

LAB17:    t37 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t37 & 65535U);
    t38 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t38 & 65535U);
    goto LAB9;

LAB10:    t43 = ((char*)((ng10)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 16, t16, 16, t43, 16);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB18:    t33 = *((unsigned int *)t16);
    t34 = *((unsigned int *)t30);
    *((unsigned int *)t16) = (t33 | t34);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t30);
    *((unsigned int *)t29) = (t35 | t36);
    goto LAB17;

}

static void Cont_1272_14(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 11272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1272, ng0);
    t2 = (t0 + 1048U);
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

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t42 = (t0 + 13328);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans_delayed(t42, 0, 0, 5LL, 0);
    t55 = (t0 + 12560);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 6088);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;

LAB20:    t27 = (t16 + 4);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB21:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    goto LAB9;

LAB10:    t41 = ((char*)((ng11)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB21;

}

static void Cont_1273_15(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 11520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1273, ng0);
    t2 = (t0 + 1048U);
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

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t42 = (t0 + 13392);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans_delayed(t42, 0, 0, 5LL, 0);
    t55 = (t0 + 12576);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 6248);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;

LAB20:    t27 = (t16 + 4);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB21:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    goto LAB9;

LAB10:    t41 = ((char*)((ng11)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB21;

}

static void Cont_1274_16(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 11768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1274, ng0);
    t2 = (t0 + 1048U);
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

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t42 = (t0 + 13456);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans_delayed(t42, 0, 0, 5LL, 0);
    t55 = (t0 + 12592);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 6408);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;

LAB20:    t27 = (t16 + 4);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB21:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    goto LAB9;

LAB10:    t41 = ((char*)((ng11)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB21;

}

static void Cont_1275_17(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;

LAB0:    t1 = (t0 + 12016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1275, ng0);
    t2 = (t0 + 1048U);
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

LAB9:    t37 = *((unsigned int *)t4);
    t38 = (~(t37));
    t39 = *((unsigned int *)t12);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t41, 8);

LAB16:    t42 = (t0 + 13520);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memset(t46, 0, 8);
    t47 = 1U;
    t48 = t47;
    t49 = (t3 + 4);
    t50 = *((unsigned int *)t3);
    t47 = (t47 & t50);
    t51 = *((unsigned int *)t49);
    t48 = (t48 & t51);
    t52 = (t46 + 4);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t53 | t47);
    t54 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t54 | t48);
    xsi_driver_vfirst_trans_delayed(t42, 0, 0, 5LL, 0);
    t55 = (t0 + 12608);
    *((int *)t55) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 6568);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;

LAB20:    t27 = (t16 + 4);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB21:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    goto LAB9;

LAB10:    t41 = ((char*)((ng11)));
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t16, 1, t41, 1);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB21;

}


extern void secureip_m_13411643952915227105_3943434549_init()
{
	static char *pe[] = {(void *)Cont_1179_0,(void *)Cont_1180_1,(void *)Cont_1181_2,(void *)Always_1187_3,(void *)Cont_1194_4,(void *)Cont_1206_5,(void *)Cont_1208_6,(void *)Cont_1209_7,(void *)Cont_1211_8,(void *)Always_1216_9,(void *)Always_1234_10,(void *)Always_1248_11,(void *)Cont_1268_12,(void *)Cont_1270_13,(void *)Cont_1272_14,(void *)Cont_1273_15,(void *)Cont_1274_16,(void *)Cont_1275_17};
	xsi_register_didat("secureip_m_13411643952915227105_3943434549", "isim/tb_example_top_isim_beh.exe.sim/secureip/m_13411643952915227105_3943434549.didat");
	xsi_register_executes(pe);
}
