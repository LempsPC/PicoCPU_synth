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

char *SYNOPSYS_P_3308480207;
char *IEEE_P_3972351953;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *IEEE_P_1242562249;
char *IEEE_P_0017514958;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    work_a_1473390551_3212880686_init();
    work_a_1190486488_3212880686_init();
    synopsys_p_3308480207_init();
    ieee_p_0017514958_init();
    work_a_0855352164_1516540902_init();
    work_a_4065050482_3212880686_init();
    ieee_p_3972351953_init();
    work_a_3090229368_3212880686_init();
    work_a_3422538342_1516540902_init();
    work_a_3525097616_1516540902_init();
    work_a_1395078985_3212880686_init();
    work_a_4096808407_1516540902_init();
    work_a_2756605277_0318166943_init();
    work_a_4007649601_1516540902_init();
    work_a_2463935953_3212880686_init();
    work_a_1546360697_3212880686_init();
    work_a_3174135066_1746574152_init();


    xsi_register_tops("work_a_3174135066_1746574152");

    SYNOPSYS_P_3308480207 = xsi_get_engine_memory("synopsys_p_3308480207");
    IEEE_P_3972351953 = xsi_get_engine_memory("ieee_p_3972351953");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_0017514958 = xsi_get_engine_memory("ieee_p_0017514958");

    return xsi_run_simulation(argc, argv);

}
