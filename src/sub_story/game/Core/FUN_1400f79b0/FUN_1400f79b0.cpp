// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f79b0  size: 133 bytes
// Name:    FUN_1400f79b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f79b0(longlong param_1)

{
  switch(*(uint *)(param_1 + 0x10) >> 2 & 3) {
  case 0:
    if (*(longlong *)(param_1 + 0x38) == 0) {
      return;
    }
    FUN_1400f7a40(param_1 + 0x28,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + -4),
                  *(undefined2 *)(param_1 + 0x12));
    break;
  case 1:
    if (*(longlong *)(param_1 + 0x38) == 0) {
      return;
    }
    FUN_1400f7aa0(param_1 + 0x28,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x30),
                  *(undefined2 *)(param_1 + 0x12));
    break;
  case 2:
    if (*(longlong *)(param_1 + 0x38) == 0) {
      return;
    }
    FUN_1400f7b00(param_1 + 0x28,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x30),
                  *(undefined2 *)(param_1 + 0x12));
    break;
  case 3:
    goto code_r0x0001400f79f7;
  }
  *(byte *)(param_1 + 0x10) = (*(byte *)(param_1 + 0x10) & 0xfc) + 1;
code_r0x0001400f79f7:
  return;
}

