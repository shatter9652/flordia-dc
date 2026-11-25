// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018fc80  size: 104 bytes
// Name:    FUN_14018fc80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145056b30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14018fc80(void)

{
  longlong lVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  undefined1 auVar5 [64];
  
  lVar1 = func_0x000144ebbf10();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    auVar5._0_8_ = func_0x00014018fc60(*(undefined4 *)(lVar1 + 0x2c4),*(undefined8 *)(lVar1 + 0x2c8)
                                       ,1);
    auVar5._8_56_ = extraout_var;
    auVar5 = ZEXT1664(auVar5._0_16_);
    fVar2 = (float)FUN_145056b30(*(undefined8 *)(lVar1 + 8),1);
    uVar3 = 0;
    if ((fVar2 != 0.0) || (NAN(fVar2))) {
      auVar4._0_4_ = auVar5._0_4_ / fVar2;
      auVar4._4_12_ = auVar5._4_12_;
      uVar3 = auVar4._0_8_;
    }
  }
  return uVar3;
}

