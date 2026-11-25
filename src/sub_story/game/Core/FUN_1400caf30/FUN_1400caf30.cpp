// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400caf30  size: 618 bytes
// Name:    FUN_1400caf30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14256fa00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400caf30(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  *(undefined4 *)(param_1 + 0x44) = 0;
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 != 0) {
    if ((*(byte *)(lVar5 + 0xb79) & 8) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = func_0x0001450021b0(*(undefined8 *)(lVar5 + 0x688));
    }
    if (((~*(byte *)(param_1 + 0xe1) & 6) == 0) || ((*(byte *)(param_1 + 0x14c) & 0x10) != 0)) {
      uVar10 = (ulonglong)*(uint *)(lVar5 + 0x14c);
      if (uVar10 == 0) {
        return;
      }
      puVar8 = *(uint **)(lVar5 + 0x150);
      lVar12 = 0;
      lVar5 = 0;
      do {
        if (*(int *)((longlong)puVar8 + lVar12 + 4) == -0x60d8609f) {
          uVar9 = *(uint *)((longlong)puVar8 + lVar12);
          uVar11 = (ulonglong)uVar9 & 0x1ffff;
          if (uVar11 == 0x1ffff) {
            lVar5 = 0;
          }
          else {
            plVar2 = *(longlong **)((ulonglong)(uVar9 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
            if (plVar2 == (longlong *)0x0) {
              lVar5 = 0;
            }
            else {
              uVar4 = *(uint *)(plVar2[5] + uVar11 * 4);
              lVar5 = (ulonglong)(uint)((int)plVar2[1] * (int)uVar11) + *plVar2;
              if (uVar9 >> 0x16 != (uVar4 >> 0x11 & 0x3ff) ||
                  (uVar4 & *(uint *)(plVar2 + 6)) != *(uint *)(plVar2 + 6)) {
                lVar5 = 0;
              }
            }
          }
        }
        lVar12 = lVar12 + 0xc;
      } while (uVar10 * 0xc != lVar12);
    }
    else {
      uVar10 = (ulonglong)*(uint *)(lVar5 + 0x14c);
      if (uVar10 == 0) {
        return;
      }
      puVar8 = *(uint **)(lVar5 + 0x150);
      lVar5 = 0;
    }
    puVar1 = puVar8 + uVar10 * 3;
    do {
      uVar9 = *puVar8;
      uVar10 = (ulonglong)uVar9 & 0x1ffff;
      if ((uVar10 == 0x1ffff) ||
         (plVar2 = *(longlong **)((ulonglong)(uVar9 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar2 == (longlong *)0x0)) {
        lVar12 = 0;
      }
      else {
        uVar4 = *(uint *)(plVar2[5] + uVar10 * 4);
        lVar6 = (ulonglong)(uint)((int)plVar2[1] * (int)uVar10) + *plVar2;
        lVar7 = 0;
        if (uVar9 >> 0x16 == (uVar4 >> 0x11 & 0x3ff) &&
            (uVar4 & *(uint *)(plVar2 + 6)) == *(uint *)(plVar2 + 6)) {
          lVar7 = lVar6;
        }
        lVar12 = lVar7;
        if (((lVar7 != 0) && (lVar7 != lVar3)) && (lVar12 = lVar6, lVar7 != lVar5)) {
          uVar9 = *(uint *)(param_1 + 0x44);
          if (uVar9 == *(uint *)(param_1 + 0x40)) {
            uVar4 = 1;
            if (1 < uVar9) {
              uVar4 = uVar9 >> 1;
            }
            FUN_14256fa00(param_1 + 0x40,uVar4 + uVar9);
            uVar9 = *(uint *)(param_1 + 0x44);
          }
          *(uint *)(param_1 + 0x44) = uVar9 + 1;
          *(longlong *)(*(longlong *)(param_1 + 0x48) + (ulonglong)uVar9 * 8) = lVar7;
        }
      }
      if ((*(longlong *)(param_1 + 0x38) != lVar3) && (lVar12 == *(longlong *)(param_1 + 0x38))) {
        *(byte *)(param_1 + 0x14c) = *(byte *)(param_1 + 0x14c) | 0x20;
      }
      puVar8 = puVar8 + 3;
    } while (puVar8 != puVar1);
  }
  return;
}

