// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140029560  size: 164 bytes
// Name:    FUN_140029560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e155c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140029560(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_18 [16];
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    FUN_144e155c0(auStack_18,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x74));
    lVar1 = *(longlong *)(param_1 + 0x88);
  }
  if (*(longlong *)(lVar1 + 0x28) != 0) {
    FUN_144e155c0(auStack_18,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x78));
    lVar1 = *(longlong *)(param_1 + 0x88);
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FUN_144e155c0(auStack_18,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x7c));
    lVar1 = *(longlong *)(param_1 + 0x88);
  }
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    FUN_144e155c0(auStack_18,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x80));
  }
  return;
}

