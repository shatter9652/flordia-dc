// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006b980  size: 62 bytes
// Name:    FUN_14006b980
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14006b980(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auVar3 [64];
  
  uVar2 = 0;
  auVar3 = ZEXT1264(ZEXT812(0));
  if (param_1 != 0) {
    lVar1 = func_0x000144db7b80(*(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x9c));
    uVar2 = auVar3._0_8_;
    if (lVar1 != 0) {
      uVar2 = (ulonglong)*(uint *)(lVar1 + 0x70);
    }
  }
  return uVar2;
}

