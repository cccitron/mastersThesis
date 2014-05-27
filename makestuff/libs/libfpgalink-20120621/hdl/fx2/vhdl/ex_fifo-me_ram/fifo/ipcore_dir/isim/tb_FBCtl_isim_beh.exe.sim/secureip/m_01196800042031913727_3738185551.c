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
static const char *ng0 = "/build/xfndry/isimco/hipsBuilds/P_hips_v23.0/rst/hips/mcb/memc_mui_mc.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {0U, 0U};
static const char *ng5 = "ERROR- RD_WRB Invalid";
static int ng6[] = {16, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {8, 0};
static unsigned int ng9[] = {2U, 0U};
static int ng10[] = {4, 0};
static const char *ng11 = "ERROR- PIN_WIDTH Invalid";



static void Initial_57_0(char *t0)
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

LAB0:    xsi_set_current_line(57, ng0);

LAB2:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = ((char*)((ng1)));
    memset(t3, 0, 8);
    xsi_vlog_signed_equal(t3, 32, t2, 32, t1, 32);
    t4 = (t3 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB3;

LAB4:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = ((char*)((ng3)));
    memset(t3, 0, 8);
    xsi_vlog_signed_equal(t3, 32, t2, 32, t1, 32);
    t4 = (t3 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(64, ng0);

LAB11:    xsi_set_current_line(65, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    xsi_set_current_line(66, ng0);
    xsi_vlog_finish(1);

LAB9:
LAB5:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = ((char*)((ng6)));
    memset(t3, 0, 8);
    xsi_vlog_signed_equal(t3, 32, t2, 32, t1, 32);
    t4 = (t3 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = ((char*)((ng8)));
    memset(t3, 0, 8);
    xsi_vlog_signed_equal(t3, 32, t2, 32, t1, 32);
    t4 = (t3 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 608);
    t2 = *((char **)t1);
    t1 = ((char*)((ng10)));
    memset(t3, 0, 8);
    xsi_vlog_signed_equal(t3, 32, t2, 32, t1, 32);
    t4 = (t3 + 4);
    t5 = *((unsigned int *)t4);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(77, ng0);

LAB24:    xsi_set_current_line(78, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(79, ng0);
    xsi_vlog_finish(1);

LAB22:
LAB18:
LAB14:    xsi_set_current_line(81, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2200);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2360);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2520);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 2840);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
LAB3:    xsi_set_current_line(58, ng0);

LAB6:    xsi_set_current_line(59, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 2040);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB5;

LAB7:    xsi_set_current_line(61, ng0);

LAB10:    xsi_set_current_line(62, ng0);
    t10 = ((char*)((ng4)));
    t11 = (t0 + 2040);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB9;

LAB12:    xsi_set_current_line(68, ng0);

LAB15:    xsi_set_current_line(69, ng0);
    t10 = ((char*)((ng7)));
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 2);
    goto LAB14;

LAB16:    xsi_set_current_line(71, ng0);

LAB19:    xsi_set_current_line(72, ng0);
    t10 = ((char*)((ng9)));
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 2);
    goto LAB18;

LAB20:    xsi_set_current_line(74, ng0);

LAB23:    xsi_set_current_line(75, ng0);
    t10 = ((char*)((ng2)));
    t11 = (t0 + 2680);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 2);
    goto LAB22;

}


extern void secureip_m_01196800042031913727_3738185551_init()
{
	static char *pe[] = {(void *)Initial_57_0};
	xsi_register_didat("secureip_m_01196800042031913727_3738185551", "isim/tb_FBCtl_isim_beh.exe.sim/secureip/m_01196800042031913727_3738185551.didat");
	xsi_register_executes(pe);
}
