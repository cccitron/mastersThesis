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
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void unisim_a_0797552106_3081644515_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t25;
    unsigned char t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1808U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)1);
    if (t5 != 0)
        goto LAB4;

LAB6:
LAB5:    t2 = (t0 + 6263);
    t8 = (t0 + 6270);
    t5 = 1;
    if (7U == 7U)
        goto LAB42;

LAB43:    t5 = 0;

LAB44:    if (t5 == 1)
        goto LAB39;

LAB40:    t14 = (t0 + 6277);
    t16 = (t0 + 6284);
    t6 = 1;
    if (7U == 10U)
        goto LAB48;

LAB49:    t6 = 0;

LAB50:    t4 = t6;

LAB41:    if (t4 != 0)
        goto LAB36;

LAB38:
LAB37:
LAB58:    *((char **)t1) = &&LAB59;

LAB1:    return;
LAB4:    t2 = (t0 + 6131);
    t9 = (t0 + 6140);
    t11 = 1;
    if (9U == 3U)
        goto LAB16;

LAB17:    t11 = 0;

LAB18:    if (t11 == 1)
        goto LAB13;

LAB14:    t15 = (t0 + 6143);
    t17 = (t0 + 6152);
    t19 = 1;
    if (9U == 6U)
        goto LAB22;

LAB23:    t19 = 0;

LAB24:    t7 = t19;

LAB15:    if (t7 == 1)
        goto LAB10;

LAB11:    t23 = (t0 + 6158);
    t25 = (t0 + 6167);
    t27 = 1;
    if (9U == 9U)
        goto LAB28;

LAB29:    t27 = 0;

LAB30:    t6 = t27;

LAB12:    if (t6 != 0)
        goto LAB7;

LAB9:    if ((unsigned char)0 == 0)
        goto LAB34;

LAB35:
LAB8:    goto LAB5;

LAB7:    t31 = (t0 + 1808U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    *((unsigned char *)t31) = (unsigned char)0;
    goto LAB8;

LAB10:    t6 = (unsigned char)1;
    goto LAB12;

LAB13:    t7 = (unsigned char)1;
    goto LAB15;

LAB16:    t12 = 0;

LAB19:    if (t12 < 9U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t13 = (t2 + t12);
    t14 = (t9 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB17;

LAB21:    t12 = (t12 + 1);
    goto LAB19;

LAB22:    t20 = 0;

LAB25:    if (t20 < 9U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t21 = (t15 + t20);
    t22 = (t17 + t20);
    if (*((unsigned char *)t21) != *((unsigned char *)t22))
        goto LAB23;

LAB27:    t20 = (t20 + 1);
    goto LAB25;

LAB28:    t28 = 0;

LAB31:    if (t28 < 9U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t29 = (t23 + t28);
    t30 = (t25 + t28);
    if (*((unsigned char *)t29) != *((unsigned char *)t30))
        goto LAB29;

LAB33:    t28 = (t28 + 1);
    goto LAB31;

LAB34:    t2 = (t0 + 6176);
    xsi_report(t2, 87U, (unsigned char)3);
    goto LAB35;

LAB36:    if ((unsigned char)0 == 0)
        goto LAB54;

LAB55:    goto LAB37;

LAB39:    t4 = (unsigned char)1;
    goto LAB41;

LAB42:    t12 = 0;

LAB45:    if (t12 < 7U)
        goto LAB46;
    else
        goto LAB44;

LAB46:    t10 = (t2 + t12);
    t13 = (t8 + t12);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB43;

LAB47:    t12 = (t12 + 1);
    goto LAB45;

LAB48:    t20 = 0;

LAB51:    if (t20 < 7U)
        goto LAB52;
    else
        goto LAB50;

LAB52:    t18 = (t14 + t20);
    t21 = (t16 + t20);
    if (*((unsigned char *)t18) != *((unsigned char *)t21))
        goto LAB49;

LAB53:    t20 = (t20 + 1);
    goto LAB51;

LAB54:    t22 = (t0 + 6294);
    xsi_report(t22, 345U, (unsigned char)1);
    goto LAB55;

LAB56:    goto LAB2;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

}

static void unisim_a_0797552106_3081644515_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;

LAB0:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)7);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB10;

LAB11:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)6);
    t1 = t8;

LAB12:    if (t1 != 0)
        goto LAB8;

LAB9:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)0);
    if (t4 != 0)
        goto LAB26;

LAB27:    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t2);

LAB3:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB31;

LAB32:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)7);
    t1 = t8;

LAB33:    if (t1 != 0)
        goto LAB28;

LAB30:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB36;

LAB37:    t2 = (t0 + 1512U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)6);
    t1 = t8;

LAB38:    if (t1 != 0)
        goto LAB34;

LAB35:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)0);
    if (t4 != 0)
        goto LAB52;

LAB53:    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t2);

LAB29:    t2 = (t0 + 3760);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t2 = (t0 + 3840);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (t0 + 1352U);
    t9 = *((char **)t2);
    t14 = *((unsigned char *)t9);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB16;

LAB17:    t2 = (t0 + 1352U);
    t10 = *((char **)t2);
    t16 = *((unsigned char *)t10);
    t17 = (t16 == (unsigned char)7);
    t13 = t17;

LAB18:    if (t13 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)6);
    t1 = t8;

LAB23:    if (t1 != 0)
        goto LAB19;

LAB20:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)0);
    if (t4 != 0)
        goto LAB24;

LAB25:    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t2);

LAB14:    goto LAB3;

LAB10:    t1 = (unsigned char)1;
    goto LAB12;

LAB13:    t2 = (t0 + 3840);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB14;

LAB16:    t13 = (unsigned char)1;
    goto LAB18;

LAB19:    t2 = (t0 + 3840);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB14;

LAB21:    t1 = (unsigned char)1;
    goto LAB23;

LAB24:    t2 = (t0 + 3840);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB14;

LAB26:    t2 = (t0 + 3840);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB28:    t2 = (t0 + 3904);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB29;

LAB31:    t1 = (unsigned char)1;
    goto LAB33;

LAB34:    t2 = (t0 + 1352U);
    t9 = *((char **)t2);
    t14 = *((unsigned char *)t9);
    t15 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t14);
    t16 = (t15 == (unsigned char)3);
    if (t16 == 1)
        goto LAB42;

LAB43:    t2 = (t0 + 1352U);
    t10 = *((char **)t2);
    t17 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t17);
    t21 = (t20 == (unsigned char)7);
    t13 = t21;

LAB44:    if (t13 != 0)
        goto LAB39;

LAB41:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t4);
    t7 = (t5 == (unsigned char)2);
    if (t7 == 1)
        goto LAB47;

LAB48:    t2 = (t0 + 1352U);
    t6 = *((char **)t2);
    t8 = *((unsigned char *)t6);
    t13 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t8);
    t14 = (t13 == (unsigned char)6);
    t1 = t14;

LAB49:    if (t1 != 0)
        goto LAB45;

LAB46:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t1);
    t5 = (t4 == (unsigned char)0);
    if (t5 != 0)
        goto LAB50;

LAB51:    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast_port(t2);

LAB40:    goto LAB29;

LAB36:    t1 = (unsigned char)1;
    goto LAB38;

LAB39:    t2 = (t0 + 3904);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB40;

LAB42:    t13 = (unsigned char)1;
    goto LAB44;

LAB45:    t2 = (t0 + 3904);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB40;

LAB47:    t1 = (unsigned char)1;
    goto LAB49;

LAB50:    t2 = (t0 + 3904);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB40;

LAB52:    t2 = (t0 + 3904);
    t6 = (t2 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB29;

}


extern void unisim_a_0797552106_3081644515_init()
{
	static char *pe[] = {(void *)unisim_a_0797552106_3081644515_p_0,(void *)unisim_a_0797552106_3081644515_p_1};
	xsi_register_didat("unisim_a_0797552106_3081644515", "isim/tb_VmodCAM_Ref_isim_beh.exe.sim/unisim/a_0797552106_3081644515.didat");
	xsi_register_executes(pe);
}
