// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006b210  size: 1835 bytes
// Name:    FUN_14006b210
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14555e800, FUN_144e34030, FUN_14248d500, FUN_14248ce00, FUN_14555e640, FUN_140056cb0, FUN_140037a50, FUN_143355510, FUN_1413cfa10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006b210(longlong param_1,longlong *param_2,char param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong unaff_GS_OFFSET;
  bool bVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  iVar7 = *(int *)(*(longlong *)*param_2 + 8);
  cVar5 = func_0x0001455ad130();
  if (cVar5 != '\0') {
    return;
  }
  iVar6 = FUN_144e34030(param_1);
  if (iVar6 == 1) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xa34) == '\x01') {
      lVar12 = *(longlong *)(param_1 + 0x10);
      bVar14 = true;
      bVar13 = lVar12 != 0;
    }
    else {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar12 = *(longlong *)(param_1 + 0x10);
      bVar14 = *(int *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0xac0) == 5;
      bVar13 = lVar12 != 0;
      if (!bVar14 && !bVar13) goto LAB_14006b7fa;
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      iVar6 = *(int *)(lVar12 + 8);
    }
    else {
      iVar6 = (*(uint *)(*(longlong *)(param_1 + 0x40) + 10) & 0x7fffff) * 3;
    }
    cVar5 = *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
    if (bVar13) {
      if (cVar5 == '\0') {
        func_0x0001455db994();
      }
      lVar9 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
      if (*(longlong *)(lVar9 + 0x12638) != lVar12) {
        *(longlong *)(lVar9 + 0x12638) = lVar12;
LAB_14006b523:
        *(byte *)(lVar9 + 0x12523) = *(byte *)(lVar9 + 0x12523) | 1;
      }
    }
    else {
      if (cVar5 == '\0') {
        func_0x0001455db994();
      }
      lVar9 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
      if (*(longlong *)(lVar9 + 0x12638) != 0) {
        *(undefined8 *)(lVar9 + 0x12638) = 0;
        goto LAB_14006b523;
      }
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    cVar5 = '\x04';
    if (param_3 != '\0') {
      cVar5 = '#';
    }
    lVar12 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar9 = *(longlong *)(lVar12 + 0x12a8);
    if (*(char *)(lVar9 + 0x1237d) != cVar5) {
      *(char *)(lVar9 + 0x1237d) = cVar5;
      *(ulonglong *)(lVar9 + 0x12520) =
           (ulonglong)(*(char *)(lVar9 + 0x123fd) != cVar5) << 0x12 |
           *(ulonglong *)(lVar9 + 0x12520) & 0xfffffffffffbffff;
    }
    plVar2 = (longlong *)*param_2;
    plVar1 = (longlong *)(lVar12 + 0x12a8);
    lVar12 = *plVar2;
    if (((*(byte *)(lVar12 + 0x88) & 2) == 0) || ((*(uint *)(plVar2 + 0x14) & 0x400000) == 0)) {
      if (bVar14) {
        FUN_1413cfa10(param_1,iVar7,0);
        goto LAB_14006b7fa;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar9 = *plVar1;
      }
      FUN_14248ce00(lVar9,iVar6,iVar7,0,0);
      if (((**(uint **)(lVar9 + 0x12198) & 0xc000000) != 0) ||
         (cVar5 = func_0x000144e88f60(lVar9), cVar5 == '\0')) goto LAB_14006b7fa;
      puVar4 = *(uint **)(lVar9 + 0x12198);
      while ((*puVar4 & 0xe000000) != 0x2000000) {
        FUN_140037a50(puVar4,0,1);
      }
    }
    else {
      lVar12 = (ulonglong)(uint)((int)param_2[2] * *(int *)(lVar12 + 0x40)) * 0x14 + plVar2[0xb] +
               (ulonglong)*(uint *)(lVar12 + 0x50 + (longlong)(int)param_2[1] * 4) * 0x14 +
               (ulonglong)*(uint *)((longlong)param_2 + 0x14) * 0x14 +
               (ulonglong)*(uint *)(param_2 + 3) * 0x14;
      if (bVar14) {
        FUN_143355510(param_1,lVar12);
        goto LAB_14006b7fa;
      }
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
        lVar9 = *plVar1;
      }
      FUN_14248d500(lVar9,lVar12);
      if (((**(uint **)(lVar9 + 0x12198) & 0xc000000) != 0) ||
         (cVar5 = func_0x000144e88f60(lVar9), cVar5 == '\0')) goto LAB_14006b7fa;
      puVar4 = *(uint **)(lVar9 + 0x12198);
      while ((*puVar4 & 0xe000000) != 0x2000000) {
        FUN_140037a50(puVar4,0,1);
      }
    }
  }
  else {
    if (iVar6 != 2) goto LAB_14006b7fa;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    cVar5 = '\x04';
    if (param_3 != '\0') {
      cVar5 = '#';
    }
    lVar12 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar9 = *(longlong *)(lVar12 + 0x12a8);
    if (*(char *)(lVar9 + 0x1237d) != cVar5) {
      *(char *)(lVar9 + 0x1237d) = cVar5;
      *(ulonglong *)(lVar9 + 0x12520) =
           (ulonglong)(*(char *)(lVar9 + 0x123fd) != cVar5) << 0x12 |
           *(ulonglong *)(lVar9 + 0x12520) & 0xfffffffffffbffff;
    }
    plVar2 = (longlong *)*param_2;
    plVar1 = (longlong *)(lVar12 + 0x12a8);
    lVar12 = *plVar2;
    if (((*(byte *)(lVar12 + 0x88) & 2) == 0) || ((*(uint *)(plVar2 + 0x14) & 0x400000) == 0)) {
      func_0x000145574d50();
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar9 = *plVar1;
      uVar11 = *(uint *)(*(longlong *)(param_1 + 0x40) + 8);
      *(undefined1 *)(lVar9 + 0x121a4) = 1;
      FUN_14555e640(lVar9,(uVar11 & 0x7fff) * iVar7);
      if (((**(uint **)(lVar9 + 0x12198) & 0xc000000) != 0) ||
         (cVar5 = func_0x000144e88f60(lVar9), cVar5 == '\0')) goto LAB_14006b7fa;
      puVar4 = *(uint **)(lVar9 + 0x12198);
      while ((*puVar4 & 0xe000000) != 0x2000000) {
        FUN_140037a50(puVar4,0,1);
      }
      goto LAB_14006b931;
    }
    pbVar3 = (byte *)plVar2[0x10];
    uVar11 = (int)param_2[2] * *(int *)(lVar12 + 0x40) +
             *(int *)(lVar12 + 0x50 + (longlong)(int)param_2[1] * 4) +
             *(int *)((longlong)param_2 + 0x14) + (int)param_2[3];
    iVar7 = func_0x00014003a990(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8));
    if ((*(byte *)((longlong)plVar2 + 0xa4) & 4) == 0) {
      if ((iVar7 != 0) ||
         ((*(int *)((longlong)plVar2 + 0x94) != 0 && ((*pbVar3 & 1) != 0 && param_4 == '\0')))) {
        uVar10 = *(undefined8 *)(pbVar3 + 0x50);
        goto LAB_14006b730;
      }
LAB_14006b771:
      func_0x000145574d50();
    }
    else {
      if (iVar7 == 0) goto LAB_14006b771;
      uVar10 = *(undefined8 *)(pbVar3 + 0x78);
LAB_14006b730:
      uVar10 = func_0x000144da8e10(uVar10);
      uVar8 = func_0x000144da2350(uVar10);
      func_0x000144da1140((uVar8 >> 2) + uVar11 + *(int *)((longlong)plVar2 + 0x74) | 0x8000000,
                          iVar7);
    }
    lVar12 = *param_2;
    if ((*(byte *)(lVar12 + 0xa4) & 4) == 0) {
      lVar12 = (ulonglong)*(uint *)(lVar12 + 0x74) * 0x10 + *(longlong *)(pbVar3 + 0x38);
    }
    else {
      lVar12 = *(longlong *)(lVar12 + 0x88);
    }
    if (lVar12 == 0) goto LAB_14006b7fa;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar9 = *plVar1;
    *(undefined1 *)(lVar9 + 0x121a4) = 1;
    FUN_14555e800(lVar9,lVar12 + (ulonglong)uVar11 * 0x10);
    if (((**(uint **)(lVar9 + 0x12198) & 0xc000000) != 0) ||
       (cVar5 = func_0x000144e88f60(lVar9), cVar5 == '\0')) goto LAB_14006b7fa;
    puVar4 = *(uint **)(lVar9 + 0x12198);
    while ((*puVar4 & 0xe000000) != 0x2000000) {
      FUN_140037a50(puVar4,0,1);
    }
  }
LAB_14006b931:
  FUN_140056cb0(lVar9);
LAB_14006b7fa:
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar12 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  if (*(int *)(lVar12 + 0x12530) != 0) {
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    *(undefined1 (*) [32])(lVar12 + 0x12500) = ZEXT1632(auVar15);
    *(undefined1 (*) [32])(lVar12 + 0x124e0) = ZEXT1632(auVar15);
    auVar16 = ZEXT1632(auVar15);
    *(undefined1 (*) [32])(lVar12 + 0x124c0) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x124a0) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x12480) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x12460) = auVar16;
    auVar16 = ZEXT1632(auVar15);
    *(undefined1 (*) [32])(lVar12 + 0x12440) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x12420) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x12538) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x12558) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x12578) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x12598) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x125b8) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x125d8) = auVar16;
    *(undefined1 (*) [32])(lVar12 + 0x125f8) = ZEXT1632(auVar15);
    *(undefined1 (*) [32])(lVar12 + 0x12618) = ZEXT1632(auVar15);
    *(byte *)(lVar12 + 0x12523) = *(byte *)(lVar12 + 0x12523) | 0x20;
  }
  *(undefined4 *)(lVar12 + 0x12530) = 0;
  return;
}

