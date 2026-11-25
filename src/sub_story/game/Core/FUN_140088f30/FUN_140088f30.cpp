// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140088f30  size: 133 bytes
// Name:    FUN_140088f30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f046d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140088f30(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iStack_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined8 uStack_28;
  undefined1 auStack_20 [8];
  
  if ((*(char *)(param_2 + 0x1c) == '\x1a') &&
     (*(int *)(param_2 + 0x18) == *(int *)(param_1 + 0x10))) {
    FUN_144f046d0(**(undefined8 **)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),auStack_20,
                  auStack_2c,auStack_30,auStack_34,&iStack_38);
    if (iStack_38 == *(int *)(param_1 + 0x14)) {
      func_0x000144e37860(*(undefined4 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xc),&uStack_28);
      *param_3 = uStack_28;
      return 1;
    }
  }
  return 0;
}

