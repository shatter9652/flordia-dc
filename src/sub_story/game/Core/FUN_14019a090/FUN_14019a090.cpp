// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a090  size: 63 bytes
// Name:    FUN_14019a090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019a160
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019a090(longlong param_1)

{
  FUN_14019a160(param_1 + 0x40,
                *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x98) + 0xd0),
                (*(byte *)(*(longlong *)(param_1 + 0x38) + 0xd5) & 8) >> 3);
  FUN_144ea3740();
  FUN_144ea3520();
  *(undefined8 *)(param_1 + 0x1c) = 0;
  return;
}

