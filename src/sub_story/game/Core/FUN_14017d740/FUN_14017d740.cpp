// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017d740  size: 303 bytes
// Name:    FUN_14017d740
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6330, FUN_1453f5cd0, FUN_1447b67f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14017d740(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  longlong unaff_GS_OFFSET;
  undefined4 uVar4;
  
  FUN_144da6330();
  uVar3 = _UNK_14615b278;
  uVar2 = _DAT_14615b270;
  uVar4 = _DAT_145fc6ed8;
  *param_1 = &UNK_14667af70;
  *(undefined4 *)(param_1 + 2) = 0x1ff;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0xd) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
  *param_1 = &UNK_14667b360;
  FUN_1447b67f0(param_1 + 0x12);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (*(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1448) == 0) {
    *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  }
  FUN_1453f5cd0(param_1 + 0x14);
  *(undefined1 *)(param_1 + 2) = 6;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(byte *)((longlong)param_1 + 0x9c) = *(byte *)((longlong)param_1 + 0x9c) | 4;
  auVar1 = vpblendd_avx2((undefined1  [16])0x0,*(undefined1 (*) [16])(param_1 + 8),8);
  *(undefined1 (*) [16])(param_1 + 8) = auVar1;
  auVar1 = vpcmpeqd_avx(auVar1,auVar1);
  param_1[0x14] = 0;
  uVar4 = 0;
  if (auVar1 == (undefined1  [16])0x0) {
    uVar4 = _DAT_146159c24;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x12] = 0;
  *(undefined1 *)((longlong)param_1 + 0x9f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x9d) = 0;
  return param_1;
}

