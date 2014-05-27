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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_dqs_cal.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};



static void Cont_29_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 4440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1688U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t18 = (t0 + 6952);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 1U;
    t24 = t23;
    t25 = (t5 + 4);
    t26 = *((unsigned int *)t5);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 6744);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    goto LAB6;

}

static void Always_31_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t27[8];
    char t43[8];
    char t51[8];
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
    char *t25;
    char *t26;
    char *t28;
    char *t29;
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
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    int t75;
    int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 4688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 6760);
    *((int *)t2) = 1;
    t3 = (t0 + 4720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB8:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1368U);
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

LAB12:    memset(t14, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t5) != 0)
        goto LAB15;

LAB16:    t12 = (t14 + 4);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t12);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB17;

LAB18:    memcpy(t51, t14, 8);

LAB19:    t83 = (t51 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t51);
    t87 = (t86 & t85);
    t88 = (t87 != 0);
    if (t88 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB2;

LAB6:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2568);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

LAB9:    *((unsigned int *)t13) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t14) = 1;
    goto LAB16;

LAB15:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB16;

LAB17:    t23 = (t0 + 2568);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t28 = (t25 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB21;

LAB20:    if (t39 != 0)
        goto LAB22;

LAB23:    memset(t43, 0, 8);
    t44 = (t27 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t27);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t44) != 0)
        goto LAB26;

LAB27:    t52 = *((unsigned int *)t14);
    t53 = *((unsigned int *)t43);
    t54 = (t52 & t53);
    *((unsigned int *)t51) = t54;
    t55 = (t14 + 4);
    t56 = (t43 + 4);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t55);
    t59 = *((unsigned int *)t56);
    t60 = (t58 | t59);
    *((unsigned int *)t57) = t60;
    t61 = *((unsigned int *)t57);
    t62 = (t61 != 0);
    if (t62 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB21:    *((unsigned int *)t27) = 1;
    goto LAB23;

LAB22:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB23;

LAB24:    *((unsigned int *)t43) = 1;
    goto LAB27;

LAB26:    t50 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB27;

LAB28:    t63 = *((unsigned int *)t51);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t51) = (t63 | t64);
    t65 = (t14 + 4);
    t66 = (t43 + 4);
    t67 = *((unsigned int *)t14);
    t68 = (~(t67));
    t69 = *((unsigned int *)t65);
    t70 = (~(t69));
    t71 = *((unsigned int *)t43);
    t72 = (~(t71));
    t73 = *((unsigned int *)t66);
    t74 = (~(t73));
    t75 = (t68 & t70);
    t76 = (t72 & t74);
    t77 = (~(t75));
    t78 = (~(t76));
    t79 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t79 & t77);
    t80 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t80 & t78);
    t81 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t81 & t77);
    t82 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t82 & t78);
    goto LAB30;

LAB31:    xsi_set_current_line(40, ng0);

LAB34:    xsi_set_current_line(41, ng0);
    t89 = ((char*)((ng3)));
    t90 = (t0 + 3528);
    xsi_vlogvar_assign_value(t90, t89, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB33;

}

static void Always_45_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 4936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 1;
    t3 = (t0 + 4968);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB2;

}

static void Always_53_3(char *t0)
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

LAB0:    t1 = (t0 + 5184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 6792);
    *((int *)t2) = 1;
    t3 = (t0 + 5216);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);
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

LAB20:
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

LAB19:    xsi_set_current_line(54, ng0);
    t64 = ((char*)((ng2)));
    t65 = (t0 + 2568);
    xsi_vlogvar_assign_value(t65, t64, 0, 0, 1);
    goto LAB21;

}

static void Always_56_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 5432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6808);
    *((int *)t2) = 1;
    t3 = (t0 + 5464);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB2;

}

static void Always_61_5(char *t0)
{
    char t6[8];
    char t19[8];
    char t26[8];
    char t58[8];
    char t70[8];
    char t81[8];
    char t89[8];
    char t131[8];
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
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    char *t128;
    char *t129;
    char *t130;
    char *t132;

LAB0:    t1 = (t0 + 5680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 6824);
    *((int *)t2) = 1;
    t3 = (t0 + 5712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB5:    xsi_set_current_line(63, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t26, t6, 8);

LAB12:    memset(t58, 0, 8);
    t59 = (t26 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t26);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t59) != 0)
        goto LAB22;

LAB23:    t66 = (t58 + 4);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t66);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB24;

LAB25:    memcpy(t89, t58, 8);

LAB26:    t121 = (t89 + 4);
    t122 = *((unsigned int *)t121);
    t123 = (~(t122));
    t124 = *((unsigned int *)t89);
    t125 = (t124 & t123);
    t126 = (t125 != 0);
    if (t126 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(67, ng0);
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
        goto LAB42;

LAB43:    if (*((unsigned int *)t2) != 0)
        goto LAB44;

LAB45:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB46;

LAB47:    memcpy(t26, t6, 8);

LAB48:    memset(t58, 0, 8);
    t40 = (t26 + 4);
    t60 = *((unsigned int *)t40);
    t61 = (~(t60));
    t62 = *((unsigned int *)t26);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t40) != 0)
        goto LAB58;

LAB59:    t59 = (t58 + 4);
    t67 = *((unsigned int *)t58);
    t68 = *((unsigned int *)t59);
    t69 = (t67 || t68);
    if (t69 > 0)
        goto LAB60;

LAB61:    memcpy(t81, t58, 8);

LAB62:    t94 = (t81 + 4);
    t116 = *((unsigned int *)t94);
    t117 = (~(t116));
    t118 = *((unsigned int *)t81);
    t119 = (t118 & t117);
    t120 = (t119 != 0);
    if (t120 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(68, ng0);
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
        goto LAB73;

LAB74:    if (*((unsigned int *)t2) != 0)
        goto LAB75;

LAB76:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB77;

LAB78:    memcpy(t58, t6, 8);

LAB79:    t59 = (t58 + 4);
    t67 = *((unsigned int *)t59);
    t68 = (~(t67));
    t69 = *((unsigned int *)t58);
    t75 = (t69 & t68);
    t76 = (t75 != 0);
    if (t76 > 0)
        goto LAB91;

LAB92:
LAB93:
LAB72:
LAB40:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    memset(t19, 0, 8);
    t17 = (t18 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t17) != 0)
        goto LAB15;

LAB16:    t27 = *((unsigned int *)t6);
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
        goto LAB17;

LAB18:
LAB19:    goto LAB12;

LAB13:    *((unsigned int *)t19) = 1;
    goto LAB16;

LAB15:    t25 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB16;

LAB17:    t38 = *((unsigned int *)t26);
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
    goto LAB19;

LAB20:    *((unsigned int *)t58) = 1;
    goto LAB23;

LAB22:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB23;

LAB24:    t71 = (t0 + 2568);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t70, 0, 8);
    t74 = (t73 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t73);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB30;

LAB28:    if (*((unsigned int *)t74) == 0)
        goto LAB27;

LAB29:    t80 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t80) = 1;

LAB30:    memset(t81, 0, 8);
    t82 = (t70 + 4);
    t83 = *((unsigned int *)t82);
    t84 = (~(t83));
    t85 = *((unsigned int *)t70);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t82) != 0)
        goto LAB33;

LAB34:    t90 = *((unsigned int *)t58);
    t91 = *((unsigned int *)t81);
    t92 = (t90 & t91);
    *((unsigned int *)t89) = t92;
    t93 = (t58 + 4);
    t94 = (t81 + 4);
    t95 = (t89 + 4);
    t96 = *((unsigned int *)t93);
    t97 = *((unsigned int *)t94);
    t98 = (t96 | t97);
    *((unsigned int *)t95) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 != 0);
    if (t100 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB26;

LAB27:    *((unsigned int *)t70) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t81) = 1;
    goto LAB34;

LAB33:    t88 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB34;

LAB35:    t101 = *((unsigned int *)t89);
    t102 = *((unsigned int *)t95);
    *((unsigned int *)t89) = (t101 | t102);
    t103 = (t58 + 4);
    t104 = (t81 + 4);
    t105 = *((unsigned int *)t58);
    t106 = (~(t105));
    t107 = *((unsigned int *)t103);
    t108 = (~(t107));
    t109 = *((unsigned int *)t81);
    t110 = (~(t109));
    t111 = *((unsigned int *)t104);
    t112 = (~(t111));
    t113 = (t106 & t108);
    t114 = (t110 & t112);
    t115 = (~(t113));
    t116 = (~(t114));
    t117 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t117 & t115);
    t118 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t118 & t116);
    t119 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t119 & t115);
    t120 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t120 & t116);
    goto LAB37;

LAB38:    xsi_set_current_line(64, ng0);

LAB41:    xsi_set_current_line(65, ng0);
    t127 = (t0 + 3528);
    t128 = (t127 + 56U);
    t129 = *((char **)t128);
    t130 = ((char*)((ng2)));
    memset(t131, 0, 8);
    xsi_vlog_unsigned_add(t131, 32, t129, 4, t130, 32);
    t132 = (t0 + 3528);
    xsi_vlogvar_assign_value(t132, t131, 0, 0, 4);
    goto LAB40;

LAB42:    *((unsigned int *)t6) = 1;
    goto LAB45;

LAB44:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB45;

LAB46:    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t12) != 0)
        goto LAB51;

LAB52:    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t19);
    t29 = (t27 & t28);
    *((unsigned int *)t26) = t29;
    t18 = (t6 + 4);
    t25 = (t19 + 4);
    t30 = (t26 + 4);
    t33 = *((unsigned int *)t18);
    t34 = *((unsigned int *)t25);
    t35 = (t33 | t34);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t30);
    t37 = (t36 != 0);
    if (t37 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB48;

LAB49:    *((unsigned int *)t19) = 1;
    goto LAB52;

LAB51:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB52;

LAB53:    t38 = *((unsigned int *)t26);
    t39 = *((unsigned int *)t30);
    *((unsigned int *)t26) = (t38 | t39);
    t31 = (t6 + 4);
    t32 = (t19 + 4);
    t42 = *((unsigned int *)t6);
    t43 = (~(t42));
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t32);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t54 & t52);
    t55 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t55 & t53);
    t56 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t56 & t52);
    t57 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t57 & t53);
    goto LAB55;

LAB56:    *((unsigned int *)t58) = 1;
    goto LAB59;

LAB58:    t41 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB59;

LAB60:    t65 = (t0 + 2568);
    t66 = (t65 + 56U);
    t71 = *((char **)t66);
    memset(t70, 0, 8);
    t72 = (t71 + 4);
    t75 = *((unsigned int *)t72);
    t76 = (~(t75));
    t77 = *((unsigned int *)t71);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t72) != 0)
        goto LAB65;

LAB66:    t83 = *((unsigned int *)t58);
    t84 = *((unsigned int *)t70);
    t85 = (t83 & t84);
    *((unsigned int *)t81) = t85;
    t74 = (t58 + 4);
    t80 = (t70 + 4);
    t82 = (t81 + 4);
    t86 = *((unsigned int *)t74);
    t87 = *((unsigned int *)t80);
    t90 = (t86 | t87);
    *((unsigned int *)t82) = t90;
    t91 = *((unsigned int *)t82);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB67;

LAB68:
LAB69:    goto LAB62;

LAB63:    *((unsigned int *)t70) = 1;
    goto LAB66;

LAB65:    t73 = (t70 + 4);
    *((unsigned int *)t70) = 1;
    *((unsigned int *)t73) = 1;
    goto LAB66;

LAB67:    t96 = *((unsigned int *)t81);
    t97 = *((unsigned int *)t82);
    *((unsigned int *)t81) = (t96 | t97);
    t88 = (t58 + 4);
    t93 = (t70 + 4);
    t98 = *((unsigned int *)t58);
    t99 = (~(t98));
    t100 = *((unsigned int *)t88);
    t101 = (~(t100));
    t102 = *((unsigned int *)t70);
    t105 = (~(t102));
    t106 = *((unsigned int *)t93);
    t107 = (~(t106));
    t113 = (t99 & t101);
    t114 = (t105 & t107);
    t108 = (~(t113));
    t109 = (~(t114));
    t110 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t110 & t108);
    t111 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t111 & t109);
    t112 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t112 & t108);
    t115 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t115 & t109);
    goto LAB69;

LAB70:    xsi_set_current_line(67, ng0);
    t95 = ((char*)((ng2)));
    t103 = (t0 + 2888);
    xsi_vlogvar_assign_value(t103, t95, 0, 0, 1);
    goto LAB72;

LAB73:    *((unsigned int *)t6) = 1;
    goto LAB76;

LAB75:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB76;

LAB77:    t12 = (t0 + 1368U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t20 = *((unsigned int *)t12);
    t21 = (~(t20));
    t22 = *((unsigned int *)t13);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB83;

LAB81:    if (*((unsigned int *)t12) == 0)
        goto LAB80;

LAB82:    t17 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t17) = 1;

LAB83:    memset(t26, 0, 8);
    t18 = (t19 + 4);
    t27 = *((unsigned int *)t18);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t33 = (t29 & t28);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t18) != 0)
        goto LAB86;

LAB87:    t35 = *((unsigned int *)t6);
    t36 = *((unsigned int *)t26);
    t37 = (t35 & t36);
    *((unsigned int *)t58) = t37;
    t30 = (t6 + 4);
    t31 = (t26 + 4);
    t32 = (t58 + 4);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t31);
    t42 = (t38 | t39);
    *((unsigned int *)t32) = t42;
    t43 = *((unsigned int *)t32);
    t44 = (t43 != 0);
    if (t44 == 1)
        goto LAB88;

LAB89:
LAB90:    goto LAB79;

LAB80:    *((unsigned int *)t19) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t26) = 1;
    goto LAB87;

LAB86:    t25 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB87;

LAB88:    t45 = *((unsigned int *)t58);
    t46 = *((unsigned int *)t32);
    *((unsigned int *)t58) = (t45 | t46);
    t40 = (t6 + 4);
    t41 = (t26 + 4);
    t47 = *((unsigned int *)t6);
    t48 = (~(t47));
    t49 = *((unsigned int *)t40);
    t52 = (~(t49));
    t53 = *((unsigned int *)t26);
    t54 = (~(t53));
    t55 = *((unsigned int *)t41);
    t56 = (~(t55));
    t50 = (t48 & t52);
    t51 = (t54 & t56);
    t57 = (~(t50));
    t60 = (~(t51));
    t61 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t61 & t57);
    t62 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t62 & t60);
    t63 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t63 & t57);
    t64 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t64 & t60);
    goto LAB90;

LAB91:    xsi_set_current_line(69, ng0);

LAB94:    xsi_set_current_line(70, ng0);
    t65 = (t0 + 3368);
    t66 = (t65 + 56U);
    t71 = *((char **)t66);
    t72 = ((char*)((ng2)));
    memset(t70, 0, 8);
    xsi_vlog_unsigned_add(t70, 32, t71, 4, t72, 32);
    t73 = (t0 + 3368);
    xsi_vlogvar_assign_value(t73, t70, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memset(t6, 0, 8);
    t17 = (t4 + 4);
    t18 = (t13 + 4);
    t7 = *((unsigned int *)t4);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t17);
    t11 = *((unsigned int *)t18);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t17);
    t20 = *((unsigned int *)t18);
    t21 = (t16 | t20);
    t22 = (~(t21));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB98;

LAB95:    if (t21 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t6) = 1;

LAB98:    t30 = (t6 + 4);
    t24 = *((unsigned int *)t30);
    t27 = (~(t24));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t33 = (t29 != 0);
    if (t33 > 0)
        goto LAB99;

LAB100:
LAB101:    goto LAB93;

LAB97:    t25 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB98;

LAB99:    xsi_set_current_line(71, ng0);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 2888);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    goto LAB101;

}

static void Always_75_6(char *t0)
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

LAB0:    t1 = (t0 + 5928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 6840);
    *((int *)t2) = 1;
    t3 = (t0 + 5960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(76, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB7;

}

static void Always_78_7(char *t0)
{
    char t4[8];
    char t15[8];
    char t27[8];
    char t36[8];
    char t44[8];
    char t84[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t85;

LAB0:    t1 = (t0 + 6176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 6856);
    *((int *)t2) = 1;
    t3 = (t0 + 6208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t5 = (t0 + 2888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t8) == 0)
        goto LAB6;

LAB8:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;

LAB9:    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB13:    t23 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB14;

LAB15:    memcpy(t44, t15, 8);

LAB16:    t76 = (t44 + 4);
    t77 = *((unsigned int *)t76);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t6) == 0)
        goto LAB32;

LAB34:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB35:    memset(t15, 0, 8);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t8) != 0)
        goto LAB38;

LAB39:    t16 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB40;

LAB41:    memcpy(t44, t15, 8);

LAB42:    t58 = (t44 + 4);
    t77 = *((unsigned int *)t58);
    t78 = (~(t77));
    t79 = *((unsigned int *)t44);
    t80 = (t79 & t78);
    t81 = (t80 != 0);
    if (t81 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t5 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (~(t9));
    t11 = *((unsigned int *)t5);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t6) == 0)
        goto LAB57;

LAB59:    t7 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t7) = 1;

LAB60:    memset(t15, 0, 8);
    t8 = (t4 + 4);
    t17 = *((unsigned int *)t8);
    t18 = (~(t17));
    t19 = *((unsigned int *)t4);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t8) != 0)
        goto LAB63;

LAB64:    t16 = (t15 + 4);
    t24 = *((unsigned int *)t15);
    t25 = *((unsigned int *)t16);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB65;

LAB66:    memcpy(t36, t15, 8);

LAB67:    t49 = (t36 + 4);
    t71 = *((unsigned int *)t49);
    t72 = (~(t71));
    t73 = *((unsigned int *)t36);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB77:
LAB56:
LAB30:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB12:    t22 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB13;

LAB14:    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    memset(t27, 0, 8);
    t28 = (t29 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t29);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t28) == 0)
        goto LAB17;

LAB19:    t35 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t35) = 1;

LAB20:    memset(t36, 0, 8);
    t37 = (t27 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t27);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t37) != 0)
        goto LAB23;

LAB24:    t45 = *((unsigned int *)t15);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t15 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB17:    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t36) = 1;
    goto LAB24;

LAB23:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB24;

LAB25:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t15 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t15);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB27;

LAB28:    xsi_set_current_line(81, ng0);

LAB31:    xsi_set_current_line(82, ng0);
    t82 = ((char*)((ng1)));
    t83 = (t0 + 3048);
    xsi_vlogvar_assign_value(t83, t82, 0, 0, 3);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB30;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t15) = 1;
    goto LAB39;

LAB38:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB40:    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    memset(t27, 0, 8);
    t22 = (t23 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    t32 = *((unsigned int *)t23);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t22) == 0)
        goto LAB43;

LAB45:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;

LAB46:    memset(t36, 0, 8);
    t29 = (t27 + 4);
    t38 = *((unsigned int *)t29);
    t39 = (~(t38));
    t40 = *((unsigned int *)t27);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t29) != 0)
        goto LAB49;

LAB50:    t45 = *((unsigned int *)t15);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t37 = (t15 + 4);
    t43 = (t36 + 4);
    t48 = (t44 + 4);
    t51 = *((unsigned int *)t37);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t48);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB42;

LAB43:    *((unsigned int *)t27) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t36) = 1;
    goto LAB50;

LAB49:    t35 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB50;

LAB51:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t48);
    *((unsigned int *)t44) = (t56 | t57);
    t49 = (t15 + 4);
    t50 = (t36 + 4);
    t60 = *((unsigned int *)t15);
    t61 = (~(t60));
    t62 = *((unsigned int *)t49);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t50);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t72 & t70);
    t73 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB53;

LAB54:    xsi_set_current_line(84, ng0);
    t59 = (t0 + 3048);
    t76 = (t59 + 56U);
    t82 = *((char **)t76);
    t83 = ((char*)((ng2)));
    memset(t84, 0, 8);
    xsi_vlog_unsigned_add(t84, 32, t82, 3, t83, 32);
    t85 = (t0 + 3048);
    xsi_vlogvar_assign_value(t85, t84, 0, 0, 3);
    goto LAB56;

LAB57:    *((unsigned int *)t4) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t15) = 1;
    goto LAB64;

LAB63:    t14 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB64;

LAB65:    t22 = (t0 + 1208U);
    t23 = *((char **)t22);
    memset(t27, 0, 8);
    t22 = (t23 + 4);
    t30 = *((unsigned int *)t22);
    t31 = (~(t30));
    t32 = *((unsigned int *)t23);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t22) != 0)
        goto LAB70;

LAB71:    t38 = *((unsigned int *)t15);
    t39 = *((unsigned int *)t27);
    t40 = (t38 & t39);
    *((unsigned int *)t36) = t40;
    t29 = (t15 + 4);
    t35 = (t27 + 4);
    t37 = (t36 + 4);
    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    t45 = (t41 | t42);
    *((unsigned int *)t37) = t45;
    t46 = *((unsigned int *)t37);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB67;

LAB68:    *((unsigned int *)t27) = 1;
    goto LAB71;

LAB70:    t28 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB71;

LAB72:    t51 = *((unsigned int *)t36);
    t52 = *((unsigned int *)t37);
    *((unsigned int *)t36) = (t51 | t52);
    t43 = (t15 + 4);
    t48 = (t27 + 4);
    t53 = *((unsigned int *)t15);
    t54 = (~(t53));
    t55 = *((unsigned int *)t43);
    t56 = (~(t55));
    t57 = *((unsigned int *)t27);
    t60 = (~(t57));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t68 = (t54 & t56);
    t69 = (t60 & t62);
    t63 = (~(t68));
    t64 = (~(t69));
    t65 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t65 & t63);
    t66 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t66 & t64);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    t70 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t70 & t64);
    goto LAB74;

LAB75:    xsi_set_current_line(85, ng0);
    t50 = (t0 + 3208);
    t58 = (t50 + 56U);
    t59 = *((char **)t58);
    t76 = ((char*)((ng2)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_add(t44, 32, t59, 3, t76, 32);
    t82 = (t0 + 3208);
    xsi_vlogvar_assign_value(t82, t44, 0, 0, 3);
    goto LAB77;

}

static void Always_89_8(char *t0)
{
    char t8[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t1 = (t0 + 6424U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6872);
    *((int *)t2) = 1;
    t3 = (t0 + 6456);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 3048);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB6;

LAB5:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB6;

LAB9:    if (*((unsigned int *)t6) > *((unsigned int *)t7))
        goto LAB7;

LAB8:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB14;

LAB13:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB14;

LAB17:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB15;

LAB16:    t10 = (t8 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB20:
LAB12:    goto LAB2;

LAB6:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;
    goto LAB8;

LAB10:    xsi_set_current_line(90, ng0);
    t18 = (t0 + 3528);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 4, t21, 32);
    t23 = (t0 + 3528);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 4);
    goto LAB12;

LAB14:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;
    goto LAB16;

LAB18:    xsi_set_current_line(91, ng0);
    t11 = (t0 + 3528);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    t19 = ((char*)((ng2)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_minus(t22, 32, t18, 4, t19, 32);
    t20 = (t0 + 3528);
    xsi_vlogvar_assign_value(t20, t22, 0, 0, 4);
    goto LAB20;

}


extern void secureip_m_18189217002690682904_0855246347_init()
{
	static char *pe[] = {(void *)Cont_29_0,(void *)Always_31_1,(void *)Always_45_2,(void *)Always_53_3,(void *)Always_56_4,(void *)Always_61_5,(void *)Always_75_6,(void *)Always_78_7,(void *)Always_89_8};
	xsi_register_didat("secureip_m_18189217002690682904_0855246347", "isim/tb_FBCtl_isim_beh.exe.sim/secureip/m_18189217002690682904_0855246347.didat");
	xsi_register_executes(pe);
}
