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
static const char *ng0 = "B:/XikangStevenLab1/Banch1.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static const char *ng3 = "TC1 ";
static unsigned int ng4[] = {6U, 0U};
static const char *ng5 = "Result is Wrong %b";
static unsigned int ng6[] = {0U, 0U};
static const char *ng7 = "TC2 ";
static unsigned int ng8[] = {10U, 0U};



static void Initial_32_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
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
    char *t24;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);

LAB4:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(34, ng0);

LAB6:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2976);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB7:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t7) == 0)
        goto LAB8;

LAB10:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;

LAB11:    t14 = (t4 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t4) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB13;

LAB12:    t22 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2248);
    xsi_vlogvar_assign_value(t24, t4, 0, 0, 1);
    goto LAB5;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t4) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB12;

LAB14:    goto LAB1;

}

static void Initial_38_1(char *t0)
{
    char t4[8];
    char t8[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(43, ng0);
    xsi_vlogfile_write(1, 0, 0, ng3, 1, t0);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t2 = (t0 + 1048U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t3, 1);
    t2 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB8;

LAB7:    if (t20 != 0)
        goto LAB9;

LAB10:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3224);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB10;

LAB9:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(44, ng0);
    t31 = (t0 + 1528U);
    t32 = *((char **)t31);
    t31 = (t0 + 1368U);
    t33 = *((char **)t31);
    t31 = (t0 + 1208U);
    t34 = *((char **)t31);
    t31 = (t0 + 1048U);
    t35 = *((char **)t31);
    xsi_vlogtype_concat(t30, 4, 4, 4U, t35, 1, t34, 1, t33, 1, t32, 1);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t30, 4);
    goto LAB13;

LAB14:    xsi_set_current_line(49, ng0);
    xsi_vlogfile_write(1, 0, 0, ng7, 1, t0);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1368U);
    t5 = *((char **)t2);
    t2 = (t0 + 1208U);
    t6 = *((char **)t2);
    t2 = (t0 + 1048U);
    t7 = *((char **)t2);
    xsi_vlogtype_concat(t4, 4, 4, 4U, t7, 1, t6, 1, t5, 1, t3, 1);
    t2 = ((char*)((ng8)));
    memset(t8, 0, 8);
    t9 = (t4 + 4);
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB15:    if (t20 != 0)
        goto LAB17;

LAB18:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB19;

LAB20:
LAB21:    goto LAB1;

LAB16:    *((unsigned int *)t8) = 1;
    goto LAB18;

LAB17:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(50, ng0);
    t31 = (t0 + 1528U);
    t32 = *((char **)t31);
    t31 = (t0 + 1368U);
    t33 = *((char **)t31);
    t31 = (t0 + 1208U);
    t34 = *((char **)t31);
    t31 = (t0 + 1048U);
    t35 = *((char **)t31);
    xsi_vlogtype_concat(t30, 4, 4, 4U, t35, 1, t34, 1, t33, 1, t32, 1);
    xsi_vlogfile_write(1, 0, 0, ng5, 2, t0, (char)118, t30, 4);
    goto LAB21;

}


extern void work_m_00000000002937214094_1546932407_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Initial_38_1};
	xsi_register_didat("work_m_00000000002937214094_1546932407", "isim/Try1_Try1_sch_tb_isim_beh.exe.sim/work/m_00000000002937214094_1546932407.didat");
	xsi_register_executes(pe);
}
