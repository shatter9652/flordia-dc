// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b49e0  size: 96 bytes
// Name:    FUN_1401b49e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401b49e0(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_144da6330();
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *param_1 = &UNK_1465e68c0;
  param_1[4] = param_2;
  LOCK();
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  UNLOCK();
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  uVar1 = uRam0000000149aafa38;
  param_1[0x1c] = _DAT_149aafa30;
  param_1[0x1d] = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 5;
  return param_1;
}

