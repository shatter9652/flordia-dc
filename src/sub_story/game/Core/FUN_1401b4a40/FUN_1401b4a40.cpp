// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4a40  size: 111 bytes
// Name:    FUN_1401b4a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1401b4a40(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_144da6330();
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  uVar2 = _UNK_14667ee98;
  uVar1 = _DAT_14667ee90;
  *param_1 = &UNK_1465e69a0;
  param_1[4] = param_2;
  LOCK();
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  UNLOCK();
  param_1[5] = param_2;
  LOCK();
  *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
  uVar3 = uRam0000000149aafa38;
  UNLOCK();
  param_1[6] = _DAT_149aafa30;
  param_1[7] = uVar3;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  param_1[3] = 0x100000000;
  return param_1;
}

