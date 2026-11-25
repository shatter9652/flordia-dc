// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140164560  size: 75 bytes
// Name:    FUN_140164560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140fec5c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140164560(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_140fec5c0(param_1 + 0x18,4,param_3,param_2);
  bVar1 = func_0x000144f40700(*(undefined8 *)(param_1 + 0x28));
  *(ushort *)(param_3 + 0x32) = (ushort)bVar1 << 8 | *(ushort *)(param_3 + 0x32) & 0xfeff;
  return uVar2;
}

