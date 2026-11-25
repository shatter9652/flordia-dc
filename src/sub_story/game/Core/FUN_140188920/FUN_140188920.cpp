// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188920  size: 61 bytes
// Name:    FUN_140188920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140188920(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = func_0x000144e09620();
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000140188959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x68))();
  return uVar2;
}

