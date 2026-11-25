// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140152890  size: 47 bytes
// Name:    FUN_140152890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140162b30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140152890(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_140162b30(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,0,1);
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  }
  return;
}

