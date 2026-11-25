// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136fc0  size: 107 bytes
// Name:    FUN_140136fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140136fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140136fc0(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 2);
  if ((ulonglong)(uint)param_1[1] != 0) {
    lVar2 = (ulonglong)(uint)param_1[1] << 5;
    lVar1 = lVar1 + 0x10;
    do {
      FUN_140136fc0(lVar1);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 2);
  }
  param_1[1] = 0;
  if (lVar1 != 0) {
    func_0x000144d9c130(lVar1);
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}

