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
static unsigned int ng1[] = {15U, 15U};



static void Cont_1060_0(char *t0)
{
    char t4[8];
    char t12[8];
    char t15[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t16;
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
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1060, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t13 = (t0 + 1208U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t13 = (t15 + 4);
    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 1);
    t19 = (t18 & 1);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t16);
    t21 = (t20 >> 1);
    t22 = (t21 & 1);
    *((unsigned int *)t13) = t22;
    memset(t12, 0, 8);
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t15);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t23) == 0)
        goto LAB4;

LAB6:    t29 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t29) = 1;

LAB7:    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t12);
    t33 = (t31 & t32);
    *((unsigned int *)t30) = t33;
    t34 = (t4 + 4);
    t35 = (t12 + 4);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t34);
    t38 = *((unsigned int *)t35);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB8;

LAB9:
LAB10:    t62 = (t0 + 5776);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t66, 0, 8);
    t67 = 1U;
    t68 = t67;
    t69 = (t30 + 4);
    t70 = *((unsigned int *)t30);
    t67 = (t67 & t70);
    t71 = *((unsigned int *)t69);
    t68 = (t68 & t71);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t73 | t67);
    t74 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t74 | t68);
    xsi_driver_vfirst_trans(t62, 0, 0);
    t75 = (t0 + 5552);
    *((int *)t75) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t12) = 1;
    goto LAB7;

LAB8:    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t30) = (t42 | t43);
    t44 = (t4 + 4);
    t45 = (t12 + 4);
    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t44);
    t49 = (~(t48));
    t50 = *((unsigned int *)t12);
    t51 = (~(t50));
    t52 = *((unsigned int *)t45);
    t53 = (~(t52));
    t54 = (t47 & t49);
    t55 = (t51 & t53);
    t56 = (~(t54));
    t57 = (~(t55));
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t56);
    t59 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t59 & t57);
    t60 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t60 & t56);
    t61 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t61 & t57);
    goto LAB10;

}

static void Cont_1061_1(char *t0)
{
    char t3[8];
    char t5[8];
    char t20[8];
    char t23[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1061, ng0);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t5 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    t12 = (t11 & 1);
    *((unsigned int *)t2) = t12;
    memset(t3, 0, 8);
    t13 = (t5 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t13) == 0)
        goto LAB4;

LAB6:    t19 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t19) = 1;

LAB7:    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 1);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 1);
    t30 = (t29 & 1);
    *((unsigned int *)t21) = t30;
    memset(t20, 0, 8);
    t31 = (t23 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t23);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t31) == 0)
        goto LAB8;

LAB10:    t37 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t37) = 1;

LAB11:    t39 = *((unsigned int *)t3);
    t40 = *((unsigned int *)t20);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t3 + 4);
    t43 = (t20 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB12;

LAB13:
LAB14:    t70 = (t0 + 5840);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    t73 = (t72 + 56U);
    t74 = *((char **)t73);
    memset(t74, 0, 8);
    t75 = 1U;
    t76 = t75;
    t77 = (t38 + 4);
    t78 = *((unsigned int *)t38);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 | t75);
    t82 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t82 | t76);
    xsi_driver_vfirst_trans(t70, 0, 0);
    t83 = (t0 + 5568);
    *((int *)t83) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB12:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t3 + 4);
    t53 = (t20 + 4);
    t54 = *((unsigned int *)t3);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t20);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB14;

}

static void Cont_1064_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t26[8];
    char t50[8];
    char t51[8];
    char t64[8];
    char t65[8];
    char t89[8];
    char t90[8];
    char t103[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
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
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
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
    unsigned int t87;
    unsigned int t88;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1064, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t21);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t50, 8);

LAB16:    t129 = (t0 + 5904);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    memset(t133, 0, 8);
    t134 = 15U;
    t135 = t134;
    t136 = (t3 + 4);
    t137 = *((unsigned int *)t3);
    t134 = (t134 & t137);
    t138 = *((unsigned int *)t136);
    t135 = (t135 & t138);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t140 | t134);
    t141 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t141 | t135);
    xsi_driver_vfirst_trans(t129, 28, 31);
    t142 = (t0 + 5584);
    *((int *)t142) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t27 = (t0 + 1528U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 12);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 12);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 15U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 15U);
    memset(t25, 0, 8);
    t36 = (t25 + 4);
    t37 = (t26 + 4);
    t38 = *((unsigned int *)t26);
    t39 = (~(t38));
    *((unsigned int *)t25) = t39;
    *((unsigned int *)t36) = 0;
    if (*((unsigned int *)t37) != 0)
        goto LAB18;

LAB17:    t44 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t44 & 15U);
    t45 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t45 & 15U);
    goto LAB9;

LAB10:    t52 = (t0 + 1688U);
    t53 = *((char **)t52);
    memset(t51, 0, 8);
    t52 = (t53 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t53);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t52) != 0)
        goto LAB21;

LAB22:    t60 = (t51 + 4);
    t61 = *((unsigned int *)t51);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB23;

LAB24:    t85 = *((unsigned int *)t51);
    t86 = (~(t85));
    t87 = *((unsigned int *)t60);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t51) > 0)
        goto LAB29;

LAB30:    memcpy(t50, t89, 8);

LAB31:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t25, 4, t50, 4);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

LAB18:    t40 = *((unsigned int *)t25);
    t41 = *((unsigned int *)t37);
    *((unsigned int *)t25) = (t40 | t41);
    t42 = *((unsigned int *)t36);
    t43 = *((unsigned int *)t37);
    *((unsigned int *)t36) = (t42 | t43);
    goto LAB17;

LAB19:    *((unsigned int *)t51) = 1;
    goto LAB22;

LAB21:    t59 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t66 = (t0 + 1528U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 4);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 4);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 15U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 15U);
    memset(t64, 0, 8);
    t75 = (t64 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t65);
    t78 = (~(t77));
    *((unsigned int *)t64) = t78;
    *((unsigned int *)t75) = 0;
    if (*((unsigned int *)t76) != 0)
        goto LAB33;

LAB32:    t83 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t83 & 15U);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & 15U);
    goto LAB24;

LAB25:    t91 = (t0 + 1848U);
    t92 = *((char **)t91);
    memset(t90, 0, 8);
    t91 = (t92 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t92);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t91) != 0)
        goto LAB36;

LAB37:    t99 = (t90 + 4);
    t100 = *((unsigned int *)t90);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB38;

LAB39:    t124 = *((unsigned int *)t90);
    t125 = (~(t124));
    t126 = *((unsigned int *)t99);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t99) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t90) > 0)
        goto LAB44;

LAB45:    memcpy(t89, t128, 8);

LAB46:    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t50, 4, t64, 4, t89, 4);
    goto LAB31;

LAB29:    memcpy(t50, t64, 8);
    goto LAB31;

LAB33:    t79 = *((unsigned int *)t64);
    t80 = *((unsigned int *)t76);
    *((unsigned int *)t64) = (t79 | t80);
    t81 = *((unsigned int *)t75);
    t82 = *((unsigned int *)t76);
    *((unsigned int *)t75) = (t81 | t82);
    goto LAB32;

LAB34:    *((unsigned int *)t90) = 1;
    goto LAB37;

LAB36:    t98 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB37;

LAB38:    t105 = (t0 + 1528U);
    t106 = *((char **)t105);
    memset(t104, 0, 8);
    t105 = (t104 + 4);
    t107 = (t106 + 4);
    t108 = *((unsigned int *)t106);
    t109 = (t108 >> 0);
    *((unsigned int *)t104) = t109;
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 0);
    *((unsigned int *)t105) = t111;
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 15U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 15U);
    memset(t103, 0, 8);
    t114 = (t103 + 4);
    t115 = (t104 + 4);
    t116 = *((unsigned int *)t104);
    t117 = (~(t116));
    *((unsigned int *)t103) = t117;
    *((unsigned int *)t114) = 0;
    if (*((unsigned int *)t115) != 0)
        goto LAB48;

LAB47:    t122 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t122 & 15U);
    t123 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t123 & 15U);
    goto LAB39;

LAB40:    t128 = ((char*)((ng1)));
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t89, 4, t103, 4, t128, 4);
    goto LAB46;

LAB44:    memcpy(t89, t103, 8);
    goto LAB46;

LAB48:    t118 = *((unsigned int *)t103);
    t119 = *((unsigned int *)t115);
    *((unsigned int *)t103) = (t118 | t119);
    t120 = *((unsigned int *)t114);
    t121 = *((unsigned int *)t115);
    *((unsigned int *)t114) = (t120 | t121);
    goto LAB47;

}

static void Cont_1068_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t41[8];
    char t42[8];
    char t45[8];
    char t64[8];
    char t65[8];
    char t89[8];
    char t90[8];
    char t103[8];
    char t104[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
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
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
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
    unsigned int t87;
    unsigned int t88;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;

LAB0:    t1 = (t0 + 3744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1068, ng0);
    t2 = (t0 + 1848U);
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

LAB16:    t129 = (t0 + 5968);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    memset(t133, 0, 8);
    t134 = 15U;
    t135 = t134;
    t136 = (t3 + 4);
    t137 = *((unsigned int *)t3);
    t134 = (t134 & t137);
    t138 = *((unsigned int *)t136);
    t135 = (t135 & t138);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t140 | t134);
    t141 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t141 | t135);
    xsi_driver_vfirst_trans(t129, 24, 27);
    t142 = (t0 + 5600);
    *((int *)t142) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 15U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 15U);
    memset(t16, 0, 8);
    t27 = (t16 + 4);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB18;

LAB17:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 15U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 15U);
    goto LAB9;

LAB10:    t43 = (t0 + 1208U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 1);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 1);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    memset(t42, 0, 8);
    t53 = (t45 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t45);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t53) != 0)
        goto LAB21;

LAB22:    t60 = (t42 + 4);
    t61 = *((unsigned int *)t42);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB23;

LAB24:    t85 = *((unsigned int *)t42);
    t86 = (~(t85));
    t87 = *((unsigned int *)t60);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t42) > 0)
        goto LAB29;

LAB30:    memcpy(t41, t89, 8);

LAB31:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t16, 4, t41, 4);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB18:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB17;

LAB19:    *((unsigned int *)t42) = 1;
    goto LAB22;

LAB21:    t59 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t66 = (t0 + 1528U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 8);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 8);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 15U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 15U);
    memset(t64, 0, 8);
    t75 = (t64 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t65);
    t78 = (~(t77));
    *((unsigned int *)t64) = t78;
    *((unsigned int *)t75) = 0;
    if (*((unsigned int *)t76) != 0)
        goto LAB33;

LAB32:    t83 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t83 & 15U);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & 15U);
    goto LAB24;

LAB25:    t91 = (t0 + 1688U);
    t92 = *((char **)t91);
    memset(t90, 0, 8);
    t91 = (t92 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t92);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t91) != 0)
        goto LAB36;

LAB37:    t99 = (t90 + 4);
    t100 = *((unsigned int *)t90);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB38;

LAB39:    t124 = *((unsigned int *)t90);
    t125 = (~(t124));
    t126 = *((unsigned int *)t99);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t99) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t90) > 0)
        goto LAB44;

LAB45:    memcpy(t89, t128, 8);

LAB46:    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t41, 4, t64, 4, t89, 4);
    goto LAB31;

LAB29:    memcpy(t41, t64, 8);
    goto LAB31;

LAB33:    t79 = *((unsigned int *)t64);
    t80 = *((unsigned int *)t76);
    *((unsigned int *)t64) = (t79 | t80);
    t81 = *((unsigned int *)t75);
    t82 = *((unsigned int *)t76);
    *((unsigned int *)t75) = (t81 | t82);
    goto LAB32;

LAB34:    *((unsigned int *)t90) = 1;
    goto LAB37;

LAB36:    t98 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB37;

LAB38:    t105 = (t0 + 1528U);
    t106 = *((char **)t105);
    memset(t104, 0, 8);
    t105 = (t104 + 4);
    t107 = (t106 + 4);
    t108 = *((unsigned int *)t106);
    t109 = (t108 >> 0);
    *((unsigned int *)t104) = t109;
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 0);
    *((unsigned int *)t105) = t111;
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 15U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 15U);
    memset(t103, 0, 8);
    t114 = (t103 + 4);
    t115 = (t104 + 4);
    t116 = *((unsigned int *)t104);
    t117 = (~(t116));
    *((unsigned int *)t103) = t117;
    *((unsigned int *)t114) = 0;
    if (*((unsigned int *)t115) != 0)
        goto LAB48;

LAB47:    t122 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t122 & 15U);
    t123 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t123 & 15U);
    goto LAB39;

LAB40:    t128 = ((char*)((ng1)));
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t89, 4, t103, 4, t128, 4);
    goto LAB46;

LAB44:    memcpy(t89, t103, 8);
    goto LAB46;

LAB48:    t118 = *((unsigned int *)t103);
    t119 = *((unsigned int *)t115);
    *((unsigned int *)t103) = (t118 | t119);
    t120 = *((unsigned int *)t114);
    t121 = *((unsigned int *)t115);
    *((unsigned int *)t114) = (t120 | t121);
    goto LAB47;

}

static void Cont_1072_4(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t41[8];
    char t42[8];
    char t55[8];
    char t56[8];
    char t80[8];
    char t81[8];
    char t84[8];
    char t103[8];
    char t104[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
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
    char *t43;
    char *t44;
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
    char *t57;
    char *t58;
    char *t59;
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
    char *t82;
    char *t83;
    char *t85;
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
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1072, ng0);
    t2 = (t0 + 1688U);
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

LAB16:    t129 = (t0 + 6032);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    memset(t133, 0, 8);
    t134 = 15U;
    t135 = t134;
    t136 = (t3 + 4);
    t137 = *((unsigned int *)t3);
    t134 = (t134 & t137);
    t138 = *((unsigned int *)t136);
    t135 = (t135 & t138);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t140 | t134);
    t141 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t141 | t135);
    xsi_driver_vfirst_trans(t129, 20, 23);
    t142 = (t0 + 5616);
    *((int *)t142) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1368U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 4);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 4);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 15U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 15U);
    memset(t16, 0, 8);
    t27 = (t16 + 4);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB18;

LAB17:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 15U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 15U);
    goto LAB9;

LAB10:    t43 = (t0 + 1848U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t44 + 4);
    t45 = *((unsigned int *)t43);
    t46 = (~(t45));
    t47 = *((unsigned int *)t44);
    t48 = (t47 & t46);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t43) != 0)
        goto LAB21;

LAB22:    t51 = (t42 + 4);
    t52 = *((unsigned int *)t42);
    t53 = *((unsigned int *)t51);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB23;

LAB24:    t76 = *((unsigned int *)t42);
    t77 = (~(t76));
    t78 = *((unsigned int *)t51);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t51) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t42) > 0)
        goto LAB29;

LAB30:    memcpy(t41, t80, 8);

LAB31:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t16, 4, t41, 4);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB18:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB17;

LAB19:    *((unsigned int *)t42) = 1;
    goto LAB22;

LAB21:    t50 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB22;

LAB23:    t57 = (t0 + 1528U);
    t58 = *((char **)t57);
    memset(t56, 0, 8);
    t57 = (t56 + 4);
    t59 = (t58 + 4);
    t60 = *((unsigned int *)t58);
    t61 = (t60 >> 0);
    *((unsigned int *)t56) = t61;
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 0);
    *((unsigned int *)t57) = t63;
    t64 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t64 & 15U);
    t65 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t65 & 15U);
    memset(t55, 0, 8);
    t66 = (t55 + 4);
    t67 = (t56 + 4);
    t68 = *((unsigned int *)t56);
    t69 = (~(t68));
    *((unsigned int *)t55) = t69;
    *((unsigned int *)t66) = 0;
    if (*((unsigned int *)t67) != 0)
        goto LAB33;

LAB32:    t74 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t74 & 15U);
    t75 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t75 & 15U);
    goto LAB24;

LAB25:    t82 = (t0 + 1208U);
    t83 = *((char **)t82);
    memset(t84, 0, 8);
    t82 = (t84 + 4);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 1);
    t88 = (t87 & 1);
    *((unsigned int *)t84) = t88;
    t89 = *((unsigned int *)t85);
    t90 = (t89 >> 1);
    t91 = (t90 & 1);
    *((unsigned int *)t82) = t91;
    memset(t81, 0, 8);
    t92 = (t84 + 4);
    t93 = *((unsigned int *)t92);
    t94 = (~(t93));
    t95 = *((unsigned int *)t84);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t92) != 0)
        goto LAB36;

LAB37:    t99 = (t81 + 4);
    t100 = *((unsigned int *)t81);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB38;

LAB39:    t124 = *((unsigned int *)t81);
    t125 = (~(t124));
    t126 = *((unsigned int *)t99);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t99) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t81) > 0)
        goto LAB44;

LAB45:    memcpy(t80, t128, 8);

LAB46:    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t41, 4, t55, 4, t80, 4);
    goto LAB31;

LAB29:    memcpy(t41, t55, 8);
    goto LAB31;

LAB33:    t70 = *((unsigned int *)t55);
    t71 = *((unsigned int *)t67);
    *((unsigned int *)t55) = (t70 | t71);
    t72 = *((unsigned int *)t66);
    t73 = *((unsigned int *)t67);
    *((unsigned int *)t66) = (t72 | t73);
    goto LAB32;

LAB34:    *((unsigned int *)t81) = 1;
    goto LAB37;

LAB36:    t98 = (t81 + 4);
    *((unsigned int *)t81) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB37;

LAB38:    t105 = (t0 + 1528U);
    t106 = *((char **)t105);
    memset(t104, 0, 8);
    t105 = (t104 + 4);
    t107 = (t106 + 4);
    t108 = *((unsigned int *)t106);
    t109 = (t108 >> 4);
    *((unsigned int *)t104) = t109;
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 4);
    *((unsigned int *)t105) = t111;
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 15U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 15U);
    memset(t103, 0, 8);
    t114 = (t103 + 4);
    t115 = (t104 + 4);
    t116 = *((unsigned int *)t104);
    t117 = (~(t116));
    *((unsigned int *)t103) = t117;
    *((unsigned int *)t114) = 0;
    if (*((unsigned int *)t115) != 0)
        goto LAB48;

LAB47:    t122 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t122 & 15U);
    t123 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t123 & 15U);
    goto LAB39;

LAB40:    t128 = ((char*)((ng1)));
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t80, 4, t103, 4, t128, 4);
    goto LAB46;

LAB44:    memcpy(t80, t103, 8);
    goto LAB46;

LAB48:    t118 = *((unsigned int *)t103);
    t119 = *((unsigned int *)t115);
    *((unsigned int *)t103) = (t118 | t119);
    t120 = *((unsigned int *)t114);
    t121 = *((unsigned int *)t115);
    *((unsigned int *)t114) = (t120 | t121);
    goto LAB47;

}

static void Cont_1076_5(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t26[8];
    char t50[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
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
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1076, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t21);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t50, 8);

LAB16:    t71 = (t0 + 6096);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    t74 = (t73 + 56U);
    t75 = *((char **)t74);
    memset(t75, 0, 8);
    t76 = 15U;
    t77 = t76;
    t78 = (t3 + 4);
    t79 = *((unsigned int *)t3);
    t76 = (t76 & t79);
    t80 = *((unsigned int *)t78);
    t77 = (t77 & t80);
    t81 = (t75 + 4);
    t82 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t82 | t76);
    t83 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t83 | t77);
    xsi_driver_vfirst_trans(t71, 16, 19);
    t84 = (t0 + 5632);
    *((int *)t84) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t27 = (t0 + 1528U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 0);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 0);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 15U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 15U);
    memset(t25, 0, 8);
    t36 = (t25 + 4);
    t37 = (t26 + 4);
    t38 = *((unsigned int *)t26);
    t39 = (~(t38));
    *((unsigned int *)t25) = t39;
    *((unsigned int *)t36) = 0;
    if (*((unsigned int *)t37) != 0)
        goto LAB18;

LAB17:    t44 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t44 & 15U);
    t45 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t45 & 15U);
    goto LAB9;

LAB10:    t52 = (t0 + 1368U);
    t53 = *((char **)t52);
    memset(t51, 0, 8);
    t52 = (t51 + 4);
    t54 = (t53 + 4);
    t55 = *((unsigned int *)t53);
    t56 = (t55 >> 0);
    *((unsigned int *)t51) = t56;
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    *((unsigned int *)t52) = t58;
    t59 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t59 & 15U);
    t60 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t60 & 15U);
    memset(t50, 0, 8);
    t61 = (t50 + 4);
    t62 = (t51 + 4);
    t63 = *((unsigned int *)t51);
    t64 = (~(t63));
    *((unsigned int *)t50) = t64;
    *((unsigned int *)t61) = 0;
    if (*((unsigned int *)t62) != 0)
        goto LAB20;

LAB19:    t69 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t69 & 15U);
    t70 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t70 & 15U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t25, 4, t50, 4);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

LAB18:    t40 = *((unsigned int *)t25);
    t41 = *((unsigned int *)t37);
    *((unsigned int *)t25) = (t40 | t41);
    t42 = *((unsigned int *)t36);
    t43 = *((unsigned int *)t37);
    *((unsigned int *)t36) = (t42 | t43);
    goto LAB17;

LAB20:    t65 = *((unsigned int *)t50);
    t66 = *((unsigned int *)t62);
    *((unsigned int *)t50) = (t65 | t66);
    t67 = *((unsigned int *)t61);
    t68 = *((unsigned int *)t62);
    *((unsigned int *)t61) = (t67 | t68);
    goto LAB19;

}

static void Cont_1078_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t25[8];
    char t26[8];
    char t50[8];
    char t51[8];
    char t64[8];
    char t65[8];
    char t89[8];
    char t90[8];
    char t103[8];
    char t104[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
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
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t38;
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
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
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
    unsigned int t87;
    unsigned int t88;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;

LAB0:    t1 = (t0 + 4488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1078, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t46 = *((unsigned int *)t4);
    t47 = (~(t46));
    t48 = *((unsigned int *)t21);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t50, 8);

LAB16:    t129 = (t0 + 6160);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    memset(t133, 0, 8);
    t134 = 15U;
    t135 = t134;
    t136 = (t3 + 4);
    t137 = *((unsigned int *)t3);
    t134 = (t134 & t137);
    t138 = *((unsigned int *)t136);
    t135 = (t135 & t138);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t140 | t134);
    t141 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t141 | t135);
    xsi_driver_vfirst_trans(t129, 12, 15);
    t142 = (t0 + 5648);
    *((int *)t142) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t27 = (t0 + 1368U);
    t28 = *((char **)t27);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (t30 >> 12);
    *((unsigned int *)t26) = t31;
    t32 = *((unsigned int *)t29);
    t33 = (t32 >> 12);
    *((unsigned int *)t27) = t33;
    t34 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t34 & 15U);
    t35 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t35 & 15U);
    memset(t25, 0, 8);
    t36 = (t25 + 4);
    t37 = (t26 + 4);
    t38 = *((unsigned int *)t26);
    t39 = (~(t38));
    *((unsigned int *)t25) = t39;
    *((unsigned int *)t36) = 0;
    if (*((unsigned int *)t37) != 0)
        goto LAB18;

LAB17:    t44 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t44 & 15U);
    t45 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t45 & 15U);
    goto LAB9;

LAB10:    t52 = (t0 + 1848U);
    t53 = *((char **)t52);
    memset(t51, 0, 8);
    t52 = (t53 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t53);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t52) != 0)
        goto LAB21;

LAB22:    t60 = (t51 + 4);
    t61 = *((unsigned int *)t51);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB23;

LAB24:    t85 = *((unsigned int *)t51);
    t86 = (~(t85));
    t87 = *((unsigned int *)t60);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t51) > 0)
        goto LAB29;

LAB30:    memcpy(t50, t89, 8);

LAB31:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t25, 4, t50, 4);
    goto LAB16;

LAB14:    memcpy(t3, t25, 8);
    goto LAB16;

LAB18:    t40 = *((unsigned int *)t25);
    t41 = *((unsigned int *)t37);
    *((unsigned int *)t25) = (t40 | t41);
    t42 = *((unsigned int *)t36);
    t43 = *((unsigned int *)t37);
    *((unsigned int *)t36) = (t42 | t43);
    goto LAB17;

LAB19:    *((unsigned int *)t51) = 1;
    goto LAB22;

LAB21:    t59 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t66 = (t0 + 1528U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 0);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 0);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 15U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 15U);
    memset(t64, 0, 8);
    t75 = (t64 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t65);
    t78 = (~(t77));
    *((unsigned int *)t64) = t78;
    *((unsigned int *)t75) = 0;
    if (*((unsigned int *)t76) != 0)
        goto LAB33;

LAB32:    t83 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t83 & 15U);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & 15U);
    goto LAB24;

LAB25:    t91 = (t0 + 1688U);
    t92 = *((char **)t91);
    memset(t90, 0, 8);
    t91 = (t92 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t92);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t91) != 0)
        goto LAB36;

LAB37:    t99 = (t90 + 4);
    t100 = *((unsigned int *)t90);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB38;

LAB39:    t124 = *((unsigned int *)t90);
    t125 = (~(t124));
    t126 = *((unsigned int *)t99);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t99) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t90) > 0)
        goto LAB44;

LAB45:    memcpy(t89, t128, 8);

LAB46:    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t50, 4, t64, 4, t89, 4);
    goto LAB31;

LAB29:    memcpy(t50, t64, 8);
    goto LAB31;

LAB33:    t79 = *((unsigned int *)t64);
    t80 = *((unsigned int *)t76);
    *((unsigned int *)t64) = (t79 | t80);
    t81 = *((unsigned int *)t75);
    t82 = *((unsigned int *)t76);
    *((unsigned int *)t75) = (t81 | t82);
    goto LAB32;

LAB34:    *((unsigned int *)t90) = 1;
    goto LAB37;

LAB36:    t98 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB37;

LAB38:    t105 = (t0 + 1528U);
    t106 = *((char **)t105);
    memset(t104, 0, 8);
    t105 = (t104 + 4);
    t107 = (t106 + 4);
    t108 = *((unsigned int *)t106);
    t109 = (t108 >> 4);
    *((unsigned int *)t104) = t109;
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 4);
    *((unsigned int *)t105) = t111;
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 15U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 15U);
    memset(t103, 0, 8);
    t114 = (t103 + 4);
    t115 = (t104 + 4);
    t116 = *((unsigned int *)t104);
    t117 = (~(t116));
    *((unsigned int *)t103) = t117;
    *((unsigned int *)t114) = 0;
    if (*((unsigned int *)t115) != 0)
        goto LAB48;

LAB47:    t122 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t122 & 15U);
    t123 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t123 & 15U);
    goto LAB39;

LAB40:    t128 = ((char*)((ng1)));
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t89, 4, t103, 4, t128, 4);
    goto LAB46;

LAB44:    memcpy(t89, t103, 8);
    goto LAB46;

LAB48:    t118 = *((unsigned int *)t103);
    t119 = *((unsigned int *)t115);
    *((unsigned int *)t103) = (t118 | t119);
    t120 = *((unsigned int *)t114);
    t121 = *((unsigned int *)t115);
    *((unsigned int *)t114) = (t120 | t121);
    goto LAB47;

}

static void Cont_1082_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t41[8];
    char t42[8];
    char t45[8];
    char t64[8];
    char t65[8];
    char t89[8];
    char t90[8];
    char t103[8];
    char t104[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
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
    char *t43;
    char *t44;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t66;
    char *t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
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
    unsigned int t87;
    unsigned int t88;
    char *t91;
    char *t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t105;
    char *t106;
    char *t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;

LAB0:    t1 = (t0 + 4736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1082, ng0);
    t2 = (t0 + 1688U);
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

LAB16:    t129 = (t0 + 6224);
    t130 = (t129 + 56U);
    t131 = *((char **)t130);
    t132 = (t131 + 56U);
    t133 = *((char **)t132);
    memset(t133, 0, 8);
    t134 = 15U;
    t135 = t134;
    t136 = (t3 + 4);
    t137 = *((unsigned int *)t3);
    t134 = (t134 & t137);
    t138 = *((unsigned int *)t136);
    t135 = (t135 & t138);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t133);
    *((unsigned int *)t133) = (t140 | t134);
    t141 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t141 | t135);
    xsi_driver_vfirst_trans(t129, 8, 11);
    t142 = (t0 + 5664);
    *((int *)t142) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 15U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 15U);
    memset(t16, 0, 8);
    t27 = (t16 + 4);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB18;

LAB17:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 15U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 15U);
    goto LAB9;

LAB10:    t43 = (t0 + 1208U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t43 = (t45 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 1);
    t49 = (t48 & 1);
    *((unsigned int *)t45) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 >> 1);
    t52 = (t51 & 1);
    *((unsigned int *)t43) = t52;
    memset(t42, 0, 8);
    t53 = (t45 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t45);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t53) != 0)
        goto LAB21;

LAB22:    t60 = (t42 + 4);
    t61 = *((unsigned int *)t42);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB23;

LAB24:    t85 = *((unsigned int *)t42);
    t86 = (~(t85));
    t87 = *((unsigned int *)t60);
    t88 = (t86 || t87);
    if (t88 > 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t42) > 0)
        goto LAB29;

LAB30:    memcpy(t41, t89, 8);

LAB31:    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t16, 4, t41, 4);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB18:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB17;

LAB19:    *((unsigned int *)t42) = 1;
    goto LAB22;

LAB21:    t59 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB22;

LAB23:    t66 = (t0 + 1368U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t66 = (t65 + 4);
    t68 = (t67 + 4);
    t69 = *((unsigned int *)t67);
    t70 = (t69 >> 8);
    *((unsigned int *)t65) = t70;
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 8);
    *((unsigned int *)t66) = t72;
    t73 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t73 & 15U);
    t74 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t74 & 15U);
    memset(t64, 0, 8);
    t75 = (t64 + 4);
    t76 = (t65 + 4);
    t77 = *((unsigned int *)t65);
    t78 = (~(t77));
    *((unsigned int *)t64) = t78;
    *((unsigned int *)t75) = 0;
    if (*((unsigned int *)t76) != 0)
        goto LAB33;

LAB32:    t83 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t83 & 15U);
    t84 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t84 & 15U);
    goto LAB24;

LAB25:    t91 = (t0 + 1848U);
    t92 = *((char **)t91);
    memset(t90, 0, 8);
    t91 = (t92 + 4);
    t93 = *((unsigned int *)t91);
    t94 = (~(t93));
    t95 = *((unsigned int *)t92);
    t96 = (t95 & t94);
    t97 = (t96 & 1U);
    if (t97 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t91) != 0)
        goto LAB36;

LAB37:    t99 = (t90 + 4);
    t100 = *((unsigned int *)t90);
    t101 = *((unsigned int *)t99);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB38;

LAB39:    t124 = *((unsigned int *)t90);
    t125 = (~(t124));
    t126 = *((unsigned int *)t99);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t99) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t90) > 0)
        goto LAB44;

LAB45:    memcpy(t89, t128, 8);

LAB46:    goto LAB26;

LAB27:    xsi_vlog_unsigned_bit_combine(t41, 4, t64, 4, t89, 4);
    goto LAB31;

LAB29:    memcpy(t41, t64, 8);
    goto LAB31;

LAB33:    t79 = *((unsigned int *)t64);
    t80 = *((unsigned int *)t76);
    *((unsigned int *)t64) = (t79 | t80);
    t81 = *((unsigned int *)t75);
    t82 = *((unsigned int *)t76);
    *((unsigned int *)t75) = (t81 | t82);
    goto LAB32;

LAB34:    *((unsigned int *)t90) = 1;
    goto LAB37;

LAB36:    t98 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB37;

LAB38:    t105 = (t0 + 1368U);
    t106 = *((char **)t105);
    memset(t104, 0, 8);
    t105 = (t104 + 4);
    t107 = (t106 + 4);
    t108 = *((unsigned int *)t106);
    t109 = (t108 >> 0);
    *((unsigned int *)t104) = t109;
    t110 = *((unsigned int *)t107);
    t111 = (t110 >> 0);
    *((unsigned int *)t105) = t111;
    t112 = *((unsigned int *)t104);
    *((unsigned int *)t104) = (t112 & 15U);
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 15U);
    memset(t103, 0, 8);
    t114 = (t103 + 4);
    t115 = (t104 + 4);
    t116 = *((unsigned int *)t104);
    t117 = (~(t116));
    *((unsigned int *)t103) = t117;
    *((unsigned int *)t114) = 0;
    if (*((unsigned int *)t115) != 0)
        goto LAB48;

LAB47:    t122 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t122 & 15U);
    t123 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t123 & 15U);
    goto LAB39;

LAB40:    t128 = ((char*)((ng1)));
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t89, 4, t103, 4, t128, 4);
    goto LAB46;

LAB44:    memcpy(t89, t103, 8);
    goto LAB46;

LAB48:    t118 = *((unsigned int *)t103);
    t119 = *((unsigned int *)t115);
    *((unsigned int *)t103) = (t118 | t119);
    t120 = *((unsigned int *)t114);
    t121 = *((unsigned int *)t115);
    *((unsigned int *)t114) = (t120 | t121);
    goto LAB47;

}

static void Cont_1086_8(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t41[8];
    char t42[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
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
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;

LAB0:    t1 = (t0 + 4984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1086, ng0);
    t2 = (t0 + 1848U);
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

LAB16:    t62 = (t0 + 6288);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    t65 = (t64 + 56U);
    t66 = *((char **)t65);
    memset(t66, 0, 8);
    t67 = 15U;
    t68 = t67;
    t69 = (t3 + 4);
    t70 = *((unsigned int *)t3);
    t67 = (t67 & t70);
    t71 = *((unsigned int *)t69);
    t68 = (t68 & t71);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t73 | t67);
    t74 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t74 | t68);
    xsi_driver_vfirst_trans(t62, 4, 7);
    t75 = (t0 + 5680);
    *((int *)t75) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 1528U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t17 + 4);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t19);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t18) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 15U);
    t26 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t26 & 15U);
    memset(t16, 0, 8);
    t27 = (t16 + 4);
    t28 = (t17 + 4);
    t29 = *((unsigned int *)t17);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB18;

LAB17:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 15U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 15U);
    goto LAB9;

LAB10:    t43 = (t0 + 1368U);
    t44 = *((char **)t43);
    memset(t42, 0, 8);
    t43 = (t42 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 4);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 4);
    *((unsigned int *)t43) = t49;
    t50 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t50 & 15U);
    t51 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t51 & 15U);
    memset(t41, 0, 8);
    t52 = (t41 + 4);
    t53 = (t42 + 4);
    t54 = *((unsigned int *)t42);
    t55 = (~(t54));
    *((unsigned int *)t41) = t55;
    *((unsigned int *)t52) = 0;
    if (*((unsigned int *)t53) != 0)
        goto LAB20;

LAB19:    t60 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t60 & 15U);
    t61 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t61 & 15U);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 4, t16, 4, t41, 4);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

LAB18:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB17;

LAB20:    t56 = *((unsigned int *)t41);
    t57 = *((unsigned int *)t53);
    *((unsigned int *)t41) = (t56 | t57);
    t58 = *((unsigned int *)t52);
    t59 = *((unsigned int *)t53);
    *((unsigned int *)t52) = (t58 | t59);
    goto LAB19;

}

static void Cont_1087_9(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
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
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 5232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(1087, ng0);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t11 & 15U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 15U);
    memset(t3, 0, 8);
    t13 = (t3 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB5;

LAB4:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 15U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 15U);
    t23 = (t0 + 6352);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 15U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 3);
    t36 = (t0 + 5696);
    *((int *)t36) = 1;

LAB1:    return;
LAB5:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB4;

}


extern void secureip_m_06618851877970057143_2046256128_init()
{
	static char *pe[] = {(void *)Cont_1060_0,(void *)Cont_1061_1,(void *)Cont_1064_2,(void *)Cont_1068_3,(void *)Cont_1072_4,(void *)Cont_1076_5,(void *)Cont_1078_6,(void *)Cont_1082_7,(void *)Cont_1086_8,(void *)Cont_1087_9};
	xsi_register_didat("secureip_m_06618851877970057143_2046256128", "isim/tb_VmodCAM_Ref_isim_beh.exe.sim/secureip/m_06618851877970057143_2046256128.didat");
	xsi_register_executes(pe);
}
