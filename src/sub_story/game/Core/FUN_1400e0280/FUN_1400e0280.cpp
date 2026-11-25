// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e0280  size: 7935 bytes
// Name:    FUN_1400e0280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f63b80, FUN_1400e3ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e0280(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,int *param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  bool bVar26;
  byte bVar27;
  int iVar28;
  undefined4 uVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  byte bVar32;
  uint uVar33;
  longlong *plVar34;
  longlong lVar35;
  float *pfVar36;
  undefined8 *puVar37;
  byte bVar38;
  byte bVar39;
  int *piVar40;
  longlong *plVar41;
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
  short sVar57;
  short sVar84;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
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
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
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
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
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
  float fVar117;
  float fVar118;
  float fVar135;
  float fVar137;
  float fVar139;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar136;
  float fVar138;
  float fVar140;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [64];
  undefined1 auVar162 [64];
  undefined1 auVar163 [64];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [64];
  undefined1 auVar169 [64];
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [64];
  undefined1 auVar181 [16];
  float fVar183;
  float fVar186;
  float fVar187;
  float fVar188;
  undefined1 auVar184 [16];
  undefined1 auStack_438 [8];
  undefined8 uStack_430;
  undefined4 uStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  uint uStack_3c8;
  uint uStack_3c4;
  uint uStack_3c0;
  uint uStack_3bc;
  undefined1 auStack_2c8 [16];
  undefined1 auStack_2b8 [16];
  undefined1 auStack_2a8 [16];
  undefined1 auStack_298 [16];
  undefined1 auStack_248 [16];
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  undefined1 auStack_208 [16];
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  undefined1 auStack_198 [16];
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined1 auStack_178 [16];
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined1 auStack_158 [16];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auVar182 [64];
  undefined1 auVar185 [64];
  
  plVar34 = *(longlong **)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  iVar28 = func_0x000144e05fa0(plVar34[1]);
  fVar117 = 0.0;
  fVar135 = 0.0;
  fVar137 = 0.0;
  fVar139 = 0.0;
  fVar170 = 0.0;
  fVar171 = 0.0;
  fVar172 = 0.0;
  fVar173 = 0.0;
  if (iVar2 != iVar28) {
    uVar29 = (**(code **)(*plVar34 + 0xf0))(plVar34,iVar2);
    (**(code **)(*plVar34 + 0x108))(plVar34,uVar29,&fStack_418);
    fVar170 = fStack_408;
    fVar171 = fStack_404;
    fVar172 = fStack_400;
    fVar173 = fStack_3fc;
  }
  (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_418);
  auVar88._4_4_ = fStack_404;
  auVar88._0_4_ = fStack_408;
  auVar88._8_4_ = fStack_400;
  auVar88._12_4_ = fStack_3fc;
  auVar169 = ZEXT1664(CONCAT412(_DAT_145fc6ed8,
                                CONCAT48(_DAT_145fc6ed8,CONCAT44(_DAT_145fc6ed8,_DAT_145fc6ed8))));
  auVar62._4_4_ = fStack_3f4;
  auVar62._0_4_ = fStack_3f8;
  auVar62._8_4_ = fStack_3f0;
  auVar62._12_4_ = fStack_3ec;
  auVar62 = vshufps_avx(auVar88,auVar62,0x33);
  auVar62 = vshufps_avx(auVar88,auVar62,0x2f);
  auVar168 = ZEXT1664(CONCAT412((_DAT_145fc6ed8 + auVar62._12_4_) * fVar173,
                                CONCAT48((_DAT_145fc6ed8 + auVar62._8_4_) * fVar172,
                                         CONCAT44((_DAT_145fc6ed8 + auVar62._4_4_) * fVar171,
                                                  (_DAT_145fc6ed8 + auVar62._0_4_) * fVar170))));
  (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_148);
  fVar170 = auVar168._0_4_;
  auVar88 = auVar168._0_16_;
  auVar62 = vshufps_avx(auVar88,auVar88,0x55);
  auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
  auVar89._0_4_ =
       auVar88._0_4_ * fStack_128 +
       auVar62._0_4_ * fStack_138 + fVar170 * fStack_148 + auStack_118._0_4_;
  auVar89._4_4_ =
       auVar88._4_4_ * fStack_124 +
       auVar62._4_4_ * fStack_134 + fVar170 * fStack_144 + auStack_118._4_4_;
  auVar89._8_4_ =
       auVar88._8_4_ * fStack_120 +
       auVar62._8_4_ * fStack_130 + fVar170 * fStack_140 + auStack_118._8_4_;
  auVar89._12_4_ =
       auVar88._12_4_ * fStack_11c +
       auVar62._12_4_ * fStack_12c + fVar170 * fStack_13c + auStack_118._12_4_;
  auVar85._4_4_ = _DAT_14615a290;
  auVar85._0_4_ = _DAT_14615a290;
  auVar85._8_4_ = _DAT_14615a290;
  auVar85._12_4_ = _DAT_14615a290;
  auVar88 = vrcpps_avx(auVar85);
  auVar62 = vblendps_avx(auVar89,auStack_118,8);
  fVar170 = auVar88._0_4_;
  fVar171 = auVar88._4_4_;
  fVar172 = auVar88._8_4_;
  fVar173 = auVar88._12_4_;
  fVar170 = (-(fVar170 * _DAT_14615a290) + auVar169._0_4_) * fVar170 + fVar170;
  fVar171 = (-(fVar171 * _DAT_14615a290) + auVar169._4_4_) * fVar171 + fVar171;
  fVar172 = (-(fVar172 * _DAT_14615a290) + auVar169._8_4_) * fVar172 + fVar172;
  fVar173 = (-(fVar173 * _DAT_14615a290) + auVar169._12_4_) * fVar173 + fVar173;
  auVar141._0_4_ = fVar170 * auVar62._0_4_;
  auVar141._4_4_ = fVar171 * auVar62._4_4_;
  auVar141._8_4_ = fVar172 * auVar62._8_4_;
  auVar141._12_4_ = fVar173 * auVar62._12_4_;
  auVar88 = vroundps_avx(auVar141,3);
  auVar86._0_4_ = -(auVar88._0_4_ * _DAT_14615a290) + auVar62._0_4_;
  auVar86._4_4_ = -(auVar88._4_4_ * _DAT_14615a290) + auVar62._4_4_;
  auVar86._8_4_ = -(auVar88._8_4_ * _DAT_14615a290) + auVar62._8_4_;
  auVar86._12_4_ = -(auVar88._12_4_ * _DAT_14615a290) + auVar62._12_4_;
  auVar58._0_4_ = (int)auVar88._0_4_;
  auVar58._4_4_ = (int)auVar88._4_4_;
  auVar58._8_4_ = (int)auVar88._8_4_;
  auVar58._12_4_ = (int)auVar88._12_4_;
  auVar62 = vblendps_avx(auVar89,auVar86,3);
  uVar29 = *(undefined4 *)(*(longlong *)(param_5 + 8) + 0x18);
  auStack_158._4_4_ = uVar29;
  auStack_158._0_4_ = uVar29;
  auStack_158._8_4_ = uVar29;
  auStack_158._12_4_ = uVar29;
  auVar88 = vpackssdw_avx(auVar58,auVar58);
  sVar57 = auVar88._0_2_;
  auVar111._0_2_ = sVar57 + auStack_118._0_2_;
  sVar84 = auVar88._2_2_;
  auVar111._2_2_ = sVar84 + auStack_118._2_2_;
  auVar111._4_2_ = sVar57 + auStack_118._4_2_;
  auVar111._6_2_ = sVar84 + auStack_118._6_2_;
  auVar111._8_2_ = sVar57 + auStack_118._8_2_;
  auVar111._10_2_ = sVar84 + auStack_118._10_2_;
  auVar111._12_2_ = sVar57 + auStack_118._12_2_;
  auVar111._14_2_ = sVar84 + auStack_118._14_2_;
  auVar62 = vpblendd_avx2(auVar62,auVar111,8);
  auVar62 = vblendps_avx(auVar62,auStack_158,4);
  auVar168 = ZEXT1664(auVar62);
  plVar34 = *(longlong **)(param_3 + 0x18);
  iVar2 = *(int *)(param_3 + 0x20);
  iVar28 = func_0x000144e05fa0(plVar34[1]);
  if (iVar2 != iVar28) {
    uVar29 = (**(code **)(*plVar34 + 0xf0))(plVar34,iVar2);
    (**(code **)(*plVar34 + 0x108))(plVar34,uVar29,&fStack_418);
    fVar117 = fStack_408;
    fVar135 = fStack_404;
    fVar137 = fStack_400;
    fVar139 = fStack_3fc;
  }
  (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_418);
  auVar10._4_4_ = fStack_404;
  auVar10._0_4_ = fStack_408;
  auVar10._8_4_ = fStack_400;
  auVar10._12_4_ = fStack_3fc;
  auVar16._4_4_ = fStack_3f4;
  auVar16._0_4_ = fStack_3f8;
  auVar16._8_4_ = fStack_3f0;
  auVar16._12_4_ = fStack_3ec;
  auVar62 = vshufps_avx(auVar10,auVar16,0x33);
  pfVar36 = &fStack_148;
  auVar62 = vshufps_avx(auVar10,auVar62,0x2f);
  auVar161 = ZEXT1664(CONCAT412((auVar169._12_4_ + auVar62._12_4_) * fVar139,
                                CONCAT48((auVar169._8_4_ + auVar62._8_4_) * fVar137,
                                         CONCAT44((auVar169._4_4_ + auVar62._4_4_) * fVar135,
                                                  (auVar169._0_4_ + auVar62._0_4_) * fVar117))));
  (**(code **)(*plVar34 + 0x88))();
  fVar117 = auVar161._0_4_;
  auVar88 = auVar161._0_16_;
  auVar62 = vshufps_avx(auVar88,auVar88,0x55);
  auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
  piVar40 = *(int **)(param_5 + 8);
  auVar42._0_4_ =
       auVar88._0_4_ * fStack_128 +
       auVar62._0_4_ * fStack_138 + fVar117 * fStack_148 + auStack_118._0_4_;
  auVar42._4_4_ =
       auVar88._4_4_ * fStack_124 +
       auVar62._4_4_ * fStack_134 + fVar117 * fStack_144 + auStack_118._4_4_;
  auVar42._8_4_ =
       auVar88._8_4_ * fStack_120 +
       auVar62._8_4_ * fStack_130 + fVar117 * fStack_140 + auStack_118._8_4_;
  auVar42._12_4_ =
       auVar88._12_4_ * fStack_11c +
       auVar62._12_4_ * fStack_12c + fVar117 * fStack_13c + auStack_118._12_4_;
  auVar62 = vblendps_avx(auVar42,auStack_118,8);
  auVar87._0_4_ = fVar170 * auVar62._0_4_;
  auVar87._4_4_ = fVar171 * auVar62._4_4_;
  auVar87._8_4_ = fVar172 * auVar62._8_4_;
  auVar87._12_4_ = fVar173 * auVar62._12_4_;
  auVar88 = vroundps_avx(auVar87,3);
  auVar59._0_4_ = auVar88._0_4_ * _DAT_14615ad78 + auVar62._0_4_;
  auVar59._4_4_ = auVar88._4_4_ * _DAT_14615ad78 + auVar62._4_4_;
  auVar59._8_4_ = auVar88._8_4_ * _DAT_14615ad78 + auVar62._8_4_;
  auVar59._12_4_ = auVar88._12_4_ * _DAT_14615ad78 + auVar62._12_4_;
  auVar62 = vblendps_avx(auVar42,auVar59,3);
  auVar60._0_4_ = (int)auVar88._0_4_;
  auVar60._4_4_ = (int)auVar88._4_4_;
  auVar60._8_4_ = (int)auVar88._8_4_;
  auVar60._12_4_ = (int)auVar88._12_4_;
  auVar88 = vpackssdw_avx(auVar60,auVar60);
  sVar57 = auVar88._0_2_;
  auVar3._0_2_ = sVar57 + auStack_118._0_2_;
  sVar84 = auVar88._2_2_;
  auVar3._2_2_ = sVar84 + auStack_118._2_2_;
  auVar3._4_2_ = sVar57 + auStack_118._4_2_;
  auVar3._6_2_ = sVar84 + auStack_118._6_2_;
  auVar3._8_2_ = sVar57 + auStack_118._8_2_;
  auVar3._10_2_ = sVar84 + auStack_118._10_2_;
  auVar3._12_2_ = sVar57 + auStack_118._12_2_;
  auVar3._14_2_ = sVar84 + auStack_118._14_2_;
  auVar62 = vpblendd_avx2(auVar62,auVar3,8);
  iStack_168 = piVar40[0x1a];
  auVar111 = ZEXT416(0) << 0x20;
  auVar25._4_4_ = iStack_168;
  auVar25._0_4_ = iStack_168;
  auVar25._8_4_ = iStack_168;
  auVar25._12_4_ = iStack_168;
  auVar62 = vblendps_avx(auVar62,auVar25,4);
  auVar180 = ZEXT1664(auVar62);
  auVar89 = auVar168._0_16_;
  auStack_178 = vpsubw_avx(auVar62,auVar89);
  auVar62 = vsubps_avx(auVar62,auVar89);
  auVar62 = vblendps_avx(auVar62,auStack_178,8);
  auVar88 = vpunpckhwd_avx(auVar62,auVar62);
  auVar88 = vpsrad_avx(auVar88,0x10);
  auVar88 = vcvtdq2ps_avx(auVar88);
  auVar88 = vshufpd_avx(auVar88,auVar88,3);
  auVar178._0_4_ = auVar88._0_4_ * _DAT_146159c90 + auVar62._0_4_;
  auVar178._4_4_ = auVar88._4_4_ * _UNK_146159c94 + auVar62._4_4_;
  auVar178._8_4_ = auVar88._8_4_ * _UNK_146159c98 + auVar62._8_4_;
  auVar178._12_4_ = auVar88._12_4_ * _UNK_146159c9c + auVar62._12_4_;
  auVar161 = ZEXT1664(auVar178);
  fVar117 = 0.0;
  _auStack_438 = auVar111;
  if (*param_6 == -1) {
    auVar162 = ZEXT864(0);
  }
  else {
    auVar88 = ZEXT816(0);
    auVar162 = ZEXT1664(auVar88);
    auVar62 = vcmpps_avx(auVar178,auVar88,0);
    uVar29 = vmovmskps_avx(auVar62);
    if ((~(byte)uVar29 & 7) != 0) {
      iStack_188 = param_6[6];
      auVar24._4_4_ = iStack_188;
      auVar24._0_4_ = iStack_188;
      auVar24._8_4_ = iStack_188;
      auVar24._12_4_ = iStack_188;
      auVar62 = vblendps_avx(*(undefined1 (*) [16])(param_4 + 0x70),auVar24,4);
      auVar58 = vsubps_avx(auVar62,auVar89);
      auStack_198 = vpsubw_avx(auVar62,auVar89);
      auVar62 = vblendps_avx(auVar58,auStack_198,8);
      auVar89 = vpunpckhwd_avx(auVar62,auVar62);
      auVar89 = vpsrad_avx(auVar89,0x10);
      auVar89 = vcvtdq2ps_avx(auVar89);
      auVar89 = vshufpd_avx(auVar89,auVar89,3);
      auVar90._0_4_ = auVar89._0_4_ * _DAT_146159c90 + auVar62._0_4_;
      auVar90._4_4_ = auVar89._4_4_ * _UNK_146159c94 + auVar62._4_4_;
      auVar90._8_4_ = auVar89._8_4_ * _UNK_146159c98 + auVar62._8_4_;
      auVar90._12_4_ = auVar89._12_4_ * _UNK_146159c9c + auVar62._12_4_;
      auVar62 = vcmpps_avx(auVar90,auVar88,0);
      uVar29 = vmovmskps_avx(auVar62);
      iStack_184 = iStack_188;
      iStack_180 = iStack_188;
      iStack_17c = iStack_188;
      if ((~(byte)uVar29 & 7) != 0) {
        auVar62 = vshufps_avx(auVar178,auVar178,0xc9);
        auVar88 = vshufps_avx(auVar90,auVar90,0xd2);
        auVar89 = vshufps_avx(auVar178,auVar178,0xd2);
        auVar58 = vshufps_avx(auVar90,auVar90,0xc9);
        auVar43._0_4_ = -(auVar89._0_4_ * auVar58._0_4_) + auVar88._0_4_ * auVar62._0_4_;
        auVar43._4_4_ = -(auVar89._4_4_ * auVar58._4_4_) + auVar88._4_4_ * auVar62._4_4_;
        auVar43._8_4_ = -(auVar89._8_4_ * auVar58._8_4_) + auVar88._8_4_ * auVar62._8_4_;
        auVar43._12_4_ = -(auVar89._12_4_ * auVar58._12_4_) + auVar88._12_4_ * auVar62._12_4_;
        auVar62 = vshufpd_avx(auVar43,auVar43,1);
        if (auVar62._0_4_ < 0.0) {
          auVar43._0_4_ = (float)((uint)auVar43._0_4_ ^ _DAT_145fc6f10);
          auVar43._4_4_ = (float)((uint)auVar43._4_4_ ^ _DAT_145fc6f10);
          auVar43._8_4_ = (float)((uint)auVar43._8_4_ ^ _DAT_145fc6f10);
          auVar43._12_4_ = (float)((uint)auVar43._12_4_ ^ _DAT_145fc6f10);
        }
        fVar117 = auVar43._0_4_;
        auVar91._0_4_ = fVar117 * fVar117;
        fVar137 = auVar43._4_4_;
        auVar91._4_4_ = fVar137 * fVar137;
        fVar183 = auVar43._8_4_;
        auVar91._8_4_ = fVar183 * fVar183;
        fVar187 = auVar43._12_4_;
        auVar91._12_4_ = fVar187 * fVar187;
        auVar62 = vblendps_avx(auVar91,ZEXT816(0) << 0x20,8);
        auVar62 = vhaddps_avx(auVar62,auVar62);
        auVar62 = vhaddps_avx(auVar62,auVar62);
        auVar88 = vrsqrtps_avx(auVar62);
        fVar135 = auVar88._0_4_;
        fVar139 = auVar88._4_4_;
        fVar186 = auVar88._8_4_;
        fVar188 = auVar88._12_4_;
        auVar142._4_4_ = _DAT_145fc6f00;
        auVar142._0_4_ = _DAT_145fc6f00;
        auVar142._8_4_ = _DAT_145fc6f00;
        auVar142._12_4_ = _DAT_145fc6f00;
        auVar44._0_4_ =
             ((_DAT_145fc6f08 * fVar135 * fVar135 * auVar62._0_4_ - _DAT_145fc6f08) * fVar135 +
             fVar135) * fVar117;
        auVar44._4_4_ =
             ((_DAT_145fc6f08 * fVar139 * fVar139 * auVar62._4_4_ - _DAT_145fc6f08) * fVar139 +
             fVar139) * fVar137;
        auVar44._8_4_ =
             ((_DAT_145fc6f08 * fVar186 * fVar186 * auVar62._8_4_ - _DAT_145fc6f08) * fVar186 +
             fVar186) * fVar183;
        auVar44._12_4_ =
             ((_DAT_145fc6f08 * fVar188 * fVar188 * auVar62._12_4_ - _DAT_145fc6f08) * fVar188 +
             fVar188) * fVar187;
        auVar62 = vcmpps_avx(auVar142,auVar62,1);
        auVar9._4_4_ = _UNK_14614f7f4;
        auVar9._0_4_ = _DAT_14614f7f0;
        auVar9._8_4_ = _UNK_14614f7f8;
        auVar9._12_4_ = _UNK_14614f7fc;
        _auStack_438 = vblendvps_avx(auVar9,auVar44,auVar62);
        auVar162 = ZEXT1664(_auStack_438);
        auVar45._0_4_ = auStack_438._0_4_ * _DAT_14614f7f0;
        auVar45._4_4_ = auStack_438._4_4_ * _UNK_14614f7f4;
        auVar45._8_4_ = auStack_438._8_4_ * _UNK_14614f7f8;
        auVar45._12_4_ = auStack_438._12_4_ * _UNK_14614f7fc;
        auVar92._4_4_ = _DAT_145fc6f48;
        auVar92._0_4_ = _DAT_145fc6f48;
        auVar92._8_4_ = _DAT_145fc6f48;
        auVar92._12_4_ = _DAT_145fc6f48;
        auVar62 = vblendps_avx(auVar45,ZEXT816(0) << 0x20,8);
        auVar62 = vhaddps_avx(auVar62,auVar62);
        auVar62 = vhaddps_avx(auVar62,auVar62);
        auVar62 = vmaxps_avx(auVar62,auVar92);
        auVar88 = vminps_avx(auVar62,auVar169._0_16_);
        fVar183 = auVar88._0_4_;
        auVar93._0_4_ = (float)((uint)fVar183 & _DAT_145fc6f4c);
        fVar186 = auVar88._4_4_;
        auVar93._4_4_ = (float)((uint)fVar186 & _DAT_145fc6f4c);
        fVar187 = auVar88._8_4_;
        auVar93._8_4_ = (float)((uint)fVar187 & _DAT_145fc6f4c);
        fVar188 = auVar88._12_4_;
        auVar93._12_4_ = (float)((uint)fVar188 & _DAT_145fc6f4c);
        auVar89 = vsubps_avx(auVar169._0_16_,auVar93);
        auVar62 = vrsqrtps_avx(auVar89);
        fVar117 = auVar62._0_4_;
        fVar135 = auVar62._4_4_;
        fVar137 = auVar62._8_4_;
        fVar139 = auVar62._12_4_;
        auVar152._4_4_ = _DAT_146159bfc;
        auVar152._0_4_ = _DAT_146159bfc;
        auVar152._8_4_ = _DAT_146159bfc;
        auVar152._12_4_ = _DAT_146159bfc;
        auVar62 = vcmpps_avx(auVar152,auVar89,2);
        fVar117 = (float)(auVar62._0_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar117 * fVar117 * auVar89._0_4_ -
                                 _DAT_145fc6f08) * fVar117 + fVar117) * auVar89._0_4_));
        fVar135 = (float)(auVar62._4_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar135 * fVar135 * auVar89._4_4_ -
                                 _DAT_145fc6f08) * fVar135 + fVar135) * auVar89._4_4_));
        fVar137 = (float)(auVar62._8_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar137 * fVar137 * auVar89._8_4_ -
                                 _DAT_145fc6f08) * fVar137 + fVar137) * auVar89._8_4_));
        fVar139 = (float)(auVar62._12_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar139 * fVar139 * auVar89._12_4_ -
                                 _DAT_145fc6f08) * fVar139 + fVar139) * auVar89._12_4_));
        fVar183 = fVar183 * fVar183 * fVar183 * fVar183 *
                  (auVar93._0_4_ *
                   (auVar93._0_4_ * (auVar93._0_4_ * _DAT_146159c04 + _DAT_146159c00) +
                   _DAT_146159c08) + _DAT_146159c0c) +
                  auVar93._0_4_ *
                  (auVar93._0_4_ * (auVar93._0_4_ * _DAT_146159c14 + _DAT_146159c10) +
                  _DAT_146159c18) + _DAT_146159c1c;
        fVar186 = fVar186 * fVar186 * fVar186 * fVar186 *
                  (auVar93._4_4_ *
                   (auVar93._4_4_ * (auVar93._4_4_ * _DAT_146159c04 + _DAT_146159c00) +
                   _DAT_146159c08) + _DAT_146159c0c) +
                  auVar93._4_4_ *
                  (auVar93._4_4_ * (auVar93._4_4_ * _DAT_146159c14 + _DAT_146159c10) +
                  _DAT_146159c18) + _DAT_146159c1c;
        fVar187 = fVar187 * fVar187 * fVar187 * fVar187 *
                  (auVar93._8_4_ *
                   (auVar93._8_4_ * (auVar93._8_4_ * _DAT_146159c04 + _DAT_146159c00) +
                   _DAT_146159c08) + _DAT_146159c0c) +
                  auVar93._8_4_ *
                  (auVar93._8_4_ * (auVar93._8_4_ * _DAT_146159c14 + _DAT_146159c10) +
                  _DAT_146159c18) + _DAT_146159c1c;
        fVar188 = fVar188 * fVar188 * fVar188 * fVar188 *
                  (auVar93._12_4_ *
                   (auVar93._12_4_ * (auVar93._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                   _DAT_146159c08) + _DAT_146159c0c) +
                  auVar93._12_4_ *
                  (auVar93._12_4_ * (auVar93._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
                  _DAT_146159c18) + _DAT_146159c1c;
        auVar94._0_4_ = -(fVar183 * fVar117) + _DAT_145fc6f80;
        auVar94._4_4_ = -(fVar186 * fVar135) + _DAT_145fc6f80;
        auVar94._8_4_ = -(fVar187 * fVar137) + _DAT_145fc6f80;
        auVar94._12_4_ = -(fVar188 * fVar139) + _DAT_145fc6f80;
        auVar119._0_4_ = fVar183 * fVar117;
        auVar119._4_4_ = fVar186 * fVar135;
        auVar119._8_4_ = fVar187 * fVar137;
        auVar119._12_4_ = fVar188 * fVar139;
        auVar62 = vblendvps_avx(auVar119,auVar94,auVar88);
        fVar117 = auVar62._0_4_;
      }
    }
  }
  auVar158 = auVar162._0_16_;
  auVar62 = vcmpps_avx(auVar158,auVar111,0);
  uVar29 = vmovmskps_avx(auVar62);
  bVar38 = (byte)uVar29 & 7;
  fVar135 = _DAT_14615ad78;
  fVar137 = _DAT_14615ad78;
  fVar139 = _DAT_14615ad78;
  fVar183 = _DAT_14615ad78;
  iStack_164 = iStack_168;
  iStack_160 = iStack_168;
  iStack_15c = iStack_168;
  if (bVar38 == 7) {
    auVar65._0_4_ = auVar178._0_4_ * auVar178._0_4_;
    auVar65._4_4_ = auVar178._4_4_ * auVar178._4_4_;
    auVar65._8_4_ = auVar178._8_4_ * auVar178._8_4_;
    auVar65._12_4_ = auVar178._12_4_ * auVar178._12_4_;
    auVar88 = vhaddps_avx(auVar65,auVar65);
    auVar62 = vrsqrtss_avx(auVar88,auVar88);
    fVar186 = auVar62._0_4_;
    auVar62 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar88,2);
    if (0.0 < (float)(auVar62._0_4_ &
                     (uint)(((fVar186 * fVar186 * auVar88._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) *
                             fVar186 + fVar186) * auVar88._0_4_))) {
      auVar62 = vshufpd_avx(auVar178,auVar178,1);
      auVar182 = ZEXT1664(auVar62);
      atan2f(plVar34,pfVar36);
      auVar158 = auVar162._0_16_;
      fVar117 = (float)(auVar182._0_4_ & _DAT_145fc6f4c);
    }
  }
  auVar62 = auVar168._0_16_;
  auVar88 = auVar180._0_16_;
  plVar34 = (longlong *)(param_3 + 8);
  if ((((*(byte *)(param_2 + 0x120) & 0x20) != 0) && ((*(byte *)(param_2 + 0x140) & 0x40) != 0)) ||
     (((*(byte *)(param_2 + 0xf0) & 1) != 0 && ((*(byte *)(param_3 + 0x110) & 2) == 0)))) {
    bVar27 = 0;
LAB_1400e0cf5:
    bVar39 = *(byte *)(param_4 + 0x1a4);
    bVar32 = (bVar39 & 0x10) >> 4;
    if (_DAT_146170760 <= fVar117 && bVar32 == 0) {
      if (bVar27 != 0) goto LAB_1400e0ecb;
    }
    else if (bVar27 != 0) {
      if ((_DAT_146170764 <= fVar117 & bVar32) != 0) goto LAB_1400e0d3a;
LAB_1400e0835:
      if ((*(byte *)(param_3 + 0x110) & 2) != 0) {
        bVar26 = false;
        goto LAB_1400e1178;
      }
    }
    if (bVar38 == 7) {
      auVar47._0_12_ = ZEXT812(0);
      auVar47._12_4_ = 0;
      auVar62 = vcmpps_avx(auVar161._0_16_,auVar47,0);
      uVar29 = vmovmskps_avx(auVar62);
      if ((~(byte)uVar29 & 7) != 0) {
        fVar117 = auVar161._0_4_;
        auVar66._0_4_ = fVar117 * fVar117;
        fVar187 = auVar161._4_4_;
        auVar66._4_4_ = fVar187 * fVar187;
        fVar118 = auVar161._8_4_;
        auVar66._8_4_ = fVar118 * fVar118;
        fVar138 = auVar161._12_4_;
        auVar66._12_4_ = fVar138 * fVar138;
        auVar62 = vblendps_avx(auVar66,auVar47,8);
        auVar62 = vhaddps_avx(auVar62,auVar62);
        auVar88 = vhaddps_avx(auVar62,auVar62);
        auVar62 = vrsqrtps_avx(auVar88);
        fVar186 = auVar62._0_4_;
        fVar188 = auVar62._4_4_;
        fVar136 = auVar62._8_4_;
        fVar140 = auVar62._12_4_;
        auVar62 = vcmpps_avx(auVar47,auVar88,1);
        auVar179._0_4_ =
             auVar62._0_4_ &
             (uint)(fVar117 *
                   ((_DAT_145fc6f08 * fVar186 * fVar186 * auVar88._0_4_ - _DAT_145fc6f08) * fVar186
                   + fVar186));
        auVar179._4_4_ =
             auVar62._4_4_ &
             (uint)(fVar187 *
                   ((_DAT_145fc6f08 * fVar188 * fVar188 * auVar88._4_4_ - _DAT_145fc6f08) * fVar188
                   + fVar188));
        auVar179._8_4_ =
             auVar62._8_4_ &
             (uint)(fVar118 *
                   ((_DAT_145fc6f08 * fVar136 * fVar136 * auVar88._8_4_ - _DAT_145fc6f08) * fVar136
                   + fVar136));
        auVar179._12_4_ =
             auVar62._12_4_ &
             (uint)(fVar138 *
                   ((_DAT_145fc6f08 * fVar140 * fVar140 * auVar88._12_4_ - _DAT_145fc6f08) * fVar140
                   + fVar140));
        auVar161 = ZEXT1664(auVar179);
        auVar111 = vshufps_avx(auVar179,auVar179,0xc9);
        auVar89 = vshufps_avx(auVar179,auVar179,0xd2);
        fVar118 = auVar89._0_4_ * _DAT_14615bd00 + auVar111._0_4_ * _DAT_145fc6ed8;
        fVar136 = auVar89._4_4_ * _UNK_14615bd04 + auVar111._4_4_ * 0.0;
        fVar138 = auVar89._8_4_ * _UNK_14615bd08 + auVar111._8_4_ * 0.0;
        fVar140 = auVar89._12_4_ * _UNK_14615bd0c + auVar111._12_4_ * 0.0;
        auVar154._0_4_ = fVar118 * fVar118;
        auVar154._4_4_ = fVar136 * fVar136;
        auVar154._8_4_ = fVar138 * fVar138;
        auVar154._12_4_ = fVar140 * fVar140;
        auVar62 = vblendps_avx(auVar154,auVar47,8);
        auVar62 = vhaddps_avx(auVar62,auVar62);
        auVar88 = vhaddps_avx(auVar62,auVar62);
        auVar62 = vrsqrtps_avx(auVar88);
        fVar117 = auVar62._0_4_;
        fVar186 = auVar62._4_4_;
        fVar187 = auVar62._8_4_;
        fVar188 = auVar62._12_4_;
        auVar62 = vcmpps_avx(auVar47,auVar88,1);
        auVar124._0_4_ =
             auVar62._0_4_ &
             (uint)(fVar118 *
                   ((_DAT_145fc6f08 * fVar117 * fVar117 * auVar88._0_4_ - _DAT_145fc6f08) * fVar117
                   + fVar117));
        auVar124._4_4_ =
             auVar62._4_4_ &
             (uint)(fVar136 *
                   ((_DAT_145fc6f08 * fVar186 * fVar186 * auVar88._4_4_ - _DAT_145fc6f08) * fVar186
                   + fVar186));
        auVar124._8_4_ =
             auVar62._8_4_ &
             (uint)(fVar138 *
                   ((_DAT_145fc6f08 * fVar187 * fVar187 * auVar88._8_4_ - _DAT_145fc6f08) * fVar187
                   + fVar187));
        auVar124._12_4_ =
             auVar62._12_4_ &
             (uint)(fVar140 *
                   ((_DAT_145fc6f08 * fVar188 * fVar188 * auVar88._12_4_ - _DAT_145fc6f08) * fVar188
                   + fVar188));
        auVar62 = vshufps_avx(auVar124,auVar124,0xc9);
        auVar88 = vshufps_avx(auVar124,auVar124,0xd2);
        fVar118 = -(auVar111._0_4_ * auVar88._0_4_) + auVar62._0_4_ * auVar89._0_4_;
        fVar136 = -(auVar111._4_4_ * auVar88._4_4_) + auVar62._4_4_ * auVar89._4_4_;
        fVar138 = -(auVar111._8_4_ * auVar88._8_4_) + auVar62._8_4_ * auVar89._8_4_;
        fVar140 = -(auVar111._12_4_ * auVar88._12_4_) + auVar62._12_4_ * auVar89._12_4_;
        auVar101._0_4_ = fVar118 * fVar118;
        auVar101._4_4_ = fVar136 * fVar136;
        auVar101._8_4_ = fVar138 * fVar138;
        auVar101._12_4_ = fVar140 * fVar140;
        auVar62 = vblendps_avx(auVar101,auVar47,8);
        auVar62 = vhaddps_avx(auVar62,auVar62);
        auVar88 = vhaddps_avx(auVar62,auVar62);
        auVar111 = vrsqrtps_avx(auVar88);
        auVar62 = vcmpps_avx(auVar47,auVar88,1);
        fVar117 = auVar111._0_4_;
        fVar186 = auVar111._4_4_;
        fVar187 = auVar111._8_4_;
        fVar188 = auVar111._12_4_;
        auVar158._0_4_ =
             auVar62._0_4_ &
             (uint)(fVar118 *
                   ((_DAT_145fc6f08 * fVar117 * fVar117 * auVar88._0_4_ - _DAT_145fc6f08) * fVar117
                   + fVar117));
        auVar158._4_4_ =
             auVar62._4_4_ &
             (uint)(fVar136 *
                   ((_DAT_145fc6f08 * fVar186 * fVar186 * auVar88._4_4_ - _DAT_145fc6f08) * fVar186
                   + fVar186));
        auVar158._8_4_ =
             auVar62._8_4_ &
             (uint)(fVar138 *
                   ((_DAT_145fc6f08 * fVar187 * fVar187 * auVar88._8_4_ - _DAT_145fc6f08) * fVar187
                   + fVar187));
        auVar158._12_4_ =
             auVar62._12_4_ &
             (uint)(fVar140 *
                   ((_DAT_145fc6f08 * fVar188 * fVar188 * auVar88._12_4_ - _DAT_145fc6f08) * fVar188
                   + fVar188));
        _auStack_438 = auVar158;
      }
    }
    auVar164._0_12_ = ZEXT812(0);
    auVar164._12_4_ = 0;
    auVar162 = ZEXT1664(auVar164);
    auVar62 = vcmpps_avx(auVar158,auVar164,0);
    uVar29 = vmovmskps_avx(auVar62);
    if ((~(byte)uVar29 & 7) == 0) {
      uVar33 = 0;
    }
    else {
      FUN_144f63b80(auStack_438,0);
      *(undefined1 (*) [8])(param_3 + 0x100) = auStack_438;
      *(undefined8 *)(param_3 + 0x108) = uStack_430;
      bVar38 = *(byte *)(param_3 + 0x110);
      if ((((*(byte *)(param_2 + 0x14c) & 0xc) != 0) || ((*(byte *)(param_2 + 0x14c) & 1) == 0)) ||
         (*(float *)(param_3 + 0x44) < _DAT_146170768)) {
        bVar38 = bVar38 | 0x20;
        *(byte *)(param_3 + 0x110) = bVar38;
      }
      uVar33 = 0;
      if ((bVar38 & 0x10) != 0) {
        auVar62 = vcmpps_avx(auVar180._0_16_,auVar168._0_16_,6);
        bVar38 = bVar38 | 0x20;
        uVar33 = vextractps_avx(auVar62,2);
        *(byte *)(param_3 + 0x110) = bVar38;
        uVar33 = uVar33 & 1;
      }
      if ((*(byte *)(param_2 + 0x120) & 1) != 0) {
        *(byte *)(param_3 + 0x110) = bVar38 & 0xdf;
      }
    }
    plVar34 = *(longlong **)((longlong)plVar34 + (ulonglong)(uVar33 << 4));
    iVar2 = *(int *)(param_3 + 0x10 + (ulonglong)(uVar33 << 4));
    auVar168 = ZEXT1664(*(undefined1 (*) [16])
                         (*(longlong *)(param_5 + 8) + 0x10 + (ulonglong)(uVar33 * 0x50)));
    iVar28 = func_0x000144e05fa0(plVar34[1]);
    if (iVar2 != iVar28) {
      uVar29 = (**(code **)(*plVar34 + 0xf0))(plVar34,iVar2);
      (**(code **)(*plVar34 + 0x108))(plVar34,uVar29,&fStack_418);
      auVar162 = ZEXT1664(CONCAT412(fStack_3fc,CONCAT48(fStack_400,CONCAT44(fStack_404,fStack_408)))
                         );
    }
    (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_418);
    auVar11._4_4_ = fStack_404;
    auVar11._0_4_ = fStack_408;
    auVar11._8_4_ = fStack_400;
    auVar11._12_4_ = fStack_3fc;
    auVar17._4_4_ = fStack_3f4;
    auVar17._0_4_ = fStack_3f8;
    auVar17._8_4_ = fStack_3f0;
    auVar17._12_4_ = fStack_3ec;
    auVar62 = vshufps_avx(auVar11,auVar17,0x33);
    auVar62 = vshufps_avx(auVar11,auVar62,0x2f);
    auVar180 = ZEXT1664(CONCAT412((auVar169._12_4_ + auVar62._12_4_) * auVar162._12_4_,
                                  CONCAT48((auVar169._8_4_ + auVar62._8_4_) * auVar162._8_4_,
                                           CONCAT44((auVar169._4_4_ + auVar62._4_4_) *
                                                    auVar162._4_4_,
                                                    (auVar169._0_4_ + auVar62._0_4_) *
                                                    auVar162._0_4_))));
    (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_148);
    fVar117 = auVar180._0_4_;
    auVar88 = auVar180._0_16_;
    auVar62 = vshufps_avx(auVar88,auVar88,0x55);
    auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
    auVar46._0_4_ =
         auVar88._0_4_ * fStack_128 +
         auVar62._0_4_ * fStack_138 + fVar117 * fStack_148 + auStack_118._0_4_;
    auVar46._4_4_ =
         auVar88._4_4_ * fStack_124 +
         auVar62._4_4_ * fStack_134 + fVar117 * fStack_144 + auStack_118._4_4_;
    auVar46._8_4_ =
         auVar88._8_4_ * fStack_120 +
         auVar62._8_4_ * fStack_130 + fVar117 * fStack_140 + auStack_118._8_4_;
    auVar46._12_4_ =
         auVar88._12_4_ * fStack_11c +
         auVar62._12_4_ * fStack_12c + fVar117 * fStack_13c + auStack_118._12_4_;
    auVar62 = vblendps_avx(auVar46,auStack_118,8);
    auVar95._0_4_ = fVar170 * auVar62._0_4_;
    auVar95._4_4_ = fVar171 * auVar62._4_4_;
    auVar95._8_4_ = fVar172 * auVar62._8_4_;
    auVar95._12_4_ = fVar173 * auVar62._12_4_;
    auVar88 = vroundps_avx(auVar95,3);
    auVar174._0_4_ = auVar88._0_4_ * fVar135 + auVar62._0_4_;
    auVar174._4_4_ = auVar88._4_4_ * fVar137 + auVar62._4_4_;
    auVar174._8_4_ = auVar88._8_4_ * fVar139 + auVar62._8_4_;
    auVar174._12_4_ = auVar88._12_4_ * fVar183 + auVar62._12_4_;
    auVar61._0_4_ = (int)auVar88._0_4_;
    auVar61._4_4_ = (int)auVar88._4_4_;
    auVar61._8_4_ = (int)auVar88._8_4_;
    auVar61._12_4_ = (int)auVar88._12_4_;
    auVar62 = vblendps_avx(auVar46,auVar174,3);
    auVar88 = vpackssdw_avx(auVar61,auVar61);
    sVar57 = auVar88._0_2_;
    auVar4._0_2_ = sVar57 + auStack_118._0_2_;
    sVar84 = auVar88._2_2_;
    auVar4._2_2_ = sVar84 + auStack_118._2_2_;
    auVar4._4_2_ = sVar57 + auStack_118._4_2_;
    auVar4._6_2_ = sVar84 + auStack_118._6_2_;
    auVar4._8_2_ = sVar57 + auStack_118._8_2_;
    auVar4._10_2_ = sVar84 + auStack_118._10_2_;
    auVar4._12_2_ = sVar57 + auStack_118._12_2_;
    auVar4._14_2_ = sVar84 + auStack_118._14_2_;
    auVar62 = vpblendd_avx2(auVar62,auVar4,8);
    auVar62 = vblendps_avx(auVar62,ZEXT816(0) << 0x20,4);
    auVar89 = auVar168._0_16_;
    auVar88 = vsubps_avx(auVar89,auVar62);
    auVar62 = vpsubw_avx(auVar89,auVar62);
    auVar88 = vblendps_avx(auVar88,auVar62,8);
    auVar62 = vpunpckhwd_avx(auVar88,auVar88);
    auVar62 = vpsrad_avx(auVar62,0x10);
    auVar62 = vcvtdq2ps_avx(auVar62);
    auVar111 = vshufpd_avx(auVar62,auVar62,3);
    auVar62 = *(undefined1 (*) [16])(param_3 + 0x100);
    fVar170 = auVar62._0_4_;
    auVar120._0_4_ = (auVar111._0_4_ * _DAT_146159c90 + auVar88._0_4_) * fVar170;
    fVar171 = auVar62._4_4_;
    auVar120._4_4_ = (auVar111._4_4_ * _UNK_146159c94 + auVar88._4_4_) * fVar171;
    fVar172 = auVar62._8_4_;
    auVar120._8_4_ = (auVar111._8_4_ * _UNK_146159c98 + auVar88._8_4_) * fVar172;
    fVar173 = auVar62._12_4_;
    auVar120._12_4_ = (auVar111._12_4_ * _UNK_146159c9c + auVar88._12_4_) * fVar173;
    auVar88 = vblendps_avx(auVar120,ZEXT816(0) << 0x20,8);
    auVar88 = vhaddps_avx(auVar88,auVar88);
    auVar88 = vhaddps_avx(auVar88,auVar88);
    auVar88 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar88,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar88;
    if ((*(float *)(param_3 + 0x108) != 0.0) || (NAN(*(float *)(param_3 + 0x108)))) {
      auVar111 = vshufps_avx(auVar62,auVar62,0xaa);
      auVar89 = vshufps_avx(auVar88,auVar88,0xaa);
      auVar62 = vrcpps_avx(auVar111);
      fVar117 = auVar62._0_4_;
      fVar135 = auVar62._4_4_;
      fVar137 = auVar62._8_4_;
      fVar139 = auVar62._12_4_;
      auVar96._0_4_ =
           (-((fVar117 * auVar111._0_4_ - auVar169._0_4_) * fVar117) + fVar117) * auVar89._0_4_;
      auVar96._4_4_ =
           (-((fVar135 * auVar111._4_4_ - auVar169._4_4_) * fVar135) + fVar135) * auVar89._4_4_;
      auVar96._8_4_ =
           (-((fVar137 * auVar111._8_4_ - auVar169._8_4_) * fVar137) + fVar137) * auVar89._8_4_;
      auVar96._12_4_ =
           (-((fVar139 * auVar111._12_4_ - auVar169._12_4_) * fVar139) + fVar139) * auVar89._12_4_;
    }
    else {
      auVar96 = vshufps_avx(auVar89,auVar89,0xaa);
    }
    auVar62 = vblendps_avx(auVar88,auVar96,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar62;
    if ((((*(byte *)(param_2 + 0x120) & 0x20) == 0) && ((*(byte *)(param_2 + 0x14d) & 8) == 0)) &&
       ((*(byte *)(param_3 + 0x110) & 0x10) == 0)) {
      auVar111 = ZEXT816(0) << 0x20;
      puVar1 = (undefined8 *)(param_3 + 0x100);
      auVar88 = vcmpps_avx(auVar161._0_16_,auVar111,0);
      uVar29 = vmovmskps_avx(auVar88);
      puVar37 = puVar1;
      if ((~(byte)uVar29 & 7) == 0) {
        lVar35 = *(longlong *)(param_5 + 8);
      }
      else {
        auVar121._0_4_ = fVar170 * fVar170;
        auVar121._4_4_ = fVar171 * fVar171;
        auVar121._8_4_ = fVar172 * fVar172;
        auVar121._12_4_ = fVar173 * fVar173;
        fVar117 = auVar161._0_4_;
        auVar143._0_4_ = fVar117 * fVar117;
        fVar135 = auVar161._4_4_;
        auVar143._4_4_ = fVar135 * fVar135;
        fVar137 = auVar161._8_4_;
        auVar143._8_4_ = fVar137 * fVar137;
        fVar139 = auVar161._12_4_;
        auVar143._12_4_ = fVar139 * fVar139;
        auVar63._0_4_ = fVar117 * fVar170;
        auVar63._4_4_ = fVar135 * fVar171;
        auVar63._8_4_ = fVar137 * fVar172;
        auVar63._12_4_ = fVar139 * fVar173;
        auVar88 = vblendps_avx(auVar121,auVar111,8);
        auVar89 = vblendps_avx(auVar143,auVar111,8);
        auVar111 = vblendps_avx(auVar63,auVar111,8);
        auVar97._4_4_ = _DAT_145fc6f48;
        auVar97._0_4_ = _DAT_145fc6f48;
        auVar97._8_4_ = _DAT_145fc6f48;
        auVar97._12_4_ = _DAT_145fc6f48;
        auVar88 = vhaddps_avx(auVar88,auVar88);
        auVar89 = vhaddps_avx(auVar89,auVar89);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        lVar35 = *(longlong *)(param_5 + 8);
        auVar88 = vhaddps_avx(auVar88,auVar88);
        auVar89 = vhaddps_avx(auVar89,auVar89);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar122._0_4_ = auVar89._0_4_ * auVar88._0_4_;
        auVar122._4_4_ = auVar89._4_4_ * auVar88._4_4_;
        auVar122._8_4_ = auVar89._8_4_ * auVar88._8_4_;
        auVar122._12_4_ = auVar89._12_4_ * auVar88._12_4_;
        auVar88 = vrsqrtps_avx(auVar122);
        fVar170 = auVar88._0_4_;
        fVar171 = auVar88._4_4_;
        fVar172 = auVar88._8_4_;
        fVar173 = auVar88._12_4_;
        auVar64._0_4_ =
             ((_DAT_145fc6f08 * fVar170 * fVar170 * auVar122._0_4_ - _DAT_145fc6f08) * fVar170 +
             fVar170) * auVar111._0_4_;
        auVar64._4_4_ =
             ((_DAT_145fc6f08 * fVar171 * fVar171 * auVar122._4_4_ - _DAT_145fc6f08) * fVar171 +
             fVar171) * auVar111._4_4_;
        auVar64._8_4_ =
             ((_DAT_145fc6f08 * fVar172 * fVar172 * auVar122._8_4_ - _DAT_145fc6f08) * fVar172 +
             fVar172) * auVar111._8_4_;
        auVar64._12_4_ =
             ((_DAT_145fc6f08 * fVar173 * fVar173 * auVar122._12_4_ - _DAT_145fc6f08) * fVar173 +
             fVar173) * auVar111._12_4_;
        auVar88 = vmaxps_avx(auVar64,auVar97);
        auVar111 = vminps_avx(auVar88,auVar169._0_16_);
        fVar117 = auVar111._0_4_;
        auVar98._0_4_ = (float)((uint)fVar117 & _DAT_145fc6f4c);
        fVar135 = auVar111._4_4_;
        auVar98._4_4_ = (float)((uint)fVar135 & _DAT_145fc6f4c);
        fVar137 = auVar111._8_4_;
        auVar98._8_4_ = (float)((uint)fVar137 & _DAT_145fc6f4c);
        fVar139 = auVar111._12_4_;
        auVar98._12_4_ = (float)((uint)fVar139 & _DAT_145fc6f4c);
        auVar89 = vsubps_avx(auVar169._0_16_,auVar98);
        auVar88 = vrsqrtps_avx(auVar89);
        fVar170 = auVar88._0_4_;
        fVar171 = auVar88._4_4_;
        fVar172 = auVar88._8_4_;
        fVar173 = auVar88._12_4_;
        auVar153._4_4_ = _DAT_146159bfc;
        auVar153._0_4_ = _DAT_146159bfc;
        auVar153._8_4_ = _DAT_146159bfc;
        auVar153._12_4_ = _DAT_146159bfc;
        auVar88 = vcmpps_avx(auVar153,auVar89,2);
        fVar170 = (float)(auVar88._0_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar170 * fVar170 * auVar89._0_4_ -
                                 _DAT_145fc6f08) * fVar170 + fVar170) * auVar89._0_4_));
        fVar171 = (float)(auVar88._4_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar171 * fVar171 * auVar89._4_4_ -
                                 _DAT_145fc6f08) * fVar171 + fVar171) * auVar89._4_4_));
        fVar172 = (float)(auVar88._8_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar172 * fVar172 * auVar89._8_4_ -
                                 _DAT_145fc6f08) * fVar172 + fVar172) * auVar89._8_4_));
        fVar173 = (float)(auVar88._12_4_ &
                         (uint)(((_DAT_145fc6f08 * fVar173 * fVar173 * auVar89._12_4_ -
                                 _DAT_145fc6f08) * fVar173 + fVar173) * auVar89._12_4_));
        fVar117 = fVar117 * fVar117 * fVar117 * fVar117 *
                  (auVar98._0_4_ *
                   (auVar98._0_4_ * (auVar98._0_4_ * _DAT_146159c04 + _DAT_146159c00) +
                   _DAT_146159c08) + _DAT_146159c0c) +
                  auVar98._0_4_ *
                  (auVar98._0_4_ * (auVar98._0_4_ * _DAT_146159c14 + _DAT_146159c10) +
                  _DAT_146159c18) + _DAT_146159c1c;
        fVar135 = fVar135 * fVar135 * fVar135 * fVar135 *
                  (auVar98._4_4_ *
                   (auVar98._4_4_ * (auVar98._4_4_ * _DAT_146159c04 + _DAT_146159c00) +
                   _DAT_146159c08) + _DAT_146159c0c) +
                  auVar98._4_4_ *
                  (auVar98._4_4_ * (auVar98._4_4_ * _DAT_146159c14 + _DAT_146159c10) +
                  _DAT_146159c18) + _DAT_146159c1c;
        fVar137 = fVar137 * fVar137 * fVar137 * fVar137 *
                  (auVar98._8_4_ *
                   (auVar98._8_4_ * (auVar98._8_4_ * _DAT_146159c04 + _DAT_146159c00) +
                   _DAT_146159c08) + _DAT_146159c0c) +
                  auVar98._8_4_ *
                  (auVar98._8_4_ * (auVar98._8_4_ * _DAT_146159c14 + _DAT_146159c10) +
                  _DAT_146159c18) + _DAT_146159c1c;
        fVar139 = fVar139 * fVar139 * fVar139 * fVar139 *
                  (auVar98._12_4_ *
                   (auVar98._12_4_ * (auVar98._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                   _DAT_146159c08) + _DAT_146159c0c) +
                  auVar98._12_4_ *
                  (auVar98._12_4_ * (auVar98._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
                  _DAT_146159c18) + _DAT_146159c1c;
        auVar99._0_4_ = -(fVar117 * fVar170) + _DAT_145fc6f80;
        auVar99._4_4_ = -(fVar135 * fVar171) + _DAT_145fc6f80;
        auVar99._8_4_ = -(fVar137 * fVar172) + _DAT_145fc6f80;
        auVar99._12_4_ = -(fVar139 * fVar173) + _DAT_145fc6f80;
        auVar123._0_4_ = fVar117 * fVar170;
        auVar123._4_4_ = fVar135 * fVar171;
        auVar123._8_4_ = fVar137 * fVar172;
        auVar123._12_4_ = fVar139 * fVar173;
        auVar88 = vblendvps_avx(auVar123,auVar99,auVar111);
        if (_DAT_14616b274 <= auVar88._0_4_) {
          auVar88 = vshufpd_avx(auVar62,auVar62,1);
          puVar37 = (undefined8 *)&UNK_146723390;
          if (auVar88._0_4_ <= *(float *)(lVar35 + 0x18 + (ulonglong)(uVar33 * 0x50))) {
            puVar37 = puVar1;
          }
        }
      }
      auVar88 = vshufps_avx(auVar62,auVar62,0xaa);
      uVar29 = *(undefined4 *)(lVar35 + 0x18 + (ulonglong)(uVar33 * 0x50));
      auVar100._4_4_ = uVar29;
      auVar100._0_4_ = uVar29;
      auVar100._8_4_ = uVar29;
      auVar100._12_4_ = uVar29;
      auVar88 = vminps_avx(auVar100,auVar88);
      auVar62 = vblendps_avx(auVar62,auVar88,4);
      *(undefined1 (*) [16])(param_3 + 0xf0) = auVar62;
      uVar30 = puVar37[1];
      *puVar1 = *puVar37;
      *(undefined8 *)(param_3 + 0x108) = uVar30;
    }
    bVar38 = *(byte *)(param_4 + 0x1a4) & 0xef;
    goto LAB_1400e0c76;
  }
  bVar27 = *(byte *)(param_2 + 0x14c);
  if (((bVar27 >> 2 | ~bVar27) & 1) == 0) {
    bVar27 = (bVar27 & 8) >> 3;
    goto LAB_1400e0cf5;
  }
  bVar39 = *(byte *)(param_4 + 0x1a4);
  if (_DAT_146170760 <= fVar117 && (bVar39 & 0x10) == 0) {
LAB_1400e0ecb:
    bVar26 = true;
  }
  else {
    if ((_DAT_146170764 <= fVar117 & (bVar39 & 0x10) >> 4) == 0) goto LAB_1400e0835;
LAB_1400e0d3a:
    bVar26 = false;
  }
  if ((*(byte *)(param_2 + 0x141) & 4) == 0) {
    bVar27 = func_0x0001400ca280(param_2);
    puVar31 = (undefined4 *)((ulonglong)bVar27 * 4 + 0x14abbd850);
  }
  else {
    puVar31 = (undefined4 *)0x14abbd854;
  }
  fStack_3d8 = (float)piVar40[8];
  fStack_3d4 = (float)piVar40[9];
  fStack_3d0 = (float)piVar40[10];
  fStack_3cc = (float)piVar40[0xb];
  auVar67._0_12_ = ZEXT812(0);
  auVar67._12_4_ = 0;
  auVar155._4_4_ = _DAT_145fc6f48;
  auVar155._0_4_ = _DAT_145fc6f48;
  auVar155._8_4_ = _DAT_145fc6f48;
  auVar155._12_4_ = _DAT_145fc6f48;
  auVar181._4_4_ = _DAT_146159c04;
  auVar181._0_4_ = _DAT_146159c04;
  auVar181._8_4_ = _DAT_146159c04;
  auVar181._12_4_ = _DAT_146159c04;
  auVar182 = ZEXT1664(auVar181);
  auVar184._4_4_ = _DAT_146159c14;
  auVar184._0_4_ = _DAT_146159c14;
  auVar184._8_4_ = _DAT_146159c14;
  auVar184._12_4_ = _DAT_146159c14;
  auVar185 = ZEXT1664(auVar184);
  auVar165._4_4_ = _DAT_145fc6f80;
  auVar165._0_4_ = _DAT_145fc6f80;
  auVar165._8_4_ = _DAT_145fc6f80;
  auVar165._12_4_ = _DAT_145fc6f80;
  auVar162 = ZEXT1664(auVar165);
  auVar48._0_4_ = fStack_3d8 * _DAT_14614f7f0;
  auVar48._4_4_ = fStack_3d4 * _UNK_14614f7f4;
  auVar48._8_4_ = fStack_3d0 * _UNK_14614f7f8;
  auVar48._12_4_ = fStack_3cc * _UNK_14614f7fc;
  auVar62 = vblendps_avx(auVar48,auVar67,8);
  auVar62 = vhaddps_avx(auVar62,auVar62);
  auVar62 = vhaddps_avx(auVar62,auVar62);
  uStack_3c8 = _DAT_145fc6f4c;
  uStack_3c4 = _DAT_145fc6f4c;
  uStack_3c0 = _DAT_145fc6f4c;
  uStack_3bc = _DAT_145fc6f4c;
  auVar62 = vmaxps_avx(auVar62,auVar155);
  auVar88 = vminps_avx(auVar62,auVar169._0_16_);
  fVar117 = auVar88._0_4_;
  auVar68._0_4_ = (float)((uint)fVar117 & _DAT_145fc6f4c);
  fVar186 = auVar88._4_4_;
  auVar68._4_4_ = (float)((uint)fVar186 & _DAT_145fc6f4c);
  fVar187 = auVar88._8_4_;
  auVar68._8_4_ = (float)((uint)fVar187 & _DAT_145fc6f4c);
  fVar188 = auVar88._12_4_;
  auVar68._12_4_ = (float)((uint)fVar188 & _DAT_145fc6f4c);
  auVar111 = vsubps_avx(auVar169._0_16_,auVar68);
  fVar118 = fVar117 * fVar117 * fVar117 * fVar117 *
            (auVar68._0_4_ *
             (auVar68._0_4_ * (auVar68._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
            _DAT_146159c0c) +
            auVar68._0_4_ *
            (auVar68._0_4_ * (auVar68._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
  fVar136 = fVar186 * fVar186 * fVar186 * fVar186 *
            (auVar68._4_4_ *
             (auVar68._4_4_ * (auVar68._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
            _DAT_146159c0c) +
            auVar68._4_4_ *
            (auVar68._4_4_ * (auVar68._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
  fVar138 = fVar187 * fVar187 * fVar187 * fVar187 *
            (auVar68._8_4_ *
             (auVar68._8_4_ * (auVar68._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
            _DAT_146159c0c) +
            auVar68._8_4_ *
            (auVar68._8_4_ * (auVar68._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
  fVar140 = fVar188 * fVar188 * fVar188 * fVar188 *
            (auVar68._12_4_ *
             (auVar68._12_4_ * (auVar68._12_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08)
            + _DAT_146159c0c) +
            auVar68._12_4_ *
            (auVar68._12_4_ * (auVar68._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
  auVar62 = vrsqrtps_avx(auVar111);
  fVar117 = auVar62._0_4_;
  fVar186 = auVar62._4_4_;
  fVar187 = auVar62._8_4_;
  fVar188 = auVar62._12_4_;
  auVar159._4_4_ = _DAT_146159bfc;
  auVar159._0_4_ = _DAT_146159bfc;
  auVar159._8_4_ = _DAT_146159bfc;
  auVar159._12_4_ = _DAT_146159bfc;
  auVar62 = vcmpps_avx(auVar159,auVar111,2);
  fVar117 = (float)(auVar62._0_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar117 * fVar117 * auVar111._0_4_ - _DAT_145fc6f08) *
                           fVar117 + fVar117) * auVar111._0_4_));
  fVar186 = (float)(auVar62._4_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar186 * fVar186 * auVar111._4_4_ - _DAT_145fc6f08) *
                           fVar186 + fVar186) * auVar111._4_4_));
  fVar187 = (float)(auVar62._8_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar187 * fVar187 * auVar111._8_4_ - _DAT_145fc6f08) *
                           fVar187 + fVar187) * auVar111._8_4_));
  fVar188 = (float)(auVar62._12_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar188 * fVar188 * auVar111._12_4_ - _DAT_145fc6f08) *
                           fVar188 + fVar188) * auVar111._12_4_));
  auVar102._0_4_ = fVar117 * fVar118;
  auVar102._4_4_ = fVar186 * fVar136;
  auVar102._8_4_ = fVar187 * fVar138;
  auVar102._12_4_ = fVar188 * fVar140;
  auVar69._0_4_ = -(fVar118 * fVar117) + _DAT_145fc6f80;
  auVar69._4_4_ = -(fVar136 * fVar186) + _DAT_145fc6f80;
  auVar69._8_4_ = -(fVar138 * fVar187) + _DAT_145fc6f80;
  auVar69._12_4_ = -(fVar140 * fVar188) + _DAT_145fc6f80;
  auVar62 = vblendvps_avx(auVar102,auVar69,auVar88);
  uStack_41c = *puVar31;
  fVar117 = _DAT_146170764;
  if (bVar26) {
    fVar117 = _DAT_146170760;
  }
  if (fVar117 <= auVar62._0_4_) {
    iVar2 = piVar40[6];
    auVar163 = ZEXT1664(auVar155);
    uVar30 = func_0x000144f63b60(param_1 + 0x2a0,param_7,0);
    uStack_f8 = CONCAT44(fStack_3d4,fStack_3d8);
    uStack_f0 = CONCAT44(fStack_3cc,fStack_3d0);
    FUN_1400e3ce0(uVar30,piVar40,uStack_41c,iVar2,&uStack_f8);
    auVar165 = auVar162._0_16_;
    auVar184 = auVar185._0_16_;
    auVar181 = auVar182._0_16_;
    auVar155 = auVar163._0_16_;
    piVar40 = *(int **)(param_5 + 8);
    iStack_1f8 = piVar40[6];
    auVar23._4_4_ = iStack_1f8;
    auVar23._0_4_ = iStack_1f8;
    auVar23._8_4_ = iStack_1f8;
    auVar23._12_4_ = iStack_1f8;
    auVar62 = vblendps_avx(auVar168._0_16_,auVar23,4);
    auVar168 = ZEXT1664(auVar62);
    bVar39 = *(byte *)(param_4 + 0x1a4);
    iStack_1f4 = iStack_1f8;
    iStack_1f0 = iStack_1f8;
    iStack_1ec = iStack_1f8;
  }
  auVar62 = *(undefined1 (*) [16])(piVar40 + 0x1c);
  auVar162 = ZEXT1664(auVar62);
  auVar49._0_4_ = auVar62._0_4_ * _DAT_14614f7f0;
  auVar49._4_4_ = auVar62._4_4_ * _UNK_14614f7f4;
  auVar49._8_4_ = auVar62._8_4_ * _UNK_14614f7f8;
  auVar49._12_4_ = auVar62._12_4_ * _UNK_14614f7fc;
  auVar62 = vblendps_avx(auVar49,_DAT_14614f7c0,8);
  auVar62 = vhaddps_avx(auVar62,auVar62);
  auVar62 = vhaddps_avx(auVar62,auVar62);
  auVar62 = vmaxps_avx(auVar62,auVar155);
  auVar88 = vminps_avx(auVar62,auVar169._0_16_);
  fVar117 = auVar88._0_4_;
  auVar70._0_4_ = (float)((uint)fVar117 & uStack_3c8);
  fVar186 = auVar88._4_4_;
  auVar70._4_4_ = (float)((uint)fVar186 & uStack_3c4);
  fVar187 = auVar88._8_4_;
  auVar70._8_4_ = (float)((uint)fVar187 & uStack_3c0);
  fVar188 = auVar88._12_4_;
  auVar70._12_4_ = (float)((uint)fVar188 & uStack_3bc);
  auVar111 = vsubps_avx(auVar169._0_16_,auVar70);
  fVar118 = fVar117 * fVar117 * fVar117 * fVar117 *
            (auVar70._0_4_ *
             (auVar70._0_4_ * (auVar70._0_4_ * auVar181._0_4_ + _DAT_146159c00) + _DAT_146159c08) +
            _DAT_146159c0c) +
            auVar70._0_4_ *
            (auVar70._0_4_ * (auVar70._0_4_ * auVar184._0_4_ + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
  fVar136 = fVar186 * fVar186 * fVar186 * fVar186 *
            (auVar70._4_4_ *
             (auVar70._4_4_ * (auVar70._4_4_ * auVar181._4_4_ + _DAT_146159c00) + _DAT_146159c08) +
            _DAT_146159c0c) +
            auVar70._4_4_ *
            (auVar70._4_4_ * (auVar70._4_4_ * auVar184._4_4_ + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
  fVar138 = fVar187 * fVar187 * fVar187 * fVar187 *
            (auVar70._8_4_ *
             (auVar70._8_4_ * (auVar70._8_4_ * auVar181._8_4_ + _DAT_146159c00) + _DAT_146159c08) +
            _DAT_146159c0c) +
            auVar70._8_4_ *
            (auVar70._8_4_ * (auVar70._8_4_ * auVar184._8_4_ + _DAT_146159c10) + _DAT_146159c18) +
            _DAT_146159c1c;
  fVar140 = fVar188 * fVar188 * fVar188 * fVar188 *
            (auVar70._12_4_ *
             (auVar70._12_4_ * (auVar70._12_4_ * auVar181._12_4_ + _DAT_146159c00) + _DAT_146159c08)
            + _DAT_146159c0c) +
            auVar70._12_4_ *
            (auVar70._12_4_ * (auVar70._12_4_ * auVar184._12_4_ + _DAT_146159c10) + _DAT_146159c18)
            + _DAT_146159c1c;
  auVar62 = vrsqrtps_avx(auVar111);
  fVar117 = auVar62._0_4_;
  fVar186 = auVar62._4_4_;
  fVar187 = auVar62._8_4_;
  fVar188 = auVar62._12_4_;
  auVar144._4_4_ = _DAT_146159bfc;
  auVar144._0_4_ = _DAT_146159bfc;
  auVar144._8_4_ = _DAT_146159bfc;
  auVar144._12_4_ = _DAT_146159bfc;
  auVar62 = vcmpps_avx(auVar144,auVar111,2);
  fVar117 = (float)(auVar62._0_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar117 * fVar117 * auVar111._0_4_ - _DAT_145fc6f08) *
                           fVar117 + fVar117) * auVar111._0_4_));
  fVar186 = (float)(auVar62._4_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar186 * fVar186 * auVar111._4_4_ - _DAT_145fc6f08) *
                           fVar186 + fVar186) * auVar111._4_4_));
  fVar187 = (float)(auVar62._8_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar187 * fVar187 * auVar111._8_4_ - _DAT_145fc6f08) *
                           fVar187 + fVar187) * auVar111._8_4_));
  fVar188 = (float)(auVar62._12_4_ &
                   (uint)(((_DAT_145fc6f08 * fVar188 * fVar188 * auVar111._12_4_ - _DAT_145fc6f08) *
                           fVar188 + fVar188) * auVar111._12_4_));
  auVar166._0_4_ = -(fVar118 * fVar117) + auVar165._0_4_;
  auVar166._4_4_ = -(fVar136 * fVar186) + auVar165._4_4_;
  auVar166._8_4_ = -(fVar138 * fVar187) + auVar165._8_4_;
  auVar166._12_4_ = -(fVar140 * fVar188) + auVar165._12_4_;
  auVar71._0_4_ = fVar118 * fVar117;
  auVar71._4_4_ = fVar136 * fVar186;
  auVar71._8_4_ = fVar138 * fVar187;
  auVar71._12_4_ = fVar140 * fVar188;
  auVar62 = vblendvps_avx(auVar71,auVar166,auVar88);
  fVar117 = _DAT_146170764;
  if ((bVar39 & 0x10) == 0) {
    fVar117 = _DAT_146170760;
  }
  if (fVar117 <= auVar62._0_4_) {
    auVar182 = ZEXT464((uint)piVar40[0x1a]);
    auVar185 = ZEXT1664(auVar155);
    uVar30 = func_0x000144f63b60(param_1 + 0x2a0,param_7,1);
    auStack_108 = auVar162._0_16_;
    FUN_1400e3ce0(uVar30,piVar40 + 0x14,uStack_41c,auVar182._0_8_,auStack_108);
    auVar155 = auVar185._0_16_;
    piVar40 = *(int **)(param_5 + 8);
    iVar2 = piVar40[0x1a];
    auStack_208._4_4_ = iVar2;
    auStack_208._0_4_ = iVar2;
    auStack_208._8_4_ = iVar2;
    auStack_208._12_4_ = iVar2;
    auVar62 = vblendps_avx(auVar180._0_16_,auStack_208,4);
    auVar180 = ZEXT1664(auVar62);
  }
  auVar62 = auVar168._0_16_;
  auVar88 = auVar180._0_16_;
  bVar26 = true;
  if ((bVar38 != 7) && ((*piVar40 == -1 || (piVar40[0x14] == -1)))) {
    plVar41 = *(longlong **)(param_3 + 8);
    iVar2 = *(int *)(param_3 + 0x10);
    auVar162 = ZEXT1664(auVar155);
    iVar28 = func_0x000144e05fa0(plVar41[1]);
    auVar55 = _DAT_145fc6ee0;
    if (iVar2 != iVar28) {
      uVar29 = (**(code **)(*plVar41 + 0xf0))(plVar41,iVar2);
      (**(code **)(*plVar41 + 0x108))(plVar41,uVar29,&fStack_418);
      auVar55._4_4_ = fStack_414;
      auVar55._0_4_ = fStack_418;
      auVar55._8_4_ = fStack_410;
      auVar55._12_4_ = fStack_40c;
      plVar41 = (longlong *)*plVar34;
    }
    auVar82._0_4_ = auVar55._0_4_ + auVar55._0_4_;
    auVar82._4_4_ = auVar55._4_4_ + auVar55._4_4_;
    auVar82._8_4_ = auVar55._8_4_ + auVar55._8_4_;
    auVar82._12_4_ = auVar55._12_4_ + auVar55._12_4_;
    auVar62 = vshufps_avx(auVar55,auVar55,0xff);
    auVar88 = vshufps_avx(auVar55,auVar55,0xc9);
    auVar111 = vshufps_avx(auVar55,auVar55,0xd2);
    auVar89 = vshufps_avx(auVar82,auVar82,0xc9);
    auVar58 = vshufps_avx(auVar82,auVar82,0xd2);
    auVar160._0_4_ = auVar111._0_4_ * auVar82._0_4_ + auVar89._0_4_ * auVar62._0_4_;
    auVar160._4_4_ = auVar111._4_4_ * auVar82._4_4_ + auVar89._4_4_ * auVar62._4_4_;
    auVar160._8_4_ = auVar111._8_4_ * auVar82._8_4_ + auVar89._8_4_ * auVar62._8_4_;
    auVar160._12_4_ = auVar111._12_4_ * auVar82._12_4_ + auVar89._12_4_ * auVar62._12_4_;
    auVar130._0_4_ = -(auVar62._0_4_ * auVar58._0_4_) + auVar88._0_4_ * auVar82._0_4_;
    auVar130._4_4_ = -(auVar62._4_4_ * auVar58._4_4_) + auVar88._4_4_ * auVar82._4_4_;
    auVar130._8_4_ = -(auVar62._8_4_ * auVar58._8_4_) + auVar88._8_4_ * auVar82._8_4_;
    auVar130._12_4_ = -(auVar62._12_4_ * auVar58._12_4_) + auVar88._12_4_ * auVar82._12_4_;
    auVar147._0_4_ =
         -(auVar58._0_4_ * auVar111._0_4_) - (auVar88._0_4_ * auVar89._0_4_ - auVar169._0_4_);
    auVar147._4_4_ =
         -(auVar58._4_4_ * auVar111._4_4_) - (auVar88._4_4_ * auVar89._4_4_ - auVar169._4_4_);
    auVar147._8_4_ =
         -(auVar58._8_4_ * auVar111._8_4_) - (auVar88._8_4_ * auVar89._8_4_ - auVar169._8_4_);
    auVar147._12_4_ =
         -(auVar58._12_4_ * auVar111._12_4_) - (auVar88._12_4_ * auVar89._12_4_ - auVar169._12_4_);
    auVar62 = vblendps_avx(auVar160,auVar130,2);
    auVar88 = vblendps_avx(auVar147,auVar160,2);
    auVar62 = vblendps_avx(auVar147,auVar62,3);
    auVar182 = ZEXT1664(auVar62);
    auVar62 = vblendps_avx(auVar130,auVar88,3);
    auVar185 = ZEXT1664(auVar62);
    (**(code **)(*plVar41 + 0x88))(plVar41,&fStack_418);
    auVar83._0_4_ = auVar185._0_4_ * auVar185._0_4_;
    auVar83._4_4_ = auVar185._4_4_ * auVar185._4_4_;
    auVar83._8_4_ = auVar185._8_4_ * auVar185._8_4_;
    auVar83._12_4_ = auVar185._12_4_ * auVar185._12_4_;
    auVar56._0_12_ = ZEXT812(0);
    auVar56._12_4_ = 0;
    auVar62 = vblendps_avx(auVar83,auVar56,8);
    auVar62 = vhaddps_avx(auVar62,auVar62);
    auVar88 = vhaddps_avx(auVar62,auVar62);
    auVar62 = vrsqrtps_avx(auVar88);
    fVar117 = auVar62._0_4_;
    fVar186 = auVar62._4_4_;
    fVar187 = auVar62._8_4_;
    fVar188 = auVar62._12_4_;
    auVar131._4_4_ = _DAT_146159bfc;
    auVar131._0_4_ = _DAT_146159bfc;
    auVar131._8_4_ = _DAT_146159bfc;
    auVar131._12_4_ = _DAT_146159bfc;
    auVar62 = vcmpps_avx(auVar131,auVar88,2);
    auVar115._0_4_ =
         (float)(auVar62._0_4_ &
                (uint)(((_DAT_145fc6f08 * fVar117 * fVar117 * auVar88._0_4_ - _DAT_145fc6f08) *
                        fVar117 + fVar117) * auVar88._0_4_));
    auVar115._4_4_ =
         (float)(auVar62._4_4_ &
                (uint)(((_DAT_145fc6f08 * fVar186 * fVar186 * auVar88._4_4_ - _DAT_145fc6f08) *
                        fVar186 + fVar186) * auVar88._4_4_));
    auVar115._8_4_ =
         (float)(auVar62._8_4_ &
                (uint)(((_DAT_145fc6f08 * fVar187 * fVar187 * auVar88._8_4_ - _DAT_145fc6f08) *
                        fVar187 + fVar187) * auVar88._8_4_));
    auVar115._12_4_ =
         (float)(auVar62._12_4_ &
                (uint)(((_DAT_145fc6f08 * fVar188 * fVar188 * auVar88._12_4_ - _DAT_145fc6f08) *
                        fVar188 + fVar188) * auVar88._12_4_));
    auVar62 = vrcpps_avx(auVar115);
    fVar186 = auVar62._0_4_;
    fVar187 = auVar62._4_4_;
    fVar188 = auVar62._8_4_;
    fVar117 = auVar62._12_4_;
    auVar148._0_4_ = (uint)auVar115._0_4_ ^ _DAT_145fc6f10;
    auVar148._4_4_ = (uint)auVar115._4_4_ ^ _DAT_145fc6f10;
    auVar148._8_4_ = (uint)auVar115._8_4_ ^ _DAT_145fc6f10;
    auVar148._12_4_ = (uint)auVar115._12_4_ ^ _DAT_145fc6f10;
    auVar157._0_4_ = -((auVar115._0_4_ * fVar186 - auVar169._0_4_) * fVar186) + fVar186;
    auVar157._4_4_ = -((auVar115._4_4_ * fVar187 - auVar169._4_4_) * fVar187) + fVar187;
    auVar157._8_4_ = -((auVar115._8_4_ * fVar188 - auVar169._8_4_) * fVar188) + fVar188;
    auVar157._12_4_ = -((auVar115._12_4_ * fVar117 - auVar169._12_4_) * fVar117) + fVar117;
    auVar62 = vcmpps_avx(auVar115,auVar148,0);
    auVar149._4_4_ = _DAT_14615b36c;
    auVar149._0_4_ = _DAT_14615b36c;
    auVar149._8_4_ = _DAT_14615b36c;
    auVar149._12_4_ = _DAT_14615b36c;
    auVar116._0_4_ = auVar162._0_4_ + auVar115._0_4_;
    auVar116._4_4_ = auVar162._4_4_ + auVar115._4_4_;
    auVar116._8_4_ = auVar162._8_4_ + auVar115._8_4_;
    auVar116._12_4_ = auVar162._12_4_ + auVar115._12_4_;
    auVar62 = vblendvps_avx(auVar157,auVar149,auVar62);
    auVar132._0_4_ = auVar62._0_4_ * auVar182._0_4_;
    auVar132._4_4_ = auVar62._4_4_ * auVar182._4_4_;
    auVar132._8_4_ = auVar62._8_4_ * auVar182._8_4_;
    auVar132._12_4_ = auVar62._12_4_ * auVar182._12_4_;
    auVar62 = vshufps_avx(auVar132,auVar132,0x55);
    auVar88 = vshufps_avx(auVar132,auVar132,0xaa);
    auVar150._0_4_ =
         auVar88._0_4_ * fStack_3f8 + auVar62._0_4_ * fStack_408 + auVar132._0_4_ * fStack_418;
    auVar150._4_4_ =
         auVar88._4_4_ * fStack_3f4 + auVar62._4_4_ * fStack_404 + auVar132._0_4_ * fStack_414;
    auVar150._8_4_ =
         auVar88._8_4_ * fStack_3f0 + auVar62._8_4_ * fStack_400 + auVar132._0_4_ * fStack_410;
    auVar150._12_4_ =
         auVar88._12_4_ * fStack_3ec + auVar62._12_4_ * fStack_3fc + auVar132._0_4_ * fStack_40c;
    auVar62 = auVar168._0_16_;
    auVar88 = auVar180._0_16_;
    auVar89 = vsubps_avx(auVar88,auVar62);
    auVar111 = vinsertps_avx(auVar150,auVar116,0xb0);
    auStack_218 = vpsubw_avx(auVar88,auVar62);
    auVar58 = vshufps_avx(auVar111,auVar111,0xd2);
    auVar85 = vshufps_avx(auVar111,auVar111,0xc9);
    auVar111 = vblendps_avx(auVar89,auStack_218,8);
    auVar89 = vpunpckhwd_avx(auVar111,auVar111);
    auVar89 = vpsrad_avx(auVar89,0x10);
    auVar89 = vcvtdq2ps_avx(auVar89);
    auVar89 = vshufpd_avx(auVar89,auVar89,3);
    auVar151._0_4_ = auVar89._0_4_ * _DAT_146159c90 + auVar111._0_4_;
    auVar151._4_4_ = auVar89._4_4_ * _UNK_146159c94 + auVar111._4_4_;
    auVar151._8_4_ = auVar89._8_4_ * _UNK_146159c98 + auVar111._8_4_;
    auVar151._12_4_ = auVar89._12_4_ * _UNK_146159c9c + auVar111._12_4_;
    auVar111 = vshufps_avx(auVar151,auVar151,0xc9);
    auVar89 = vshufps_avx(auVar151,auVar151,0xd2);
    auStack_438._0_4_ = -(auVar89._0_4_ * auVar85._0_4_) + auVar58._0_4_ * auVar111._0_4_;
    auStack_438._4_4_ = -(auVar89._4_4_ * auVar85._4_4_) + auVar58._4_4_ * auVar111._4_4_;
    uStack_430._0_4_ = -(auVar89._8_4_ * auVar85._8_4_) + auVar58._8_4_ * auVar111._8_4_;
    uStack_430._4_4_ = -(auVar89._12_4_ * auVar85._12_4_) + auVar58._12_4_ * auVar111._12_4_;
    auVar133._0_4_ = (float)auStack_438._0_4_ * (float)auStack_438._0_4_;
    auVar133._4_4_ = (float)auStack_438._4_4_ * (float)auStack_438._4_4_;
    auVar133._8_4_ = (float)uStack_430 * (float)uStack_430;
    auVar133._12_4_ = uStack_430._4_4_ * uStack_430._4_4_;
    auVar111 = vblendps_avx(auVar133,auVar56,8);
    auVar111 = vhaddps_avx(auVar111,auVar111);
    auVar111 = vhaddps_avx(auVar111,auVar111);
    auVar89 = vrsqrtps_avx(auVar111);
    fVar117 = auVar89._0_4_;
    fVar186 = auVar89._4_4_;
    fVar187 = auVar89._8_4_;
    fVar188 = auVar89._12_4_;
    auStack_438._0_4_ =
         (float)auStack_438._0_4_ *
         ((_DAT_145fc6f08 * fVar117 * fVar117 * auVar111._0_4_ - _DAT_145fc6f08) * fVar117 + fVar117
         );
    auStack_438._4_4_ =
         (float)auStack_438._4_4_ *
         ((_DAT_145fc6f08 * fVar186 * fVar186 * auVar111._4_4_ - _DAT_145fc6f08) * fVar186 + fVar186
         );
    uStack_430._0_4_ =
         (float)uStack_430 *
         ((_DAT_145fc6f08 * fVar187 * fVar187 * auVar111._8_4_ - _DAT_145fc6f08) * fVar187 + fVar187
         );
    uStack_430._4_4_ =
         uStack_430._4_4_ *
         ((_DAT_145fc6f08 * fVar188 * fVar188 * auVar111._12_4_ - _DAT_145fc6f08) * fVar188 +
         fVar188);
    auVar134._0_4_ = (float)auStack_438._0_4_ * _DAT_14614f7f0;
    auVar134._4_4_ = (float)auStack_438._4_4_ * _UNK_14614f7f4;
    auVar134._8_4_ = (float)uStack_430 * _UNK_14614f7f8;
    auVar134._12_4_ = uStack_430._4_4_ * _UNK_14614f7fc;
    auVar111 = vblendps_avx(auVar134,auVar56,8);
    auVar111 = vhaddps_avx(auVar111,auVar111);
    auVar111 = vhaddps_avx(auVar111,auVar111);
    if (auVar111._0_4_ < 0.0) {
      auStack_438._4_4_ = auStack_438._4_4_ ^ _DAT_145fc6f10;
      auStack_438._0_4_ = auStack_438._0_4_ ^ _DAT_145fc6f10;
      uStack_430._0_4_ = (float)((uint)(float)uStack_430 ^ _DAT_145fc6f10);
      uStack_430._4_4_ = (float)((uint)uStack_430._4_4_ ^ _DAT_145fc6f10);
    }
  }
LAB_1400e1178:
  bVar38 = *(byte *)(param_3 + 0x110) & 0x10;
  if (bVar38 == 0) {
    if (((*(byte *)(param_2 + 0x120) & 0x20) == 0) &&
       ((*(byte *)(*(longlong *)(param_5 + 8) + 0x3e) & 8) == 0)) {
      auVar111 = vshufpd_avx(auVar62,auVar62,1);
      auVar89 = vshufpd_avx(auVar88,auVar88,1);
      if ((float)((uint)(auVar111._0_4_ - *(float *)(param_2 + 0xb8)) & _DAT_145fc6f4c) <
          (float)((uint)(auVar89._0_4_ - *(float *)(param_2 + 0xb8)) & _DAT_145fc6f4c)) {
        auStack_248 = vshufps_avx(auVar62,auVar62,0xaa);
      }
      else {
        auStack_248 = vshufps_avx(auVar88,auVar88,0xaa);
      }
      auVar88 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auStack_248,4);
    }
    else {
      auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
      auVar111 = vshufps_avx(auVar62,auVar62,0xaa);
      auStack_238 = vmaxps_avx(auVar111,auVar88);
      auVar88 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auStack_238,4);
    }
  }
  else {
    auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
    auVar111 = vshufps_avx(auVar62,auVar62,0xaa);
    auStack_228 = vmaxps_avx(auVar111,auVar88);
    auVar88 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auStack_228,4);
  }
  *(undefined1 (*) [16])(param_3 + 0xf0) = auVar88;
  auVar103._0_12_ = ZEXT812(0);
  auVar103._12_4_ = 0;
  auVar111 = vcmpps_avx(_auStack_438,auVar103,0);
  uVar29 = vmovmskps_avx(auVar111);
  if ((~(byte)uVar29 & 7) == 0) {
    uVar33 = 0;
  }
  else {
    auVar62 = vcmpps_avx(auVar62,auVar88,4);
    uVar33 = vextractps_avx(auVar62,2);
    uVar33 = uVar33 & 1;
    if (bVar26) {
      auVar62 = vshufpd_avx(_auStack_438,_auStack_438,1);
      if (auVar62._0_4_ < *(float *)(*(longlong *)(param_5 + 8) + 0x28 + (ulonglong)(uVar33 * 0x50))
         ) {
        _auStack_438 = *(undefined1 (*) [16])
                        (*(longlong *)(param_5 + 8) + 0x20 + (ulonglong)(uVar33 * 0x50));
      }
    }
    *(undefined1 (*) [8])(param_3 + 0x100) = auStack_438;
    *(undefined8 *)(param_3 + 0x108) = uStack_430;
  }
  if (((*(byte *)(param_2 + 0x120) & 0x20) == 0) &&
     ((*(byte *)(param_2 + 0x14d) & 8) == 0 && bVar38 == 0)) {
    if (uVar33 != 0) {
      plVar34 = *(longlong **)(param_3 + 0x18);
      iVar2 = *(int *)(param_3 + 0x20);
      auVar168 = ZEXT1664(*(undefined1 (*) [16])(*(longlong *)(param_5 + 8) + 0x60));
      iVar28 = func_0x000144e05fa0(plVar34[1]);
      auVar161 = ZEXT1264(ZEXT812(0));
      fVar117 = 0.0;
      fVar186 = 0.0;
      fVar187 = 0.0;
      fVar188 = 0.0;
      if (iVar2 != iVar28) {
        uVar29 = (**(code **)(*plVar34 + 0xf0))(plVar34,iVar2);
        (**(code **)(*plVar34 + 0x108))(plVar34,uVar29,&fStack_418);
        fVar117 = fStack_408;
        fVar186 = fStack_404;
        fVar187 = fStack_400;
        fVar188 = fStack_3fc;
      }
      (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_418);
      auVar13._4_4_ = fStack_404;
      auVar13._0_4_ = fStack_408;
      auVar13._8_4_ = fStack_400;
      auVar13._12_4_ = fStack_3fc;
      auVar19._4_4_ = fStack_3f4;
      auVar19._0_4_ = fStack_3f8;
      auVar19._8_4_ = fStack_3f0;
      auVar19._12_4_ = fStack_3ec;
      auVar62 = vshufps_avx(auVar13,auVar19,0x33);
      auVar62 = vshufps_avx(auVar13,auVar62,0x2f);
      auVar180 = ZEXT1664(CONCAT412(fVar188 * (auVar169._12_4_ + auVar62._12_4_),
                                    CONCAT48(fVar187 * (auVar169._8_4_ + auVar62._8_4_),
                                             CONCAT44(fVar186 * (auVar169._4_4_ + auVar62._4_4_),
                                                      fVar117 * (auVar169._0_4_ + auVar62._0_4_)))))
      ;
      (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_148);
      fVar117 = auVar180._0_4_;
      auVar88 = auVar180._0_16_;
      auVar62 = vshufps_avx(auVar88,auVar88,0x55);
      auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
      auVar51._0_4_ =
           auVar88._0_4_ * fStack_128 +
           auVar62._0_4_ * fStack_138 + fVar117 * fStack_148 + auStack_118._0_4_;
      auVar51._4_4_ =
           auVar88._4_4_ * fStack_124 +
           auVar62._4_4_ * fStack_134 + fVar117 * fStack_144 + auStack_118._4_4_;
      auVar51._8_4_ =
           auVar88._8_4_ * fStack_120 +
           auVar62._8_4_ * fStack_130 + fVar117 * fStack_140 + auStack_118._8_4_;
      auVar51._12_4_ =
           auVar88._12_4_ * fStack_11c +
           auVar62._12_4_ * fStack_12c + fVar117 * fStack_13c + auStack_118._12_4_;
      auStack_298 = auVar161._0_16_;
      auVar62 = vblendps_avx(auVar51,auStack_118,8);
      auVar110._0_4_ = fVar170 * auVar62._0_4_;
      auVar110._4_4_ = fVar171 * auVar62._4_4_;
      auVar110._8_4_ = fVar172 * auVar62._8_4_;
      auVar110._12_4_ = fVar173 * auVar62._12_4_;
      auVar88 = vroundps_avx(auVar110,3);
      auVar75._0_4_ = auVar88._0_4_ * fVar135 + auVar62._0_4_;
      auVar75._4_4_ = auVar88._4_4_ * fVar137 + auVar62._4_4_;
      auVar75._8_4_ = auVar88._8_4_ * fVar139 + auVar62._8_4_;
      auVar75._12_4_ = auVar88._12_4_ * fVar183 + auVar62._12_4_;
      auVar62 = vblendps_avx(auVar51,auVar75,3);
      auVar76._0_4_ = (int)auVar88._0_4_;
      auVar76._4_4_ = (int)auVar88._4_4_;
      auVar76._8_4_ = (int)auVar88._8_4_;
      auVar76._12_4_ = (int)auVar88._12_4_;
      auVar88 = vpackssdw_avx(auVar76,auVar76);
      sVar57 = auVar88._0_2_;
      auVar6._0_2_ = sVar57 + auStack_118._0_2_;
      sVar84 = auVar88._2_2_;
      auVar6._2_2_ = sVar84 + auStack_118._2_2_;
      auVar6._4_2_ = sVar57 + auStack_118._4_2_;
      auVar6._6_2_ = sVar84 + auStack_118._6_2_;
      auVar6._8_2_ = sVar57 + auStack_118._8_2_;
      auVar6._10_2_ = sVar84 + auStack_118._10_2_;
      auVar6._12_2_ = sVar57 + auStack_118._12_2_;
      auVar6._14_2_ = sVar84 + auStack_118._14_2_;
      auVar62 = vpblendd_avx2(auVar62,auVar6,8);
      auVar88 = vblendps_avx(auVar62,auStack_298,4);
      auVar62 = *(undefined1 (*) [16])(param_3 + 0x100);
      auVar89 = auVar168._0_16_;
      auVar111 = vsubps_avx(auVar89,auVar88);
      auStack_2a8 = vpsubw_avx(auVar89,auVar88);
      auVar88 = vblendps_avx(auVar111,auStack_2a8,8);
      auVar111 = vpunpckhwd_avx(auVar88,auVar88);
      auVar111 = vpsrad_avx(auVar111,0x10);
      auVar111 = vcvtdq2ps_avx(auVar111);
      auVar111 = vshufpd_avx(auVar111,auVar111,3);
      auVar77._0_4_ = (auVar111._0_4_ * _DAT_146159c90 + auVar88._0_4_) * auVar62._0_4_;
      auVar77._4_4_ = (auVar111._4_4_ * _UNK_146159c94 + auVar88._4_4_) * auVar62._4_4_;
      auVar77._8_4_ = (auVar111._8_4_ * _UNK_146159c98 + auVar88._8_4_) * auVar62._8_4_;
      auVar77._12_4_ = (auVar111._12_4_ * _UNK_146159c9c + auVar88._12_4_) * auVar62._12_4_;
      auVar88 = vblendps_avx(auVar77,auStack_298,8);
      auVar88 = vhaddps_avx(auVar88,auVar88);
      auStack_2b8 = vhaddps_avx(auVar88,auVar88);
      auVar88 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auStack_2b8,4);
      *(undefined1 (*) [16])(param_3 + 0xf0) = auVar88;
      if ((*(float *)(param_3 + 0x108) != 0.0) || (NAN(*(float *)(param_3 + 0x108)))) {
        auVar111 = vshufps_avx(auVar62,auVar62,0xaa);
        auVar89 = vshufps_avx(auVar88,auVar88,0xaa);
        auVar62 = vrcpps_avx(auVar111);
        fVar117 = auVar62._0_4_;
        fVar186 = auVar62._4_4_;
        fVar187 = auVar62._8_4_;
        fVar188 = auVar62._12_4_;
        auStack_2c8._0_4_ =
             (-((fVar117 * auVar111._0_4_ - auVar169._0_4_) * fVar117) + fVar117) * auVar89._0_4_;
        auStack_2c8._4_4_ =
             (-((fVar186 * auVar111._4_4_ - auVar169._4_4_) * fVar186) + fVar186) * auVar89._4_4_;
        auStack_2c8._8_4_ =
             (-((fVar187 * auVar111._8_4_ - auVar169._8_4_) * fVar187) + fVar187) * auVar89._8_4_;
        auStack_2c8._12_4_ =
             (-((fVar188 * auVar111._12_4_ - auVar169._12_4_) * fVar188) + fVar188) * auVar89._12_4_
        ;
      }
      else {
        auStack_2c8 = vshufps_avx(auVar89,auVar89,0xaa);
      }
      auVar62 = vblendps_avx(auVar88,auStack_2c8,4);
      *(undefined1 (*) [16])(param_3 + 0xf0) = auVar62;
      FUN_144f63b80(param_3 + 0x100,0);
      plVar34 = *(longlong **)(param_3 + 8);
      auVar161 = ZEXT1664(*(undefined1 (*) [16])(param_3 + 0x100));
      iVar2 = *(int *)(param_3 + 0x10);
      iVar28 = func_0x000144e05fa0(plVar34[1]);
      auVar180 = ZEXT1264(ZEXT812(0));
      fVar117 = 0.0;
      fVar186 = 0.0;
      fVar187 = 0.0;
      fVar188 = 0.0;
      if (iVar2 != iVar28) {
        uVar29 = (**(code **)(*plVar34 + 0xf0))(plVar34,iVar2);
        (**(code **)(*plVar34 + 0x108))(plVar34,uVar29,&fStack_418);
        fVar117 = fStack_408;
        fVar186 = fStack_404;
        fVar187 = fStack_400;
        fVar188 = fStack_3fc;
      }
      (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_418);
      auVar14._4_4_ = fStack_404;
      auVar14._0_4_ = fStack_408;
      auVar14._8_4_ = fStack_400;
      auVar14._12_4_ = fStack_3fc;
      auVar20._4_4_ = fStack_3f4;
      auVar20._0_4_ = fStack_3f8;
      auVar20._8_4_ = fStack_3f0;
      auVar20._12_4_ = fStack_3ec;
      auVar62 = vshufps_avx(auVar14,auVar20,0x33);
      auVar62 = vshufps_avx(auVar14,auVar62,0x2f);
      auVar162 = ZEXT1664(CONCAT412(fVar188 * (auVar169._12_4_ + auVar62._12_4_),
                                    CONCAT48(fVar187 * (auVar169._8_4_ + auVar62._8_4_),
                                             CONCAT44(fVar186 * (auVar169._4_4_ + auVar62._4_4_),
                                                      fVar117 * (auVar169._0_4_ + auVar62._0_4_)))))
      ;
      (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_148);
      fVar117 = auVar162._0_4_;
      auVar88 = auVar162._0_16_;
      auVar62 = vshufps_avx(auVar88,auVar88,0x55);
      auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
      auVar52._0_4_ =
           auVar88._0_4_ * fStack_128 +
           auVar62._0_4_ * fStack_138 + fVar117 * fStack_148 + auStack_118._0_4_;
      auVar52._4_4_ =
           auVar88._4_4_ * fStack_124 +
           auVar62._4_4_ * fStack_134 + fVar117 * fStack_144 + auStack_118._4_4_;
      auVar52._8_4_ =
           auVar88._8_4_ * fStack_120 +
           auVar62._8_4_ * fStack_130 + fVar117 * fStack_140 + auStack_118._8_4_;
      auVar52._12_4_ =
           auVar88._12_4_ * fStack_11c +
           auVar62._12_4_ * fStack_12c + fVar117 * fStack_13c + auStack_118._12_4_;
      auVar62 = vblendps_avx(auVar52,auStack_118,8);
      auVar112._0_4_ = fVar170 * auVar62._0_4_;
      auVar112._4_4_ = fVar171 * auVar62._4_4_;
      auVar112._8_4_ = fVar172 * auVar62._8_4_;
      auVar112._12_4_ = fVar173 * auVar62._12_4_;
      auVar88 = vroundps_avx(auVar112,3);
      auVar176._0_4_ = auVar88._0_4_ * fVar135 + auVar62._0_4_;
      auVar176._4_4_ = auVar88._4_4_ * fVar137 + auVar62._4_4_;
      auVar176._8_4_ = auVar88._8_4_ * fVar139 + auVar62._8_4_;
      auVar176._12_4_ = auVar88._12_4_ * fVar183 + auVar62._12_4_;
      auVar78._0_4_ = (int)auVar88._0_4_;
      auVar78._4_4_ = (int)auVar88._4_4_;
      auVar78._8_4_ = (int)auVar88._8_4_;
      auVar78._12_4_ = (int)auVar88._12_4_;
      auVar62 = vblendps_avx(auVar52,auVar176,3);
      auVar88 = vpackssdw_avx(auVar78,auVar78);
      sVar57 = auVar88._0_2_;
      auVar7._0_2_ = sVar57 + auStack_118._0_2_;
      sVar84 = auVar88._2_2_;
      auVar7._2_2_ = sVar84 + auStack_118._2_2_;
      auVar7._4_2_ = sVar57 + auStack_118._4_2_;
      auVar7._6_2_ = sVar84 + auStack_118._6_2_;
      auVar7._8_2_ = sVar57 + auStack_118._8_2_;
      auVar7._10_2_ = sVar84 + auStack_118._10_2_;
      auVar7._12_2_ = sVar57 + auStack_118._12_2_;
      auVar7._14_2_ = sVar84 + auStack_118._14_2_;
      auVar89 = vpblendd_avx2(auVar62,auVar7,8);
      uVar29 = *(undefined4 *)(param_3 + 0xf8);
      auVar22._4_4_ = uVar29;
      auVar22._0_4_ = uVar29;
      auVar22._8_4_ = uVar29;
      auVar22._12_4_ = uVar29;
      auVar62 = vblendps_avx(auVar168._0_16_,auVar22,4);
      auVar88 = vblendps_avx(auVar89,auVar180._0_16_,4);
      auVar111 = vsubps_avx(auVar62,auVar88);
      auVar88 = vpsubw_avx(auVar62,auVar88);
      auVar88 = vblendps_avx(auVar111,auVar88,8);
      auVar111 = vpunpckhwd_avx(auVar88,auVar88);
      auVar111 = vpsrad_avx(auVar111,0x10);
      auVar111 = vcvtdq2ps_avx(auVar111);
      auVar111 = vshufpd_avx(auVar111,auVar111,3);
      auVar58 = auVar161._0_16_;
      auVar129._0_4_ = (auVar111._0_4_ * _DAT_146159c90 + auVar88._0_4_) * auVar161._0_4_;
      auVar129._4_4_ = (auVar111._4_4_ * _UNK_146159c94 + auVar88._4_4_) * auVar161._4_4_;
      auVar129._8_4_ = (auVar111._8_4_ * _UNK_146159c98 + auVar88._8_4_) * auVar161._8_4_;
      auVar129._12_4_ = (auVar111._12_4_ * _UNK_146159c9c + auVar88._12_4_) * auVar161._12_4_;
      auVar88 = vblendps_avx(auVar129,auVar180._0_16_,8);
      auVar88 = vhaddps_avx(auVar88,auVar88);
      auVar88 = vhaddps_avx(auVar88,auVar88);
      auVar111 = vshufpd_avx(auVar58,auVar58,1);
      auVar88 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar88,4);
      *(undefined1 (*) [16])(param_3 + 0xf0) = auVar88;
      if ((auVar111._0_4_ != 0.0) || (NAN(auVar111._0_4_))) {
        auVar111 = vshufps_avx(auVar58,auVar58,0xaa);
        auVar58 = vshufps_avx(auVar88,auVar88,0xaa);
        auVar62 = vrcpps_avx(auVar111);
        fVar170 = auVar62._0_4_;
        fVar171 = auVar62._4_4_;
        fVar172 = auVar62._8_4_;
        fVar173 = auVar62._12_4_;
        auVar53._0_4_ =
             (-((fVar170 * auVar111._0_4_ - auVar169._0_4_) * fVar170) + fVar170) * auVar58._0_4_;
        auVar53._4_4_ =
             (-((fVar171 * auVar111._4_4_ - auVar169._4_4_) * fVar171) + fVar171) * auVar58._4_4_;
        auVar53._8_4_ =
             (-((fVar172 * auVar111._8_4_ - auVar169._8_4_) * fVar172) + fVar172) * auVar58._8_4_;
        auVar53._12_4_ =
             (-((fVar173 * auVar111._12_4_ - auVar169._12_4_) * fVar173) + fVar173) * auVar58._12_4_
        ;
      }
      else {
        auVar53 = vshufps_avx(auVar62,auVar62,0xaa);
      }
      auVar111 = vblendps_avx(auVar88,auVar53,4);
      *(undefined1 (*) [16])(param_3 + 0xf0) = auVar111;
      auVar62 = *(undefined1 (*) [16])(*(longlong *)(param_5 + 8) + 0x10);
      auVar89 = vblendps_avx(auVar89,ZEXT816(0) << 0x20,4);
      auVar88 = *(undefined1 (*) [16])(*(longlong *)(param_5 + 8) + 0x20);
      auVar58 = vcmpps_avx(_auStack_438,auVar88,1);
      auVar58 = vshufps_avx(auVar58,auVar58,0xaa);
      auVar58 = vblendvps_avx(_auStack_438,auVar88,auVar58);
      auVar85 = vsubps_avx(auVar62,auVar89);
      auVar88 = vpsubw_avx(auVar62,auVar89);
      auVar88 = vblendps_avx(auVar85,auVar88,8);
      auVar89 = vpunpckhwd_avx(auVar88,auVar88);
      auVar89 = vpsrad_avx(auVar89,0x10);
      auVar89 = vcvtdq2ps_avx(auVar89);
      auVar89 = vshufpd_avx(auVar89,auVar89,3);
      auVar146._0_4_ = (auVar89._0_4_ * _DAT_146159c90 + auVar88._0_4_) * auVar58._0_4_;
      auVar146._4_4_ = (auVar89._4_4_ * _UNK_146159c94 + auVar88._4_4_) * auVar58._4_4_;
      auVar146._8_4_ = (auVar89._8_4_ * _UNK_146159c98 + auVar88._8_4_) * auVar58._8_4_;
      auVar146._12_4_ = (auVar89._12_4_ * _UNK_146159c9c + auVar88._12_4_) * auVar58._12_4_;
      auVar88 = vblendps_avx(auVar146,ZEXT816(0) << 0x20,8);
      auVar89 = vshufpd_avx(auVar58,auVar58,1);
      auVar88 = vhaddps_avx(auVar88,auVar88);
      auVar88 = vhaddps_avx(auVar88,auVar88);
      auVar88 = vblendps_avx(auVar111,auVar88,4);
      if ((auVar89._0_4_ != 0.0) || (NAN(auVar89._0_4_))) {
        auVar89 = vshufps_avx(auVar58,auVar58,0xaa);
        auVar58 = vshufps_avx(auVar88,auVar88,0xaa);
        auVar62 = vrcpps_avx(auVar89);
        fVar170 = auVar62._0_4_;
        fVar171 = auVar62._4_4_;
        fVar172 = auVar62._8_4_;
        fVar173 = auVar62._12_4_;
        auVar79._0_4_ =
             (-((fVar170 * auVar89._0_4_ - auVar169._0_4_) * fVar170) + fVar170) * auVar58._0_4_;
        auVar79._4_4_ =
             (-((fVar171 * auVar89._4_4_ - auVar169._4_4_) * fVar171) + fVar171) * auVar58._4_4_;
        auVar79._8_4_ =
             (-((fVar172 * auVar89._8_4_ - auVar169._8_4_) * fVar172) + fVar172) * auVar58._8_4_;
        auVar79._12_4_ =
             (-((fVar173 * auVar89._12_4_ - auVar169._12_4_) * fVar173) + fVar173) * auVar58._12_4_;
      }
      else {
        auVar79 = vshufps_avx(auVar62,auVar62,0xaa);
      }
      auVar89 = vpshufd_avx(auVar111,0xaa);
      auVar62 = vblendps_avx(auVar88,auVar79,4);
      auVar62 = vshufps_avx(auVar62,auVar62,0xaa);
      auVar62 = vmaxps_avx(auVar62,auVar89);
      auVar62 = vblendps_avx(auVar111,auVar62,4);
      goto LAB_1400e1c32;
    }
    auVar167._0_12_ = ZEXT812(0);
    auVar167._12_4_ = 0;
    auVar168 = ZEXT1664(auVar167);
    auVar62 = vcmpps_avx(auVar167,_auStack_438,0);
    uVar29 = vmovmskps_avx(auVar62);
    if ((~(byte)uVar29 & 7) != 0) {
      FUN_144f63b80(auStack_438,0);
      *(undefined1 (*) [8])(param_3 + 0x100) = auStack_438;
      *(undefined8 *)(param_3 + 0x108) = uStack_430;
    }
    plVar34 = *(longlong **)(param_3 + 8);
    iVar2 = *(int *)(param_3 + 0x10);
    auVar180 = ZEXT1664(*(undefined1 (*) [16])(*(longlong *)(param_5 + 8) + 0x10));
    iVar28 = func_0x000144e05fa0(plVar34[1]);
    if (iVar2 != iVar28) {
      uVar29 = (**(code **)(*plVar34 + 0xf0))(plVar34,iVar2);
      (**(code **)(*plVar34 + 0x108))(plVar34,uVar29,&fStack_418);
      auVar168 = ZEXT1664(CONCAT412(fStack_3fc,CONCAT48(fStack_400,CONCAT44(fStack_404,fStack_408)))
                         );
    }
    (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_418);
    auVar12._4_4_ = fStack_404;
    auVar12._0_4_ = fStack_408;
    auVar12._8_4_ = fStack_400;
    auVar12._12_4_ = fStack_3fc;
    auVar18._4_4_ = fStack_3f4;
    auVar18._0_4_ = fStack_3f8;
    auVar18._8_4_ = fStack_3f0;
    auVar18._12_4_ = fStack_3ec;
    auVar62 = vshufps_avx(auVar12,auVar18,0x33);
    auVar62 = vshufps_avx(auVar12,auVar62,0x2f);
    auVar168 = ZEXT1664(CONCAT412((auVar169._12_4_ + auVar62._12_4_) * auVar168._12_4_,
                                  CONCAT48((auVar169._8_4_ + auVar62._8_4_) * auVar168._8_4_,
                                           CONCAT44((auVar169._4_4_ + auVar62._4_4_) *
                                                    auVar168._4_4_,
                                                    (auVar169._0_4_ + auVar62._0_4_) *
                                                    auVar168._0_4_))));
    (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_148);
    fVar117 = auVar168._0_4_;
    auVar88 = auVar168._0_16_;
    auVar62 = vshufps_avx(auVar88,auVar88,0x55);
    auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
    auVar50._0_4_ =
         auVar88._0_4_ * fStack_128 +
         auVar62._0_4_ * fStack_138 + fVar117 * fStack_148 + auStack_118._0_4_;
    auVar50._4_4_ =
         auVar88._4_4_ * fStack_124 +
         auVar62._4_4_ * fStack_134 + fVar117 * fStack_144 + auStack_118._4_4_;
    auVar50._8_4_ =
         auVar88._8_4_ * fStack_120 +
         auVar62._8_4_ * fStack_130 + fVar117 * fStack_140 + auStack_118._8_4_;
    auVar50._12_4_ =
         auVar88._12_4_ * fStack_11c +
         auVar62._12_4_ * fStack_12c + fVar117 * fStack_13c + auStack_118._12_4_;
    auVar62 = vblendps_avx(auVar50,auStack_118,8);
    auVar104._0_4_ = fVar170 * auVar62._0_4_;
    auVar104._4_4_ = fVar171 * auVar62._4_4_;
    auVar104._8_4_ = fVar172 * auVar62._8_4_;
    auVar104._12_4_ = fVar173 * auVar62._12_4_;
    auVar88 = vroundps_avx(auVar104,3);
    auVar175._0_4_ = auVar88._0_4_ * fVar135 + auVar62._0_4_;
    auVar175._4_4_ = auVar88._4_4_ * fVar137 + auVar62._4_4_;
    auVar175._8_4_ = auVar88._8_4_ * fVar139 + auVar62._8_4_;
    auVar175._12_4_ = auVar88._12_4_ * fVar183 + auVar62._12_4_;
    auVar72._0_4_ = (int)auVar88._0_4_;
    auVar72._4_4_ = (int)auVar88._4_4_;
    auVar72._8_4_ = (int)auVar88._8_4_;
    auVar72._12_4_ = (int)auVar88._12_4_;
    auVar62 = vblendps_avx(auVar50,auVar175,3);
    auVar88 = vpackssdw_avx(auVar72,auVar72);
    sVar57 = auVar88._0_2_;
    auVar5._0_2_ = sVar57 + auStack_118._0_2_;
    sVar84 = auVar88._2_2_;
    auVar5._2_2_ = sVar84 + auStack_118._2_2_;
    auVar5._4_2_ = sVar57 + auStack_118._4_2_;
    auVar5._6_2_ = sVar84 + auStack_118._6_2_;
    auVar5._8_2_ = sVar57 + auStack_118._8_2_;
    auVar5._10_2_ = sVar84 + auStack_118._10_2_;
    auVar5._12_2_ = sVar57 + auStack_118._12_2_;
    auVar5._14_2_ = sVar84 + auStack_118._14_2_;
    auVar62 = vpblendd_avx2(auVar62,auVar5,8);
    auVar62 = vblendps_avx(auVar62,ZEXT816(0) << 0x20,4);
    auVar89 = auVar180._0_16_;
    auVar88 = vsubps_avx(auVar89,auVar62);
    auVar62 = vpsubw_avx(auVar89,auVar62);
    auVar88 = vblendps_avx(auVar88,auVar62,8);
    auVar62 = vpunpckhwd_avx(auVar88,auVar88);
    auVar62 = vpsrad_avx(auVar62,0x10);
    auVar62 = vcvtdq2ps_avx(auVar62);
    auVar111 = vshufpd_avx(auVar62,auVar62,3);
    auVar62 = *(undefined1 (*) [16])(param_3 + 0x100);
    fVar170 = auVar62._0_4_;
    auVar125._0_4_ = (auVar111._0_4_ * _DAT_146159c90 + auVar88._0_4_) * fVar170;
    fVar171 = auVar62._4_4_;
    auVar125._4_4_ = (auVar111._4_4_ * _UNK_146159c94 + auVar88._4_4_) * fVar171;
    fVar172 = auVar62._8_4_;
    auVar125._8_4_ = (auVar111._8_4_ * _UNK_146159c98 + auVar88._8_4_) * fVar172;
    fVar173 = auVar62._12_4_;
    auVar125._12_4_ = (auVar111._12_4_ * _UNK_146159c9c + auVar88._12_4_) * fVar173;
    auVar88 = vblendps_avx(auVar125,ZEXT816(0) << 0x20,8);
    auVar88 = vhaddps_avx(auVar88,auVar88);
    auVar88 = vhaddps_avx(auVar88,auVar88);
    auVar88 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar88,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar88;
    if ((*(float *)(param_3 + 0x108) != 0.0) || (NAN(*(float *)(param_3 + 0x108)))) {
      auVar111 = vshufps_avx(auVar62,auVar62,0xaa);
      auVar89 = vshufps_avx(auVar88,auVar88,0xaa);
      auVar62 = vrcpps_avx(auVar111);
      fVar117 = auVar62._0_4_;
      fVar135 = auVar62._4_4_;
      fVar137 = auVar62._8_4_;
      fVar139 = auVar62._12_4_;
      auVar105._0_4_ =
           (-((fVar117 * auVar111._0_4_ - auVar169._0_4_) * fVar117) + fVar117) * auVar89._0_4_;
      auVar105._4_4_ =
           (-((fVar135 * auVar111._4_4_ - auVar169._4_4_) * fVar135) + fVar135) * auVar89._4_4_;
      auVar105._8_4_ =
           (-((fVar137 * auVar111._8_4_ - auVar169._8_4_) * fVar137) + fVar137) * auVar89._8_4_;
      auVar105._12_4_ =
           (-((fVar139 * auVar111._12_4_ - auVar169._12_4_) * fVar139) + fVar139) * auVar89._12_4_;
    }
    else {
      auVar105 = vshufps_avx(auVar89,auVar89,0xaa);
    }
    auVar89 = ZEXT816(0) << 0x20;
    puVar1 = (undefined8 *)(param_3 + 0x100);
    auVar111 = vcmpps_avx(auVar161._0_16_,auVar89,0);
    auVar62 = vblendps_avx(auVar88,auVar105,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar62;
    uVar29 = vmovmskps_avx(auVar111);
    puVar37 = puVar1;
    if ((~(byte)uVar29 & 7) == 0) {
      lVar35 = *(longlong *)(param_5 + 8);
    }
    else {
      auVar126._0_4_ = fVar170 * fVar170;
      auVar126._4_4_ = fVar171 * fVar171;
      auVar126._8_4_ = fVar172 * fVar172;
      auVar126._12_4_ = fVar173 * fVar173;
      fVar117 = auVar161._0_4_;
      auVar145._0_4_ = fVar117 * fVar117;
      fVar135 = auVar161._4_4_;
      auVar145._4_4_ = fVar135 * fVar135;
      fVar137 = auVar161._8_4_;
      auVar145._8_4_ = fVar137 * fVar137;
      fVar139 = auVar161._12_4_;
      auVar145._12_4_ = fVar139 * fVar139;
      auVar73._0_4_ = fVar117 * fVar170;
      auVar73._4_4_ = fVar135 * fVar171;
      auVar73._8_4_ = fVar137 * fVar172;
      auVar73._12_4_ = fVar139 * fVar173;
      auVar88 = vblendps_avx(auVar126,auVar89,8);
      auVar111 = vblendps_avx(auVar145,auVar89,8);
      auVar89 = vblendps_avx(auVar73,auVar89,8);
      auVar106._4_4_ = _DAT_145fc6f48;
      auVar106._0_4_ = _DAT_145fc6f48;
      auVar106._8_4_ = _DAT_145fc6f48;
      auVar106._12_4_ = _DAT_145fc6f48;
      auVar88 = vhaddps_avx(auVar88,auVar88);
      auVar111 = vhaddps_avx(auVar111,auVar111);
      auVar89 = vhaddps_avx(auVar89,auVar89);
      lVar35 = *(longlong *)(param_5 + 8);
      auVar88 = vhaddps_avx(auVar88,auVar88);
      auVar111 = vhaddps_avx(auVar111,auVar111);
      auVar89 = vhaddps_avx(auVar89,auVar89);
      auVar127._0_4_ = auVar111._0_4_ * auVar88._0_4_;
      auVar127._4_4_ = auVar111._4_4_ * auVar88._4_4_;
      auVar127._8_4_ = auVar111._8_4_ * auVar88._8_4_;
      auVar127._12_4_ = auVar111._12_4_ * auVar88._12_4_;
      auVar88 = vrsqrtps_avx(auVar127);
      fVar170 = auVar88._0_4_;
      fVar171 = auVar88._4_4_;
      fVar172 = auVar88._8_4_;
      fVar173 = auVar88._12_4_;
      auVar74._0_4_ =
           ((_DAT_145fc6f08 * fVar170 * fVar170 * auVar127._0_4_ - _DAT_145fc6f08) * fVar170 +
           fVar170) * auVar89._0_4_;
      auVar74._4_4_ =
           ((_DAT_145fc6f08 * fVar171 * fVar171 * auVar127._4_4_ - _DAT_145fc6f08) * fVar171 +
           fVar171) * auVar89._4_4_;
      auVar74._8_4_ =
           ((_DAT_145fc6f08 * fVar172 * fVar172 * auVar127._8_4_ - _DAT_145fc6f08) * fVar172 +
           fVar172) * auVar89._8_4_;
      auVar74._12_4_ =
           ((_DAT_145fc6f08 * fVar173 * fVar173 * auVar127._12_4_ - _DAT_145fc6f08) * fVar173 +
           fVar173) * auVar89._12_4_;
      auVar88 = vmaxps_avx(auVar74,auVar106);
      auVar111 = vminps_avx(auVar88,auVar169._0_16_);
      fVar117 = auVar111._0_4_;
      auVar107._0_4_ = (float)((uint)fVar117 & _DAT_145fc6f4c);
      fVar135 = auVar111._4_4_;
      auVar107._4_4_ = (float)((uint)fVar135 & _DAT_145fc6f4c);
      fVar137 = auVar111._8_4_;
      auVar107._8_4_ = (float)((uint)fVar137 & _DAT_145fc6f4c);
      fVar139 = auVar111._12_4_;
      auVar107._12_4_ = (float)((uint)fVar139 & _DAT_145fc6f4c);
      auVar89 = vsubps_avx(auVar169._0_16_,auVar107);
      auVar88 = vrsqrtps_avx(auVar89);
      fVar170 = auVar88._0_4_;
      fVar171 = auVar88._4_4_;
      fVar172 = auVar88._8_4_;
      fVar173 = auVar88._12_4_;
      auVar156._4_4_ = _DAT_146159bfc;
      auVar156._0_4_ = _DAT_146159bfc;
      auVar156._8_4_ = _DAT_146159bfc;
      auVar156._12_4_ = _DAT_146159bfc;
      auVar88 = vcmpps_avx(auVar156,auVar89,2);
      fVar170 = (float)(auVar88._0_4_ &
                       (uint)(((_DAT_145fc6f08 * fVar170 * fVar170 * auVar89._0_4_ - _DAT_145fc6f08)
                               * fVar170 + fVar170) * auVar89._0_4_));
      fVar171 = (float)(auVar88._4_4_ &
                       (uint)(((_DAT_145fc6f08 * fVar171 * fVar171 * auVar89._4_4_ - _DAT_145fc6f08)
                               * fVar171 + fVar171) * auVar89._4_4_));
      fVar172 = (float)(auVar88._8_4_ &
                       (uint)(((_DAT_145fc6f08 * fVar172 * fVar172 * auVar89._8_4_ - _DAT_145fc6f08)
                               * fVar172 + fVar172) * auVar89._8_4_));
      fVar173 = (float)(auVar88._12_4_ &
                       (uint)(((_DAT_145fc6f08 * fVar173 * fVar173 * auVar89._12_4_ - _DAT_145fc6f08
                               ) * fVar173 + fVar173) * auVar89._12_4_));
      fVar117 = fVar117 * fVar117 * fVar117 * fVar117 *
                (auVar107._0_4_ *
                 (auVar107._0_4_ * (auVar107._0_4_ * _DAT_146159c04 + _DAT_146159c00) +
                 _DAT_146159c08) + _DAT_146159c0c) +
                auVar107._0_4_ *
                (auVar107._0_4_ * (auVar107._0_4_ * _DAT_146159c14 + _DAT_146159c10) +
                _DAT_146159c18) + _DAT_146159c1c;
      fVar135 = fVar135 * fVar135 * fVar135 * fVar135 *
                (auVar107._4_4_ *
                 (auVar107._4_4_ * (auVar107._4_4_ * _DAT_146159c04 + _DAT_146159c00) +
                 _DAT_146159c08) + _DAT_146159c0c) +
                auVar107._4_4_ *
                (auVar107._4_4_ * (auVar107._4_4_ * _DAT_146159c14 + _DAT_146159c10) +
                _DAT_146159c18) + _DAT_146159c1c;
      fVar137 = fVar137 * fVar137 * fVar137 * fVar137 *
                (auVar107._8_4_ *
                 (auVar107._8_4_ * (auVar107._8_4_ * _DAT_146159c04 + _DAT_146159c00) +
                 _DAT_146159c08) + _DAT_146159c0c) +
                auVar107._8_4_ *
                (auVar107._8_4_ * (auVar107._8_4_ * _DAT_146159c14 + _DAT_146159c10) +
                _DAT_146159c18) + _DAT_146159c1c;
      fVar139 = fVar139 * fVar139 * fVar139 * fVar139 *
                (auVar107._12_4_ *
                 (auVar107._12_4_ * (auVar107._12_4_ * _DAT_146159c04 + _DAT_146159c00) +
                 _DAT_146159c08) + _DAT_146159c0c) +
                auVar107._12_4_ *
                (auVar107._12_4_ * (auVar107._12_4_ * _DAT_146159c14 + _DAT_146159c10) +
                _DAT_146159c18) + _DAT_146159c1c;
      auVar108._0_4_ = -(fVar117 * fVar170) + _DAT_145fc6f80;
      auVar108._4_4_ = -(fVar135 * fVar171) + _DAT_145fc6f80;
      auVar108._8_4_ = -(fVar137 * fVar172) + _DAT_145fc6f80;
      auVar108._12_4_ = -(fVar139 * fVar173) + _DAT_145fc6f80;
      auVar128._0_4_ = fVar117 * fVar170;
      auVar128._4_4_ = fVar135 * fVar171;
      auVar128._8_4_ = fVar137 * fVar172;
      auVar128._12_4_ = fVar139 * fVar173;
      auVar88 = vblendvps_avx(auVar128,auVar108,auVar111);
      if (_DAT_14616b274 <= auVar88._0_4_) {
        auVar88 = vshufpd_avx(auVar62,auVar62,1);
        puVar37 = (undefined8 *)&UNK_146723390;
        if (auVar88._0_4_ <= *(float *)(lVar35 + 0x18)) {
          puVar37 = puVar1;
        }
      }
    }
    uVar29 = *(undefined4 *)(lVar35 + 0x18);
    auVar109._4_4_ = uVar29;
    auVar109._0_4_ = uVar29;
    auVar109._8_4_ = uVar29;
    auVar109._12_4_ = uVar29;
    auVar88 = vshufps_avx(auVar62,auVar62,0xaa);
    auVar88 = vminps_avx(auVar109,auVar88);
    auVar62 = vblendps_avx(auVar62,auVar88,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar62;
    uVar30 = puVar37[1];
    *puVar1 = *puVar37;
    *(undefined8 *)(param_3 + 0x108) = uVar30;
  }
  else {
    plVar34 = *(longlong **)((longlong)plVar34 + (ulonglong)(uVar33 << 4));
    iVar2 = *(int *)(param_3 + 0x10 + (ulonglong)(uVar33 << 4));
    auVar168 = ZEXT1664(*(undefined1 (*) [16])
                         (*(longlong *)(param_5 + 8) + 0x10 + (ulonglong)(uVar33 * 0x50)));
    iVar28 = func_0x000144e05fa0(plVar34[1]);
    auVar161 = ZEXT1264(ZEXT812(0));
    fVar117 = 0.0;
    fVar186 = 0.0;
    fVar187 = 0.0;
    fVar188 = 0.0;
    if (iVar2 != iVar28) {
      uVar29 = (**(code **)(*plVar34 + 0xf0))(plVar34,iVar2);
      (**(code **)(*plVar34 + 0x108))(plVar34,uVar29,&fStack_418);
      fVar117 = fStack_408;
      fVar186 = fStack_404;
      fVar187 = fStack_400;
      fVar188 = fStack_3fc;
    }
    (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_418);
    auVar15._4_4_ = fStack_404;
    auVar15._0_4_ = fStack_408;
    auVar15._8_4_ = fStack_400;
    auVar15._12_4_ = fStack_3fc;
    auVar21._4_4_ = fStack_3f4;
    auVar21._0_4_ = fStack_3f8;
    auVar21._8_4_ = fStack_3f0;
    auVar21._12_4_ = fStack_3ec;
    auVar62 = vshufps_avx(auVar15,auVar21,0x33);
    auVar62 = vshufps_avx(auVar15,auVar62,0x2f);
    auVar180 = ZEXT1664(CONCAT412(fVar188 * (auVar169._12_4_ + auVar62._12_4_),
                                  CONCAT48(fVar187 * (auVar169._8_4_ + auVar62._8_4_),
                                           CONCAT44(fVar186 * (auVar169._4_4_ + auVar62._4_4_),
                                                    fVar117 * (auVar169._0_4_ + auVar62._0_4_)))));
    (**(code **)(*plVar34 + 0x88))(plVar34,&fStack_148);
    fVar117 = auVar180._0_4_;
    auVar88 = auVar180._0_16_;
    auVar62 = vshufps_avx(auVar88,auVar88,0x55);
    auVar88 = vshufps_avx(auVar88,auVar88,0xaa);
    auVar54._0_4_ =
         auVar88._0_4_ * fStack_128 +
         auVar62._0_4_ * fStack_138 + fVar117 * fStack_148 + auStack_118._0_4_;
    auVar54._4_4_ =
         auVar88._4_4_ * fStack_124 +
         auVar62._4_4_ * fStack_134 + fVar117 * fStack_144 + auStack_118._4_4_;
    auVar54._8_4_ =
         auVar88._8_4_ * fStack_120 +
         auVar62._8_4_ * fStack_130 + fVar117 * fStack_140 + auStack_118._8_4_;
    auVar54._12_4_ =
         auVar88._12_4_ * fStack_11c +
         auVar62._12_4_ * fStack_12c + fVar117 * fStack_13c + auStack_118._12_4_;
    auVar62 = vblendps_avx(auVar54,auStack_118,8);
    auVar113._0_4_ = fVar170 * auVar62._0_4_;
    auVar113._4_4_ = fVar171 * auVar62._4_4_;
    auVar113._8_4_ = fVar172 * auVar62._8_4_;
    auVar113._12_4_ = fVar173 * auVar62._12_4_;
    auVar88 = vroundps_avx(auVar113,3);
    auVar177._0_4_ = auVar88._0_4_ * fVar135 + auVar62._0_4_;
    auVar177._4_4_ = auVar88._4_4_ * fVar137 + auVar62._4_4_;
    auVar177._8_4_ = auVar88._8_4_ * fVar139 + auVar62._8_4_;
    auVar177._12_4_ = auVar88._12_4_ * fVar183 + auVar62._12_4_;
    auVar80._0_4_ = (int)auVar88._0_4_;
    auVar80._4_4_ = (int)auVar88._4_4_;
    auVar80._8_4_ = (int)auVar88._8_4_;
    auVar80._12_4_ = (int)auVar88._12_4_;
    auVar62 = vblendps_avx(auVar54,auVar177,3);
    auVar88 = vpackssdw_avx(auVar80,auVar80);
    sVar57 = auVar88._0_2_;
    auVar8._0_2_ = sVar57 + auStack_118._0_2_;
    sVar84 = auVar88._2_2_;
    auVar8._2_2_ = sVar84 + auStack_118._2_2_;
    auVar8._4_2_ = sVar57 + auStack_118._4_2_;
    auVar8._6_2_ = sVar84 + auStack_118._6_2_;
    auVar8._8_2_ = sVar57 + auStack_118._8_2_;
    auVar8._10_2_ = sVar84 + auStack_118._10_2_;
    auVar8._12_2_ = sVar57 + auStack_118._12_2_;
    auVar8._14_2_ = sVar84 + auStack_118._14_2_;
    auVar62 = vpblendd_avx2(auVar62,auVar8,8);
    auVar62 = vblendps_avx(auVar62,auVar161._0_16_,4);
    auVar89 = auVar168._0_16_;
    auVar88 = vsubps_avx(auVar89,auVar62);
    auVar62 = vpsubw_avx(auVar89,auVar62);
    auVar88 = vblendps_avx(auVar88,auVar62,8);
    auVar62 = vpunpckhwd_avx(auVar88,auVar88);
    auVar62 = vpsrad_avx(auVar62,0x10);
    auVar62 = vcvtdq2ps_avx(auVar62);
    auVar111 = vshufpd_avx(auVar62,auVar62,3);
    auVar62 = *(undefined1 (*) [16])(param_3 + 0x100);
    auVar114._0_4_ = (auVar111._0_4_ * _DAT_146159c90 + auVar88._0_4_) * auVar62._0_4_;
    auVar114._4_4_ = (auVar111._4_4_ * _UNK_146159c94 + auVar88._4_4_) * auVar62._4_4_;
    auVar114._8_4_ = (auVar111._8_4_ * _UNK_146159c98 + auVar88._8_4_) * auVar62._8_4_;
    auVar114._12_4_ = (auVar111._12_4_ * _UNK_146159c9c + auVar88._12_4_) * auVar62._12_4_;
    auVar88 = vblendps_avx(auVar114,auVar161._0_16_,8);
    auVar88 = vhaddps_avx(auVar88,auVar88);
    auVar88 = vhaddps_avx(auVar88,auVar88);
    auVar88 = vblendps_avx(*(undefined1 (*) [16])(param_3 + 0xf0),auVar88,4);
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar88;
    if ((*(float *)(param_3 + 0x108) != 0.0) || (NAN(*(float *)(param_3 + 0x108)))) {
      auVar111 = vshufps_avx(auVar62,auVar62,0xaa);
      auVar89 = vshufps_avx(auVar88,auVar88,0xaa);
      auVar62 = vrcpps_avx(auVar111);
      fVar170 = auVar62._0_4_;
      fVar171 = auVar62._4_4_;
      fVar172 = auVar62._8_4_;
      fVar173 = auVar62._12_4_;
      auVar81._0_4_ =
           (-((fVar170 * auVar111._0_4_ - auVar169._0_4_) * fVar170) + fVar170) * auVar89._0_4_;
      auVar81._4_4_ =
           (-((fVar171 * auVar111._4_4_ - auVar169._4_4_) * fVar171) + fVar171) * auVar89._4_4_;
      auVar81._8_4_ =
           (-((fVar172 * auVar111._8_4_ - auVar169._8_4_) * fVar172) + fVar172) * auVar89._8_4_;
      auVar81._12_4_ =
           (-((fVar173 * auVar111._12_4_ - auVar169._12_4_) * fVar173) + fVar173) * auVar89._12_4_;
    }
    else {
      auVar81 = vshufps_avx(auVar89,auVar89,0xaa);
    }
    auVar62 = vblendps_avx(auVar88,auVar81,4);
LAB_1400e1c32:
    *(undefined1 (*) [16])(param_3 + 0xf0) = auVar62;
  }
  *(byte *)(param_3 + 0x110) = *(byte *)(param_3 + 0x110) | 0x20;
  bVar38 = *(byte *)(param_4 + 0x1a4) | 0x10;
LAB_1400e0c76:
  *(byte *)(param_4 + 0x1a4) = bVar38;
  return;
}

