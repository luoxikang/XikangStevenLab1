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
    unisims_ver_m_00000000003510477262_2316096324_init();
    unisims_ver_m_00000000003510477262_0709700939_init();
    unisims_ver_m_00000000002123152668_3476364530_init();
    unisims_ver_m_00000000002123152668_0970595058_init();
    work_m_00000000002577538428_0861630745_init();
    work_m_00000000002937214094_1546932407_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002937214094_1546932407");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
