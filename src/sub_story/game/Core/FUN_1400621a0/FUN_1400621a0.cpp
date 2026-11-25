// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400621a0  size: 312 bytes
// Name:    FUN_1400621a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400621a0(longlong param_1,uint param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  
  uVar3 = *(uint *)(param_1 + 0x90);
  uVar4 = *(uint *)(param_1 + 0x94);
  if (uVar4 < uVar3) {
    uVar5 = *param_3;
    uVar6 = param_3[1];
    lVar19 = param_1 + 0xa0;
    uVar18 = (ulonglong)param_2;
    uVar7 = *param_5;
    uVar8 = param_5[1];
    if (uVar4 == param_2) {
      puVar16 = (undefined8 *)(uVar18 * 0x40 + lVar19);
    }
    else {
      lVar17 = (ulonglong)(uVar4 - 1) * 0x40;
      puVar1 = (undefined8 *)(lVar19 + lVar17);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar1 = (undefined8 *)(param_1 + 0xc0 + lVar17);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      puVar16 = (undefined8 *)(uVar18 * 0x40 + lVar19);
      puVar2 = (undefined8 *)(param_1 + 0xc0 + (ulonglong)uVar4 * 0x40);
      *puVar2 = *puVar1;
      puVar2[1] = uVar13;
      puVar2[2] = uVar14;
      puVar2[3] = uVar15;
      puVar1 = (undefined8 *)(lVar19 + (ulonglong)uVar4 * 0x40);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      func_0x000145f40570(puVar16 + 8,puVar16);
      param_2 = *(uint *)(param_1 + 0x94);
    }
    lVar19 = uVar18 * 0x40;
    *puVar16 = uVar5;
    puVar16[1] = uVar6;
    puVar16[2] = uVar7;
    puVar16[3] = uVar8;
    *(undefined8 *)(param_1 + 0xc0 + lVar19) = param_4;
    *(undefined4 *)(param_1 + 200 + lVar19) = param_6;
    *(undefined4 *)(param_1 + 0xcc + lVar19) = param_7;
    *(undefined8 *)(param_1 + 0xd0 + lVar19) = param_8;
    *(uint *)(param_1 + 0x94) = param_2 + 1;
  }
  return uVar4 < uVar3;
}

