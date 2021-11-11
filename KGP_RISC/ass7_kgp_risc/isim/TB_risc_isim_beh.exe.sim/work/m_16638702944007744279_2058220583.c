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
static const char *ng0 = "/home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/ass7_kgp_risc/control.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {6U, 0U};
static unsigned int ng5[] = {8U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {5U, 0U};



static void Always_16_0(char *t0)
{
    char t9[8];
    char t10[8];
    char t11[8];
    char t24[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char t90[8];
    char t105[8];
    char t121[8];
    char t129[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
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
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    char *t106;
    char *t107;
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
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    char *t133;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    char *t173;
    char *t174;

LAB0:    t1 = (t0 + 4616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 4936);
    *((int *)t2) = 1;
    t3 = (t0 + 4648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(16, ng0);

LAB5:    xsi_set_current_line(17, ng0);
    t4 = (t0 + 1864U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(90, ng0);

LAB150:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(18, ng0);

LAB22:    xsi_set_current_line(19, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3064);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(21, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t2);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB26;

LAB23:    if (t21 != 0)
        goto LAB25;

LAB24:    *((unsigned int *)t11) = 1;

LAB26:    memset(t24, 0, 8);
    t25 = (t11 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t25) != 0)
        goto LAB29;

LAB30:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (!(t33));
    t35 = *((unsigned int *)t32);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB31;

LAB32:    memcpy(t63, t24, 8);

LAB33:    memset(t90, 0, 8);
    t91 = (t63 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t63);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t91) != 0)
        goto LAB47;

LAB48:    t98 = (t90 + 4);
    t99 = *((unsigned int *)t90);
    t100 = (!(t99));
    t101 = *((unsigned int *)t98);
    t102 = (t100 || t101);
    if (t102 > 0)
        goto LAB49;

LAB50:    memcpy(t129, t90, 8);

LAB51:    memset(t10, 0, 8);
    t157 = (t129 + 4);
    t158 = *((unsigned int *)t157);
    t159 = (~(t158));
    t160 = *((unsigned int *)t129);
    t161 = (t160 & t159);
    t162 = (t161 & 1U);
    if (t162 != 0)
        goto LAB63;

LAB64:    if (*((unsigned int *)t157) != 0)
        goto LAB65;

LAB66:    t164 = (t10 + 4);
    t165 = *((unsigned int *)t10);
    t166 = *((unsigned int *)t164);
    t167 = (t165 || t166);
    if (t167 > 0)
        goto LAB67;

LAB68:    t169 = *((unsigned int *)t10);
    t170 = (~(t169));
    t171 = *((unsigned int *)t164);
    t172 = (t170 || t171);
    if (t172 > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t164) > 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t10) > 0)
        goto LAB73;

LAB74:    memcpy(t9, t173, 8);

LAB75:    t174 = (t0 + 3384);
    xsi_vlogvar_assign_value(t174, t9, 0, 0, 2);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB9:    xsi_set_current_line(30, ng0);

LAB76:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB11:    xsi_set_current_line(42, ng0);

LAB77:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 2024U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t7 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t7);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    memset(t10, 0, 8);
    t8 = (t11 + 4);
    t18 = *((unsigned int *)t8);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t8) != 0)
        goto LAB80;

LAB81:    t31 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t31);
    t27 = (t23 || t26);
    if (t27 > 0)
        goto LAB82;

LAB83:    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t31);
    t33 = (t29 || t30);
    if (t33 > 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t31) > 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t10) > 0)
        goto LAB88;

LAB89:    memcpy(t9, t37, 8);

LAB90:    t38 = (t0 + 3064);
    xsi_vlogvar_assign_value(t38, t9, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    memset(t10, 0, 8);
    t7 = (t11 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t7) != 0)
        goto LAB93;

LAB94:    t25 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t25);
    t27 = (t23 || t26);
    if (t27 > 0)
        goto LAB95;

LAB96:    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t33 = (t29 || t30);
    if (t33 > 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t25) > 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t10) > 0)
        goto LAB101;

LAB102:    memcpy(t9, t32, 8);

LAB103:    t37 = (t0 + 2584);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    memset(t10, 0, 8);
    t7 = (t11 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t7) != 0)
        goto LAB106;

LAB107:    t25 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t25);
    t27 = (t23 || t26);
    if (t27 > 0)
        goto LAB108;

LAB109:    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t33 = (t29 || t30);
    if (t33 > 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t25) > 0)
        goto LAB112;

LAB113:    if (*((unsigned int *)t10) > 0)
        goto LAB114;

LAB115:    memcpy(t9, t32, 8);

LAB116:    t37 = (t0 + 3224);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    t17 = (t16 & 1);
    *((unsigned int *)t2) = t17;
    memset(t10, 0, 8);
    t7 = (t11 + 4);
    t18 = *((unsigned int *)t7);
    t19 = (~(t18));
    t20 = *((unsigned int *)t11);
    t21 = (t20 & t19);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t7) != 0)
        goto LAB119;

LAB120:    t25 = (t10 + 4);
    t23 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t25);
    t27 = (t23 || t26);
    if (t27 > 0)
        goto LAB121;

LAB122:    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t25);
    t33 = (t29 || t30);
    if (t33 > 0)
        goto LAB123;

LAB124:    if (*((unsigned int *)t25) > 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t10) > 0)
        goto LAB127;

LAB128:    memcpy(t9, t32, 8);

LAB129:    t37 = (t0 + 2424);
    xsi_vlogvar_assign_value(t37, t9, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB13:    xsi_set_current_line(54, ng0);

LAB130:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB15:    xsi_set_current_line(66, ng0);

LAB131:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2024U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t11 + 4);
    t4 = (t3 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t4);
    t15 = (t14 >> 0);
    *((unsigned int *)t2) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 7U);
    t17 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t17 & 7U);
    t7 = ((char*)((ng2)));
    memset(t24, 0, 8);
    t8 = (t11 + 4);
    t25 = (t7 + 4);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t7);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t8);
    t22 = *((unsigned int *)t25);
    t23 = (t21 ^ t22);
    t26 = (t20 | t23);
    t27 = *((unsigned int *)t8);
    t28 = *((unsigned int *)t25);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t33 = (t26 & t30);
    if (t33 != 0)
        goto LAB135;

LAB132:    if (t29 != 0)
        goto LAB134;

LAB133:    *((unsigned int *)t24) = 1;

LAB135:    memset(t10, 0, 8);
    t32 = (t24 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (~(t34));
    t36 = *((unsigned int *)t24);
    t42 = (t36 & t35);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB136;

LAB137:    if (*((unsigned int *)t32) != 0)
        goto LAB138;

LAB139:    t38 = (t10 + 4);
    t44 = *((unsigned int *)t10);
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB140;

LAB141:    t47 = *((unsigned int *)t10);
    t48 = (~(t47));
    t49 = *((unsigned int *)t38);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t38) > 0)
        goto LAB144;

LAB145:    if (*((unsigned int *)t10) > 0)
        goto LAB146;

LAB147:    memcpy(t9, t41, 8);

LAB148:    t54 = (t0 + 2904);
    xsi_vlogvar_assign_value(t54, t9, 0, 0, 1);
    goto LAB21;

LAB17:    xsi_set_current_line(78, ng0);

LAB149:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3064);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2424);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2744);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB21;

LAB25:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t24) = 1;
    goto LAB30;

LAB29:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB30;

LAB31:    t37 = (t0 + 2024U);
    t38 = *((char **)t37);
    t37 = ((char*)((ng4)));
    memset(t39, 0, 8);
    t40 = (t38 + 4);
    t41 = (t37 + 4);
    t42 = *((unsigned int *)t38);
    t43 = *((unsigned int *)t37);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB37;

LAB34:    if (t51 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t39) = 1;

LAB37:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t56) != 0)
        goto LAB40;

LAB41:    t64 = *((unsigned int *)t24);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t24 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t55) = 1;
    goto LAB41;

LAB40:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB41;

LAB42:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t24 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t24);
    t6 = (t81 & t80);
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t55);
    t85 = (t84 & t83);
    t86 = (~(t6));
    t87 = (~(t85));
    t88 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t88 & t86);
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    goto LAB44;

LAB45:    *((unsigned int *)t90) = 1;
    goto LAB48;

LAB47:    t97 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t97) = 1;
    goto LAB48;

LAB49:    t103 = (t0 + 2024U);
    t104 = *((char **)t103);
    t103 = ((char*)((ng5)));
    memset(t105, 0, 8);
    t106 = (t104 + 4);
    t107 = (t103 + 4);
    t108 = *((unsigned int *)t104);
    t109 = *((unsigned int *)t103);
    t110 = (t108 ^ t109);
    t111 = *((unsigned int *)t106);
    t112 = *((unsigned int *)t107);
    t113 = (t111 ^ t112);
    t114 = (t110 | t113);
    t115 = *((unsigned int *)t106);
    t116 = *((unsigned int *)t107);
    t117 = (t115 | t116);
    t118 = (~(t117));
    t119 = (t114 & t118);
    if (t119 != 0)
        goto LAB55;

LAB52:    if (t117 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t105) = 1;

LAB55:    memset(t121, 0, 8);
    t122 = (t105 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t105);
    t126 = (t125 & t124);
    t127 = (t126 & 1U);
    if (t127 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t122) != 0)
        goto LAB58;

LAB59:    t130 = *((unsigned int *)t90);
    t131 = *((unsigned int *)t121);
    t132 = (t130 | t131);
    *((unsigned int *)t129) = t132;
    t133 = (t90 + 4);
    t134 = (t121 + 4);
    t135 = (t129 + 4);
    t136 = *((unsigned int *)t133);
    t137 = *((unsigned int *)t134);
    t138 = (t136 | t137);
    *((unsigned int *)t135) = t138;
    t139 = *((unsigned int *)t135);
    t140 = (t139 != 0);
    if (t140 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB51;

LAB54:    t120 = (t105 + 4);
    *((unsigned int *)t105) = 1;
    *((unsigned int *)t120) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t121) = 1;
    goto LAB59;

LAB58:    t128 = (t121 + 4);
    *((unsigned int *)t121) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB59;

LAB60:    t141 = *((unsigned int *)t129);
    t142 = *((unsigned int *)t135);
    *((unsigned int *)t129) = (t141 | t142);
    t143 = (t90 + 4);
    t144 = (t121 + 4);
    t145 = *((unsigned int *)t143);
    t146 = (~(t145));
    t147 = *((unsigned int *)t90);
    t148 = (t147 & t146);
    t149 = *((unsigned int *)t144);
    t150 = (~(t149));
    t151 = *((unsigned int *)t121);
    t152 = (t151 & t150);
    t153 = (~(t148));
    t154 = (~(t152));
    t155 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t155 & t153);
    t156 = *((unsigned int *)t135);
    *((unsigned int *)t135) = (t156 & t154);
    goto LAB62;

LAB63:    *((unsigned int *)t10) = 1;
    goto LAB66;

LAB65:    t163 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t163) = 1;
    goto LAB66;

LAB67:    t168 = ((char*)((ng6)));
    goto LAB68;

LAB69:    t173 = ((char*)((ng1)));
    goto LAB70;

LAB71:    xsi_vlog_unsigned_bit_combine(t9, 2, t168, 2, t173, 2);
    goto LAB75;

LAB73:    memcpy(t9, t168, 8);
    goto LAB75;

LAB78:    *((unsigned int *)t10) = 1;
    goto LAB81;

LAB80:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB81;

LAB82:    t32 = ((char*)((ng1)));
    goto LAB83;

LAB84:    t37 = ((char*)((ng2)));
    goto LAB85;

LAB86:    xsi_vlog_unsigned_bit_combine(t9, 1, t32, 1, t37, 1);
    goto LAB90;

LAB88:    memcpy(t9, t32, 8);
    goto LAB90;

LAB91:    *((unsigned int *)t10) = 1;
    goto LAB94;

LAB93:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB94;

LAB95:    t31 = ((char*)((ng2)));
    goto LAB96;

LAB97:    t32 = ((char*)((ng1)));
    goto LAB98;

LAB99:    xsi_vlog_unsigned_bit_combine(t9, 1, t31, 1, t32, 1);
    goto LAB103;

LAB101:    memcpy(t9, t31, 8);
    goto LAB103;

LAB104:    *((unsigned int *)t10) = 1;
    goto LAB107;

LAB106:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB107;

LAB108:    t31 = ((char*)((ng1)));
    goto LAB109;

LAB110:    t32 = ((char*)((ng2)));
    goto LAB111;

LAB112:    xsi_vlog_unsigned_bit_combine(t9, 1, t31, 1, t32, 1);
    goto LAB116;

LAB114:    memcpy(t9, t31, 8);
    goto LAB116;

LAB117:    *((unsigned int *)t10) = 1;
    goto LAB120;

LAB119:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB120;

LAB121:    t31 = ((char*)((ng1)));
    goto LAB122;

LAB123:    t32 = ((char*)((ng2)));
    goto LAB124;

LAB125:    xsi_vlog_unsigned_bit_combine(t9, 1, t31, 1, t32, 1);
    goto LAB129;

LAB127:    memcpy(t9, t31, 8);
    goto LAB129;

LAB134:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB135;

LAB136:    *((unsigned int *)t10) = 1;
    goto LAB139;

LAB138:    t37 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB139;

LAB140:    t40 = ((char*)((ng2)));
    goto LAB141;

LAB142:    t41 = ((char*)((ng1)));
    goto LAB143;

LAB144:    xsi_vlog_unsigned_bit_combine(t9, 1, t40, 1, t41, 1);
    goto LAB148;

LAB146:    memcpy(t9, t40, 8);
    goto LAB148;

}


extern void work_m_16638702944007744279_2058220583_init()
{
	static char *pe[] = {(void *)Always_16_0};
	xsi_register_didat("work_m_16638702944007744279_2058220583", "isim/TB_risc_isim_beh.exe.sim/work/m_16638702944007744279_2058220583.didat");
	xsi_register_executes(pe);
}
