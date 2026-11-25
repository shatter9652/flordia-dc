// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013efb0  size: 998 bytes
// Name:    FUN_14013efb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e34030, FUN_14555e800, FUN_140056cb0, FUN_14248d500, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013efb0(longlong param_1,longlong *param_2,byte param_3,undefined4 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong unaff_GS_OFFSET;
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x10) + 8);
  }
  else {
    iVar5 = (*(uint *)(*(longlong *)(param_1 + 0x40) + 10) & 0x7fffff) * 3;
  }
  if (iVar5 == 0) {
    return;
  }
  iVar5 = FUN_144e34030(param_1);
  if (iVar5 == 1) {
    lVar9 = *(longlong *)(param_1 + 0x10);
    if (lVar9 == 0) goto LAB_14013f27b;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar7 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar8 = *(longlong *)(lVar7 + 0x12a8);
    if (*(longlong *)(lVar8 + 0x12638) != lVar9) {
      *(longlong *)(lVar8 + 0x12638) = lVar9;
      *(byte *)(lVar8 + 0x12523) = *(byte *)(lVar8 + 0x12523) | 1;
    }
    plVar1 = (longlong *)(lVar7 + 0x12a8);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar8 = *plVar1;
    }
    if (*(char *)(lVar8 + 0x1237d) != '\x04') {
      *(undefined1 *)(lVar8 + 0x1237d) = 4;
      *(ulonglong *)(lVar8 + 0x12520) =
           (ulonglong)(*(char *)(lVar8 + 0x123fd) != '\x04') << 0x12 |
           *(ulonglong *)(lVar8 + 0x12520) & 0xfffffffffffbffff;
    }
    uVar2 = *(uint *)(*param_2 + 0x40);
    iVar5 = func_0x00014013ef90(param_4,param_5);
    lVar7 = (ulonglong)(iVar5 * uVar2) * 0x14 + param_2[0xb];
    lVar9 = lVar7 + -0x28 + (ulonglong)uVar2 * 0x14;
    if (param_3 != 0) {
      lVar9 = lVar7 + -0x14 + (ulonglong)uVar2 * 0x14;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar8 = *plVar1;
    }
    FUN_14248d500(lVar8,lVar9);
    if (((**(uint **)(lVar8 + 0x12198) & 0xc000000) != 0) ||
       (cVar4 = func_0x000144e88f60(lVar8), cVar4 == '\0')) goto LAB_14013f27b;
    puVar3 = *(uint **)(lVar8 + 0x12198);
    while ((*puVar3 & 0xe000000) != 0x2000000) {
      FUN_140037a50(puVar3,0,1);
    }
  }
  else {
    if (iVar5 != 2) goto LAB_14013f27b;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar9 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar8 = *(longlong *)(lVar9 + 0x12a8);
    if (*(char *)(lVar8 + 0x1237d) != '\x04') {
      *(undefined1 *)(lVar8 + 0x1237d) = 4;
      *(ulonglong *)(lVar8 + 0x12520) =
           (ulonglong)(*(char *)(lVar8 + 0x123fd) != '\x04') << 0x12 |
           *(ulonglong *)(lVar8 + 0x12520) & 0xfffffffffffbffff;
    }
    iVar5 = *(int *)(*param_2 + 0x40);
    iVar6 = func_0x00014013ef90(param_4,param_5);
    lVar7 = func_0x0001435b73c0(*(undefined4 *)((longlong)param_2 + 0x74),
                                *(undefined8 *)(param_2[0x10] + 0x38),iVar6 * iVar5 + -1 + iVar5);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar8 = *(longlong *)(lVar9 + 0x12a8);
    }
    *(undefined1 *)(lVar8 + 0x121a4) = 1;
    FUN_14555e800(lVar8,(ulonglong)param_3 * 0x10 + -0x10 + lVar7);
    if (((**(uint **)(lVar8 + 0x12198) & 0xc000000) != 0) ||
       (cVar4 = func_0x000144e88f60(lVar8), cVar4 == '\0')) goto LAB_14013f27b;
    puVar3 = *(uint **)(lVar8 + 0x12198);
    while ((*puVar3 & 0xe000000) != 0x2000000) {
      FUN_140037a50(puVar3,0,1);
    }
  }
  FUN_140056cb0(lVar8);
LAB_14013f27b:
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lVar9 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12a8);
  if (*(int *)(lVar9 + 0x12530) != 0) {
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    *(undefined1 (*) [32])(lVar9 + 0x12500) = ZEXT1632(auVar10);
    *(undefined1 (*) [32])(lVar9 + 0x124e0) = ZEXT1632(auVar10);
    auVar11 = ZEXT1632(auVar10);
    *(undefined1 (*) [32])(lVar9 + 0x124c0) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x124a0) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x12480) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x12460) = auVar11;
    auVar11 = ZEXT1632(auVar10);
    *(undefined1 (*) [32])(lVar9 + 0x12440) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x12420) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x12538) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x12558) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x12578) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x12598) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x125b8) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x125d8) = auVar11;
    *(undefined1 (*) [32])(lVar9 + 0x125f8) = ZEXT1632(auVar10);
    *(undefined1 (*) [32])(lVar9 + 0x12618) = ZEXT1632(auVar10);
    *(byte *)(lVar9 + 0x12523) = *(byte *)(lVar9 + 0x12523) | 0x20;
  }
  *(undefined4 *)(lVar9 + 0x12530) = 0;
  return;
}

