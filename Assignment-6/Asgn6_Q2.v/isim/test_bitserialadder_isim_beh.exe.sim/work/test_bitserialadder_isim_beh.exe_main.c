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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_07629446868975321809_2327567535_init();
    work_m_17989368647460672792_3005423746_init();
    work_m_04714568243101197009_3996337969_init();
    work_m_16571980171291591927_1279891299_init();
    work_m_10868958892706687227_1752849888_init();
    work_m_15582544535805455336_3979552109_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_15582544535805455336_3979552109");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
