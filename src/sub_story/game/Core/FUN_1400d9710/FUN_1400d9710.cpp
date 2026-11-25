// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d9710  size: 6552 bytes
// Name:    FUN_1400d9710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1408c8980, FUN_141530bf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d9710(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  uint uVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  longlong *plVar16;
  undefined1 auVar17 [8];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar59;
  float fVar61;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar60;
  float fVar62;
  float fVar63;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  short sVar80;
  float fVar81;
  float fVar103;
  float fVar104;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar105;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  short sVar102;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar145;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined8 uVar146;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined8 uVar152;
  undefined1 auVar151 [64];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [64];
  undefined1 auVar168 [64];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [64];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [64];
  float fVar177;
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  float fVar190;
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  float fVar188;
  float fVar189;
  undefined1 auVar187 [64];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [64];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [64];
  float fVar204;
  float fVar205;
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  float fVar218;
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  float fVar215;
  float fVar217;
  float fVar219;
  undefined1 auVar212 [16];
  float fVar214;
  float fVar216;
  undefined1 auVar213 [64];
  uint uVar220;
  uint uVar224;
  uint uVar225;
  uint uVar226;
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 auStack_208 [8];
  undefined8 uStack_200;
  undefined1 auStack_1f8 [8];
  float fStack_1f0;
  float fStack_1ec;
  undefined1 auStack_1e8 [8];
  undefined8 uStack_1e0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 auStack_1a8 [8];
  float fStack_1a0;
  float fStack_19c;
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined8 uStack_158;
  undefined8 uStack_150;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  
  if (((*(byte *)(param_6 + 4) & 1) == 0) && (*(float *)(param_4 + 0x174) <= 0.0)) {
    *(undefined8 *)(param_4 + 0x184) = 0;
    return;
  }
  bVar12 = *(byte *)(param_3 + 0x120) & 0x20;
  fVar177 = *(float *)(&UNK_146170728 + (ulonglong)(bVar12 == 0) * 4) * *(float *)(param_3 + 0xec);
  if (0 < *(int *)(param_1 + 0x378)) {
    fVar177 = fVar177 * _DAT_146159f8c;
  }
  auVar176 = ZEXT464((uint)fVar177);
  if ((((*(byte *)(param_3 + 0x140) < 0x40) ||
       ((*(byte *)(param_3 + 0x140) & 8) != 0 || bVar12 != 0)) ||
      (bVar12 = *(byte *)(param_3 + 0x14c), (bVar12 & 4) != 0)) || ((bVar12 & 1) != 0)) {
    if ((*(byte *)(param_5 + 0x110) & 0x20) != 0) {
      bVar12 = *(byte *)(param_3 + 0x14c);
      bVar10 = false;
      goto LAB_1400d981b;
    }
    bVar10 = false;
    uStack_220._0_4_ = 0.0;
  }
  else {
    bVar10 = true;
LAB_1400d981b:
    uStack_220._0_4_ = _DAT_145fc6ed8;
    if ((bVar12 & 2) != 0) {
      uStack_220._0_4_ = 0.0;
    }
  }
  if ((*(byte *)(param_1 + 0x91) & 4) == 0) {
    fVar188 = (float)uStack_220 - *(float *)(param_4 + 0x180);
    if (fVar177 <= (float)((uint)fVar188 & _DAT_145fc6f4c)) {
      auVar91._0_12_ = ZEXT812(0);
      auVar91._12_4_ = 0;
      auVar91 = vcmpss_avx(ZEXT416((uint)fVar188),auVar91,1);
      auVar75._0_4_ = (uint)fVar177 ^ _DAT_145fc6f10;
      auVar75._4_4_ = _DAT_145fc6f10;
      auVar75._8_4_ = _DAT_145fc6f10;
      auVar75._12_4_ = _DAT_145fc6f10;
      auVar91 = vblendvps_avx(ZEXT416((uint)fVar177),auVar75,auVar91);
      uStack_220._0_4_ = auVar91._0_4_ + *(float *)(param_4 + 0x180);
    }
  }
  *(float *)(param_4 + 0x180) = (float)uStack_220;
  plVar16 = *(longlong **)(param_5 + 8);
  iVar2 = *(int *)(param_5 + 0x10);
  iVar14 = func_0x000144e05fa0(plVar16[1]);
  if (iVar2 == iVar14) {
    auVar157._8_8_ = _UNK_145fc6ee8;
    auVar157._0_8_ = _DAT_145fc6ee0;
  }
  else {
    uVar15 = (**(code **)(*plVar16 + 0xf0))(plVar16,iVar2);
    (**(code **)(*plVar16 + 0x108))(plVar16,uVar15,auStack_208);
    auVar157 = _auStack_208;
  }
  auVar171 = ZEXT1664(auVar157);
  (**(code **)(*plVar16 + 0x88))(plVar16,auStack_208);
  uVar11 = _DAT_145fc6f10;
  auVar151 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
  if ((*(byte *)(param_5 + 0x110) & 0x20) == 0) {
    FUN_1408c8980(*(undefined8 *)(param_5 + 8),*(undefined4 *)(param_5 + 0x10),auStack_208);
    plVar16 = *(longlong **)(param_5 + 8);
    iVar2 = *(int *)(param_5 + 0x10);
    auVar52._0_4_ = auStack_208._0_4_ + auStack_208._0_4_;
    auVar52._4_4_ = auStack_208._4_4_ + auStack_208._4_4_;
    auVar52._8_4_ = auStack_208._8_4_ + auStack_208._8_4_;
    auVar52._12_4_ = uStack_200._4_4_ + uStack_200._4_4_;
    auVar91 = vshufps_avx(_auStack_208,_auStack_208,0xc9);
    auVar75 = vshufps_avx(_auStack_208,_auStack_208,0xd2);
    auVar157 = vshufps_avx(auVar52,auVar52,0xc9);
    auVar175 = vshufps_avx(auVar52,auVar52,0xd2);
    auVar167 = ZEXT1664(CONCAT412(-(uStack_200._4_4_ * auVar175._12_4_) +
                                  auVar91._12_4_ * auVar52._12_4_,
                                  CONCAT48(-(uStack_200._4_4_ * auVar175._8_4_) +
                                           auVar91._8_4_ * auVar52._8_4_,
                                           CONCAT44(-(uStack_200._4_4_ * auVar175._4_4_) +
                                                    auVar91._4_4_ * auVar52._4_4_,
                                                    -(uStack_200._4_4_ * auVar175._0_4_) +
                                                    auVar91._0_4_ * auVar52._0_4_))));
    auVar176 = ZEXT1664(CONCAT412(auVar75._12_4_ * auVar52._12_4_ +
                                  auVar157._12_4_ * uStack_200._4_4_,
                                  CONCAT48(auVar75._8_4_ * auVar52._8_4_ +
                                           auVar157._8_4_ * uStack_200._4_4_,
                                           CONCAT44(auVar75._4_4_ * auVar52._4_4_ +
                                                    auVar157._4_4_ * uStack_200._4_4_,
                                                    auVar75._0_4_ * auVar52._0_4_ +
                                                    auVar157._0_4_ * uStack_200._4_4_))));
    auVar171 = ZEXT1664(CONCAT412(-(auVar175._12_4_ * auVar75._12_4_) -
                                  (auVar91._12_4_ * auVar157._12_4_ - auVar151._12_4_),
                                  CONCAT48(-(auVar175._8_4_ * auVar75._8_4_) -
                                           (auVar91._8_4_ * auVar157._8_4_ - auVar151._8_4_),
                                           CONCAT44(-(auVar175._4_4_ * auVar75._4_4_) -
                                                    (auVar91._4_4_ * auVar157._4_4_ - auVar151._4_4_
                                                    ),-(auVar175._0_4_ * auVar75._0_4_) -
                                                      (auVar91._0_4_ * auVar157._0_4_ -
                                                      auVar151._0_4_)))));
    iVar14 = func_0x000144e05fa0(plVar16[1]);
    auVar91 = auVar176._0_16_;
    if (iVar2 == iVar14) {
      auVar175._8_8_ = _UNK_145fc6ee8;
      auVar175._0_8_ = _DAT_145fc6ee0;
    }
    else {
      uVar15 = (**(code **)(*plVar16 + 0xf0))(plVar16,iVar2);
      (**(code **)(*plVar16 + 0x108))(plVar16,uVar15,auStack_208);
      auVar175 = _auStack_208;
    }
    auVar187 = ZEXT1664(auVar175);
    (**(code **)(*plVar16 + 0x88))(plVar16,auStack_208);
    auVar29._4_4_ = auStack_208._0_4_;
    auVar29._0_4_ = auStack_208._0_4_;
    auVar29._8_4_ = auStack_208._0_4_;
    auVar29._12_4_ = auStack_208._0_4_;
    auVar53._4_4_ = auStack_1f8._4_4_;
    auVar53._0_4_ = auStack_1f8._4_4_;
    auVar53._8_4_ = auStack_1f8._4_4_;
    auVar53._12_4_ = auStack_1f8._4_4_;
    auVar76._4_4_ = (float)uStack_1e0;
    auVar76._0_4_ = (float)uStack_1e0;
    auVar76._8_4_ = (float)uStack_1e0;
    auVar76._12_4_ = (float)uStack_1e0;
    auVar75 = vblendps_avx(_auStack_208,_auStack_1f8,2);
    auVar75 = vblendps_avx(_auStack_1e8,auVar75,3);
    auVar157 = vshufps_avx(auVar75,auVar75,0x49);
    auVar175 = vshufps_avx(auVar75,auVar75,0x92);
    auVar52 = vshufps_avx(auVar75,auVar75,0x24);
    auVar199._0_4_ = auVar175._0_4_ + auVar157._0_4_;
    auVar199._4_4_ = auVar175._4_4_ + auVar157._4_4_;
    auVar199._8_4_ = auVar175._8_4_ + auVar157._8_4_;
    auVar199._12_4_ = auVar175._12_4_ + auVar157._12_4_;
    auVar92._0_4_ = auVar199._0_4_ + auVar52._0_4_;
    auVar92._4_4_ = auVar199._4_4_ + auVar52._4_4_;
    auVar92._8_4_ = auVar199._8_4_ + auVar52._8_4_;
    auVar92._12_4_ = auVar199._12_4_ + auVar52._12_4_;
    auVar75 = vsubps_avx(auVar75,auVar199);
    auVar75 = vblendps_avx(auVar75,auVar92,8);
    auVar200._0_4_ = auVar75._0_4_ + auVar151._0_4_;
    auVar200._4_4_ = auVar75._4_4_ + auVar151._4_4_;
    auVar200._8_4_ = auVar75._8_4_ + auVar151._8_4_;
    auVar200._12_4_ = auVar75._12_4_ + auVar151._12_4_;
    auVar75 = vrsqrtps_avx(auVar200);
    fVar177 = auVar75._0_4_;
    fVar188 = auVar75._4_4_;
    fVar189 = auVar75._8_4_;
    fVar190 = auVar75._12_4_;
    auVar75 = vblendps_avx(_auStack_1f8,_auStack_1e8,3);
    auVar157 = vshufps_avx(auVar75,_auStack_208,0x12);
    auVar75 = vblendps_avx(_auStack_208,_auStack_1f8,3);
    auVar75 = vblendps_avx(auVar75,_auStack_1e8,2);
    auVar75 = vshufps_avx(auVar75,auVar75,9);
    auVar141._0_4_ = auVar157._0_4_ + auVar75._0_4_;
    auVar141._4_4_ = auVar157._4_4_ + auVar75._4_4_;
    auVar141._8_4_ = auVar157._8_4_ + auVar75._8_4_;
    auVar141._12_4_ = auVar157._12_4_ + auVar75._12_4_;
    auVar175 = vsubps_avx(auVar157,auVar75);
    auVar164._0_4_ =
         ((-(_DAT_145fc6edc * fVar177 * fVar177 * auVar200._0_4_) + _DAT_145fc6edc) * fVar177 +
         fVar177) * _DAT_145fc6edc;
    auVar164._4_4_ =
         ((-(_DAT_145fc6edc * fVar188 * fVar188 * auVar200._4_4_) + _DAT_145fc6edc) * fVar188 +
         fVar188) * _DAT_145fc6edc;
    auVar164._8_4_ =
         ((-(_DAT_145fc6edc * fVar189 * fVar189 * auVar200._8_4_) + _DAT_145fc6edc) * fVar189 +
         fVar189) * _DAT_145fc6edc;
    auVar164._12_4_ =
         ((-(_DAT_145fc6edc * fVar190 * fVar190 * auVar200._12_4_) + _DAT_145fc6edc) * fVar190 +
         fVar190) * _DAT_145fc6edc;
    auVar75 = vblendps_avx(auVar141,auVar175,1);
    auVar157 = vblendps_avx(auVar141,auVar175,2);
    auVar30 = vshufps_avx(auVar141,auVar175,0xa1);
    auVar175 = vblendps_avx(auVar175,auVar200,8);
    auVar54 = vshufps_avx(auVar75,auVar75,0x18);
    auVar52 = vshufpd_avx(auVar157,auVar157,1);
    auVar75 = vblendps_avx(auVar30,auVar200,4);
    auVar157 = vblendps_avx(auVar54,auVar200,1);
    auVar52 = vblendps_avx(auVar52,auVar200,2);
    auVar201._0_4_ = auVar164._0_4_ * auVar157._0_4_;
    auVar201._4_4_ = auVar164._0_4_ * auVar157._4_4_;
    auVar201._8_4_ = auVar164._0_4_ * auVar157._8_4_;
    auVar201._12_4_ = auVar164._0_4_ * auVar157._12_4_;
    auVar157 = vshufps_avx(auVar164,auVar164,0x55);
    auVar212._0_4_ = auVar157._0_4_ * auVar52._0_4_;
    auVar212._4_4_ = auVar157._4_4_ * auVar52._4_4_;
    auVar212._8_4_ = auVar157._8_4_ * auVar52._8_4_;
    auVar212._12_4_ = auVar157._12_4_ * auVar52._12_4_;
    auVar157 = vshufps_avx(auVar164,auVar164,0xaa);
    auVar52 = vshufps_avx(auVar164,auVar164,0xff);
    auVar142._0_4_ = auVar157._0_4_ * auVar75._0_4_;
    auVar142._4_4_ = auVar157._4_4_ * auVar75._4_4_;
    auVar142._8_4_ = auVar157._8_4_ * auVar75._8_4_;
    auVar142._12_4_ = auVar157._12_4_ * auVar75._12_4_;
    auVar119._0_4_ = auVar52._0_4_ * auVar175._0_4_;
    auVar119._4_4_ = auVar52._4_4_ * auVar175._4_4_;
    auVar119._8_4_ = auVar52._8_4_ * auVar175._8_4_;
    auVar119._12_4_ = auVar52._12_4_ * auVar175._12_4_;
    auVar75 = vcmpps_avx(auVar29,auVar53,1);
    auVar157 = vcmpps_avx(auVar53,auVar76,1);
    auVar175 = vcmpps_avx(auVar29,auVar76,1);
    auVar76 = auVar171._0_16_;
    auVar52 = vshufps_avx(auVar76,auVar76,0x55);
    auVar213 = ZEXT1664(auVar52);
    auVar30._0_4_ = auVar175._0_4_ & auVar157._0_4_;
    auVar30._4_4_ = auVar175._4_4_ & auVar157._4_4_;
    auVar30._8_4_ = auVar175._8_4_ & auVar157._8_4_;
    auVar30._12_4_ = auVar175._12_4_ & auVar157._12_4_;
    auVar157 = vcmpps_avx(ZEXT816(0) << 0x20,auVar92,1);
    auVar75 = vblendvps_avx(auVar201,auVar212,auVar75);
    auVar75 = vblendvps_avx(auVar75,auVar142,auVar30);
    auVar54._0_4_ = auVar157._0_4_;
    auVar54._4_4_ = auVar54._0_4_;
    auVar54._8_4_ = auVar54._0_4_;
    auVar54._12_4_ = auVar54._0_4_;
    auVar157 = vblendvps_avx(auVar75,auVar119,auVar54);
    auVar55._0_4_ = (uint)auVar187._0_4_ ^ uVar11;
    auVar55._4_4_ = (uint)auVar187._4_4_ ^ uVar11;
    auVar55._8_4_ = (uint)auVar187._8_4_ ^ uVar11;
    auVar55._12_4_ = (uint)auVar187._12_4_ ^ uVar11;
    auVar175 = vshufps_avx(auVar157,auVar157,0xff);
    auVar53 = auVar187._0_16_;
    auVar75 = vblendps_avx(auVar55,auVar53,10);
    fVar177 = auVar157._0_4_;
    auVar30 = vshufps_avx(auVar157,auVar157,0x55);
    auVar54 = vshufps_avx(auVar157,auVar157,0xaa);
    auVar29 = vshufps_avx(auVar75,auVar75,0x1b);
    auVar157 = vshufpd_avx(auVar53,auVar55,1);
    auVar75 = vblendps_avx(auVar55,auVar53,9);
    auVar55 = auVar167._0_16_;
    auVar53 = vshufps_avx(auVar55,auVar55,0x55);
    auVar193 = ZEXT1664(auVar53);
    auVar75 = vshufps_avx(auVar75,auVar75,0xb1);
    auVar56._0_4_ =
         auVar54._0_4_ * auVar75._0_4_ +
         auVar30._0_4_ * auVar157._0_4_ + fVar177 * auVar29._0_4_ + auVar187._0_4_ * auVar175._0_4_;
    auVar56._4_4_ =
         auVar54._4_4_ * auVar75._4_4_ +
         auVar30._4_4_ * auVar157._4_4_ + fVar177 * auVar29._4_4_ + auVar187._4_4_ * auVar175._4_4_;
    auVar56._8_4_ =
         auVar54._8_4_ * auVar75._8_4_ +
         auVar30._8_4_ * auVar157._8_4_ + fVar177 * auVar29._8_4_ + auVar187._8_4_ * auVar175._8_4_;
    auVar56._12_4_ =
         auVar54._12_4_ * auVar75._12_4_ +
         auVar30._12_4_ * auVar157._12_4_ +
         fVar177 * auVar29._12_4_ + auVar187._12_4_ * auVar175._12_4_;
    auVar31._0_4_ = auVar56._0_4_ + auVar56._0_4_;
    auVar31._4_4_ = auVar56._4_4_ + auVar56._4_4_;
    auVar31._8_4_ = auVar56._8_4_ + auVar56._8_4_;
    auVar31._12_4_ = auVar56._12_4_ + auVar56._12_4_;
    auVar75 = vshufps_avx(auVar56,auVar56,0xff);
    auVar157 = vshufps_avx(auVar56,auVar56,0xc9);
    auVar175 = vshufps_avx(auVar56,auVar56,0xd2);
    auVar30 = vshufps_avx(auVar31,auVar31,0xc9);
    auVar54 = vshufps_avx(auVar31,auVar31,0xd2);
    auVar165._0_4_ = auVar175._0_4_ * auVar31._0_4_ + auVar30._0_4_ * auVar75._0_4_;
    auVar165._4_4_ = auVar175._4_4_ * auVar31._4_4_ + auVar30._4_4_ * auVar75._4_4_;
    auVar165._8_4_ = auVar175._8_4_ * auVar31._8_4_ + auVar30._8_4_ * auVar75._8_4_;
    auVar165._12_4_ = auVar175._12_4_ * auVar31._12_4_ + auVar30._12_4_ * auVar75._12_4_;
    auVar93._0_4_ = -(auVar75._0_4_ * auVar54._0_4_) + auVar157._0_4_ * auVar31._0_4_;
    auVar93._4_4_ = -(auVar75._4_4_ * auVar54._4_4_) + auVar157._4_4_ * auVar31._4_4_;
    auVar93._8_4_ = -(auVar75._8_4_ * auVar54._8_4_) + auVar157._8_4_ * auVar31._8_4_;
    auVar93._12_4_ = -(auVar75._12_4_ * auVar54._12_4_) + auVar157._12_4_ * auVar31._12_4_;
    auVar120._0_4_ =
         -(auVar54._0_4_ * auVar175._0_4_) - (auVar157._0_4_ * auVar30._0_4_ - auVar151._0_4_);
    auVar120._4_4_ =
         -(auVar54._4_4_ * auVar175._4_4_) - (auVar157._4_4_ * auVar30._4_4_ - auVar151._4_4_);
    auVar120._8_4_ =
         -(auVar54._8_4_ * auVar175._8_4_) - (auVar157._8_4_ * auVar30._8_4_ - auVar151._8_4_);
    auVar120._12_4_ =
         -(auVar54._12_4_ * auVar175._12_4_) - (auVar157._12_4_ * auVar30._12_4_ - auVar151._12_4_);
    auVar75 = vblendps_avx(auVar165,auVar93,2);
    auVar157 = vblendps_avx(auVar93,auVar120,2);
    auVar175 = vblendps_avx(auVar120,auVar165,2);
    auVar75 = vblendps_avx(auVar120,auVar75,3);
    auVar175 = vblendps_avx(auVar93,auVar175,3);
    fStack_1c8 = auVar171._0_4_;
    auVar157 = vblendps_avx(auVar165,auVar157,3);
    fStack_1b8 = auVar167._0_4_;
    auVar30 = vshufps_avx(auVar55,auVar55,0xaa);
    auVar167 = ZEXT1664(auVar30);
    auVar54 = vshufps_avx(auVar76,auVar76,0xaa);
    auVar171 = ZEXT1664(auVar54);
    fVar188 = auVar175._0_4_;
    fVar189 = auVar175._4_4_;
    fVar190 = auVar175._8_4_;
    fVar81 = auVar175._12_4_;
    fVar38 = auVar157._0_4_;
    fVar59 = auVar157._4_4_;
    fVar60 = auVar157._8_4_;
    fVar61 = auVar157._12_4_;
    auVar157 = vshufps_avx(auVar91,auVar91,0x55);
    auVar203 = ZEXT1664(auVar157);
    fVar177 = auVar176._0_4_;
    auVar166._4_4_ = fVar177;
    auVar166._0_4_ = fVar177;
    auVar166._8_4_ = fVar177;
    auVar166._12_4_ = fVar177;
    auVar175 = vshufps_avx(auVar91,auVar91,0xaa);
    auVar187 = ZEXT1664(auVar175);
    fVar103 = auVar75._0_4_;
    fStack_138 = fVar177 * fVar103 + fStack_1b8 * fVar38 + fVar188 * fStack_1c8;
    fVar104 = auVar75._4_4_;
    fStack_134 = fVar177 * fVar104 + fStack_1b8 * fVar59 + fVar189 * fStack_1c8;
    fVar105 = auVar75._8_4_;
    fStack_130 = fVar177 * fVar105 + fStack_1b8 * fVar60 + fVar190 * fStack_1c8;
    fVar37 = auVar75._12_4_;
    fStack_12c = fVar177 * fVar37 + fStack_1b8 * fVar61 + fVar81 * fStack_1c8;
    fStack_118 = auVar54._0_4_ * fVar103 + auVar175._0_4_ * fVar38 + auVar30._0_4_ * fVar188;
    fStack_114 = auVar54._4_4_ * fVar104 + auVar175._4_4_ * fVar59 + auVar30._4_4_ * fVar189;
    fStack_110 = auVar54._8_4_ * fVar105 + auVar175._8_4_ * fVar60 + auVar30._8_4_ * fVar190;
    fStack_10c = auVar54._12_4_ * fVar37 + auVar175._12_4_ * fVar61 + auVar30._12_4_ * fVar81;
    fStack_128 = auVar53._0_4_ * fVar103 + auVar52._0_4_ * fVar38 + auVar157._0_4_ * fVar188;
    fStack_124 = auVar53._4_4_ * fVar104 + auVar52._4_4_ * fVar59 + auVar157._4_4_ * fVar189;
    fStack_120 = auVar53._8_4_ * fVar105 + auVar52._8_4_ * fVar60 + auVar157._8_4_ * fVar190;
    fStack_11c = auVar53._12_4_ * fVar37 + auVar52._12_4_ * fVar61 + auVar157._12_4_ * fVar81;
    lVar3 = *(longlong *)(param_1 + 0x2f8);
    auVar94._0_4_ = fStack_138 * (float)(uVar11 ^ *(uint *)(lVar3 + 0x60));
    auVar94._4_4_ = fStack_134 * (float)(uVar11 ^ *(uint *)(lVar3 + 100));
    auVar94._8_4_ = fStack_130 * (float)(uVar11 ^ *(uint *)(lVar3 + 0x68));
    auVar94._12_4_ = fStack_12c * (float)(uVar11 ^ *(uint *)(lVar3 + 0x6c));
    auVar91 = vblendps_avx(auVar94,_DAT_14614f7c0,8);
    auVar91 = vhaddps_avx(auVar91,auVar91);
    auVar91 = vhaddps_avx(auVar91,auVar91);
    fVar177 = (float)uStack_220 * auVar91._0_4_;
    auVar75 = ZEXT816(0) << 0x20;
    auVar176 = ZEXT864(0) << 0x20;
    auVar29 = auVar176._0_16_;
    auVar95._0_4_ = (float)(uVar11 ^ (uint)fVar177) * (fStack_138 + *(float *)(param_4 + 0xc0));
    auVar95._4_4_ = (float)(uVar11 ^ (uint)fVar177) * (fStack_134 + *(float *)(param_4 + 0xc4));
    auVar95._8_4_ = (float)(uVar11 ^ (uint)fVar177) * (fStack_130 + *(float *)(param_4 + 200));
    auVar95._12_4_ = (float)(uVar11 ^ (uint)fVar177) * (fStack_12c + *(float *)(param_4 + 0xcc));
    auVar91 = vcmpps_avx(auVar75,auVar95,0);
    uVar15 = vmovmskps_avx(auVar91);
    fStack_1c4 = fStack_1c8;
    fStack_1c0 = fStack_1c8;
    fStack_1bc = fStack_1c8;
    fStack_1b4 = fStack_1b8;
    fStack_1b0 = fStack_1b8;
    fStack_1ac = fStack_1b8;
    if ((~(byte)uVar15 & 7) != 0) {
      auVar34._0_4_ = auVar95._0_4_ + fStack_138;
      auVar34._4_4_ = auVar95._4_4_ + fStack_134;
      auVar34._8_4_ = auVar95._8_4_ + fStack_130;
      auVar34._12_4_ = auVar95._12_4_ + fStack_12c;
      auStack_1e8._4_4_ = fStack_114;
      auStack_1e8._0_4_ = fStack_118;
      uStack_1e0._4_4_ = fStack_10c;
      uStack_1e0._0_4_ = fStack_110;
      uStack_228 = CONCAT44((float)uStack_220,(float)uStack_220);
      uStack_220._4_4_ = (float)uStack_220;
      auVar91 = vshufps_avx(auVar34,auVar34,0xd2);
      auVar157 = vshufps_avx(auVar34,auVar34,0xc9);
      auVar175 = vshufps_avx(_auStack_1e8,_auStack_1e8,0xc9);
      auVar52 = vshufps_avx(_auStack_1e8,_auStack_1e8,0xd2);
      auVar35._0_4_ = -(auVar52._0_4_ * auVar157._0_4_) + auVar175._0_4_ * auVar91._0_4_;
      auVar35._4_4_ = -(auVar52._4_4_ * auVar157._4_4_) + auVar175._4_4_ * auVar91._4_4_;
      auVar35._8_4_ = -(auVar52._8_4_ * auVar157._8_4_) + auVar175._8_4_ * auVar91._8_4_;
      auVar35._12_4_ = -(auVar52._12_4_ * auVar157._12_4_) + auVar175._12_4_ * auVar91._12_4_;
      auVar99._0_4_ = fStack_118 * fStack_118;
      auVar99._4_4_ = fStack_114 * fStack_114;
      auVar99._8_4_ = fStack_110 * fStack_110;
      auVar99._12_4_ = fStack_10c * fStack_10c;
      auVar91 = vblendps_avx(auVar99,auVar75,8);
      auVar91 = vhaddps_avx(auVar91,auVar91);
      auVar91 = vhaddps_avx(auVar91,auVar91);
      auVar157 = vrsqrtps_avx(auVar91);
      fVar177 = auVar157._0_4_;
      fVar188 = auVar157._4_4_;
      fVar189 = auVar157._8_4_;
      fVar190 = auVar157._12_4_;
      auStack_1e8._0_4_ =
           ((_DAT_145fc6f08 * fVar177 * fVar177 * auVar91._0_4_ - _DAT_145fc6f08) * fVar177 +
           fVar177) * fStack_118;
      auStack_1e8._4_4_ =
           ((_DAT_145fc6f08 * fVar188 * fVar188 * auVar91._4_4_ - _DAT_145fc6f08) * fVar188 +
           fVar188) * fStack_114;
      uStack_1e0._0_4_ =
           ((_DAT_145fc6f08 * fVar189 * fVar189 * auVar91._8_4_ - _DAT_145fc6f08) * fVar189 +
           fVar189) * fStack_110;
      uStack_1e0._4_4_ =
           ((_DAT_145fc6f08 * fVar190 * fVar190 * auVar91._12_4_ - _DAT_145fc6f08) * fVar190 +
           fVar190) * fStack_10c;
      auVar91 = vshufps_avx(auVar35,auVar35,0xc9);
      auVar157 = vshufps_avx(auVar35,auVar35,0xd2);
      auVar175 = vshufps_avx(_auStack_1e8,_auStack_1e8,0xd2);
      auVar52 = vshufps_avx(_auStack_1e8,_auStack_1e8,0xc9);
      fVar81 = -(auVar52._0_4_ * auVar157._0_4_) + auVar175._0_4_ * auVar91._0_4_;
      fVar103 = -(auVar52._4_4_ * auVar157._4_4_) + auVar175._4_4_ * auVar91._4_4_;
      fVar104 = -(auVar52._8_4_ * auVar157._8_4_) + auVar175._8_4_ * auVar91._8_4_;
      fVar105 = -(auVar52._12_4_ * auVar157._12_4_) + auVar175._12_4_ * auVar91._12_4_;
      auVar100._0_4_ = fVar81 * fVar81;
      auVar100._4_4_ = fVar103 * fVar103;
      auVar100._8_4_ = fVar104 * fVar104;
      auVar100._12_4_ = fVar105 * fVar105;
      auVar91 = vblendps_avx(auVar100,auVar75,8);
      auVar91 = vhaddps_avx(auVar91,auVar91);
      auVar91 = vhaddps_avx(auVar91,auVar91);
      auVar75 = vrsqrtps_avx(auVar91);
      fVar177 = auVar75._0_4_;
      fVar188 = auVar75._4_4_;
      fVar189 = auVar75._8_4_;
      fVar190 = auVar75._12_4_;
      auVar168 = ZEXT1664(auVar166);
      auStack_208._0_4_ =
           ((_DAT_145fc6f08 * fVar177 * fVar177 * auVar91._0_4_ - _DAT_145fc6f08) * fVar177 +
           fVar177) * fVar81;
      auStack_208._4_4_ =
           ((_DAT_145fc6f08 * fVar188 * fVar188 * auVar91._4_4_ - _DAT_145fc6f08) * fVar188 +
           fVar188) * fVar103;
      uStack_200._0_4_ =
           ((_DAT_145fc6f08 * fVar189 * fVar189 * auVar91._8_4_ - _DAT_145fc6f08) * fVar189 +
           fVar189) * fVar104;
      uStack_200._4_4_ =
           ((_DAT_145fc6f08 * fVar190 * fVar190 * auVar91._12_4_ - _DAT_145fc6f08) * fVar190 +
           fVar190) * fVar105;
      auVar91 = vshufps_avx(_auStack_208,_auStack_208,0xd2);
      auVar75 = vshufps_avx(_auStack_208,_auStack_208,0xc9);
      uStack_f8 = uStack_228;
      uStack_f0 = uStack_220;
      auStack_1f8._0_4_ = -(auVar175._0_4_ * auVar75._0_4_) + auVar91._0_4_ * auVar52._0_4_;
      auStack_1f8._4_4_ = -(auVar175._4_4_ * auVar75._4_4_) + auVar91._4_4_ * auVar52._4_4_;
      fStack_1f0 = -(auVar175._8_4_ * auVar75._8_4_) + auVar91._8_4_ * auVar52._8_4_;
      fStack_1ec = -(auVar175._12_4_ * auVar75._12_4_) + auVar91._12_4_ * auVar52._12_4_;
      FUN_141530bf0(&uStack_f8,&fStack_138,auStack_208,&fStack_138);
      auVar29 = auVar176._0_16_;
      auVar175 = auVar187._0_16_;
      auVar52 = auVar213._0_16_;
      auVar54 = auVar171._0_16_;
      auVar30 = auVar167._0_16_;
      auVar53 = auVar193._0_16_;
      auVar166 = auVar168._0_16_;
      auVar157 = auVar203._0_16_;
    }
    *(undefined8 *)(param_4 + 0x184) = 0;
    auVar192._0_4_ =
         fStack_118 * auVar30._0_4_ + fStack_128 * auVar157._0_4_ + fStack_138 * fStack_1c8;
    auVar192._4_4_ =
         fStack_114 * auVar30._4_4_ + fStack_124 * auVar157._4_4_ + fStack_134 * fStack_1c4;
    auVar192._8_4_ =
         fStack_110 * auVar30._8_4_ + fStack_120 * auVar157._8_4_ + fStack_130 * fStack_1c0;
    auVar192._12_4_ =
         fStack_10c * auVar30._12_4_ + fStack_11c * auVar157._12_4_ + fStack_12c * fStack_1bc;
    auVar186._0_4_ =
         fStack_118 * auVar54._0_4_ + fStack_128 * auVar53._0_4_ + fStack_138 * auVar166._0_4_;
    auVar186._4_4_ =
         fStack_114 * auVar54._4_4_ + fStack_124 * auVar53._4_4_ + fStack_134 * auVar166._4_4_;
    auVar186._8_4_ =
         fStack_110 * auVar54._8_4_ + fStack_120 * auVar53._8_4_ + fStack_130 * auVar166._8_4_;
    auVar186._12_4_ =
         fStack_10c * auVar54._12_4_ + fStack_11c * auVar53._12_4_ + fStack_12c * auVar166._12_4_;
    auVar30 = vshufps_avx(auVar186,auVar186,0xaa);
    auVar202._0_4_ =
         fStack_118 * auVar175._0_4_ + fStack_128 * auVar52._0_4_ + fStack_138 * fStack_1b8;
    auVar202._4_4_ =
         fStack_114 * auVar175._4_4_ + fStack_124 * auVar52._4_4_ + fStack_134 * fStack_1b4;
    auVar202._8_4_ =
         fStack_110 * auVar175._8_4_ + fStack_120 * auVar52._8_4_ + fStack_130 * fStack_1b0;
    auVar202._12_4_ =
         fStack_10c * auVar175._12_4_ + fStack_11c * auVar52._12_4_ + fStack_12c * fStack_1ac;
    auVar91 = vblendps_avx(auVar192,auVar202,2);
    auVar75 = vblendps_avx(auVar192,auVar202,3);
    auVar91 = vblendps_avx(auVar186,auVar91,3);
    auVar75 = vblendps_avx(auVar75,auVar186,2);
    auVar157 = vshufps_avx(auVar91,auVar91,0x49);
    auVar175 = vshufps_avx(auVar91,auVar91,0x92);
    auVar52 = vshufps_avx(auVar91,auVar91,0x24);
    auVar54 = vshufps_avx(auVar75,auVar75,9);
    auVar77._0_4_ = auVar175._0_4_ + auVar157._0_4_;
    auVar77._4_4_ = auVar175._4_4_ + auVar157._4_4_;
    auVar77._8_4_ = auVar175._8_4_ + auVar157._8_4_;
    auVar77._12_4_ = auVar175._12_4_ + auVar157._12_4_;
    auVar32._0_4_ = auVar77._0_4_ + auVar52._0_4_;
    auVar32._4_4_ = auVar77._4_4_ + auVar52._4_4_;
    auVar32._8_4_ = auVar77._8_4_ + auVar52._8_4_;
    auVar32._12_4_ = auVar77._12_4_ + auVar52._12_4_;
    auVar91 = vsubps_avx(auVar91,auVar77);
    auVar91 = vblendps_avx(auVar91,auVar32,8);
    auVar75 = vcmpps_avx(auVar29,auVar32,1);
    auVar57._0_4_ = auVar91._0_4_ + auVar151._0_4_;
    auVar57._4_4_ = auVar91._4_4_ + auVar151._4_4_;
    auVar57._8_4_ = auVar91._8_4_ + auVar151._8_4_;
    auVar57._12_4_ = auVar91._12_4_ + auVar151._12_4_;
    auVar33._0_4_ = auVar75._0_4_;
    auVar33._4_4_ = auVar33._0_4_;
    auVar33._8_4_ = auVar33._0_4_;
    auVar33._12_4_ = auVar33._0_4_;
    auVar91 = vrsqrtps_avx(auVar57);
    fVar177 = auVar91._0_4_;
    fVar188 = auVar91._4_4_;
    fVar189 = auVar91._8_4_;
    fVar190 = auVar91._12_4_;
    auVar91 = vblendps_avx(auVar202,auVar186,3);
    auVar91 = vshufps_avx(auVar91,auVar192,0x12);
    auVar143._0_4_ = auVar91._0_4_ + auVar54._0_4_;
    auVar143._4_4_ = auVar91._4_4_ + auVar54._4_4_;
    auVar143._8_4_ = auVar91._8_4_ + auVar54._8_4_;
    auVar143._12_4_ = auVar91._12_4_ + auVar54._12_4_;
    auVar54 = vsubps_avx(auVar91,auVar54);
    auVar96._0_4_ =
         ((-(_DAT_145fc6edc * fVar177 * fVar177 * auVar57._0_4_) + _DAT_145fc6edc) * fVar177 +
         fVar177) * _DAT_145fc6edc;
    auVar96._4_4_ =
         ((-(_DAT_145fc6edc * fVar188 * fVar188 * auVar57._4_4_) + _DAT_145fc6edc) * fVar188 +
         fVar188) * _DAT_145fc6edc;
    auVar96._8_4_ =
         ((-(_DAT_145fc6edc * fVar189 * fVar189 * auVar57._8_4_) + _DAT_145fc6edc) * fVar189 +
         fVar189) * _DAT_145fc6edc;
    auVar96._12_4_ =
         ((-(_DAT_145fc6edc * fVar190 * fVar190 * auVar57._12_4_) + _DAT_145fc6edc) * fVar190 +
         fVar190) * _DAT_145fc6edc;
    auVar91 = vblendps_avx(auVar143,auVar54,1);
    auVar75 = vblendps_avx(auVar143,auVar54,2);
    auVar175 = vshufps_avx(auVar143,auVar54,0xa1);
    auVar52 = vshufps_avx(auVar91,auVar91,0x18);
    auVar157 = vshufpd_avx(auVar75,auVar75,1);
    auVar91 = vblendps_avx(auVar175,auVar57,4);
    auVar75 = vblendps_avx(auVar52,auVar57,1);
    auVar157 = vblendps_avx(auVar157,auVar57,2);
    auVar175 = vblendps_avx(auVar54,auVar57,8);
    auVar78._0_4_ = auVar96._0_4_ * auVar75._0_4_;
    auVar78._4_4_ = auVar96._0_4_ * auVar75._4_4_;
    auVar78._8_4_ = auVar96._0_4_ * auVar75._8_4_;
    auVar78._12_4_ = auVar96._0_4_ * auVar75._12_4_;
    auVar75 = vshufps_avx(auVar96,auVar96,0x55);
    auVar121._0_4_ = auVar75._0_4_ * auVar157._0_4_;
    auVar121._4_4_ = auVar75._4_4_ * auVar157._4_4_;
    auVar121._8_4_ = auVar75._8_4_ * auVar157._8_4_;
    auVar121._12_4_ = auVar75._12_4_ * auVar157._12_4_;
    auVar75 = vshufps_avx(auVar96,auVar96,0xaa);
    auVar157 = vshufps_avx(auVar96,auVar96,0xff);
    auVar144._0_4_ = auVar75._0_4_ * auVar91._0_4_;
    auVar144._4_4_ = auVar75._4_4_ * auVar91._4_4_;
    auVar144._8_4_ = auVar75._8_4_ * auVar91._8_4_;
    auVar144._12_4_ = auVar75._12_4_ * auVar91._12_4_;
    auVar58._0_4_ = auVar157._0_4_ * auVar175._0_4_;
    auVar58._4_4_ = auVar157._4_4_ * auVar175._4_4_;
    auVar58._8_4_ = auVar157._8_4_ * auVar175._8_4_;
    auVar58._12_4_ = auVar157._12_4_ * auVar175._12_4_;
    auVar97._4_4_ = auVar192._0_4_;
    auVar97._0_4_ = auVar192._0_4_;
    auVar97._8_4_ = auVar192._0_4_;
    auVar97._12_4_ = auVar192._0_4_;
    auVar75 = vshufps_avx(auVar202,auVar202,0x55);
    auVar91 = vcmpps_avx(auVar97,auVar75,1);
    auVar75 = vcmpps_avx(auVar75,auVar30,1);
    auVar157 = vcmpps_avx(auVar97,auVar30,1);
    auVar91 = vblendvps_avx(auVar78,auVar121,auVar91);
    auVar98._0_4_ = auVar157._0_4_ & auVar75._0_4_;
    auVar98._4_4_ = auVar157._4_4_ & auVar75._4_4_;
    auVar98._8_4_ = auVar157._8_4_ & auVar75._8_4_;
    auVar98._12_4_ = auVar157._12_4_ & auVar75._12_4_;
    auVar91 = vblendvps_avx(auVar91,auVar144,auVar98);
    auVar91 = vblendvps_avx(auVar91,auVar58,auVar33);
    auVar176 = ZEXT1664(auVar91);
    uVar220 = uVar11;
    uVar224 = uVar11;
    uVar225 = uVar11;
    uVar226 = uVar11;
    goto LAB_1400d9cc7;
  }
  uStack_150 = uStack_1e0;
  plVar16 = *(longlong **)(param_5 + 8);
  auVar193 = ZEXT1664(CONCAT412(auStack_208._0_4_,
                                CONCAT48(auStack_208._0_4_,
                                         CONCAT44(auStack_208._0_4_,auStack_208._0_4_))));
  auVar187 = ZEXT1664(CONCAT412(auStack_1f8._4_4_,
                                CONCAT48(auStack_1f8._4_4_,
                                         CONCAT44(auStack_1f8._4_4_,auStack_1f8._4_4_))));
  auVar167 = ZEXT1664(CONCAT412((float)uStack_1e0,
                                CONCAT48((float)uStack_1e0,
                                         CONCAT44((float)uStack_1e0,(float)uStack_1e0))));
  iVar2 = *(int *)(param_5 + 0x10);
  fStack_1b4 = auStack_208._4_4_;
  fStack_1b0 = auStack_208._8_4_;
  fStack_1ac = auStack_208._12_4_;
  fStack_1c8 = auStack_1f8._0_4_;
  fStack_1c0 = auStack_1f8._8_4_;
  fStack_1bc = auStack_1f8._12_4_;
  uStack_158 = auStack_1e8;
  uVar220 = _DAT_145fc6f10;
  uVar224 = _DAT_145fc6f10;
  uVar225 = _DAT_145fc6f10;
  uVar226 = _DAT_145fc6f10;
  fStack_1c4 = (float)auStack_1f8._4_4_;
  fStack_1b8 = (float)auStack_208._0_4_;
  iVar14 = func_0x000144e05fa0(plVar16[1]);
  if (iVar2 == iVar14) {
    auVar18._8_8_ = _UNK_145fc6ee8;
    auVar18._0_8_ = _DAT_145fc6ee0;
  }
  else {
    uVar15 = (**(code **)(*plVar16 + 0xf0))(plVar16,iVar2);
    (**(code **)(*plVar16 + 0x108))(plVar16,uVar15,auStack_208);
    plVar16 = *(longlong **)(param_5 + 8);
    auVar18 = _auStack_208;
  }
  auVar39._0_4_ = auVar18._0_4_ + auVar18._0_4_;
  auVar39._4_4_ = auVar18._4_4_ + auVar18._4_4_;
  auVar39._8_4_ = auVar18._8_4_ + auVar18._8_4_;
  auVar39._12_4_ = auVar18._12_4_ + auVar18._12_4_;
  auVar91 = vshufps_avx(auVar18,auVar18,0xff);
  auVar75 = vshufps_avx(auVar18,auVar18,0xc9);
  auVar157 = vshufps_avx(auVar18,auVar18,0xd2);
  auVar175 = vshufps_avx(auVar39,auVar39,0xc9);
  auVar52 = vshufps_avx(auVar39,auVar39,0xd2);
  auVar194._0_4_ = auVar157._0_4_ * auVar39._0_4_ + auVar175._0_4_ * auVar91._0_4_;
  auVar194._4_4_ = auVar157._4_4_ * auVar39._4_4_ + auVar175._4_4_ * auVar91._4_4_;
  auVar194._8_4_ = auVar157._8_4_ * auVar39._8_4_ + auVar175._8_4_ * auVar91._8_4_;
  auVar194._12_4_ = auVar157._12_4_ * auVar39._12_4_ + auVar175._12_4_ * auVar91._12_4_;
  auVar82._0_4_ = -(auVar91._0_4_ * auVar52._0_4_) + auVar75._0_4_ * auVar39._0_4_;
  auVar82._4_4_ = -(auVar91._4_4_ * auVar52._4_4_) + auVar75._4_4_ * auVar39._4_4_;
  auVar82._8_4_ = -(auVar91._8_4_ * auVar52._8_4_) + auVar75._8_4_ * auVar39._8_4_;
  auVar82._12_4_ = -(auVar91._12_4_ * auVar52._12_4_) + auVar75._12_4_ * auVar39._12_4_;
  auVar106._0_4_ =
       -(auVar52._0_4_ * auVar157._0_4_) - (auVar75._0_4_ * auVar175._0_4_ - auVar151._0_4_);
  auVar106._4_4_ =
       -(auVar52._4_4_ * auVar157._4_4_) - (auVar75._4_4_ * auVar175._4_4_ - auVar151._4_4_);
  auVar106._8_4_ =
       -(auVar52._8_4_ * auVar157._8_4_) - (auVar75._8_4_ * auVar175._8_4_ - auVar151._8_4_);
  auVar106._12_4_ =
       -(auVar52._12_4_ * auVar157._12_4_) - (auVar75._12_4_ * auVar175._12_4_ - auVar151._12_4_);
  auVar91 = vblendps_avx(auVar194,auVar82,2);
  auVar75 = vblendps_avx(auVar106,auVar194,2);
  auVar91 = vblendps_avx(auVar106,auVar91,3);
  auVar203 = ZEXT1664(auVar91);
  auVar91 = vblendps_avx(auVar82,auVar75,3);
  auVar213 = ZEXT1664(auVar91);
  (**(code **)(*plVar16 + 0x88))(plVar16,auStack_208);
  auVar157 = auVar167._0_16_;
  auVar52 = auVar187._0_16_;
  auVar175 = auVar171._0_16_;
  auVar30 = auVar193._0_16_;
  auVar19._0_4_ = auVar213._0_4_ * auVar213._0_4_;
  auVar19._4_4_ = auVar213._4_4_ * auVar213._4_4_;
  auVar19._8_4_ = auVar213._8_4_ * auVar213._8_4_;
  auVar19._12_4_ = auVar213._12_4_ * auVar213._12_4_;
  auVar107._0_12_ = ZEXT812(0);
  auVar107._12_4_ = 0.0;
  auVar91 = vblendps_avx(auVar19,auVar107,8);
  auVar91 = vhaddps_avx(auVar91,auVar91);
  auVar75 = vhaddps_avx(auVar91,auVar91);
  auVar91 = vrsqrtps_avx(auVar75);
  fVar177 = auVar91._0_4_;
  fVar188 = auVar91._4_4_;
  fVar189 = auVar91._8_4_;
  fVar190 = auVar91._12_4_;
  auVar64._4_4_ = _DAT_146159bfc;
  auVar64._0_4_ = _DAT_146159bfc;
  auVar64._8_4_ = _DAT_146159bfc;
  auVar64._12_4_ = _DAT_146159bfc;
  auVar91 = vcmpps_avx(auVar64,auVar75,2);
  auVar20._0_4_ =
       (float)(auVar91._0_4_ &
              (uint)(((_DAT_145fc6f08 * fVar177 * fVar177 * auVar75._0_4_ - _DAT_145fc6f08) *
                      fVar177 + fVar177) * auVar75._0_4_));
  auVar20._4_4_ =
       (float)(auVar91._4_4_ &
              (uint)(((_DAT_145fc6f08 * fVar188 * fVar188 * auVar75._4_4_ - _DAT_145fc6f08) *
                      fVar188 + fVar188) * auVar75._4_4_));
  auVar20._8_4_ =
       (float)(auVar91._8_4_ &
              (uint)(((_DAT_145fc6f08 * fVar189 * fVar189 * auVar75._8_4_ - _DAT_145fc6f08) *
                      fVar189 + fVar189) * auVar75._8_4_));
  auVar20._12_4_ =
       (float)(auVar91._12_4_ &
              (uint)(((_DAT_145fc6f08 * fVar190 * fVar190 * auVar75._12_4_ - _DAT_145fc6f08) *
                      fVar190 + fVar190) * auVar75._12_4_));
  auVar91 = vrcpps_avx(auVar20);
  auVar122._0_4_ = uVar220 ^ (uint)auVar20._0_4_;
  auVar122._4_4_ = uVar224 ^ (uint)auVar20._4_4_;
  auVar122._8_4_ = uVar225 ^ (uint)auVar20._8_4_;
  auVar122._12_4_ = uVar226 ^ (uint)auVar20._12_4_;
  fVar188 = auVar91._0_4_;
  fVar81 = auVar151._0_4_;
  fVar189 = auVar91._4_4_;
  fVar103 = auVar151._4_4_;
  fVar190 = auVar91._8_4_;
  fVar104 = auVar151._8_4_;
  fVar177 = auVar91._12_4_;
  fVar105 = auVar151._12_4_;
  auVar206._0_4_ = -((auVar20._0_4_ * fVar188 - fVar81) * fVar188) + fVar188;
  auVar206._4_4_ = -((auVar20._4_4_ * fVar189 - fVar103) * fVar189) + fVar189;
  auVar206._8_4_ = -((auVar20._8_4_ * fVar190 - fVar104) * fVar190) + fVar190;
  auVar206._12_4_ = -((auVar20._12_4_ * fVar177 - fVar105) * fVar177) + fVar177;
  auVar91 = vcmpps_avx(auVar20,auVar122,0);
  auVar123._4_4_ = _DAT_14615b36c;
  auVar123._0_4_ = _DAT_14615b36c;
  auVar123._8_4_ = _DAT_14615b36c;
  auVar123._12_4_ = _DAT_14615b36c;
  auVar91 = vblendvps_avx(auVar206,auVar123,auVar91);
  auVar83._0_4_ = auVar203._0_4_ * auVar91._0_4_;
  auVar83._4_4_ = auVar203._4_4_ * auVar91._4_4_;
  auVar83._8_4_ = auVar203._8_4_ * auVar91._8_4_;
  auVar83._12_4_ = auVar203._12_4_ * auVar91._12_4_;
  auVar91 = vshufps_avx(auVar83,auVar83,0x55);
  auVar75 = vshufps_avx(auVar83,auVar83,0xaa);
  auVar124._0_4_ =
       auVar75._0_4_ * (float)auStack_1e8._0_4_ +
       auVar91._0_4_ * (float)auStack_1f8._0_4_ + auVar83._0_4_ * (float)auStack_208._0_4_;
  auVar124._4_4_ =
       auVar75._4_4_ * (float)auStack_1e8._4_4_ +
       auVar91._4_4_ * (float)auStack_1f8._4_4_ + auVar83._0_4_ * (float)auStack_208._4_4_;
  auVar124._8_4_ =
       auVar75._8_4_ * (float)uStack_1e0 +
       auVar91._8_4_ * fStack_1f0 + auVar83._0_4_ * (float)uStack_200;
  auVar124._12_4_ =
       auVar75._12_4_ * uStack_1e0._4_4_ +
       auVar91._12_4_ * fStack_1ec + auVar83._0_4_ * uStack_200._4_4_;
  auVar84._4_4_ = _DAT_145fc6f48;
  auVar84._0_4_ = _DAT_145fc6f48;
  auVar84._8_4_ = _DAT_145fc6f48;
  auVar84._12_4_ = _DAT_145fc6f48;
  auVar21._0_4_ = auVar20._0_4_ + _DAT_145fc6f48;
  auVar21._4_4_ = auVar20._4_4_ + _DAT_145fc6f48;
  auVar21._8_4_ = auVar20._8_4_ + _DAT_145fc6f48;
  auVar21._12_4_ = auVar20._12_4_ + _DAT_145fc6f48;
  auVar91 = vinsertps_avx(auVar124,auVar21,0xb0);
  auVar75 = auVar151._0_16_;
  fVar177 = auVar91._0_4_;
  fVar188 = auVar91._4_4_;
  fVar189 = auVar91._8_4_;
  fVar190 = auVar91._12_4_;
  if ((*(byte *)(param_3 + 0x120) & 0x20) == 0) {
    fVar37 = *(float *)(param_4 + 200) + _DAT_14615a160;
    fVar38 = *(float *)(param_4 + 200) + _DAT_146159ec4;
    auVar195._4_4_ = fVar37;
    auVar195._0_4_ = fVar37;
    auVar195._8_4_ = fVar37;
    auVar195._12_4_ = fVar37;
    auVar125._4_4_ = fVar38;
    auVar125._0_4_ = fVar38;
    auVar125._8_4_ = fVar38;
    auVar125._12_4_ = fVar38;
    auVar54 = vcmpps_avx(auVar195,auVar75,2);
    auVar29 = vcmpps_avx(auVar75,auVar125,2);
    auVar126._0_4_ = auVar54._0_4_ & auVar29._0_4_;
    auVar126._4_4_ = auVar54._4_4_ & auVar29._4_4_;
    auVar126._8_4_ = auVar54._8_4_ & auVar29._8_4_;
    auVar126._12_4_ = auVar54._12_4_ & auVar29._12_4_;
    auVar54 = vpcmpeqd_avx(auVar54,auVar54);
    if ((auVar54 & ~auVar126) != (undefined1  [16])0x0) goto LAB_1400da283;
  }
  else {
LAB_1400da283:
    auVar197._0_4_ = fVar177 * _DAT_14614f7f0;
    auVar197._4_4_ = fVar188 * _UNK_14614f7f4;
    auVar197._8_4_ = fVar189 * _UNK_14614f7f8;
    auVar197._12_4_ = fVar190 * _UNK_14614f7fc;
    auVar209._0_4_ = *(float *)(param_4 + 0xc0) * fVar177;
    auVar209._4_4_ = *(float *)(param_4 + 0xc4) * fVar188;
    auVar209._8_4_ = *(float *)(param_4 + 200) * fVar189;
    auVar209._12_4_ = *(float *)(param_4 + 0xcc) * fVar190;
    auVar54 = vblendps_avx(auVar197,auVar107,8);
    auVar29 = vhaddps_avx(auVar54,auVar54);
    auVar54 = vblendps_avx(auVar209,auVar107,8);
    auVar54 = vhaddps_avx(auVar54,auVar54);
    auVar29 = vhaddps_avx(auVar29,auVar29);
    fVar61 = -(fVar177 * auVar29._0_4_) + _DAT_14614f7f0;
    fVar62 = -(fVar188 * auVar29._4_4_) + _UNK_14614f7f4;
    fVar63 = -(fVar189 * auVar29._8_4_) + _UNK_14614f7f8;
    fVar145 = -(fVar190 * auVar29._12_4_) + _UNK_14614f7fc;
    auVar54 = vhaddps_avx(auVar54,auVar54);
    fVar204 = -(fVar177 * auVar54._0_4_) + *(float *)(param_4 + 0xc0);
    fVar214 = -(fVar188 * auVar54._4_4_) + *(float *)(param_4 + 0xc4);
    fVar216 = -(fVar189 * auVar54._8_4_) + *(float *)(param_4 + 200);
    fVar218 = -(fVar190 * auVar54._12_4_) + *(float *)(param_4 + 0xcc);
    auVar132._0_4_ = fVar61 * fVar61;
    auVar132._4_4_ = fVar62 * fVar62;
    auVar132._8_4_ = fVar63 * fVar63;
    auVar132._12_4_ = fVar145 * fVar145;
    auVar54 = vblendps_avx(auVar132,auVar107,8);
    auVar54 = vhaddps_avx(auVar54,auVar54);
    auVar29 = vhaddps_avx(auVar54,auVar54);
    auVar54 = vrsqrtps_avx(auVar29);
    fVar37 = auVar54._0_4_;
    fVar38 = auVar54._4_4_;
    fVar59 = auVar54._8_4_;
    fVar60 = auVar54._12_4_;
    auVar181._0_4_ = fVar204 * fVar204;
    auVar181._4_4_ = fVar214 * fVar214;
    auVar181._8_4_ = fVar216 * fVar216;
    auVar181._12_4_ = fVar218 * fVar218;
    auVar54 = vblendps_avx(auVar181,auVar107,8);
    auVar54 = vhaddps_avx(auVar54,auVar54);
    auVar54 = vhaddps_avx(auVar54,auVar54);
    auVar133._0_4_ =
         fVar61 * ((_DAT_145fc6f08 * fVar37 * fVar37 * auVar29._0_4_ - _DAT_145fc6f08) * fVar37 +
                  fVar37);
    auVar133._4_4_ =
         fVar62 * ((_DAT_145fc6f08 * fVar38 * fVar38 * auVar29._4_4_ - _DAT_145fc6f08) * fVar38 +
                  fVar38);
    auVar133._8_4_ =
         fVar63 * ((_DAT_145fc6f08 * fVar59 * fVar59 * auVar29._8_4_ - _DAT_145fc6f08) * fVar59 +
                  fVar59);
    auVar133._12_4_ =
         fVar145 * ((_DAT_145fc6f08 * fVar60 * fVar60 * auVar29._12_4_ - _DAT_145fc6f08) * fVar60 +
                   fVar60);
    auVar29 = vrsqrtps_avx(auVar54);
    fVar37 = auVar29._0_4_;
    fVar38 = auVar29._4_4_;
    fVar59 = auVar29._8_4_;
    fVar60 = auVar29._12_4_;
    auVar222._4_4_ = _DAT_145fc6f00;
    auVar222._0_4_ = _DAT_145fc6f00;
    auVar222._8_4_ = _DAT_145fc6f00;
    auVar222._12_4_ = _DAT_145fc6f00;
    auVar210._0_4_ =
         ((_DAT_145fc6f08 * fVar37 * fVar37 * auVar54._0_4_ - _DAT_145fc6f08) * fVar37 + fVar37) *
         fVar204;
    auVar210._4_4_ =
         ((_DAT_145fc6f08 * fVar38 * fVar38 * auVar54._4_4_ - _DAT_145fc6f08) * fVar38 + fVar38) *
         fVar214;
    auVar210._8_4_ =
         ((_DAT_145fc6f08 * fVar59 * fVar59 * auVar54._8_4_ - _DAT_145fc6f08) * fVar59 + fVar59) *
         fVar216;
    auVar210._12_4_ =
         ((_DAT_145fc6f08 * fVar60 * fVar60 * auVar54._12_4_ - _DAT_145fc6f08) * fVar60 + fVar60) *
         fVar218;
    auVar182._0_4_ = auVar210._0_4_ * auVar133._0_4_;
    auVar182._4_4_ = auVar210._4_4_ * auVar133._4_4_;
    auVar182._8_4_ = auVar210._8_4_ * auVar133._8_4_;
    auVar182._12_4_ = auVar210._12_4_ * auVar133._12_4_;
    auVar54 = vblendps_avx(auVar182,auVar107,8);
    auVar54 = vhaddps_avx(auVar54,auVar54);
    auVar29 = vhaddps_avx(auVar54,auVar54);
    auVar183._0_4_ = (uint)(auVar29._0_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
    auVar183._4_4_ = (uint)(auVar29._4_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
    auVar183._8_4_ = (uint)(auVar29._8_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
    auVar183._12_4_ = (uint)(auVar29._12_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
    auVar54 = vcmpps_avx(auVar183,auVar222,5);
    if ((((SUB161(auVar54 >> 0x1f,0) & 1) == 0 && (SUB161(auVar54 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar54 >> 0x5f,0) & 1) == 0) && -1 < auVar54[0xf]) {
      auVar4._8_8_ = _UNK_145fc6ee8;
      auVar4._0_8_ = _DAT_145fc6ee0;
    }
    else {
      auVar184._0_4_ = (uint)(auVar29._0_4_ + fVar81) & _DAT_145fc6f4c;
      auVar184._4_4_ = (uint)(auVar29._4_4_ + fVar103) & _DAT_145fc6f4c;
      auVar184._8_4_ = (uint)(auVar29._8_4_ + fVar104) & _DAT_145fc6f4c;
      auVar184._12_4_ = (uint)(auVar29._12_4_ + fVar105) & _DAT_145fc6f4c;
      auVar54 = vcmpps_avx(auVar184,auVar222,5);
      fVar37 = _DAT_146159cc0;
      fVar38 = _DAT_146159cc0;
      fVar59 = _DAT_146159cc0;
      fVar60 = _DAT_146159cc0;
      fVar61 = _DAT_146159bdc;
      fVar62 = _DAT_146159bdc;
      fVar63 = _DAT_146159bdc;
      fVar145 = _DAT_146159bdc;
      _auStack_1a8 = auVar91;
      if ((((SUB161(auVar54 >> 0x1f,0) & 1) != 0 || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x5f,0) & 1) != 0) || auVar54[0xf] < '\0') {
        auVar54 = vshufps_avx(auVar133,auVar133,0xc9);
        auVar53 = vshufps_avx(auVar210,auVar210,0xd2);
        auVar31 = vshufps_avx(auVar133,auVar133,0xd2);
        auVar55 = vshufps_avx(auVar210,auVar210,0xc9);
        auVar185._0_4_ = uVar11 ^ (uint)fVar177;
        auVar185._4_4_ = uVar11 ^ (uint)fVar188;
        auVar185._8_4_ = uVar11 ^ (uint)fVar189;
        auVar185._12_4_ = uVar11 ^ (uint)fVar190;
        auVar134._0_4_ =
             (-(auVar31._0_4_ * auVar55._0_4_) + auVar53._0_4_ * auVar54._0_4_) * fVar177;
        auVar134._4_4_ =
             (-(auVar31._4_4_ * auVar55._4_4_) + auVar53._4_4_ * auVar54._4_4_) * fVar188;
        auVar134._8_4_ =
             (-(auVar31._8_4_ * auVar55._8_4_) + auVar53._8_4_ * auVar54._8_4_) * fVar189;
        auVar134._12_4_ =
             (-(auVar31._12_4_ * auVar55._12_4_) + auVar53._12_4_ * auVar54._12_4_) * fVar190;
        auVar54 = vblendps_avx(auVar134,ZEXT416(0) << 0x20,8);
        auVar54 = vhaddps_avx(auVar54,auVar54);
        auVar54 = vhaddps_avx(auVar54,auVar54);
        auVar54 = vcmpps_avx(ZEXT416(0) << 0x20,auVar54,1);
        _auStack_1a8 = vblendvps_avx(auVar185,auVar91,auVar54);
        auVar91 = vmaxps_avx(auVar29,auVar84);
        auVar54 = vminps_avx(auVar91,auVar75);
        fVar204 = auVar54._0_4_;
        auVar211._0_4_ = (float)((uint)fVar204 & _DAT_145fc6f4c);
        fVar214 = auVar54._4_4_;
        auVar211._4_4_ = (float)((uint)fVar214 & _DAT_145fc6f4c);
        fVar216 = auVar54._8_4_;
        auVar211._8_4_ = (float)((uint)fVar216 & _DAT_145fc6f4c);
        fVar218 = auVar54._12_4_;
        auVar211._12_4_ = (float)((uint)fVar218 & _DAT_145fc6f4c);
        auVar29 = vsubps_avx(auVar75,auVar211);
        auVar91 = vrsqrtps_avx(auVar29);
        fVar37 = auVar91._0_4_;
        fVar38 = auVar91._4_4_;
        fVar59 = auVar91._8_4_;
        fVar60 = auVar91._12_4_;
        auVar91 = vcmpps_avx(auVar64,auVar29,2);
        fVar61 = (float)(auVar91._0_4_ &
                        (uint)(((-(_DAT_145fc6edc * fVar37 * fVar37 * auVar29._0_4_) +
                                _DAT_145fc6edc) * fVar37 + fVar37) * auVar29._0_4_));
        fVar62 = (float)(auVar91._4_4_ &
                        (uint)(((-(_DAT_145fc6edc * fVar38 * fVar38 * auVar29._4_4_) +
                                _DAT_145fc6edc) * fVar38 + fVar38) * auVar29._4_4_));
        fVar63 = (float)(auVar91._8_4_ &
                        (uint)(((-(_DAT_145fc6edc * fVar59 * fVar59 * auVar29._8_4_) +
                                _DAT_145fc6edc) * fVar59 + fVar59) * auVar29._8_4_));
        fVar145 = (float)(auVar91._12_4_ &
                         (uint)(((-(_DAT_145fc6edc * fVar60 * fVar60 * auVar29._12_4_) +
                                 _DAT_145fc6edc) * fVar60 + fVar60) * auVar29._12_4_));
        fVar37 = fVar204 * fVar204 * fVar204 * fVar204 *
                 (auVar211._0_4_ *
                  (auVar211._0_4_ * (auVar211._0_4_ * _DAT_146159c04 + _DAT_146159c00) +
                  _DAT_146159c08) + _DAT_146159c0c) +
                 auVar211._0_4_ *
                 (auVar211._0_4_ * (auVar211._0_4_ * _DAT_146159c14 + _DAT_146159c10) +
                 _DAT_146159c18) + _DAT_146159c1c;
        fVar38 = fVar214 * fVar214 * fVar214 * fVar214 *
                 (auVar211._4_4_ *
                  (auVar211._4_4_ * (auVar211._4_4_ * _DAT_146159c04 + _DAT_146159c00) +
                  _DAT_146159c08) + _DAT_146159c0c) +
                 auVar211._4_4_ *
                 (auVar211._4_4_ * (auVar211._4_4_ * _DAT_146159c14 + _DAT_146159c10) +
                 _DAT_146159c18) + _DAT_146159c1c;
        fVar59 = fVar216 * fVar216 * fVar216 * fVar216 *
                 (auVar211._8_4_ *
                  (auVar211._8_4_ * (auVar211._8_4_ * _DAT_146159c04 + _DAT_146159c00) +
                  _DAT_146159c08) + _DAT_146159c0c) +
                 auVar211._8_4_ *
                 (auVar211._8_4_ * (auVar211._8_4_ * _DAT_146159c14 + _DAT_146159c10) +
                 _DAT_146159c18) + _DAT_146159c1c;
        fVar60 = fVar218 * fVar218 * fVar218 * fVar218 *
                 (auVar211._12_4_ *
                  (auVar211._12_4_ * (auVar211._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                  _DAT_146159c08) + _DAT_146159c0c) +
                 auVar211._12_4_ *
                 (auVar211._12_4_ * (auVar211._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
                 _DAT_146159c18) + _DAT_146159c1c;
        auVar158._0_4_ = -(fVar37 * fVar61) + _DAT_145fc6f80;
        auVar158._4_4_ = -(fVar38 * fVar62) + _DAT_145fc6f80;
        auVar158._8_4_ = -(fVar59 * fVar63) + _DAT_145fc6f80;
        auVar158._12_4_ = -(fVar60 * fVar145) + _DAT_145fc6f80;
        auVar135._0_4_ = fVar61 * fVar37;
        auVar135._4_4_ = fVar62 * fVar38;
        auVar135._8_4_ = fVar63 * fVar59;
        auVar135._12_4_ = fVar145 * fVar60;
        auVar91 = vblendvps_avx(auVar135,auVar158,auVar54);
        auVar133._0_4_ = auVar91._0_4_ * _DAT_146159b48;
        auVar133._4_4_ = auVar91._4_4_ * _DAT_146159b48;
        auVar133._8_4_ = auVar91._8_4_ * _DAT_146159b48;
        auVar133._12_4_ = auVar91._12_4_ * _DAT_146159b48;
        fVar37 = auVar133._0_4_ + (float)((uint)_DAT_145fc6edc | uVar11 & (uint)auVar133._0_4_);
        fVar38 = auVar133._4_4_ + (float)((uint)_DAT_145fc6edc | uVar11 & (uint)auVar133._4_4_);
        fVar59 = auVar133._8_4_ + (float)((uint)_DAT_145fc6edc | uVar11 & (uint)auVar133._8_4_);
        fVar60 = auVar133._12_4_ + (float)((uint)_DAT_145fc6edc | uVar11 & (uint)auVar133._12_4_);
        fVar61 = auVar91._0_4_ * _DAT_145fc6edc;
        fVar62 = auVar91._4_4_ * _DAT_145fc6edc;
        fVar63 = auVar91._8_4_ * _DAT_145fc6edc;
        fVar145 = auVar91._12_4_ * _DAT_145fc6edc;
      }
      auVar198._0_4_ = (int)fVar37;
      auVar198._4_4_ = (int)fVar38;
      auVar198._8_4_ = (int)fVar59;
      auVar198._12_4_ = (int)fVar60;
      auVar54 = vpcmpeqd_avx(auVar133,auVar133);
      auVar91 = vcvtdq2ps_avx(auVar198);
      auVar53 = vpsubd_avx(auVar198,auVar54);
      auVar136._4_4_ = _DAT_145f43778;
      auVar136._0_4_ = _DAT_145f43778;
      auVar136._8_4_ = _DAT_145f43778;
      auVar136._12_4_ = _DAT_145f43778;
      fVar61 = auVar91._0_4_ * _DAT_146159b50 + auVar91._0_4_ * _DAT_146159b4c + fVar61;
      fVar62 = auVar91._4_4_ * _DAT_146159b50 + auVar91._4_4_ * _DAT_146159b4c + fVar62;
      fVar63 = auVar91._8_4_ * _DAT_146159b50 + auVar91._8_4_ * _DAT_146159b4c + fVar63;
      fVar145 = auVar91._12_4_ * _DAT_146159b50 + auVar91._12_4_ * _DAT_146159b4c + fVar145;
      fVar37 = fVar61 * fVar61;
      fVar38 = fVar62 * fVar62;
      fVar59 = fVar63 * fVar63;
      fVar60 = fVar145 * fVar145;
      auVar223._0_4_ =
           fVar37 * (fVar37 * (fVar37 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar81;
      auVar223._4_4_ =
           fVar38 * (fVar38 * (fVar38 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar103
      ;
      auVar223._8_4_ =
           fVar59 * (fVar59 * (fVar59 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar104
      ;
      auVar223._12_4_ =
           fVar60 * (fVar60 * (fVar60 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar105
      ;
      auVar91 = vpand_avx(auVar198,auVar136);
      auVar54 = vpcmpeqd_avx(auVar91,(undefined1  [16])0x0);
      auVar29 = vpsubd_avx((undefined1  [16])0x0,auVar91);
      auVar69._0_4_ =
           fVar61 * fVar37 * (fVar37 * (fVar37 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar61;
      auVar69._4_4_ =
           fVar62 * fVar38 * (fVar38 * (fVar38 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar62;
      auVar69._8_4_ =
           fVar63 * fVar59 * (fVar59 * (fVar59 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar63;
      auVar69._12_4_ =
           fVar145 * fVar60 * (fVar60 * (fVar60 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
           + fVar145;
      auVar91 = vblendvps_avx(auVar223,auVar69,auVar54);
      auVar54 = vblendvps_avx(auVar223,auVar69,auVar29);
      auVar70._4_4_ = _DAT_145f43774;
      auVar70._0_4_ = _DAT_145f43774;
      auVar70._8_4_ = _DAT_145f43774;
      auVar70._12_4_ = _DAT_145f43774;
      auVar29 = vpand_avx(auVar198,auVar70);
      auVar53 = vpand_avx(auVar53,auVar70);
      auVar29 = vpcmpeqd_avx(auVar29,(undefined1  [16])0x0);
      auVar53 = vpcmpeqd_avx(auVar53,(undefined1  [16])0x0);
      auVar137._0_4_ = uVar11 ^ auVar91._0_4_;
      auVar137._4_4_ = uVar11 ^ auVar91._4_4_;
      auVar137._8_4_ = uVar11 ^ auVar91._8_4_;
      auVar137._12_4_ = uVar11 ^ auVar91._12_4_;
      auVar91 = vblendvps_avx(auVar137,auVar91,auVar29);
      auVar138._0_4_ = auVar91._0_4_ * (float)auStack_1a8._0_4_;
      auVar138._4_4_ = auVar91._4_4_ * (float)auStack_1a8._4_4_;
      auVar138._8_4_ = auVar91._8_4_ * fStack_1a0;
      auVar138._12_4_ = auVar91._12_4_ * fStack_19c;
      auVar159._0_4_ = uVar11 ^ auVar54._0_4_;
      auVar159._4_4_ = uVar11 ^ auVar54._4_4_;
      auVar159._8_4_ = uVar11 ^ auVar54._8_4_;
      auVar159._12_4_ = uVar11 ^ auVar54._12_4_;
      auVar91 = vblendvps_avx(auVar159,auVar54,auVar53);
      auVar4 = vblendps_avx(auVar138,auVar91,8);
      auStack_168 = auVar175;
    }
    fVar37 = auVar4._0_4_;
    auVar47._0_4_ = fVar37 * fVar37;
    fVar60 = auVar4._4_4_;
    auVar47._4_4_ = fVar60 * fVar60;
    fVar63 = auVar4._8_4_;
    auVar47._8_4_ = fVar63 * fVar63;
    fVar214 = auVar4._12_4_;
    auVar47._12_4_ = fVar214 * fVar214;
    auVar55 = ZEXT816(0) << 0x40;
    auVar91 = vblendps_avx(auVar47,auVar55,8);
    auVar91 = vhaddps_avx(auVar91,auVar91);
    auVar29 = vhaddps_avx(auVar91,auVar91);
    auVar91 = vrsqrtps_avx(auVar29);
    fVar38 = auVar91._0_4_;
    fVar61 = auVar91._4_4_;
    fVar145 = auVar91._8_4_;
    fVar216 = auVar91._12_4_;
    auVar160._4_4_ = _DAT_14615a034;
    auVar160._0_4_ = _DAT_14615a034;
    auVar160._8_4_ = _DAT_14615a034;
    auVar160._12_4_ = _DAT_14615a034;
    auVar91 = vcmpps_avx(auVar160,auVar29,1);
    auVar54 = vshufps_avx(auVar4,auVar4,0xff);
    auVar54 = vmaxps_avx(auVar54,auVar84);
    auVar53 = vminps_avx(auVar54,auVar75);
    fVar205 = auVar53._0_4_;
    auVar117._0_4_ = (float)((uint)fVar205 & _DAT_145fc6f4c);
    fVar215 = auVar53._4_4_;
    auVar117._4_4_ = (float)((uint)fVar215 & _DAT_145fc6f4c);
    fVar217 = auVar53._8_4_;
    auVar117._8_4_ = (float)((uint)fVar217 & _DAT_145fc6f4c);
    fVar219 = auVar53._12_4_;
    auVar117._12_4_ = (float)((uint)fVar219 & _DAT_145fc6f4c);
    auVar31 = vsubps_avx(auVar75,auVar117);
    auVar54 = vrsqrtps_avx(auVar31);
    fVar59 = auVar54._0_4_;
    fVar62 = auVar54._4_4_;
    fVar204 = auVar54._8_4_;
    fVar218 = auVar54._12_4_;
    auVar161._4_4_ = _DAT_146159bfc;
    auVar161._0_4_ = _DAT_146159bfc;
    auVar161._8_4_ = _DAT_146159bfc;
    auVar161._12_4_ = _DAT_146159bfc;
    auVar54 = vcmpps_avx(auVar161,auVar31,2);
    fVar59 = (float)(auVar54._0_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar59 * fVar59 * auVar31._0_4_ - _DAT_145fc6f08) *
                            fVar59 + fVar59) * auVar31._0_4_));
    fVar62 = (float)(auVar54._4_4_ &
                    (uint)(((_DAT_145fc6f08 * fVar62 * fVar62 * auVar31._4_4_ - _DAT_145fc6f08) *
                            fVar62 + fVar62) * auVar31._4_4_));
    fVar204 = (float)(auVar54._8_4_ &
                     (uint)(((_DAT_145fc6f08 * fVar204 * fVar204 * auVar31._8_4_ - _DAT_145fc6f08) *
                             fVar204 + fVar204) * auVar31._8_4_));
    fVar218 = (float)(auVar54._12_4_ &
                     (uint)(((_DAT_145fc6f08 * fVar218 * fVar218 * auVar31._12_4_ - _DAT_145fc6f08)
                             * fVar218 + fVar218) * auVar31._12_4_));
    fVar205 = fVar205 * fVar205 * fVar205 * fVar205 *
              (auVar117._0_4_ *
               (auVar117._0_4_ * (auVar117._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08
               ) + _DAT_146159c0c) +
              auVar117._0_4_ *
              (auVar117._0_4_ * (auVar117._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
              + _DAT_146159c1c;
    fVar215 = fVar215 * fVar215 * fVar215 * fVar215 *
              (auVar117._4_4_ *
               (auVar117._4_4_ * (auVar117._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08
               ) + _DAT_146159c0c) +
              auVar117._4_4_ *
              (auVar117._4_4_ * (auVar117._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
              + _DAT_146159c1c;
    fVar217 = fVar217 * fVar217 * fVar217 * fVar217 *
              (auVar117._8_4_ *
               (auVar117._8_4_ * (auVar117._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08
               ) + _DAT_146159c0c) +
              auVar117._8_4_ *
              (auVar117._8_4_ * (auVar117._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18)
              + _DAT_146159c1c;
    fVar219 = fVar219 * fVar219 * fVar219 * fVar219 *
              (auVar117._12_4_ *
               (auVar117._12_4_ * (auVar117._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
               _DAT_146159c08) + _DAT_146159c0c) +
              auVar117._12_4_ *
              (auVar117._12_4_ * (auVar117._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
              _DAT_146159c18) + _DAT_146159c1c;
    auVar71._0_4_ = -(fVar205 * fVar59) + _DAT_145fc6f80;
    auVar71._4_4_ = -(fVar215 * fVar62) + _DAT_145fc6f80;
    auVar71._8_4_ = -(fVar217 * fVar204) + _DAT_145fc6f80;
    auVar71._12_4_ = -(fVar219 * fVar218) + _DAT_145fc6f80;
    auVar48._0_4_ = fVar205 * fVar59;
    auVar48._4_4_ = fVar215 * fVar62;
    auVar48._8_4_ = fVar217 * fVar204;
    auVar48._12_4_ = fVar219 * fVar218;
    auVar54 = vblendvps_avx(auVar48,auVar71,auVar53);
    auVar72._0_4_ =
         (float)(auVar91._0_4_ &
                (uint)(fVar37 * ((_DAT_145fc6f08 * fVar38 * fVar38 * auVar29._0_4_ - _DAT_145fc6f08)
                                 * fVar38 + fVar38))) * fVar177;
    auVar72._4_4_ =
         (float)(auVar91._4_4_ &
                (uint)(fVar60 * ((_DAT_145fc6f08 * fVar61 * fVar61 * auVar29._4_4_ - _DAT_145fc6f08)
                                 * fVar61 + fVar61))) * fVar188;
    auVar72._8_4_ =
         (float)(auVar91._8_4_ &
                (uint)(fVar63 * ((_DAT_145fc6f08 * fVar145 * fVar145 * auVar29._8_4_ -
                                 _DAT_145fc6f08) * fVar145 + fVar145))) * fVar189;
    auVar72._12_4_ =
         (float)(auVar91._12_4_ &
                (uint)(fVar214 *
                      ((_DAT_145fc6f08 * fVar216 * fVar216 * auVar29._12_4_ - _DAT_145fc6f08) *
                       fVar216 + fVar216))) * fVar190;
    auVar91 = vblendps_avx(auVar72,auVar55,8);
    auVar91 = vhaddps_avx(auVar91,auVar91);
    auVar91 = vhaddps_avx(auVar91,auVar91);
    auVar91 = vcmpps_avx(auVar91,auVar55,5);
    fVar37 = auVar54._0_4_;
    fVar38 = auVar54._8_4_;
    fVar59 = auVar54._12_4_;
    auStack_198 = auVar157;
    auStack_188 = auVar52;
    auStack_178 = auVar30;
    if ((((SUB161(auVar91 >> 0x1f,0) & 1) == 0 && (SUB161(auVar91 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar91 >> 0x5f,0) & 1) == 0) && -1 < auVar91[0xf]) {
      auVar107._0_4_ = -(fVar37 * _DAT_146159bd4) - 0.0;
      auVar107._4_4_ = 0;
      auVar107._8_4_ = -(fVar38 * _DAT_146159bd4) - 0.0;
      auVar107._12_4_ = -(fVar59 * _DAT_146159bd4) - 0.0;
      uVar220 = uVar11;
      uVar224 = uVar11;
      uVar225 = uVar11;
      uVar226 = uVar11;
    }
    else {
      auVar107._0_4_ = fVar37 + fVar37;
      auVar107._4_4_ = 0;
      auVar107._8_4_ = fVar38 + fVar38;
      auVar107._12_4_ = fVar59 + fVar59;
      uVar220 = uVar11;
      uVar224 = uVar11;
      uVar225 = uVar11;
      uVar226 = uVar11;
    }
  }
  if ((*(byte *)(param_6 + 4) & 4) == 0) {
    *(int *)(param_4 + 0x188) = auVar107._0_4_;
  }
  if ((*(byte *)(param_1 + 0x91) & 4) == 0) {
    auVar91 = vcmpss_avx(auVar176._0_16_,ZEXT816(0) << 0x40,1);
    auVar54 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar176._0_16_);
    fVar37 = (float)(~auVar91._0_4_ & auVar54._0_4_) *
             (*(float *)(param_4 + 0x188) - *(float *)(param_4 + 0x184)) +
             *(float *)(param_4 + 0x184);
  }
  else {
    fVar37 = *(float *)(param_4 + 0x188);
  }
  *(float *)(param_4 + 0x184) = fVar37;
  if ((float)uStack_220 <= 0.0) {
    auVar8._4_4_ = fStack_1b4;
    auVar8._0_4_ = fStack_1b8;
    auVar8._8_4_ = fStack_1b0;
    auVar8._12_4_ = fStack_1ac;
    auVar7._4_4_ = fStack_1c4;
    auVar7._0_4_ = fStack_1c8;
    auVar7._8_4_ = fStack_1c0;
    auVar7._12_4_ = fStack_1bc;
    auVar9._8_8_ = uStack_150;
    auVar9._0_8_ = uStack_158;
    auVar91 = vblendps_avx(auVar8,auVar7,2);
    auVar75 = vblendps_avx(auVar8,auVar7,3);
    auVar54 = vblendps_avx(auVar7,auVar9,3);
    auVar91 = vblendps_avx(auVar9,auVar91,3);
    auVar75 = vblendps_avx(auVar75,auVar9,2);
    auVar54 = vshufps_avx(auVar54,auVar8,0x12);
    auVar29 = vshufps_avx(auVar91,auVar91,0x49);
    auVar53 = vshufps_avx(auVar91,auVar91,0x92);
    auVar75 = vshufps_avx(auVar75,auVar75,9);
    auVar73._0_4_ = auVar53._0_4_ + auVar29._0_4_;
    auVar73._4_4_ = auVar53._4_4_ + auVar29._4_4_;
    auVar73._8_4_ = auVar53._8_4_ + auVar29._8_4_;
    auVar73._12_4_ = auVar53._12_4_ + auVar29._12_4_;
    auVar29 = vshufps_avx(auVar91,auVar91,0x24);
    auVar27._0_4_ = auVar73._0_4_ + auVar29._0_4_;
    auVar27._4_4_ = auVar73._4_4_ + auVar29._4_4_;
    auVar27._8_4_ = auVar73._8_4_ + auVar29._8_4_;
    auVar27._12_4_ = auVar73._12_4_ + auVar29._12_4_;
    auVar91 = vsubps_avx(auVar91,auVar73);
    auVar91 = vblendps_avx(auVar91,auVar27,8);
    auVar49._0_4_ = auVar91._0_4_ + fVar81;
    auVar49._4_4_ = auVar91._4_4_ + fVar103;
    auVar49._8_4_ = auVar91._8_4_ + fVar104;
    auVar49._12_4_ = auVar91._12_4_ + fVar105;
    auVar91 = vrsqrtps_avx(auVar49);
    fVar177 = auVar91._0_4_;
    fVar188 = auVar91._4_4_;
    fVar189 = auVar91._8_4_;
    fVar190 = auVar91._12_4_;
    auVar162._0_4_ = auVar54._0_4_ + auVar75._0_4_;
    auVar162._4_4_ = auVar54._4_4_ + auVar75._4_4_;
    auVar162._8_4_ = auVar54._8_4_ + auVar75._8_4_;
    auVar162._12_4_ = auVar54._12_4_ + auVar75._12_4_;
    auVar53 = vsubps_avx(auVar54,auVar75);
    auVar91 = vblendps_avx(auVar162,auVar53,2);
    auVar75 = vshufpd_avx(auVar91,auVar91,1);
    auVar91 = vblendps_avx(auVar162,auVar53,1);
    auVar75 = vblendps_avx(auVar75,auVar49,2);
    auVar54 = vshufps_avx(auVar162,auVar53,0xa1);
    auVar29 = vshufps_avx(auVar91,auVar91,0x18);
    auVar91 = vblendps_avx(auVar54,auVar49,4);
    auVar54 = vblendps_avx(auVar29,auVar49,1);
    auVar29 = vblendps_avx(auVar53,auVar49,8);
    auVar118._0_4_ =
         _DAT_145fc6edc *
         ((-(_DAT_145fc6edc * fVar177 * fVar177 * auVar49._0_4_) + _DAT_145fc6edc) * fVar177 +
         fVar177);
    auVar118._4_4_ =
         _DAT_145fc6edc *
         ((-(_DAT_145fc6edc * fVar188 * fVar188 * auVar49._4_4_) + _DAT_145fc6edc) * fVar188 +
         fVar188);
    auVar118._8_4_ =
         _DAT_145fc6edc *
         ((-(_DAT_145fc6edc * fVar189 * fVar189 * auVar49._8_4_) + _DAT_145fc6edc) * fVar189 +
         fVar189);
    auVar118._12_4_ =
         _DAT_145fc6edc *
         ((-(_DAT_145fc6edc * fVar190 * fVar190 * auVar49._12_4_) + _DAT_145fc6edc) * fVar190 +
         fVar190);
    auVar53 = vshufps_avx(auVar118,auVar118,0xff);
    auVar74._0_4_ = auVar118._0_4_ * auVar54._0_4_;
    auVar74._4_4_ = auVar118._0_4_ * auVar54._4_4_;
    auVar74._8_4_ = auVar118._0_4_ * auVar54._8_4_;
    auVar74._12_4_ = auVar118._0_4_ * auVar54._12_4_;
    auVar54 = vshufps_avx(auVar118,auVar118,0x55);
    auVar50._0_4_ = auVar53._0_4_ * auVar29._0_4_;
    auVar50._4_4_ = auVar53._4_4_ * auVar29._4_4_;
    auVar50._8_4_ = auVar53._8_4_ * auVar29._8_4_;
    auVar50._12_4_ = auVar53._12_4_ * auVar29._12_4_;
    auVar139._0_4_ = auVar54._0_4_ * auVar75._0_4_;
    auVar139._4_4_ = auVar54._4_4_ * auVar75._4_4_;
    auVar139._8_4_ = auVar54._8_4_ * auVar75._8_4_;
    auVar139._12_4_ = auVar54._12_4_ * auVar75._12_4_;
    auVar75 = vshufps_avx(auVar118,auVar118,0xaa);
    auVar163._0_4_ = auVar75._0_4_ * auVar91._0_4_;
    auVar163._4_4_ = auVar75._4_4_ * auVar91._4_4_;
    auVar163._8_4_ = auVar75._8_4_ * auVar91._8_4_;
    auVar163._12_4_ = auVar75._12_4_ * auVar91._12_4_;
    auVar91 = vcmpps_avx(auVar30,auVar52,1);
    auVar91 = vblendvps_avx(auVar74,auVar139,auVar91);
    auVar75 = vcmpps_avx(auVar52,auVar157,1);
    auVar157 = vcmpps_avx(auVar30,auVar157,1);
    auVar140._0_4_ = auVar157._0_4_ & auVar75._0_4_;
    auVar140._4_4_ = auVar157._4_4_ & auVar75._4_4_;
    auVar140._8_4_ = auVar157._8_4_ & auVar75._8_4_;
    auVar140._12_4_ = auVar157._12_4_ & auVar75._12_4_;
    auVar91 = vblendvps_avx(auVar91,auVar163,auVar140);
    auVar75 = vcmpps_avx(ZEXT416(0) << 0x20,auVar27,1);
    auVar28._0_4_ = auVar75._0_4_;
    auVar28._4_4_ = auVar28._0_4_;
    auVar28._8_4_ = auVar28._0_4_;
    auVar28._12_4_ = auVar28._0_4_;
    auVar75 = vblendvps_avx(auVar91,auVar50,auVar28);
    auVar51._0_4_ = (uint)auVar171._0_4_ ^ uVar220;
    auVar51._4_4_ = (uint)auVar171._4_4_ ^ uVar224;
    auVar51._8_4_ = (uint)auVar171._8_4_ ^ uVar225;
    auVar51._12_4_ = (uint)auVar171._12_4_ ^ uVar226;
    auVar52 = vshufps_avx(auVar75,auVar75,0xff);
    auVar91 = vblendps_avx(auVar51,auVar175,10);
    fVar177 = auVar75._0_4_;
    auVar30 = vshufps_avx(auVar91,auVar91,0x1b);
    auVar54 = vshufps_avx(auVar75,auVar75,0x55);
    auVar157 = vshufpd_avx(auVar175,auVar51,1);
    auVar91 = vblendps_avx(auVar51,auVar175,9);
    auVar75 = vshufps_avx(auVar75,auVar75,0xaa);
    auVar91 = vshufps_avx(auVar91,auVar91,0xb1);
    auVar176 = ZEXT1664(CONCAT412(auVar75._12_4_ * auVar91._12_4_ +
                                  auVar54._12_4_ * auVar157._12_4_ +
                                  fVar177 * auVar30._12_4_ + auVar171._12_4_ * auVar52._12_4_,
                                  CONCAT48(auVar75._8_4_ * auVar91._8_4_ +
                                           auVar54._8_4_ * auVar157._8_4_ +
                                           fVar177 * auVar30._8_4_ + auVar171._8_4_ * auVar52._8_4_,
                                           CONCAT44(auVar75._4_4_ * auVar91._4_4_ +
                                                    auVar54._4_4_ * auVar157._4_4_ +
                                                    fVar177 * auVar30._4_4_ +
                                                    auVar171._4_4_ * auVar52._4_4_,
                                                    auVar75._0_4_ * auVar91._0_4_ +
                                                    auVar54._0_4_ * auVar157._0_4_ +
                                                    fVar177 * auVar30._0_4_ +
                                                    auVar171._0_4_ * auVar52._0_4_))));
  }
  else {
    fVar37 = fVar37 - *(float *)(param_3 + 0x144);
    auVar40._4_4_ = fVar37;
    auVar40._0_4_ = fVar37;
    auVar40._8_4_ = fVar37;
    auVar40._12_4_ = fVar37;
    if ((*(byte *)(param_3 + 0x14c) & 0xc) == 0 && (~*(byte *)(param_3 + 0x14c) & 1) == 0) {
      uVar1 = *(uint *)(param_3 + 0x148);
      auVar79._4_4_ = uVar1;
      auVar79._0_4_ = uVar1;
      auVar79._8_4_ = uVar1;
      auVar79._12_4_ = uVar1;
      auVar6._12_4_ = 0;
      auVar6._0_12_ = ZEXT812(0);
      auVar91 = vcmpps_avx(auVar40,auVar6 << 0x20,1);
      auVar101._0_4_ = uVar220 ^ uVar1;
      auVar101._4_4_ = uVar224 ^ uVar1;
      auVar101._8_4_ = uVar225 ^ uVar1;
      auVar101._12_4_ = uVar226 ^ uVar1;
      auVar91 = vblendvps_avx(auVar101,auVar79,auVar91);
      auVar40._0_4_ = auVar91._0_4_ + fVar37;
      auVar40._4_4_ = auVar91._4_4_ + fVar37;
      auVar40._8_4_ = auVar91._8_4_ + fVar37;
      auVar40._12_4_ = auVar91._12_4_ + fVar37;
    }
    else if ((bVar10) && ((*(byte *)(param_3 + 0xe1) & 0x20) != 0)) {
      fVar38 = (*(float *)(param_1 + 0x350) * _DAT_14615db0c + *(float *)(param_5 + 0x40)) /
               (*(float *)(param_1 + 0x350) * _DAT_14615dda4);
      auVar91 = vcmpss_avx(ZEXT416((uint)_DAT_145fc6ed8),ZEXT416((uint)fVar38),1);
      auVar157 = vcmpss_avx(ZEXT416((uint)fVar38),ZEXT816(0),1);
      auVar91 = vblendvps_avx(ZEXT416(~auVar91._0_4_ & (uint)(_DAT_145fc6ed8 - fVar38)),auVar75,
                              auVar157);
      fVar37 = auVar91._0_4_ * fVar37;
      auVar40._4_4_ = fVar37;
      auVar40._0_4_ = fVar37;
      auVar40._8_4_ = fVar37;
      auVar40._12_4_ = fVar37;
    }
    auVar108._4_4_ = _DAT_145fc6edc;
    auVar108._0_4_ = _DAT_145fc6edc;
    auVar108._8_4_ = _DAT_145fc6edc;
    auVar108._12_4_ = _DAT_145fc6edc;
    fVar37 = auVar40._0_4_ * (float)uStack_220;
    fVar59 = auVar40._4_4_ * (float)uStack_220;
    fVar61 = auVar40._8_4_ * (float)uStack_220;
    uStack_220._0_4_ = auVar40._12_4_ * (float)uStack_220;
    fVar38 = fVar37 * _DAT_146159b48;
    fVar60 = fVar59 * _DAT_146159b48;
    fVar62 = fVar61 * _DAT_146159b48;
    fVar63 = (float)uStack_220 * _DAT_146159b48;
    auVar65._0_4_ = uVar220 & (uint)fVar38;
    auVar65._4_4_ = uVar224 & (uint)fVar60;
    auVar65._8_4_ = uVar225 & (uint)fVar62;
    auVar65._12_4_ = uVar226 & (uint)fVar63;
    auVar65 = auVar65 | auVar108;
    auVar109._4_4_ = _DAT_145f43778;
    auVar109._0_4_ = _DAT_145f43778;
    auVar109._8_4_ = _DAT_145f43778;
    auVar109._12_4_ = _DAT_145f43778;
    auVar75 = vpcmpeqd_avx(auVar65,auVar65);
    auVar41._0_4_ = (int)(fVar38 + auVar65._0_4_);
    auVar41._4_4_ = (int)(fVar60 + auVar65._4_4_);
    auVar41._8_4_ = (int)(fVar62 + auVar65._8_4_);
    auVar41._12_4_ = (int)(fVar63 + auVar65._12_4_);
    auVar91 = vcvtdq2ps_avx(auVar41);
    auVar175 = vpsubd_avx(auVar41,auVar75);
    fVar37 = auVar91._0_4_ * _DAT_146159b50 +
             auVar91._0_4_ * _DAT_146159b4c + fVar37 * _DAT_145fc6edc;
    fVar38 = auVar91._4_4_ * _DAT_146159b50 +
             auVar91._4_4_ * _DAT_146159b4c + fVar59 * _DAT_145fc6edc;
    fVar59 = auVar91._8_4_ * _DAT_146159b50 +
             auVar91._8_4_ * _DAT_146159b4c + fVar61 * _DAT_145fc6edc;
    fVar60 = auVar91._12_4_ * _DAT_146159b50 +
             auVar91._12_4_ * _DAT_146159b4c + (float)uStack_220 * _DAT_145fc6edc;
    fVar61 = fVar37 * fVar37;
    fVar62 = fVar38 * fVar38;
    fVar63 = fVar59 * fVar59;
    fVar145 = fVar60 * fVar60;
    auVar169._0_4_ =
         fVar61 * fVar37 * (fVar61 * (fVar61 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar37;
    auVar169._4_4_ =
         fVar62 * fVar38 * (fVar62 * (fVar62 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar38;
    auVar169._8_4_ =
         fVar63 * fVar59 * (fVar63 * (fVar63 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar59;
    auVar169._12_4_ =
         fVar145 * fVar60 * (fVar145 * (fVar145 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68)
         + fVar60;
    auVar153._4_4_ = _DAT_145f43774;
    auVar153._0_4_ = _DAT_145f43774;
    auVar153._8_4_ = _DAT_145f43774;
    auVar153._12_4_ = _DAT_145f43774;
    auVar91 = vpand_avx(auVar41,auVar109);
    auVar172._0_4_ =
         fVar61 * (fVar61 * (fVar61 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar81;
    auVar172._4_4_ =
         fVar62 * (fVar62 * (fVar62 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar103;
    auVar172._8_4_ =
         fVar63 * (fVar63 * (fVar63 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) + fVar104;
    auVar172._12_4_ =
         fVar145 * (fVar145 * (fVar145 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         fVar105;
    auVar75 = vpcmpeqd_avx(auVar91,(undefined1  [16])0x0);
    auVar52 = vpsubd_avx((undefined1  [16])0x0,auVar91);
    auVar157 = vpand_avx(auVar41,auVar153);
    auVar175 = vpand_avx(auVar175,auVar153);
    auVar91 = vblendvps_avx(auVar172,auVar169,auVar75);
    auVar75 = vblendvps_avx(auVar172,auVar169,auVar52);
    auVar157 = vpcmpeqd_avx(auVar157,(undefined1  [16])0x0);
    auVar175 = vpcmpeqd_avx(auVar175,(undefined1  [16])0x0);
    auVar110._0_4_ = uVar220 ^ auVar91._0_4_;
    auVar110._4_4_ = uVar224 ^ auVar91._4_4_;
    auVar110._8_4_ = uVar225 ^ auVar91._8_4_;
    auVar110._12_4_ = uVar226 ^ auVar91._12_4_;
    auVar91 = vblendvps_avx(auVar110,auVar91,auVar157);
    auVar111._0_4_ = uVar220 ^ auVar75._0_4_;
    auVar111._4_4_ = uVar224 ^ auVar75._4_4_;
    auVar111._8_4_ = uVar225 ^ auVar75._8_4_;
    auVar111._12_4_ = uVar226 ^ auVar75._12_4_;
    auVar22._0_4_ = auVar91._0_4_ * fVar177;
    auVar22._4_4_ = auVar91._4_4_ * fVar188;
    auVar22._8_4_ = auVar91._8_4_ * fVar189;
    auVar22._12_4_ = auVar91._12_4_ * fVar190;
    auVar91 = *(undefined1 (*) [16])(param_5 + 0x60);
    auVar75 = vblendvps_avx(auVar111,auVar75,auVar175);
    auVar175 = vshufps_avx(auVar75,auVar75,0xff);
    auVar52 = vshufps_avx(auVar22,auVar22,0x55);
    auVar30 = vshufps_avx(auVar22,auVar22,0xaa);
    auVar85._0_4_ = uVar220 ^ (uint)auVar91._0_4_;
    auVar85._4_4_ = uVar224 ^ (uint)auVar91._4_4_;
    auVar85._8_4_ = uVar225 ^ (uint)auVar91._8_4_;
    auVar85._12_4_ = uVar226 ^ (uint)auVar91._12_4_;
    auVar75 = vblendps_avx(auVar85,auVar91,10);
    auVar54 = vshufps_avx(auVar75,auVar75,0x1b);
    auVar157 = vshufpd_avx(auVar91,auVar85,1);
    auVar75 = vblendps_avx(auVar85,auVar91,9);
    auVar75 = vshufps_avx(auVar75,auVar75,0xb1);
    auVar176 = ZEXT1664(CONCAT412(auVar30._12_4_ * auVar75._12_4_ +
                                  auVar52._12_4_ * auVar157._12_4_ +
                                  auVar22._0_4_ * auVar54._12_4_ + auVar175._12_4_ * auVar91._12_4_,
                                  CONCAT48(auVar30._8_4_ * auVar75._8_4_ +
                                           auVar52._8_4_ * auVar157._8_4_ +
                                           auVar22._0_4_ * auVar54._8_4_ +
                                           auVar175._8_4_ * auVar91._8_4_,
                                           CONCAT44(auVar30._4_4_ * auVar75._4_4_ +
                                                    auVar52._4_4_ * auVar157._4_4_ +
                                                    auVar22._0_4_ * auVar54._4_4_ +
                                                    auVar175._4_4_ * auVar91._4_4_,
                                                    auVar30._0_4_ * auVar75._0_4_ +
                                                    auVar52._0_4_ * auVar157._0_4_ +
                                                    auVar22._0_4_ * auVar54._0_4_ +
                                                    auVar175._0_4_ * auVar91._0_4_))));
  }
LAB_1400d9cc7:
  (**(code **)(*param_2 + 0x88))(param_2,auStack_208);
  auVar23._4_4_ = auStack_208._0_4_;
  auVar23._0_4_ = auStack_208._0_4_;
  auVar23._8_4_ = auStack_208._0_4_;
  auVar23._12_4_ = auStack_208._0_4_;
  auVar42._4_4_ = auStack_1f8._4_4_;
  auVar42._0_4_ = auStack_1f8._4_4_;
  auVar42._8_4_ = auStack_1f8._4_4_;
  auVar42._12_4_ = auStack_1f8._4_4_;
  auVar66._4_4_ = (float)uStack_1e0;
  auVar66._0_4_ = (float)uStack_1e0;
  auVar66._8_4_ = (float)uStack_1e0;
  auVar66._12_4_ = (float)uStack_1e0;
  auVar91 = vblendps_avx(_auStack_208,_auStack_1f8,2);
  auVar91 = vblendps_avx(_auStack_1e8,auVar91,3);
  auVar75 = vshufps_avx(auVar91,auVar91,0x49);
  auVar157 = vshufps_avx(auVar91,auVar91,0x92);
  auVar175 = vshufps_avx(auVar91,auVar91,0x24);
  auVar178._0_4_ = auVar157._0_4_ + auVar75._0_4_;
  auVar178._4_4_ = auVar157._4_4_ + auVar75._4_4_;
  auVar178._8_4_ = auVar157._8_4_ + auVar75._8_4_;
  auVar178._12_4_ = auVar157._12_4_ + auVar75._12_4_;
  auVar86._0_4_ = auVar178._0_4_ + auVar175._0_4_;
  auVar86._4_4_ = auVar178._4_4_ + auVar175._4_4_;
  auVar86._8_4_ = auVar178._8_4_ + auVar175._8_4_;
  auVar86._12_4_ = auVar178._12_4_ + auVar175._12_4_;
  auVar91 = vsubps_avx(auVar91,auVar178);
  auVar91 = vblendps_avx(auVar91,auVar86,8);
  auVar173._0_4_ = auVar91._0_4_ + auVar151._0_4_;
  auVar173._4_4_ = auVar91._4_4_ + auVar151._4_4_;
  auVar173._8_4_ = auVar91._8_4_ + auVar151._8_4_;
  auVar173._12_4_ = auVar91._12_4_ + auVar151._12_4_;
  auVar91 = vrsqrtps_avx(auVar173);
  fVar177 = auVar91._0_4_;
  fVar188 = auVar91._4_4_;
  fVar189 = auVar91._8_4_;
  fVar190 = auVar91._12_4_;
  auVar91 = vblendps_avx(_auStack_1f8,_auStack_1e8,3);
  auVar75 = vshufps_avx(auVar91,_auStack_208,0x12);
  auVar91 = vblendps_avx(_auStack_208,_auStack_1f8,3);
  auVar91 = vblendps_avx(auVar91,_auStack_1e8,2);
  auVar91 = vshufps_avx(auVar91,auVar91,9);
  auVar127._0_4_ = auVar75._0_4_ + auVar91._0_4_;
  auVar127._4_4_ = auVar75._4_4_ + auVar91._4_4_;
  auVar127._8_4_ = auVar75._8_4_ + auVar91._8_4_;
  auVar127._12_4_ = auVar75._12_4_ + auVar91._12_4_;
  auVar157 = vsubps_avx(auVar75,auVar91);
  auVar154._0_4_ =
       ((-(_DAT_145fc6edc * fVar177 * fVar177 * auVar173._0_4_) + _DAT_145fc6edc) * fVar177 +
       fVar177) * _DAT_145fc6edc;
  auVar154._4_4_ =
       ((-(_DAT_145fc6edc * fVar188 * fVar188 * auVar173._4_4_) + _DAT_145fc6edc) * fVar188 +
       fVar188) * _DAT_145fc6edc;
  auVar154._8_4_ =
       ((-(_DAT_145fc6edc * fVar189 * fVar189 * auVar173._8_4_) + _DAT_145fc6edc) * fVar189 +
       fVar189) * _DAT_145fc6edc;
  auVar154._12_4_ =
       ((-(_DAT_145fc6edc * fVar190 * fVar190 * auVar173._12_4_) + _DAT_145fc6edc) * fVar190 +
       fVar190) * _DAT_145fc6edc;
  auVar91 = vblendps_avx(auVar127,auVar157,1);
  auVar75 = vblendps_avx(auVar127,auVar157,2);
  auVar52 = vshufps_avx(auVar127,auVar157,0xa1);
  auVar157 = vblendps_avx(auVar157,auVar173,8);
  auVar30 = vshufps_avx(auVar91,auVar91,0x18);
  auVar175 = vshufpd_avx(auVar75,auVar75,1);
  auVar91 = vblendps_avx(auVar52,auVar173,4);
  auVar75 = vblendps_avx(auVar30,auVar173,1);
  auVar175 = vblendps_avx(auVar175,auVar173,2);
  auVar174._0_4_ = auVar154._0_4_ * auVar75._0_4_;
  auVar174._4_4_ = auVar154._0_4_ * auVar75._4_4_;
  auVar174._8_4_ = auVar154._0_4_ * auVar75._8_4_;
  auVar174._12_4_ = auVar154._0_4_ * auVar75._12_4_;
  auVar75 = vshufps_avx(auVar154,auVar154,0x55);
  auVar179._0_4_ = auVar75._0_4_ * auVar175._0_4_;
  auVar179._4_4_ = auVar75._4_4_ * auVar175._4_4_;
  auVar179._8_4_ = auVar75._8_4_ * auVar175._8_4_;
  auVar179._12_4_ = auVar75._12_4_ * auVar175._12_4_;
  auVar175 = vshufps_avx(auVar154,auVar154,0xaa);
  auVar75 = vshufps_avx(auVar154,auVar154,0xff);
  auVar112._0_4_ = auVar75._0_4_ * auVar157._0_4_;
  auVar112._4_4_ = auVar75._4_4_ * auVar157._4_4_;
  auVar112._8_4_ = auVar75._8_4_ * auVar157._8_4_;
  auVar112._12_4_ = auVar75._12_4_ * auVar157._12_4_;
  auVar75 = vcmpps_avx(auVar23,auVar42,1);
  auVar128._0_4_ = auVar175._0_4_ * auVar91._0_4_;
  auVar128._4_4_ = auVar175._4_4_ * auVar91._4_4_;
  auVar128._8_4_ = auVar175._8_4_ * auVar91._8_4_;
  auVar128._12_4_ = auVar175._12_4_ * auVar91._12_4_;
  auVar91 = vcmpps_avx(auVar42,auVar66,1);
  auVar157 = vcmpps_avx(auVar23,auVar66,1);
  auVar24._0_4_ = auVar157._0_4_ & auVar91._0_4_;
  auVar24._4_4_ = auVar157._4_4_ & auVar91._4_4_;
  auVar24._8_4_ = auVar157._8_4_ & auVar91._8_4_;
  auVar24._12_4_ = auVar157._12_4_ & auVar91._12_4_;
  auVar157 = vcmpps_avx(ZEXT816(0) << 0x20,auVar86,1);
  auVar91 = vblendvps_avx(auVar174,auVar179,auVar75);
  auVar91 = vblendvps_avx(auVar91,auVar128,auVar24);
  auVar43._0_4_ = auVar157._0_4_;
  auVar43._4_4_ = auVar43._0_4_;
  auVar43._8_4_ = auVar43._0_4_;
  auVar43._12_4_ = auVar43._0_4_;
  auVar157 = vblendvps_avx(auVar91,auVar112,auVar43);
  auVar44._0_4_ = (uint)auVar176._0_4_ ^ uVar220;
  auVar44._4_4_ = (uint)auVar176._4_4_ ^ uVar224;
  auVar44._8_4_ = (uint)auVar176._8_4_ ^ uVar225;
  auVar44._12_4_ = (uint)auVar176._12_4_ ^ uVar226;
  auVar52 = vshufps_avx(auVar157,auVar157,0xff);
  auVar75 = auVar176._0_16_;
  auVar91 = vblendps_avx(auVar44,auVar75,10);
  fVar177 = auVar157._0_4_;
  auVar30 = vshufps_avx(auVar157,auVar157,0x55);
  auVar175 = vshufpd_avx(auVar75,auVar44,1);
  auVar171 = ZEXT1664(auVar175);
  auVar75 = vblendps_avx(auVar44,auVar75,9);
  auVar157 = vshufps_avx(auVar157,auVar157,0xaa);
  auVar91 = vshufps_avx(auVar91,auVar91,0x1b);
  auVar187 = ZEXT1664(auVar91);
  auVar75 = vshufps_avx(auVar75,auVar75,0xb1);
  auVar167 = ZEXT1664(auVar75);
  auStack_108._0_4_ =
       -(auVar75._0_4_ * auVar157._0_4_) -
       (auVar175._0_4_ * auVar30._0_4_ + (auVar91._0_4_ * fVar177 - auVar176._0_4_ * auVar52._0_4_))
  ;
  auStack_108._4_4_ =
       -(auVar75._4_4_ * auVar157._4_4_) -
       (auVar175._4_4_ * auVar30._4_4_ + (auVar91._4_4_ * fVar177 - auVar176._4_4_ * auVar52._4_4_))
  ;
  auStack_108._8_4_ =
       -(auVar75._8_4_ * auVar157._8_4_) -
       (auVar175._8_4_ * auVar30._8_4_ + (auVar91._8_4_ * fVar177 - auVar176._8_4_ * auVar52._8_4_))
  ;
  auStack_108._12_4_ =
       -(auVar75._12_4_ * auVar157._12_4_) -
       (auVar175._12_4_ * auVar30._12_4_ +
       (auVar91._12_4_ * fVar177 - auVar176._12_4_ * auVar52._12_4_));
  *(undefined1 (*) [16])(param_4 + 0xe0) = auStack_108;
  cVar13 = func_0x0001400db0b0();
  if (cVar13 == '\0') {
    plVar16 = *(longlong **)(param_5 + 8);
    iVar2 = *(int *)(param_5 + 0x10);
    iVar14 = func_0x000144e05fa0(plVar16[1]);
    uVar146 = _DAT_145fc6ee0;
    uVar152 = _UNK_145fc6ee8;
    auVar17 = (undefined1  [8])_DAT_145fc6ee0;
    uVar36 = _UNK_145fc6ee8;
    if (iVar2 != iVar14) {
      uVar15 = (**(code **)(*plVar16 + 0xf0))(plVar16,iVar2);
      (**(code **)(*plVar16 + 0x108))(plVar16,uVar15,auStack_208);
      auVar17 = auStack_208;
      uVar36 = uStack_200;
    }
    *(undefined1 (*) [8])(param_4 + 0xe0) = auVar17;
    *(undefined8 *)(param_4 + 0xe8) = uVar36;
    *(undefined8 *)(param_4 + 0x120) = uVar146;
    *(undefined8 *)(param_4 + 0x128) = uVar152;
  }
  else {
    fVar177 = *(float *)(param_5 + 0x6c);
    fVar188 = *(float *)(param_5 + 0x60);
    fVar189 = *(float *)(param_5 + 100);
    fVar190 = *(float *)(param_5 + 0x68);
    auVar25._0_4_ =
         -(auVar167._0_4_ * fVar190) -
         (auVar171._0_4_ * fVar189 + (auVar187._0_4_ * fVar188 - auVar176._0_4_ * fVar177));
    auVar25._4_4_ =
         -(auVar167._4_4_ * fVar190) -
         (auVar171._4_4_ * fVar189 + (auVar187._4_4_ * fVar188 - auVar176._4_4_ * fVar177));
    auVar25._8_4_ =
         -(auVar167._8_4_ * fVar190) -
         (auVar171._8_4_ * fVar189 + (auVar187._8_4_ * fVar188 - auVar176._8_4_ * fVar177));
    auVar25._12_4_ =
         -(auVar167._12_4_ * fVar190) -
         (auVar171._12_4_ * fVar189 + (auVar187._12_4_ * fVar188 - auVar176._12_4_ * fVar177));
    *(undefined1 (*) [16])(param_4 + 0x120) = auVar25;
    plVar16 = *(longlong **)(param_5 + 0x18);
    iVar2 = *(int *)(param_5 + 0x20);
    iVar14 = func_0x000144e05fa0(plVar16[1]);
    auVar75 = auVar176._0_16_;
    auVar91 = auVar151._0_16_;
    if (iVar2 == iVar14) {
      uStack_200 = _UNK_145fc6ee8;
      auStack_208 = (undefined1  [8])_DAT_145fc6ee0;
      _auStack_1f8 = ZEXT812(0);
      fStack_1ec = 0.0;
    }
    else {
      uVar15 = (**(code **)(*plVar16 + 0xf0))(plVar16,iVar2);
      (**(code **)(*plVar16 + 0x110))(plVar16,uVar15,auStack_208);
      auVar75 = auVar176._0_16_;
      auVar91 = auVar151._0_16_;
    }
    fVar81 = _DAT_145fc6edc;
    auVar87._0_4_ = auStack_208._0_4_ + auStack_208._0_4_;
    auVar87._4_4_ = auStack_208._4_4_ + auStack_208._4_4_;
    auVar87._8_4_ = auStack_208._8_4_ + auStack_208._8_4_;
    auVar87._12_4_ = auStack_208._12_4_ + auStack_208._12_4_;
    auVar157 = vshufps_avx(_auStack_208,_auStack_208,0xff);
    auVar175 = vshufps_avx(_auStack_208,_auStack_208,0xc9);
    auVar52 = vshufps_avx(_auStack_208,_auStack_208,0xd2);
    *(undefined1 (*) [16])(param_5 + 0x60) = auVar75;
    auVar30 = vshufps_avx(auVar87,auVar87,0xc9);
    auVar54 = vshufps_avx(auVar87,auVar87,0xd2);
    fVar103 = auVar91._0_4_;
    fVar104 = auVar91._4_4_;
    fVar105 = auVar91._8_4_;
    fVar60 = auVar91._12_4_;
    auVar67._0_4_ = -(auVar157._0_4_ * auVar54._0_4_) + auVar175._0_4_ * auVar87._0_4_;
    auVar67._4_4_ = -(auVar157._4_4_ * auVar54._4_4_) + auVar175._4_4_ * auVar87._4_4_;
    auVar67._8_4_ = -(auVar157._8_4_ * auVar54._8_4_) + auVar175._8_4_ * auVar87._8_4_;
    auVar67._12_4_ = -(auVar157._12_4_ * auVar54._12_4_) + auVar175._12_4_ * auVar87._12_4_;
    auVar45._0_4_ = auVar52._0_4_ * auVar87._0_4_ + auVar30._0_4_ * auVar157._0_4_;
    auVar45._4_4_ = auVar52._4_4_ * auVar87._4_4_ + auVar30._4_4_ * auVar157._4_4_;
    auVar45._8_4_ = auVar52._8_4_ * auVar87._8_4_ + auVar30._8_4_ * auVar157._8_4_;
    auVar45._12_4_ = auVar52._12_4_ * auVar87._12_4_ + auVar30._12_4_ * auVar157._12_4_;
    auVar26._0_4_ = -(auVar54._0_4_ * auVar52._0_4_) - (auVar175._0_4_ * auVar30._0_4_ - fVar103);
    auVar26._4_4_ = -(auVar54._4_4_ * auVar52._4_4_) - (auVar175._4_4_ * auVar30._4_4_ - fVar104);
    auVar26._8_4_ = -(auVar54._8_4_ * auVar52._8_4_) - (auVar175._8_4_ * auVar30._8_4_ - fVar105);
    auVar26._12_4_ =
         -(auVar54._12_4_ * auVar52._12_4_) - (auVar175._12_4_ * auVar30._12_4_ - fVar60);
    auVar175 = vshufps_avx(auVar67,auVar67,9);
    auVar157 = vshufps_avx(auVar26,auVar26,0x49);
    auVar52 = vshufps_avx(auVar26,auVar26,0x92);
    auVar30 = vshufps_avx(auVar26,auVar26,0x24);
    auVar91 = vblendps_avx(auVar26,auVar45,2);
    auVar129._0_4_ = auVar52._0_4_ + auVar157._0_4_;
    auVar129._4_4_ = auVar52._4_4_ + auVar157._4_4_;
    auVar129._8_4_ = auVar52._8_4_ + auVar157._8_4_;
    auVar129._12_4_ = auVar52._12_4_ + auVar157._12_4_;
    auVar113._0_4_ = auVar129._0_4_ + auVar30._0_4_;
    auVar113._4_4_ = auVar129._4_4_ + auVar30._4_4_;
    auVar113._8_4_ = auVar129._8_4_ + auVar30._8_4_;
    auVar113._12_4_ = auVar129._12_4_ + auVar30._12_4_;
    auVar157 = vsubps_avx(auVar26,auVar129);
    auVar157 = vblendps_avx(auVar157,auVar113,8);
    auVar130._0_4_ = auVar157._0_4_ + fVar103;
    auVar130._4_4_ = auVar157._4_4_ + fVar104;
    auVar130._8_4_ = auVar157._8_4_ + fVar105;
    auVar130._12_4_ = auVar157._12_4_ + fVar60;
    auVar157 = vrsqrtps_avx(auVar130);
    fVar177 = auVar157._0_4_;
    fVar188 = auVar157._4_4_;
    fVar189 = auVar157._8_4_;
    fVar190 = auVar157._12_4_;
    auVar157 = vshufps_avx(auVar45,auVar91,0x12);
    auVar91 = vblendps_avx(auVar67,auVar91,3);
    auVar196._0_4_ = auVar175._0_4_ + auVar157._0_4_;
    auVar196._4_4_ = auVar175._4_4_ + auVar157._4_4_;
    auVar196._8_4_ = auVar175._8_4_ + auVar157._8_4_;
    auVar196._12_4_ = auVar175._12_4_ + auVar157._12_4_;
    auVar54 = vsubps_avx(auVar157,auVar175);
    auVar157 = vblendps_avx(auVar196,auVar54,1);
    auVar180._0_4_ =
         ((-(fVar81 * fVar177 * fVar177 * auVar130._0_4_) + fVar81) * fVar177 + fVar177) * fVar81;
    auVar180._4_4_ =
         ((-(fVar81 * fVar188 * fVar188 * auVar130._4_4_) + fVar81) * fVar188 + fVar188) * fVar81;
    auVar180._8_4_ =
         ((-(fVar81 * fVar189 * fVar189 * auVar130._8_4_) + fVar81) * fVar189 + fVar189) * fVar81;
    auVar180._12_4_ =
         ((-(fVar81 * fVar190 * fVar190 * auVar130._12_4_) + fVar81) * fVar190 + fVar190) * fVar81;
    auVar157 = vshufps_avx(auVar157,auVar157,0x18);
    auVar30 = vshufps_avx(auVar26,auVar26,0x55);
    auVar157 = vblendps_avx(auVar157,auVar130,1);
    auVar175 = vshufps_avx(auVar180,auVar180,0x55);
    auVar191._0_4_ = auVar180._0_4_ * auVar157._0_4_;
    auVar191._4_4_ = auVar180._0_4_ * auVar157._4_4_;
    auVar191._8_4_ = auVar180._0_4_ * auVar157._8_4_;
    auVar191._12_4_ = auVar180._0_4_ * auVar157._12_4_;
    auVar157 = vblendps_avx(auVar196,auVar54,2);
    auVar157 = vshufpd_avx(auVar157,auVar157,1);
    auVar157 = vblendps_avx(auVar157,auVar130,2);
    auVar207._0_4_ = auVar175._0_4_ * auVar157._0_4_;
    auVar207._4_4_ = auVar175._4_4_ * auVar157._4_4_;
    auVar207._8_4_ = auVar175._8_4_ * auVar157._8_4_;
    auVar207._12_4_ = auVar175._12_4_ * auVar157._12_4_;
    auVar221._4_4_ = auVar26._0_4_;
    auVar221._0_4_ = auVar26._0_4_;
    auVar221._8_4_ = auVar26._0_4_;
    auVar221._12_4_ = auVar26._0_4_;
    auVar157 = vcmpps_avx(auVar221,auVar30,1);
    auVar52 = vblendvps_avx(auVar191,auVar207,auVar157);
    auVar157 = vshufps_avx(auVar196,auVar54,0xa1);
    auVar157 = vblendps_avx(auVar157,auVar130,4);
    auVar175 = vblendps_avx(auVar54,auVar130,8);
    auVar54 = vshufps_avx(auVar180,auVar180,0xaa);
    auVar29 = vshufps_avx(auVar180,auVar180,0xff);
    auVar131._0_4_ = auVar29._0_4_ * auVar175._0_4_;
    auVar131._4_4_ = auVar29._4_4_ * auVar175._4_4_;
    auVar131._8_4_ = auVar29._8_4_ * auVar175._8_4_;
    auVar131._12_4_ = auVar29._12_4_ * auVar175._12_4_;
    auVar175 = vshufps_avx(auVar26,auVar26,0xaa);
    auVar155._0_4_ = auVar157._0_4_ * auVar54._0_4_;
    auVar155._4_4_ = auVar157._4_4_ * auVar54._4_4_;
    auVar155._8_4_ = auVar157._8_4_ * auVar54._8_4_;
    auVar155._12_4_ = auVar157._12_4_ * auVar54._12_4_;
    auVar157 = vcmpps_avx(auVar30,auVar175,1);
    auVar175 = vcmpps_avx(auVar221,auVar175,1);
    auVar170._0_4_ = auVar175._0_4_ & auVar157._0_4_;
    auVar170._4_4_ = auVar175._4_4_ & auVar157._4_4_;
    auVar170._8_4_ = auVar175._8_4_ & auVar157._8_4_;
    auVar170._12_4_ = auVar175._12_4_ & auVar157._12_4_;
    auVar157 = vblendvps_avx(auVar52,auVar155,auVar170);
    auVar175 = vcmpps_avx(ZEXT416(0) << 0x20,auVar113,1);
    auVar114._0_4_ = auVar175._0_4_;
    auVar114._4_4_ = auVar114._0_4_;
    auVar114._8_4_ = auVar114._0_4_;
    auVar114._12_4_ = auVar114._0_4_;
    auVar52 = vblendvps_avx(auVar157,auVar131,auVar114);
    auVar115._4_4_ = _DAT_14615a290;
    auVar115._0_4_ = _DAT_14615a290;
    auVar115._8_4_ = _DAT_14615a290;
    auVar115._12_4_ = _DAT_14615a290;
    auVar157 = vrcpps_avx(auVar115);
    fVar37 = auVar157._0_4_;
    fVar38 = auVar157._4_4_;
    fVar59 = auVar157._8_4_;
    fVar61 = auVar157._12_4_;
    fVar37 = (-(fVar37 * _DAT_14615a290) + fVar103) * fVar37 + fVar37;
    fVar38 = (-(fVar38 * _DAT_14615a290) + fVar104) * fVar38 + fVar38;
    fVar59 = (-(fVar59 * _DAT_14615a290) + fVar105) * fVar59 + fVar59;
    fVar61 = (-(fVar61 * _DAT_14615a290) + fVar60) * fVar61 + fVar61;
    auVar147._0_4_ = fVar37 * auStack_1f8._0_4_;
    auVar147._4_4_ = fVar38 * auStack_1f8._4_4_;
    auVar147._8_4_ = fVar59 * auStack_1f8._8_4_;
    auVar147._12_4_ = fVar61 * auStack_1f8._12_4_;
    auVar157 = vroundps_avx(auVar147,3);
    auVar156._0_4_ = -(auVar157._0_4_ * _DAT_14615a290) + auStack_1f8._0_4_;
    auVar156._4_4_ = -(auVar157._4_4_ * _DAT_14615a290) + auStack_1f8._4_4_;
    auVar156._8_4_ = -(auVar157._8_4_ * _DAT_14615a290) + auStack_1f8._8_4_;
    auVar156._12_4_ = -(auVar157._12_4_ * _DAT_14615a290) + auStack_1f8._12_4_;
    auVar148._0_4_ = (int)auVar157._0_4_;
    auVar148._4_4_ = (int)auVar157._4_4_;
    auVar148._8_4_ = (int)auVar157._8_4_;
    auVar148._12_4_ = (int)auVar157._12_4_;
    auVar175 = vpackssdw_avx(auVar148,auVar148);
    auVar157 = vblendps_avx(_auStack_1f8,auVar156,3);
    auVar54 = vshufps_avx(auVar75,auVar75,0xd2);
    auVar175 = vinsertps_avx(auVar157,auVar175,0x30);
    auVar157 = vpunpckhwd_avx(auVar175,auVar175);
    auVar157 = vpsrad_avx(auVar157,0x10);
    auVar157 = vcvtdq2ps_avx(auVar157);
    auVar157 = vshufpd_avx(auVar157,auVar157,3);
    auVar149._0_4_ = *(float *)(param_5 + 0x80) * (auVar157._0_4_ * _DAT_146159c90 + auVar175._0_4_)
    ;
    auVar149._4_4_ = *(float *)(param_5 + 0x84) * (auVar157._4_4_ * _UNK_146159c94 + auVar175._4_4_)
    ;
    auVar149._8_4_ = *(float *)(param_5 + 0x88) * (auVar157._8_4_ * _UNK_146159c98 + auVar175._8_4_)
    ;
    auVar149._12_4_ =
         *(float *)(param_5 + 0x8c) * (auVar157._12_4_ * _UNK_146159c9c + auVar175._12_4_);
    auVar29 = vshufps_avx(auVar75,auVar75,0xc9);
    auVar157 = vshufps_avx(auVar149,auVar149,0xd2);
    auVar175 = vshufps_avx(auVar149,auVar149,0xc9);
    fVar177 = -(auVar54._0_4_ * auVar175._0_4_) + auVar157._0_4_ * auVar29._0_4_;
    fVar188 = -(auVar54._4_4_ * auVar175._4_4_) + auVar157._4_4_ * auVar29._4_4_;
    fVar189 = -(auVar54._8_4_ * auVar175._8_4_) + auVar157._8_4_ * auVar29._8_4_;
    fVar190 = -(auVar54._12_4_ * auVar175._12_4_) + auVar157._12_4_ * auVar29._12_4_;
    auVar208._0_4_ = fVar177 + fVar177;
    auVar208._4_4_ = fVar188 + fVar188;
    auVar208._8_4_ = fVar189 + fVar189;
    auVar208._12_4_ = fVar190 + fVar190;
    auVar150._0_4_ = (uint)auVar52._0_4_ ^ uVar11;
    auVar150._4_4_ = (uint)auVar52._4_4_ ^ uVar11;
    auVar150._8_4_ = (uint)auVar52._8_4_ ^ uVar11;
    auVar150._12_4_ = (uint)auVar52._12_4_ ^ uVar11;
    auVar53 = vshufps_avx(auVar208,auVar208,0xd2);
    auVar31 = vshufps_avx(auVar208,auVar208,0xc9);
    auVar55 = vshufps_avx(auVar75,auVar75,0xff);
    fVar60 = auVar75._0_4_;
    auVar157 = vblendps_avx(auVar150,auVar52,10);
    auVar56 = vshufps_avx(auVar157,auVar157,0x1b);
    auVar76 = vshufps_avx(auVar75,auVar75,0x55);
    auVar30 = vshufpd_avx(auVar52,auVar150,1);
    auVar157 = vblendps_avx(auVar67,auVar26,2);
    auVar175 = vblendps_avx(auVar45,auVar67,2);
    auVar157 = vblendps_avx(auVar45,auVar157,3);
    auVar175 = vblendps_avx(auVar26,auVar175,3);
    auVar92 = vshufps_avx(auVar75,auVar75,0xaa);
    auVar46._0_4_ =
         auVar175._0_4_ * auVar175._0_4_ +
         auVar91._0_4_ * auVar91._0_4_ + auVar157._0_4_ * auVar157._0_4_;
    auVar46._4_4_ =
         auVar175._4_4_ * auVar175._4_4_ +
         auVar91._4_4_ * auVar91._4_4_ + auVar157._4_4_ * auVar157._4_4_;
    auVar46._8_4_ =
         auVar175._8_4_ * auVar175._8_4_ +
         auVar91._8_4_ * auVar91._8_4_ + auVar157._8_4_ * auVar157._8_4_;
    auVar46._12_4_ =
         auVar175._12_4_ * auVar175._12_4_ +
         auVar91._12_4_ * auVar91._12_4_ + auVar157._12_4_ * auVar157._12_4_;
    auVar91 = vblendps_avx(auVar150,auVar52,9);
    auVar93 = vshufps_avx(auVar91,auVar91,0xb1);
    auVar91 = vrsqrtps_avx(auVar46);
    fVar177 = auVar91._0_4_;
    fVar188 = auVar91._4_4_;
    fVar189 = auVar91._8_4_;
    fVar190 = auVar91._12_4_;
    fVar81 = -(_DAT_145fc6edc * fVar177 * fVar177 * auVar46._0_4_) + _DAT_145fc6edc;
    fVar103 = -(_DAT_145fc6edc * fVar188 * fVar188 * auVar46._4_4_) + _DAT_145fc6edc;
    fVar104 = -(_DAT_145fc6edc * fVar189 * fVar189 * auVar46._8_4_) + _DAT_145fc6edc;
    fVar105 = -(_DAT_145fc6edc * fVar190 * fVar190 * auVar46._12_4_) + _DAT_145fc6edc;
    auVar88._4_4_ = _DAT_146159bfc;
    auVar88._0_4_ = _DAT_146159bfc;
    auVar88._8_4_ = _DAT_146159bfc;
    auVar88._12_4_ = _DAT_146159bfc;
    auVar157 = vcmpps_avx(auVar88,auVar46,2);
    auVar68._0_4_ =
         auVar55._0_4_ * auVar208._0_4_ +
         *(float *)*(undefined1 (*) [16])(param_5 + 0x70) + auVar149._0_4_ +
         -(auVar54._0_4_ * auVar31._0_4_) + auVar53._0_4_ * auVar29._0_4_;
    auVar68._4_4_ =
         auVar55._4_4_ * auVar208._4_4_ + *(float *)(param_5 + 0x74) + auVar149._4_4_ +
         -(auVar54._4_4_ * auVar31._4_4_) + auVar53._4_4_ * auVar29._4_4_;
    auVar68._8_4_ =
         auVar55._8_4_ * auVar208._8_4_ + *(float *)(param_5 + 0x78) + auVar149._8_4_ +
         -(auVar54._8_4_ * auVar31._8_4_) + auVar53._8_4_ * auVar29._8_4_;
    auVar68._12_4_ =
         auVar55._12_4_ * auVar208._12_4_ + *(float *)(param_5 + 0x7c) + auVar149._12_4_ +
         -(auVar54._12_4_ * auVar31._12_4_) + auVar53._12_4_ * auVar29._12_4_;
    auVar91 = vblendps_avx(auVar68,*(undefined1 (*) [16])(param_5 + 0x70),8);
    auVar89._0_4_ = fVar37 * auVar91._0_4_;
    auVar89._4_4_ = fVar38 * auVar91._4_4_;
    auVar89._8_4_ = fVar59 * auVar91._8_4_;
    auVar89._12_4_ = fVar61 * auVar91._12_4_;
    auVar75 = vroundps_avx(auVar89,3);
    auVar116._0_4_ = -(auVar75._0_4_ * _DAT_14615a290) + auVar91._0_4_;
    auVar116._4_4_ = -(auVar75._4_4_ * _DAT_14615a290) + auVar91._4_4_;
    auVar116._8_4_ = -(auVar75._8_4_ * _DAT_14615a290) + auVar91._8_4_;
    auVar116._12_4_ = -(auVar75._12_4_ * _DAT_14615a290) + auVar91._12_4_;
    auVar90._0_4_ = (int)auVar75._0_4_;
    auVar90._4_4_ = (int)auVar75._4_4_;
    auVar90._8_4_ = (int)auVar75._8_4_;
    auVar90._12_4_ = (int)auVar75._12_4_;
    auVar175 = vpackssdw_avx(auVar90,auVar90);
    auVar75 = vblendps_avx(auVar91,auVar116,3);
    sVar80 = auVar175._0_2_;
    auVar5._0_2_ = sVar80 + auVar91._0_2_;
    sVar102 = auVar175._2_2_;
    auVar5._2_2_ = sVar102 + auVar91._2_2_;
    auVar5._4_2_ = sVar80 + auVar91._4_2_;
    auVar5._6_2_ = sVar102 + auVar91._6_2_;
    auVar5._8_2_ = sVar80 + auVar91._8_2_;
    auVar5._10_2_ = sVar102 + auVar91._10_2_;
    auVar5._12_2_ = sVar80 + auVar91._12_2_;
    auVar5._14_2_ = sVar102 + auVar91._14_2_;
    auVar91 = vblendps_avx(auVar75,auVar5,8);
    *(undefined1 (*) [16])(param_5 + 0xa0) = auVar91;
    *(float *)(param_5 + 0x90) =
         auVar92._0_4_ * auVar93._0_4_ +
         auVar76._0_4_ * auVar30._0_4_ + fVar60 * auVar56._0_4_ + auVar52._0_4_ * auVar55._0_4_;
    *(float *)(param_5 + 0x94) =
         auVar92._4_4_ * auVar93._4_4_ +
         auVar76._4_4_ * auVar30._4_4_ + fVar60 * auVar56._4_4_ + auVar52._4_4_ * auVar55._4_4_;
    *(float *)(param_5 + 0x98) =
         auVar92._8_4_ * auVar93._8_4_ +
         auVar76._8_4_ * auVar30._8_4_ + fVar60 * auVar56._8_4_ + auVar52._8_4_ * auVar55._8_4_;
    *(float *)(param_5 + 0x9c) =
         auVar92._12_4_ * auVar93._12_4_ +
         auVar76._12_4_ * auVar30._12_4_ + fVar60 * auVar56._12_4_ + auVar52._12_4_ * auVar55._12_4_
    ;
    *(float *)(param_5 + 0xb0) =
         *(float *)(param_5 + 0x80) *
         (float)(auVar157._0_4_ & (uint)((fVar81 * fVar177 + fVar177) * auVar46._0_4_));
    *(float *)(param_5 + 0xb4) =
         *(float *)(param_5 + 0x84) *
         (float)(auVar157._4_4_ & (uint)((fVar103 * fVar188 + fVar188) * auVar46._4_4_));
    *(float *)(param_5 + 0xb8) =
         *(float *)(param_5 + 0x88) *
         (float)(auVar157._8_4_ & (uint)((fVar104 * fVar189 + fVar189) * auVar46._8_4_));
    *(float *)(param_5 + 0xbc) =
         *(float *)(param_5 + 0x8c) *
         (float)(auVar157._12_4_ & (uint)((fVar105 * fVar190 + fVar190) * auVar46._12_4_));
  }
  uVar152 = _UNK_145fc6ee8;
  uVar146 = _DAT_145fc6ee0;
  *(undefined8 *)(param_4 + 0xf0) = _DAT_145fc6ee0;
  *(undefined8 *)(param_4 + 0xf8) = uVar152;
  *(undefined8 *)(param_4 + 0x130) = uVar146;
  *(undefined8 *)(param_4 + 0x138) = uVar152;
  return;
}

