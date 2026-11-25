// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d02c0  size: 90 bytes
// Name:    FUN_1400d02c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400d0320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400d02c0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  func_0x000144f64030(param_2,param_1,0xe0);
  uVar1 = *(uint *)(param_3 + 0x44);
  if ((ulonglong)uVar1 != 0) {
    lVar2 = *(longlong *)(param_3 + 0x48);
    lVar3 = 0;
    do {
      FUN_1400d0320(param_2,*(undefined8 *)(lVar2 + lVar3),0xe0);
      lVar3 = lVar3 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar3);
  }
  return;
}

