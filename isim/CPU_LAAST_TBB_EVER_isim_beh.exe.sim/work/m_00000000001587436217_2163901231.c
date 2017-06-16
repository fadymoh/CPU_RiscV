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
static const char *ng0 = "G:/AUC/Assembly/Lectures/CPU_RISCV/DataPath.v";



static void Always_541_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(541, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(542, ng0);

LAB5:    xsi_set_current_line(544, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    xsi_vlog_unsigned_add(t7, 33, t5, 32, t6, 32);
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 32, 0, 1);
    goto LAB2;

}


extern void work_m_00000000001587436217_2163901231_init()
{
	static char *pe[] = {(void *)Always_541_0};
	xsi_register_didat("work_m_00000000001587436217_2163901231", "isim/CPU_LAAST_TBB_EVER_isim_beh.exe.sim/work/m_00000000001587436217_2163901231.didat");
	xsi_register_executes(pe);
}
