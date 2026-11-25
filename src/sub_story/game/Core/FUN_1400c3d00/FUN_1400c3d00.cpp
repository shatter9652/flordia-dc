// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3d00  size: 147 bytes
// Name:    FUN_1400c3d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f5cd20, FUN_1400c3da0, FUN_1400c3e00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c3d00(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong in_stack_ffffffffffffffc8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar14;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar15;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  lVar8 = (ulonglong)(*(int *)(param_1 + 4) - 1) * 0x10;
  FUN_1400c3e00(*(undefined8 *)(*(longlong *)(param_1 + 8) + lVar8),
                *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + lVar8));
  FUN_1400c3da0(*(undefined8 *)(param_1 + 0x90));
  plVar3 = *(longlong **)(param_1 + 0x90);
  bVar1 = *(byte *)((longlong)plVar3 + 0x22e);
  uVar9 = func_0x000144daa200(plVar3);
  (**(code **)(*plVar3 + 0x50))
            (plVar3,uVar9,0,0,in_stack_ffffffffffffffc8 & 0xffffffffffffff00,(bVar1 & 0x10) >> 4,
             CONCAT44(uVar14,0x3f800000),CONCAT44(uVar15,0x3f800000));
  FUN_144f5cd20(*(undefined8 *)(param_1 + 0x90));
  lVar8 = *(longlong *)(param_1 + 0x90);
  if ((ulonglong)*(uint *)(lVar8 + 0x9c) != 0) {
    plVar11 = *(longlong **)(lVar8 + 0xa0);
    plVar3 = plVar11 + (ulonglong)*(uint *)(lVar8 + 0x9c) * 3;
    do {
      iVar2 = *(int *)(*plVar11 + 0x24);
      if ((ulonglong)*(uint *)(lVar8 + 0x16c) != 0) {
        lVar12 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar8 + 0x170) + lVar12) == iVar2) goto code_r0x000144f5ce49;
          lVar12 = lVar12 + 4;
        } while ((ulonglong)*(uint *)(lVar8 + 0x16c) << 2 != lVar12);
      }
      uVar7 = *(uint *)(lVar8 + 0x19c);
      if (uVar7 == *(uint *)(lVar8 + 0x198)) {
        uVar13 = uVar7 >> 1;
        if (uVar7 < 2) {
          uVar13 = 1;
        }
        uVar13 = uVar13 + uVar7;
        puVar10 = (undefined8 *)(lVar8 + 0x1a8);
        if (8 < uVar13) {
          puVar10 = (undefined8 *)func_0x0001452d88f0((ulonglong)uVar13 << 2);
          uVar7 = *(uint *)(lVar8 + 0x19c);
        }
        if (uVar7 != 0) {
          puVar4 = *(undefined8 **)(lVar8 + 0x1a0);
          if (uVar7 == 8) {
            uVar9 = puVar4[1];
            uVar5 = puVar4[2];
            uVar6 = puVar4[3];
            *puVar10 = *puVar4;
            puVar10[1] = uVar9;
            puVar10[2] = uVar5;
            puVar10[3] = uVar6;
          }
          else {
            func_0x000145f40560(puVar10);
          }
        }
        if ((undefined8 *)(lVar8 + 0x1a8) != *(undefined8 **)(lVar8 + 0x1a0)) {
          func_0x000144f5d9a0(*(undefined8 **)(lVar8 + 0x1a0));
        }
        *(undefined8 **)(lVar8 + 0x1a0) = puVar10;
        *(uint *)(lVar8 + 0x198) = uVar13;
        uVar7 = *(uint *)(lVar8 + 0x19c);
      }
      else {
        puVar10 = *(undefined8 **)(lVar8 + 0x1a0);
      }
      *(uint *)(lVar8 + 0x19c) = uVar7 + 1;
      *(int *)((longlong)puVar10 + (ulonglong)uVar7 * 4) = iVar2;
code_r0x000144f5ce49:
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar3);
  }
  return;
}

