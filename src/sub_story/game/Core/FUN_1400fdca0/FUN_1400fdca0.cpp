// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fdca0  size: 82 bytes
// Name:    FUN_1400fdca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400fdd00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400fdca0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  FUN_1400fdd00(param_3,0,param_4,0,*(undefined4 *)(param_1 + 300),*(undefined4 *)(param_1 + 0x30));
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar2 = *(uint *)(param_1 + 300);
  iVar4 = *(int *)(param_2 + 0x1c) * 8;
  if ((0 < (int)(iVar4 - uVar1)) && (0 < (int)uVar2)) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_4 + uVar5 * 8);
      func_0x000145f40580(lVar3 + (ulonglong)uVar1,*(undefined1 *)(lVar3 + -1 + (ulonglong)uVar1),
                          (ulonglong)(~uVar1 + iVar4) + 1);
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}

