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
static const char *ng0 = "/home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/regfile.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {12, 0};
static unsigned int ng6[] = {4294967295U, 4294967295U};



static void Always_37_0(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t41[8];
    char t66[8];
    char t78[8];
    char t82[8];
    char t90[8];
    char t128[8];
    char t129[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    char *t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    char *t127;
    char *t130;
    char *t131;
    char *t132;
    char *t133;
    char *t134;
    char *t135;
    char *t136;
    char *t137;
    unsigned int t138;
    char *t139;
    unsigned int t140;
    int t141;
    int t142;
    unsigned int t143;
    unsigned int t144;
    int t145;
    int t146;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4776);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t2) != 0)
        goto LAB17;

LAB18:    t5 = (t13 + 4);
    t27 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t5);
    t33 = (t27 || t30);
    if (t33 > 0)
        goto LAB19;

LAB20:    memcpy(t41, t13, 8);

LAB21:    memset(t66, 0, 8);
    t26 = (t41 + 4);
    t67 = *((unsigned int *)t26);
    t68 = (~(t67));
    t69 = *((unsigned int *)t41);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t26) != 0)
        goto LAB36;

LAB37:    t72 = (t66 + 4);
    t73 = *((unsigned int *)t66);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB38;

LAB39:    memcpy(t90, t66, 8);

LAB40:    t120 = (t90 + 4);
    t121 = *((unsigned int *)t120);
    t122 = (~(t121));
    t123 = *((unsigned int *)t90);
    t124 = (t123 & t122);
    t125 = (t124 != 0);
    if (t125 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t27 = (t9 ^ t10);
    t30 = (t8 | t27);
    t33 = *((unsigned int *)t4);
    t34 = *((unsigned int *)t5);
    t37 = (t33 | t34);
    t38 = (~(t37));
    t39 = (t30 & t38);
    if (t39 != 0)
        goto LAB62;

LAB59:    if (t37 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t13) = 1;

LAB62:    t12 = (t13 + 4);
    t40 = *((unsigned int *)t12);
    t42 = (~(t40));
    t43 = *((unsigned int *)t13);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB63;

LAB64:
LAB65:
LAB55:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3048);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(40, ng0);
    t12 = ((char*)((ng3)));
    t14 = (t0 + 2888);
    t17 = (t0 + 2888);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2888);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3048);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB13;

LAB14:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 3048);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB13:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t14, t12, 0, *((unsigned int *)t16), t36);
    goto LAB14;

LAB15:    *((unsigned int *)t13) = 1;
    goto LAB18;

LAB17:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB19:    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t15, 0, 8);
    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB23;

LAB22:    t17 = (t11 + 4);
    if (*((unsigned int *)t17) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t12) > *((unsigned int *)t11))
        goto LAB24;

LAB25:    memset(t16, 0, 8);
    t19 = (t15 + 4);
    t34 = *((unsigned int *)t19);
    t37 = (~(t34));
    t38 = *((unsigned int *)t15);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t19) != 0)
        goto LAB29;

LAB30:    t42 = *((unsigned int *)t13);
    t43 = *((unsigned int *)t16);
    t44 = (t42 & t43);
    *((unsigned int *)t41) = t44;
    t21 = (t13 + 4);
    t22 = (t16 + 4);
    t23 = (t41 + 4);
    t45 = *((unsigned int *)t21);
    t46 = *((unsigned int *)t22);
    t47 = (t45 | t46);
    *((unsigned int *)t23) = t47;
    t48 = *((unsigned int *)t23);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB21;

LAB23:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB25;

LAB24:    *((unsigned int *)t15) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t16) = 1;
    goto LAB30;

LAB29:    t20 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB30;

LAB31:    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t23);
    *((unsigned int *)t41) = (t50 | t51);
    t24 = (t13 + 4);
    t25 = (t16 + 4);
    t52 = *((unsigned int *)t13);
    t53 = (~(t52));
    t54 = *((unsigned int *)t24);
    t55 = (~(t54));
    t56 = *((unsigned int *)t16);
    t57 = (~(t56));
    t58 = *((unsigned int *)t25);
    t59 = (~(t58));
    t28 = (t53 & t55);
    t31 = (t57 & t59);
    t60 = (~(t28));
    t61 = (~(t31));
    t62 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t62 & t60);
    t63 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t63 & t61);
    t64 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t64 & t60);
    t65 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t65 & t61);
    goto LAB33;

LAB34:    *((unsigned int *)t66) = 1;
    goto LAB37;

LAB36:    t29 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB37;

LAB38:    t76 = (t0 + 1688U);
    t77 = *((char **)t76);
    t76 = ((char*)((ng2)));
    memset(t78, 0, 8);
    t79 = (t77 + 4);
    if (*((unsigned int *)t79) != 0)
        goto LAB42;

LAB41:    t80 = (t76 + 4);
    if (*((unsigned int *)t80) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t77) < *((unsigned int *)t76))
        goto LAB43;

LAB44:    memset(t82, 0, 8);
    t83 = (t78 + 4);
    t84 = *((unsigned int *)t83);
    t85 = (~(t84));
    t86 = *((unsigned int *)t78);
    t87 = (t86 & t85);
    t88 = (t87 & 1U);
    if (t88 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t83) != 0)
        goto LAB48;

LAB49:    t91 = *((unsigned int *)t66);
    t92 = *((unsigned int *)t82);
    t93 = (t91 & t92);
    *((unsigned int *)t90) = t93;
    t94 = (t66 + 4);
    t95 = (t82 + 4);
    t96 = (t90 + 4);
    t97 = *((unsigned int *)t94);
    t98 = *((unsigned int *)t95);
    t99 = (t97 | t98);
    *((unsigned int *)t96) = t99;
    t100 = *((unsigned int *)t96);
    t101 = (t100 != 0);
    if (t101 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB40;

LAB42:    t81 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB44;

LAB43:    *((unsigned int *)t78) = 1;
    goto LAB44;

LAB46:    *((unsigned int *)t82) = 1;
    goto LAB49;

LAB48:    t89 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t89) = 1;
    goto LAB49;

LAB50:    t102 = *((unsigned int *)t90);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t90) = (t102 | t103);
    t104 = (t66 + 4);
    t105 = (t82 + 4);
    t106 = *((unsigned int *)t66);
    t107 = (~(t106));
    t108 = *((unsigned int *)t104);
    t109 = (~(t108));
    t110 = *((unsigned int *)t82);
    t111 = (~(t110));
    t112 = *((unsigned int *)t105);
    t113 = (~(t112));
    t32 = (t107 & t109);
    t35 = (t111 & t113);
    t114 = (~(t32));
    t115 = (~(t35));
    t116 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t116 & t114);
    t117 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t117 & t115);
    t118 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t118 & t114);
    t119 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t119 & t115);
    goto LAB52;

LAB53:    xsi_set_current_line(43, ng0);

LAB56:    xsi_set_current_line(44, ng0);
    t126 = (t0 + 1848U);
    t127 = *((char **)t126);
    t126 = (t0 + 2888);
    t130 = (t0 + 2888);
    t131 = (t130 + 72U);
    t132 = *((char **)t131);
    t133 = (t0 + 2888);
    t134 = (t133 + 64U);
    t135 = *((char **)t134);
    t136 = (t0 + 1688U);
    t137 = *((char **)t136);
    xsi_vlog_generic_convert_array_indices(t128, t129, t132, t135, 2, 1, t137, 5, 2);
    t136 = (t128 + 4);
    t138 = *((unsigned int *)t136);
    t36 = (!(t138));
    t139 = (t129 + 4);
    t140 = *((unsigned int *)t139);
    t141 = (!(t140));
    t142 = (t36 && t141);
    if (t142 == 1)
        goto LAB57;

LAB58:    goto LAB55;

LAB57:    t143 = *((unsigned int *)t128);
    t144 = *((unsigned int *)t129);
    t145 = (t143 - t144);
    t146 = (t145 + 1);
    xsi_vlogvar_assign_value(t126, t127, 0, *((unsigned int *)t129), t146);
    goto LAB58;

LAB61:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(47, ng0);

LAB66:    xsi_set_current_line(48, ng0);
    t14 = ((char*)((ng3)));
    t17 = (t0 + 2888);
    t18 = (t0 + 2888);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 2888);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = (t0 + 1688U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t20, t23, 2, 1, t25, 5, 2);
    t24 = (t15 + 4);
    t46 = *((unsigned int *)t24);
    t28 = (!(t46));
    t26 = (t16 + 4);
    t47 = *((unsigned int *)t26);
    t31 = (!(t47));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB67;

LAB68:    goto LAB65;

LAB67:    t48 = *((unsigned int *)t15);
    t49 = *((unsigned int *)t16);
    t35 = (t48 - t49);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t17, t14, 0, *((unsigned int *)t16), t36);
    goto LAB68;

}

static void Cont_52_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 2888);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t5, 32, t4, t8, t11, 2, 1, t12, 32, 1);
    t13 = (t0 + 4888);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 8);
    xsi_driver_vfirst_trans(t13, 0, 31);
    t18 = (t0 + 4792);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_54_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4808);
    *((int *)t2) = 1;
    t3 = (t0 + 4488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(58, ng0);

LAB15:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t16 = *((char **)t10);
    t17 = (t0 + 1368U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t16, 2, 1, t18, 5, 2);
    t17 = (t0 + 2568);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 32);

LAB13:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB17;

LAB16:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB17;

LAB20:    if (*((unsigned int *)t3) < *((unsigned int *)t2))
        goto LAB19;

LAB18:    *((unsigned int *)t6) = 1;

LAB19:    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(65, ng0);

LAB25:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2888);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 2888);
    t10 = (t9 + 64U);
    t16 = *((char **)t10);
    t17 = (t0 + 1528U);
    t18 = *((char **)t17);
    xsi_vlog_generic_get_array_select_value(t6, 32, t4, t8, t16, 2, 1, t18, 5, 2);
    t17 = (t0 + 2728);
    xsi_vlogvar_assign_value(t17, t6, 0, 0, 32);

LAB23:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(55, ng0);

LAB14:    xsi_set_current_line(56, ng0);
    t16 = ((char*)((ng6)));
    t17 = (t0 + 2568);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 32);
    goto LAB13;

LAB17:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB19;

LAB21:    xsi_set_current_line(62, ng0);

LAB24:    xsi_set_current_line(63, ng0);
    t9 = ((char*)((ng6)));
    t10 = (t0 + 2728);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB23;

}


extern void work_m_00630676700118462759_0254784918_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Cont_52_1,(void *)Always_54_2};
	xsi_register_didat("work_m_00630676700118462759_0254784918", "isim/TB_Master_isim_beh.exe.sim/work/m_00630676700118462759_0254784918.didat");
	xsi_register_executes(pe);
}
