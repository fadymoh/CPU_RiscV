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
static unsigned int ng1[] = {14U, 0U};
static unsigned int ng2[] = {127U, 0U};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {13U, 0U};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {11U, 0U};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {7U, 0U};
static int ng9[] = {1, 0};
static unsigned int ng10[] = {0U, 0U};
static unsigned int ng11[] = {1U, 0U};



static void Initial_65_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(65, ng0);

LAB2:    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2728);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);

LAB1:    return;
}

static void Always_68_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    t3 = (t0 + 4088);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(68, ng0);

LAB5:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(73, ng0);

LAB19:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 1808U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t7 = (t0 + 1808U);
    t9 = (t7 + 48U);
    t10 = *((char **)t9);
    t12 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t11, 7, t3, t5, t10, 2, 1, t12, 32, 1);
    t13 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 7, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(70, ng0);

LAB16:    xsi_set_current_line(70, ng0);
    t9 = (t0 + 1848U);
    t10 = *((char **)t9);
    t9 = (t0 + 1808U);
    t12 = (t9 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 1808U);
    t15 = (t14 + 48U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t11, 7, t10, t13, t16, 2, 1, t17, 32, 1);
    t18 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t18, t11, 0, 0, 7, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(71, ng0);

LAB17:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 1808U);
    t5 = (t3 + 72U);
    t7 = *((char **)t5);
    t9 = (t0 + 1808U);
    t10 = (t9 + 48U);
    t12 = *((char **)t10);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t11, 7, t4, t7, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t14, t11, 0, 0, 7, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(72, ng0);

LAB18:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 1808U);
    t5 = (t3 + 72U);
    t7 = *((char **)t5);
    t9 = (t0 + 1808U);
    t10 = (t9 + 48U);
    t12 = *((char **)t10);
    t13 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t11, 7, t4, t7, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t14, t11, 0, 0, 7, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB15;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng10)));
    t3 = (t0 + 4952);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng11)));
    t3 = (t0 + 5016);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000003530884064_2191198310_init()
{
	static char *pe[] = {(void *)Initial_65_0,(void *)Always_68_1,(void *)implSig1_execute,(void *)implSig2_execute};
	xsi_register_didat("work_m_00000000003530884064_2191198310", "isim/CPU_LAAST_TBB_EVER_isim_beh.exe.sim/work/m_00000000003530884064_2191198310.didat");
	xsi_register_executes(pe);
}
