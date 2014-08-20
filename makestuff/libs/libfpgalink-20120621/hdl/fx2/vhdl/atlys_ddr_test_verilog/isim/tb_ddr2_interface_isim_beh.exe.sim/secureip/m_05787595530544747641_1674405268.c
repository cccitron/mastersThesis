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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_calibration_user_mux.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {4U, 0U};



static void Always_273_0(char *t0)
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

LAB0:    t1 = (t0 + 18360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(273, ng0);
    t2 = (t0 + 20168);
    *((int *)t2) = 1;
    t3 = (t0 + 18392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(273, ng0);

LAB5:    xsi_set_current_line(274, ng0);
    t4 = (t0 + 7288U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(278, ng0);

LAB10:    xsi_set_current_line(279, ng0);
    t2 = (t0 + 13608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(280, ng0);
    t2 = (t0 + 13768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(274, ng0);

LAB9:    xsi_set_current_line(275, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 11208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

}

static void Always_284_1(char *t0)
{
    char t13[8];
    char t15[8];
    char t47[8];
    char t51[8];
    char t54[8];
    char t82[8];
    char t90[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
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
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t52;
    char *t53;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
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
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;

LAB0:    t1 = (t0 + 18608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(284, ng0);
    t2 = (t0 + 20184);
    *((int *)t2) = 1;
    t3 = (t0 + 18640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(284, ng0);

LAB5:    xsi_set_current_line(285, ng0);
    t4 = (t0 + 7288U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(306, ng0);

LAB10:    xsi_set_current_line(308, ng0);
    t2 = (t0 + 15208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB14:    t12 = (t0 + 6168U);
    t14 = *((char **)t12);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t12 = (t13 + 4);
    t19 = (t14 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB15;

LAB16:
LAB17:    t46 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t46, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(309, ng0);
    t2 = (t0 + 15208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB21;

LAB19:    if (*((unsigned int *)t5) == 0)
        goto LAB18;

LAB20:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB21:    t12 = (t0 + 6648U);
    t14 = *((char **)t12);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t12 = (t13 + 4);
    t19 = (t14 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB22;

LAB23:
LAB24:    t46 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t46, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(310, ng0);
    t2 = (t0 + 15208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t5) != 0)
        goto LAB27;

LAB28:    t12 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t12);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB29;

LAB30:    t21 = *((unsigned int *)t15);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t12) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t15) > 0)
        goto LAB35;

LAB36:    memcpy(t13, t29, 8);

LAB37:    t28 = (t0 + 13608);
    xsi_vlogvar_wait_assign_value(t28, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(311, ng0);
    t2 = (t0 + 15208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t5) != 0)
        goto LAB40;

LAB41:    t12 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t12);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB42;

LAB43:    t21 = *((unsigned int *)t15);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t12) > 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t15) > 0)
        goto LAB48;

LAB49:    memcpy(t13, t29, 8);

LAB50:    t28 = (t0 + 13768);
    xsi_vlogvar_wait_assign_value(t28, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = (t0 + 6168U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t2) != 0)
        goto LAB53;

LAB54:    t5 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t18 = *((unsigned int *)t5);
    t21 = (t17 || t18);
    if (t21 > 0)
        goto LAB55;

LAB56:    memcpy(t90, t13, 8);

LAB57:    t118 = (t0 + 14408);
    xsi_vlogvar_wait_assign_value(t118, t90, 0, 0, 1, 0LL);
    xsi_set_current_line(313, ng0);
    t2 = (t0 + 14568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2328U);
    t11 = *((char **)t5);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t14 = (t13 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t16 = (t9 | t10);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB83;

LAB84:
LAB85:    t28 = (t0 + 11528);
    xsi_vlogvar_wait_assign_value(t28, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(314, ng0);
    t2 = (t0 + 15208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t5) != 0)
        goto LAB88;

LAB89:    t12 = (t15 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t12);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB90;

LAB91:    t21 = *((unsigned int *)t15);
    t22 = (~(t21));
    t23 = *((unsigned int *)t12);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t12) > 0)
        goto LAB94;

LAB95:    if (*((unsigned int *)t15) > 0)
        goto LAB96;

LAB97:    memcpy(t13, t20, 8);

LAB98:    t14 = (t0 + 12968);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = (t0 + 6488U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t2) != 0)
        goto LAB101;

LAB102:    t5 = (t13 + 4);
    t16 = *((unsigned int *)t13);
    t17 = (!(t16));
    t18 = *((unsigned int *)t5);
    t21 = (t17 || t18);
    if (t21 > 0)
        goto LAB103;

LAB104:    memcpy(t90, t13, 8);

LAB105:    t118 = (t0 + 14888);
    xsi_vlogvar_wait_assign_value(t118, t90, 0, 0, 1, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = (t0 + 16008);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 16168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 13288);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(319, ng0);
    t2 = (t0 + 16328);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16488);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(320, ng0);
    t2 = (t0 + 16488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 13128);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);
    xsi_set_current_line(321, ng0);
    t2 = (t0 + 16648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 16808);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(322, ng0);
    t2 = (t0 + 16808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 13448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(324, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = (t0 + 15528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(326, ng0);
    t2 = (t0 + 14248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(327, ng0);
    t2 = (t0 + 14248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15688);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t14);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB134;

LAB132:    if (*((unsigned int *)t14) == 0)
        goto LAB131;

LAB133:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;

LAB134:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t20 = (t4 + 4);
    t28 = (t13 + 4);
    t29 = (t15 + 4);
    t21 = *((unsigned int *)t20);
    t22 = *((unsigned int *)t28);
    t23 = (t21 | t22);
    *((unsigned int *)t29) = t23;
    t24 = *((unsigned int *)t29);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB135;

LAB136:
LAB137:    t49 = (t0 + 15848);
    xsi_vlogvar_wait_assign_value(t49, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(328, ng0);
    t2 = (t0 + 14728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14568);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(285, ng0);

LAB9:    xsi_set_current_line(286, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 8648);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(287, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(288, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(289, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(290, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 14408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(291, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(292, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(293, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 14888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(294, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(295, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 14248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(296, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(297, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(298, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 14568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(299, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(300, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(301, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t26 | t27);
    t28 = (t13 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t40);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    goto LAB17;

LAB18:    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB22:    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t26 | t27);
    t28 = (t13 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t40);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    goto LAB24;

LAB25:    *((unsigned int *)t15) = 1;
    goto LAB28;

LAB27:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB28;

LAB29:    t14 = (t0 + 15368);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    goto LAB30;

LAB31:    t28 = (t0 + 2008U);
    t29 = *((char **)t28);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t13, 1, t20, 1, t29, 1);
    goto LAB37;

LAB35:    memcpy(t13, t20, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t15) = 1;
    goto LAB41;

LAB40:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB41;

LAB42:    t14 = (t0 + 15848);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    goto LAB43;

LAB44:    t28 = (t0 + 2168U);
    t29 = *((char **)t28);
    goto LAB45;

LAB46:    xsi_vlog_unsigned_bit_combine(t13, 1, t20, 1, t29, 1);
    goto LAB50;

LAB48:    memcpy(t13, t20, 8);
    goto LAB50;

LAB51:    *((unsigned int *)t13) = 1;
    goto LAB54;

LAB53:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB54;

LAB55:    t11 = (t0 + 14408);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t15, 0, 8);
    t19 = (t14 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t19) != 0)
        goto LAB60;

LAB61:    t28 = (t15 + 4);
    t27 = *((unsigned int *)t15);
    t30 = *((unsigned int *)t28);
    t31 = (t27 || t30);
    if (t31 > 0)
        goto LAB62;

LAB63:    memcpy(t54, t15, 8);

LAB64:    memset(t82, 0, 8);
    t83 = (t54 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t54);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t83) != 0)
        goto LAB78;

LAB79:    t91 = *((unsigned int *)t13);
    t92 = *((unsigned int *)t82);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = (t13 + 4);
    t95 = (t82 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB80;

LAB81:
LAB82:    goto LAB57;

LAB58:    *((unsigned int *)t15) = 1;
    goto LAB61;

LAB60:    t20 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB61;

LAB62:    t29 = (t0 + 8968);
    t46 = (t29 + 56U);
    t48 = *((char **)t46);
    memset(t47, 0, 8);
    t49 = (t48 + 4);
    t32 = *((unsigned int *)t49);
    t33 = (~(t32));
    t34 = *((unsigned int *)t48);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB68;

LAB66:    if (*((unsigned int *)t49) == 0)
        goto LAB65;

LAB67:    t50 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t50) = 1;

LAB68:    memset(t51, 0, 8);
    t52 = (t47 + 4);
    t37 = *((unsigned int *)t52);
    t40 = (~(t37));
    t41 = *((unsigned int *)t47);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t52) != 0)
        goto LAB71;

LAB72:    t44 = *((unsigned int *)t15);
    t45 = *((unsigned int *)t51);
    t55 = (t44 & t45);
    *((unsigned int *)t54) = t55;
    t56 = (t15 + 4);
    t57 = (t51 + 4);
    t58 = (t54 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB73;

LAB74:
LAB75:    goto LAB64;

LAB65:    *((unsigned int *)t47) = 1;
    goto LAB68;

LAB69:    *((unsigned int *)t51) = 1;
    goto LAB72;

LAB71:    t53 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB72;

LAB73:    t64 = *((unsigned int *)t54);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t54) = (t64 | t65);
    t66 = (t15 + 4);
    t67 = (t51 + 4);
    t68 = *((unsigned int *)t15);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t51);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t38 = (t69 & t71);
    t39 = (t73 & t75);
    t76 = (~(t38));
    t77 = (~(t39));
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t78 & t76);
    t79 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t79 & t77);
    t80 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t80 & t76);
    t81 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t81 & t77);
    goto LAB75;

LAB76:    *((unsigned int *)t82) = 1;
    goto LAB79;

LAB78:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB79;

LAB80:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t13 + 4);
    t105 = (t82 + 4);
    t106 = *((unsigned int *)t104);
    t107 = (~(t106));
    t108 = *((unsigned int *)t13);
    t109 = (t108 & t107);
    t110 = *((unsigned int *)t105);
    t111 = (~(t110));
    t112 = *((unsigned int *)t82);
    t113 = (t112 & t111);
    t114 = (~(t109));
    t115 = (~(t113));
    t116 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t116 & t114);
    t117 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t117 & t115);
    goto LAB82;

LAB83:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t21 | t22);
    t19 = (t4 + 4);
    t20 = (t11 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t19);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t30 = (~(t27));
    t31 = *((unsigned int *)t20);
    t32 = (~(t31));
    t38 = (t24 & t26);
    t39 = (t30 & t32);
    t33 = (~(t38));
    t34 = (~(t39));
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & t34);
    t37 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t37 & t33);
    t40 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t40 & t34);
    goto LAB85;

LAB86:    *((unsigned int *)t15) = 1;
    goto LAB89;

LAB88:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB89;

LAB90:    t14 = (t0 + 4408U);
    t19 = *((char **)t14);
    goto LAB91;

LAB92:    t14 = (t0 + 2488U);
    t20 = *((char **)t14);
    goto LAB93;

LAB94:    xsi_vlog_unsigned_bit_combine(t13, 4, t19, 4, t20, 4);
    goto LAB98;

LAB96:    memcpy(t13, t19, 8);
    goto LAB98;

LAB99:    *((unsigned int *)t13) = 1;
    goto LAB102;

LAB101:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB102;

LAB103:    t11 = (t0 + 14888);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t15, 0, 8);
    t19 = (t14 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (~(t22));
    t24 = *((unsigned int *)t14);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB106;

LAB107:    if (*((unsigned int *)t19) != 0)
        goto LAB108;

LAB109:    t28 = (t15 + 4);
    t27 = *((unsigned int *)t15);
    t30 = *((unsigned int *)t28);
    t31 = (t27 || t30);
    if (t31 > 0)
        goto LAB110;

LAB111:    memcpy(t54, t15, 8);

LAB112:    memset(t82, 0, 8);
    t83 = (t54 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t54);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t83) != 0)
        goto LAB126;

LAB127:    t91 = *((unsigned int *)t13);
    t92 = *((unsigned int *)t82);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = (t13 + 4);
    t95 = (t82 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB128;

LAB129:
LAB130:    goto LAB105;

LAB106:    *((unsigned int *)t15) = 1;
    goto LAB109;

LAB108:    t20 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB109;

LAB110:    t29 = (t0 + 9448);
    t46 = (t29 + 56U);
    t48 = *((char **)t46);
    memset(t47, 0, 8);
    t49 = (t48 + 4);
    t32 = *((unsigned int *)t49);
    t33 = (~(t32));
    t34 = *((unsigned int *)t48);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB116;

LAB114:    if (*((unsigned int *)t49) == 0)
        goto LAB113;

LAB115:    t50 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t50) = 1;

LAB116:    memset(t51, 0, 8);
    t52 = (t47 + 4);
    t37 = *((unsigned int *)t52);
    t40 = (~(t37));
    t41 = *((unsigned int *)t47);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t52) != 0)
        goto LAB119;

LAB120:    t44 = *((unsigned int *)t15);
    t45 = *((unsigned int *)t51);
    t55 = (t44 & t45);
    *((unsigned int *)t54) = t55;
    t56 = (t15 + 4);
    t57 = (t51 + 4);
    t58 = (t54 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB121;

LAB122:
LAB123:    goto LAB112;

LAB113:    *((unsigned int *)t47) = 1;
    goto LAB116;

LAB117:    *((unsigned int *)t51) = 1;
    goto LAB120;

LAB119:    t53 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB120;

LAB121:    t64 = *((unsigned int *)t54);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t54) = (t64 | t65);
    t66 = (t15 + 4);
    t67 = (t51 + 4);
    t68 = *((unsigned int *)t15);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t51);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t38 = (t69 & t71);
    t39 = (t73 & t75);
    t76 = (~(t38));
    t77 = (~(t39));
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t78 & t76);
    t79 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t79 & t77);
    t80 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t80 & t76);
    t81 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t81 & t77);
    goto LAB123;

LAB124:    *((unsigned int *)t82) = 1;
    goto LAB127;

LAB126:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB127;

LAB128:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t13 + 4);
    t105 = (t82 + 4);
    t106 = *((unsigned int *)t104);
    t107 = (~(t106));
    t108 = *((unsigned int *)t13);
    t109 = (t108 & t107);
    t110 = *((unsigned int *)t105);
    t111 = (~(t110));
    t112 = *((unsigned int *)t82);
    t113 = (t112 & t111);
    t114 = (~(t109));
    t115 = (~(t113));
    t116 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t116 & t114);
    t117 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t117 & t115);
    goto LAB130;

LAB131:    *((unsigned int *)t13) = 1;
    goto LAB134;

LAB135:    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t29);
    *((unsigned int *)t15) = (t26 | t27);
    t46 = (t4 + 4);
    t48 = (t13 + 4);
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t46);
    t33 = (~(t32));
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t48);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t42 & t40);
    t43 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t40);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    goto LAB137;

}

static void Always_336_2(char *t0)
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

LAB0:    t1 = (t0 + 18856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(336, ng0);
    t2 = (t0 + 20200);
    *((int *)t2) = 1;
    t3 = (t0 + 18888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(336, ng0);

LAB5:    xsi_set_current_line(337, ng0);
    t4 = (t0 + 7288U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(339, ng0);
    t2 = (t0 + 6648U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(341, ng0);
    t2 = (t0 + 9768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(338, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 16968);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB8;

LAB9:    xsi_set_current_line(340, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 16968);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB11;

LAB12:    xsi_set_current_line(342, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 16968);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB14;

}

static void Always_345_3(char *t0)
{
    char t13[8];
    char t15[8];
    char t49[8];
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
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
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
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;

LAB0:    t1 = (t0 + 19104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(345, ng0);
    t2 = (t0 + 20216);
    *((int *)t2) = 1;
    t3 = (t0 + 19136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(345, ng0);

LAB5:    xsi_set_current_line(346, ng0);
    t4 = (t0 + 7128U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(369, ng0);

LAB10:    xsi_set_current_line(370, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB14:    t12 = (t0 + 6008U);
    t14 = *((char **)t12);
    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t14);
    t18 = (t16 & t17);
    *((unsigned int *)t15) = t18;
    t12 = (t13 + 4);
    t19 = (t14 + 4);
    t20 = (t15 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB15;

LAB16:
LAB17:    t46 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t46, t15, 0, 0, 1, 0LL);
    xsi_set_current_line(371, ng0);
    t2 = (t0 + 4568U);
    t3 = *((char **)t2);
    t2 = (t0 + 11688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(372, ng0);
    t2 = (t0 + 4728U);
    t3 = *((char **)t2);
    t2 = (t0 + 11848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(373, ng0);
    t2 = (t0 + 4888U);
    t3 = *((char **)t2);
    t2 = (t0 + 12008);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(374, ng0);
    t2 = (t0 + 5048U);
    t3 = *((char **)t2);
    t2 = (t0 + 12168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(375, ng0);
    t2 = (t0 + 5208U);
    t3 = *((char **)t2);
    t2 = (t0 + 12328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(376, ng0);
    t2 = (t0 + 5368U);
    t3 = *((char **)t2);
    t2 = (t0 + 12488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(377, ng0);
    t2 = (t0 + 5528U);
    t3 = *((char **)t2);
    t2 = (t0 + 12648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(378, ng0);
    t2 = (t0 + 5688U);
    t3 = *((char **)t2);
    t2 = (t0 + 12808);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(379, ng0);
    t2 = (t0 + 7928U);
    t3 = *((char **)t2);
    t2 = (t0 + 16008);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(380, ng0);
    t2 = (t0 + 7768U);
    t3 = *((char **)t2);
    t2 = (t0 + 16328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    xsi_set_current_line(381, ng0);
    t2 = (t0 + 8088U);
    t3 = *((char **)t2);
    t2 = (t0 + 16648);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(382, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(384, ng0);
    t2 = (t0 + 3928U);
    t3 = *((char **)t2);
    t2 = (t0 + 15048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(385, ng0);
    t2 = (t0 + 4088U);
    t3 = *((char **)t2);
    t2 = (t0 + 15528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(386, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    t2 = (t0 + 14728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(387, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 14408);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t12);
    t8 = (t6 & t7);
    *((unsigned int *)t13) = t8;
    t14 = (t4 + 4);
    t19 = (t12 + 4);
    t20 = (t13 + 4);
    t9 = *((unsigned int *)t14);
    t10 = *((unsigned int *)t19);
    t16 = (t9 | t10);
    *((unsigned int *)t20) = t16;
    t17 = *((unsigned int *)t20);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB21;

LAB22:
LAB23:    t46 = (t0 + 4088U);
    t47 = *((char **)t46);
    memset(t15, 0, 8);
    t46 = (t47 + 4);
    t41 = *((unsigned int *)t46);
    t42 = (~(t41));
    t43 = *((unsigned int *)t47);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB27;

LAB25:    if (*((unsigned int *)t46) == 0)
        goto LAB24;

LAB26:    t48 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t48) = 1;

LAB27:    t50 = *((unsigned int *)t13);
    t51 = *((unsigned int *)t15);
    t52 = (t50 & t51);
    *((unsigned int *)t49) = t52;
    t53 = (t13 + 4);
    t54 = (t15 + 4);
    t55 = (t49 + 4);
    t56 = *((unsigned int *)t53);
    t57 = *((unsigned int *)t54);
    t58 = (t56 | t57);
    *((unsigned int *)t55) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 != 0);
    if (t60 == 1)
        goto LAB28;

LAB29:
LAB30:    t81 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t81, t49, 0, 0, 1, 0LL);
    xsi_set_current_line(388, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 9288);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(389, ng0);
    t2 = (t0 + 14888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(390, ng0);
    t2 = (t0 + 6008U);
    t3 = *((char **)t2);
    t2 = (t0 + 9608);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(391, ng0);
    t2 = (t0 + 16968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(346, ng0);

LAB9:    xsi_set_current_line(347, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 8488);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(348, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(349, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(350, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(351, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(352, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(353, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(354, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 15528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(359, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 14728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(360, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 8968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(361, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(362, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(363, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(364, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 9768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(365, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 6, 0LL);
    xsi_set_current_line(366, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(367, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 16648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t15) = (t26 | t27);
    t28 = (t13 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t44 & t40);
    t45 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t45 & t41);
    goto LAB17;

LAB18:    xsi_set_current_line(383, ng0);
    t4 = (t0 + 3768U);
    t5 = *((char **)t4);
    t4 = (t0 + 15368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB20;

LAB21:    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t13) = (t21 | t22);
    t28 = (t4 + 4);
    t29 = (t12 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (~(t25));
    t27 = *((unsigned int *)t12);
    t30 = (~(t27));
    t31 = *((unsigned int *)t29);
    t32 = (~(t31));
    t38 = (t24 & t26);
    t39 = (t30 & t32);
    t33 = (~(t38));
    t34 = (~(t39));
    t35 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t35 & t33);
    t36 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t36 & t34);
    t37 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t37 & t33);
    t40 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t40 & t34);
    goto LAB23;

LAB24:    *((unsigned int *)t15) = 1;
    goto LAB27;

LAB28:    t61 = *((unsigned int *)t49);
    t62 = *((unsigned int *)t55);
    *((unsigned int *)t49) = (t61 | t62);
    t63 = (t13 + 4);
    t64 = (t15 + 4);
    t65 = *((unsigned int *)t13);
    t66 = (~(t65));
    t67 = *((unsigned int *)t63);
    t68 = (~(t67));
    t69 = *((unsigned int *)t15);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (~(t71));
    t73 = (t66 & t68);
    t74 = (t70 & t72);
    t75 = (~(t73));
    t76 = (~(t74));
    t77 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t77 & t75);
    t78 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t78 & t76);
    t79 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t79 & t75);
    t80 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t80 & t76);
    goto LAB30;

}

static void Always_395_4(char *t0)
{
    char t13[8];
    char t14[8];
    char t27[8];
    char t33[8];
    char t41[8];
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
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 19352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(395, ng0);
    t2 = (t0 + 20232);
    *((int *)t2) = 1;
    t3 = (t0 + 19384);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(395, ng0);

LAB5:    xsi_set_current_line(396, ng0);
    t4 = (t0 + 7128U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(406, ng0);

LAB10:    xsi_set_current_line(407, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t5) != 0)
        goto LAB13;

LAB14:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB15;

LAB16:    t20 = *((unsigned int *)t14);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t12) > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t14) > 0)
        goto LAB21;

LAB22:    memcpy(t13, t24, 8);

LAB23:    t18 = (t0 + 9928);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(408, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t5) != 0)
        goto LAB26;

LAB27:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB28;

LAB29:    t20 = *((unsigned int *)t14);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t12) > 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t14) > 0)
        goto LAB34;

LAB35:    memcpy(t13, t24, 8);

LAB36:    t18 = (t0 + 10088);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 5, 0LL);
    xsi_set_current_line(409, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t5) != 0)
        goto LAB39;

LAB40:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB41;

LAB42:    t20 = *((unsigned int *)t14);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t12) > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t14) > 0)
        goto LAB47;

LAB48:    memcpy(t13, t24, 8);

LAB49:    t18 = (t0 + 10248);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(410, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t5) != 0)
        goto LAB52;

LAB53:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB54;

LAB55:    t20 = *((unsigned int *)t14);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t12) > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t14) > 0)
        goto LAB60;

LAB61:    memcpy(t13, t24, 8);

LAB62:    t18 = (t0 + 10408);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(411, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t5) != 0)
        goto LAB65;

LAB66:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB67;

LAB68:    t20 = *((unsigned int *)t14);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t12) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t14) > 0)
        goto LAB73;

LAB74:    memcpy(t13, t24, 8);

LAB75:    t18 = (t0 + 10568);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(412, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t5) != 0)
        goto LAB78;

LAB79:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB80;

LAB81:    t20 = *((unsigned int *)t14);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t12) > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t14) > 0)
        goto LAB86;

LAB87:    memcpy(t13, t24, 8);

LAB88:    t18 = (t0 + 10728);
    xsi_vlogvar_wait_assign_value(t18, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(414, ng0);
    t2 = (t0 + 4248U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB92;

LAB90:    if (*((unsigned int *)t2) == 0)
        goto LAB89;

LAB91:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB92:    memset(t14, 0, 8);
    t5 = (t13 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t20 = (t17 & t16);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t5) != 0)
        goto LAB95;

LAB96:    t12 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t23 = (!(t22));
    t25 = *((unsigned int *)t12);
    t26 = (t23 || t25);
    if (t26 > 0)
        goto LAB97;

LAB98:    memcpy(t41, t14, 8);

LAB99:    t69 = (t0 + 10888);
    xsi_vlogvar_wait_assign_value(t69, t41, 0, 0, 1, 0LL);
    xsi_set_current_line(416, ng0);
    t2 = (t0 + 15048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t5) != 0)
        goto LAB113;

LAB114:    t12 = (t14 + 4);
    t15 = *((unsigned int *)t14);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB115;

LAB116:    t20 = *((unsigned int *)t14);
    t21 = (~(t20));
    t22 = *((unsigned int *)t12);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t12) > 0)
        goto LAB119;

LAB120:    if (*((unsigned int *)t14) > 0)
        goto LAB121;

LAB122:    memcpy(t13, t18, 8);

LAB123:    t24 = (t0 + 11048);
    xsi_vlogvar_wait_assign_value(t24, t13, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(396, ng0);

LAB9:    xsi_set_current_line(397, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 9928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(398, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(399, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(400, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(401, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(402, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(403, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(404, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 11048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB14;

LAB15:    t18 = (t0 + 2648U);
    t19 = *((char **)t18);
    goto LAB16;

LAB17:    t18 = (t0 + 1048U);
    t24 = *((char **)t18);
    goto LAB18;

LAB19:    xsi_vlog_unsigned_bit_combine(t13, 1, t19, 1, t24, 1);
    goto LAB23;

LAB21:    memcpy(t13, t19, 8);
    goto LAB23;

LAB24:    *((unsigned int *)t14) = 1;
    goto LAB27;

LAB26:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB27;

LAB28:    t18 = (t0 + 2808U);
    t19 = *((char **)t18);
    goto LAB29;

LAB30:    t18 = (t0 + 1208U);
    t24 = *((char **)t18);
    goto LAB31;

LAB32:    xsi_vlog_unsigned_bit_combine(t13, 5, t19, 5, t24, 5);
    goto LAB36;

LAB34:    memcpy(t13, t19, 8);
    goto LAB36;

LAB37:    *((unsigned int *)t14) = 1;
    goto LAB40;

LAB39:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB40;

LAB41:    t18 = (t0 + 2968U);
    t19 = *((char **)t18);
    goto LAB42;

LAB43:    t18 = (t0 + 1368U);
    t24 = *((char **)t18);
    goto LAB44;

LAB45:    xsi_vlog_unsigned_bit_combine(t13, 1, t19, 1, t24, 1);
    goto LAB49;

LAB47:    memcpy(t13, t19, 8);
    goto LAB49;

LAB50:    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB52:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB53;

LAB54:    t18 = (t0 + 3128U);
    t19 = *((char **)t18);
    goto LAB55;

LAB56:    t18 = (t0 + 1528U);
    t24 = *((char **)t18);
    goto LAB57;

LAB58:    xsi_vlog_unsigned_bit_combine(t13, 1, t19, 1, t24, 1);
    goto LAB62;

LAB60:    memcpy(t13, t19, 8);
    goto LAB62;

LAB63:    *((unsigned int *)t14) = 1;
    goto LAB66;

LAB65:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB66;

LAB67:    t18 = (t0 + 3288U);
    t19 = *((char **)t18);
    goto LAB68;

LAB69:    t18 = (t0 + 1688U);
    t24 = *((char **)t18);
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t13, 1, t19, 1, t24, 1);
    goto LAB75;

LAB73:    memcpy(t13, t19, 8);
    goto LAB75;

LAB76:    *((unsigned int *)t14) = 1;
    goto LAB79;

LAB78:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB79;

LAB80:    t18 = (t0 + 3448U);
    t19 = *((char **)t18);
    goto LAB81;

LAB82:    t18 = (t0 + 1848U);
    t24 = *((char **)t18);
    goto LAB83;

LAB84:    xsi_vlog_unsigned_bit_combine(t13, 1, t19, 1, t24, 1);
    goto LAB88;

LAB86:    memcpy(t13, t19, 8);
    goto LAB88;

LAB89:    *((unsigned int *)t13) = 1;
    goto LAB92;

LAB93:    *((unsigned int *)t14) = 1;
    goto LAB96;

LAB95:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB96;

LAB97:    t18 = (t0 + 2328U);
    t19 = *((char **)t18);
    memset(t27, 0, 8);
    t18 = (t19 + 4);
    t28 = *((unsigned int *)t18);
    t29 = (~(t28));
    t30 = *((unsigned int *)t19);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB103;

LAB101:    if (*((unsigned int *)t18) == 0)
        goto LAB100;

LAB102:    t24 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t24) = 1;

LAB103:    memset(t33, 0, 8);
    t34 = (t27 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t27);
    t38 = (t37 & t36);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t34) != 0)
        goto LAB106;

LAB107:    t42 = *((unsigned int *)t14);
    t43 = *((unsigned int *)t33);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = (t14 + 4);
    t46 = (t33 + 4);
    t47 = (t41 + 4);
    t48 = *((unsigned int *)t45);
    t49 = *((unsigned int *)t46);
    t50 = (t48 | t49);
    *((unsigned int *)t47) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 != 0);
    if (t52 == 1)
        goto LAB108;

LAB109:
LAB110:    goto LAB99;

LAB100:    *((unsigned int *)t27) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t33) = 1;
    goto LAB107;

LAB106:    t40 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB107;

LAB108:    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t47);
    *((unsigned int *)t41) = (t53 | t54);
    t55 = (t14 + 4);
    t56 = (t33 + 4);
    t57 = *((unsigned int *)t55);
    t58 = (~(t57));
    t59 = *((unsigned int *)t14);
    t60 = (t59 & t58);
    t61 = *((unsigned int *)t56);
    t62 = (~(t61));
    t63 = *((unsigned int *)t33);
    t64 = (t63 & t62);
    t65 = (~(t60));
    t66 = (~(t64));
    t67 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t67 & t65);
    t68 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t68 & t66);
    goto LAB110;

LAB111:    *((unsigned int *)t14) = 1;
    goto LAB114;

LAB113:    t11 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB114;

LAB115:    t18 = (t0 + 3608U);
    t19 = *((char **)t18);
    goto LAB116;

LAB117:    t18 = ((char*)((ng2)));
    goto LAB118;

LAB119:    xsi_vlog_unsigned_bit_combine(t13, 1, t19, 1, t18, 1);
    goto LAB123;

LAB121:    memcpy(t13, t19, 8);
    goto LAB123;

}

static void Cont_423_5(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 19600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(423, ng0);
    t2 = (t0 + 17288);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 17128);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlogtype_concat(t3, 8, 8, 2U, t8, 4, t5, 4);
    t9 = (t0 + 20344);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t13, 0, 8);
    t14 = 255U;
    t15 = t14;
    t16 = (t3 + 4);
    t17 = *((unsigned int *)t3);
    t14 = (t14 & t17);
    t18 = *((unsigned int *)t16);
    t15 = (t15 & t18);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 | t14);
    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 | t15);
    xsi_driver_vfirst_trans(t9, 0, 7);
    t22 = (t0 + 20248);
    *((int *)t22) = 1;

LAB1:    return;
}

static void Always_425_6(char *t0)
{
    char t13[8];
    char t14[8];
    char t28[8];
    char t36[8];
    char t76[8];
    char t80[8];
    char t86[8];
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
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;

LAB0:    t1 = (t0 + 19848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(425, ng0);
    t2 = (t0 + 20264);
    *((int *)t2) = 1;
    t3 = (t0 + 19880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(425, ng0);

LAB5:    xsi_set_current_line(426, ng0);
    t4 = (t0 + 7288U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(431, ng0);
    t2 = (t0 + 15688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB13;

LAB11:    if (*((unsigned int *)t5) == 0)
        goto LAB10;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB13:    memset(t14, 0, 8);
    t12 = (t13 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    t17 = *((unsigned int *)t13);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t12) != 0)
        goto LAB16;

LAB17:    t21 = (t14 + 4);
    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB18;

LAB19:    memcpy(t36, t14, 8);

LAB20:    t68 = (t36 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t36);
    t72 = (t71 & t70);
    t73 = (t72 != 0);
    if (t73 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(433, ng0);
    t2 = (t0 + 17448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t22 = (~(t19));
    t23 = (t16 & t22);
    if (t23 != 0)
        goto LAB35;

LAB32:    if (t19 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t13) = 1;

LAB35:    t21 = (t13 + 4);
    t24 = *((unsigned int *)t21);
    t30 = (~(t24));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(435, ng0);
    t2 = (t0 + 15688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t5) != 0)
        goto LAB42;

LAB43:    t12 = (t13 + 4);
    t15 = *((unsigned int *)t13);
    t16 = *((unsigned int *)t12);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB44;

LAB45:    memcpy(t28, t13, 8);

LAB46:    memset(t36, 0, 8);
    t41 = (t28 + 4);
    t63 = *((unsigned int *)t41);
    t64 = (~(t63));
    t65 = *((unsigned int *)t28);
    t66 = (t65 & t64);
    t67 = (t66 & 1U);
    if (t67 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t41) != 0)
        goto LAB56;

LAB57:    t50 = (t36 + 4);
    t69 = *((unsigned int *)t36);
    t70 = *((unsigned int *)t50);
    t71 = (t69 || t70);
    if (t71 > 0)
        goto LAB58;

LAB59:    memcpy(t86, t36, 8);

LAB60:    t118 = (t86 + 4);
    t119 = *((unsigned int *)t118);
    t120 = (~(t119));
    t121 = *((unsigned int *)t86);
    t122 = (t121 & t120);
    t123 = (t122 != 0);
    if (t123 > 0)
        goto LAB73;

LAB74:
LAB75:
LAB38:
LAB30:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(426, ng0);

LAB9:    xsi_set_current_line(427, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 17128);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(428, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(429, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(430, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t14) = 1;
    goto LAB17;

LAB16:    t20 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB17;

LAB18:    t25 = (t0 + 9128);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t29) != 0)
        goto LAB23;

LAB24:    t37 = *((unsigned int *)t14);
    t38 = *((unsigned int *)t28);
    t39 = (t37 & t38);
    *((unsigned int *)t36) = t39;
    t40 = (t14 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB21:    *((unsigned int *)t28) = 1;
    goto LAB24;

LAB23:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB24;

LAB25:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t14 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t14);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (~(t54));
    t56 = *((unsigned int *)t28);
    t57 = (~(t56));
    t58 = *((unsigned int *)t51);
    t59 = (~(t58));
    t60 = (t53 & t55);
    t61 = (t57 & t59);
    t62 = (~(t60));
    t63 = (~(t61));
    t64 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t64 & t62);
    t65 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t65 & t63);
    t66 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t66 & t62);
    t67 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t67 & t63);
    goto LAB27;

LAB28:    xsi_set_current_line(431, ng0);

LAB31:    xsi_set_current_line(432, ng0);
    t74 = ((char*)((ng1)));
    t75 = (t0 + 9128);
    xsi_vlogvar_wait_assign_value(t75, t74, 0, 0, 1, 0LL);
    xsi_set_current_line(432, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 17448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB30;

LAB34:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(433, ng0);

LAB39:    xsi_set_current_line(434, ng0);
    t25 = ((char*)((ng2)));
    t26 = (t0 + 9128);
    xsi_vlogvar_wait_assign_value(t26, t25, 0, 0, 1, 0LL);
    goto LAB38;

LAB40:    *((unsigned int *)t13) = 1;
    goto LAB43;

LAB42:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB43;

LAB44:    t20 = (t0 + 6328U);
    t21 = *((char **)t20);
    memset(t14, 0, 8);
    t20 = (t21 + 4);
    t18 = *((unsigned int *)t20);
    t19 = (~(t18));
    t22 = *((unsigned int *)t21);
    t23 = (t22 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t20) != 0)
        goto LAB49;

LAB50:    t30 = *((unsigned int *)t13);
    t31 = *((unsigned int *)t14);
    t32 = (t30 & t31);
    *((unsigned int *)t28) = t32;
    t26 = (t13 + 4);
    t27 = (t14 + 4);
    t29 = (t28 + 4);
    t33 = *((unsigned int *)t26);
    t34 = *((unsigned int *)t27);
    t37 = (t33 | t34);
    *((unsigned int *)t29) = t37;
    t38 = *((unsigned int *)t29);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t14) = 1;
    goto LAB50;

LAB49:    t25 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB50;

LAB51:    t43 = *((unsigned int *)t28);
    t44 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t43 | t44);
    t35 = (t13 + 4);
    t40 = (t14 + 4);
    t45 = *((unsigned int *)t13);
    t46 = (~(t45));
    t47 = *((unsigned int *)t35);
    t48 = (~(t47));
    t49 = *((unsigned int *)t14);
    t52 = (~(t49));
    t53 = *((unsigned int *)t40);
    t54 = (~(t53));
    t60 = (t46 & t48);
    t61 = (t52 & t54);
    t55 = (~(t60));
    t56 = (~(t61));
    t57 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t57 & t55);
    t58 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t58 & t56);
    t59 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t59 & t55);
    t62 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t62 & t56);
    goto LAB53;

LAB54:    *((unsigned int *)t36) = 1;
    goto LAB57;

LAB56:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB57;

LAB58:    t51 = (t0 + 17448);
    t68 = (t51 + 56U);
    t74 = *((char **)t68);
    t75 = ((char*)((ng3)));
    memset(t76, 0, 8);
    t77 = (t74 + 4);
    if (*((unsigned int *)t77) != 0)
        goto LAB62;

LAB61:    t78 = (t75 + 4);
    if (*((unsigned int *)t78) != 0)
        goto LAB62;

LAB65:    if (*((unsigned int *)t74) < *((unsigned int *)t75))
        goto LAB63;

LAB64:    memset(t80, 0, 8);
    t81 = (t76 + 4);
    t72 = *((unsigned int *)t81);
    t73 = (~(t72));
    t82 = *((unsigned int *)t76);
    t83 = (t82 & t73);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t81) != 0)
        goto LAB68;

LAB69:    t87 = *((unsigned int *)t36);
    t88 = *((unsigned int *)t80);
    t89 = (t87 & t88);
    *((unsigned int *)t86) = t89;
    t90 = (t36 + 4);
    t91 = (t80 + 4);
    t92 = (t86 + 4);
    t93 = *((unsigned int *)t90);
    t94 = *((unsigned int *)t91);
    t95 = (t93 | t94);
    *((unsigned int *)t92) = t95;
    t96 = *((unsigned int *)t92);
    t97 = (t96 != 0);
    if (t97 == 1)
        goto LAB70;

LAB71:
LAB72:    goto LAB60;

LAB62:    t79 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB64;

LAB63:    *((unsigned int *)t76) = 1;
    goto LAB64;

LAB66:    *((unsigned int *)t80) = 1;
    goto LAB69;

LAB68:    t85 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t85) = 1;
    goto LAB69;

LAB70:    t98 = *((unsigned int *)t86);
    t99 = *((unsigned int *)t92);
    *((unsigned int *)t86) = (t98 | t99);
    t100 = (t36 + 4);
    t101 = (t80 + 4);
    t102 = *((unsigned int *)t36);
    t103 = (~(t102));
    t104 = *((unsigned int *)t100);
    t105 = (~(t104));
    t106 = *((unsigned int *)t80);
    t107 = (~(t106));
    t108 = *((unsigned int *)t101);
    t109 = (~(t108));
    t110 = (t103 & t105);
    t111 = (t107 & t109);
    t112 = (~(t110));
    t113 = (~(t111));
    t114 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t114 & t112);
    t115 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t115 & t113);
    t116 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t116 & t112);
    t117 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t117 & t113);
    goto LAB72;

LAB73:    xsi_set_current_line(435, ng0);

LAB76:    xsi_set_current_line(436, ng0);
    t124 = ((char*)((ng1)));
    t125 = (t0 + 9128);
    xsi_vlogvar_wait_assign_value(t125, t124, 0, 0, 1, 0LL);
    xsi_set_current_line(437, ng0);
    t2 = (t0 + 17448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 3, t4, 3, t5, 3);
    t11 = (t0 + 17448);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 3, 0LL);
    xsi_set_current_line(438, ng0);
    t2 = (t0 + 6968U);
    t3 = *((char **)t2);
    t2 = (t0 + 17128);
    t4 = (t0 + 17128);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 17448);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t21, 3, 2);
    t25 = (t13 + 4);
    t6 = *((unsigned int *)t25);
    t60 = (!(t6));
    if (t60 == 1)
        goto LAB77;

LAB78:    xsi_set_current_line(439, ng0);
    t2 = (t0 + 6808U);
    t3 = *((char **)t2);
    t2 = (t0 + 17288);
    t4 = (t0 + 17288);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 17448);
    t20 = (t12 + 56U);
    t21 = *((char **)t20);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t21, 3, 2);
    t25 = (t13 + 4);
    t6 = *((unsigned int *)t25);
    t60 = (!(t6));
    if (t60 == 1)
        goto LAB79;

LAB80:    goto LAB75;

LAB77:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB78;

LAB79:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t13), 1, 0LL);
    goto LAB80;

}


extern void secureip_m_05787595530544747641_1674405268_init()
{
	static char *pe[] = {(void *)Always_273_0,(void *)Always_284_1,(void *)Always_336_2,(void *)Always_345_3,(void *)Always_395_4,(void *)Cont_423_5,(void *)Always_425_6};
	xsi_register_didat("secureip_m_05787595530544747641_1674405268", "isim/tb_ddr2_interface_isim_beh.exe.sim/secureip/m_05787595530544747641_1674405268.didat");
	xsi_register_executes(pe);
}
