// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b9790  size: 123 bytes
// Name:    FUN_1400b9790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b9810, FUN_140330020, FUN_1400b9850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 * FUN_1400b9790(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  
  FUN_1400b9810();
  puVar1 = param_1 + 0x102;
  *param_1 = &UNK_14646f4c0;
  FUN_1400b9850(puVar1);
  *(undefined2 *)(param_1 + 0x14c) = 0x101;
  if (*(char *)(param_2 + 0x30) == '\x04') {
    cVar2 = func_0x000144fc9b60(*(undefined4 *)(param_2 + 0x9c));
    if (cVar2 == '\0') {
      FUN_140330020(puVar1,param_2);
      bVar3 = func_0x00014082c960(puVar1,param_2,1);
      *(byte *)(param_1 + 0x14c) = bVar3 ^ 1;
    }
  }
  return param_1;
}

