// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140063300  size: 165 bytes
// Name:    FUN_140063300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401379f0, FUN_140018ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140063300(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xe4);
  if (uVar1 == *(uint *)(param_1 + 0xe0)) {
    uVar3 = 1;
    if (1 < uVar1) {
      uVar3 = uVar1 >> 1;
    }
    lVar2 = FUN_1401379f0((ulonglong)(uVar3 + uVar1) * 4);
    if ((ulonglong)*(uint *)(param_1 + 0xe4) != 0) {
      func_0x000145f40560(lVar2,*(undefined8 *)(param_1 + 0xe8),
                          (ulonglong)*(uint *)(param_1 + 0xe4) << 2);
    }
    FUN_140018ce0(*(undefined8 *)(param_1 + 0xe8));
    *(longlong *)(param_1 + 0xe8) = lVar2;
    *(uint *)(param_1 + 0xe0) = uVar3 + uVar1;
    uVar1 = *(uint *)(param_1 + 0xe4);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xe8);
  }
  *(uint *)(param_1 + 0xe4) = uVar1 + 1;
  *(undefined4 *)(lVar2 + (ulonglong)uVar1 * 4) = param_2;
  return;
}

