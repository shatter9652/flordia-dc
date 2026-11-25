// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400247d0  size: 124 bytes
// Name:    FUN_1400247d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1400247d0(undefined8 *param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = _UNK_146180758;
  param_1[1] = _DAT_146180750;
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[4] = param_2;
  *param_1 = &UNK_1466753e0;
  uVar1 = param_5[1];
  param_1[6] = *param_5;
  param_1[7] = uVar1;
  uVar1 = param_6[1];
  param_1[8] = *param_6;
  param_1[9] = uVar1;
  param_1[10] = param_4;
  uVar2 = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = param_3[1];
  *(undefined4 *)((longlong)param_1 + 100) = param_3[2];
  uVar2 = func_0x0001452958d0(*(undefined8 *)(param_2 + 8),uVar2);
  *(undefined4 *)(param_1 + 0xb) = uVar2;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}

