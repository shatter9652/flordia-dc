// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010bd90  size: 376 bytes
// Name:    FUN_14010bd90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010cca0, FUN_144fb2b20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14010bd90(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  
  fVar10 = *(float *)(param_1 + 1);
  if ((*(float *)(param_1 + 1) < 0.0) &&
     ((_DAT_14849c020 != 0.0 || (fVar10 = _DAT_145fc6ed8, NAN(_DAT_14849c020))))) {
    auVar1._12_4_ = _DAT_14849bfdc;
    auVar1._0_12_ = _DAT_14849bfd0;
    auVar12 = ZEXT1664(auVar1);
    auVar9 = ZEXT1664(*(undefined1 (*) [16])*param_1);
    vinsertps_avx(auVar1,ZEXT416((uint)(_DAT_14849c020 * _DAT_14849bfdc)),0x30);
    cVar2 = FUN_144fb2b20();
    if (cVar2 == '\0') {
      auVar11 = auVar12._0_16_;
      auVar1 = vsubps_avx(auVar9._0_16_,auVar11);
      auVar7._0_12_ = ZEXT812(0);
      auVar7._12_4_ = 0;
      auVar4._4_4_ = _DAT_146159bd4;
      auVar4._0_4_ = _DAT_146159bd4;
      auVar4._8_4_ = _DAT_146159bd4;
      auVar4._12_4_ = _DAT_146159bd4;
      auVar5._4_4_ = _DAT_145fc6ed8;
      auVar5._0_4_ = _DAT_145fc6ed8;
      auVar5._8_4_ = _DAT_145fc6ed8;
      auVar5._12_4_ = _DAT_145fc6ed8;
      auVar6._0_4_ = auVar1._0_4_ * auVar1._0_4_;
      auVar6._4_4_ = auVar1._4_4_ * auVar1._4_4_;
      auVar6._8_4_ = auVar1._8_4_ * auVar1._8_4_;
      auVar6._12_4_ = auVar1._12_4_ * auVar1._12_4_;
      auVar1 = vblendps_avx(auVar6,auVar7,8);
      auVar8._4_4_ = _DAT_146159bfc;
      auVar8._0_4_ = _DAT_146159bfc;
      auVar8._8_4_ = _DAT_146159bfc;
      auVar8._12_4_ = _DAT_146159bfc;
      auVar1 = vhaddps_avx(auVar1,auVar1);
      auVar4 = vrcpps_avx(auVar4);
      fVar3 = auVar4._0_4_;
      auVar4 = vhaddps_avx(auVar1,auVar1);
      auVar6 = vrsqrtps_avx(auVar4);
      auVar1 = vcmpps_avx(auVar8,auVar4,2);
      fVar10 = auVar6._0_4_;
      auVar6 = vshufps_avx(auVar11,auVar11,0xff);
      auVar1 = vmaxss_avx(ZEXT416((uint)(((float)(auVar1._0_4_ &
                                                 (uint)(((fVar10 * fVar10 * auVar4._0_4_ *
                                                          _DAT_145fc6f08 - _DAT_145fc6f08) * fVar10
                                                        + fVar10) * auVar4._0_4_)) - auVar6._0_4_) *
                                        ((-(fVar3 * _DAT_146159bd4) + _DAT_145fc6ed8) * fVar3 +
                                        fVar3))),ZEXT816(0));
      auVar1 = vminss_avx(auVar1,auVar5);
      fVar10 = auVar1._0_4_ * auVar1._0_4_;
      fVar3 = (float)FUN_14010cca0();
      fVar10 = fVar10 * fVar3;
    }
    else {
      fVar10 = 0.0;
    }
    *(float *)(param_1 + 1) = fVar10;
  }
  return fVar10;
}

