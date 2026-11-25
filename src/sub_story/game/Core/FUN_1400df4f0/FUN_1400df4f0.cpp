// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400df4f0  size: 186 bytes
// Name:    FUN_1400df4f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400df4f0(ulonglong param_1,undefined4 *param_2)

{
  void *pvVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  pvVar1 = (void *)func_0x000144e63d10(*(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c));
  if (pvVar1 != (void *)0x0) {
    pfVar2 = &fStack_28;
    FUN_144e40a00();
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar8._4_4_ = _DAT_145fc6f00;
    auVar8._0_4_ = _DAT_145fc6f00;
    auVar8._8_4_ = _DAT_145fc6f00;
    auVar8._12_4_ = _DAT_145fc6f00;
    auVar6._0_4_ = fStack_28 * fStack_28;
    auVar6._4_4_ = fStack_24 * fStack_24;
    auVar6._8_4_ = fStack_20 * fStack_20;
    auVar6._12_4_ = fStack_1c * fStack_1c;
    auVar4 = vblendps_avx(auVar6,auVar4,8);
    auVar4 = vhaddps_avx(auVar4,auVar4);
    auVar6 = vhaddps_avx(auVar4,auVar4);
    auVar4 = vcmpps_avx(auVar8,auVar6,5);
    if ((((SUB161(auVar4 >> 0x1f,0) & 1) == 0 && (SUB161(auVar4 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar4 >> 0x5f,0) & 1) == 0) && -1 < auVar4[0xf]) {
      auVar4 = vrsqrtps_avx(auVar6);
      auVar5 = ZEXT1664(CONCAT412(-(auVar4._12_4_ * fStack_1c) - 0.0,
                                  CONCAT48(-(auVar4._8_4_ * fStack_20) - 0.0,
                                           CONCAT44(-(auVar4._4_4_ * fStack_24) - 0.0,
                                                    -(auVar4._0_4_ * fStack_28) - 0.0))));
      auVar7._0_4_ = auVar4._0_4_ * fStack_28;
      auVar7._4_4_ = auVar4._4_4_ * fStack_24;
      auVar7._8_4_ = auVar4._8_4_ * fStack_20;
      auVar7._12_4_ = auVar4._12_4_ * fStack_1c;
      vmovshdup_avx(auVar7);
      atan2f(pvVar1,pfVar2);
      fVar3 = auVar5._0_4_;
      auVar9._0_12_ = ZEXT812(0);
      auVar9._12_4_ = 0;
      auVar4 = vcmpss_avx(auVar9,ZEXT416((uint)(fVar3 + _DAT_145fc6f80)),2);
      auVar4 = vblendvps_avx(ZEXT416((uint)(fVar3 + _DAT_145fc6f84)),auVar5._0_16_,auVar4);
      auVar6 = vcmpss_avx(auVar5._0_16_,ZEXT416((uint)_DAT_145fc6f80),2);
      auVar4 = vblendvps_avx(ZEXT416((uint)(fVar3 + _DAT_14615a920)),auVar4,auVar6);
      *param_2 = auVar4._0_4_;
      return 1;
    }
  }
  return 0;
}

