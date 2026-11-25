// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018f8b0  size: 112 bytes
// Name:    FUN_14018f8b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14018f920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14018f8b0(undefined8 param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [64];
  
  lVar2 = func_0x000144ebbf10();
  uVar7 = 0;
  auVar8 = ZEXT1264(ZEXT812(0));
  if (lVar2 != 0) {
    plVar3 = (longlong *)FUN_14018f920(lVar2,param_2);
    uVar7 = auVar8._0_8_;
    if (plVar3 != (longlong *)0x0) {
      pfVar4 = (float *)plVar3[1];
      if (pfVar4 == (float *)0x0) {
        pfVar4 = (float *)(*(longlong *)(*plVar3 + 0x10) + 8);
      }
      auVar5._0_4_ = *(float *)(plVar3 + 2) / *pfVar4;
      auVar5._4_12_ = SUB6012((undefined1  [60])0x0,0);
      auVar6._0_12_ = ZEXT812(0);
      auVar6._12_4_ = 0;
      auVar1 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar5);
      auVar5 = vcmpss_avx(auVar5,auVar6,1);
      uVar7 = CONCAT44(~auVar5._4_4_ & auVar1._4_4_,~auVar5._0_4_ & auVar1._0_4_);
    }
  }
  return uVar7;
}

