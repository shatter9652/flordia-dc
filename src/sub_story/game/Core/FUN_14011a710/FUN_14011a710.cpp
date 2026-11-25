// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011a710  size: 149 bytes
// Name:    FUN_14011a710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14011a080, FUN_144fd9d80, FUN_144fc9930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011a710(undefined4 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uStack_20;
  
  lVar2 = *(longlong *)(param_1 + 2);
  if ((ulonglong)(uint)param_1[1] != 0) {
    lVar1 = lVar2 + (ulonglong)(uint)param_1[1] * 0x28;
    do {
      FUN_14011a080(lVar2);
      func_0x000144fefc30(lVar2 + 4);
      lVar2 = lVar2 + 0x28;
    } while (lVar2 != lVar1);
    lVar2 = *(longlong *)(param_1 + 2);
  }
  param_1[1] = 0;
  FUN_144fc9930(&uStack_20,0);
  if (lVar2 != 0) {
    func_0x000144d9c130(lVar2);
  }
  FUN_144fd9d80(uStack_20);
  *(undefined8 *)(param_1 + 2) = 0;
  *param_1 = 0;
  FUN_144fc9930(&uStack_20,0);
  FUN_144fd9d80(uStack_20);
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}

