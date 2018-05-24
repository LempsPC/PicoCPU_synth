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
static const char *ng0 = "/home/lembitu.valdmets/Desktop/PicoCPU_synth/PicoCPU_synth/PicoCPU_VHDL/Memory.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2756605277_0318166943_p_0(char *t0)
{
    char t16[16];
    char t25[16];
    char t26[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    char *t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    int t17;
    unsigned int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1632U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 4560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(2048U);
    memset(t1, 0, 2048U);
    t5 = t1;
    t6 = (8U * 1U);
    t7 = t5;
    memset(t7, (unsigned char)2, t6);
    t8 = (t6 != 0);
    if (t8 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 4672);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 2048U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB5:    t9 = (2048U / t6);
    xsi_mem_set_data(t5, t5, t6, t9);
    goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t8 = (t4 == (unsigned char)3);
    if (t8 != 0)
        goto LAB9;

LAB11:
LAB10:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t6 = (7 - 7);
    t9 = (t6 * 1U);
    t15 = (0 + t9);
    t1 = (t2 + t15);
    t5 = (t0 + 10055);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t25 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 7;
    t13 = (t12 + 4U);
    *((int *)t13) = 4;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t17 = (4 - 7);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t18;
    t13 = (t26 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 3;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t19 = (3 - 0);
    t18 = (t19 * 1);
    t18 = (t18 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t18;
    t10 = xsi_base_array_concat(t10, t16, t11, (char)97, t1, t25, (char)97, t5, t26, (char)101);
    t18 = (4U + 4U);
    t3 = (8U != t18);
    if (t3 == 1)
        goto LAB12;

LAB13:    t14 = (t0 + 4672);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t10, 8U);
    xsi_driver_first_trans_delta(t14, 8U, 8U, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 10059);
    t5 = (t0 + 1352U);
    t7 = *((char **)t5);
    t6 = (7 - 3);
    t9 = (t6 * 1U);
    t15 = (0 + t9);
    t5 = (t7 + t15);
    t11 = ((IEEE_P_2592010699) + 4000);
    t12 = (t25 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 3;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t18;
    t13 = (t26 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 3;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t19 = (0 - 3);
    t18 = (t19 * -1);
    t18 = (t18 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t18;
    t10 = xsi_base_array_concat(t10, t16, t11, (char)97, t1, t25, (char)97, t5, t26, (char)101);
    t18 = (4U + 4U);
    t3 = (8U != t18);
    if (t3 == 1)
        goto LAB14;

LAB15:    t14 = (t0 + 4672);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    t27 = (t24 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t10, 8U);
    xsi_driver_first_trans_delta(t14, 16U, 8U, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 10063);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB16;

LAB17:    t5 = (t0 + 4672);
    t7 = (t5 + 56U);
    t10 = *((char **)t7);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_delta(t5, 0U, 8U, 0LL);
    goto LAB3;

LAB9:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1192U);
    t7 = *((char **)t2);
    t2 = (t0 + 1512U);
    t10 = *((char **)t2);
    t6 = (7 - 7);
    t9 = (t6 * 1U);
    t15 = (0 + t9);
    t2 = (t10 + t15);
    t11 = (t16 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 7;
    t12 = (t11 + 4U);
    *((int *)t12) = 0;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t17 = (0 - 7);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t18;
    t19 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t16);
    t20 = (t19 - 0);
    t18 = (t20 * 1);
    t21 = (8U * t18);
    t22 = (0U + t21);
    t12 = (t0 + 4672);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t23 = (t14 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t7, 8U);
    xsi_driver_first_trans_delta(t12, t22, 8U, 0LL);
    goto LAB10;

LAB12:    xsi_size_not_matching(8U, t18, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(8U, t18, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB17;

}

static void work_a_2756605277_0318166943_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = (4 - 0);
    t4 = (t3 * 1);
    t5 = (8U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 4736);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 4576);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2756605277_0318166943_p_2(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(43, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t4 = (7 - 7);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t10 = (0 - 7);
    t11 = (t10 * -1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t12 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t1, t7);
    t13 = (t12 - 0);
    t11 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 255, 1, t12);
    t14 = (8U * t11);
    t15 = (0 + t14);
    t9 = (t2 + t15);
    t16 = (t0 + 4800);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 4592);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2756605277_0318166943_init()
{
	static char *pe[] = {(void *)work_a_2756605277_0318166943_p_0,(void *)work_a_2756605277_0318166943_p_1,(void *)work_a_2756605277_0318166943_p_2};
	xsi_register_didat("work_a_2756605277_0318166943", "isim/PicoCPUTestBench_isim_beh.exe.sim/work/a_2756605277_0318166943.didat");
	xsi_register_executes(pe);
}
