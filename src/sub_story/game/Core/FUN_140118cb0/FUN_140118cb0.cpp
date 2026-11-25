// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140118cb0  size: 3599 bytes
// Name:    FUN_140118cb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14031a7f0, FUN_140118b50, FUN_1428f9ef0, FUN_144dbce00, FUN_14290a3a0, FUN_1428ec730, FUN_1411bf750, FUN_140c3ab10, FUN_1432be0f0, FUN_14011f9c0, FUN_1428fc5b0, FUN_1432be6a0, FUN_14031a760, FUN_14067e110, FUN_140369a50, FUN_140118980, FUN_141b9ed90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140119231) */
/* WARNING: Removing unreachable block (ram,0x00014011924d) */
/* WARNING: Removing unreachable block (ram,0x000140119252) */
/* WARNING: Removing unreachable block (ram,0x00014011927b) */
/* WARNING: Removing unreachable block (ram,0x000140119280) */
/* WARNING: Removing unreachable block (ram,0x0001401192ba) */
/* WARNING: Removing unreachable block (ram,0x0001401192bf) */
/* WARNING: Removing unreachable block (ram,0x0001401190ea) */
/* WARNING: Removing unreachable block (ram,0x000140119146) */
/* WARNING: Removing unreachable block (ram,0x00014011914b) */
/* WARNING: Removing unreachable block (ram,0x00014011915e) */
/* WARNING: Removing unreachable block (ram,0x000140119162) */
/* WARNING: Removing unreachable block (ram,0x000140119176) */
/* WARNING: Removing unreachable block (ram,0x0001401191b3) */
/* WARNING: Removing unreachable block (ram,0x0001401191db) */
/* WARNING: Removing unreachable block (ram,0x0001401191df) */
/* WARNING: Removing unreachable block (ram,0x000140118f2a) */
/* WARNING: Removing unreachable block (ram,0x000140118f42) */
/* WARNING: Removing unreachable block (ram,0x000140118f94) */
/* WARNING: Removing unreachable block (ram,0x000140118f55) */
/* WARNING: Removing unreachable block (ram,0x0001401197de) */
/* WARNING: Removing unreachable block (ram,0x00014011981d) */
/* WARNING: Removing unreachable block (ram,0x00014011984e) */
/* WARNING: Removing unreachable block (ram,0x00014011980f) */
/* WARNING: Removing unreachable block (ram,0x000140118f7c) */
/* WARNING: Removing unreachable block (ram,0x00014011985c) */
/* WARNING: Removing unreachable block (ram,0x0001401198be) */
/* WARNING: Removing unreachable block (ram,0x0001401198c3) */
/* WARNING: Removing unreachable block (ram,0x0001401198d0) */
/* WARNING: Removing unreachable block (ram,0x0001401198fe) */
/* WARNING: Removing unreachable block (ram,0x00014011991a) */
/* WARNING: Removing unreachable block (ram,0x000140119923) */
/* WARNING: Removing unreachable block (ram,0x000140119931) */
/* WARNING: Removing unreachable block (ram,0x00014011993f) */
/* WARNING: Removing unreachable block (ram,0x00014011995b) */
/* WARNING: Removing unreachable block (ram,0x000140119964) */
/* WARNING: Removing unreachable block (ram,0x00014011997d) */
/* WARNING: Removing unreachable block (ram,0x0001401199b3) */
/* WARNING: Removing unreachable block (ram,0x0001401199cf) */
/* WARNING: Removing unreachable block (ram,0x0001401199d8) */
/* WARNING: Removing unreachable block (ram,0x0001401199e2) */
/* WARNING: Removing unreachable block (ram,0x0001401199f4) */
/* WARNING: Removing unreachable block (ram,0x000140119a10) */
/* WARNING: Removing unreachable block (ram,0x000140119a19) */
/* WARNING: Removing unreachable block (ram,0x000140119a22) */
/* WARNING: Removing unreachable block (ram,0x000140119a50) */
/* WARNING: Removing unreachable block (ram,0x000140119a6c) */
/* WARNING: Removing unreachable block (ram,0x000140119a75) */
/* WARNING: Removing unreachable block (ram,0x000140119a85) */
/* WARNING: Removing unreachable block (ram,0x000140118f97) */
/* WARNING: Removing unreachable block (ram,0x00014011903f) */
/* WARNING: Removing unreachable block (ram,0x000140119051) */
/* WARNING: Removing unreachable block (ram,0x000140119056) */
/* WARNING: Removing unreachable block (ram,0x000140119079) */
/* WARNING: Removing unreachable block (ram,0x00014011908e) */
/* WARNING: Removing unreachable block (ram,0x000140119096) */
/* WARNING: Removing unreachable block (ram,0x000140119211) */
/* WARNING: Removing unreachable block (ram,0x0001401192d0) */
/* WARNING: Removing unreachable block (ram,0x0001401192eb) */
/* WARNING: Removing unreachable block (ram,0x0001401192f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140118cb0(void)

{
  longlong *plVar1;
  short sVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  longlong unaff_GS_OFFSET;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  char cStack_c8d;
  short sStack_c8c;
  longlong alStack_c80 [6];
  longlong lStack_c50;
  longlong alStack_c40 [6];
  longlong lStack_c10;
  undefined1 auStack_c08 [32];
  undefined1 auStack_be8 [32];
  undefined1 auStack_bc8 [32];
  undefined1 auStack_b08 [1392];
  undefined4 uStack_598;
  undefined1 auStack_594 [1364];
  
  cVar5 = func_0x000145220e10();
  if (cVar5 == '\0') {
    return;
  }
  cVar5 = FUN_140118b50();
  if (cVar5 != '\0') {
    func_0x000144ec8b40();
    lVar7 = func_0x0001453d54b0();
    cVar5 = func_0x0001450903f0(*(undefined4 *)(lVar7 + 0x14));
    if (cVar5 != '\0') {
      return;
    }
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  FUN_140369a50(*(undefined8 *)(lVar7 + 0x12a8),0xb8);
  lVar8 = (longlong)_DAT_14a210d14;
  bVar6 = FUN_140118980();
  bVar4 = DAT_14a9438f4;
  bVar13 = bVar6 & DAT_14a9438f4;
  lVar9 = FUN_14031a7f0(1);
  if (bVar13 == 1) {
    lVar10 = FUN_14011f9c0();
  }
  else {
    lVar10 = 0;
  }
  plVar1 = (longlong *)(lVar7 + 0x12a8);
  if (bVar6 == 0) {
    if (lVar9 != 0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      FUN_1432be0f0(*plVar1,lVar9,lVar8 * 0x11e50 + 0x1491890d4);
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    FUN_1432be6a0(*plVar1);
    return;
  }
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  auStack_c08 = ZEXT1632(auVar14);
  auStack_bc8 = ZEXT1632(auVar14);
  auStack_be8 = auStack_c08;
  func_0x000145f40580(auStack_b08,0,0x570);
  func_0x0001411bfff0(alStack_c80,lVar9,_DAT_14765a540,0,0);
  uVar12 = _DAT_147b975f8;
  uVar11 = FUN_14011f9c0();
  func_0x0001411bfff0(alStack_c40,uVar11,uVar12,0,0);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  func_0x0001404addf0(*plVar1);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar7 = *plVar1;
    cStack_c8d = *(char *)(lVar7 + 0x1236c);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar7 = *plVar1;
      sStack_c8c = *(short *)(lVar7 + 0x12378);
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar7 = *plVar1;
      }
      goto LAB_140118f12;
    }
  }
  else {
    lVar7 = *plVar1;
    cStack_c8d = *(char *)(lVar7 + 0x1236c);
  }
  sStack_c8c = *(short *)(lVar7 + 0x12378);
LAB_140118f12:
  sVar2 = *(short *)(lVar7 + 0x1236e);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  FUN_140369a50(*plVar1,0xb9);
  lVar7 = lStack_c50;
  if (lStack_c50 == 0) {
    lVar7 = alStack_c80[0];
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  FUN_1432be0f0(*plVar1,lVar7,lVar8 * 0x11e50 + 0x1491890d4);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  FUN_1432be6a0(*plVar1);
  lVar7 = lStack_c50;
  if (lStack_c50 == 0) {
    lVar7 = alStack_c80[0];
  }
  if (lVar7 != lVar9) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar7 = lStack_c50;
    if (lStack_c50 == 0) {
      lVar7 = alStack_c80[0];
    }
    lVar8 = *(longlong *)(lVar7 + 8);
    if ((ushort)(*(short *)(lVar8 + 0x12) - 1U) < _DAT_14a943ab8) {
      lVar3 = *plVar1;
      auStack_594._0_2_ = *(undefined2 *)(lVar7 + 0x1c);
      uStack_598 = *(undefined4 *)(lVar7 + 0x18);
      *(undefined1 *)(lVar3 + 0x121a4) = 1;
      FUN_144dbce00(lVar3,0,lVar8,&uStack_598,0x103);
    }
    uVar12 = func_0x0001428fd4a0(0x19);
    if (lStack_c50 != 0) {
      alStack_c80[0] = lStack_c50;
    }
    FUN_141b9ed90(auStack_b08,auStack_c08,lVar9,*(undefined8 *)(alStack_c80[0] + 8),0x19,uVar12);
  }
  lVar7 = lStack_c10;
  if (lStack_c10 == 0) {
    lVar7 = alStack_c40[0];
  }
  if (lVar7 != lVar10 && (~bVar4 & 1) == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar7 = lStack_c10;
    if (lStack_c10 == 0) {
      lVar7 = alStack_c40[0];
    }
    lVar8 = *(longlong *)(lVar7 + 8);
    if ((ushort)(*(short *)(lVar8 + 0x12) - 1U) < _DAT_14a943ab8) {
      lVar9 = *plVar1;
      auStack_594._0_2_ = *(undefined2 *)(lVar7 + 0x1c);
      uStack_598 = *(undefined4 *)(lVar7 + 0x18);
      *(undefined1 *)(lVar9 + 0x121a4) = 1;
      FUN_144dbce00(lVar9,0,lVar8,&uStack_598,0x103);
    }
    uVar12 = func_0x0001428fd4a0(0x19);
    if (lStack_c10 != 0) {
      alStack_c40[0] = lStack_c10;
    }
    FUN_141b9ed90(auStack_b08,auStack_c08,lVar10,*(undefined8 *)(alStack_c40[0] + 8),0x19,uVar12);
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar7 = *plVar1;
  if (*(char *)(lVar7 + 0x1236c) != cStack_c8d) {
    *(char *)(lVar7 + 0x1236c) = cStack_c8d;
    *(ulonglong *)(lVar7 + 0x12520) =
         (ulonglong)(*(char *)(lVar7 + 0x123ec) != cStack_c8d) << 0x13 |
         *(ulonglong *)(lVar7 + 0x12520) & 0xfffffffffff7ffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar7 = *plVar1;
  }
  if (*(short *)(lVar7 + 0x12378) != sStack_c8c) {
    *(short *)(lVar7 + 0x12378) = sStack_c8c;
    *(byte *)(lVar7 + 0x12522) = *(byte *)(lVar7 + 0x12522) | 0x20;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar7 = *plVar1;
  }
  auVar15._4_4_ = _DAT_145fc6ed8;
  auVar15._0_4_ = _DAT_145fc6ed8;
  auVar15._8_4_ = _DAT_145fc6ed8;
  auVar15._12_4_ = _DAT_145fc6ed8;
  auVar14 = vcmpps_avx(auVar15,*(undefined1 (*) [16])(lVar7 + 0x12310),4);
  if ((((SUB161(auVar14 >> 0x1f,0) & 1) != 0 || (SUB161(auVar14 >> 0x3f,0) & 1) != 0) ||
      (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || auVar14[0xf] < '\0') {
    *(undefined1 (*) [16])(lVar7 + 0x12310) = auVar15;
    auVar14 = vcmpps_avx(auVar15,*(undefined1 (*) [16])(lVar7 + 0x12390),4);
    *(ulonglong *)(lVar7 + 0x12520) =
         (ulonglong)
         ((uint)((((SUB161(auVar14 >> 0x1f,0) & 1) != 0 || (SUB161(auVar14 >> 0x3f,0) & 1) != 0) ||
                 (SUB161(auVar14 >> 0x5f,0) & 1) != 0) || auVar14[0xf] < '\0') << 0x1a) |
         *(ulonglong *)(lVar7 + 0x12520) & 0xfffffffffbffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar7 = *plVar1;
  }
  if (*(longlong *)(lVar7 + 0x12360) != -1) {
    *(undefined8 *)(lVar7 + 0x12360) = 0xffffffffffffffff;
    *(byte *)(lVar7 + 0x12522) = *(byte *)(lVar7 + 0x12522) | 0x20;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar7 = *plVar1;
  }
  if (*(short *)(lVar7 + 0x1236e) != sVar2) {
    *(short *)(lVar7 + 0x1236e) = sVar2;
    *(ulonglong *)(lVar7 + 0x12520) =
         (ulonglong)(*(short *)(lVar7 + 0x123ee) != sVar2) << 0x14 |
         *(ulonglong *)(lVar7 + 0x12520) & 0xffffffffffefffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar7 = *plVar1;
  }
  if (*(int *)(lVar7 + 0x12368) != 0xff) {
    *(undefined4 *)(lVar7 + 0x12368) = 0xff;
    *(ulonglong *)(lVar7 + 0x12520) =
         (ulonglong)((uint)(*(int *)(lVar7 + 0x123e8) != 0xff) << 0x19) |
         *(ulonglong *)(lVar7 + 0x12520) & 0xfffffffffdffffff;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    lVar7 = *plVar1;
  }
  FUN_14031a760(lVar7);
  return;
}

