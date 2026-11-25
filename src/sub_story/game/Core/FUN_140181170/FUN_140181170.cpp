// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140181170  size: 97 bytes
// Name:    FUN_140181170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401812e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140181170(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_1401812e0(plVar1,plVar1,*(longlong *)(param_1 + 0x18) + 1);
  uVar2 = *(longlong *)(param_1 + 0x18) - 1;
  lVar3 = uVar2 - param_3;
  if (param_3 <= uVar2 && lVar3 != 0) {
    func_0x000145f40570(*plVar1 + 8 + param_3 * 8,*plVar1 + param_3 * 8,lVar3 * 8);
  }
  if (*plVar1 != 0) {
    *(undefined8 *)(*plVar1 + param_3 * 8) = param_4;
  }
  return;
}

