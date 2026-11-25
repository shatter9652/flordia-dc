// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006acc0  size: 64 bytes
// Name:    FUN_14006acc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14006acc0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = func_0x000144df3e80();
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014006acf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x88))();
  return uVar2;
}

