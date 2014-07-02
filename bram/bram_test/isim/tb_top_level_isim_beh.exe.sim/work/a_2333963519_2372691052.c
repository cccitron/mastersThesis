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
static const char *ng0 = "/home/cccitron/mastersThesis/bram/bram_test/tb_top_level.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_2250825304603680424_91900896(char *, char *, char *, char *, char *, unsigned char , int );


static void work_a_2333963519_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 4368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3464);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3464);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2333963519_2372691052_p_1(char *t0)
{
    char t11[16];
    char t14[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char t18[8];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int64 t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t12;
    unsigned int t13;

LAB0:    t1 = (t0 + 3904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(108, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 7256);
    t6 = (t0 + 4432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(114, ng0);
    t3 = (2000 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 7264);
    t6 = (t0 + 4432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(117, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 7272);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 19;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (19 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t2, t4, t6, t11, (unsigned char)0, 0);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 8U);
    t6 = (t0 + 7040U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t4, t14, t6, (unsigned char)0, 0);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3712);
    t4 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 3008U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t6);
    xsi_set_current_line(123, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 7291);
    t6 = (t0 + 4432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(124, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 7299);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 19;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (19 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t2, t4, t6, t11, (unsigned char)0, 0);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 8U);
    t6 = (t0 + 7040U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t4, t15, t6, (unsigned char)0, 0);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3712);
    t4 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 3008U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t6);
    xsi_set_current_line(128, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 7318);
    t6 = (t0 + 4432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(129, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 7326);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 19;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (19 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t2, t4, t6, t11, (unsigned char)0, 0);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 8U);
    t6 = (t0 + 7040U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t4, t16, t6, (unsigned char)0, 0);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3712);
    t4 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 3008U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t6);
    xsi_set_current_line(133, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 7345);
    t6 = (t0 + 4432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(134, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 7353);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 19;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (19 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t2, t4, t6, t11, (unsigned char)0, 0);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    memcpy(t17, t7, 8U);
    t6 = (t0 + 7040U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t4, t17, t6, (unsigned char)0, 0);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3712);
    t4 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 3008U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t6);
    xsi_set_current_line(138, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7372);
    t6 = (t0 + 4432);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(139, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 3712);
    xsi_process_wait(t2, t3);

LAB50:    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 7380);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 19;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (19 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t2, t4, t6, t11, (unsigned char)0, 0);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3712);
    t4 = (t0 + 3008U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    memcpy(t18, t7, 8U);
    t6 = (t0 + 7040U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t4, t18, t6, (unsigned char)0, 0);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 3712);
    t4 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 3008U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t6);
    xsi_set_current_line(241, ng0);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB49:    goto LAB48;

LAB51:    goto LAB49;

LAB52:    goto LAB2;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

}


extern void work_a_2333963519_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2333963519_2372691052_p_0,(void *)work_a_2333963519_2372691052_p_1};
	xsi_register_didat("work_a_2333963519_2372691052", "isim/tb_top_level_isim_beh.exe.sim/work/a_2333963519_2372691052.didat");
	xsi_register_executes(pe);
}
