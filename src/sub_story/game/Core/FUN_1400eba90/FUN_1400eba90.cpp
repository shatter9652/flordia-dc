// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eba90  size: 318 bytes
// Name:    FUN_1400eba90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1458dce90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400eba90(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  
  if (param_2 == param_1) {
    return;
  }
  uVar17 = param_1[1];
  uVar3 = *param_1;
  uVar4 = param_2[1];
  if ((uVar17 == 0 || uVar3 != 0) && (uVar4 == 0 || *param_2 != 0)) {
    *param_1 = *param_2;
    *param_2 = uVar3;
    param_1[1] = uVar4;
    param_2[1] = uVar17;
    uVar5 = *(undefined8 *)(param_1 + 2);
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = uVar5;
    return;
  }
  if (uVar4 < uVar17) {
    puVar15 = param_2;
    puVar18 = param_1;
    uVar16 = uVar17;
    uVar13 = uVar4;
    if (*param_2 < uVar17) {
      FUN_1458dce90(param_2,uVar17);
      uVar16 = param_1[1];
    }
  }
  else {
    if (uVar4 <= uVar17) goto LAB_1400ebb77;
    puVar15 = param_1;
    puVar18 = param_2;
    uVar16 = uVar4;
    uVar13 = uVar17;
    if (uVar3 < uVar4) {
      FUN_1458dce90(param_1,uVar4);
      uVar16 = param_2[1];
    }
  }
  uVar17 = uVar13;
  lVar14 = (ulonglong)uVar17 * 0x20;
  func_0x000145f40560(*(longlong *)(puVar15 + 2) + lVar14,lVar14 + *(longlong *)(puVar18 + 2),
                      ((ulonglong)uVar16 - (ulonglong)uVar17) * 0x20);
LAB_1400ebb77:
  if (uVar17 != 0) {
    lVar14 = 0;
    do {
      lVar6 = *(longlong *)(param_2 + 2);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 2) + lVar14);
      uVar5 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar1 = (undefined8 *)(lVar6 + lVar14);
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 2) + lVar14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar1 = (undefined8 *)(lVar6 + lVar14);
      *puVar1 = uVar5;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      lVar14 = lVar14 + 0x20;
    } while ((ulonglong)uVar17 << 5 != lVar14);
  }
  uVar5 = *(undefined8 *)param_1;
  *(undefined8 *)param_1 = *(undefined8 *)param_2;
  *(undefined8 *)param_2 = uVar5;
  return;
}

