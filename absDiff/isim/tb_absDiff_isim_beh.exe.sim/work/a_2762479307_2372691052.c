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
static const char *ng0 = "/home/cccitron/mastersThesis/absDiff/tb_absDiff.vhd";
extern char *STD_TEXTIO;
extern char *IEEE_P_3564397177;

void ieee_p_3564397177_sub_2250825304603680424_91900896(char *, char *, char *, char *, char *, unsigned char , int );


static void work_a_2762479307_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2664);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2664);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2762479307_2372691052_p_1(char *t0)
{
    char t11[16];
    char t14[8];
    char t15[8];
    char t16[8];
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

LAB0:    t1 = (t0 + 3104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1808U);
    t4 = *((char **)t2);
    t3 = *((int64 *)t4);
    t5 = (t3 * 10);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t5);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5904);
    t6 = (t0 + 3600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5912);
    t6 = (t0 + 3664);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(101, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t6 = (t0 + 5920);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (4 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t2, t4, t6, t11, (unsigned char)0, 0);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    memcpy(t14, t7, 8U);
    t6 = (t0 + 5768U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t4, t14, t6, (unsigned char)0, 0);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2912);
    t4 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 2208U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t6);
    xsi_set_current_line(106, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5924);
    t6 = (t0 + 3600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 5932);
    t6 = (t0 + 3664);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(111, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t6 = (t0 + 5940);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (4 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t2, t4, t6, t11, (unsigned char)0, 0);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    memcpy(t15, t7, 8U);
    t6 = (t0 + 5768U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t4, t15, t6, (unsigned char)0, 0);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2912);
    t4 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 2208U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t6);
    xsi_set_current_line(116, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5944);
    t6 = (t0 + 3600);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5952);
    t6 = (t0 + 3664);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(121, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t3);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t3 = xsi_get_sim_current_time();
    std_textio_write8(STD_TEXTIO, t2, t4, t3, (unsigned char)0, 0, 1000LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t6 = (t0 + 5960);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (4 - 1);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t2, t4, t6, t11, (unsigned char)0, 0);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2912);
    t4 = (t0 + 2208U);
    t6 = (t0 + 1512U);
    t7 = *((char **)t6);
    memcpy(t16, t7, 8U);
    t6 = (t0 + 5768U);
    ieee_p_3564397177_sub_2250825304603680424_91900896(IEEE_P_3564397177, t2, t4, t16, t6, (unsigned char)0, 0);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2912);
    t4 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 2208U);
    std_textio_writeline(STD_TEXTIO, t2, t4, t6);
    xsi_set_current_line(126, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 2912);
    xsi_process_wait(t2, t3);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(128, ng0);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    goto LAB2;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

}


extern void work_a_2762479307_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2762479307_2372691052_p_0,(void *)work_a_2762479307_2372691052_p_1};
	xsi_register_didat("work_a_2762479307_2372691052", "isim/tb_absDiff_isim_beh.exe.sim/work/a_2762479307_2372691052.didat");
	xsi_register_executes(pe);
}
