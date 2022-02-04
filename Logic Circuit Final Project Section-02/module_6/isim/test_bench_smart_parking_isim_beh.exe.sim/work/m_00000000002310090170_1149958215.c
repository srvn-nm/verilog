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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static unsigned int ng0[] = {1U, 0U};



static void Gate_34_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 3408);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    xsi_vlog_XorGate(t8, 2, t2, t4);
    t9 = (t0 + 3408);
    xsi_driver_vfirst_trans(t9, 0, 0);
    t10 = (t0 + 3328);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000002310090170_1149958215_init()
{
	static char *pe[] = {(void *)Gate_34_0};
	xsi_register_didat("work_m_00000000002310090170_1149958215", "isim/test_bench_smart_parking_isim_beh.exe.sim/work/m_00000000002310090170_1149958215.didat");
	xsi_register_executes(pe);
}
