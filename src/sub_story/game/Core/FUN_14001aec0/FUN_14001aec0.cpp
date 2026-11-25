// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001aec0  size: 42 bytes
// Name:    FUN_14001aec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14001aec0(longlong param_1)

{
  char cVar1;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  cVar1 = func_0x000144df8330(param_1,1);
  if (cVar1 != '\0') {
    FUN_144daa460(*(longlong *)(param_1 + 0x20) + 0x10,&uStack_28,
                  *(undefined4 *)
                   (param_1 + 0x3b80 + (ulonglong)(*(int *)(param_1 + 0x3b74) - 1) * 0x30));
    *(undefined8 *)(param_1 + 0x5f60) = uStack_28;
    *(undefined8 *)(param_1 + 0x5f68) = uStack_20;
    return;
  }
  return;
}

