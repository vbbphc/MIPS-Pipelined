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
    work_m_00000000001797469944_3381898454_init();
    work_m_00000000003198688313_3032547478_init();
    work_m_00000000002375927590_2645914128_init();
    work_m_00000000002623529374_3390548198_init();
    work_m_00000000000579670620_2523189691_init();
    work_m_00000000003328751299_1351276808_init();
    work_m_00000000000640454548_1081490573_init();
    work_m_00000000003323252587_3692911009_init();
    work_m_00000000003649633235_3877310806_init();
    work_m_00000000002047498008_1250343676_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_1250343676");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
