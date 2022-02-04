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
static const char *ng0 = "C:/Users/ASUS.PIESC/Desktop/Logic Circuit Final Project Section-02/module_7/controller.v";



static void Always_44_0(char *t0)
{
    char t4[8];
    char t7[8];
    char t17[8];
    char t25[8];
    char t56[8];
    char t59[8];
    char t69[8];
    char t77[8];
    char t108[8];
    char t140[8];
    char t143[8];
    char t153[8];
    char t161[8];
    char t192[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    char *t112;
    char *t113;
    char *t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    int t132;
    int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t141;
    char *t142;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    char *t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    unsigned int t176;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    char *t181;
    char *t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t193;
    unsigned int t194;
    unsigned int t195;
    char *t196;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    char *t206;
    char *t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    unsigned int t211;
    unsigned int t212;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    int t216;
    int t217;
    unsigned int t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    char *t224;
    unsigned int t225;
    unsigned int t226;
    unsigned int t227;
    unsigned int t228;
    unsigned int t229;
    char *t230;
    char *t231;

LAB0:    t1 = (t0 + 4128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 4448);
    *((int *)t2) = 1;
    t3 = (t0 + 4160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);
    t5 = (t0 + 1048U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    t14 = (t13 & 1);
    *((unsigned int *)t5) = t14;
    t15 = (t0 + 2008U);
    t16 = *((char **)t15);
    memset(t17, 0, 8);
    t15 = (t17 + 4);
    t18 = (t16 + 4);
    t19 = *((unsigned int *)t16);
    t20 = (t19 >> 0);
    t21 = (t20 & 1);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 >> 0);
    t24 = (t23 & 1);
    *((unsigned int *)t15) = t24;
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t17);
    t28 = (t26 ^ t27);
    *((unsigned int *)t25) = t28;
    t29 = (t7 + 4);
    t30 = (t17 + 4);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t29);
    t33 = *((unsigned int *)t30);
    t34 = (t32 | t33);
    *((unsigned int *)t31) = t34;
    t35 = *((unsigned int *)t31);
    t36 = (t35 != 0);
    if (t36 == 1)
        goto LAB5;

LAB6:
LAB7:    memset(t4, 0, 8);
    t39 = (t25 + 4);
    t40 = *((unsigned int *)t39);
    t41 = (~(t40));
    t42 = *((unsigned int *)t25);
    t43 = (t42 & t41);
    t44 = (t43 & 1U);
    if (t44 != 0)
        goto LAB11;

LAB9:    if (*((unsigned int *)t39) == 0)
        goto LAB8;

LAB10:    t45 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t45) = 1;

LAB11:    t46 = (t4 + 4);
    t47 = (t25 + 4);
    t48 = *((unsigned int *)t25);
    t49 = (~(t48));
    *((unsigned int *)t4) = t49;
    *((unsigned int *)t46) = 0;
    if (*((unsigned int *)t47) != 0)
        goto LAB13;

LAB12:    t54 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t54 & 1U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 1U);
    t57 = (t0 + 1048U);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    t57 = (t59 + 4);
    t60 = (t58 + 4);
    t61 = *((unsigned int *)t58);
    t62 = (t61 >> 1);
    t63 = (t62 & 1);
    *((unsigned int *)t59) = t63;
    t64 = *((unsigned int *)t60);
    t65 = (t64 >> 1);
    t66 = (t65 & 1);
    *((unsigned int *)t57) = t66;
    t67 = (t0 + 2008U);
    t68 = *((char **)t67);
    memset(t69, 0, 8);
    t67 = (t69 + 4);
    t70 = (t68 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 1);
    t73 = (t72 & 1);
    *((unsigned int *)t69) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 >> 1);
    t76 = (t75 & 1);
    *((unsigned int *)t67) = t76;
    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t69);
    t80 = (t78 ^ t79);
    *((unsigned int *)t77) = t80;
    t81 = (t59 + 4);
    t82 = (t69 + 4);
    t83 = (t77 + 4);
    t84 = *((unsigned int *)t81);
    t85 = *((unsigned int *)t82);
    t86 = (t84 | t85);
    *((unsigned int *)t83) = t86;
    t87 = *((unsigned int *)t83);
    t88 = (t87 != 0);
    if (t88 == 1)
        goto LAB14;

LAB15:
LAB16:    memset(t56, 0, 8);
    t91 = (t77 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t77);
    t95 = (t94 & t93);
    t96 = (t95 & 1U);
    if (t96 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t91) == 0)
        goto LAB17;

LAB19:    t97 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t97) = 1;

LAB20:    t98 = (t56 + 4);
    t99 = (t77 + 4);
    t100 = *((unsigned int *)t77);
    t101 = (~(t100));
    *((unsigned int *)t56) = t101;
    *((unsigned int *)t98) = 0;
    if (*((unsigned int *)t99) != 0)
        goto LAB22;

LAB21:    t106 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t106 & 1U);
    t107 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t107 & 1U);
    t109 = *((unsigned int *)t4);
    t110 = *((unsigned int *)t56);
    t111 = (t109 & t110);
    *((unsigned int *)t108) = t111;
    t112 = (t4 + 4);
    t113 = (t56 + 4);
    t114 = (t108 + 4);
    t115 = *((unsigned int *)t112);
    t116 = *((unsigned int *)t113);
    t117 = (t115 | t116);
    *((unsigned int *)t114) = t117;
    t118 = *((unsigned int *)t114);
    t119 = (t118 != 0);
    if (t119 == 1)
        goto LAB23;

LAB24:
LAB25:    t141 = (t0 + 1048U);
    t142 = *((char **)t141);
    memset(t143, 0, 8);
    t141 = (t143 + 4);
    t144 = (t142 + 4);
    t145 = *((unsigned int *)t142);
    t146 = (t145 >> 2);
    t147 = (t146 & 1);
    *((unsigned int *)t143) = t147;
    t148 = *((unsigned int *)t144);
    t149 = (t148 >> 2);
    t150 = (t149 & 1);
    *((unsigned int *)t141) = t150;
    t151 = (t0 + 2008U);
    t152 = *((char **)t151);
    memset(t153, 0, 8);
    t151 = (t153 + 4);
    t154 = (t152 + 4);
    t155 = *((unsigned int *)t152);
    t156 = (t155 >> 2);
    t157 = (t156 & 1);
    *((unsigned int *)t153) = t157;
    t158 = *((unsigned int *)t154);
    t159 = (t158 >> 2);
    t160 = (t159 & 1);
    *((unsigned int *)t151) = t160;
    t162 = *((unsigned int *)t143);
    t163 = *((unsigned int *)t153);
    t164 = (t162 ^ t163);
    *((unsigned int *)t161) = t164;
    t165 = (t143 + 4);
    t166 = (t153 + 4);
    t167 = (t161 + 4);
    t168 = *((unsigned int *)t165);
    t169 = *((unsigned int *)t166);
    t170 = (t168 | t169);
    *((unsigned int *)t167) = t170;
    t171 = *((unsigned int *)t167);
    t172 = (t171 != 0);
    if (t172 == 1)
        goto LAB26;

LAB27:
LAB28:    memset(t140, 0, 8);
    t175 = (t161 + 4);
    t176 = *((unsigned int *)t175);
    t177 = (~(t176));
    t178 = *((unsigned int *)t161);
    t179 = (t178 & t177);
    t180 = (t179 & 1U);
    if (t180 != 0)
        goto LAB32;

LAB30:    if (*((unsigned int *)t175) == 0)
        goto LAB29;

LAB31:    t181 = (t140 + 4);
    *((unsigned int *)t140) = 1;
    *((unsigned int *)t181) = 1;

LAB32:    t182 = (t140 + 4);
    t183 = (t161 + 4);
    t184 = *((unsigned int *)t161);
    t185 = (~(t184));
    *((unsigned int *)t140) = t185;
    *((unsigned int *)t182) = 0;
    if (*((unsigned int *)t183) != 0)
        goto LAB34;

LAB33:    t190 = *((unsigned int *)t140);
    *((unsigned int *)t140) = (t190 & 1U);
    t191 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t191 & 1U);
    t193 = *((unsigned int *)t108);
    t194 = *((unsigned int *)t140);
    t195 = (t193 & t194);
    *((unsigned int *)t192) = t195;
    t196 = (t108 + 4);
    t197 = (t140 + 4);
    t198 = (t192 + 4);
    t199 = *((unsigned int *)t196);
    t200 = *((unsigned int *)t197);
    t201 = (t199 | t200);
    *((unsigned int *)t198) = t201;
    t202 = *((unsigned int *)t198);
    t203 = (t202 != 0);
    if (t203 == 1)
        goto LAB35;

LAB36:
LAB37:    t224 = (t192 + 4);
    t225 = *((unsigned int *)t224);
    t226 = (~(t225));
    t227 = *((unsigned int *)t192);
    t228 = (t227 & t226);
    t229 = (t228 != 0);
    if (t229 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB2;

LAB5:    t37 = *((unsigned int *)t25);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t25) = (t37 | t38);
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB13:    t50 = *((unsigned int *)t4);
    t51 = *((unsigned int *)t47);
    *((unsigned int *)t4) = (t50 | t51);
    t52 = *((unsigned int *)t46);
    t53 = *((unsigned int *)t47);
    *((unsigned int *)t46) = (t52 | t53);
    goto LAB12;

LAB14:    t89 = *((unsigned int *)t77);
    t90 = *((unsigned int *)t83);
    *((unsigned int *)t77) = (t89 | t90);
    goto LAB16;

LAB17:    *((unsigned int *)t56) = 1;
    goto LAB20;

LAB22:    t102 = *((unsigned int *)t56);
    t103 = *((unsigned int *)t99);
    *((unsigned int *)t56) = (t102 | t103);
    t104 = *((unsigned int *)t98);
    t105 = *((unsigned int *)t99);
    *((unsigned int *)t98) = (t104 | t105);
    goto LAB21;

LAB23:    t120 = *((unsigned int *)t108);
    t121 = *((unsigned int *)t114);
    *((unsigned int *)t108) = (t120 | t121);
    t122 = (t4 + 4);
    t123 = (t56 + 4);
    t124 = *((unsigned int *)t4);
    t125 = (~(t124));
    t126 = *((unsigned int *)t122);
    t127 = (~(t126));
    t128 = *((unsigned int *)t56);
    t129 = (~(t128));
    t130 = *((unsigned int *)t123);
    t131 = (~(t130));
    t132 = (t125 & t127);
    t133 = (t129 & t131);
    t134 = (~(t132));
    t135 = (~(t133));
    t136 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t136 & t134);
    t137 = *((unsigned int *)t114);
    *((unsigned int *)t114) = (t137 & t135);
    t138 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t138 & t134);
    t139 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t139 & t135);
    goto LAB25;

LAB26:    t173 = *((unsigned int *)t161);
    t174 = *((unsigned int *)t167);
    *((unsigned int *)t161) = (t173 | t174);
    goto LAB28;

LAB29:    *((unsigned int *)t140) = 1;
    goto LAB32;

LAB34:    t186 = *((unsigned int *)t140);
    t187 = *((unsigned int *)t183);
    *((unsigned int *)t140) = (t186 | t187);
    t188 = *((unsigned int *)t182);
    t189 = *((unsigned int *)t183);
    *((unsigned int *)t182) = (t188 | t189);
    goto LAB33;

LAB35:    t204 = *((unsigned int *)t192);
    t205 = *((unsigned int *)t198);
    *((unsigned int *)t192) = (t204 | t205);
    t206 = (t108 + 4);
    t207 = (t140 + 4);
    t208 = *((unsigned int *)t108);
    t209 = (~(t208));
    t210 = *((unsigned int *)t206);
    t211 = (~(t210));
    t212 = *((unsigned int *)t140);
    t213 = (~(t212));
    t214 = *((unsigned int *)t207);
    t215 = (~(t214));
    t216 = (t209 & t211);
    t217 = (t213 & t215);
    t218 = (~(t216));
    t219 = (~(t217));
    t220 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t220 & t218);
    t221 = *((unsigned int *)t198);
    *((unsigned int *)t198) = (t221 & t219);
    t222 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t222 & t218);
    t223 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t223 & t219);
    goto LAB37;

LAB38:    xsi_set_current_line(46, ng0);

LAB41:    xsi_set_current_line(47, ng0);
    t230 = (t0 + 2488U);
    t231 = *((char **)t230);
    t230 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t230, t231, 0, 0, 8, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    goto LAB40;

}


extern void work_m_00000000003695528548_3092946469_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_00000000003695528548_3092946469", "isim/test_bench_isim_beh.exe.sim/work/m_00000000003695528548_3092946469.didat");
	xsi_register_executes(pe);
}
