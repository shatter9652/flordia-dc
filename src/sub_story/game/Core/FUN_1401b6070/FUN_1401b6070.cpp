// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b6070  size: 93 bytes
// Name:    FUN_1401b6070
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14256fa00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b6070(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[1];
  if (uVar2 == *param_1) {
    uVar1 = 1;
    if (1 < uVar2) {
      uVar1 = uVar2 >> 1;
    }
    FUN_14256fa00(param_1,uVar1 + uVar2);
    uVar2 = param_1[1];
  }
  param_1[1] = uVar2 + 1;
  if (*(longlong *)(param_1 + 2) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar2 * 8) = param_2;
  }
  return;
}

