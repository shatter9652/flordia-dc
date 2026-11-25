// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140030310  size: 2254 bytes
// Name:    FUN_140030310
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143096ca0, FUN_144ead9e0, FUN_140575910
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140030310(longlong param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [64];
  undefined1 auStack_3a8 [20];
  uint uStack_394;
  uint uStack_374;
  uint uStack_354;
  uint uStack_324;
  uint uStack_314;
  undefined1 auStack_2d8 [20];
  uint uStack_2c4;
  uint uStack_2a4;
  uint uStack_284;
  uint uStack_254;
  uint uStack_244;
  undefined1 auStack_208 [20];
  uint uStack_1f4;
  uint uStack_1d4;
  uint uStack_1b4;
  uint uStack_184;
  uint uStack_174;
  undefined1 auStack_138 [20];
  undefined1 auStack_124 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_e4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  
  if ((longlong)*(int *)param_2[1] == 4) {
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    *param_2 = auVar11;
  }
  else {
    func_0x000145f40580(param_2,0,(longlong)*(int *)param_2[1] << 2);
  }
  pauVar1 = (undefined1 (*) [16])(param_2[1] + 4);
  if ((longlong)*(int *)(param_2[2] + 4) == 4) {
    auVar8._0_12_ = ZEXT812(0);
    auVar8._12_4_ = 0;
    *pauVar1 = auVar8;
  }
  else {
    func_0x000145f40580(pauVar1,0,(longlong)*(int *)(param_2[2] + 4) << 2);
  }
  if ((longlong)*(int *)(param_2[3] + 8) == 4) {
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    *(undefined1 (*) [16])(param_2[2] + 8) = auVar9;
  }
  else {
    func_0x000145f40580((undefined1 (*) [16])(param_2[2] + 8),0,
                        (longlong)*(int *)(param_2[3] + 8) << 2);
  }
  if ((longlong)*(int *)(param_2[4] + 0xc) == 4) {
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    *(undefined1 (*) [16])(param_2[3] + 0xc) = auVar10;
  }
  else {
    func_0x000145f40580((undefined1 (*) [16])(param_2[3] + 0xc),0,
                        (longlong)*(int *)(param_2[4] + 0xc) << 2);
  }
  *(undefined2 *)param_2[5] = 0;
  param_2[5][2] = 1;
  uVar3 = *(undefined4 *)(param_1 + 0x9c);
  lVar6 = func_0x000144d9f7c0(uVar3);
  if ((lVar6 == 0) || (lVar4 = *(longlong *)(lVar6 + 0x28d8), lVar4 == 0)) {
    FUN_143096ca0(param_2);
    goto LAB_140030899;
  }
  lVar7 = func_0x000144ef6280(uVar3);
  if ((lVar7 == 0) ||
     ((fVar14 = _DAT_145fc6ed8, (*(byte *)(lVar7 + 0x4f) & 2) == 0 &&
      ((*(byte *)(lVar7 + 0xdb) & 2) == 0)))) {
    fVar14 = *(float *)(lVar6 + 0x6ea0);
  }
  cVar5 = FUN_144ead9e0(*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x264));
  if (cVar5 == '\0') {
    auVar16._4_4_ = _DAT_145fc7020;
    auVar16._0_4_ = _DAT_145fc7020;
    auVar16._8_4_ = _DAT_145fc7020;
    auVar16._12_4_ = _DAT_145fc7020;
    auVar11 = ZEXT416((uint)(*(float *)(param_1 + 0x5c) + _DAT_145fc6ed8));
    auVar8 = vminss_avx(ZEXT416(_DAT_14614f808),auVar11);
    auVar11 = vcmpss_avx(auVar11,ZEXT416(_DAT_145fc7020),1);
    auVar11 = vblendvps_avx(auVar8,auVar16,auVar11);
    auVar18 = ZEXT1664(auVar11);
  }
  else {
    auVar18 = ZEXT464((uint)_DAT_145fc6ed8);
  }
  auVar20 = ZEXT464(*(uint *)(lVar6 + 0x2a2c));
  *(undefined2 *)param_2[5] = 0x101;
  lVar7 = *(longlong *)(lVar6 + 0x2a80);
  if ((lVar7 == 0) &&
     ((*(longlong *)(lVar6 + 0x6300) == 0 ||
      (lVar7 = FUN_140575910(*(longlong *)(lVar6 + 0x6300),*(undefined4 *)(param_1 + 0x9c)),
      lVar7 == 0)))) {
    fVar17 = auVar18._0_4_;
    if (*(longlong *)(lVar6 + 0x2150) != 0) {
      lVar7 = FUN_140575910(*(longlong *)(lVar6 + 0x2150),*(undefined4 *)(param_1 + 0x9c));
      fVar17 = auVar18._0_4_;
      if (lVar7 != 0) goto LAB_1400308e1;
    }
    fVar14 = *(float *)(lVar4 + 0x524);
    fVar19 = auVar20._0_4_;
    if (fVar19 <= 0.0) {
      fVar13 = *(float *)(lVar4 + 0x52c);
    }
    else {
      fVar13 = *(float *)(lVar4 + 0x528);
      fVar2 = *(float *)(lVar4 + 0x52c);
      auVar9 = ZEXT416((uint)(fVar19 * (fVar13 - fVar2) + fVar2));
      auVar8 = ZEXT416((uint)fVar2);
      auVar11 = ZEXT416((uint)fVar13);
      if (fVar13 <= fVar2) {
        auVar10 = vminss_avx(auVar8,auVar9);
        auVar8 = vcmpss_avx(auVar9,auVar11,1);
        auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
        fVar13 = auVar11._0_4_;
      }
      else {
        auVar10 = vminss_avx(auVar11,auVar9);
        auVar11 = vcmpss_avx(auVar9,auVar8,1);
        auVar11 = vblendvps_avx(auVar10,auVar8,auVar11);
        fVar13 = auVar11._0_4_;
      }
    }
    auVar8 = vminss_avx(ZEXT416(*(uint *)(lVar4 + 0x520)),ZEXT416((uint)(fVar13 + fVar14)));
    auVar11 = vcmpss_avx(ZEXT416((uint)(fVar13 + fVar14)),ZEXT416((uint)fVar14),1);
    auVar11 = vblendvps_avx(auVar8,ZEXT416((uint)fVar14),auVar11);
    *(float *)*param_2 = auVar11._0_4_ * fVar17;
    if (fVar19 <= 0.0) {
      fVar14 = *(float *)(lVar4 + 0x52c);
    }
    else {
      fVar14 = *(float *)(lVar4 + 0x528);
      fVar13 = *(float *)(lVar4 + 0x52c);
      auVar9 = ZEXT416((uint)(fVar19 * (fVar14 - fVar13) + fVar13));
      auVar8 = ZEXT416((uint)fVar13);
      auVar11 = ZEXT416((uint)fVar14);
      if (fVar14 <= fVar13) {
        auVar10 = vminss_avx(auVar8,auVar9);
        auVar8 = vcmpss_avx(auVar9,auVar11,1);
        auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
        fVar14 = auVar11._0_4_;
      }
      else {
        auVar10 = vminss_avx(auVar11,auVar9);
        auVar11 = vcmpss_avx(auVar9,auVar8,1);
        auVar11 = vblendvps_avx(auVar10,auVar8,auVar11);
        fVar14 = auVar11._0_4_;
      }
    }
    auVar11 = ZEXT416((uint)(fVar14 + *(float *)(lVar4 + 0x520)));
    auVar8 = vminss_avx(ZEXT416((uint)*(float *)(lVar4 + 0x520)),auVar11);
    auVar11 = vcmpss_avx(auVar11,ZEXT416(*(uint *)(lVar4 + 0x524)),1);
    auVar11 = vblendvps_avx(auVar8,ZEXT416(*(uint *)(lVar4 + 0x524)),auVar11);
    *(float *)*pauVar1 = auVar11._0_4_ * fVar17;
    fVar14 = *(float *)(lVar4 + 0x674);
    if (fVar19 <= 0.0) {
      fVar13 = *(float *)(lVar4 + 0x67c);
    }
    else {
      fVar13 = *(float *)(lVar4 + 0x678);
      fVar2 = *(float *)(lVar4 + 0x67c);
      auVar9 = ZEXT416((uint)(fVar19 * (fVar13 - fVar2) + fVar2));
      auVar8 = ZEXT416((uint)fVar2);
      auVar11 = ZEXT416((uint)fVar13);
      if (fVar13 <= fVar2) {
        auVar10 = vminss_avx(auVar8,auVar9);
        auVar8 = vcmpss_avx(auVar9,auVar11,1);
        auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
        fVar13 = auVar11._0_4_;
      }
      else {
        auVar10 = vminss_avx(auVar11,auVar9);
        auVar11 = vcmpss_avx(auVar9,auVar8,1);
        auVar11 = vblendvps_avx(auVar10,auVar8,auVar11);
        fVar13 = auVar11._0_4_;
      }
    }
    auVar8 = vminss_avx(ZEXT416(*(uint *)(lVar4 + 0x670)),ZEXT416((uint)(fVar13 + fVar14)));
    auVar11 = vcmpss_avx(ZEXT416((uint)(fVar13 + fVar14)),ZEXT416((uint)fVar14),1);
    auVar11 = vblendvps_avx(auVar8,ZEXT416((uint)fVar14),auVar11);
    *(float *)(*param_2 + 4) = auVar11._0_4_ * fVar17;
    if (fVar19 <= 0.0) {
      fVar14 = *(float *)(lVar4 + 0x67c);
    }
    else {
      fVar14 = *(float *)(lVar4 + 0x678);
      fVar13 = *(float *)(lVar4 + 0x67c);
      auVar9 = ZEXT416((uint)(fVar19 * (fVar14 - fVar13) + fVar13));
      auVar8 = ZEXT416((uint)fVar13);
      auVar11 = ZEXT416((uint)fVar14);
      if (fVar14 <= fVar13) {
        auVar10 = vminss_avx(auVar8,auVar9);
        auVar8 = vcmpss_avx(auVar9,auVar11,1);
        auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
        fVar14 = auVar11._0_4_;
      }
      else {
        auVar10 = vminss_avx(auVar11,auVar9);
        auVar11 = vcmpss_avx(auVar9,auVar8,1);
        auVar11 = vblendvps_avx(auVar10,auVar8,auVar11);
        fVar14 = auVar11._0_4_;
      }
    }
    auVar11 = ZEXT416((uint)(fVar14 + *(float *)(lVar4 + 0x670)));
    auVar8 = vminss_avx(ZEXT416((uint)*(float *)(lVar4 + 0x670)),auVar11);
    auVar11 = vcmpss_avx(auVar11,ZEXT416(*(uint *)(lVar4 + 0x674)),1);
    auVar11 = vblendvps_avx(auVar8,ZEXT416(*(uint *)(lVar4 + 0x674)),auVar11);
    *(float *)(param_2[1] + 8) = auVar11._0_4_ * fVar17;
    fVar14 = *(float *)(lVar4 + 0x7c4);
    if (fVar19 <= 0.0) {
      fVar13 = *(float *)(lVar4 + 0x7cc);
    }
    else {
      fVar13 = *(float *)(lVar4 + 0x7c8);
      fVar2 = *(float *)(lVar4 + 0x7cc);
      auVar9 = ZEXT416((uint)(fVar19 * (fVar13 - fVar2) + fVar2));
      auVar8 = ZEXT416((uint)fVar2);
      auVar11 = ZEXT416((uint)fVar13);
      if (fVar13 <= fVar2) {
        auVar10 = vminss_avx(auVar8,auVar9);
        auVar8 = vcmpss_avx(auVar9,auVar11,1);
        auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
        fVar13 = auVar11._0_4_;
      }
      else {
        auVar10 = vminss_avx(auVar11,auVar9);
        auVar11 = vcmpss_avx(auVar9,auVar8,1);
        auVar11 = vblendvps_avx(auVar10,auVar8,auVar11);
        fVar13 = auVar11._0_4_;
      }
    }
    auVar8 = vminss_avx(ZEXT416(*(uint *)(lVar4 + 0x7c0)),ZEXT416((uint)(fVar13 + fVar14)));
    auVar11 = vcmpss_avx(ZEXT416((uint)(fVar13 + fVar14)),ZEXT416((uint)fVar14),1);
    auVar11 = vblendvps_avx(auVar8,ZEXT416((uint)fVar14),auVar11);
    *(float *)(*param_2 + 8) = auVar11._0_4_ * fVar17;
    if (fVar19 <= 0.0) {
      fVar14 = *(float *)(lVar4 + 0x7cc);
    }
    else {
      fVar14 = *(float *)(lVar4 + 0x7c8);
      fVar13 = *(float *)(lVar4 + 0x7cc);
      auVar9 = ZEXT416((uint)(fVar19 * (fVar14 - fVar13) + fVar13));
      auVar8 = ZEXT416((uint)fVar13);
      auVar11 = ZEXT416((uint)fVar14);
      if (fVar14 <= fVar13) {
        auVar10 = vminss_avx(auVar8,auVar9);
        auVar8 = vcmpss_avx(auVar9,auVar11,1);
        auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
        fVar14 = auVar11._0_4_;
      }
      else {
        auVar10 = vminss_avx(auVar11,auVar9);
        auVar11 = vcmpss_avx(auVar9,auVar8,1);
        auVar11 = vblendvps_avx(auVar10,auVar8,auVar11);
        fVar14 = auVar11._0_4_;
      }
    }
    auVar11 = ZEXT416((uint)(fVar14 + *(float *)(lVar4 + 0x7c0)));
    auVar8 = vminss_avx(ZEXT416((uint)*(float *)(lVar4 + 0x7c0)),auVar11);
    auVar11 = vcmpss_avx(auVar11,ZEXT416(*(uint *)(lVar4 + 0x7c4)),1);
    auVar11 = vblendvps_avx(auVar8,ZEXT416(*(uint *)(lVar4 + 0x7c4)),auVar11);
    *(float *)(param_2[1] + 0xc) = auVar11._0_4_ * fVar17;
    fVar14 = *(float *)(lVar4 + 0x914);
    if (fVar19 <= 0.0) {
      fVar13 = *(float *)(lVar4 + 0x91c);
    }
    else {
      fVar13 = *(float *)(lVar4 + 0x918);
      fVar2 = *(float *)(lVar4 + 0x91c);
      auVar9 = ZEXT416((uint)(fVar19 * (fVar13 - fVar2) + fVar2));
      auVar8 = ZEXT416((uint)fVar2);
      auVar11 = ZEXT416((uint)fVar13);
      if (fVar13 <= fVar2) {
        auVar10 = vminss_avx(auVar8,auVar9);
        auVar8 = vcmpss_avx(auVar9,auVar11,1);
        auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
        fVar13 = auVar11._0_4_;
      }
      else {
        auVar10 = vminss_avx(auVar11,auVar9);
        auVar11 = vcmpss_avx(auVar9,auVar8,1);
        auVar11 = vblendvps_avx(auVar10,auVar8,auVar11);
        fVar13 = auVar11._0_4_;
      }
    }
    auVar8 = vminss_avx(ZEXT416(*(uint *)(lVar4 + 0x910)),ZEXT416((uint)(fVar13 + fVar14)));
    auVar11 = vcmpss_avx(ZEXT416((uint)(fVar13 + fVar14)),ZEXT416((uint)fVar14),1);
    auVar11 = vblendvps_avx(auVar8,ZEXT416((uint)fVar14),auVar11);
    *(float *)(*param_2 + 0xc) = auVar11._0_4_ * fVar17;
    if (fVar19 <= 0.0) {
      fVar14 = *(float *)(lVar4 + 0x91c);
    }
    else {
      fVar14 = *(float *)(lVar4 + 0x918);
      fVar13 = *(float *)(lVar4 + 0x91c);
      auVar18._4_60_ = auVar20._4_60_;
      auVar18._0_4_ = (fVar14 - fVar13) * fVar19 + fVar13;
      auVar9 = auVar18._0_16_;
      auVar8 = ZEXT416((uint)fVar13);
      auVar11 = ZEXT416((uint)fVar14);
      if (fVar14 <= fVar13) {
        auVar10 = vminss_avx(auVar8,auVar9);
        auVar8 = vcmpss_avx(auVar9,auVar11,1);
        auVar11 = vblendvps_avx(auVar10,auVar11,auVar8);
        fVar14 = auVar11._0_4_;
      }
      else {
        auVar10 = vminss_avx(auVar11,auVar9);
        auVar11 = vcmpss_avx(auVar9,auVar8,1);
        auVar11 = vblendvps_avx(auVar10,auVar8,auVar11);
        fVar14 = auVar11._0_4_;
      }
    }
    auVar11 = ZEXT416((uint)(fVar14 + *(float *)(lVar4 + 0x910)));
    auVar8 = vminss_avx(ZEXT416((uint)*(float *)(lVar4 + 0x910)),auVar11);
    auVar11 = vcmpss_avx(auVar11,ZEXT416(*(uint *)(lVar4 + 0x914)),1);
    auVar11 = vblendvps_avx(auVar8,ZEXT416(*(uint *)(lVar4 + 0x914)),auVar11);
    *(float *)param_2[2] = auVar11._0_4_ * fVar17;
    auVar11 = ZEXT416((uint)(fVar17 * *(float *)(lVar4 + 0x518)));
    auVar9 = ZEXT416((uint)(fVar17 * *(float *)(lVar4 + 0x51c)));
    auVar8 = vminss_avx(auVar9,auVar11);
    auVar11 = vmaxss_avx(auVar9,auVar11);
    *(int *)(param_2[2] + 8) = auVar8._0_4_;
    *(int *)(param_2[3] + 0xc) = auVar11._0_4_;
    auVar11 = ZEXT416((uint)(fVar17 * *(float *)(lVar4 + 0x668)));
    auVar9 = ZEXT416((uint)(fVar17 * *(float *)(lVar4 + 0x66c)));
    auVar8 = vminss_avx(auVar9,auVar11);
    auVar11 = vmaxss_avx(auVar9,auVar11);
    *(int *)(param_2[2] + 0xc) = auVar8._0_4_;
    *(int *)param_2[4] = auVar11._0_4_;
    auVar11 = ZEXT416((uint)(fVar17 * *(float *)(lVar4 + 0x7b8)));
    auVar9 = ZEXT416((uint)(fVar17 * *(float *)(lVar4 + 0x7bc)));
    auVar8 = vminss_avx(auVar9,auVar11);
    auVar11 = vmaxss_avx(auVar9,auVar11);
    *(int *)param_2[3] = auVar8._0_4_;
    *(int *)(param_2[4] + 4) = auVar11._0_4_;
    auVar11 = ZEXT416((uint)(fVar17 * *(float *)(lVar4 + 0x908)));
    auVar9 = ZEXT416((uint)(fVar17 * *(float *)(lVar4 + 0x90c)));
    auVar8 = vminss_avx(auVar9,auVar11);
    auVar11 = vmaxss_avx(auVar9,auVar11);
    *(int *)(param_2[3] + 4) = auVar8._0_4_;
    *(int *)(param_2[4] + 8) = auVar11._0_4_;
  }
  else {
LAB_1400308e1:
    func_0x000144e2f4f0(auStack_138,lVar7,2);
    func_0x000144e2f4f0(auStack_208,lVar7,3);
    func_0x000144e2f4f0(auStack_2d8,lVar7,4);
    func_0x000144e2f4f0(auStack_3a8,lVar7,5);
    fVar17 = auVar18._0_4_;
    auVar11 = vinsertps_avx(auStack_e4,ZEXT416(uStack_1b4),0x10);
    auVar8 = vinsertps_avx(auStack_a4,ZEXT416(uStack_174),0x10);
    auVar9 = vinsertps_avx(auStack_b4,ZEXT416(uStack_184),0x10);
    auVar11 = vinsertps_avx(auVar11,ZEXT416(uStack_284),0x20);
    auVar8 = vinsertps_avx(auVar8,ZEXT416(uStack_244),0x20);
    auVar9 = vinsertps_avx(auVar9,ZEXT416(uStack_254),0x20);
    auVar11 = vinsertps_avx(auVar11,ZEXT416(uStack_354),0x30);
    *(float *)*param_2 = auVar11._0_4_ * fVar17;
    *(float *)(*param_2 + 4) = auVar11._4_4_ * fVar17;
    *(float *)(*param_2 + 8) = auVar11._8_4_ * fVar17;
    *(float *)(*param_2 + 0xc) = auVar11._12_4_ * fVar17;
    auVar11 = vinsertps_avx(auVar8,ZEXT416(uStack_314),0x30);
    auVar8 = vinsertps_avx(auVar9,ZEXT416(uStack_324),0x30);
    auVar11 = vsubps_avx(auVar11,auVar8);
    *(float *)(param_2[1] + 4) = (auVar11._0_4_ * fVar14 + auVar8._0_4_) * fVar17;
    *(float *)(param_2[1] + 8) = (auVar11._4_4_ * fVar14 + auVar8._4_4_) * fVar17;
    *(float *)(param_2[1] + 0xc) = (auVar11._8_4_ * fVar14 + auVar8._8_4_) * fVar17;
    *(float *)param_2[2] = (auVar11._12_4_ * fVar14 + auVar8._12_4_) * fVar17;
    auVar11 = vinsertps_avx(auStack_104,ZEXT416(uStack_1d4),0x10);
    auVar8 = vinsertps_avx(auStack_124,ZEXT416(uStack_1f4),0x10);
    auVar11 = vinsertps_avx(auVar11,ZEXT416(uStack_2a4),0x20);
    auVar8 = vinsertps_avx(auVar8,ZEXT416(uStack_2c4),0x20);
    auVar11 = vinsertps_avx(auVar11,ZEXT416(uStack_374),0x30);
    auVar8 = vinsertps_avx(auVar8,ZEXT416(uStack_394),0x30);
    auVar15._0_4_ = auVar11._0_4_ * fVar17;
    auVar15._4_4_ = auVar11._4_4_ * fVar17;
    auVar15._8_4_ = auVar11._8_4_ * fVar17;
    auVar15._12_4_ = auVar11._12_4_ * fVar17;
    auVar12._0_4_ = auVar8._0_4_ * fVar17;
    auVar12._4_4_ = auVar8._4_4_ * fVar17;
    auVar12._8_4_ = auVar8._8_4_ * fVar17;
    auVar12._12_4_ = auVar8._12_4_ * fVar17;
    auVar8 = vminps_avx(auVar12,auVar15);
    auVar11 = vmaxps_avx(auVar12,auVar15);
    *(undefined1 (*) [16])(param_2[2] + 8) = auVar8;
    *(undefined1 (*) [16])(param_2[3] + 0xc) = auVar11;
  }
LAB_140030899:
  param_2[5][2] = 0;
  return;
}

