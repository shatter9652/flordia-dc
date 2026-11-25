// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070400  size: 53 bytes
// Name:    FUN_140070400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ecfe30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140070400(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = func_0x000144d9f7c0(*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c));
  uVar2 = FUN_144ecfe30(uVar1);
  *(undefined4 *)(param_1 + 0x180) = uVar2;
  *(undefined4 *)(param_1 + 0x170) = uVar2;
  return;
}

