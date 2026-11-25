// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400060a0  size: 67 bytes
// Name:    FUN_1400060a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400060a0(longlong param_1,longlong param_2)

{
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  if (*(int *)(param_2 + 0x54) == 1) {
    *(short *)(param_1 + 0x28) = *(short *)(param_1 + 0x28) + -1;
    return;
  }
  uStack_18 = *(undefined8 *)(param_2 + 0x48);
  uStack_10 = *(undefined8 *)(param_2 + 0x50);
  func_0x000144792140(uStack_18,&uStack_18);
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  return;
}

