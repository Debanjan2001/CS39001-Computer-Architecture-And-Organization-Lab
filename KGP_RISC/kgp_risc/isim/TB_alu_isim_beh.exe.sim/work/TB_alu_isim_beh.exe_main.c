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
    work_m_13065573053838217914_4033376979_init();
    work_m_04687911285289513169_0981210017_init();
    work_m_00143956907478637141_3881621024_init();
    work_m_11346703741875251152_3462030155_init();
    work_m_18356867383254886553_0886308060_init();
    work_m_16501395872788684513_1344912686_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_16501395872788684513_1344912686");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
