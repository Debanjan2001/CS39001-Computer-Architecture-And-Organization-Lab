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
static int ng0[] = {0, 0};
static int ng1[] = {1095521093, 0, 70, 0};
static unsigned int ng2[] = {1U, 1U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static int TChk_111_24_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 6072U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_112_25_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 6072U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_113_26_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 5912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_114_27_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 5912U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_115_28_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 6872U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_116_29_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 6872U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_117_30_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 7032U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_118_31_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 7032U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_120_32_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 6232U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_121_33_tstmp(char *t1)
{
    char t4[8];
    int t0;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t2 = (t1 + 6392U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng0)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB3;

LAB2:    if (t16 != 0)
        goto LAB4;

LAB5:    t20 = (t4 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t4);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    t0 = t25;

LAB1:    return t0;
LAB3:    *((unsigned int *)t4) = 1;
    goto LAB5;

LAB4:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB5;

}

static int TChk_124_35_tchk(char *t1)
{
    int t0;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;

LAB0:    t2 = (t1 + 1752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    t0 = t8;

LAB1:    return t0;
}

static int TChk_125_36_tchk(char *t1)
{
    int t0;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;

LAB0:    t2 = (t1 + 1752U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t4 = *((unsigned int *)t2);
    t5 = (~(t4));
    t6 = *((unsigned int *)t3);
    t7 = (t6 & t5);
    t8 = (t7 != 0);
    t0 = t8;

LAB1:    return t0;
}

static void NetDecl_43_0(char *t0)
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

LAB0:    t1 = (t0 + 9144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 19576);
    t3 = *((char **)t2);
    t4 = ((((char*)(t3))) + 40U);
    t5 = *((char **)t4);
    t4 = (t0 + 15616);
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
    t18 = (t0 + 15168);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Gate_58_1(char *t0)
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
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 9392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 7912);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 15680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 4);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) == 1)
        goto LAB4;

LAB5:    t12 = *((unsigned int *)t4);
    t13 = (t12 & 1);
    *((unsigned int *)t9) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 & 1);
    *((unsigned int *)t10) = t15;

LAB6:    t16 = (t0 + 15680);
    xsi_driver_vfirst_trans(t16, 0, 0);
    t17 = (t0 + 15184);
    *((int *)t17) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t9) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB6;

}

static void Gate_60_2(char *t0)
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

LAB0:    t1 = (t0 + 9640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 2872U);
    t3 = *((char **)t2);
    t2 = (t0 + 15744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 15744);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 15200);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_61_3(char *t0)
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

LAB0:    t1 = (t0 + 9888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    t2 = (t0 + 15808);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 15808);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 15216);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_62_4(char *t0)
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

LAB0:    t1 = (t0 + 10136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3832U);
    t3 = *((char **)t2);
    t2 = (t0 + 15872);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 15872);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 15232);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_63_5(char *t0)
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

LAB0:    t1 = (t0 + 10384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3992U);
    t3 = *((char **)t2);
    t2 = (t0 + 15936);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 15936);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 15248);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_64_6(char *t0)
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

LAB0:    t1 = (t0 + 10632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3512U);
    t3 = *((char **)t2);
    t2 = (t0 + 16000);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 16000);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 15264);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_65_7(char *t0)
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

LAB0:    t1 = (t0 + 10880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3672U);
    t3 = *((char **)t2);
    t2 = (t0 + 16064);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_notGate(t7, t3);
    t8 = (t0 + 16064);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 15280);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_66_8(char *t0)
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

LAB0:    t1 = (t0 + 11128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 3352U);
    t3 = *((char **)t2);
    t2 = (t0 + 1592U);
    t4 = *((char **)t2);
    t2 = (t0 + 16128);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_XorGate(t8, 2, t3, t4);
    t9 = (t0 + 16128);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 15296);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Gate_68_9(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 11376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4152U);
    t3 = *((char **)t2);
    t2 = (t0 + 4472U);
    t4 = *((char **)t2);
    t2 = (t0 + 4632U);
    t5 = *((char **)t2);
    t2 = (t0 + 4792U);
    t6 = *((char **)t2);
    t2 = (t0 + 4952U);
    t7 = *((char **)t2);
    t2 = (t0 + 3032U);
    t8 = *((char **)t2);
    t2 = (t0 + 16192);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_AndGate(t12, 6, t3, t4, t5, t6, t7, t8);
    t13 = (t0 + 16192);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t14 = (t0 + 15312);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Gate_69_10(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 11624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4152U);
    t3 = *((char **)t2);
    t2 = (t0 + 4472U);
    t4 = *((char **)t2);
    t2 = (t0 + 4632U);
    t5 = *((char **)t2);
    t2 = (t0 + 4792U);
    t6 = *((char **)t2);
    t2 = (t0 + 4952U);
    t7 = *((char **)t2);
    t2 = (t0 + 5112U);
    t8 = *((char **)t2);
    t2 = (t0 + 16256);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    xsi_vlog_AndGate(t12, 6, t3, t4, t5, t6, t7, t8);
    t13 = (t0 + 16256);
    xsi_driver_vfirst_trans(t13, 0, 0);
    t14 = (t0 + 15328);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Gate_70_11(char *t0)
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

LAB0:    t1 = (t0 + 11872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4152U);
    t3 = *((char **)t2);
    t2 = (t0 + 16320);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    xsi_vlog_AndGate(t7, 1, t3);
    t8 = (t0 + 16320);
    xsi_driver_vfirst_trans(t8, 0, 0);
    t9 = (t0 + 15344);
    *((int *)t9) = 1;

LAB1:    return;
}

static void Gate_71_12(char *t0)
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

LAB0:    t1 = (t0 + 12120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4152U);
    t3 = *((char **)t2);
    t2 = (t0 + 4472U);
    t4 = *((char **)t2);
    t2 = (t0 + 16384);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_AndGate(t8, 2, t3, t4);
    t9 = (t0 + 16384);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 15360);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Gate_72_13(char *t0)
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
    char *t11;

LAB0:    t1 = (t0 + 12368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4152U);
    t3 = *((char **)t2);
    t2 = (t0 + 4472U);
    t4 = *((char **)t2);
    t2 = (t0 + 4632U);
    t5 = *((char **)t2);
    t2 = (t0 + 16448);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_AndGate(t9, 3, t3, t4, t5);
    t10 = (t0 + 16448);
    xsi_driver_vfirst_trans(t10, 0, 0);
    t11 = (t0 + 15376);
    *((int *)t11) = 1;

LAB1:    return;
}

static void Gate_73_14(char *t0)
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 12616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 4152U);
    t3 = *((char **)t2);
    t2 = (t0 + 4472U);
    t4 = *((char **)t2);
    t2 = (t0 + 4632U);
    t5 = *((char **)t2);
    t2 = (t0 + 4792U);
    t6 = *((char **)t2);
    t2 = (t0 + 16512);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_AndGate(t10, 4, t3, t4, t5, t6);
    t11 = (t0 + 16512);
    xsi_driver_vfirst_trans(t11, 0, 0);
    t12 = (t0 + 15392);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Cont_75_15(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;

LAB0:    t1 = (t0 + 12864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 744);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 40, t5, 32, t2, 40);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t25, 8);

LAB16:    t26 = (t0 + 16576);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memset(t30, 0, 8);
    t31 = 1U;
    t32 = t31;
    t33 = (t3 + 4);
    t34 = *((unsigned int *)t3);
    t31 = (t31 & t34);
    t35 = *((unsigned int *)t33);
    t32 = (t32 & t35);
    t36 = (t30 + 4);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t37 | t31);
    t38 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t38 | t32);
    xsi_driver_vfirst_trans(t26, 0, 0);
    t39 = (t0 + 15408);
    *((int *)t39) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng2)));
    goto LAB9;

LAB10:    t23 = (t0 + 7752);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t25, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_76_16(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 13112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 40, t5, 32, t2, 40);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 16640);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 15424);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t23 = (t0 + 5432U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_77_17(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 13360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 40, t5, 32, t2, 40);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 16704);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 15440);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t23 = (t0 + 5272U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_78_18(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 13608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 40, t5, 32, t2, 40);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 16768);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 15456);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t23 = (t0 + 5592U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_79_19(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 13856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 40, t5, 32, t2, 40);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 16832);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 15472);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t23 = (t0 + 5752U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_80_20(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 14104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 40, t5, 32, t2, 40);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 16896);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 15488);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t23 = (t0 + 6552U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Cont_81_21(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[16];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;

LAB0:    t1 = (t0 + 14352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 880);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlog_unsigned_equal(t6, 40, t5, 32, t2, 40);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t20 || t21);
    if (t22 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t24, 8);

LAB16:    t23 = (t0 + 16960);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memset(t28, 0, 8);
    t29 = 1U;
    t30 = t29;
    t31 = (t3 + 4);
    t32 = *((unsigned int *)t3);
    t29 = (t29 & t32);
    t33 = *((unsigned int *)t31);
    t30 = (t30 & t33);
    t34 = (t28 + 4);
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 | t29);
    t36 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t36 | t30);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t37 = (t0 + 15504);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = ((char*)((ng3)));
    goto LAB9;

LAB10:    t23 = (t0 + 6712U);
    t24 = *((char **)t23);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 1, t18, 1, t24, 1);
    goto LAB16;

LAB14:    memcpy(t3, t18, 8);
    goto LAB16;

}

static void Always_83_22(char *t0)
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 14600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 15520);
    *((int *)t2) = 1;
    t3 = (t0 + 14632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:
LAB5:    t4 = (t0 + 2872U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB14:    t2 = (t0 + 3992U);
    t3 = *((char **)t2);
    t2 = (t0 + 8232);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    t2 = (t0 + 3832U);
    t3 = *((char **)t2);
    t2 = (t0 + 8072);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB8:    goto LAB2;

LAB6:    t11 = (t0 + 472);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB9;

LAB10:
LAB13:    t2 = ((char*)((ng4)));
    t3 = (t0 + 8072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 8232);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB11:    goto LAB8;

LAB9:
LAB12:    t18 = ((char*)((ng4)));
    t19 = (t0 + 8232);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 1);
    t2 = ((char*)((ng0)));
    t3 = (t0 + 8072);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB11;

}

static void Always_99_23(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 14848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 15536);
    *((int *)t2) = 1;
    t3 = (t0 + 14880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 7192U);
    t5 = *((char **)t4);
    t4 = (t0 + 7912);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 1);
    goto LAB2;

}


extern void simprims_ver_m_08244894845248834502_0076253249_2204564745_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2204564745", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2204564745.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1592796300_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1592796300", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1592796300.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3089526459_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3089526459", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3089526459.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3310708963_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3310708963", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3310708963.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2768887208_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2768887208", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2768887208.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0678495208_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0678495208", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0678495208.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0695137916_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0695137916", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0695137916.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4245930030_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4245930030", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4245930030.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4097924097_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4097924097", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4097924097.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0311891510_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0311891510", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0311891510.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2942139128_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2942139128", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2942139128.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1925948285_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1925948285", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1925948285.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3526261920_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3526261920", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3526261920.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1877217390_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1877217390", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1877217390.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3636701192_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3636701192", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3636701192.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2666544610_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2666544610", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2666544610.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2212466417_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2212466417", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2212466417.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1581864820_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1581864820", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1581864820.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2033812033_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2033812033", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2033812033.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2318688550_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2318688550", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2318688550.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2814669535_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2814669535", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2814669535.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0437132817_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0437132817", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0437132817.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3348678548_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3348678548", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3348678548.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3136012748_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3136012748", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3136012748.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1736251465_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1736251465", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1736251465.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3669456007_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3669456007", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3669456007.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1013006000_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1013006000", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1013006000.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1091713256_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1091713256", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1091713256.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2625954157_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2625954157", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2625954157.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3153343576_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3153343576", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3153343576.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1717759453_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1717759453", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1717759453.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0231504298_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0231504298", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0231504298.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2953188708_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2953188708", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2953188708.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3447001916_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3447001916", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3447001916.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1891598322_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1891598322", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1891598322.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2764196256_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2764196256", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2764196256.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1879444490_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1879444490", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1879444490.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3452723396_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3452723396", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3452723396.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4136432502_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4136432502", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4136432502.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0723135219_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0723135219", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0723135219.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1262919608_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1262919608", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1262919608.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2165449094_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2165449094", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2165449094.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3780023501_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3780023501", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3780023501.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3340874860_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3340874860", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3340874860.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2809987367_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2809987367", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2809987367.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3658352511_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3658352511", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3658352511.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1740925873_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1740925873", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1740925873.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3015269859_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3015269859", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3015269859.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3282378518_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3282378518", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3282378518.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2121233368_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2121233368", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2121233368.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2751048285_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2751048285", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2751048285.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3733629957_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3733629957", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3733629957.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3571321685_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3571321685", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3571321685.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3028467230_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3028467230", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3028467230.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3388061766_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3388061766", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3388061766.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3371060690_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3371060690", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3371060690.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0360223831_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0360223831", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0360223831.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1206013725_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1206013725", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1206013725.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3876032704_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3876032704", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3876032704.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0982600005_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0982600005", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0982600005.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1352227678_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1352227678", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1352227678.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1387678986_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1387678986", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1387678986.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0801459026_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0801459026", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0801459026.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1171085641_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1171085641", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1171085641.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0875093628_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0875093628", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0875093628.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0351097796_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0351097796", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0351097796.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1897986308_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1897986308", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1897986308.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3962509426_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3962509426", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3962509426.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2421046697_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2421046697", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2421046697.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0222420191_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0222420191", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0222420191.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2810941593_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2810941593", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2810941593.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3689592130_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3689592130", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3689592130.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2665648698_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2665648698", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2665648698.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0065893196_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0065893196", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0065893196.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0932839848_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0932839848", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0932839848.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2861949150_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2861949150", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2861949150.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3606365445_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3606365445", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3606365445.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0775327411_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0775327411", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0775327411.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3006885829_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3006885829", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3006885829.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4130425021_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4130425021", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4130425021.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2482823805_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2482823805", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2482823805.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0250807051_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0250807051", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0250807051.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1163365344_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1163365344", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1163365344.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2755219277_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2755219277", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2755219277.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0435364739_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0435364739", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0435364739.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2084473155_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2084473155", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2084473155.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3778111541_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3778111541", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3778111541.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2639285742_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2639285742", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2639285742.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4114946382_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4114946382", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4114946382.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1749743672_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1749743672", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1749743672.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0226972408_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0226972408", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0226972408.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2424877966_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2424877966", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2424877966.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3974731349_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3974731349", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3974731349.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2975800757_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2975800757", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2975800757.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4226397917_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4226397917", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4226397917.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1726371755_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1726371755", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1726371755.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2273874694_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2273874694", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2273874694.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1649017628_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1649017628", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1649017628.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2200225713_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2200225713", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2200225713.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2374527010_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2374527010", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2374527010.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3440464081_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3440464081", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3440464081.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1424712090_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1424712090", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1424712090.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0824626010_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0824626010", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0824626010.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1643699400_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1643699400", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1643699400.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0070612488_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0070612488", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0070612488.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1560330720_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1560330720", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1560330720.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0560063547_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0560063547", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0560063547.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3161326925_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3161326925", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3161326925.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3651383181_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3651383181", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3651383181.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0801983400_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0801983400", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0801983400.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2999102174_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2999102174", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2999102174.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0912377011_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0912377011", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0912377011.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2876122565_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2876122565", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2876122565.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3608084510_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3608084510", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3608084510.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3385209005_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3385209005", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3385209005.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2133978235_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2133978235", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2133978235.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1137307987_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1137307987", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1137307987.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2805344885_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2805344885", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2805344885.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0768824181_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0768824181", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0768824181.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1370650286_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1370650286", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1370650286.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3195018640_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3195018640", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3195018640.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3819993669_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3819993669", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3819993669.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2256392325_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2256392325", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2256392325.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0460468723_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0460468723", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0460468723.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4196201822_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4196201822", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4196201822.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2353908752_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2353908752", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2353908752.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2440949773_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2440949773", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2440949773.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0208802171_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0208802171", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0208802171.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1774173115_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1774173115", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1774173115.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4105198285_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4105198285", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4105198285.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0366911072_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0366911072", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0366911072.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2963955254_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2963955254", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2963955254.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2623766602_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2623766602", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2623766602.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0023879996_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0023879996", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0023879996.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1688325116_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1688325116", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1688325116.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2244939601_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2244939601", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2244939601.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3164999154_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3164999154", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3164999154.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0939877279_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0939877279", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0939877279.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2768929513_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2768929513", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2768929513.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4004383234_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4004383234", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4004383234.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2338562242_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2338562242", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2338562242.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1779262575_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1779262575", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1779262575.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4144137497_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4144137497", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4144137497.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1399088844_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1399088844", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1399088844.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3620145313_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3620145313", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3620145313.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0312054153_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0312054153", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0312054153.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2559987831_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2559987831", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2559987831.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0093958401_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0093958401", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0093958401.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4250663607_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4250663607", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4250663607.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1083283065_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1083283065", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1083283065.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1022407586_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1022407586", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1022407586.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4151043618_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4151043618", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4151043618.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2124229490_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2124229490", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2124229490.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3208012391_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3208012391", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3208012391.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0981938057_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0981938057", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0981938057.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1189481042_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1189481042", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1189481042.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1771899898_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1771899898", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1771899898.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4103269004_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4103269004", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4103269004.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2438938700_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2438938700", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2438938700.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3455838255_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3455838255", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3455838255.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4030643771_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4030643771", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4030643771.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3040254275_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3040254275", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3040254275.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2050064325_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2050064325", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2050064325.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1526002301_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1526002301", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1526002301.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0958044386_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0958044386", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0958044386.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3604542428_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3604542428", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3604542428.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2152482602_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2152482602", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2152482602.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1538428298_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1538428298", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1538428298.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3134998823_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3134998823", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3134998823.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4292111967_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4292111967", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4292111967.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3027297972_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3027297972", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3027297972.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2367284247_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2367284247", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2367284247.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_4051222988_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_4051222988", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_4051222988.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1819746490_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1819746490", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1819746490.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2806224934_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2806224934", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2806224934.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2424714518_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2424714518", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2424714518.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1528651926_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1528651926", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1528651926.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2851026869_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2851026869", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2851026869.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2075233813_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2075233813", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2075233813.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3871240035_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3871240035", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3871240035.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_2955598741_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_2955598741", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_2955598741.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_0757414627_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_0757414627", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_0757414627.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3755437504_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3755437504", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3755437504.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1121488054_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1121488054", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1121488054.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3893543152_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3893543152", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3893543152.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1609085099_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1609085099", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1609085099.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_3269939677_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_3269939677", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_3269939677.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1282679589_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1282679589", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1282679589.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}

extern void simprims_ver_m_08244894845248834502_0076253249_1097487202_init()
{
	static char *pe[] = {(void *)NetDecl_43_0,(void *)Gate_58_1,(void *)Gate_60_2,(void *)Gate_61_3,(void *)Gate_62_4,(void *)Gate_63_5,(void *)Gate_64_6,(void *)Gate_65_7,(void *)Gate_66_8,(void *)Gate_68_9,(void *)Gate_69_10,(void *)Gate_70_11,(void *)Gate_71_12,(void *)Gate_72_13,(void *)Gate_73_14,(void *)Cont_75_15,(void *)Cont_76_16,(void *)Cont_77_17,(void *)Cont_78_18,(void *)Cont_79_19,(void *)Cont_80_20,(void *)Cont_81_21,(void *)Always_83_22,(void *)Always_99_23};
	xsi_register_didat("simprims_ver_m_08244894845248834502_0076253249_1097487202", "isim/TB_risc_isim_par.exe.sim/simprims_ver/m_08244894845248834502_0076253249_1097487202.didat");
	xsi_register_executes(pe);
	xsi_register_timingcheckfuncs(0, (void *)TChk_111_24_tstmp, 0);
	xsi_register_timingcheckfuncs(1, (void *)TChk_112_25_tstmp, 0);
	xsi_register_timingcheckfuncs(2, (void *)TChk_113_26_tstmp, 0);
	xsi_register_timingcheckfuncs(3, (void *)TChk_114_27_tstmp, 0);
	xsi_register_timingcheckfuncs(4, (void *)TChk_115_28_tstmp, 0);
	xsi_register_timingcheckfuncs(5, (void *)TChk_116_29_tstmp, 0);
	xsi_register_timingcheckfuncs(6, (void *)TChk_117_30_tstmp, 0);
	xsi_register_timingcheckfuncs(7, (void *)TChk_118_31_tstmp, 0);
	xsi_register_timingcheckfuncs(8, (void *)TChk_120_32_tstmp, 0);
	xsi_register_timingcheckfuncs(9, (void *)TChk_121_33_tstmp, 0);
	xsi_register_timingcheckfuncs(11, 0, (void *)TChk_124_35_tchk);
	xsi_register_timingcheckfuncs(12, 0, (void *)TChk_125_36_tchk);
}
