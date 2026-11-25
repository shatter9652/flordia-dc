// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140154250  size: 587 bytes
// Name:    FUN_140154250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eeb550, FUN_141678f00, FUN_144e258f0, FUN_140038190
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140154250(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong unaff_GS_OFFSET;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_14c [4];
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [32];
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  
  uVar11 = (uint)*(short *)((longlong)param_2 + 0x92);
  lVar7 = (**(code **)(*param_2 + 0xa0))(param_2);
  if ((((lVar7 != 0) && (lVar8 = FUN_144e258f0(param_2), lVar8 != 0)) &&
      (cVar4 = func_0x000144e34620(*(undefined8 *)(lVar8 + 0x170)), cVar4 != '\0')) &&
     (uVar11 < *(ushort *)(param_1 + 0x20))) {
    uVar12 = (ulonglong)uVar11;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar12 * 8);
    if (lVar1 != 0) {
      if ((param_3 != '\0') && (*(int *)(lVar1 + 0x1d4) == *(int *)(lVar7 + 0x1d4))) {
        FUN_141678f00(lVar1);
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
        }
        lVar3 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        lVar9 = *(longlong *)(lVar3 + 0x1448);
        if (lVar9 == 0) {
          auVar13._0_12_ = ZEXT812(0);
          auVar13._12_4_ = 0;
          auStack_88 = ZEXT1632(auVar13);
          auStack_c8 = ZEXT1632(auVar13);
          auStack_a8 = auStack_c8;
          auStack_68 = auStack_88;
        }
        if (*(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
            '\0') {
          func_0x0001455db994();
          lVar9 = *(longlong *)(lVar3 + 0x1448);
        }
        if (lVar9 == 0) {
          auVar14._0_12_ = ZEXT812(0);
          auVar14._12_4_ = 0;
          auStack_108 = ZEXT1632(auVar14);
          auStack_148 = ZEXT1632(auVar14);
          auStack_128 = auStack_148;
          auStack_e8 = auStack_108;
        }
        FUN_144eeb550(lVar8,auStack_c8,auStack_148);
        if (0 < *(int *)(lVar7 + 0x1d4)) {
          iVar10 = 0;
          do {
            func_0x000144da1090(lVar7,iVar10,auStack_14c);
            sVar5 = FUN_140038190(lVar8);
            if ((*(uint *)(auStack_148 + (ulonglong)((uint)(int)sVar5 >> 5) * 4) >>
                 ((int)sVar5 & 0x1fU) & 1) != 0) {
              func_0x000144f43dd0(lVar1);
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 < *(int *)(lVar7 + 0x1d4));
        }
      }
      if (uVar11 < *(ushort *)(param_1 + 0x40)) {
        plVar2 = *(longlong **)((ulonglong)*(byte *)(param_2 + 6) * 8 + 0x14abbe7c0);
        uVar6 = (uint)((ulonglong)((longlong)param_2 - *plVar2) / (ulonglong)*(uint *)(plVar2 + 1))
                & 0x1ffff;
        *(uint *)(*(longlong *)(param_1 + 0x38) + uVar12 * 4) =
             (*(byte *)(param_2 + 6) & 0x1f) << 0x11 | uVar6 |
             (*(uint *)(plVar2[5] + (ulonglong)uVar6 * 4) & 0x7fe0000) << 5;
      }
      if (uVar11 < *(ushort *)(param_1 + 0x30)) {
        *(undefined1 *)(*(longlong *)(param_1 + 0x28) + uVar12) = 1;
      }
    }
  }
  return;
}

