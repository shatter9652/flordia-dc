// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140007bf0  size: 39 bytes
// Name:    FUN_140007bf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140007bf0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = func_0x000144dac8a0(param_1,param_3);
  LOCK();
  puVar1 = (uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << (uVar2 & 0x1f);
  UNLOCK();
  return;
}

