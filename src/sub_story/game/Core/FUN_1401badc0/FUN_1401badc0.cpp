// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401badc0  size: 135 bytes
// Name:    FUN_1401badc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1401badc0(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  
  FUN_144da6330();
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *param_1 = &UNK_1465e6d20;
  uVar1 = uRam0000000149aafa38;
  param_1[4] = _DAT_149aafa30;
  param_1[5] = uVar1;
  param_1[6] = param_2;
  LOCK();
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  UNLOCK();
  param_1[7] = param_3;
  LOCK();
  *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
  UNLOCK();
  param_1[8] = param_4;
  LOCK();
  *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 9) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 8;
  return param_1;
}

