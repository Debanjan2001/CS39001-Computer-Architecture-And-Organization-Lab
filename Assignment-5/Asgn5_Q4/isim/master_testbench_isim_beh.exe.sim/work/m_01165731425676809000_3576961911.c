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
static const char *ng0 = "/home/ise/shared_xlnx/Asgn5_Q4/seqcomp.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {4U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {6U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {3U, 0U};



static void Always_24_0(char *t0)
{
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

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4952);
    *((int *)t2) = 1;
    t3 = (t0 + 4168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);

LAB5:    xsi_set_current_line(25, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 3064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(26, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3224);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

}

static void Always_32_1(char *t0)
{
    char t13[8];
    char t28[8];
    char t29[8];
    char t60[8];
    char t76[8];
    char t84[8];
    char t116[8];
    char t130[8];
    char t146[8];
    char t154[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    char *t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    char *t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    char *t168;
    char *t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    int t178;
    int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;

LAB0:    t1 = (t0 + 4384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 4968);
    *((int *)t2) = 1;
    t3 = (t0 + 4416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB32;

LAB29:    if (t18 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t13) = 1;

LAB32:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;

LAB52:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB153;

LAB150:    if (t18 != 0)
        goto LAB152;

LAB151:    *((unsigned int *)t13) = 1;

LAB153:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB154;

LAB155:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB160;

LAB157:    if (t18 != 0)
        goto LAB159;

LAB158:    *((unsigned int *)t13) = 1;

LAB160:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB161;

LAB162:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB167;

LAB164:    if (t18 != 0)
        goto LAB166;

LAB165:    *((unsigned int *)t13) = 1;

LAB167:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB168;

LAB169:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB170:
LAB163:
LAB156:
LAB55:
LAB35:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3064);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(36, ng0);
    t30 = (t0 + 2504U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t31 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t30) != 0)
        goto LAB18;

LAB19:    t38 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB20;

LAB21:    t43 = *((unsigned int *)t29);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t38) > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t29) > 0)
        goto LAB26;

LAB27:    memcpy(t28, t47, 8);

LAB28:    t48 = (t0 + 3064);
    xsi_vlogvar_assign_value(t48, t28, 0, 0, 2);
    goto LAB15;

LAB16:    *((unsigned int *)t29) = 1;
    goto LAB19;

LAB18:    t37 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB19;

LAB20:    t42 = ((char*)((ng3)));
    goto LAB21;

LAB22:    t47 = ((char*)((ng2)));
    goto LAB23;

LAB24:    xsi_vlog_unsigned_bit_combine(t28, 3, t42, 3, t47, 3);
    goto LAB28;

LAB26:    memcpy(t28, t42, 8);
    goto LAB28;

LAB31:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(38, ng0);
    t30 = (t0 + 2504U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t31 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t30) != 0)
        goto LAB38;

LAB39:    t38 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB40;

LAB41:    t43 = *((unsigned int *)t29);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t38) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t29) > 0)
        goto LAB46;

LAB47:    memcpy(t28, t47, 8);

LAB48:    t48 = (t0 + 3064);
    xsi_vlogvar_assign_value(t48, t28, 0, 0, 2);
    goto LAB35;

LAB36:    *((unsigned int *)t29) = 1;
    goto LAB39;

LAB38:    t37 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB39;

LAB40:    t42 = ((char*)((ng5)));
    goto LAB41;

LAB42:    t47 = ((char*)((ng4)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t28, 3, t42, 3, t47, 3);
    goto LAB48;

LAB46:    memcpy(t28, t42, 8);
    goto LAB48;

LAB51:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(39, ng0);

LAB56:    xsi_set_current_line(40, ng0);
    t30 = (t0 + 1864U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng6)));
    memset(t28, 0, 8);
    t37 = (t31 + 4);
    t38 = (t30 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t30);
    t34 = (t32 ^ t33);
    t35 = *((unsigned int *)t37);
    t36 = *((unsigned int *)t38);
    t39 = (t35 ^ t36);
    t40 = (t34 | t39);
    t41 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t41 | t43);
    t45 = (~(t44));
    t46 = (t40 & t45);
    if (t46 != 0)
        goto LAB60;

LAB57:    if (t44 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t28) = 1;

LAB60:    memset(t29, 0, 8);
    t47 = (t28 + 4);
    t49 = *((unsigned int *)t47);
    t50 = (~(t49));
    t51 = *((unsigned int *)t28);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t47) != 0)
        goto LAB63;

LAB64:    t54 = (t29 + 4);
    t55 = *((unsigned int *)t29);
    t56 = *((unsigned int *)t54);
    t57 = (t55 || t56);
    if (t57 > 0)
        goto LAB65;

LAB66:    memcpy(t84, t29, 8);

LAB67:    memset(t116, 0, 8);
    t117 = (t84 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t84);
    t121 = (t120 & t119);
    t122 = (t121 & 1U);
    if (t122 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t117) != 0)
        goto LAB81;

LAB82:    t124 = (t116 + 4);
    t125 = *((unsigned int *)t116);
    t126 = *((unsigned int *)t124);
    t127 = (t125 || t126);
    if (t127 > 0)
        goto LAB83;

LAB84:    memcpy(t154, t116, 8);

LAB85:    t186 = (t154 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t154);
    t190 = (t189 & t188);
    t191 = (t190 != 0);
    if (t191 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1864U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB103;

LAB100:    if (t18 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t13) = 1;

LAB103:    memset(t28, 0, 8);
    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t12) != 0)
        goto LAB106;

LAB107:    t22 = (t28 + 4);
    t32 = *((unsigned int *)t28);
    t33 = *((unsigned int *)t22);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB108;

LAB109:    memcpy(t76, t28, 8);

LAB110:    memset(t84, 0, 8);
    t75 = (t76 + 4);
    t95 = *((unsigned int *)t75);
    t96 = (~(t95));
    t97 = *((unsigned int *)t76);
    t100 = (t97 & t96);
    t101 = (t100 & 1U);
    if (t101 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t75) != 0)
        goto LAB124;

LAB125:    t83 = (t84 + 4);
    t102 = *((unsigned int *)t84);
    t103 = *((unsigned int *)t83);
    t104 = (t102 || t103);
    if (t104 > 0)
        goto LAB126;

LAB127:    memcpy(t146, t84, 8);

LAB128:    t145 = (t146 + 4);
    t165 = *((unsigned int *)t145);
    t166 = (~(t165));
    t167 = *((unsigned int *)t146);
    t170 = (t167 & t166);
    t171 = (t170 != 0);
    if (t171 > 0)
        goto LAB140;

LAB141:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB146;

LAB143:    if (t18 != 0)
        goto LAB145;

LAB144:    *((unsigned int *)t13) = 1;

LAB146:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB147;

LAB148:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB149:
LAB142:
LAB99:    goto LAB55;

LAB59:    t42 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t29) = 1;
    goto LAB64;

LAB63:    t48 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB64;

LAB65:    t58 = (t0 + 2024U);
    t59 = *((char **)t58);
    t58 = ((char*)((ng7)));
    memset(t60, 0, 8);
    t61 = (t59 + 4);
    t62 = (t58 + 4);
    t63 = *((unsigned int *)t59);
    t64 = *((unsigned int *)t58);
    t65 = (t63 ^ t64);
    t66 = *((unsigned int *)t61);
    t67 = *((unsigned int *)t62);
    t68 = (t66 ^ t67);
    t69 = (t65 | t68);
    t70 = *((unsigned int *)t61);
    t71 = *((unsigned int *)t62);
    t72 = (t70 | t71);
    t73 = (~(t72));
    t74 = (t69 & t73);
    if (t74 != 0)
        goto LAB71;

LAB68:    if (t72 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t60) = 1;

LAB71:    memset(t76, 0, 8);
    t77 = (t60 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (t80 & t79);
    t82 = (t81 & 1U);
    if (t82 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t77) != 0)
        goto LAB74;

LAB75:    t85 = *((unsigned int *)t29);
    t86 = *((unsigned int *)t76);
    t87 = (t85 & t86);
    *((unsigned int *)t84) = t87;
    t88 = (t29 + 4);
    t89 = (t76 + 4);
    t90 = (t84 + 4);
    t91 = *((unsigned int *)t88);
    t92 = *((unsigned int *)t89);
    t93 = (t91 | t92);
    *((unsigned int *)t90) = t93;
    t94 = *((unsigned int *)t90);
    t95 = (t94 != 0);
    if (t95 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB67;

LAB70:    t75 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t76) = 1;
    goto LAB75;

LAB74:    t83 = (t76 + 4);
    *((unsigned int *)t76) = 1;
    *((unsigned int *)t83) = 1;
    goto LAB75;

LAB76:    t96 = *((unsigned int *)t84);
    t97 = *((unsigned int *)t90);
    *((unsigned int *)t84) = (t96 | t97);
    t98 = (t29 + 4);
    t99 = (t76 + 4);
    t100 = *((unsigned int *)t29);
    t101 = (~(t100));
    t102 = *((unsigned int *)t98);
    t103 = (~(t102));
    t104 = *((unsigned int *)t76);
    t105 = (~(t104));
    t106 = *((unsigned int *)t99);
    t107 = (~(t106));
    t108 = (t101 & t103);
    t109 = (t105 & t107);
    t110 = (~(t108));
    t111 = (~(t109));
    t112 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t112 & t110);
    t113 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t113 & t111);
    t114 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t114 & t110);
    t115 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t115 & t111);
    goto LAB78;

LAB79:    *((unsigned int *)t116) = 1;
    goto LAB82;

LAB81:    t123 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB82;

LAB83:    t128 = (t0 + 2504U);
    t129 = *((char **)t128);
    t128 = ((char*)((ng7)));
    memset(t130, 0, 8);
    t131 = (t129 + 4);
    t132 = (t128 + 4);
    t133 = *((unsigned int *)t129);
    t134 = *((unsigned int *)t128);
    t135 = (t133 ^ t134);
    t136 = *((unsigned int *)t131);
    t137 = *((unsigned int *)t132);
    t138 = (t136 ^ t137);
    t139 = (t135 | t138);
    t140 = *((unsigned int *)t131);
    t141 = *((unsigned int *)t132);
    t142 = (t140 | t141);
    t143 = (~(t142));
    t144 = (t139 & t143);
    if (t144 != 0)
        goto LAB89;

LAB86:    if (t142 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t130) = 1;

LAB89:    memset(t146, 0, 8);
    t147 = (t130 + 4);
    t148 = *((unsigned int *)t147);
    t149 = (~(t148));
    t150 = *((unsigned int *)t130);
    t151 = (t150 & t149);
    t152 = (t151 & 1U);
    if (t152 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t147) != 0)
        goto LAB92;

LAB93:    t155 = *((unsigned int *)t116);
    t156 = *((unsigned int *)t146);
    t157 = (t155 & t156);
    *((unsigned int *)t154) = t157;
    t158 = (t116 + 4);
    t159 = (t146 + 4);
    t160 = (t154 + 4);
    t161 = *((unsigned int *)t158);
    t162 = *((unsigned int *)t159);
    t163 = (t161 | t162);
    *((unsigned int *)t160) = t163;
    t164 = *((unsigned int *)t160);
    t165 = (t164 != 0);
    if (t165 == 1)
        goto LAB94;

LAB95:
LAB96:    goto LAB85;

LAB88:    t145 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t145) = 1;
    goto LAB89;

LAB90:    *((unsigned int *)t146) = 1;
    goto LAB93;

LAB92:    t153 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t153) = 1;
    goto LAB93;

LAB94:    t166 = *((unsigned int *)t154);
    t167 = *((unsigned int *)t160);
    *((unsigned int *)t154) = (t166 | t167);
    t168 = (t116 + 4);
    t169 = (t146 + 4);
    t170 = *((unsigned int *)t116);
    t171 = (~(t170));
    t172 = *((unsigned int *)t168);
    t173 = (~(t172));
    t174 = *((unsigned int *)t146);
    t175 = (~(t174));
    t176 = *((unsigned int *)t169);
    t177 = (~(t176));
    t178 = (t171 & t173);
    t179 = (t175 & t177);
    t180 = (~(t178));
    t181 = (~(t179));
    t182 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t182 & t180);
    t183 = *((unsigned int *)t160);
    *((unsigned int *)t160) = (t183 & t181);
    t184 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t184 & t180);
    t185 = *((unsigned int *)t154);
    *((unsigned int *)t154) = (t185 & t181);
    goto LAB96;

LAB97:    xsi_set_current_line(41, ng0);
    t192 = ((char*)((ng4)));
    t193 = (t0 + 3064);
    xsi_vlogvar_assign_value(t193, t192, 0, 0, 2);
    goto LAB99;

LAB102:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB103;

LAB104:    *((unsigned int *)t28) = 1;
    goto LAB107;

LAB106:    t21 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB107;

LAB108:    t30 = (t0 + 2024U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng6)));
    memset(t29, 0, 8);
    t37 = (t31 + 4);
    t38 = (t30 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t30);
    t39 = (t35 ^ t36);
    t40 = *((unsigned int *)t37);
    t41 = *((unsigned int *)t38);
    t43 = (t40 ^ t41);
    t44 = (t39 | t43);
    t45 = *((unsigned int *)t37);
    t46 = *((unsigned int *)t38);
    t49 = (t45 | t46);
    t50 = (~(t49));
    t51 = (t44 & t50);
    if (t51 != 0)
        goto LAB114;

LAB111:    if (t49 != 0)
        goto LAB113;

LAB112:    *((unsigned int *)t29) = 1;

LAB114:    memset(t60, 0, 8);
    t47 = (t29 + 4);
    t52 = *((unsigned int *)t47);
    t53 = (~(t52));
    t55 = *((unsigned int *)t29);
    t56 = (t55 & t53);
    t57 = (t56 & 1U);
    if (t57 != 0)
        goto LAB115;

LAB116:    if (*((unsigned int *)t47) != 0)
        goto LAB117;

LAB118:    t63 = *((unsigned int *)t28);
    t64 = *((unsigned int *)t60);
    t65 = (t63 & t64);
    *((unsigned int *)t76) = t65;
    t54 = (t28 + 4);
    t58 = (t60 + 4);
    t59 = (t76 + 4);
    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    *((unsigned int *)t59) = t68;
    t69 = *((unsigned int *)t59);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB119;

LAB120:
LAB121:    goto LAB110;

LAB113:    t42 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB114;

LAB115:    *((unsigned int *)t60) = 1;
    goto LAB118;

LAB117:    t48 = (t60 + 4);
    *((unsigned int *)t60) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB118;

LAB119:    t71 = *((unsigned int *)t76);
    t72 = *((unsigned int *)t59);
    *((unsigned int *)t76) = (t71 | t72);
    t61 = (t28 + 4);
    t62 = (t60 + 4);
    t73 = *((unsigned int *)t28);
    t74 = (~(t73));
    t78 = *((unsigned int *)t61);
    t79 = (~(t78));
    t80 = *((unsigned int *)t60);
    t81 = (~(t80));
    t82 = *((unsigned int *)t62);
    t85 = (~(t82));
    t108 = (t74 & t79);
    t109 = (t81 & t85);
    t86 = (~(t108));
    t87 = (~(t109));
    t91 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t91 & t86);
    t92 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t92 & t87);
    t93 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t93 & t86);
    t94 = *((unsigned int *)t76);
    *((unsigned int *)t76) = (t94 & t87);
    goto LAB121;

LAB122:    *((unsigned int *)t84) = 1;
    goto LAB125;

LAB124:    t77 = (t84 + 4);
    *((unsigned int *)t84) = 1;
    *((unsigned int *)t77) = 1;
    goto LAB125;

LAB126:    t88 = (t0 + 2504U);
    t89 = *((char **)t88);
    t88 = ((char*)((ng7)));
    memset(t116, 0, 8);
    t90 = (t89 + 4);
    t98 = (t88 + 4);
    t105 = *((unsigned int *)t89);
    t106 = *((unsigned int *)t88);
    t107 = (t105 ^ t106);
    t110 = *((unsigned int *)t90);
    t111 = *((unsigned int *)t98);
    t112 = (t110 ^ t111);
    t113 = (t107 | t112);
    t114 = *((unsigned int *)t90);
    t115 = *((unsigned int *)t98);
    t118 = (t114 | t115);
    t119 = (~(t118));
    t120 = (t113 & t119);
    if (t120 != 0)
        goto LAB132;

LAB129:    if (t118 != 0)
        goto LAB131;

LAB130:    *((unsigned int *)t116) = 1;

LAB132:    memset(t130, 0, 8);
    t117 = (t116 + 4);
    t121 = *((unsigned int *)t117);
    t122 = (~(t121));
    t125 = *((unsigned int *)t116);
    t126 = (t125 & t122);
    t127 = (t126 & 1U);
    if (t127 != 0)
        goto LAB133;

LAB134:    if (*((unsigned int *)t117) != 0)
        goto LAB135;

LAB136:    t133 = *((unsigned int *)t84);
    t134 = *((unsigned int *)t130);
    t135 = (t133 & t134);
    *((unsigned int *)t146) = t135;
    t124 = (t84 + 4);
    t128 = (t130 + 4);
    t129 = (t146 + 4);
    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t128);
    t138 = (t136 | t137);
    *((unsigned int *)t129) = t138;
    t139 = *((unsigned int *)t129);
    t140 = (t139 != 0);
    if (t140 == 1)
        goto LAB137;

LAB138:
LAB139:    goto LAB128;

LAB131:    t99 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t99) = 1;
    goto LAB132;

LAB133:    *((unsigned int *)t130) = 1;
    goto LAB136;

LAB135:    t123 = (t130 + 4);
    *((unsigned int *)t130) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB136;

LAB137:    t141 = *((unsigned int *)t146);
    t142 = *((unsigned int *)t129);
    *((unsigned int *)t146) = (t141 | t142);
    t131 = (t84 + 4);
    t132 = (t130 + 4);
    t143 = *((unsigned int *)t84);
    t144 = (~(t143));
    t148 = *((unsigned int *)t131);
    t149 = (~(t148));
    t150 = *((unsigned int *)t130);
    t151 = (~(t150));
    t152 = *((unsigned int *)t132);
    t155 = (~(t152));
    t178 = (t144 & t149);
    t179 = (t151 & t155);
    t156 = (~(t178));
    t157 = (~(t179));
    t161 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t161 & t156);
    t162 = *((unsigned int *)t129);
    *((unsigned int *)t129) = (t162 & t157);
    t163 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t163 & t156);
    t164 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t164 & t157);
    goto LAB139;

LAB140:    xsi_set_current_line(43, ng0);
    t147 = ((char*)((ng2)));
    t153 = (t0 + 3064);
    xsi_vlogvar_assign_value(t153, t147, 0, 0, 2);
    goto LAB142;

LAB145:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB146;

LAB147:    xsi_set_current_line(45, ng0);
    t21 = ((char*)((ng8)));
    t22 = (t0 + 3064);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 2);
    goto LAB149;

LAB152:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB153;

LAB154:    xsi_set_current_line(50, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 3064);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    goto LAB156;

LAB159:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB160;

LAB161:    xsi_set_current_line(52, ng0);
    t30 = ((char*)((ng8)));
    t31 = (t0 + 3064);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    goto LAB163;

LAB166:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB167;

LAB168:    xsi_set_current_line(54, ng0);
    t30 = ((char*)((ng5)));
    t31 = (t0 + 3064);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 2);
    goto LAB170;

}

static void Always_60_2(char *t0)
{
    char t13[8];
    char t28[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 4632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4984);
    *((int *)t2) = 1;
    t3 = (t0 + 4664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2184U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB32;

LAB29:    if (t18 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t13) = 1;

LAB32:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;

LAB52:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB72;

LAB69:    if (t18 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t13) = 1;

LAB72:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB73;

LAB74:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB79;

LAB76:    if (t18 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t13) = 1;

LAB79:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB80;

LAB81:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB86;

LAB83:    if (t18 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t13) = 1;

LAB86:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB89:
LAB82:
LAB75:
LAB55:
LAB35:
LAB15:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2904);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 3);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(64, ng0);
    t30 = (t0 + 2504U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t31 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t30) != 0)
        goto LAB18;

LAB19:    t38 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB20;

LAB21:    t43 = *((unsigned int *)t29);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t38) > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t29) > 0)
        goto LAB26;

LAB27:    memcpy(t28, t47, 8);

LAB28:    t48 = (t0 + 2904);
    xsi_vlogvar_assign_value(t48, t28, 0, 0, 3);
    goto LAB15;

LAB16:    *((unsigned int *)t29) = 1;
    goto LAB19;

LAB18:    t37 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB19;

LAB20:    t42 = ((char*)((ng3)));
    goto LAB21;

LAB22:    t47 = ((char*)((ng1)));
    goto LAB23;

LAB24:    xsi_vlog_unsigned_bit_combine(t28, 3, t42, 3, t47, 3);
    goto LAB28;

LAB26:    memcpy(t28, t42, 8);
    goto LAB28;

LAB31:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(66, ng0);
    t30 = (t0 + 2504U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t31 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t30) != 0)
        goto LAB38;

LAB39:    t38 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB40;

LAB41:    t43 = *((unsigned int *)t29);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t38) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t29) > 0)
        goto LAB46;

LAB47:    memcpy(t28, t47, 8);

LAB48:    t48 = (t0 + 2904);
    xsi_vlogvar_assign_value(t48, t28, 0, 0, 3);
    goto LAB35;

LAB36:    *((unsigned int *)t29) = 1;
    goto LAB39;

LAB38:    t37 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB39;

LAB40:    t42 = ((char*)((ng2)));
    goto LAB41;

LAB42:    t47 = ((char*)((ng1)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t28, 3, t42, 3, t47, 3);
    goto LAB48;

LAB46:    memcpy(t28, t42, 8);
    goto LAB48;

LAB51:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(68, ng0);
    t30 = (t0 + 2504U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t30 = (t31 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (~(t32));
    t34 = *((unsigned int *)t31);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t30) != 0)
        goto LAB58;

LAB59:    t38 = (t29 + 4);
    t39 = *((unsigned int *)t29);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB60;

LAB61:    t43 = *((unsigned int *)t29);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t38) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t29) > 0)
        goto LAB66;

LAB67:    memcpy(t28, t47, 8);

LAB68:    t48 = (t0 + 2904);
    xsi_vlogvar_assign_value(t48, t28, 0, 0, 3);
    goto LAB55;

LAB56:    *((unsigned int *)t29) = 1;
    goto LAB59;

LAB58:    t37 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB59;

LAB60:    t42 = ((char*)((ng4)));
    goto LAB61;

LAB62:    t47 = ((char*)((ng1)));
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t28, 3, t42, 3, t47, 3);
    goto LAB68;

LAB66:    memcpy(t28, t42, 8);
    goto LAB68;

LAB71:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(70, ng0);
    t30 = ((char*)((ng4)));
    t31 = (t0 + 2904);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB75;

LAB78:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB79;

LAB80:    xsi_set_current_line(72, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t0 + 2904);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB82;

LAB85:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB86;

LAB87:    xsi_set_current_line(74, ng0);
    t30 = ((char*)((ng2)));
    t31 = (t0 + 2904);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 3);
    goto LAB89;

}


extern void work_m_01165731425676809000_3576961911_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Always_32_1,(void *)Always_60_2};
	xsi_register_didat("work_m_01165731425676809000_3576961911", "isim/master_testbench_isim_beh.exe.sim/work/m_01165731425676809000_3576961911.didat");
	xsi_register_executes(pe);
}
