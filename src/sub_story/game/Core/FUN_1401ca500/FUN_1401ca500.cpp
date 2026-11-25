// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ca500  size: 646 bytes
// Name:    FUN_1401ca500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143dde930
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401ca500(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  uVar15 = 0;
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar10 = (ulonglong)uVar1;
  piVar3 = *(int **)(param_1 + 0x50);
  piVar6 = piVar3;
  if (uVar10 == 0) {
LAB_1401ca558:
    if ((uint)uVar15 != uVar1) {
      piVar6 = piVar3 + (uVar15 & 0xffffffff) * 0x1a;
      do {
        if (*(longlong *)(piVar6 + 4) != *(longlong *)(piVar6 + 2)) {
          uVar7 = *(ulonglong *)(piVar6 + 6);
          if (uVar7 == 0) {
            iVar13 = 0;
            bVar5 = false;
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            uVar12 = 0;
            bVar5 = false;
            uVar14 = 0;
            do {
              uVar8 = uVar12 >> 5 & 0x7ffffff;
              uVar2 = *(uint *)(*(longlong *)(piVar6 + 0x12) + uVar8 * 4);
              if ((uVar2 >> ((uint)uVar12 & 0x1f) & 1) != 0) {
                uVar11 = 1 << ((uint)uVar12 & 0x1f);
                if ((*(uint *)(*(longlong *)(piVar6 + 0x16) + uVar8 * 4) & uVar11) == 0) {
                  *(uint *)(*(longlong *)(piVar6 + 0x12) + uVar8 * 4) = ~uVar11 & uVar2;
                  (**(code **)(piVar6 + 0xe))
                            ((-(ulonglong)*(byte *)((longlong)piVar6 + 0x2e) &
                             ((ulonglong)*(byte *)((longlong)piVar6 + 0x2e) - 1) +
                             *(longlong *)(piVar6 + 8) * (uVar12 & 0xffffffff) +
                             *(longlong *)(piVar6 + 2) + (ulonglong)*(ushort *)(piVar6 + 0xb)) -
                             (ulonglong)*(ushort *)(piVar6 + 0xb),*(undefined8 *)(piVar6 + 0x10));
                  func_0x000145f40580((uVar12 & 0xffffffff) * *(longlong *)(piVar6 + 8) +
                                      *(longlong *)(piVar6 + 2),0);
                  uVar7 = *(ulonglong *)(piVar6 + 6);
                }
                else {
                  uVar14 = uVar12;
                  if (!bVar5) {
                    bVar5 = true;
                    uVar9 = uVar12;
                  }
                }
              }
              iVar13 = (int)uVar14;
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar7);
          }
          if (piVar6[0x19] != 0) {
            func_0x000145f40580(*(undefined8 *)(piVar6 + 0x16),0,(ulonglong)(uint)piVar6[0x18] << 2)
            ;
          }
          uVar7 = *(ulonglong *)(piVar6 + 2);
          if (bVar5) {
            lVar4 = *(longlong *)(piVar6 + 8);
            uVar9 = (-(ulonglong)*(byte *)((longlong)piVar6 + 0x2e) &
                    ((ulonglong)*(byte *)((longlong)piVar6 + 0x2e) - 1) +
                    (uVar9 & 0xffffffff) * lVar4 + (ulonglong)*(ushort *)(piVar6 + 0xb) + uVar7) -
                    (ulonglong)*(ushort *)(piVar6 + 0xb);
            if (uVar9 < *(ulonglong *)(param_1 + 0xf8)) {
              *(ulonglong *)(param_1 + 0xf8) = uVar9;
            }
            uVar7 = uVar7 + lVar4 * (ulonglong)(iVar13 + 1);
            if (*(ulonglong *)(param_1 + 0x100) < uVar7) {
              *(ulonglong *)(param_1 + 0x100) = uVar7;
            }
          }
          *(ulonglong *)(piVar6 + 4) = uVar7;
        }
        uVar2 = (uint)uVar15;
        while (uVar7 = uVar10, uVar11 = uVar1, uVar2 != uVar1) {
          while (uVar11 = uVar2 + 1, uVar2 = uVar11, uVar11 < uVar1) {
            uVar7 = (ulonglong)uVar11;
            if (piVar3[uVar7 * 0x1a] != 0) goto LAB_1401ca727;
          }
        }
LAB_1401ca727:
        uVar15 = (ulonglong)uVar11;
        piVar6 = piVar3 + uVar7 * 0x1a;
      } while (piVar6 != (int *)((ulonglong)*(uint *)(param_1 + 0x48) * 0x68 +
                                *(longlong *)(param_1 + 0x50)));
    }
  }
  else {
    do {
      if (*piVar6 != 0) goto LAB_1401ca558;
      uVar15 = uVar15 + 1;
      piVar6 = piVar6 + 0x1a;
    } while (uVar10 != uVar15);
  }
  *(undefined1 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    uVar10 = 0;
    do {
      FUN_143dde930(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x70) + uVar10 * 4));
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_1 + 0x6c));
  }
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

