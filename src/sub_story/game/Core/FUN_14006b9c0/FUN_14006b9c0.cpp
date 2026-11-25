// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006b9c0  size: 79 bytes
// Name:    FUN_14006b9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd9c70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14006b9c0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar4 [64];
  
  uVar3 = 0;
  auVar4 = ZEXT1264(ZEXT812(0));
  if ((param_1 != (longlong *)0x0) && (param_1[0x16] != 0)) {
    uVar1 = (**(code **)(*param_1 + 0x160))();
    lVar2 = FUN_144dd9c70(uVar1,0x99896358);
    uVar3 = auVar4._0_8_;
    if (lVar2 != 0) {
      uVar3 = (ulonglong)*(uint *)(lVar2 + 0x1430);
    }
  }
  return uVar3;
}

