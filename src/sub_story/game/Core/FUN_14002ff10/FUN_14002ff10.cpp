// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002ff10  size: 118 bytes
// Name:    FUN_14002ff10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14002ff10(longlong param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [64];
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
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    func_0x000145f40580(param_2,0,(longlong)*(int *)param_2[1] << 2);
    func_0x000145f40580(param_2[1] + 4,0,(longlong)*(int *)(param_2[2] + 4) << 2);
    func_0x000145f40580(param_2[2] + 8,0,(longlong)*(int *)(param_2[3] + 8) << 2);
    func_0x000145f40580(param_2[3] + 0xc,0,(longlong)*(int *)(param_2[4] + 0xc) << 2);
    *(undefined2 *)param_2[5] = 0;
    param_2[5][2] = 0;
    return;
  }
  if ((longlong)*(int *)param_2[1] == 4) {
    auVar12._0_12_ = ZEXT812(0);
    auVar12._12_4_ = 0;
    *param_2 = auVar12;
  }
  else {
    func_0x000145f40580(param_2,0,(longlong)*(int *)param_2[1] << 2);
  }
  pauVar1 = (undefined1 (*) [16])(param_2[1] + 4);
  if ((longlong)*(int *)(param_2[2] + 4) == 4) {
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    *pauVar1 = auVar9;
  }
  else {
    func_0x000145f40580(pauVar1,0,(longlong)*(int *)(param_2[2] + 4) << 2);
  }
  if ((longlong)*(int *)(param_2[3] + 8) == 4) {
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    *(undefined1 (*) [16])(param_2[2] + 8) = auVar10;
  }
  else {
    func_0x000145f40580((undefined1 (*) [16])(param_2[2] + 8),0,
                        (longlong)*(int *)(param_2[3] + 8) << 2);
  }
  if ((longlong)*(int *)(param_2[4] + 0xc) == 4) {
    auVar11._0_12_ = ZEXT812(0);
    auVar11._12_4_ = 0;
    *(undefined1 (*) [16])(param_2[3] + 0xc) = auVar11;
  }
  else {
    func_0x000145f40580((undefined1 (*) [16])(param_2[3] + 0xc),0,
                        (longlong)*(int *)(param_2[4] + 0xc) << 2);
  }
  *(undefined2 *)param_2[5] = 0;
  param_2[5][2] = 1;
  uVar3 = *(undefined4 *)(lVar4 + 0x9c);
  lVar7 = func_0x000144d9f7c0(uVar3);
  if ((lVar7 == 0) || (lVar5 = *(longlong *)(lVar7 + 0x28d8), lVar5 == 0)) {
    FUN_143096ca0(param_2);
    goto LAB_140030899;
  }
  lVar8 = func_0x000144ef6280(uVar3);
  if ((lVar8 == 0) ||
     ((fVar15 = _DAT_145fc6ed8, (*(byte *)(lVar8 + 0x4f) & 2) == 0 &&
      ((*(byte *)(lVar8 + 0xdb) & 2) == 0)))) {
    fVar15 = *(float *)(lVar7 + 0x6ea0);
  }
  cVar6 = FUN_144ead9e0(*(undefined4 *)(*(longlong *)(lVar4 + 0x20) + 0x264));
  if (cVar6 == '\0') {
    auVar17._4_4_ = _DAT_145fc7020;
    auVar17._0_4_ = _DAT_145fc7020;
    auVar17._8_4_ = _DAT_145fc7020;
    auVar17._12_4_ = _DAT_145fc7020;
    auVar12 = ZEXT416((uint)(*(float *)(lVar4 + 0x5c) + _DAT_145fc6ed8));
    auVar9 = vminss_avx(ZEXT416(_DAT_14614f808),auVar12);
    auVar12 = vcmpss_avx(auVar12,ZEXT416(_DAT_145fc7020),1);
    auVar12 = vblendvps_avx(auVar9,auVar17,auVar12);
    auVar19 = ZEXT1664(auVar12);
  }
  else {
    auVar19 = ZEXT464((uint)_DAT_145fc6ed8);
  }
  auVar21 = ZEXT464(*(uint *)(lVar7 + 0x2a2c));
  *(undefined2 *)param_2[5] = 0x101;
  lVar8 = *(longlong *)(lVar7 + 0x2a80);
  if ((lVar8 == 0) &&
     ((*(longlong *)(lVar7 + 0x6300) == 0 ||
      (lVar8 = FUN_140575910(*(longlong *)(lVar7 + 0x6300),*(undefined4 *)(lVar4 + 0x9c)),
      lVar8 == 0)))) {
    fVar18 = auVar19._0_4_;
    if (*(longlong *)(lVar7 + 0x2150) != 0) {
      lVar8 = FUN_140575910(*(longlong *)(lVar7 + 0x2150),*(undefined4 *)(lVar4 + 0x9c));
      fVar18 = auVar19._0_4_;
      if (lVar8 != 0) goto LAB_1400308e1;
    }
    fVar15 = *(float *)(lVar5 + 0x524);
    fVar20 = auVar21._0_4_;
    if (fVar20 <= 0.0) {
      fVar14 = *(float *)(lVar5 + 0x52c);
    }
    else {
      fVar14 = *(float *)(lVar5 + 0x528);
      fVar2 = *(float *)(lVar5 + 0x52c);
      auVar10 = ZEXT416((uint)(fVar20 * (fVar14 - fVar2) + fVar2));
      auVar9 = ZEXT416((uint)fVar2);
      auVar12 = ZEXT416((uint)fVar14);
      if (fVar14 <= fVar2) {
        auVar11 = vminss_avx(auVar9,auVar10);
        auVar9 = vcmpss_avx(auVar10,auVar12,1);
        auVar12 = vblendvps_avx(auVar11,auVar12,auVar9);
        fVar14 = auVar12._0_4_;
      }
      else {
        auVar11 = vminss_avx(auVar12,auVar10);
        auVar12 = vcmpss_avx(auVar10,auVar9,1);
        auVar12 = vblendvps_avx(auVar11,auVar9,auVar12);
        fVar14 = auVar12._0_4_;
      }
    }
    auVar9 = vminss_avx(ZEXT416(*(uint *)(lVar5 + 0x520)),ZEXT416((uint)(fVar14 + fVar15)));
    auVar12 = vcmpss_avx(ZEXT416((uint)(fVar14 + fVar15)),ZEXT416((uint)fVar15),1);
    auVar12 = vblendvps_avx(auVar9,ZEXT416((uint)fVar15),auVar12);
    *(float *)*param_2 = auVar12._0_4_ * fVar18;
    if (fVar20 <= 0.0) {
      fVar15 = *(float *)(lVar5 + 0x52c);
    }
    else {
      fVar15 = *(float *)(lVar5 + 0x528);
      fVar14 = *(float *)(lVar5 + 0x52c);
      auVar10 = ZEXT416((uint)(fVar20 * (fVar15 - fVar14) + fVar14));
      auVar9 = ZEXT416((uint)fVar14);
      auVar12 = ZEXT416((uint)fVar15);
      if (fVar15 <= fVar14) {
        auVar11 = vminss_avx(auVar9,auVar10);
        auVar9 = vcmpss_avx(auVar10,auVar12,1);
        auVar12 = vblendvps_avx(auVar11,auVar12,auVar9);
        fVar15 = auVar12._0_4_;
      }
      else {
        auVar11 = vminss_avx(auVar12,auVar10);
        auVar12 = vcmpss_avx(auVar10,auVar9,1);
        auVar12 = vblendvps_avx(auVar11,auVar9,auVar12);
        fVar15 = auVar12._0_4_;
      }
    }
    auVar12 = ZEXT416((uint)(fVar15 + *(float *)(lVar5 + 0x520)));
    auVar9 = vminss_avx(ZEXT416((uint)*(float *)(lVar5 + 0x520)),auVar12);
    auVar12 = vcmpss_avx(auVar12,ZEXT416(*(uint *)(lVar5 + 0x524)),1);
    auVar12 = vblendvps_avx(auVar9,ZEXT416(*(uint *)(lVar5 + 0x524)),auVar12);
    *(float *)*pauVar1 = auVar12._0_4_ * fVar18;
    fVar15 = *(float *)(lVar5 + 0x674);
    if (fVar20 <= 0.0) {
      fVar14 = *(float *)(lVar5 + 0x67c);
    }
    else {
      fVar14 = *(float *)(lVar5 + 0x678);
      fVar2 = *(float *)(lVar5 + 0x67c);
      auVar10 = ZEXT416((uint)(fVar20 * (fVar14 - fVar2) + fVar2));
      auVar9 = ZEXT416((uint)fVar2);
      auVar12 = ZEXT416((uint)fVar14);
      if (fVar14 <= fVar2) {
        auVar11 = vminss_avx(auVar9,auVar10);
        auVar9 = vcmpss_avx(auVar10,auVar12,1);
        auVar12 = vblendvps_avx(auVar11,auVar12,auVar9);
        fVar14 = auVar12._0_4_;
      }
      else {
        auVar11 = vminss_avx(auVar12,auVar10);
        auVar12 = vcmpss_avx(auVar10,auVar9,1);
        auVar12 = vblendvps_avx(auVar11,auVar9,auVar12);
        fVar14 = auVar12._0_4_;
      }
    }
    auVar9 = vminss_avx(ZEXT416(*(uint *)(lVar5 + 0x670)),ZEXT416((uint)(fVar14 + fVar15)));
    auVar12 = vcmpss_avx(ZEXT416((uint)(fVar14 + fVar15)),ZEXT416((uint)fVar15),1);
    auVar12 = vblendvps_avx(auVar9,ZEXT416((uint)fVar15),auVar12);
    *(float *)(*param_2 + 4) = auVar12._0_4_ * fVar18;
    if (fVar20 <= 0.0) {
      fVar15 = *(float *)(lVar5 + 0x67c);
    }
    else {
      fVar15 = *(float *)(lVar5 + 0x678);
      fVar14 = *(float *)(lVar5 + 0x67c);
      auVar10 = ZEXT416((uint)(fVar20 * (fVar15 - fVar14) + fVar14));
      auVar9 = ZEXT416((uint)fVar14);
      auVar12 = ZEXT416((uint)fVar15);
      if (fVar15 <= fVar14) {
        auVar11 = vminss_avx(auVar9,auVar10);
        auVar9 = vcmpss_avx(auVar10,auVar12,1);
        auVar12 = vblendvps_avx(auVar11,auVar12,auVar9);
        fVar15 = auVar12._0_4_;
      }
      else {
        auVar11 = vminss_avx(auVar12,auVar10);
        auVar12 = vcmpss_avx(auVar10,auVar9,1);
        auVar12 = vblendvps_avx(auVar11,auVar9,auVar12);
        fVar15 = auVar12._0_4_;
      }
    }
    auVar12 = ZEXT416((uint)(fVar15 + *(float *)(lVar5 + 0x670)));
    auVar9 = vminss_avx(ZEXT416((uint)*(float *)(lVar5 + 0x670)),auVar12);
    auVar12 = vcmpss_avx(auVar12,ZEXT416(*(uint *)(lVar5 + 0x674)),1);
    auVar12 = vblendvps_avx(auVar9,ZEXT416(*(uint *)(lVar5 + 0x674)),auVar12);
    *(float *)(param_2[1] + 8) = auVar12._0_4_ * fVar18;
    fVar15 = *(float *)(lVar5 + 0x7c4);
    if (fVar20 <= 0.0) {
      fVar14 = *(float *)(lVar5 + 0x7cc);
    }
    else {
      fVar14 = *(float *)(lVar5 + 0x7c8);
      fVar2 = *(float *)(lVar5 + 0x7cc);
      auVar10 = ZEXT416((uint)(fVar20 * (fVar14 - fVar2) + fVar2));
      auVar9 = ZEXT416((uint)fVar2);
      auVar12 = ZEXT416((uint)fVar14);
      if (fVar14 <= fVar2) {
        auVar11 = vminss_avx(auVar9,auVar10);
        auVar9 = vcmpss_avx(auVar10,auVar12,1);
        auVar12 = vblendvps_avx(auVar11,auVar12,auVar9);
        fVar14 = auVar12._0_4_;
      }
      else {
        auVar11 = vminss_avx(auVar12,auVar10);
        auVar12 = vcmpss_avx(auVar10,auVar9,1);
        auVar12 = vblendvps_avx(auVar11,auVar9,auVar12);
        fVar14 = auVar12._0_4_;
      }
    }
    auVar9 = vminss_avx(ZEXT416(*(uint *)(lVar5 + 0x7c0)),ZEXT416((uint)(fVar14 + fVar15)));
    auVar12 = vcmpss_avx(ZEXT416((uint)(fVar14 + fVar15)),ZEXT416((uint)fVar15),1);
    auVar12 = vblendvps_avx(auVar9,ZEXT416((uint)fVar15),auVar12);
    *(float *)(*param_2 + 8) = auVar12._0_4_ * fVar18;
    if (fVar20 <= 0.0) {
      fVar15 = *(float *)(lVar5 + 0x7cc);
    }
    else {
      fVar15 = *(float *)(lVar5 + 0x7c8);
      fVar14 = *(float *)(lVar5 + 0x7cc);
      auVar10 = ZEXT416((uint)(fVar20 * (fVar15 - fVar14) + fVar14));
      auVar9 = ZEXT416((uint)fVar14);
      auVar12 = ZEXT416((uint)fVar15);
      if (fVar15 <= fVar14) {
        auVar11 = vminss_avx(auVar9,auVar10);
        auVar9 = vcmpss_avx(auVar10,auVar12,1);
        auVar12 = vblendvps_avx(auVar11,auVar12,auVar9);
        fVar15 = auVar12._0_4_;
      }
      else {
        auVar11 = vminss_avx(auVar12,auVar10);
        auVar12 = vcmpss_avx(auVar10,auVar9,1);
        auVar12 = vblendvps_avx(auVar11,auVar9,auVar12);
        fVar15 = auVar12._0_4_;
      }
    }
    auVar12 = ZEXT416((uint)(fVar15 + *(float *)(lVar5 + 0x7c0)));
    auVar9 = vminss_avx(ZEXT416((uint)*(float *)(lVar5 + 0x7c0)),auVar12);
    auVar12 = vcmpss_avx(auVar12,ZEXT416(*(uint *)(lVar5 + 0x7c4)),1);
    auVar12 = vblendvps_avx(auVar9,ZEXT416(*(uint *)(lVar5 + 0x7c4)),auVar12);
    *(float *)(param_2[1] + 0xc) = auVar12._0_4_ * fVar18;
    fVar15 = *(float *)(lVar5 + 0x914);
    if (fVar20 <= 0.0) {
      fVar14 = *(float *)(lVar5 + 0x91c);
    }
    else {
      fVar14 = *(float *)(lVar5 + 0x918);
      fVar2 = *(float *)(lVar5 + 0x91c);
      auVar10 = ZEXT416((uint)(fVar20 * (fVar14 - fVar2) + fVar2));
      auVar9 = ZEXT416((uint)fVar2);
      auVar12 = ZEXT416((uint)fVar14);
      if (fVar14 <= fVar2) {
        auVar11 = vminss_avx(auVar9,auVar10);
        auVar9 = vcmpss_avx(auVar10,auVar12,1);
        auVar12 = vblendvps_avx(auVar11,auVar12,auVar9);
        fVar14 = auVar12._0_4_;
      }
      else {
        auVar11 = vminss_avx(auVar12,auVar10);
        auVar12 = vcmpss_avx(auVar10,auVar9,1);
        auVar12 = vblendvps_avx(auVar11,auVar9,auVar12);
        fVar14 = auVar12._0_4_;
      }
    }
    auVar9 = vminss_avx(ZEXT416(*(uint *)(lVar5 + 0x910)),ZEXT416((uint)(fVar14 + fVar15)));
    auVar12 = vcmpss_avx(ZEXT416((uint)(fVar14 + fVar15)),ZEXT416((uint)fVar15),1);
    auVar12 = vblendvps_avx(auVar9,ZEXT416((uint)fVar15),auVar12);
    *(float *)(*param_2 + 0xc) = auVar12._0_4_ * fVar18;
    if (fVar20 <= 0.0) {
      fVar15 = *(float *)(lVar5 + 0x91c);
    }
    else {
      fVar15 = *(float *)(lVar5 + 0x918);
      fVar14 = *(float *)(lVar5 + 0x91c);
      auVar19._4_60_ = auVar21._4_60_;
      auVar19._0_4_ = (fVar15 - fVar14) * fVar20 + fVar14;
      auVar10 = auVar19._0_16_;
      auVar9 = ZEXT416((uint)fVar14);
      auVar12 = ZEXT416((uint)fVar15);
      if (fVar15 <= fVar14) {
        auVar11 = vminss_avx(auVar9,auVar10);
        auVar9 = vcmpss_avx(auVar10,auVar12,1);
        auVar12 = vblendvps_avx(auVar11,auVar12,auVar9);
        fVar15 = auVar12._0_4_;
      }
      else {
        auVar11 = vminss_avx(auVar12,auVar10);
        auVar12 = vcmpss_avx(auVar10,auVar9,1);
        auVar12 = vblendvps_avx(auVar11,auVar9,auVar12);
        fVar15 = auVar12._0_4_;
      }
    }
    auVar12 = ZEXT416((uint)(fVar15 + *(float *)(lVar5 + 0x910)));
    auVar9 = vminss_avx(ZEXT416((uint)*(float *)(lVar5 + 0x910)),auVar12);
    auVar12 = vcmpss_avx(auVar12,ZEXT416(*(uint *)(lVar5 + 0x914)),1);
    auVar12 = vblendvps_avx(auVar9,ZEXT416(*(uint *)(lVar5 + 0x914)),auVar12);
    *(float *)param_2[2] = auVar12._0_4_ * fVar18;
    auVar12 = ZEXT416((uint)(fVar18 * *(float *)(lVar5 + 0x518)));
    auVar10 = ZEXT416((uint)(fVar18 * *(float *)(lVar5 + 0x51c)));
    auVar9 = vminss_avx(auVar10,auVar12);
    auVar12 = vmaxss_avx(auVar10,auVar12);
    *(int *)(param_2[2] + 8) = auVar9._0_4_;
    *(int *)(param_2[3] + 0xc) = auVar12._0_4_;
    auVar12 = ZEXT416((uint)(fVar18 * *(float *)(lVar5 + 0x668)));
    auVar10 = ZEXT416((uint)(fVar18 * *(float *)(lVar5 + 0x66c)));
    auVar9 = vminss_avx(auVar10,auVar12);
    auVar12 = vmaxss_avx(auVar10,auVar12);
    *(int *)(param_2[2] + 0xc) = auVar9._0_4_;
    *(int *)param_2[4] = auVar12._0_4_;
    auVar12 = ZEXT416((uint)(fVar18 * *(float *)(lVar5 + 0x7b8)));
    auVar10 = ZEXT416((uint)(fVar18 * *(float *)(lVar5 + 0x7bc)));
    auVar9 = vminss_avx(auVar10,auVar12);
    auVar12 = vmaxss_avx(auVar10,auVar12);
    *(int *)param_2[3] = auVar9._0_4_;
    *(int *)(param_2[4] + 4) = auVar12._0_4_;
    auVar12 = ZEXT416((uint)(fVar18 * *(float *)(lVar5 + 0x908)));
    auVar10 = ZEXT416((uint)(fVar18 * *(float *)(lVar5 + 0x90c)));
    auVar9 = vminss_avx(auVar10,auVar12);
    auVar12 = vmaxss_avx(auVar10,auVar12);
    *(int *)(param_2[3] + 4) = auVar9._0_4_;
    *(int *)(param_2[4] + 8) = auVar12._0_4_;
  }
  else {
LAB_1400308e1:
    func_0x000144e2f4f0(auStack_138,lVar8,2);
    func_0x000144e2f4f0(auStack_208,lVar8,3);
    func_0x000144e2f4f0(auStack_2d8,lVar8,4);
    func_0x000144e2f4f0(auStack_3a8,lVar8,5);
    fVar18 = auVar19._0_4_;
    auVar12 = vinsertps_avx(auStack_e4,ZEXT416(uStack_1b4),0x10);
    auVar9 = vinsertps_avx(auStack_a4,ZEXT416(uStack_174),0x10);
    auVar10 = vinsertps_avx(auStack_b4,ZEXT416(uStack_184),0x10);
    auVar12 = vinsertps_avx(auVar12,ZEXT416(uStack_284),0x20);
    auVar9 = vinsertps_avx(auVar9,ZEXT416(uStack_244),0x20);
    auVar10 = vinsertps_avx(auVar10,ZEXT416(uStack_254),0x20);
    auVar12 = vinsertps_avx(auVar12,ZEXT416(uStack_354),0x30);
    *(float *)*param_2 = auVar12._0_4_ * fVar18;
    *(float *)(*param_2 + 4) = auVar12._4_4_ * fVar18;
    *(float *)(*param_2 + 8) = auVar12._8_4_ * fVar18;
    *(float *)(*param_2 + 0xc) = auVar12._12_4_ * fVar18;
    auVar12 = vinsertps_avx(auVar9,ZEXT416(uStack_314),0x30);
    auVar9 = vinsertps_avx(auVar10,ZEXT416(uStack_324),0x30);
    auVar12 = vsubps_avx(auVar12,auVar9);
    *(float *)(param_2[1] + 4) = (auVar12._0_4_ * fVar15 + auVar9._0_4_) * fVar18;
    *(float *)(param_2[1] + 8) = (auVar12._4_4_ * fVar15 + auVar9._4_4_) * fVar18;
    *(float *)(param_2[1] + 0xc) = (auVar12._8_4_ * fVar15 + auVar9._8_4_) * fVar18;
    *(float *)param_2[2] = (auVar12._12_4_ * fVar15 + auVar9._12_4_) * fVar18;
    auVar12 = vinsertps_avx(auStack_104,ZEXT416(uStack_1d4),0x10);
    auVar9 = vinsertps_avx(auStack_124,ZEXT416(uStack_1f4),0x10);
    auVar12 = vinsertps_avx(auVar12,ZEXT416(uStack_2a4),0x20);
    auVar9 = vinsertps_avx(auVar9,ZEXT416(uStack_2c4),0x20);
    auVar12 = vinsertps_avx(auVar12,ZEXT416(uStack_374),0x30);
    auVar9 = vinsertps_avx(auVar9,ZEXT416(uStack_394),0x30);
    auVar16._0_4_ = auVar12._0_4_ * fVar18;
    auVar16._4_4_ = auVar12._4_4_ * fVar18;
    auVar16._8_4_ = auVar12._8_4_ * fVar18;
    auVar16._12_4_ = auVar12._12_4_ * fVar18;
    auVar13._0_4_ = auVar9._0_4_ * fVar18;
    auVar13._4_4_ = auVar9._4_4_ * fVar18;
    auVar13._8_4_ = auVar9._8_4_ * fVar18;
    auVar13._12_4_ = auVar9._12_4_ * fVar18;
    auVar9 = vminps_avx(auVar13,auVar16);
    auVar12 = vmaxps_avx(auVar13,auVar16);
    *(undefined1 (*) [16])(param_2[2] + 8) = auVar9;
    *(undefined1 (*) [16])(param_2[3] + 0xc) = auVar12;
  }
LAB_140030899:
  param_2[5][2] = 0;
  return;
}

