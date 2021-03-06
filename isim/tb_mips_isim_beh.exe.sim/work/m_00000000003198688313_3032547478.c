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
static const char *ng0 = "V:/Verilog/MIPSPipelined/instruction_fetch.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {8U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {75U, 0U};
static unsigned int ng5[] = {66U, 0U};
static int ng6[] = {2, 0};
static unsigned int ng7[] = {197U, 0U};
static int ng8[] = {3, 0};
static unsigned int ng9[] = {0U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {69U, 0U};
static int ng12[] = {5, 0};



static void Always_16_0(char *t0)
{
    char t6[8];
    char t30[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    int t41;
    char *t42;
    unsigned int t43;
    int t44;
    int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(21, ng0);

LAB13:    xsi_set_current_line(22, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2408);
    t32 = (t0 + 2408);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 2408);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t30, t31, t34, t37, 2, 1, t38, 32, 1);
    t39 = (t30 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (!(t40));
    t42 = (t31 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (!(t43));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2408);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t41 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t44 = (!(t10));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB16;

LAB17:    xsi_set_current_line(24, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2408);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t41 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t44 = (!(t10));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2408);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng8)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t41 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t44 = (!(t10));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2408);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng10)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t41 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t44 = (!(t10));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 2408);
    t4 = (t0 + 2408);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 2408);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng12)));
    xsi_vlog_generic_convert_array_indices(t6, t30, t7, t22, 2, 1, t28, 32, 1);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t41 = (!(t9));
    t32 = (t30 + 4);
    t10 = *((unsigned int *)t32);
    t44 = (!(t10));
    t45 = (t41 && t44);
    if (t45 == 1)
        goto LAB24;

LAB25:    goto LAB12;

LAB14:    t46 = *((unsigned int *)t30);
    t47 = *((unsigned int *)t31);
    t48 = (t46 - t47);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t29, t28, 0, *((unsigned int *)t31), t49);
    goto LAB15;

LAB16:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t48 = (t11 - t12);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t30), t49);
    goto LAB17;

LAB18:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t48 = (t11 - t12);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t30), t49);
    goto LAB19;

LAB20:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t48 = (t11 - t12);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t30), t49);
    goto LAB21;

LAB22:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t48 = (t11 - t12);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t30), t49);
    goto LAB23;

LAB24:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t30);
    t48 = (t11 - t12);
    t49 = (t48 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t30), t49);
    goto LAB25;

}

static void Always_31_1(char *t0)
{
    char t7[8];
    char t22[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t0 + 2408);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t0 + 2408);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = (t0 + 1048U);
    t15 = *((char **)t14);
    xsi_vlog_generic_get_array_select_value(t7, 8, t6, t10, t13, 2, 1, t15, 8, 2);
    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 8);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 6);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 6);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 3U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 3U);
    t8 = (t0 + 1608);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 3);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 3);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 7U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 7U);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 0);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t20 & 7U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 7U);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 3);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t22, 0, 8);
    t5 = (t22 + 4);
    t6 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 0);
    *((unsigned int *)t22) = t17;
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 0);
    *((unsigned int *)t5) = t19;
    t20 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t20 & 63U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 63U);
    t8 = (t0 + 1048U);
    t9 = *((char **)t8);
    memset(t23, 0, 8);
    t8 = (t23 + 4);
    t10 = (t9 + 4);
    t24 = *((unsigned int *)t9);
    t25 = (t24 >> 6);
    *((unsigned int *)t23) = t25;
    t26 = *((unsigned int *)t10);
    t27 = (t26 >> 6);
    *((unsigned int *)t8) = t27;
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t28 & 3U);
    t29 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t29 & 3U);
    xsi_vlogtype_concat(t7, 8, 8, 2U, t23, 2, t22, 6);
    t11 = (t0 + 2248);
    xsi_vlogvar_assign_value(t11, t7, 0, 0, 8);
    goto LAB2;

}


extern void work_m_00000000003198688313_3032547478_init()
{
	static char *pe[] = {(void *)Always_16_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000003198688313_3032547478", "isim/tb_mips_isim_beh.exe.sim/work/m_00000000003198688313_3032547478.didat");
	xsi_register_executes(pe);
}
