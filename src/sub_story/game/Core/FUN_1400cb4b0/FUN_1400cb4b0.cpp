// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cb4b0  size: 72 bytes
// Name:    FUN_1400cb4b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cb4b0(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  func_0x0001451a8a60(&uStack_28);
  puVar1 = (undefined8 *)(param_1 + 0x390 + (ulonglong)((uint)param_2 * 0x50));
  *puVar1 = uStack_28;
  puVar1[1] = uStack_20;
  return;
}

