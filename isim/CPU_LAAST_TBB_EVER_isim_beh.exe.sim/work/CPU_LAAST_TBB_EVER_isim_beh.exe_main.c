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
    xilinxcorelib_ver_m_00000000001358910285_0090163086_init();
    xilinxcorelib_ver_m_00000000001687936702_2843080771_init();
    xilinxcorelib_ver_m_00000000000277421008_0920553885_init();
    xilinxcorelib_ver_m_00000000001603977570_2352844438_init();
    work_m_00000000002489990758_0317860448_init();
    xilinxcorelib_ver_m_00000000001358910285_1054081540_init();
    xilinxcorelib_ver_m_00000000001687936702_3218604958_init();
    xilinxcorelib_ver_m_00000000000277421008_1639944646_init();
    xilinxcorelib_ver_m_00000000001603977570_2552630825_init();
    work_m_00000000000403262735_3324819304_init();
    work_m_00000000000871663835_3073744287_init();
    work_m_00000000002465640893_3901337038_init();
    work_m_00000000003384562506_3230829578_init();
    work_m_00000000000713963464_0886308060_init();
    work_m_00000000001895172011_0063234220_init();
    work_m_00000000001587436217_2163901231_init();
    work_m_00000000002951616031_4033830893_init();
    work_m_00000000004133511608_3573809201_init();
    work_m_00000000003065592373_4251429752_init();
    work_m_00000000001519432258_3647734634_init();
    work_m_00000000003065592373_0460957459_init();
    work_m_00000000002879188873_4152464591_init();
    work_m_00000000003530884064_2191198310_init();
    work_m_00000000003003152279_3979377396_init();
    work_m_00000000002738194412_0857246100_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002738194412_0857246100");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
