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
static const char *ng0 = "A = %b,  2'sComp(A) = %b";
static const char *ng1 = "/home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/kgp_risc/TB_twoscomp.v";
static int ng2[] = {0, 0};
static unsigned int ng3[] = {3435777225U, 0U};
static unsigned int ng4[] = {846412233U, 0U};
static unsigned int ng5[] = {4067637705U, 0U};

void Monitor_43_1(char *);
void Monitor_43_1(char *);


static void Monitor_43_1_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    xsi_vlogfile_write(1, 0, 3, ng0, 3, t0, (char)118, t3, 32, (char)118, t5, 32);

LAB1:    return;
}

static void Initial_39_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng1);

LAB4:    xsi_set_current_line(41, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(43, ng1);
    Monitor_43_1(t0);
    xsi_set_current_line(44, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(45, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(45, ng1);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(46, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 3000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(46, ng1);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(47, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(47, ng1);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(49, ng1);
    t2 = (t0 + 2168);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(49, ng1);
    xsi_vlog_finish(1);
    goto LAB1;

}

void Monitor_43_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2416);
    t2 = (t0 + 2928);
    xsi_vlogfile_monitor((void *)Monitor_43_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_04751585842487949168_1890162337_init()
{
	static char *pe[] = {(void *)Initial_39_0,(void *)Monitor_43_1};
	xsi_register_didat("work_m_04751585842487949168_1890162337", "isim/TB_twoscomp_isim_beh.exe.sim/work/m_04751585842487949168_1890162337.didat");
	xsi_register_executes(pe);
}
