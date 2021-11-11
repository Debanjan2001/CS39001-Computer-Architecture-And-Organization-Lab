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
static const char *ng0 = "/home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/ass7_kgp_risc/nextinstr.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {0, 0};
static unsigned int ng7[] = {4U, 0U};



static void Cont_24_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2416U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 5032);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4936);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Always_25_1(char *t0)
{
    char t14[8];
    char t29[8];
    char t52[8];
    char t56[8];
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
    int t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;

LAB0:    t1 = (t0 + 4616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4952);
    *((int *)t2) = 1;
    t3 = (t0 + 4648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(25, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1456U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);

LAB10:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1616U);
    t3 = *((char **)t2);

LAB11:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(110, ng0);

LAB105:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB20:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3456);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);

LAB9:    xsi_set_current_line(28, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3296);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3456);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB12:    xsi_set_current_line(36, ng0);

LAB21:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2736U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t14) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t10 & 4294967295U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t12 = (t0 + 3296);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB20;

LAB14:    xsi_set_current_line(41, ng0);

LAB22:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2256U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB26;

LAB23:    if (t19 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t14) = 1;

LAB26:    t23 = (t14 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB34;

LAB31:    if (t19 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t14) = 1;

LAB34:    t22 = (t14 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB42;

LAB39:    if (t19 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t14) = 1;

LAB42:    t22 = (t14 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB53;

LAB50:    if (t19 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t14) = 1;

LAB53:    t22 = (t14 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(72, ng0);

LAB65:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB56:
LAB45:
LAB37:
LAB29:    goto LAB20;

LAB16:    xsi_set_current_line(77, ng0);

LAB66:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 2256U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t14, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB70;

LAB67:    if (t19 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t14) = 1;

LAB70:    t23 = (t14 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB71;

LAB72:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB81;

LAB78:    if (t19 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t14) = 1;

LAB81:    t22 = (t14 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t5 = (t4 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB92;

LAB89:    if (t19 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t14) = 1;

LAB92:    t22 = (t14 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t14);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB93;

LAB94:    xsi_set_current_line(104, ng0);

LAB104:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB95:
LAB84:
LAB73:    goto LAB20;

LAB25:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB26;

LAB27:    xsi_set_current_line(44, ng0);

LAB30:    xsi_set_current_line(45, ng0);
    t30 = (t0 + 2576U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng2)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t30, 8, t31, 24);
    t32 = (t0 + 3296);
    xsi_vlogvar_assign_value(t32, t29, 0, 0, 32);
    goto LAB29;

LAB33:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(49, ng0);

LAB38:    xsi_set_current_line(50, ng0);
    t23 = (t0 + 2576U);
    t30 = *((char **)t23);
    t23 = ((char*)((ng2)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t23, 8, t30, 24);
    t31 = (t0 + 3296);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 32);
    goto LAB37;

LAB41:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(57, ng0);

LAB46:    xsi_set_current_line(58, ng0);
    t23 = (t0 + 1776U);
    t30 = *((char **)t23);
    t23 = (t30 + 4);
    t33 = *((unsigned int *)t23);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB49:    goto LAB45;

LAB47:    xsi_set_current_line(59, ng0);
    t31 = (t0 + 2576U);
    t32 = *((char **)t31);
    t31 = ((char*)((ng2)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t31, 8, t32, 24);
    t38 = (t0 + 3296);
    xsi_vlogvar_assign_value(t38, t29, 0, 0, 32);
    goto LAB49;

LAB52:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(65, ng0);

LAB57:    xsi_set_current_line(66, ng0);
    t23 = (t0 + 1776U);
    t30 = *((char **)t23);
    t23 = ((char*)((ng6)));
    memset(t29, 0, 8);
    t31 = (t30 + 4);
    t32 = (t23 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t23);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t39 = (t36 ^ t37);
    t40 = (t35 | t39);
    t41 = *((unsigned int *)t31);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB61;

LAB58:    if (t43 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t29) = 1;

LAB61:    t46 = (t29 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t29);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB64:    goto LAB56;

LAB60:    t38 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(67, ng0);
    t53 = (t0 + 2576U);
    t54 = *((char **)t53);
    t53 = ((char*)((ng2)));
    xsi_vlogtype_concat(t52, 32, 32, 2U, t53, 8, t54, 24);
    t55 = (t0 + 3296);
    xsi_vlogvar_assign_value(t55, t52, 0, 0, 32);
    goto LAB64;

LAB69:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB70;

LAB71:    xsi_set_current_line(80, ng0);

LAB74:    xsi_set_current_line(81, ng0);
    t30 = (t0 + 1936U);
    t31 = *((char **)t30);
    t30 = (t31 + 4);
    t33 = *((unsigned int *)t30);
    t34 = (~(t33));
    t35 = *((unsigned int *)t31);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB77:    goto LAB73;

LAB75:    xsi_set_current_line(82, ng0);
    t32 = (t0 + 2576U);
    t38 = *((char **)t32);
    memset(t52, 0, 8);
    t32 = (t52 + 4);
    t46 = (t38 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (t39 >> 0);
    *((unsigned int *)t52) = t40;
    t41 = *((unsigned int *)t46);
    t42 = (t41 >> 0);
    *((unsigned int *)t32) = t42;
    t43 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t43 & 524287U);
    t44 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t44 & 524287U);
    t53 = ((char*)((ng2)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t53, 13, t52, 19);
    t54 = (t0 + 3296);
    xsi_vlogvar_assign_value(t54, t29, 0, 0, 32);
    goto LAB77;

LAB80:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(88, ng0);

LAB85:    xsi_set_current_line(89, ng0);
    t23 = (t0 + 2096U);
    t30 = *((char **)t23);
    t23 = (t30 + 4);
    t33 = *((unsigned int *)t23);
    t34 = (~(t33));
    t35 = *((unsigned int *)t30);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB88:    goto LAB84;

LAB86:    xsi_set_current_line(90, ng0);
    t31 = (t0 + 2576U);
    t32 = *((char **)t31);
    memset(t52, 0, 8);
    t31 = (t52 + 4);
    t38 = (t32 + 4);
    t39 = *((unsigned int *)t32);
    t40 = (t39 >> 0);
    *((unsigned int *)t52) = t40;
    t41 = *((unsigned int *)t38);
    t42 = (t41 >> 0);
    *((unsigned int *)t31) = t42;
    t43 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t43 & 524287U);
    t44 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t44 & 524287U);
    t46 = ((char*)((ng2)));
    xsi_vlogtype_concat(t29, 32, 32, 2U, t46, 13, t52, 19);
    t53 = (t0 + 3296);
    xsi_vlogvar_assign_value(t53, t29, 0, 0, 32);
    goto LAB88;

LAB91:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(96, ng0);

LAB96:    xsi_set_current_line(97, ng0);
    t23 = (t0 + 2096U);
    t30 = *((char **)t23);
    t23 = ((char*)((ng6)));
    memset(t29, 0, 8);
    t31 = (t30 + 4);
    t32 = (t23 + 4);
    t33 = *((unsigned int *)t30);
    t34 = *((unsigned int *)t23);
    t35 = (t33 ^ t34);
    t36 = *((unsigned int *)t31);
    t37 = *((unsigned int *)t32);
    t39 = (t36 ^ t37);
    t40 = (t35 | t39);
    t41 = *((unsigned int *)t31);
    t42 = *((unsigned int *)t32);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB100;

LAB97:    if (t43 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t29) = 1;

LAB100:    t46 = (t29 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t29);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB101;

LAB102:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2896U);
    t4 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 32);

LAB103:    goto LAB95;

LAB99:    t38 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB100;

LAB101:    xsi_set_current_line(98, ng0);
    t53 = (t0 + 2576U);
    t54 = *((char **)t53);
    memset(t56, 0, 8);
    t53 = (t56 + 4);
    t55 = (t54 + 4);
    t57 = *((unsigned int *)t54);
    t58 = (t57 >> 0);
    *((unsigned int *)t56) = t58;
    t59 = *((unsigned int *)t55);
    t60 = (t59 >> 0);
    *((unsigned int *)t53) = t60;
    t61 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t61 & 524287U);
    t62 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t62 & 524287U);
    t63 = ((char*)((ng2)));
    xsi_vlogtype_concat(t52, 32, 32, 2U, t63, 13, t56, 19);
    t64 = (t0 + 3296);
    xsi_vlogvar_assign_value(t64, t52, 0, 0, 32);
    goto LAB103;

}


extern void work_m_11654695961530470610_1077530985_init()
{
	static char *pe[] = {(void *)Cont_24_0,(void *)Always_25_1};
	xsi_register_didat("work_m_11654695961530470610_1077530985", "isim/TB_risc_isim_beh.exe.sim/work/m_11654695961530470610_1077530985.didat");
	xsi_register_executes(pe);
}
