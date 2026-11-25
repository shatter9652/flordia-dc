// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14087af70  size: 116 bytes
// Name:    FUN_14087af70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14087aff0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14087af70(longlong param_1,longlong param_2)

{
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  *(longlong *)(param_1 + 8) = param_2;
  FUN_14087aff0(auStack_50,param_2,*(undefined2 *)(param_2 + 0x1a),*(undefined4 *)(param_2 + 0x1c),
                *(undefined2 *)(param_2 + 0x20),*(undefined2 *)(param_2 + 0x22),
                *(undefined4 *)(param_2 + 0x24),*(undefined1 *)(param_2 + 0x2c),
                *(byte *)(param_2 + 0x2d) & 1);
  *(undefined8 *)(param_1 + 0x10) = uStack_48;
  *(undefined8 *)(param_1 + 0x18) = uStack_40;
  *(undefined8 *)(param_1 + 0x20) = uStack_38;
  *(undefined8 *)(param_1 + 0x28) = uStack_30;
  *(undefined8 *)(param_1 + 0x30) = uStack_28;
  return;
}

