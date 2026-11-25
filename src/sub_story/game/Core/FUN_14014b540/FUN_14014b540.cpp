// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014b540  size: 126 bytes
// Name:    FUN_14014b540
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14002cac0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14014b540(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  char acStack_38 [8];
  
  uVar1 = (ulonglong)*(int *)(param_1 + 0x14);
  if ((longlong)uVar1 < 1) {
    bVar4 = false;
  }
  else {
    FUN_14002cac0(*(undefined8 *)(param_1 + 0x18),acStack_38,param_2);
    bVar4 = true;
    if (acStack_38[0] == '\0') {
      uVar2 = 0;
      do {
        uVar3 = uVar1;
        if (uVar1 - 1 == uVar2) break;
        FUN_14002cac0(*(undefined8 *)(param_1 + 0x20 + uVar2 * 8),acStack_38,param_2);
        uVar3 = uVar2 + 1;
        uVar2 = uVar3;
      } while (acStack_38[0] != '\x01');
      bVar4 = uVar3 < uVar1;
    }
  }
  return bVar4;
}

