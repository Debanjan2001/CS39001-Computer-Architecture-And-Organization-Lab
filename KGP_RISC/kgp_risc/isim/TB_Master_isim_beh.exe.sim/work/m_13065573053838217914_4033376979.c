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
static const char *ng0 = "/home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/adder.v";
static int ng1[] = {30, 0};
static int ng2[] = {0, 0};
static int ng3[] = {31, 0};



static void Always_15_0(char *t0)
{
    char t4[8];
    char t14[8];
    char t24[8];
    char t27[8];
    char t28[8];
    char t29[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;
    char *t39;
    unsigned int t40;
    int t41;
    int t42;
    char *t43;
    unsigned int t44;
    int t45;
    int t46;
    unsigned int t47;
    int t48;
    unsigned int t49;
    unsigned int t50;
    int t51;
    int t52;
    char *t53;
    char *t54;

LAB0:    t1 = (t0 + 3160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3480);
    *((int *)t2) = 1;
    t3 = (t0 + 3192);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 2147483647U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 2147483647U);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 2147483647U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 2147483647U);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 32, t4, 32, t14, 32);
    t25 = (t0 + 1368U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 32, t24, 32, t26, 1);
    t25 = (t0 + 1768);
    t31 = (t0 + 1768);
    t32 = (t31 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng1)));
    t35 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t28, t29, t30, ((int*)(t33)), 2, t34, 32, 1, t35, 32, 1);
    t36 = (t28 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (!(t37));
    t39 = (t29 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t38 && t41);
    t43 = (t30 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (!(t44));
    t46 = (t42 && t45);
    if (t46 == 1)
        goto LAB6;

LAB7:    t53 = (t0 + 2248);
    xsi_vlogvar_assign_value(t53, t27, 31, 0, 1);
    xsi_set_current_line(17, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t4, 2, t3, t6, 2, t7, 32, 1);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    t15 = (t0 + 1168U);
    t17 = (t15 + 72U);
    t25 = *((char **)t17);
    t26 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t14, 2, t16, t25, 2, t26, 32, 1);
    memset(t24, 0, 8);
    xsi_vlog_unsigned_add(t24, 2, t4, 2, t14, 2);
    t31 = (t0 + 2248);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_add(t27, 2, t24, 2, t33, 1);
    t34 = (t0 + 1768);
    t35 = (t0 + 1768);
    t36 = (t35 + 72U);
    t39 = *((char **)t36);
    t43 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t28, t39, 2, t43, 32, 1);
    t53 = (t28 + 4);
    t8 = *((unsigned int *)t53);
    t38 = (!(t8));
    if (t38 == 1)
        goto LAB8;

LAB9:    t54 = (t0 + 1928);
    xsi_vlogvar_assign_value(t54, t27, 1, 0, 1);
    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2248);
    t7 = (t6 + 56U);
    t15 = *((char **)t7);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t15);
    t10 = (t8 ^ t9);
    *((unsigned int *)t4) = t10;
    t16 = (t5 + 4);
    t17 = (t15 + 4);
    t25 = (t4 + 4);
    t11 = *((unsigned int *)t16);
    t12 = *((unsigned int *)t17);
    t13 = (t11 | t12);
    *((unsigned int *)t25) = t13;
    t18 = *((unsigned int *)t25);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB10;

LAB11:
LAB12:    t26 = (t0 + 2088);
    xsi_vlogvar_assign_value(t26, t4, 0, 0, 1);
    goto LAB2;

LAB6:    t47 = *((unsigned int *)t30);
    t48 = (t47 + 0);
    t49 = *((unsigned int *)t28);
    t50 = *((unsigned int *)t29);
    t51 = (t49 - t50);
    t52 = (t51 + 1);
    xsi_vlogvar_assign_value(t25, t27, t48, *((unsigned int *)t29), t52);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t34, t27, 0, *((unsigned int *)t28), 1);
    goto LAB9;

LAB10:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t25);
    *((unsigned int *)t4) = (t20 | t21);
    goto LAB12;

}


extern void work_m_13065573053838217914_4033376979_init()
{
	static char *pe[] = {(void *)Always_15_0};
	xsi_register_didat("work_m_13065573053838217914_4033376979", "isim/TB_Master_isim_beh.exe.sim/work/m_13065573053838217914_4033376979.didat");
	xsi_register_executes(pe);
}
