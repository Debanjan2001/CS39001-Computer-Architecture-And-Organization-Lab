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
static const char *ng0 = "/home/bob/Desktop/coa-lab/Assignment-6/Q3/BoothMultiplier.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {2U, 0U};



static void Always_48_0(char *t0)
{
    char t13[8];
    char t18[8];
    char t29[8];
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
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    int t28;
    char *t30;
    char *t31;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4600);
    *((int *)t2) = 1;
    t3 = (t0 + 4312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(48, ng0);

LAB5:    xsi_set_current_line(49, ng0);
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

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(49, ng0);

LAB9:    xsi_set_current_line(50, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(59, ng0);

LAB13:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(69, ng0);

LAB17:    xsi_set_current_line(70, ng0);
    t11 = (t0 + 2888);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 2568);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 >> 0);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    xsi_vlogtype_concat(t13, 2, 2, 2U, t18, 1, t14, 1);
    t27 = (t0 + 3208);
    xsi_vlogvar_assign_value(t27, t13, 0, 0, 2);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB18:    t5 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t28 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(87, ng0);

LAB30:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2408);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 2408);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t20);
    t10 = (t9 >> 7);
    t21 = (t10 & 1);
    *((unsigned int *)t19) = t21;
    xsi_vlogtype_concat(t13, 17, 17, 3U, t18, 1, t14, 8, t5, 8);
    t27 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 1, 0LL);
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t13, 1, 0, 8, 0LL);
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t13, 9, 0, 8, 0LL);

LAB25:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 2408);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    xsi_vlogtype_concat(t13, 16, 16, 2U, t14, 8, t5, 8);
    t15 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t15, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB32;

LAB31:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t5) > *((unsigned int *)t11))
        goto LAB33;

LAB34:    t16 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t16, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 4, t5, 4, t11, 4);
    t12 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    goto LAB16;

LAB19:    xsi_set_current_line(73, ng0);

LAB26:    xsi_set_current_line(75, ng0);
    t11 = (t0 + 2408);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 2728);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t13, 0, 8);
    t19 = (t13 + 4);
    t20 = (t17 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (~(t6));
    *((unsigned int *)t13) = t7;
    *((unsigned int *)t19) = 0;
    if (*((unsigned int *)t20) != 0)
        goto LAB28;

LAB27:    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 255U);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t23 & 255U);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 8, t14, 8, t13, 8);
    t27 = ((char*)((ng2)));
    memset(t29, 0, 8);
    xsi_vlog_unsigned_add(t29, 8, t18, 8, t27, 8);
    t30 = (t0 + 3368);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 8);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 3368);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t20);
    t10 = (t9 >> 7);
    t21 = (t10 & 1);
    *((unsigned int *)t19) = t21;
    xsi_vlogtype_concat(t13, 17, 17, 3U, t18, 1, t14, 8, t5, 8);
    t27 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 1, 0LL);
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t13, 1, 0, 8, 0LL);
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t13, 9, 0, 8, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(80, ng0);

LAB29:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2408);
    t5 = (t3 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 2728);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t11, 8, t15, 8);
    t16 = (t0 + 3368);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 8);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = (t0 + 3368);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t0 + 3368);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memset(t18, 0, 8);
    t19 = (t18 + 4);
    t20 = (t17 + 4);
    t6 = *((unsigned int *)t17);
    t7 = (t6 >> 7);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t20);
    t10 = (t9 >> 7);
    t21 = (t10 & 1);
    *((unsigned int *)t19) = t21;
    xsi_vlogtype_concat(t13, 17, 17, 3U, t18, 1, t14, 8, t5, 8);
    t27 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t27, t13, 0, 0, 1, 0LL);
    t30 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t30, t13, 1, 0, 8, 0LL);
    t31 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t31, t13, 9, 0, 8, 0LL);
    goto LAB25;

LAB28:    t8 = *((unsigned int *)t13);
    t9 = *((unsigned int *)t20);
    *((unsigned int *)t13) = (t8 | t9);
    t10 = *((unsigned int *)t19);
    t21 = *((unsigned int *)t20);
    *((unsigned int *)t19) = (t10 | t21);
    goto LAB27;

LAB32:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t13) = 1;
    goto LAB34;

}


extern void work_m_17933077633412946253_0002699982_init()
{
	static char *pe[] = {(void *)Always_48_0};
	xsi_register_didat("work_m_17933077633412946253_0002699982", "isim/test_BoothMultiplier_isim_beh.exe.sim/work/m_17933077633412946253_0002699982.didat");
	xsi_register_executes(pe);
}
