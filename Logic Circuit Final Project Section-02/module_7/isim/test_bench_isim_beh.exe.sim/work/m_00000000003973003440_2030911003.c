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
static const char *ng0 = "C:/Users/ASUS.PIESC/Desktop/Logic Circuit Final Project Section-02/module_7/fsm.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {6U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {7U, 0U};
static unsigned int ng6[] = {255U, 15U};



static void Always_41_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4984);
    *((int *)t2) = 1;
    t3 = (t0 + 4200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 2048U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB10;

LAB9:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2048U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB13:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB10:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB9;

LAB11:    xsi_set_current_line(42, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 3088);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 3);
    goto LAB13;

LAB14:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 3248);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t0 + 3088);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 3);
    goto LAB16;

}

static void Always_46_1(char *t0)
{
    char t9[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
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
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;

LAB0:    t1 = (t0 + 4416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5000);
    *((int *)t2) = 1;
    t3 = (t0 + 4448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 3088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);
    t10 = (t0 + 1728U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t10 = (t11 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (~(t12));
    t14 = *((unsigned int *)t11);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t10) == 0)
        goto LAB17;

LAB19:    t17 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t17) = 1;

LAB20:    t18 = (t9 + 4);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB22;

LAB21:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 1U);
    t28 = (t9 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 != 0);
    if (t16 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB25:    goto LAB16;

LAB8:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    t3 = (t0 + 2368U);
    t5 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t5 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t5);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t3) == 0)
        goto LAB29;

LAB31:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;

LAB32:    t10 = (t9 + 4);
    t11 = (t5 + 4);
    t20 = *((unsigned int *)t5);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB34;

LAB33:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t27 & 1U);
    t29 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t9);
    t31 = (t29 & t30);
    *((unsigned int *)t36) = t31;
    t17 = (t4 + 4);
    t18 = (t9 + 4);
    t19 = (t36 + 4);
    t32 = *((unsigned int *)t17);
    t33 = *((unsigned int *)t18);
    t37 = (t32 | t33);
    *((unsigned int *)t19) = t37;
    t38 = *((unsigned int *)t19);
    t39 = (t38 != 0);
    if (t39 == 1)
        goto LAB35;

LAB36:
LAB37:    t35 = (t36 + 4);
    t58 = *((unsigned int *)t35);
    t59 = (~(t58));
    t60 = *((unsigned int *)t36);
    t61 = (t60 & t59);
    t62 = (t61 != 0);
    if (t62 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t4);
    t14 = (t12 & t13);
    *((unsigned int *)t9) = t14;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t9 + 4);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t5);
    t20 = (t15 | t16);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t7);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB41;

LAB42:
LAB43:    t17 = (t9 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t9);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB50;

LAB48:    if (*((unsigned int *)t2) == 0)
        goto LAB47;

LAB49:    t4 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t4) = 1;

LAB50:    t5 = (t9 + 4);
    t7 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB52;

LAB51:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t27 & 1U);
    t10 = (t9 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB46:
LAB40:    goto LAB16;

LAB10:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB59;

LAB57:    if (*((unsigned int *)t3) == 0)
        goto LAB56;

LAB58:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB59:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB61;

LAB60:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1728U);
    t3 = *((char **)t2);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t4);
    t14 = (t12 & t13);
    *((unsigned int *)t9) = t14;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t7 = (t9 + 4);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t5);
    t20 = (t15 | t16);
    *((unsigned int *)t7) = t20;
    t21 = *((unsigned int *)t7);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB65;

LAB66:
LAB67:    t17 = (t9 + 4);
    t43 = *((unsigned int *)t17);
    t44 = (~(t43));
    t45 = *((unsigned int *)t9);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB68;

LAB69:
LAB70:
LAB64:    goto LAB16;

LAB12:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB74;

LAB72:    if (*((unsigned int *)t3) == 0)
        goto LAB71;

LAB73:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB74:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB76;

LAB75:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB77;

LAB78:
LAB79:    goto LAB16;

LAB14:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1728U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB83;

LAB81:    if (*((unsigned int *)t3) == 0)
        goto LAB80;

LAB82:    t5 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t5) = 1;

LAB83:    t7 = (t9 + 4);
    t10 = (t4 + 4);
    t20 = *((unsigned int *)t4);
    t21 = (~(t20));
    *((unsigned int *)t9) = t21;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB85;

LAB84:    t26 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t26 & 1U);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t27 & 1U);
    t11 = (t9 + 4);
    t29 = *((unsigned int *)t11);
    t30 = (~(t29));
    t31 = *((unsigned int *)t9);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB86;

LAB87:
LAB88:    goto LAB16;

LAB17:    *((unsigned int *)t9) = 1;
    goto LAB20;

LAB22:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t24 | t25);
    goto LAB21;

LAB23:    xsi_set_current_line(48, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 3248);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 3);
    goto LAB25;

LAB26:    xsi_set_current_line(49, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 3248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB28;

LAB29:    *((unsigned int *)t9) = 1;
    goto LAB32;

LAB34:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t10);
    t25 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t24 | t25);
    goto LAB33;

LAB35:    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t19);
    *((unsigned int *)t36) = (t40 | t41);
    t28 = (t4 + 4);
    t34 = (t9 + 4);
    t42 = *((unsigned int *)t4);
    t43 = (~(t42));
    t44 = *((unsigned int *)t28);
    t45 = (~(t44));
    t46 = *((unsigned int *)t9);
    t47 = (~(t46));
    t48 = *((unsigned int *)t34);
    t49 = (~(t48));
    t50 = (t43 & t45);
    t51 = (t47 & t49);
    t52 = (~(t50));
    t53 = (~(t51));
    t54 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t54 & t52);
    t55 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t55 & t53);
    t56 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t56 & t52);
    t57 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t57 & t53);
    goto LAB37;

LAB38:    xsi_set_current_line(51, ng0);
    t63 = ((char*)((ng3)));
    t64 = (t0 + 3248);
    xsi_vlogvar_assign_value(t64, t63, 0, 0, 3);
    goto LAB40;

LAB41:    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t23 | t24);
    t10 = (t3 + 4);
    t11 = (t4 + 4);
    t25 = *((unsigned int *)t3);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t29 = (~(t27));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t8 = (t26 & t29);
    t50 = (t31 & t33);
    t37 = (~(t8));
    t38 = (~(t50));
    t39 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t39 & t37);
    t40 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t40 & t38);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t37);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t38);
    goto LAB43;

LAB44:    xsi_set_current_line(52, ng0);
    t18 = ((char*)((ng4)));
    t19 = (t0 + 3248);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 3);
    goto LAB46;

LAB47:    *((unsigned int *)t9) = 1;
    goto LAB50;

LAB52:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t5);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t24 | t25);
    goto LAB51;

LAB53:    xsi_set_current_line(53, ng0);
    t11 = ((char*)((ng1)));
    t17 = (t0 + 3248);
    xsi_vlogvar_assign_value(t17, t11, 0, 0, 3);
    goto LAB55;

LAB56:    *((unsigned int *)t9) = 1;
    goto LAB59;

LAB61:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB60;

LAB62:    xsi_set_current_line(55, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3248);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB64;

LAB65:    t23 = *((unsigned int *)t9);
    t24 = *((unsigned int *)t7);
    *((unsigned int *)t9) = (t23 | t24);
    t10 = (t3 + 4);
    t11 = (t4 + 4);
    t25 = *((unsigned int *)t3);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t29 = (~(t27));
    t30 = *((unsigned int *)t4);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t8 = (t26 & t29);
    t50 = (t31 & t33);
    t37 = (~(t8));
    t38 = (~(t50));
    t39 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t39 & t37);
    t40 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t40 & t38);
    t41 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t41 & t37);
    t42 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t42 & t38);
    goto LAB67;

LAB68:    xsi_set_current_line(56, ng0);
    t18 = ((char*)((ng5)));
    t19 = (t0 + 3248);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 3);
    goto LAB70;

LAB71:    *((unsigned int *)t9) = 1;
    goto LAB74;

LAB76:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB75;

LAB77:    xsi_set_current_line(58, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3248);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB79;

LAB80:    *((unsigned int *)t9) = 1;
    goto LAB83;

LAB85:    t22 = *((unsigned int *)t9);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t9) = (t22 | t23);
    t24 = *((unsigned int *)t7);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t7) = (t24 | t25);
    goto LAB84;

LAB86:    xsi_set_current_line(60, ng0);
    t17 = ((char*)((ng1)));
    t18 = (t0 + 3248);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 3);
    goto LAB88;

}

static void Always_63_2(char *t0)
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
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
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4664U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    t3 = (t0 + 4696);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 3088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(65, ng0);

LAB17:    xsi_set_current_line(66, ng0);
    t9 = ((char*)((ng1)));
    t10 = (t0 + 2768);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB16;

LAB8:    xsi_set_current_line(68, ng0);

LAB18:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB16;

LAB10:    xsi_set_current_line(71, ng0);

LAB19:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB16;

LAB12:    xsi_set_current_line(74, ng0);

LAB20:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB16;

LAB14:    xsi_set_current_line(77, ng0);

LAB21:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t3);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t5);
    t16 = *((unsigned int *)t7);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB25;

LAB22:    if (t21 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t11) = 1;

LAB25:    t10 = (t11 + 4);
    t24 = *((unsigned int *)t10);
    t25 = (~(t24));
    t26 = *((unsigned int *)t11);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(82, ng0);

LAB30:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB28:    goto LAB16;

LAB24:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(78, ng0);

LAB29:    xsi_set_current_line(79, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 2768);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB28;

}


extern void work_m_00000000003973003440_2030911003_init()
{
	static char *pe[] = {(void *)Always_41_0,(void *)Always_46_1,(void *)Always_63_2};
	xsi_register_didat("work_m_00000000003973003440_2030911003", "isim/test_bench_isim_beh.exe.sim/work/m_00000000003973003440_2030911003.didat");
	xsi_register_executes(pe);
}
