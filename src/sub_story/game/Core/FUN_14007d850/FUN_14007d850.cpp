// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d850  size: 329 bytes
// Name:    FUN_14007d850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007d850(uint *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined8 *puVar18;
  uint uVar19;
  
  uVar17 = param_1[1];
  lVar15 = *(longlong *)(param_1 + 2);
  lVar14 = func_0x00014007b480(uVar17,lVar15,*param_2);
  if (lVar14 == 0) {
    if (uVar17 == *param_1) {
      uVar19 = 1;
      if (1 < uVar17) {
        uVar19 = uVar17 >> 1;
      }
      lVar15 = func_0x000144d9c140(8,(ulonglong)(uVar19 + uVar17) * 0x60);
      if ((ulonglong)param_1[1] != 0) {
        puVar18 = *(undefined8 **)(param_1 + 2);
        lVar14 = (ulonglong)param_1[1] * 0x60;
        lVar16 = 0;
        do {
          if (lVar15 + lVar16 != 0) {
            *(undefined **)(lVar15 + lVar16) = &UNK_14653f778;
            puVar1 = (undefined8 *)((longlong)puVar18 + lVar16 + 8);
            uVar3 = *puVar1;
            uVar4 = puVar1[1];
            uVar5 = puVar1[2];
            uVar6 = puVar1[3];
            puVar1 = (undefined8 *)((longlong)puVar18 + lVar16 + 0x28);
            uVar7 = puVar1[1];
            uVar8 = puVar1[2];
            uVar9 = puVar1[3];
            puVar2 = (undefined8 *)((longlong)puVar18 + lVar16 + 0x39);
            uVar10 = *puVar2;
            uVar11 = puVar2[1];
            uVar12 = puVar2[2];
            uVar13 = puVar2[3];
            puVar2 = (undefined8 *)(lVar15 + 0x28 + lVar16);
            *puVar2 = *puVar1;
            puVar2[1] = uVar7;
            puVar2[2] = uVar8;
            puVar2[3] = uVar9;
            puVar1 = (undefined8 *)(lVar15 + 8 + lVar16);
            *puVar1 = uVar3;
            puVar1[1] = uVar4;
            puVar1[2] = uVar5;
            puVar1[3] = uVar6;
            puVar1 = (undefined8 *)(lVar15 + 0x39 + lVar16);
            *puVar1 = uVar10;
            puVar1[1] = uVar11;
            puVar1[2] = uVar12;
            puVar1[3] = uVar13;
          }
          lVar16 = lVar16 + 0x60;
        } while (lVar14 != lVar16);
        do {
          (**(code **)*puVar18)(puVar18,0);
          puVar18 = puVar18 + 0xc;
          lVar14 = lVar14 + -0x60;
        } while (lVar14 != 0);
      }
      if (*(longlong *)(param_1 + 2) != 0) {
        func_0x000144d9c130();
      }
      *(longlong *)(param_1 + 2) = lVar15;
      *param_1 = uVar19 + uVar17;
      uVar17 = param_1[1];
    }
    param_1[1] = uVar17 + 1;
    lVar14 = (ulonglong)uVar17 * 0x60 + lVar15;
    if (lVar15 != 0) {
      func_0x00014007d9f0(lVar14);
    }
  }
  func_0x00014007d9a0(lVar14);
  return;
}

