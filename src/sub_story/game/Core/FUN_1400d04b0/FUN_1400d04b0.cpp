// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d04b0  size: 343 bytes
// Name:    FUN_1400d04b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d04b0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  
  auVar6 = in_ZMM0._0_16_;
  auVar4 = vcmpps_avx(auVar6,ZEXT416(_DAT_145fc6f50),4);
  auVar5 = vcmpps_avx(ZEXT416(_DAT_14abbd7b8),auVar6,1);
  if ((auVar4._0_4_ & auVar5._0_4_ & 1) == 0) {
    auVar6 = ZEXT416(_DAT_14abbd7b8);
  }
  bVar1 = *(byte *)(param_2 + 0x140);
  bVar2 = *(byte *)(param_2 + 0x14c);
  auVar4 = vminss_avx(ZEXT416(_DAT_14abbd7c0),auVar6);
  auVar4 = vminss_avx(ZEXT416(_DAT_14abbd7c4),auVar4);
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  auVar4 = vminss_avx(auVar5,auVar4);
  auVar4 = vminss_avx(ZEXT416(_DAT_146166760),auVar4);
  auVar5 = vminss_avx(ZEXT416(_DAT_14617073c),auVar4);
  auVar4 = vcmpss_avx(ZEXT416(_DAT_14615a730),auVar5,1);
  auVar6 = ZEXT416(_DAT_14615a730);
  if ((bVar2 & 1) == 0) {
    auVar6 = auVar5;
  }
  auVar10 = ZEXT464((uint)_DAT_146170740);
  auVar9 = ZEXT416((uint)_DAT_146170740);
  auVar4 = vblendvps_avx(auVar5,auVar6,auVar4);
  if ((bVar1 & 8) != 0) {
    auVar4 = vminss_avx(auVar9,auVar4);
  }
  auVar8 = ZEXT1664(auVar4);
  if ((*(byte *)(param_2 + 0x141) & 4) == 0) {
    cVar3 = func_0x0001400ca280(param_2);
    auVar4 = auVar8._0_16_;
    auVar9 = auVar10._0_16_;
    if (cVar3 == '\0') goto LAB_1400d0582;
  }
  if (_DAT_146170740 < auVar4._0_4_) {
    auVar4 = auVar9;
  }
LAB_1400d0582:
  uVar7 = auVar4._0_8_;
  if ((*(byte *)(param_2 + 0xf0) & 1) != 0) {
    auVar4 = vminss_avx(ZEXT416(_DAT_14615a730),auVar4);
    uVar7 = auVar4._0_8_;
  }
  if ((bVar1 & 0x48) == 0x40 && (bVar2 & 1) == 0) {
    auVar6._4_4_ = _DAT_145fc6ed8;
    auVar6._0_4_ = _DAT_145fc6ed8;
    auVar6._8_4_ = _DAT_145fc6ed8;
    auVar6._12_4_ = _DAT_145fc6ed8;
    auVar4 = ZEXT416((uint)(*(float *)(param_2 + 0x148) * _DAT_14615d790));
    auVar5 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar4);
    auVar4 = vcmpss_avx(auVar4,ZEXT816(0) << 0x20,1);
    auVar4 = vblendvps_avx(ZEXT416((uint)(auVar5._0_4_ + _DAT_145fc6ed8)),auVar6,auVar4);
    uVar7 = (ulonglong)(uint)(auVar4._0_4_ * (float)uVar7);
  }
  return uVar7;
}

