// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006cf40  size: 45 bytes
// Name:    FUN_14006cf40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006cf40(longlong param_1)

{
  if ((*(byte *)(param_1 + 99) & 0x20) == 0) {
    func_0x00014006cfb0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,0x28f6ed2b,0);
    *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | 0x20;
  }
  return;
}

