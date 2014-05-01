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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_cmd_module.v";
static unsigned int ng1[] = {511U, 0U};
static unsigned int ng2[] = {0U, 511U};
static unsigned int ng3[] = {1073741823U, 0U};
static unsigned int ng4[] = {0U, 1073741823U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {4294967295U, 0U, 63U, 0U};



static void NetDecl_391_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 15608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(391, ng0);
    t2 = (t0 + 12376U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 63U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t0 + 19968);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t15, 0, 8);
    t16 = 1U;
    t17 = t16;
    t18 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t16 = (t16 & t19);
    t20 = *((unsigned int *)t18);
    t17 = (t17 & t20);
    t21 = (t15 + 4);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 | t16);
    t23 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t23 | t17);
    xsi_driver_vfirst_trans(t11, 0, 0U);
    t24 = (t0 + 19648);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

}

static void Cont_393_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t39[8];
    char t40[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 15856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(393, ng0);
    t2 = (t0 + 2136U);
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

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t4, 0, 8);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t4 + 4);
    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t30) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t39, 8);

LAB22:    t59 = (t0 + 20032);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t63, 0, 8);
    t64 = 511U;
    t65 = t64;
    t66 = (t3 + 4);
    t67 = *((unsigned int *)t3);
    t64 = (t64 & t67);
    t68 = *((unsigned int *)t66);
    t65 = (t65 & t68);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t70 | t64);
    t71 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t71 | t65);
    xsi_driver_vfirst_trans_delayed(t59, 0, 8, 0LL, 0);
    t72 = (t0 + 19664);
    *((int *)t72) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = ((char*)((ng1)));
    goto LAB15;

LAB16:    t41 = (t0 + 12536U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t41 = (t42 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t42);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t41) != 0)
        goto LAB25;

LAB26:    t49 = (t40 + 4);
    t50 = *((unsigned int *)t40);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB27;

LAB28:    t55 = *((unsigned int *)t40);
    t56 = (~(t55));
    t57 = *((unsigned int *)t49);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t49) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t40) > 0)
        goto LAB33;

LAB34:    memcpy(t39, t53, 8);

LAB35:    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 9, t34, 9, t39, 9);
    goto LAB22;

LAB20:    memcpy(t3, t34, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB25:    t48 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB26;

LAB27:    t53 = (t0 + 4856U);
    t54 = *((char **)t53);
    goto LAB28;

LAB29:    t53 = ((char*)((ng2)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t39, 9, t54, 9, t53, 9);
    goto LAB35;

LAB33:    memcpy(t39, t54, 8);
    goto LAB35;

}

static void Cont_394_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t5[8];
    char t39[8];
    char t40[8];
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
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;

LAB0:    t1 = (t0 + 16104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(394, ng0);
    t2 = (t0 + 2136U);
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

LAB7:    t13 = (t5 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t5) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    memset(t4, 0, 8);
    t23 = (t5 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t5);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t23) != 0)
        goto LAB12;

LAB13:    t30 = (t4 + 4);
    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB14;

LAB15:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t30);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t30) > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t4) > 0)
        goto LAB20;

LAB21:    memcpy(t3, t39, 8);

LAB22:    t59 = (t0 + 20096);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memset(t63, 0, 8);
    t64 = 1073741823U;
    t65 = t64;
    t66 = (t3 + 4);
    t67 = *((unsigned int *)t3);
    t64 = (t64 & t67);
    t68 = *((unsigned int *)t66);
    t65 = (t65 & t68);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t70 | t64);
    t71 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t71 | t65);
    xsi_driver_vfirst_trans_delayed(t59, 0, 29, 0LL, 0);
    t72 = (t0 + 19680);
    *((int *)t72) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t5) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

LAB10:    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB12:    t29 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB13;

LAB14:    t34 = ((char*)((ng3)));
    goto LAB15;

LAB16:    t41 = (t0 + 12536U);
    t42 = *((char **)t41);
    memset(t40, 0, 8);
    t41 = (t42 + 4);
    t43 = *((unsigned int *)t41);
    t44 = (~(t43));
    t45 = *((unsigned int *)t42);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t41) != 0)
        goto LAB25;

LAB26:    t49 = (t40 + 4);
    t50 = *((unsigned int *)t40);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB27;

LAB28:    t55 = *((unsigned int *)t40);
    t56 = (~(t55));
    t57 = *((unsigned int *)t49);
    t58 = (t56 || t57);
    if (t58 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t49) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t40) > 0)
        goto LAB33;

LAB34:    memcpy(t39, t53, 8);

LAB35:    goto LAB17;

LAB18:    xsi_vlog_unsigned_bit_combine(t3, 30, t34, 30, t39, 30);
    goto LAB22;

LAB20:    memcpy(t3, t34, 8);
    goto LAB22;

LAB23:    *((unsigned int *)t40) = 1;
    goto LAB26;

LAB25:    t48 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB26;

LAB27:    t53 = (t0 + 4696U);
    t54 = *((char **)t53);
    goto LAB28;

LAB29:    t53 = ((char*)((ng4)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t39, 30, t54, 30, t53, 30);
    goto LAB35;

LAB33:    memcpy(t39, t54, 8);
    goto LAB35;

}

static void NetDecl_396_3(char *t0)
{
    char t3[16];
    char t4[8];
    char t5[8];
    char t8[8];
    char t42[16];
    char *t1;
    char *t2;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 16352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(349, ng0);
    t2 = (t0 + 2136U);
    t6 = *((char **)t2);
    t2 = (t0 + 4536U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t5, 2, 2, 2U, t7, 1, t6, 1);
    t2 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB7;

LAB4:    if (t20 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t8) = 1;

LAB7:    memset(t4, 0, 8);
    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t24) != 0)
        goto LAB10;

LAB11:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t4);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t31) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 16);

LAB20:    t43 = (t0 + 20160);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    xsi_vlog_bit_copy(t47, 0, t3, 0, 39);
    xsi_driver_vfirst_trans(t43, 0, 38U);
    t48 = (t0 + 19696);
    *((int *)t48) = 1;

LAB1:    return;
LAB6:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB11;

LAB12:    t35 = ((char*)((ng6)));
    goto LAB13;

LAB14:    t40 = (t0 + 4856U);
    t41 = *((char **)t40);
    memcpy(t42, t41, 8);
    t40 = (t42 + 8);
    memset(t40, 0, 8);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 39, t35, 39, t42, 39);
    goto LAB20;

LAB18:    memcpy(t3, t35, 16);
    goto LAB20;

}

static void NetDecl_398_4(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 16600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(398, ng0);
    t2 = (t0 + 11896U);
    t4 = *((char **)t2);
    t2 = (t0 + 11736U);
    t5 = *((char **)t2);
    t2 = (t0 + 11576U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 30, 30, 3U, t6, 3, t5, 15, t4, 12);
    t2 = (t0 + 20224);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 1073741823U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 29U);
    t19 = (t0 + 19712);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_399_5(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 16848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(399, ng0);
    t2 = (t0 + 9016U);
    t4 = *((char **)t2);
    t2 = (t0 + 8856U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 9, 9, 2U, t5, 6, t4, 3);
    t2 = (t0 + 20288);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 511U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 8U);
    t18 = (t0 + 19728);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_401_6(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 17096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(401, ng0);
    t2 = (t0 + 11416U);
    t4 = *((char **)t2);
    t2 = (t0 + 11256U);
    t5 = *((char **)t2);
    t2 = (t0 + 11096U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 30, 30, 3U, t6, 3, t5, 15, t4, 12);
    t2 = (t0 + 20352);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 1073741823U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 29U);
    t19 = (t0 + 19744);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_402_7(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 17344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(402, ng0);
    t2 = (t0 + 8696U);
    t4 = *((char **)t2);
    t2 = (t0 + 8536U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 9, 9, 2U, t5, 6, t4, 3);
    t2 = (t0 + 20416);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 511U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 8U);
    t18 = (t0 + 19760);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_404_8(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 17592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(404, ng0);
    t2 = (t0 + 10936U);
    t4 = *((char **)t2);
    t2 = (t0 + 10776U);
    t5 = *((char **)t2);
    t2 = (t0 + 10616U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 30, 30, 3U, t6, 3, t5, 15, t4, 12);
    t2 = (t0 + 20480);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 1073741823U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 29U);
    t19 = (t0 + 19776);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_405_9(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 17840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(405, ng0);
    t2 = (t0 + 8376U);
    t4 = *((char **)t2);
    t2 = (t0 + 8216U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 9, 9, 2U, t5, 6, t4, 3);
    t2 = (t0 + 20544);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 511U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 8U);
    t18 = (t0 + 19792);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_407_10(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 18088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(407, ng0);
    t2 = (t0 + 10456U);
    t4 = *((char **)t2);
    t2 = (t0 + 10296U);
    t5 = *((char **)t2);
    t2 = (t0 + 10136U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 30, 30, 3U, t6, 3, t5, 15, t4, 12);
    t2 = (t0 + 20608);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 1073741823U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 29U);
    t19 = (t0 + 19808);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_408_11(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 18336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(408, ng0);
    t2 = (t0 + 8056U);
    t4 = *((char **)t2);
    t2 = (t0 + 7896U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 9, 9, 2U, t5, 6, t4, 3);
    t2 = (t0 + 20672);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 511U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 8U);
    t18 = (t0 + 19824);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_410_12(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 18584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(410, ng0);
    t2 = (t0 + 9976U);
    t4 = *((char **)t2);
    t2 = (t0 + 9816U);
    t5 = *((char **)t2);
    t2 = (t0 + 9656U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 30, 30, 3U, t6, 3, t5, 15, t4, 12);
    t2 = (t0 + 20736);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 1073741823U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 29U);
    t19 = (t0 + 19840);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_411_13(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 18832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(411, ng0);
    t2 = (t0 + 7736U);
    t4 = *((char **)t2);
    t2 = (t0 + 7576U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 9, 9, 2U, t5, 6, t4, 3);
    t2 = (t0 + 20800);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 511U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 8U);
    t18 = (t0 + 19856);
    *((int *)t18) = 1;

LAB1:    return;
}

static void NetDecl_413_14(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 19080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(413, ng0);
    t2 = (t0 + 9496U);
    t4 = *((char **)t2);
    t2 = (t0 + 9336U);
    t5 = *((char **)t2);
    t2 = (t0 + 9176U);
    t6 = *((char **)t2);
    xsi_vlogtype_concat(t3, 30, 30, 3U, t6, 3, t5, 15, t4, 12);
    t2 = (t0 + 20864);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t10, 0, 8);
    t11 = 1073741823U;
    t12 = t11;
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t11 = (t11 & t14);
    t15 = *((unsigned int *)t13);
    t12 = (t12 & t15);
    t16 = (t10 + 4);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t17 | t11);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 | t12);
    xsi_driver_vfirst_trans(t2, 0, 29U);
    t19 = (t0 + 19872);
    *((int *)t19) = 1;

LAB1:    return;
}

static void NetDecl_414_15(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
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

LAB0:    t1 = (t0 + 19328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(414, ng0);
    t2 = (t0 + 7416U);
    t4 = *((char **)t2);
    t2 = (t0 + 7256U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t3, 9, 9, 2U, t5, 6, t4, 3);
    t2 = (t0 + 20928);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 511U;
    t11 = t10;
    t12 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t2, 0, 8U);
    t18 = (t0 + 19888);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void secureip_m_15597028205932054299_3320796774_init()
{
	static char *pe[] = {(void *)NetDecl_391_0,(void *)Cont_393_1,(void *)Cont_394_2,(void *)NetDecl_396_3,(void *)NetDecl_398_4,(void *)NetDecl_399_5,(void *)NetDecl_401_6,(void *)NetDecl_402_7,(void *)NetDecl_404_8,(void *)NetDecl_405_9,(void *)NetDecl_407_10,(void *)NetDecl_408_11,(void *)NetDecl_410_12,(void *)NetDecl_411_13,(void *)NetDecl_413_14,(void *)NetDecl_414_15};
	xsi_register_didat("secureip_m_15597028205932054299_3320796774", "isim/tb_VmodCAM_Ref_isim_beh.exe.sim/secureip/m_15597028205932054299_3320796774.didat");
	xsi_register_executes(pe);
}
