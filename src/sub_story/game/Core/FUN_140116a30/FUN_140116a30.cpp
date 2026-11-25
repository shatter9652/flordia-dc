// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140116a30  size: 950 bytes
// Name:    FUN_140116a30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140056cb0, FUN_140037a50, FUN_14248d350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140116a30(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  longlong unaff_GS_OFFSET;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  
  if (*(longlong *)(_DAT_14a9253c8 + 0x28) != 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    lVar2 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    lVar10 = *(longlong *)(lVar2 + 0x12a8);
    if (*(longlong *)(lVar10 + 0x12320) != 0) {
      *(undefined8 *)(lVar10 + 0x12320) = 0;
      *(byte *)(lVar10 + 0x12522) = *(byte *)(lVar10 + 0x12522) | 0x80;
    }
    uVar6 = _DAT_14a92c420;
    plVar1 = (longlong *)(lVar2 + 0x12a8);
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar1;
    }
    cVar7 = *(char *)((longlong)param_2 + 0x14);
    if (*(char *)(lVar10 + 0x1237d) != cVar7) {
      *(char *)(lVar10 + 0x1237d) = cVar7;
      *(ulonglong *)(lVar10 + 0x12520) =
           (ulonglong)(*(char *)(lVar10 + 0x123fd) != cVar7) << 0x12 |
           *(ulonglong *)(lVar10 + 0x12520) & 0xfffffffffffbffff;
    }
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar1;
    }
    if (*(int *)(lVar10 + 0x12530) != 0) {
      auVar12._0_12_ = ZEXT812(0);
      auVar12._12_4_ = 0;
      *(undefined1 (*) [32])(lVar10 + 0x12500) = ZEXT1632(auVar12);
      *(undefined1 (*) [32])(lVar10 + 0x124e0) = ZEXT1632(auVar12);
      auVar13 = ZEXT1632(auVar12);
      *(undefined1 (*) [32])(lVar10 + 0x124c0) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x124a0) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x12480) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x12460) = auVar13;
      auVar13 = ZEXT1632(auVar12);
      *(undefined1 (*) [32])(lVar10 + 0x12440) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x12420) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x12538) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x12558) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x12578) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x12598) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x125b8) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x125d8) = auVar13;
      *(undefined1 (*) [32])(lVar10 + 0x125f8) = ZEXT1632(auVar12);
      *(undefined1 (*) [32])(lVar10 + 0x12618) = ZEXT1632(auVar12);
      *(byte *)(lVar10 + 0x12523) = *(byte *)(lVar10 + 0x12523) | 0x20;
    }
    *(undefined4 *)(lVar10 + 0x12530) = 0;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      lVar10 = *plVar1;
    }
    if (*(longlong *)(lVar10 + 0x12638) != *param_2) {
      *(longlong *)(lVar10 + 0x12638) = *param_2;
      *(byte *)(lVar10 + 0x12523) = *(byte *)(lVar10 + 0x12523) | 1;
    }
    iVar5 = *(int *)(param_1 + 0x2ec + (ulonglong)*(byte *)(_DAT_14a943ab0 + 1) * 0x80) * 0x14;
    plVar3 = *(longlong **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1288);
    if (plVar3 == (longlong *)0x0) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar2 = *plVar1;
      FUN_14248d350(lVar2,uVar6,iVar5);
      if (((**(uint **)(lVar2 + 0x12198) & 0xc000000) == 0) &&
         (cVar7 = func_0x000144e88f60(lVar2), cVar7 != '\0')) {
        puVar4 = *(uint **)(lVar2 + 0x12198);
        while ((*puVar4 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar4,0,1);
        }
        FUN_140056f60(lVar2,&stack0xfffffffffffffff8,1);
        return;
      }
    }
    else {
      iVar8 = (**(code **)(*plVar3 + 8))(plVar3);
      if (iVar8 != 0) {
        uVar11 = 0;
        do {
          cVar7 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1,uVar11);
          if (cVar7 != '\0') {
            (**(code **)(*plVar3 + 0x10))(plVar3,uVar11);
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            lVar2 = *plVar1;
            FUN_14248d350(lVar2,uVar6,iVar5);
            if (((**(uint **)(lVar2 + 0x12198) & 0xc000000) == 0) &&
               (cVar7 = func_0x000144e88f60(lVar2), cVar7 != '\0')) {
              puVar4 = *(uint **)(lVar2 + 0x12198);
              uVar9 = *puVar4;
              while ((uVar9 & 0xe000000) != 0x2000000) {
                FUN_140037a50(puVar4,0,1);
                uVar9 = *puVar4;
              }
              FUN_140056cb0(lVar2);
            }
            (**(code **)(*plVar3 + 0x18))(plVar3,uVar11);
          }
          uVar11 = uVar11 + 1;
          uVar9 = (**(code **)(*plVar3 + 8))(plVar3);
        } while (uVar11 < uVar9);
      }
    }
  }
  return;
}

