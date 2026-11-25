// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140008c80  size: 75 bytes
// Name:    FUN_140008c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140088ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140008c80(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uStack_18;
  
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 2) = 0xbec63cf4;
  uVar1 = func_0x000140e07b30(param_1,0xbec63cf4);
  func_0x000140092750(&uStack_18,uVar1);
  lVar2 = FUN_140088ee0(uStack_18);
  lVar3 = lVar2 + 0x10;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  param_2[1] = lVar3;
  return;
}

