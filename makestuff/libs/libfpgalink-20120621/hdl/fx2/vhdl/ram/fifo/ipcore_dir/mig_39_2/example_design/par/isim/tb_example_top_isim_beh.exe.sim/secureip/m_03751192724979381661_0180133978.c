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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_calibration_drp_sync.v";
static unsigned int ng1[] = {0U, 0U};



static void Always_90_0(char *t0)
{
    char t13[8];
    char t19[8];
    char t31[8];
    char t42[8];
    char t50[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t20;
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    int t75;
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

LAB0:    t1 = (t0 + 6680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 7248);
    *((int *)t2) = 1;
    t3 = (t0 + 6712);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(91, ng0);
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

LAB7:    xsi_set_current_line(100, ng0);

LAB10:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t2) != 0)
        goto LAB13;

LAB14:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (!(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB15;

LAB16:    memcpy(t90, t13, 8);

LAB17:    t118 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t118, t90, 0, 0, 1, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 4968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5128);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);

LAB9:    xsi_set_current_line(92, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB13:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB14;

LAB15:    t11 = (t0 + 4488);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    memset(t19, 0, 8);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t18);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t20) != 0)
        goto LAB20;

LAB21:    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t27);
    t30 = (t28 || t29);
    if (t30 > 0)
        goto LAB22;

LAB23:    memcpy(t50, t19, 8);

LAB24:    memset(t82, 0, 8);
    t83 = (t50 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t50);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t83) != 0)
        goto LAB38;

LAB39:    t91 = *((unsigned int *)t13);
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
        goto LAB40;

LAB41:
LAB42:    goto LAB17;

LAB18:    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB20:    t26 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB21;

LAB22:    t32 = (t0 + 4648);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memset(t31, 0, 8);
    t35 = (t34 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t34);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t35) == 0)
        goto LAB25;

LAB27:    t41 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t41) = 1;

LAB28:    memset(t42, 0, 8);
    t43 = (t31 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t31);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t43) != 0)
        goto LAB31;

LAB32:    t51 = *((unsigned int *)t19);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t19 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB25:    *((unsigned int *)t31) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t42) = 1;
    goto LAB32;

LAB31:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB32;

LAB33:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t19 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t19);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t74 = (t67 & t69);
    t75 = (t71 & t73);
    t76 = (~(t74));
    t77 = (~(t75));
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t79 & t77);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    t81 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t81 & t77);
    goto LAB35;

LAB36:    *((unsigned int *)t82) = 1;
    goto LAB39;

LAB38:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB39;

LAB40:    t102 = *((unsigned int *)t90);
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
    goto LAB42;

}

static void Always_112_1(char *t0)
{
    char t13[8];
    char t16[8];
    char t49[8];
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
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
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

LAB0:    t1 = (t0 + 6928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 7264);
    *((int *)t2) = 1;
    t3 = (t0 + 6960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);

LAB5:    xsi_set_current_line(113, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(125, ng0);

LAB10:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 4488);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 4648);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4808);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4648);
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
        goto LAB14;

LAB12:    if (*((unsigned int *)t14) == 0)
        goto LAB11;

LAB13:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;

LAB14:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t13);
    t19 = (t17 & t18);
    *((unsigned int *)t16) = t19;
    t20 = (t4 + 4);
    t21 = (t13 + 4);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t20);
    t24 = *((unsigned int *)t21);
    t25 = (t23 | t24);
    *((unsigned int *)t22) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 != 0);
    if (t27 == 1)
        goto LAB15;

LAB16:
LAB17:    t48 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t48, t16, 0, 0, 1, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2328U);
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

LAB19:    if (*((unsigned int *)t2) != 0)
        goto LAB20;

LAB21:    t5 = (t13 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (!(t17));
    t19 = *((unsigned int *)t5);
    t23 = (t18 || t19);
    if (t23 > 0)
        goto LAB22;

LAB23:    memcpy(t90, t13, 8);

LAB24:    t118 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t118, t90, 0, 0, 1, 0LL);
    xsi_set_current_line(134, ng0);
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
        goto LAB50;

LAB51:    if (*((unsigned int *)t2) != 0)
        goto LAB52;

LAB53:    t5 = (t13 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (!(t17));
    t19 = *((unsigned int *)t5);
    t23 = (t18 || t19);
    if (t23 > 0)
        goto LAB54;

LAB55:    memcpy(t90, t13, 8);

LAB56:    t118 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t118, t90, 0, 0, 1, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t2) != 0)
        goto LAB84;

LAB85:    t5 = (t13 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (!(t17));
    t19 = *((unsigned int *)t5);
    t23 = (t18 || t19);
    if (t23 > 0)
        goto LAB86;

LAB87:    memcpy(t49, t13, 8);

LAB88:    t31 = (t49 + 4);
    t63 = *((unsigned int *)t31);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t68 = (t65 & t64);
    t69 = (t68 != 0);
    if (t69 > 0)
        goto LAB96;

LAB97:
LAB98:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(113, ng0);

LAB9:    xsi_set_current_line(114, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5128);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB15:    t28 = *((unsigned int *)t16);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t16) = (t28 | t29);
    t30 = (t4 + 4);
    t31 = (t13 + 4);
    t32 = *((unsigned int *)t4);
    t33 = (~(t32));
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t13);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (~(t38));
    t40 = (t33 & t35);
    t41 = (t37 & t39);
    t42 = (~(t40));
    t43 = (~(t41));
    t44 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t44 & t42);
    t45 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t45 & t43);
    t46 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t46 & t42);
    t47 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t47 & t43);
    goto LAB17;

LAB18:    *((unsigned int *)t13) = 1;
    goto LAB21;

LAB20:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB22:    t11 = (t0 + 4968);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t15 = (t14 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t15) != 0)
        goto LAB27;

LAB28:    t21 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t21);
    t33 = (t29 || t32);
    if (t33 > 0)
        goto LAB29;

LAB30:    memcpy(t54, t16, 8);

LAB31:    memset(t82, 0, 8);
    t83 = (t54 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t54);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t83) != 0)
        goto LAB45;

LAB46:    t91 = *((unsigned int *)t13);
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
        goto LAB47;

LAB48:
LAB49:    goto LAB24;

LAB25:    *((unsigned int *)t16) = 1;
    goto LAB28;

LAB27:    t20 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB28;

LAB29:    t22 = (t0 + 4168);
    t30 = (t22 + 56U);
    t31 = *((char **)t30);
    memset(t49, 0, 8);
    t48 = (t31 + 4);
    t34 = *((unsigned int *)t48);
    t35 = (~(t34));
    t36 = *((unsigned int *)t31);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t48) == 0)
        goto LAB32;

LAB34:    t50 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t50) = 1;

LAB35:    memset(t51, 0, 8);
    t52 = (t49 + 4);
    t39 = *((unsigned int *)t52);
    t42 = (~(t39));
    t43 = *((unsigned int *)t49);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t52) != 0)
        goto LAB38;

LAB39:    t46 = *((unsigned int *)t16);
    t47 = *((unsigned int *)t51);
    t55 = (t46 & t47);
    *((unsigned int *)t54) = t55;
    t56 = (t16 + 4);
    t57 = (t51 + 4);
    t58 = (t54 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB40;

LAB41:
LAB42:    goto LAB31;

LAB32:    *((unsigned int *)t49) = 1;
    goto LAB35;

LAB36:    *((unsigned int *)t51) = 1;
    goto LAB39;

LAB38:    t53 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB39;

LAB40:    t64 = *((unsigned int *)t54);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t54) = (t64 | t65);
    t66 = (t16 + 4);
    t67 = (t51 + 4);
    t68 = *((unsigned int *)t16);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t51);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t40 = (t69 & t71);
    t41 = (t73 & t75);
    t76 = (~(t40));
    t77 = (~(t41));
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t78 & t76);
    t79 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t79 & t77);
    t80 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t80 & t76);
    t81 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t81 & t77);
    goto LAB42;

LAB43:    *((unsigned int *)t82) = 1;
    goto LAB46;

LAB45:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB46;

LAB47:    t102 = *((unsigned int *)t90);
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
    goto LAB49;

LAB50:    *((unsigned int *)t13) = 1;
    goto LAB53;

LAB52:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB54:    t11 = (t0 + 5128);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memset(t16, 0, 8);
    t15 = (t14 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t15) != 0)
        goto LAB59;

LAB60:    t21 = (t16 + 4);
    t29 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t21);
    t33 = (t29 || t32);
    if (t33 > 0)
        goto LAB61;

LAB62:    memcpy(t54, t16, 8);

LAB63:    memset(t82, 0, 8);
    t83 = (t54 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t54);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t83) != 0)
        goto LAB77;

LAB78:    t91 = *((unsigned int *)t13);
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
        goto LAB79;

LAB80:
LAB81:    goto LAB56;

LAB57:    *((unsigned int *)t16) = 1;
    goto LAB60;

LAB59:    t20 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB60;

LAB61:    t22 = (t0 + 4328);
    t30 = (t22 + 56U);
    t31 = *((char **)t30);
    memset(t49, 0, 8);
    t48 = (t31 + 4);
    t34 = *((unsigned int *)t48);
    t35 = (~(t34));
    t36 = *((unsigned int *)t31);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB67;

LAB65:    if (*((unsigned int *)t48) == 0)
        goto LAB64;

LAB66:    t50 = (t49 + 4);
    *((unsigned int *)t49) = 1;
    *((unsigned int *)t50) = 1;

LAB67:    memset(t51, 0, 8);
    t52 = (t49 + 4);
    t39 = *((unsigned int *)t52);
    t42 = (~(t39));
    t43 = *((unsigned int *)t49);
    t44 = (t43 & t42);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t52) != 0)
        goto LAB70;

LAB71:    t46 = *((unsigned int *)t16);
    t47 = *((unsigned int *)t51);
    t55 = (t46 & t47);
    *((unsigned int *)t54) = t55;
    t56 = (t16 + 4);
    t57 = (t51 + 4);
    t58 = (t54 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB63;

LAB64:    *((unsigned int *)t49) = 1;
    goto LAB67;

LAB68:    *((unsigned int *)t51) = 1;
    goto LAB71;

LAB70:    t53 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t53) = 1;
    goto LAB71;

LAB72:    t64 = *((unsigned int *)t54);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t54) = (t64 | t65);
    t66 = (t16 + 4);
    t67 = (t51 + 4);
    t68 = *((unsigned int *)t16);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t51);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t40 = (t69 & t71);
    t41 = (t73 & t75);
    t76 = (~(t40));
    t77 = (~(t41));
    t78 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t78 & t76);
    t79 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t79 & t77);
    t80 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t80 & t76);
    t81 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t81 & t77);
    goto LAB74;

LAB75:    *((unsigned int *)t82) = 1;
    goto LAB78;

LAB77:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB78;

LAB79:    t102 = *((unsigned int *)t90);
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
    goto LAB81;

LAB82:    *((unsigned int *)t13) = 1;
    goto LAB85;

LAB84:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB85;

LAB86:    t11 = (t0 + 2488U);
    t12 = *((char **)t11);
    memset(t16, 0, 8);
    t11 = (t12 + 4);
    t24 = *((unsigned int *)t11);
    t25 = (~(t24));
    t26 = *((unsigned int *)t12);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB89;

LAB90:    if (*((unsigned int *)t11) != 0)
        goto LAB91;

LAB92:    t29 = *((unsigned int *)t13);
    t32 = *((unsigned int *)t16);
    t33 = (t29 | t32);
    *((unsigned int *)t49) = t33;
    t15 = (t13 + 4);
    t20 = (t16 + 4);
    t21 = (t49 + 4);
    t34 = *((unsigned int *)t15);
    t35 = *((unsigned int *)t20);
    t36 = (t34 | t35);
    *((unsigned int *)t21) = t36;
    t37 = *((unsigned int *)t21);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB93;

LAB94:
LAB95:    goto LAB88;

LAB89:    *((unsigned int *)t16) = 1;
    goto LAB92;

LAB91:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB92;

LAB93:    t39 = *((unsigned int *)t49);
    t42 = *((unsigned int *)t21);
    *((unsigned int *)t49) = (t39 | t42);
    t22 = (t13 + 4);
    t30 = (t16 + 4);
    t43 = *((unsigned int *)t22);
    t44 = (~(t43));
    t45 = *((unsigned int *)t13);
    t40 = (t45 & t44);
    t46 = *((unsigned int *)t30);
    t47 = (~(t46));
    t55 = *((unsigned int *)t16);
    t41 = (t55 & t47);
    t59 = (~(t40));
    t60 = (~(t41));
    t61 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t61 & t59);
    t62 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t62 & t60);
    goto LAB95;

LAB96:    xsi_set_current_line(135, ng0);

LAB99:    xsi_set_current_line(136, ng0);
    t48 = (t0 + 1688U);
    t50 = *((char **)t48);
    t48 = (t0 + 5288);
    xsi_vlogvar_wait_assign_value(t48, t50, 0, 0, 8, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 5448);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 5608);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 5768);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    goto LAB98;

}


extern void secureip_m_03751192724979381661_0180133978_init()
{
	static char *pe[] = {(void *)Always_90_0,(void *)Always_112_1};
	xsi_register_didat("secureip_m_03751192724979381661_0180133978", "isim/tb_example_top_isim_beh.exe.sim/secureip/m_03751192724979381661_0180133978.didat");
	xsi_register_executes(pe);
}
