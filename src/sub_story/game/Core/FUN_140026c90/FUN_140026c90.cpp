// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140026c90  size: 33 bytes
// Name:    FUN_140026c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140026c90(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(*param_1 + 8))();
  uVar2 = 0x588 >> (uVar1 & 0x1f);
  return CONCAT31((int3)(uVar2 >> 8),(byte)uVar2 & uVar1 < 0xb);
}

