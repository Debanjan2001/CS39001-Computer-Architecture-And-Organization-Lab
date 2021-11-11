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
static const char *ng0 = "/home/ise/shared_xlnx/CS39001-Computer-Architecture-And-Organization-Lab/KGP_RISC/ass7_kgp_risc/adder.v";



static void Always_15_0(char *t0)
{
    char t7[16];
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t10;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 3160);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    xsi_vlog_unsigned_add(t7, 33, t5, 32, t6, 32);
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    xsi_vlog_unsigned_add(t9, 33, t7, 33, t8, 1);
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 32);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t9, 32, 0, 1);
    goto LAB2;

}


extern void work_m_13225241747226339742_4033376979_init()
{
	static char *pe[] = {(void *)Always_15_0};
	xsi_register_didat("work_m_13225241747226339742_4033376979", "isim/RISC_isim_beh.exe.sim/work/m_13225241747226339742_4033376979.didat");
	xsi_register_executes(pe);
}
