// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400058e0  size: 79 bytes
// Name:    FUN_1400058e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da4020
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400058e0(longlong param_1)

{
  int iVar1;
  
  FUN_144da4020(param_1 + 0x28,param_1);
  if (*(int *)(param_1 + 0x2a94) != 0) {
    *(undefined4 *)(param_1 + 0xf14) = 1;
    FUN_144da4020(param_1 + 0x7a8,param_1);
  }
  iVar1 = iRam000000014a95dde8;
  if (*(int *)(param_1 + 0x1254) != 0) {
    return;
  }
  LOCK();
  iRam000000014a95dde8 = iRam000000014a95dde8 + -0x80000000;
  UNLOCK();
  if (iVar1 != 0) {
    iRam000000014a95ddec = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000140007333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSemaphore(pvRam000000014a95ddf0,iVar1,(void *)0x0);
    return;
  }
  return;
}

