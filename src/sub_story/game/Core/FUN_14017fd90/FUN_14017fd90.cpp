// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017fd90  size: 1327 bytes
// Name:    FUN_14017fd90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14017f0a0, FUN_140038160, FUN_140180310
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14017fd90(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong unaff_GS_OFFSET;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  
  *param_1 = &UNK_1466d0c20;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  puVar6 = *(undefined8 **)(lVar5 + 0x1448);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  plVar1 = (longlong *)(lVar5 + 0x1448);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    puVar6 = (undefined8 *)*plVar1;
  }
  plVar2 = param_1 + 0x11;
  if (puVar6 == (undefined8 *)0x0) {
    *plVar2 = 0;
  }
  else if (*plVar2 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      puVar6 = (undefined8 *)*plVar1;
    }
    FUN_140038160(*puVar6,plVar2);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  puVar6 = (undefined8 *)*plVar1;
  plVar2 = param_1 + 0x12;
  if (puVar6 == (undefined8 *)0x0) {
    *plVar2 = 0;
  }
  else if (*plVar2 != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      puVar6 = (undefined8 *)*plVar1;
    }
    FUN_140038160(*puVar6,plVar2);
  }
  func_0x0001401802c0(param_1 + 0x18);
  func_0x0001401802c0(param_1 + 0x2c);
  uVar11 = _DAT_146159bc0;
  uVar14 = _UNK_14614f7f8;
  uVar13 = _DAT_14614f7f0;
  auVar10 = ZEXT464(_DAT_145fc6ed8);
  uVar12 = 0;
  auVar16._4_4_ = _DAT_145fc6f50;
  auVar16._0_4_ = _DAT_145fc6f50;
  auVar16._8_4_ = _DAT_145fc6f50;
  auVar16._12_4_ = _DAT_145fc6f50;
  auVar17 = ZEXT1664(auVar16);
  auVar18._4_4_ = _DAT_145fc6f54;
  auVar18._0_4_ = _DAT_145fc6f54;
  auVar18._8_4_ = _DAT_145fc6f54;
  auVar18._12_4_ = _DAT_145fc6f54;
  auVar19 = ZEXT1664(auVar18);
  auVar9._0_12_ = ZEXT812(0);
  auVar9._12_4_ = 0;
  auVar15 = ZEXT1664(auVar9);
  auVar8 = ZEXT416(_DAT_145fc6ed8);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar8;
  param_1[0x42] = uVar11;
  param_1[0x43] = 0;
  param_1[0x44] = uVar13;
  param_1[0x45] = uVar14;
  *(undefined1 (*) [16])(param_1 + 0x46) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x4c) = auVar9;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar16;
  *(undefined1 (*) [16])(param_1 + 0x4a) = auVar18;
  *(undefined1 *)((longlong)param_1 + 0x272) = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar8;
  param_1[0x52] = uVar11;
  param_1[0x53] = 0;
  param_1[0x54] = uVar13;
  param_1[0x55] = uVar14;
  *(undefined1 (*) [16])(param_1 + 0x56) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x5c) = auVar9;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar16;
  *(undefined1 (*) [16])(param_1 + 0x5a) = auVar18;
  *(undefined1 *)((longlong)param_1 + 0x2f2) = 0;
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar8;
  param_1[0x62] = uVar11;
  param_1[99] = 0;
  param_1[100] = uVar13;
  param_1[0x65] = uVar14;
  *(undefined1 (*) [16])(param_1 + 0x66) = auVar9;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 (*) [16])(param_1 + 0x6c) = auVar9;
  *(undefined1 (*) [16])(param_1 + 0x68) = auVar16;
  *(undefined1 (*) [16])(param_1 + 0x6a) = auVar18;
  *(undefined2 *)((longlong)param_1 + 0x371) = 0;
  *(uint *)(param_1 + 0x70) = (uint)(*(char *)(param_2 + 0x80) == '\x01');
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  lVar5 = *(longlong *)(param_2 + 0x50);
  param_1[0x11] = *(undefined8 *)(param_2 + 0x50);
  param_1[0x12] = uVar4;
  param_1[0x13] = param_2;
  uVar4 = FUN_14017f0a0(0x14a9246f0,*(undefined4 *)(lVar5 + 0x1c));
  param_1[0x14] = uVar4;
  uVar4 = FUN_140180310(0x14a9246f0,*(undefined4 *)(param_1[0x12] + 0x418));
  param_1[0x15] = uVar4;
  uVar3 = param_3 * 0x19660d + 0x896d73d4;
  uVar7 = param_3 * 0x17385ca9 + 0x1eca6bcd;
  uVar3 = (uVar7 >> 0x10 ^ uVar7) * 0x19660d + (uVar3 >> 0x10 ^ uVar3);
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  *(uint *)(param_1 + 2) = uVar3;
  auVar9 = auVar10._0_16_;
  *(undefined1 (*) [16])(param_1 + 4) = auVar9;
  param_1[6] = uVar11;
  param_1[7] = uVar12;
  param_1[8] = uVar13;
  param_1[9] = uVar14;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0xffffffff00000000;
  *(undefined1 (*) [32])(param_1 + 10) = ZEXT1232(ZEXT812(0));
  auVar8._4_4_ = _DAT_145fc6ed8;
  auVar8._0_4_ = _DAT_145fc6ed8;
  auVar8._8_4_ = _DAT_145fc6ed8;
  auVar8._12_4_ = _DAT_145fc6ed8;
  uVar7 = uVar3 * 0x19660d + 0x69203864;
  uVar3 = uVar3 * 0x17385ca9 + 0x5d6289ed;
  uVar4 = vmovlps_avx(auVar8);
  *(undefined8 *)((longlong)param_1 + 0x7c) = uVar4;
  uVar3 = (uVar3 >> 0x10 ^ uVar3) * 0x19660d + (uVar7 >> 0x10 ^ uVar7);
  *(float *)((longlong)param_1 + 0x84) =
       (float)(uVar3 >> 9 ^ uVar3 >> 0x19 | 0x3f800000) + _DAT_145fc6f48;
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar9;
  param_1[0x42] = uVar11;
  param_1[0x43] = uVar12;
  param_1[0x44] = uVar13;
  param_1[0x45] = uVar14;
  auVar8 = auVar15._0_16_;
  *(undefined1 (*) [16])(param_1 + 0x46) = auVar8;
  *(undefined1 (*) [16])(param_1 + 0x4c) = auVar8;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  auVar16 = auVar17._0_16_;
  *(undefined1 (*) [16])(param_1 + 0x48) = auVar16;
  auVar18 = auVar19._0_16_;
  *(undefined1 (*) [16])(param_1 + 0x4a) = auVar18;
  *(undefined1 *)((longlong)param_1 + 0x272) = 0;
  *(undefined1 (*) [16])(param_1 + 0x50) = auVar9;
  param_1[0x52] = uVar11;
  param_1[0x53] = uVar12;
  param_1[0x54] = uVar13;
  param_1[0x55] = uVar14;
  *(undefined1 (*) [16])(param_1 + 0x56) = auVar8;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined1 (*) [16])(param_1 + 0x5c) = auVar8;
  *(undefined1 (*) [16])(param_1 + 0x58) = auVar16;
  *(undefined1 (*) [16])(param_1 + 0x5a) = auVar18;
  *(undefined1 *)((longlong)param_1 + 0x2f2) = 0;
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar9;
  param_1[0x62] = uVar11;
  param_1[99] = uVar12;
  param_1[100] = uVar13;
  param_1[0x65] = uVar14;
  *(undefined1 (*) [16])(param_1 + 0x66) = auVar8;
  *(undefined1 (*) [16])(param_1 + 0x6c) = auVar8;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 (*) [16])(param_1 + 0x68) = auVar16;
  *(undefined1 (*) [16])(param_1 + 0x6a) = auVar18;
  *(undefined2 *)((longlong)param_1 + 0x371) = 0;
  *(undefined1 *)((longlong)param_1 + 900) = 0;
  param_1[0x16] = 0;
  if (*(longlong *)(param_1[0x11] + 0x40) != 0) {
    lVar5 = func_0x000144f97130(0xa0);
    if (lVar5 != 0) {
      func_0x0001401802c0(lVar5);
    }
    param_1[0x16] = lVar5;
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  return param_1;
}

