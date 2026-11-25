// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d3e0  size: 91 bytes
// Name:    FUN_14007d3e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7e0f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007d3e0(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = func_0x000144ddb100(5);
  lVar2 = FUN_144e7e0f0(uVar1,param_2,7);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 8) != 0)) {
    uVar3 = 0;
    do {
      func_0x000140078540(param_1,*(undefined4 *)(lVar2 + 0xc + uVar3 * 8),
                          *(undefined4 *)(lVar2 + 0x10 + uVar3 * 8));
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(lVar2 + 8));
  }
  return;
}

