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
static const char *ng0 = "V:/Verilog/MIPSPipelined/control_unit.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {3U, 0U};



static void Always_11_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(27, ng0);

LAB19:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB15:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);

LAB20:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(48, ng0);

LAB33:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(15, ng0);

LAB16:    xsi_set_current_line(16, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(19, ng0);

LAB17:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(23, ng0);

LAB18:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB15;

LAB21:    xsi_set_current_line(33, ng0);

LAB30:    xsi_set_current_line(34, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB29;

LAB23:    xsi_set_current_line(38, ng0);

LAB31:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng2)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB29;

LAB25:    xsi_set_current_line(43, ng0);

LAB32:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng4)));
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB29;

}


extern void work_m_00000000002971418419_1351276808_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("work_m_00000000002971418419_1351276808", "isim/control_unit_isim_beh.exe.sim/work/m_00000000002971418419_1351276808.didat");
	xsi_register_executes(pe);
}
