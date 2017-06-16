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
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {15U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {2U, 0U};



static void Always_584_0(char *t0)
{
    char t13[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(584, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(584, ng0);

LAB5:    xsi_set_current_line(586, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(649, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(586, ng0);

LAB9:    xsi_set_current_line(588, ng0);
    t11 = (t0 + 1368U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB13;

LAB10:    if (t25 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(598, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB28;

LAB25:    if (t20 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t13) = 1;

LAB28:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(606, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB43;

LAB40:    if (t20 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t13) = 1;

LAB43:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(614, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB58;

LAB55:    if (t20 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;

LAB58:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(622, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB73;

LAB70:    if (t20 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t13) = 1;

LAB73:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(630, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB88;

LAB85:    if (t20 != 0)
        goto LAB87;

LAB86:    *((unsigned int *)t13) = 1;

LAB88:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB89;

LAB90:    xsi_set_current_line(639, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB103;

LAB100:    if (t20 != 0)
        goto LAB102;

LAB101:    *((unsigned int *)t13) = 1;

LAB103:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB104;

LAB105:    xsi_set_current_line(643, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB110;

LAB107:    if (t20 != 0)
        goto LAB109;

LAB108:    *((unsigned int *)t13) = 1;

LAB110:    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB111;

LAB112:
LAB113:
LAB106:
LAB91:
LAB76:
LAB61:
LAB46:
LAB31:
LAB16:    goto LAB8;

LAB12:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(588, ng0);

LAB17:    xsi_set_current_line(589, ng0);
    t35 = (t0 + 1208U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB21;

LAB18:    if (t49 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t37) = 1;

LAB21:    t53 = (t37 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (~(t54));
    t56 = *((unsigned int *)t37);
    t57 = (t56 & t55);
    t58 = (t57 != 0);
    if (t58 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(593, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB24:    goto LAB16;

LAB20:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(590, ng0);
    t59 = ((char*)((ng1)));
    t60 = (t0 + 1928);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 2);
    goto LAB24;

LAB27:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(598, ng0);

LAB32:    xsi_set_current_line(599, ng0);
    t14 = (t0 + 1208U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng4)));
    memset(t37, 0, 8);
    t28 = (t15 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t14);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t40 = (t33 ^ t34);
    t41 = (t32 | t40);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t29);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB34;

LAB33:    if (t44 != 0)
        goto LAB35;

LAB36:    t36 = (t37 + 4);
    t47 = *((unsigned int *)t36);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(602, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB39:    goto LAB31;

LAB34:    *((unsigned int *)t37) = 1;
    goto LAB36;

LAB35:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(600, ng0);
    t38 = ((char*)((ng1)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 2);
    goto LAB39;

LAB42:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(606, ng0);

LAB47:    xsi_set_current_line(607, ng0);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t28 = (t15 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t14);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t40 = (t33 ^ t34);
    t41 = (t32 | t40);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t29);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB51;

LAB48:    if (t44 != 0)
        goto LAB50;

LAB49:    *((unsigned int *)t37) = 1;

LAB51:    t36 = (t37 + 4);
    t47 = *((unsigned int *)t36);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(610, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB54:    goto LAB46;

LAB50:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB51;

LAB52:    xsi_set_current_line(608, ng0);
    t38 = ((char*)((ng1)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 2);
    goto LAB54;

LAB57:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB58;

LAB59:    xsi_set_current_line(614, ng0);

LAB62:    xsi_set_current_line(615, ng0);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng4)));
    memset(t37, 0, 8);
    t28 = (t15 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t14);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t40 = (t33 ^ t34);
    t41 = (t32 | t40);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t29);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB66;

LAB63:    if (t44 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t37) = 1;

LAB66:    t36 = (t37 + 4);
    t47 = *((unsigned int *)t36);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(618, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB69:    goto LAB61;

LAB65:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB66;

LAB67:    xsi_set_current_line(616, ng0);
    t38 = ((char*)((ng1)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 2);
    goto LAB69;

LAB72:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(622, ng0);

LAB77:    xsi_set_current_line(623, ng0);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t28 = (t15 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t14);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t40 = (t33 ^ t34);
    t41 = (t32 | t40);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t29);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB81;

LAB78:    if (t44 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t37) = 1;

LAB81:    t36 = (t37 + 4);
    t47 = *((unsigned int *)t36);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(626, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB84:    goto LAB76;

LAB80:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(624, ng0);
    t38 = ((char*)((ng1)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 2);
    goto LAB84;

LAB87:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB88;

LAB89:    xsi_set_current_line(630, ng0);

LAB92:    xsi_set_current_line(631, ng0);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    t14 = ((char*)((ng4)));
    memset(t37, 0, 8);
    t28 = (t15 + 4);
    t29 = (t14 + 4);
    t30 = *((unsigned int *)t15);
    t31 = *((unsigned int *)t14);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t40 = (t33 ^ t34);
    t41 = (t32 | t40);
    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t29);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB96;

LAB93:    if (t44 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t37) = 1;

LAB96:    t36 = (t37 + 4);
    t47 = *((unsigned int *)t36);
    t48 = (~(t47));
    t49 = *((unsigned int *)t37);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB97;

LAB98:    xsi_set_current_line(634, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB99:    goto LAB91;

LAB95:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(632, ng0);
    t38 = ((char*)((ng1)));
    t39 = (t0 + 1928);
    xsi_vlogvar_assign_value(t39, t38, 0, 0, 2);
    goto LAB99;

LAB102:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB103;

LAB104:    xsi_set_current_line(640, ng0);
    t14 = ((char*)((ng1)));
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 2);
    goto LAB106;

LAB109:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB110;

LAB111:    xsi_set_current_line(644, ng0);
    t14 = ((char*)((ng11)));
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 2);
    goto LAB113;

}


extern void work_m_00000000001895172011_0063234220_init()
{
	static char *pe[] = {(void *)Always_584_0};
	xsi_register_didat("work_m_00000000001895172011_0063234220", "isim/CPU_LAAST_TBB_EVER_isim_beh.exe.sim/work/m_00000000001895172011_0063234220.didat");
	xsi_register_executes(pe);
}
