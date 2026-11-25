// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140187f80  size: 135 bytes
// Name:    FUN_140187f80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140188020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140187f80(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 8);
  if (0 < iVar1) {
    iVar5 = 2;
    if (iVar1 < 2) {
      iVar5 = iVar1;
    }
    uVar4 = iVar5 + 1;
    do {
      lVar2 = func_0x000140188010(param_2);
      FUN_140188020(lVar2,*(undefined4 *)(*param_3 + 8));
      lVar3 = func_0x000140188070(param_1,*(undefined1 *)(lVar2 + 0x2c));
      if (lVar3 != param_2) {
        func_0x0001403112f0(param_2,lVar2);
        if (lVar3 != 0) {
          func_0x000140847700(lVar3,lVar2);
        }
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  return;
}

