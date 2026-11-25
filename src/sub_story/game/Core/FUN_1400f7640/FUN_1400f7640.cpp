// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7640  size: 103 bytes
// Name:    FUN_1400f7640
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f7640(longlong param_1)

{
  switch(*(uint *)(param_1 + 0x10) >> 2 & 3) {
  case 0:
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return;
    }
    FUN_144de8220(param_1 + 0x28);
    break;
  case 1:
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return;
    }
    FUN_140018d40(param_1 + 0x28);
    break;
  case 2:
    if (*(longlong *)(param_1 + 0x28) == 0) {
      return;
    }
    FUN_140018d70(param_1 + 0x28);
    break;
  case 3:
    goto code_r0x0001400f76a1;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfc | 2;
code_r0x0001400f76a1:
  return;
}

