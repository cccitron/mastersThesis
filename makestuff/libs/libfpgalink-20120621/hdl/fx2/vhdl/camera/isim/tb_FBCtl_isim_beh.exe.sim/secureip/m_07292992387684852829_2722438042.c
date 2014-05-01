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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_dqs_first_ldqs.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};

static void NetReassign_42_4(char *);
static void NetReassign_43_5(char *);
static void NetReassign_44_6(char *);
static void NetReassign_45_7(char *);


static void Cont_33_0(char *t0)
{
    char t4[8];
    char t16[8];
    char t25[8];
    char t33[8];
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
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;

LAB0:    t1 = (t0 + 4120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1528U);
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

LAB9:    memcpy(t33, t4, 8);

LAB10:    t61 = (t0 + 6368);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memset(t65, 0, 8);
    t66 = 1U;
    t67 = t66;
    t68 = (t33 + 4);
    t69 = *((unsigned int *)t33);
    t66 = (t66 & t69);
    t70 = *((unsigned int *)t68);
    t67 = (t67 & t70);
    t71 = (t65 + 4);
    t72 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t72 | t66);
    t73 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t73 | t67);
    xsi_driver_vfirst_trans(t61, 0, 0);
    t74 = (t0 + 6176);
    *((int *)t74) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB7;

LAB8:    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t18 + 4);
    t19 = *((unsigned int *)t17);
    t20 = (~(t19));
    t21 = *((unsigned int *)t18);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t17) == 0)
        goto LAB11;

LAB13:    t24 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t24) = 1;

LAB14:    memset(t25, 0, 8);
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t16);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t26) != 0)
        goto LAB17;

LAB18:    t34 = *((unsigned int *)t4);
    t35 = *((unsigned int *)t25);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = (t4 + 4);
    t38 = (t25 + 4);
    t39 = (t33 + 4);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t42 = (t40 | t41);
    *((unsigned int *)t39) = t42;
    t43 = *((unsigned int *)t39);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB10;

LAB11:    *((unsigned int *)t16) = 1;
    goto LAB14;

LAB15:    *((unsigned int *)t25) = 1;
    goto LAB18;

LAB17:    t32 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB18;

LAB19:    t45 = *((unsigned int *)t33);
    t46 = *((unsigned int *)t39);
    *((unsigned int *)t33) = (t45 | t46);
    t47 = (t4 + 4);
    t48 = (t25 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t4);
    t52 = (t51 & t50);
    t53 = *((unsigned int *)t48);
    t54 = (~(t53));
    t55 = *((unsigned int *)t25);
    t56 = (t55 & t54);
    t57 = (~(t52));
    t58 = (~(t56));
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t59 & t57);
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    goto LAB21;

}

static void Always_35_1(char *t0)
{
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

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 6192);
    *((int *)t2) = 1;
    t3 = (t0 + 4400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB8;

LAB9:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB10:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB7;

LAB8:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB10;

}

static void Always_40_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 6208);
    *((int *)t2) = 1;
    t3 = (t0 + 4648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);

LAB5:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 3208);
    xsi_set_assignedflag(t7);
    t8 = (t0 + 7880);
    *((int *)t8) = 1;
    NetReassign_42_4(t0);
    goto LAB14;

LAB8:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 3208);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7884);
    *((int *)t4) = 1;
    NetReassign_43_5(t0);
    goto LAB14;

LAB10:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 3208);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7888);
    *((int *)t4) = 1;
    NetReassign_44_6(t0);
    goto LAB14;

LAB12:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 3208);
    xsi_set_assignedflag(t3);
    t4 = (t0 + 7892);
    *((int *)t4) = 1;
    NetReassign_45_7(t0);
    goto LAB14;

}

static void Always_48_3(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    int t50;
    int t51;
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
    char *t66;

LAB0:    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 6224);
    *((int *)t2) = 1;
    t3 = (t0 + 4896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB8:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB9;

LAB10:    memcpy(t26, t6, 8);

LAB11:    t58 = (t26 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t26);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB26;

LAB24:    if (*((unsigned int *)t2) == 0)
        goto LAB23;

LAB25:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;

LAB26:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t20 = (t16 & t15);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB29:
LAB21:    goto LAB2;

LAB5:    *((unsigned int *)t6) = 1;
    goto LAB8;

LAB7:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB8;

LAB9:    t17 = (t0 + 1048U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t17) != 0)
        goto LAB14;

LAB15:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t30 = (t6 + 4);
    t31 = (t19 + 4);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t31);
    t35 = (t33 | t34);
    *((unsigned int *)t32) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB16;

LAB17:
LAB18:    goto LAB11;

LAB12:    *((unsigned int *)t19) = 1;
    goto LAB15;

LAB14:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB15;

LAB16:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t32);
    *((unsigned int *)t26) = (t38 | t39);
    t40 = (t6 + 4);
    t41 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t40);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t41);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t54 & t52);
    t55 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB18;

LAB19:    xsi_set_current_line(49, ng0);
    t64 = (t0 + 4672);
    xsi_process_wait(t64, 30LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(49, ng0);
    t65 = ((char*)((ng2)));
    t66 = (t0 + 3048);
    xsi_vlogvar_assign_value(t66, t65, 0, 0, 1);
    goto LAB21;

LAB23:    *((unsigned int *)t6) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(50, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 3048);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    goto LAB29;

}

static void NetReassign_42_4(char *t0)
{
    char t5[8];
    char t19[8];
    char t27[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
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
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 5112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t3 = 0;
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t5, 8);

LAB10:    t59 = (t0 + 7880);
    if (*((int *)t59) > 0)
        goto LAB18;

LAB19:    if (t3 > 0)
        goto LAB20;

LAB21:    t62 = (t0 + 6240);
    *((int *)t62) = 0;

LAB22:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t11 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3048);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t19);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t19 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t19 + 4);
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB17;

LAB18:    t60 = (t0 + 3208);
    xsi_vlogvar_assignassignvalue(t60, t27, 0, 0, 0, 1, ((int*)(t59)));
    t3 = 1;
    goto LAB19;

LAB20:    t61 = (t0 + 6240);
    *((int *)t61) = 1;
    goto LAB22;

}

static void NetReassign_43_5(char *t0)
{
    char t5[8];
    char t19[8];
    char t27[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
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
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 5360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t3 = 0;
    t2 = (t0 + 2008U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t5, 8);

LAB10:    t59 = (t0 + 7884);
    if (*((int *)t59) > 0)
        goto LAB18;

LAB19:    if (t3 > 0)
        goto LAB20;

LAB21:    t62 = (t0 + 6256);
    *((int *)t62) = 0;

LAB22:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t11 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3048);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t19);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t19 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t19 + 4);
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB17;

LAB18:    t60 = (t0 + 3208);
    xsi_vlogvar_assignassignvalue(t60, t27, 0, 0, 0, 1, ((int*)(t59)));
    t3 = 1;
    goto LAB19;

LAB20:    t61 = (t0 + 6256);
    *((int *)t61) = 1;
    goto LAB22;

}

static void NetReassign_44_6(char *t0)
{
    char t5[8];
    char t19[8];
    char t27[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
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
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 5608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t3 = 0;
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t5, 8);

LAB10:    t59 = (t0 + 7888);
    if (*((int *)t59) > 0)
        goto LAB18;

LAB19:    if (t3 > 0)
        goto LAB20;

LAB21:    t62 = (t0 + 6272);
    *((int *)t62) = 0;

LAB22:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t11 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3048);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t19);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t19 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t19 + 4);
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB17;

LAB18:    t60 = (t0 + 3208);
    xsi_vlogvar_assignassignvalue(t60, t27, 0, 0, 0, 1, ((int*)(t59)));
    t3 = 1;
    goto LAB19;

LAB20:    t61 = (t0 + 6272);
    *((int *)t61) = 1;
    goto LAB22;

}

static void NetReassign_45_7(char *t0)
{
    char t5[8];
    char t19[8];
    char t27[8];
    char *t1;
    char *t2;
    unsigned int t3;
    char *t4;
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
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 5856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t3 = 0;
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t4 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    memcpy(t27, t5, 8);

LAB10:    t59 = (t0 + 7892);
    if (*((int *)t59) > 0)
        goto LAB18;

LAB19:    if (t3 > 0)
        goto LAB20;

LAB21:    t62 = (t0 + 6288);
    *((int *)t62) = 0;

LAB22:
LAB1:    return;
LAB4:    *((unsigned int *)t5) = 1;
    goto LAB7;

LAB6:    t11 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t16 = (t0 + 3048);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t20) != 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t5);
    t29 = *((unsigned int *)t19);
    t30 = (t28 & t29);
    *((unsigned int *)t27) = t30;
    t31 = (t5 + 4);
    t32 = (t19 + 4);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t31);
    t35 = *((unsigned int *)t32);
    t36 = (t34 | t35);
    *((unsigned int *)t33) = t36;
    t37 = *((unsigned int *)t33);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB13:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB14;

LAB15:    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t27) = (t39 | t40);
    t41 = (t5 + 4);
    t42 = (t19 + 4);
    t43 = *((unsigned int *)t5);
    t44 = (~(t43));
    t45 = *((unsigned int *)t41);
    t46 = (~(t45));
    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t42);
    t50 = (~(t49));
    t51 = (t44 & t46);
    t52 = (t48 & t50);
    t53 = (~(t51));
    t54 = (~(t52));
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t55 & t53);
    t56 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t56 & t54);
    t57 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t57 & t53);
    t58 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t58 & t54);
    goto LAB17;

LAB18:    t60 = (t0 + 3208);
    xsi_vlogvar_assignassignvalue(t60, t27, 0, 0, 0, 1, ((int*)(t59)));
    t3 = 1;
    goto LAB19;

LAB20:    t61 = (t0 + 6288);
    *((int *)t61) = 1;
    goto LAB22;

}


extern void secureip_m_07292992387684852829_2722438042_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Always_35_1,(void *)Always_40_2,(void *)Always_48_3,(void *)NetReassign_42_4,(void *)NetReassign_43_5,(void *)NetReassign_44_6,(void *)NetReassign_45_7};
	xsi_register_didat("secureip_m_07292992387684852829_2722438042", "isim/tb_FBCtl_isim_beh.exe.sim/secureip/m_07292992387684852829_2722438042.didat");
	xsi_register_executes(pe);
}
