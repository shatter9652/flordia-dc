// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004e100  size: 80 bytes
// Name:    FUN_14004e100
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e6d1a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004e100(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144e6d1a0(param_1,0x3dfddf64,0,1);
  uVar2 = (ulonglong)*(uint *)(param_1 + 0xac);
  *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) + 1;
  *(undefined8 *)(param_1 + 0xb0 + uVar2 * 0x18) = uVar1;
  *(undefined **)(param_1 + 0xb8 + uVar2 * 0x18) = &UNK_1401acb80;
  *(undefined1 *)(param_1 + 0xc0 + uVar2 * 0x18) = 0;
  return;
}

