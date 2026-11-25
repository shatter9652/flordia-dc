// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b890  size: 552 bytes
// Name:    FUN_14011b890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401da3f0, FUN_1401da390
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011b890(uint *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (param_2 < 2) {
    puVar4 = param_1 + 4;
  }
  else {
    puVar4 = (uint *)FUN_1401da3f0((ulonglong)param_2 << 6);
  }
  if ((ulonglong)param_1[1] != 0) {
    lVar3 = *(longlong *)(param_1 + 2);
    lVar10 = (ulonglong)param_1[1] << 6;
    lVar9 = 0;
    lVar11 = lVar3 + 0x10;
    lVar8 = lVar3;
    do {
      if ((longlong)puVar4 + lVar9 != 0) {
        lVar1 = (longlong)puVar4 + lVar9 + 0x10;
        *(longlong *)((longlong)puVar4 + lVar9 + 8) = lVar1;
        *(undefined8 *)((longlong)puVar4 + lVar9) = 4;
        uVar2 = *(undefined8 *)(lVar3 + lVar9);
        uVar6 = (uint)((ulonglong)uVar2 >> 0x20);
        if ((uint)uVar2 < 5 && uVar6 != 0) {
          lVar5 = lVar1;
          if (4 < uVar6) {
            *(longlong *)((longlong)puVar4 + lVar9 + 8) = lVar1;
            *(undefined4 *)((longlong)puVar4 + lVar9) = 4;
            lVar5 = func_0x000144d9c140(8,(ulonglong)uVar6 << 3);
            if (lVar5 == 0) {
              lVar5 = lVar1;
            }
            *(longlong *)((longlong)puVar4 + lVar9 + 8) = lVar5;
            *(uint *)((longlong)puVar4 + lVar9) = uVar6;
            uVar6 = *(uint *)(lVar3 + 4 + lVar9);
          }
          func_0x000145f40560(lVar5,*(undefined8 *)(lVar3 + 8 + lVar9),(ulonglong)uVar6 << 3);
          lVar5 = *(longlong *)((longlong)puVar4 + lVar9 + 8);
          plVar7 = (longlong *)(lVar8 + 8);
          *(undefined8 *)((longlong)puVar4 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
          *(undefined8 *)(lVar3 + lVar9) = 0;
          if ((lVar1 != lVar5) && (lVar5 != 0)) {
            func_0x000144d9c130();
          }
        }
        else {
          *(undefined8 *)((longlong)puVar4 + lVar9) = uVar2;
          *(undefined8 *)(lVar3 + lVar9) = 0;
          plVar7 = (longlong *)(lVar3 + 8 + lVar9);
        }
        *(longlong *)((longlong)puVar4 + lVar9 + 8) = lVar1;
        if (lVar11 + lVar9 != *plVar7) {
          *(longlong *)((longlong)puVar4 + lVar9 + 8) = *plVar7;
          *plVar7 = lVar11 + lVar9;
        }
        *(undefined4 *)(lVar3 + lVar9) = 4;
        uVar2 = *(undefined8 *)(lVar3 + 0x30 + lVar9);
        *(undefined8 *)((longlong)puVar4 + lVar9 + 0x36) = *(undefined8 *)(lVar3 + 0x36 + lVar9);
        *(undefined8 *)((longlong)puVar4 + lVar9 + 0x30) = uVar2;
      }
      lVar8 = lVar8 + 0x40;
      lVar9 = lVar9 + 0x40;
    } while (lVar10 != lVar9);
    do {
      *(undefined4 *)(lVar11 + -0xc) = 0;
      if (*(longlong *)(lVar11 + -8) != 0 && lVar11 != *(longlong *)(lVar11 + -8)) {
        func_0x000144d9c130();
      }
      *(undefined4 *)(lVar11 + -0x10) = 4;
      *(undefined8 *)(lVar11 + -8) = 0;
      lVar11 = lVar11 + 0x40;
      lVar10 = lVar10 + -0x40;
    } while (lVar10 != 0);
  }
  if (param_1 + 4 != *(uint **)(param_1 + 2)) {
    FUN_1401da390();
  }
  *(uint **)(param_1 + 2) = puVar4;
  *param_1 = param_2;
  return;
}

