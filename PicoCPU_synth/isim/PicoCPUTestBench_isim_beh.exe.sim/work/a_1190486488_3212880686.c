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
static const char *ng0 = "/home/lembitu.valdmets/Desktop/PicoCPU_synth/PicoCPU_synth/Debouncer2.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_2255506239096166994_3965413181(char *, char *, char *, char *, int );


static void work_a_1190486488_3212880686_p_0(char *t0)
{
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3424);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 3504);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t3, 1U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t10 = (0 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 3504);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t10 = (19 - 19);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t5 = (t2 == (unsigned char)2);
    if (t5 != 0)
        goto LAB8;

LAB9:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t10 = (1 - 1);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t1 = (t3 + t13);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 3632);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast_port(t4);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(54, ng0);
    t1 = xsi_get_transient_memory(20U);
    memset(t1, 0, 20U);
    t4 = t1;
    memset(t4, (unsigned char)2, 20U);
    t6 = (t0 + 3568);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t14 = *((char **)t9);
    memcpy(t14, t1, 20U);
    xsi_driver_first_trans_fast(t6);
    goto LAB6;

LAB8:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1832U);
    t6 = *((char **)t4);
    t4 = (t0 + 5736U);
    t7 = ieee_p_3620187407_sub_2255506239096166994_3965413181(IEEE_P_3620187407, t15, t6, t4, 1);
    t8 = (t15 + 12U);
    t16 = *((unsigned int *)t8);
    t17 = (1U * t16);
    t18 = (20U != t17);
    if (t18 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 3568);
    t14 = (t9 + 56U);
    t19 = *((char **)t14);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 20U);
    xsi_driver_first_trans_fast(t9);
    goto LAB6;

LAB10:    xsi_size_not_matching(20U, t17, 0);
    goto LAB11;

}


extern void work_a_1190486488_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1190486488_3212880686_p_0};
	xsi_register_didat("work_a_1190486488_3212880686", "isim/PicoCPUTestBench_isim_beh.exe.sim/work/a_1190486488_3212880686.didat");
	xsi_register_executes(pe);
}
