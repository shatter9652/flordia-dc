// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140124760  size: 929 bytes
// Name:    FUN_140124760
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140b39840, FUN_1422d3c20, FUN_14011fb90, FUN_144dbce00, FUN_1402aacf0, FUN_1453f9fa0, FUN_141f8e960, FUN_1427f87f0, FUN_1453fa0a0, FUN_14517a290, FUN_140f3b8c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140124760(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  short sVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong unaff_GS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  ushort in_stack_ffffffffffffff38;
  undefined1 auStack_98 [6];
  undefined1 auStack_92 [26];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_6c [32];
  undefined4 uStack_4c;
  
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  plVar2 = *(longlong **)(unaff_GS_OFFSET + 0x58);
  lVar10 = *plVar2;
  func_0x0001404addf0(*(undefined8 *)(lVar10 + 0x12a8));
  if (*(char *)(plVar2[__tls_index] + 8) == '\0') {
    func_0x0001455db994();
  }
  lVar3 = *(longlong *)(param_1 + 8);
  plVar2 = (longlong *)(lVar10 + 0x12a8);
  if ((ushort)(*(short *)(lVar3 + 0x12) - 1U) < _DAT_14a943ab8) {
    lVar10 = *plVar2;
    auStack_98._4_2_ = *(undefined2 *)(param_1 + 0x1c);
    auStack_98._0_4_ = *(undefined4 *)(param_1 + 0x18);
    *(undefined1 *)(lVar10 + 0x121a4) = 1;
    in_stack_ffffffffffffff38 = 0x103;
    FUN_144dbce00(lVar10,0,lVar3,auStack_98,0x103);
  }
  FUN_1427f87f0();
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  FUN_1453fa0a0(*plVar2);
  lVar10 = func_0x00014011f990();
  uVar11 = func_0x000141f68e90();
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  _auStack_98 = lVar10;
  FUN_14011fb90(*plVar2,lVar10 != 0,auStack_98,uVar11,in_stack_ffffffffffffff38 & 0xff00);
  auVar14._4_4_ = _DAT_145fc6ed8;
  auVar14._0_4_ = _DAT_145fc6ed8;
  auVar14._8_4_ = _DAT_145fc6ed8;
  auVar14._12_4_ = _DAT_145fc6ed8;
  _auStack_98 = ZEXT1232(ZEXT812(0));
  uStack_78 = vmovlps_avx(auVar14);
  uStack_70 = 0x3f800000;
  uStack_4c = 0;
  auVar15 = ZEXT1664(auVar14);
  auStack_6c = _auStack_98;
  func_0x0001425d7680(auStack_98);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  sVar9 = _DAT_149dd6f40;
  lVar10 = *plVar2;
  if (*(short *)(lVar10 + 0x1236e) != _DAT_149dd6f40) {
    *(short *)(lVar10 + 0x1236e) = _DAT_149dd6f40;
    *(ulonglong *)(lVar10 + 0x12520) =
         (ulonglong)(*(short *)(lVar10 + 0x123ee) != sVar9) << 0x14 |
         *(ulonglong *)(lVar10 + 0x12520) & 0xffffffffffefffff;
  }
  FUN_140b39840(auStack_98,0xf,0);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar10 = *plVar2;
  if (*(longlong *)(lVar10 + 0x12320) != _DAT_149dd6f38) {
    *(longlong *)(lVar10 + 0x12320) = _DAT_149dd6f38;
    *(byte *)(lVar10 + 0x12522) = *(byte *)(lVar10 + 0x12522) | 0x80;
  }
  if (*(char *)(lVar10 + 0x1237d) != '\x11') {
    *(undefined1 *)(lVar10 + 0x1237d) = 0x11;
    *(ulonglong *)(lVar10 + 0x12520) =
         (ulonglong)(*(char *)(lVar10 + 0x123fd) != '\x11') << 0x12 |
         *(ulonglong *)(lVar10 + 0x12520) & 0xfffffffffffbffff;
  }
  uVar13 = (ulonglong)*(uint *)(lVar10 + 0x12190);
  *(undefined4 *)(uVar13 * 4 + 0x149ab3b80) = 1;
  *(undefined4 *)(uVar13 * 4 + 0x149ab3be0) = 3;
  *(undefined4 *)(lVar10 + 0x12530) = 1;
  uVar12 = FUN_14517a290(lVar10,3,0x18,uVar13 * 4 + 0x149ab3bb0);
  uVar8 = _UNK_14615a128;
  uVar7 = _DAT_14615a120;
  uVar6 = _UNK_14615a118;
  uVar5 = _DAT_14615a110;
  uVar11 = _DAT_14615a100;
  *(undefined8 *)(uVar13 * 8 + 0x149ab3c10) = uVar12;
  uVar1 = *(uint *)(lVar10 + 0x12190);
  puVar4 = *(undefined8 **)((ulonglong)uVar1 * 8 + 0x149ab3c10);
  *puVar4 = uVar11;
  puVar4[1] = 0xffffffff00000000;
  puVar4[2] = uVar5;
  puVar4[3] = uVar6;
  puVar4[4] = 0xffffffff00000000;
  *(undefined8 **)((ulonglong)uVar1 * 8 + 0x149ab3c10) = puVar4 + 9;
  puVar4[5] = uVar7;
  puVar4[6] = uVar8;
  puVar4[7] = 0xffffffff00000000;
  uVar11 = vmovlps_avx(auVar15._0_16_);
  puVar4[8] = uVar11;
  FUN_1402aacf0(lVar10);
  FUN_141f8e960(auStack_98);
  FUN_1422d3c20();
  FUN_140f3b8c0();
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar10 = *plVar2;
  if (*(char *)(lVar10 + 0x1237c) == '\x01') {
    *(undefined1 *)(lVar10 + 0x1237c) = 0;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar10 = *plVar2;
  }
  FUN_1453f9fa0(lVar10);
  return;
}

