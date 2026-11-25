// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140165300  size: 217 bytes
// Name:    FUN_140165300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140165300(longlong param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    func_0x000144dd3ed0(lVar1,&uStack_38);
    *(undefined8 *)*param_2 = uStack_38;
    *(undefined8 *)(*param_2 + 8) = uStack_30;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      func_0x000144dd3ed0(*(longlong *)(param_1 + 0x50),&uStack_38);
      auVar6._8_8_ = uStack_30;
      auVar6._0_8_ = uStack_38;
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auVar6 = vsubps_avx(*param_2,auVar6);
      fVar2 = auVar6._0_4_;
      auVar7._0_4_ = fVar2 * fVar2;
      fVar3 = auVar6._4_4_;
      auVar7._4_4_ = fVar3 * fVar3;
      fVar4 = auVar6._8_4_;
      auVar7._8_4_ = fVar4 * fVar4;
      fVar5 = auVar6._12_4_;
      auVar7._12_4_ = fVar5 * fVar5;
      auVar6 = vblendps_avx(auVar7,auVar8,8);
      auVar6 = vhaddps_avx(auVar6,auVar6);
      auVar8 = vhaddps_avx(auVar6,auVar6);
      auVar6 = vrsqrtps_avx(auVar8);
      fVar10 = auVar6._0_4_;
      fVar11 = auVar6._4_4_;
      fVar12 = auVar6._8_4_;
      fVar13 = auVar6._12_4_;
      fVar15 = auVar8._4_4_ * _DAT_145fc6edc;
      fVar16 = auVar8._8_4_ * _DAT_145fc6edc;
      fVar17 = auVar8._12_4_ * _DAT_145fc6edc;
      fVar10 = (-(_DAT_145fc6edc * fVar10 * fVar10 * auVar8._0_4_) + _DAT_145fc6edc) * fVar10 +
               fVar10;
      fVar11 = (-(_DAT_145fc6edc * fVar11 * fVar11 * auVar8._4_4_) + _DAT_145fc6edc) * fVar11 +
               fVar11;
      fVar12 = (-(_DAT_145fc6edc * fVar12 * fVar12 * auVar8._8_4_) + _DAT_145fc6edc) * fVar12 +
               fVar12;
      fVar13 = (-(_DAT_145fc6edc * fVar13 * fVar13 * auVar8._12_4_) + _DAT_145fc6edc) * fVar13 +
               fVar13;
      auVar9._4_4_ = _DAT_146159bfc;
      auVar9._0_4_ = _DAT_146159bfc;
      auVar9._8_4_ = _DAT_146159bfc;
      auVar9._12_4_ = _DAT_146159bfc;
      auVar6 = vcmpps_avx(auVar9,auVar8,2);
      auVar14._4_4_ = _DAT_145fc6f14;
      auVar14._0_4_ = _DAT_145fc6f14;
      auVar14._8_4_ = _DAT_145fc6f14;
      auVar14._12_4_ = _DAT_145fc6f14;
      auVar7 = vcmpps_avx(auVar14,auVar8,1);
      *(float *)*param_2 =
           (float)(auVar6._0_4_ & (uint)(auVar8._0_4_ * _DAT_145fc6edc * fVar10)) *
           (float)(auVar7._0_4_ & (uint)(fVar10 * fVar2)) + (float)uStack_38;
      *(float *)(*param_2 + 4) =
           (float)(auVar6._4_4_ & (uint)(fVar15 * fVar11)) *
           (float)(auVar7._4_4_ & (uint)(fVar11 * fVar3)) + (float)((ulonglong)uStack_38 >> 0x20);
      *(float *)(*param_2 + 8) =
           (float)(auVar6._8_4_ & (uint)(fVar16 * fVar12)) *
           (float)(auVar7._8_4_ & (uint)(fVar12 * fVar4)) + (float)uStack_30;
      *(float *)(*param_2 + 0xc) =
           (float)(auVar6._12_4_ & (uint)(fVar17 * fVar13)) *
           (float)(auVar7._12_4_ & (uint)(fVar13 * fVar5)) + (float)((ulonglong)uStack_30 >> 0x20);
    }
  }
  return lVar1 != 0;
}

