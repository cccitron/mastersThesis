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
static const char *ng0 = "/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl/commFPGA/comm_fpga_fx2_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2715528999_1878664202_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 4584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 4392);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(93, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 4392);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(94, ng0);

LAB12:
LAB13:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 5912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t7 = (4 * 1000LL);
    t2 = (t0 + 4392);
    xsi_process_wait(t2, t7);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB14:;
LAB15:    goto LAB2;

LAB16:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t7 = (6 * 1000LL);
    t2 = (t0 + 4392);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t7 = (4 * 1000LL);
    t2 = (t0 + 4392);
    xsi_process_wait(t2, t7);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 5848);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(102, ng0);
    t7 = (6 * 1000LL);
    t2 = (t0 + 4392);
    xsi_process_wait(t2, t7);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    goto LAB12;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

}

static void work_a_2715528999_1878664202_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int64 t11;

LAB0:    t1 = (t0 + 4832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(109, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)4, 8U);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 6040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 6104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);

LAB6:    t2 = (t0 + 5400);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 5400);
    *((int *)t3) = 0;
    xsi_set_current_line(113, ng0);

LAB10:    t2 = (t0 + 5416);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t3 = (t0 + 5416);
    *((int *)t3) = 0;
    xsi_set_current_line(114, ng0);

LAB14:    t2 = (t0 + 5432);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)2);
    if (t10 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t3 = (t0 + 5432);
    *((int *)t3) = 0;
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 10795);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 6040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);

LAB18:    t2 = (t0 + 5448);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t4 = (t0 + 5448);
    *((int *)t4) = 0;
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 10803);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(119, ng0);

LAB22:    t2 = (t0 + 5464);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t4 = (t0 + 5464);
    *((int *)t4) = 0;
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 10811);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(120, ng0);
    t11 = (1 * 1LL);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, t11);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 10819);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(121, ng0);

LAB30:    t2 = (t0 + 5480);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t4 = (t0 + 5480);
    *((int *)t4) = 0;
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 10827);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(122, ng0);
    t11 = (1 * 1LL);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, t11);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 10835);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(123, ng0);

LAB38:    t2 = (t0 + 5496);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    t4 = (t0 + 5496);
    *((int *)t4) = 0;
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 10843);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(125, ng0);

LAB42:    t2 = (t0 + 5512);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    t4 = (t0 + 5512);
    *((int *)t4) = 0;
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 10851);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(127, ng0);

LAB46:    t2 = (t0 + 5528);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB40;
    else
        goto LAB42;

LAB43:    goto LAB41;

LAB44:    t4 = (t0 + 5528);
    *((int *)t4) = 0;
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 10859);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(129, ng0);

LAB50:    t2 = (t0 + 5544);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB44;
    else
        goto LAB46;

LAB47:    goto LAB45;

LAB48:    t4 = (t0 + 5544);
    *((int *)t4) = 0;
    xsi_set_current_line(130, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)4, 8U);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(131, ng0);

LAB54:    t2 = (t0 + 5560);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB48;
    else
        goto LAB50;

LAB51:    goto LAB49;

LAB52:    t4 = (t0 + 5560);
    *((int *)t4) = 0;
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 10867);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(133, ng0);

LAB58:    t2 = (t0 + 5576);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB52;
    else
        goto LAB54;

LAB55:    goto LAB53;

LAB56:    t4 = (t0 + 5576);
    *((int *)t4) = 0;
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 10875);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(135, ng0);

LAB62:    t2 = (t0 + 5592);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB56;
    else
        goto LAB58;

LAB59:    goto LAB57;

LAB60:    t4 = (t0 + 5592);
    *((int *)t4) = 0;
    xsi_set_current_line(136, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)4, 8U);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(137, ng0);
    t2 = (t0 + 6040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(139, ng0);

LAB66:    t2 = (t0 + 5608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB61:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB60;
    else
        goto LAB62;

LAB63:    goto LAB61;

LAB64:    t4 = (t0 + 5608);
    *((int *)t4) = 0;
    xsi_set_current_line(140, ng0);

LAB70:    t2 = (t0 + 5624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB71;
    goto LAB1;

LAB65:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB64;
    else
        goto LAB66;

LAB67:    goto LAB65;

LAB68:    t4 = (t0 + 5624);
    *((int *)t4) = 0;
    xsi_set_current_line(141, ng0);

LAB74:    t2 = (t0 + 5640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB69:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB68;
    else
        goto LAB70;

LAB71:    goto LAB69;

LAB72:    t4 = (t0 + 5640);
    *((int *)t4) = 0;
    xsi_set_current_line(142, ng0);

LAB78:    t2 = (t0 + 5656);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB72;
    else
        goto LAB74;

LAB75:    goto LAB73;

LAB76:    t4 = (t0 + 5656);
    *((int *)t4) = 0;
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 10883);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 6040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(145, ng0);

LAB82:    t2 = (t0 + 5672);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB77:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB76;
    else
        goto LAB78;

LAB79:    goto LAB77;

LAB80:    t4 = (t0 + 5672);
    *((int *)t4) = 0;
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 10891);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(147, ng0);

LAB86:    t2 = (t0 + 5688);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB80;
    else
        goto LAB82;

LAB83:    goto LAB81;

LAB84:    t4 = (t0 + 5688);
    *((int *)t4) = 0;
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 10899);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(148, ng0);
    t11 = (1 * 1LL);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, t11);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB84;
    else
        goto LAB86;

LAB87:    goto LAB85;

LAB88:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 10907);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(149, ng0);

LAB94:    t2 = (t0 + 5704);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t4 = (t0 + 5704);
    *((int *)t4) = 0;
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 10915);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(150, ng0);
    t11 = (1 * 1LL);
    t2 = (t0 + 4640);
    xsi_process_wait(t2, t11);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB93:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB92;
    else
        goto LAB94;

LAB95:    goto LAB93;

LAB96:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 10923);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(151, ng0);

LAB102:    t2 = (t0 + 5720);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

LAB100:    t4 = (t0 + 5720);
    *((int *)t4) = 0;
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 10931);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(153, ng0);

LAB106:    t2 = (t0 + 5736);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB101:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB100;
    else
        goto LAB102;

LAB103:    goto LAB101;

LAB104:    t4 = (t0 + 5736);
    *((int *)t4) = 0;
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 6040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(155, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)4, 8U);
    t4 = (t0 + 5976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(156, ng0);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB105:    t3 = (t0 + 992U);
    t9 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB104;
    else
        goto LAB106;

LAB107:    goto LAB105;

LAB108:    goto LAB2;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

}

static void work_a_2715528999_1878664202_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int64 t11;

LAB0:    t1 = (t0 + 5080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(163, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 6232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 6296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(170, ng0);

LAB6:    t2 = (t0 + 5752);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t3 = (t0 + 5752);
    *((int *)t3) = 0;
    xsi_set_current_line(171, ng0);
    t11 = (40 * 1000LL);
    t2 = (t0 + 4888);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 6296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(173, ng0);
    t11 = (20 * 1000LL);
    t2 = (t0 + 4888);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 6296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(178, ng0);

LAB18:    t2 = (t0 + 5768);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t3 = (t0 + 5768);
    *((int *)t3) = 0;
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 10939);
    t4 = (t0 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(180, ng0);
    t2 = (t0 + 6232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(181, ng0);
    t11 = (20 * 1000LL);
    t2 = (t0 + 4888);
    xsi_process_wait(t2, t11);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    t9 = *((unsigned char *)t4);
    t10 = (t9 == (unsigned char)3);
    if (t10 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 10947);
    t4 = (t0 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(183, ng0);
    t11 = (20 * 1000LL);
    t2 = (t0 + 4888);
    xsi_process_wait(t2, t11);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(184, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)4, 8U);
    t4 = (t0 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(185, ng0);
    t2 = (t0 + 6232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(186, ng0);
    t11 = (20 * 1000LL);
    t2 = (t0 + 4888);
    xsi_process_wait(t2, t11);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(187, ng0);
    t2 = (t0 + 10955);
    t4 = (t0 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 6232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(189, ng0);
    t11 = (20 * 1000LL);
    t2 = (t0 + 4888);
    xsi_process_wait(t2, t11);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 10963);
    t4 = (t0 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(191, ng0);
    t11 = (20 * 1000LL);
    t2 = (t0 + 4888);
    xsi_process_wait(t2, t11);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(192, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 6168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 6232);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(194, ng0);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    goto LAB2;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

}


extern void work_a_2715528999_1878664202_init()
{
	static char *pe[] = {(void *)work_a_2715528999_1878664202_p_0,(void *)work_a_2715528999_1878664202_p_1,(void *)work_a_2715528999_1878664202_p_2};
	xsi_register_didat("work_a_2715528999_1878664202", "isim/comm_fpga_fx2_tb_isim_beh.exe.sim/work/a_2715528999_1878664202.didat");
	xsi_register_executes(pe);
}
