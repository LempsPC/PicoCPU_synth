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
static const char *ng0 = "/home/lembitu.valdmets/Desktop/PicoCPU_synth/PicoCPU_synth/PicoCPU_VHDL/Debouncer.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_1473390551_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 7076);
    t6 = (t0 + 4336);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 11U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 1832U);
    t6 = *((char **)t2);
    t2 = (t0 + 4336);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 11U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB7:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB9;

}

static void work_a_1473390551_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 7008U);
    t4 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t1, t3, t2, 1);
    t5 = (t1 + 12U);
    t6 = *((unsigned int *)t5);
    t7 = (1U * t6);
    t8 = (11U != t7);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 4400);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 11U);
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 4224);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(11U, t7, 0);
    goto LAB6;

}

static void work_a_1473390551_3212880686_p_2(char *t0)
{
    unsigned char t1;
    unsigned int t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(29, ng0);
    t2 = (0U + 1);
    t2 = (t2 - 1);
    t3 = (t0 + 1632U);
    t4 = xsi_signal_has_event_indexed(t3, 0U, t2);
    if (t4 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t3 = (t0 + 4240);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t13 = (t0 + 1352U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t13 = (t0 + 4464);
    t16 = (t13 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t15;
    xsi_driver_first_trans_delta(t13, 2U, 1, 0LL);
    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1992U);
    t5 = *((char **)t3);
    t7 = (0 - 2);
    t2 = (t7 * -1);
    t8 = (1U * t2);
    t9 = (0 + t8);
    t3 = (t5 + t9);
    t1 = *((unsigned char *)t3);
    t6 = (t0 + 4464);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t1;
    xsi_driver_first_trans_delta(t6, 1U, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1992U);
    t5 = *((char **)t3);
    t7 = (1 - 2);
    t2 = (t7 * -1);
    t8 = (1U * t2);
    t9 = (0 + t8);
    t3 = (t5 + t9);
    t1 = *((unsigned char *)t3);
    t6 = (t0 + 4464);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t1;
    xsi_driver_first_trans_delta(t6, 0U, 1, 0LL);
    goto LAB3;

LAB5:    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t7 = (10 - 10);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t5 = (t6 + t10);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t1 = t12;
    goto LAB7;

}

static void work_a_1473390551_3212880686_p_3(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7024U);
    t3 = (t0 + 7087);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 2;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (2 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 4528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 4256);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    t7 = (t0 + 4528);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB3;

}


extern void work_a_1473390551_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1473390551_3212880686_p_0,(void *)work_a_1473390551_3212880686_p_1,(void *)work_a_1473390551_3212880686_p_2,(void *)work_a_1473390551_3212880686_p_3};
	xsi_register_didat("work_a_1473390551_3212880686", "isim/PicoCPUTestBench_isim_beh.exe.sim/work/a_1473390551_3212880686.didat");
	xsi_register_executes(pe);
}
