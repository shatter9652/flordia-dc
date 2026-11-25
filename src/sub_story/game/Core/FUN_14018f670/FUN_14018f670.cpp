// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f670  size: 180 bytes
// Name:    FUN_14018f670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141ffb5c0, FUN_144eb3750
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14018f670(longlong param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  undefined1 in_ZMM1 [64];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [32];
  
  auVar8 = ZEXT1664(in_ZMM1._0_16_);
  uStack_50 = 0;
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = *(undefined8 *)(param_1 + 0x78);
  func_0x000144dc3790(&uStack_48,auStack_38);
  cVar2 = FUN_141ffb5c0(auStack_38,&uStack_50);
  if (cVar2 == '\0') {
    lVar3 = FUN_144eb3750(*(undefined4 *)(param_1 + 0x9c));
    auVar7 = auVar8._0_16_;
    if (lVar3 == 0) {
      pfVar4 = (float *)&UNK_14616840c;
    }
    else {
      cVar2 = func_0x000144e238f0(*(undefined4 *)(lVar3 + 0x9c));
      auVar7 = auVar8._0_16_;
      pfVar4 = (float *)&UNK_14616840c;
      if (cVar2 != '\0') {
        pfVar4 = (float *)&UNK_146162460;
      }
    }
    auVar6._4_4_ = _DAT_145fc6f48;
    auVar6._0_4_ = _DAT_145fc6f48;
    auVar6._8_4_ = _DAT_145fc6f48;
    auVar6._12_4_ = _DAT_145fc6f48;
    auVar1 = vcmpss_avx(auVar7,ZEXT416((uint)*pfVar4),1);
    auVar7 = vblendvps_avx(ZEXT416((uint)(auVar7._0_4_ - *pfVar4)),auVar6,auVar1);
    uVar5 = auVar7._0_8_;
  }
  else {
    uVar5 = (ulonglong)(uint)(auVar8._0_4_ - uStack_50._4_4_);
  }
  return uVar5;
}

