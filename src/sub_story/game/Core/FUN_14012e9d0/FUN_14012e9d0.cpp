// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e9d0  size: 84 bytes
// Name:    FUN_14012e9d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14012e9d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = uRam000000014ab5cdd8;
  uVar2 = _DAT_14ab5cdd0;
  uVar1 = uRam000000014ab5cdc8;
  *param_1 = _DAT_14ab5cdc0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  iVar4 = func_0x000144ebb890(param_2);
  iVar5 = func_0x000144ebb890(&DAT_14ab5cdd0);
  if (iVar4 < iVar5) {
    func_0x0001451ad0a0(param_1,1);
  }
  uVar1 = param_2[1];
  param_1[2] = *param_2;
  param_1[3] = uVar1;
  return;
}

