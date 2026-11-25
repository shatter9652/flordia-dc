// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401addf0  size: 60 bytes
// Name:    FUN_1401addf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145071380, FUN_140458040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401addf0(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [64];
  
  uVar2 = 0;
  auVar3 = ZEXT1264(ZEXT812(0));
  if (-1 < param_1) {
    lVar1 = FUN_145071380();
    uVar2 = auVar3._0_8_;
    if (lVar1 != 0) {
      uVar2 = FUN_140458040(lVar1,0,1);
    }
  }
  return uVar2;
}

