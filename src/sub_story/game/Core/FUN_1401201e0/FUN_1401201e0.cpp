// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401201e0  size: 122 bytes
// Name:    FUN_1401201e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401201e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)func_0x000140120260(3);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(puVar5 + 4);
  puVar5 = (undefined8 *)func_0x000140120280(3);
  uVar4 = _DAT_145fc6ed8;
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x24) = *puVar5;
  *(undefined8 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x34) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(puVar5 + 4);
  *(undefined4 *)(param_1 + 9) = _DAT_147b95c84;
  *(undefined4 *)((longlong)param_1 + 0x4c) = _DAT_147b95c94;
  param_1[0xb] = 0x100000003;
  uVar1 = vmovlps_avx(ZEXT416(uVar4));
  param_1[10] = uVar1;
  return;
}

