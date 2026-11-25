// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062b20  size: 36 bytes
// Name:    FUN_140062b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ea2e50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_140062b20(longlong param_1)

{
  ushort uVar1;
  float fVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x120);
  fVar2 = (float)FUN_144ea2e50();
  return (longlong)(fVar2 * (float)uVar1);
}

