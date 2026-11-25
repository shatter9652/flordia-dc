// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140087b10  size: 501 bytes
// Name:    FUN_140087b10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140087b10(float *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puStack_58;
  
  uVar4 = func_0x000144efd510();
  lVar11 = *(longlong *)(param_1 + 6);
  puVar13 = *(undefined8 **)(param_1 + 2);
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar4;
  lVar12 = uVar9 * 2;
  puStack_58 = *(undefined8 **)(lVar11 + 8 + uVar9 * 0x10);
  puVar8 = puVar13;
  if (puStack_58 == puVar13) {
LAB_140087b81:
    lVar7 = *(longlong *)(param_1 + 4);
    if (lVar7 != 0x7ffffffffffffff) {
      puVar5 = (undefined8 *)func_0x000144f97130(0x20);
      lVar3 = param_3[1];
      puVar5[2] = *param_3;
      puVar5[3] = lVar3;
      if (*param_1 < (float)(lVar7 + 1) / (float)*(ulonglong *)(param_1 + 0xe)) {
        func_0x0001456a4490(param_1);
        uVar4 = uVar4 & *(ulonglong *)(param_1 + 0xc);
        lVar11 = *(longlong *)(param_1 + 6);
        puVar2 = *(undefined8 **)(param_1 + 2);
        lVar7 = uVar4 * 2 + 1;
        lVar12 = uVar4 * 2;
        puStack_58 = *(undefined8 **)(lVar11 + 8 + uVar4 * 0x10);
        puVar8 = puVar2;
        puVar13 = puStack_58;
        if (puStack_58 != puVar2) {
          puVar8 = puStack_58;
          puVar13 = puVar2;
          if (puVar5[2] != puStack_58[2]) {
            do {
              if (puVar8 == *(undefined8 **)(lVar11 + uVar4 * 0x10)) goto LAB_140087c15;
              puVar8 = (undefined8 *)puVar8[1];
            } while (puVar5[2] != puVar8[2]);
          }
          puVar8 = (undefined8 *)*puVar8;
        }
      }
      else {
        lVar7 = uVar9 * 2 + 1;
      }
LAB_140087c15:
      puVar2 = (undefined8 *)puVar8[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar5 = puVar8;
      plVar10 = (longlong *)(lVar11 + lVar12 * 8);
      plVar1 = (longlong *)(lVar11 + lVar7 * 8);
      puVar5[1] = puVar2;
      *puVar2 = puVar5;
      puVar8[1] = puVar5;
      if ((undefined8 *)*plVar10 == puVar13) {
        *plVar10 = (longlong)puVar5;
        plVar10 = plVar1;
      }
      else if (((undefined8 *)*plVar10 != puVar8) &&
              (uVar6 = 1, plVar10 = plVar1, puStack_58 != puVar2)) goto LAB_140087c59;
      uVar6 = 1;
      *plVar10 = (longlong)puVar5;
      goto LAB_140087c59;
    }
    func_0x000145f3fcb0();
    puVar5 = puStack_58;
  }
  else {
    puVar5 = puStack_58;
    if (*param_3 != puStack_58[2]) {
      uVar6 = 0;
      do {
        puVar8 = puVar5;
        if (puVar5 == *(undefined8 **)(lVar11 + uVar9 * 0x10)) goto LAB_140087b81;
        puVar5 = (undefined8 *)puVar5[1];
      } while (*param_3 != puVar5[2]);
      goto LAB_140087c59;
    }
  }
  uVar6 = 0;
LAB_140087c59:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = uVar6;
  return;
}

