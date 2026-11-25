// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eb8f0  size: 60 bytes
// Name:    FUN_1400eb8f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400ec010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400eb8f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (*(short *)(param_1 + 0x10) != 0) {
    uStack_18 = *(undefined8 *)(param_3 + 0x14);
    uStack_10 = *(undefined8 *)(param_3 + 0x1c);
    FUN_1400ec010(*(short *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),&uStack_18,param_4,
                  *(undefined8 *)(param_1 + 0x28));
  }
  return 0;
}

