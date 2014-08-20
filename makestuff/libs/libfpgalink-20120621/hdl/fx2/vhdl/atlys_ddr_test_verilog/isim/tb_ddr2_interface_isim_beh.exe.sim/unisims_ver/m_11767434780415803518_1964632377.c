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
static int ng0[] = {5001047, 0, 0, 0, 0, 0};
static int ng1[] = {1380794700, 0, 20047, 0, 0, 0};
static int ng2[] = {1128354373, 0, 1330533471, 0, 68, 0};
static const char *ng3 = "Attribute Syntax Error : The attribute CAPACITANCE on IOBUF instance %m is set to %s.  Legal values for this attribute are DONT_CARE, LOW or NORMAL.";
static int ng4[] = {48, 0};
static int ng5[] = {49, 0};
static int ng6[] = {50, 0};
static int ng7[] = {51, 0};
static int ng8[] = {52, 0};
static int ng9[] = {53, 0};
static int ng10[] = {54, 0};
static int ng11[] = {55, 0};
static int ng12[] = {56, 0};
static int ng13[] = {57, 0};
static int ng14[] = {12592, 0};
static int ng15[] = {12593, 0};
static int ng16[] = {12594, 0};
static int ng17[] = {12595, 0};
static int ng18[] = {12596, 0};
static int ng19[] = {12597, 0};
static int ng20[] = {12598, 0};
static const char *ng21 = "Attribute Syntax Error : The attribute IBUF_DELAY_VALUE on IOBUF instance %m is set to %s.  Legal values for this attribute are 0, 1, 2, ... or 16.";
static int ng22[] = {1095521093, 0, 70, 0};
static int ng23[] = {1414681925, 0, 0, 0};
static const char *ng24 = "Attribute Syntax Error : The attribute IBUF_LOW_PWR on IBUF instance %m is set to %s.  Legal values for this attribute are TRUE or FALSE.";
static int ng25[] = {1096111183, 0};
static const char *ng26 = "Attribute Syntax Error : The attribute IFD_DELAY_VALUE on IOBUF instance %m is set to %s.  Legal values for this attribute are AUTO, 0, 1, 2, ... or 8.";



static void NetDecl_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
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

LAB0:    t1 = (t0 + 3952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7224);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 5392);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t5 + 4);
    t13 = *((unsigned int *)t5);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t4, 0, 0U);
    t18 = (t0 + 5264);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_46_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = (t0 + 2480U);
    t4 = *((char **)t2);
    t2 = (t0 + 5456);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_OrGate(t8, 2, t3, t4);
    t9 = (t0 + 5456);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 5280);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Gate_47_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4448U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2320U);
    t3 = *((char **)t2);
    t2 = (t0 + 2640U);
    t4 = *((char **)t2);
    t2 = (t0 + 5520);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_bufIf0Gate(t8, t3, t4);
    t9 = (t0 + 5520);
    xsi_driver_vfirst_trans_bufif(t9, 0, 0);
    t10 = (t0 + 5296);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Gate_49_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4696U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2160U);
    t3 = *((char **)t2);
    t2 = (t0 + 5584);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = (t3 + 4);
    if (*((unsigned int *)t9) == 1)
        goto LAB4;

LAB5:    t10 = *((unsigned int *)t3);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;

LAB6:    t14 = (t0 + 5584);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t15 = (t0 + 5312);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

}

static void Initial_51_4(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    char *t37;
    char *t38;

LAB0:
LAB2:    t1 = (t0 + 472);
    t2 = *((char **)t1);

LAB3:    t1 = ((char*)((ng0)));
    t3 = xsi_vlog_unsigned_case_compare(t2, 72, t1, 72);
    if (t3 == 1)
        goto LAB4;

LAB5:    t4 = ((char*)((ng1)));
    t5 = xsi_vlog_unsigned_case_compare(t2, 72, t4, 72);
    if (t5 == 1)
        goto LAB6;

LAB7:    t6 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t2, 72, t6, 72);
    if (t7 == 1)
        goto LAB8;

LAB9:
LAB11:
LAB10:
LAB13:    t8 = (t0 + 472);
    t9 = *((char **)t8);
    xsi_vlogfile_write(1, 0, 0, ng3, 2, t0, (char)118, t9, 72);
    xsi_vlog_finish(1);

LAB12:    t1 = (t0 + 744);
    t4 = *((char **)t1);

LAB14:    t1 = ((char*)((ng4)));
    t3 = xsi_vlog_unsigned_case_compare(t4, 8, t1, 16);
    if (t3 == 1)
        goto LAB15;

LAB16:    t6 = ((char*)((ng5)));
    t5 = xsi_vlog_unsigned_case_compare(t4, 8, t6, 16);
    if (t5 == 1)
        goto LAB17;

LAB18:    t8 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t4, 8, t8, 16);
    if (t7 == 1)
        goto LAB19;

LAB20:    t9 = ((char*)((ng7)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 8, t9, 16);
    if (t10 == 1)
        goto LAB21;

LAB22:    t11 = ((char*)((ng8)));
    t12 = xsi_vlog_unsigned_case_compare(t4, 8, t11, 16);
    if (t12 == 1)
        goto LAB23;

LAB24:    t13 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_compare(t4, 8, t13, 16);
    if (t14 == 1)
        goto LAB25;

LAB26:    t15 = ((char*)((ng10)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 8, t15, 16);
    if (t16 == 1)
        goto LAB27;

LAB28:    t17 = ((char*)((ng11)));
    t18 = xsi_vlog_unsigned_case_compare(t4, 8, t17, 16);
    if (t18 == 1)
        goto LAB29;

LAB30:    t19 = ((char*)((ng12)));
    t20 = xsi_vlog_unsigned_case_compare(t4, 8, t19, 16);
    if (t20 == 1)
        goto LAB31;

LAB32:    t21 = ((char*)((ng13)));
    t22 = xsi_vlog_unsigned_case_compare(t4, 8, t21, 16);
    if (t22 == 1)
        goto LAB33;

LAB34:    t23 = ((char*)((ng14)));
    t24 = xsi_vlog_unsigned_case_compare(t4, 8, t23, 16);
    if (t24 == 1)
        goto LAB35;

LAB36:    t25 = ((char*)((ng15)));
    t26 = xsi_vlog_unsigned_case_compare(t4, 8, t25, 16);
    if (t26 == 1)
        goto LAB37;

LAB38:    t27 = ((char*)((ng16)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 8, t27, 16);
    if (t28 == 1)
        goto LAB39;

LAB40:    t29 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 8, t29, 16);
    if (t30 == 1)
        goto LAB41;

LAB42:    t31 = ((char*)((ng18)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 8, t31, 16);
    if (t32 == 1)
        goto LAB43;

LAB44:    t33 = ((char*)((ng19)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 8, t33, 16);
    if (t34 == 1)
        goto LAB45;

LAB46:    t35 = ((char*)((ng20)));
    t36 = xsi_vlog_unsigned_case_compare(t4, 8, t35, 16);
    if (t36 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:
LAB52:    t37 = (t0 + 744);
    t38 = *((char **)t37);
    xsi_vlogfile_write(1, 0, 0, ng21, 2, t0, (char)118, t38, 8);
    xsi_vlog_finish(1);

LAB51:    t1 = (t0 + 880);
    t6 = *((char **)t1);

LAB53:    t1 = ((char*)((ng22)));
    t3 = xsi_vlog_unsigned_case_compare(t6, 32, t1, 40);
    if (t3 == 1)
        goto LAB54;

LAB55:    t8 = ((char*)((ng23)));
    t5 = xsi_vlog_unsigned_case_compare(t6, 32, t8, 40);
    if (t5 == 1)
        goto LAB56;

LAB57:
LAB59:
LAB58:
LAB61:    t9 = (t0 + 880);
    t11 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 0, ng24, 2, t0, (char)118, t11, 32);
    xsi_vlog_finish(1);

LAB60:    t1 = (t0 + 1016);
    t8 = *((char **)t1);

LAB62:    t1 = ((char*)((ng25)));
    t3 = xsi_vlog_unsigned_case_compare(t8, 32, t1, 32);
    if (t3 == 1)
        goto LAB63;

LAB64:    t9 = ((char*)((ng4)));
    t5 = xsi_vlog_unsigned_case_compare(t8, 32, t9, 32);
    if (t5 == 1)
        goto LAB65;

LAB66:    t11 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t8, 32, t11, 32);
    if (t7 == 1)
        goto LAB67;

LAB68:    t13 = ((char*)((ng6)));
    t10 = xsi_vlog_unsigned_case_compare(t8, 32, t13, 32);
    if (t10 == 1)
        goto LAB69;

LAB70:    t15 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_compare(t8, 32, t15, 32);
    if (t12 == 1)
        goto LAB71;

LAB72:    t17 = ((char*)((ng8)));
    t14 = xsi_vlog_unsigned_case_compare(t8, 32, t17, 32);
    if (t14 == 1)
        goto LAB73;

LAB74:    t19 = ((char*)((ng9)));
    t16 = xsi_vlog_unsigned_case_compare(t8, 32, t19, 32);
    if (t16 == 1)
        goto LAB75;

LAB76:    t21 = ((char*)((ng10)));
    t18 = xsi_vlog_unsigned_case_compare(t8, 32, t21, 32);
    if (t18 == 1)
        goto LAB77;

LAB78:    t23 = ((char*)((ng11)));
    t20 = xsi_vlog_unsigned_case_compare(t8, 32, t23, 32);
    if (t20 == 1)
        goto LAB79;

LAB80:    t25 = ((char*)((ng12)));
    t22 = xsi_vlog_unsigned_case_compare(t8, 32, t25, 32);
    if (t22 == 1)
        goto LAB81;

LAB82:
LAB84:
LAB83:
LAB86:    t27 = (t0 + 1016);
    t29 = *((char **)t27);
    xsi_vlogfile_write(1, 0, 0, ng26, 2, t0, (char)118, t29, 32);
    xsi_vlog_finish(1);

LAB85:
LAB1:    return;
LAB4:    goto LAB12;

LAB6:    goto LAB4;

LAB8:    goto LAB4;

LAB15:    goto LAB51;

LAB17:    goto LAB15;

LAB19:    goto LAB15;

LAB21:    goto LAB15;

LAB23:    goto LAB15;

LAB25:    goto LAB15;

LAB27:    goto LAB15;

LAB29:    goto LAB15;

LAB31:    goto LAB15;

LAB33:    goto LAB15;

LAB35:    goto LAB15;

LAB37:    goto LAB15;

LAB39:    goto LAB15;

LAB41:    goto LAB15;

LAB43:    goto LAB15;

LAB45:    goto LAB15;

LAB47:    goto LAB15;

LAB54:    goto LAB60;

LAB56:    goto LAB54;

LAB63:    goto LAB85;

LAB65:    goto LAB63;

LAB67:    goto LAB63;

LAB69:    goto LAB63;

LAB71:    goto LAB63;

LAB73:    goto LAB63;

LAB75:    goto LAB63;

LAB77:    goto LAB63;

LAB79:    goto LAB63;

LAB81:    goto LAB63;

}


extern void unisims_ver_m_11767434780415803518_1964632377_init()
{
	static char *pe[] = {(void *)NetDecl_44_0,(void *)Gate_46_1,(void *)Gate_47_2,(void *)Gate_49_3,(void *)Initial_51_4};
	xsi_register_didat("unisims_ver_m_11767434780415803518_1964632377", "isim/tb_ddr2_interface_isim_beh.exe.sim/unisims_ver/m_11767434780415803518_1964632377.didat");
	xsi_register_executes(pe);
}
