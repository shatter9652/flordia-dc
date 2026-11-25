// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f2280  size: 841 bytes
// Name:    FUN_1400f2280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec6670, FUN_144064b70, FUN_144da25d0, FUN_144da2570, FUN_144ec6720, FUN_140294130
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f2280(undefined8 *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ushort uVar15;
  longlong unaff_GS_OFFSET;
  longlong alStack_168 [2];
  longlong lStack_158;
  undefined1 auStack_150 [128];
  int aiStack_d0 [34];
  undefined4 uStack_48;
  
  puVar2 = (undefined4 *)*param_1;
  cVar6 = FUN_144064b70(*(undefined2 *)(param_2 + 0x74),*(undefined2 *)(param_2 + 0x76),
                        *(undefined2 *)(puVar2 + 7));
  if (cVar6 == '\0') {
LAB_1400f25b3:
    uVar11 = 0;
  }
  else {
    if (param_4 != '\0') {
      lVar8 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1258);
      lVar9 = _DAT_14abcd240 + 0x68;
      if (lVar8 != 0) {
        lVar9 = lVar8;
      }
      if (((*(byte *)(lVar9 + 0x12) & 4) == 0) &&
         ((lVar8 = func_0x000144e95f70(*(undefined4 *)(_DAT_14abcd240 + 0x48),
                                       *(undefined8 *)(_DAT_14abcd240 + 0x50),*puVar2), lVar8 == 0
          || (cVar6 = func_0x000144d9f880(param_2,lVar8), cVar6 == '\0')))) goto LAB_1400f25b3;
    }
    aiStack_d0[0] = 0;
    uStack_48 = 0;
    func_0x00014553b9c0(auStack_150,param_2,param_3);
    if (0 < (longlong)aiStack_d0[0]) {
      puVar1 = (undefined8 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1060);
      lVar8 = (longlong)aiStack_d0[0];
      do {
        lVar9 = *(longlong *)(aiStack_d0 + lVar8 * 2);
        uVar15 = *(ushort *)(lVar9 + 0x28);
        uVar11 = *(undefined8 *)(auStack_150 + lVar8 * 8 + -8);
        if (uVar15 != 0) {
          uVar12 = 0;
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + uVar12 * 8);
            FUN_144da2570(param_1,alStack_168,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x18));
            cVar6 = FUN_144da25d0(*(undefined1 *)(alStack_168[0] + 8));
            if ((cVar6 != '\0') && (lStack_158 != 0)) {
              FUN_140294130(lVar3,uVar11,param_1,alStack_168);
              uVar15 = *(ushort *)(lVar9 + 0x28);
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar15);
        }
        lVar9 = func_0x000144e95f70(*(undefined4 *)(_DAT_14abcd240 + 0x48),
                                    *(undefined8 *)(_DAT_14abcd240 + 0x50),
                                    *(undefined4 *)(lVar9 + 0x68));
        uVar12 = (ulonglong)*(ushort *)(lVar9 + 0x60);
        if (uVar12 != 0) {
          piVar10 = *(int **)(lVar9 + 0x58);
          do {
            uVar13 = uVar12 >> 1;
            uVar14 = ~uVar13 + uVar12;
            uVar12 = uVar13;
            if ((uint)(piVar10 + uVar13 * 4 + 4)[-4] < 0x40862b7e) {
              piVar10 = piVar10 + uVar13 * 4 + 4;
              uVar12 = uVar14;
            }
          } while (0 < (longlong)uVar12);
          if (((piVar10 != *(int **)(lVar9 + 0x58) + (ulonglong)*(ushort *)(lVar9 + 0x60) * 4) &&
              (*piVar10 == 0x40862b7e)) &&
             (plVar4 = *(longlong **)(piVar10 + 2), plVar4 != (longlong *)0x0)) {
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            piVar10 = (int *)*puVar1;
            if (piVar10 != (int *)0x0) {
              if (*(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8) == '\0') {
                func_0x0001455db994();
                piVar10 = (int *)*puVar1;
              }
              iVar7 = *piVar10;
              if (iVar7 != 3) {
                if (*(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8) == '\0') {
                  func_0x0001455db994();
                  iVar7 = *(int *)*puVar1;
                }
                if (iVar7 == 2) {
                  FUN_144ec6720();
                }
              }
            }
            if (*plVar4 == 0) {
              (*(code *)plVar4[1])(uVar11);
            }
            else {
              (*(code *)plVar4[1])(*plVar4,uVar11);
            }
            if (*(char *)(*(longlong *)
                           (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8)
                == '\0') {
              func_0x0001455db994();
            }
            piVar10 = (int *)*puVar1;
            if (piVar10 != (int *)0x0) {
              if (*(char *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
                           8) == '\0') {
                func_0x0001455db994();
                piVar10 = (int *)*puVar1;
              }
              iVar7 = *piVar10;
              if (iVar7 != 3) {
                if (*(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                             + 8) == '\0') {
                  func_0x0001455db994();
                  iVar7 = *(int *)*puVar1;
                }
                if (iVar7 == 2) {
                  FUN_144ec6670();
                }
              }
            }
          }
        }
        bVar5 = 1 < lVar8;
        lVar8 = lVar8 + -1;
      } while (bVar5);
    }
    uVar11 = 1;
  }
  return uVar11;
}

