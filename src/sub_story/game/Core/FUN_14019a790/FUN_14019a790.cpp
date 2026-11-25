// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a790  size: 63 bytes
// Name:    FUN_14019a790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450551b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019a790(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auVar13 [16];
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1450551b0(*(longlong *)(param_1 + 0x48),param_1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar13;
  if (lVar2 == 0) {
    return;
  }
  plVar3 = *(longlong **)(lVar2 + 0x110);
  uVar5 = (ulonglong)*(uint *)(lVar2 + 0x10c);
  plVar9 = plVar3;
  if (uVar5 == 0) {
code_r0x0001450555a5:
    plVar3 = plVar3 + uVar5;
    if (plVar9 != plVar3) {
      lVar10 = *(longlong *)(lVar2 + 0x110);
      uVar5 = (ulonglong)*(uint *)(lVar2 + 0x10c);
      plVar1 = (longlong *)(lVar10 + uVar5 * 8);
      plVar11 = plVar9;
      plVar12 = plVar3;
      if (plVar1 != plVar3) {
        do {
          plVar4 = (longlong *)*plVar11;
          *plVar11 = *plVar12;
          *plVar12 = 0;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))();
          }
          plVar12 = plVar12 + 1;
          plVar11 = plVar11 + 1;
        } while (plVar12 != plVar1);
        lVar10 = *(longlong *)(lVar2 + 0x110);
        uVar5 = (ulonglong)*(uint *)(lVar2 + 0x10c);
      }
      uVar6 = (ulonglong)((longlong)plVar3 - (longlong)plVar9) >> 3;
      uVar7 = uVar6 & 0xffffffff;
      if (uVar7 != 0) {
        lVar8 = uVar7 * -8;
        do {
          plVar9 = *(longlong **)(lVar10 + uVar5 * 8 + lVar8);
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          lVar8 = lVar8 + 8;
        } while (lVar8 != 0);
        uVar5 = (ulonglong)*(uint *)(lVar2 + 0x10c);
      }
      *(int *)(lVar2 + 0x10c) = (int)uVar5 - (int)uVar6;
    }
  }
  else {
    lVar10 = 0;
    do {
      if (*(longlong *)((longlong)plVar3 + lVar10) == param_1) {
        plVar9 = (longlong *)((longlong)plVar3 + lVar10);
        if (uVar5 * 8 + -8 != lVar10) {
          lVar10 = lVar10 + 8;
          do {
            if (*(longlong *)((longlong)plVar3 + lVar10) != param_1) {
              plVar1 = (longlong *)*plVar9;
              *plVar9 = *(longlong *)((longlong)plVar3 + lVar10);
              *(undefined8 *)((longlong)plVar3 + lVar10) = 0;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x10))();
              }
              plVar9 = plVar9 + 1;
            }
            lVar10 = lVar10 + 8;
          } while (uVar5 * 8 - lVar10 != 0);
        }
        goto code_r0x0001450555a5;
      }
      lVar10 = lVar10 + 8;
    } while (uVar5 * 8 - lVar10 != 0);
  }
  return;
}

