// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0ea0  size: 73 bytes
// Name:    FUN_1400f0ea0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1400f0ea0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(*param_1 + 8))();
  cVar1 = func_0x000144d9f880(*(undefined8 *)(lVar3 + 8),_DAT_146ddffe8);
  bVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    bVar2 = bVar2 ^ *(byte *)(param_1 + 1);
  }
  return bVar2;
}

