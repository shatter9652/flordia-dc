// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140155b10  size: 66 bytes
// Name:    FUN_140155b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140155b10(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc08) != 0) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0xc08),0x6da8);
    *(undefined8 *)(param_1 + 0xc08) = 0;
    if (*(int *)(param_1 + 0xcf0) != 0) {
      *(undefined4 *)(param_1 + 0xcf0) = 0;
    }
  }
  return;
}

