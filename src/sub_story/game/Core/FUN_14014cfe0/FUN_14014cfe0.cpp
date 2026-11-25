// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014cfe0  size: 163 bytes
// Name:    FUN_14014cfe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14014cfe0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  longlong unaff_GS_OFFSET;
  undefined1 auVar5 [16];
  
  uVar1 = _DAT_145fc6f50;
  *param_1 = _DAT_145fc6f50;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  auVar5 = ZEXT416(0) << 0x20;
  param_1[0xc] = 0;
  *(undefined1 (*) [32])(param_1 + 4) = ZEXT432(0) << 0x20;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    auVar5._0_12_ = ZEXT812(0);
    auVar5._12_4_ = 0;
    uVar3 = param_1[7] | 0x40;
    uVar4 = param_1[10] | 4;
  }
  else {
    uVar3 = 0x40;
    uVar4 = 4;
  }
  uVar2 = _DAT_1461727c0;
  param_1[0xd] = _DAT_14a15e2c0;
  *(undefined8 *)(param_1 + 0xe) = 0xffffffffffffffff;
  *(undefined1 (*) [32])(param_1 + 0x10) = ZEXT1632(auVar5);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[7] = uVar3;
  param_1[10] = uVar4;
  return;
}

