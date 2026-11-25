// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140173850  size: 105 bytes
// Name:    FUN_140173850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c7ed20, FUN_141789370
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong * FUN_140173850(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)func_0x000144f97130(0x30);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_141789370(puVar3);
    *puVar3 = &UNK_1465e95a0;
  }
  FUN_141c7ed20(param_1,puVar3,1,param_2);
  uVar2 = param_3[1];
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x20) = *param_3;
  *(undefined8 *)(lVar1 + 0x28) = uVar2;
  return param_1;
}

