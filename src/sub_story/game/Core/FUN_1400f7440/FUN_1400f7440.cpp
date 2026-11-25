// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7440  size: 73 bytes
// Name:    FUN_1400f7440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144edd980
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f7440(longlong param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  undefined1 auStack_58 [56];
  
  func_0x00014038a7e0(auStack_58);
  cVar1 = FUN_144edd980(param_2,auStack_58);
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xffffffdf | (param_3 & 0xff) << 5;
  }
  return;
}

