// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017dbf0  size: 59 bytes
// Name:    FUN_14017dbf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14017dbf0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
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
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  
  puVar16 = (undefined8 *)func_0x000144f97130(0x70);
  func_0x00014017dc30(puVar16);
  *(undefined8 **)(param_1 + 0xa0) = puVar16;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  uVar13 = param_2[0xb];
  uVar14 = param_2[0xc];
  uVar15 = param_2[0xd];
  puVar16[10] = param_2[10];
  puVar16[0xb] = uVar13;
  puVar16[0xc] = uVar14;
  puVar16[0xd] = uVar15;
  puVar16[8] = uVar9;
  puVar16[9] = uVar10;
  puVar16[10] = uVar11;
  puVar16[0xb] = uVar12;
  puVar16[4] = uVar5;
  puVar16[5] = uVar6;
  puVar16[6] = uVar7;
  puVar16[7] = uVar8;
  *puVar16 = uVar1;
  puVar16[1] = uVar2;
  puVar16[2] = uVar3;
  puVar16[3] = uVar4;
  if (0 < (longlong)*(int *)((longlong)puVar16 + 0x5c)) {
    lVar19 = (longlong)*(int *)((longlong)puVar16 + 0x5c) * 0x10;
    lVar17 = func_0x000144f97130();
    if (lVar17 != 0) {
      lVar18 = 0;
      do {
        *(undefined1 *)(lVar17 + 0xe + lVar18) = 0;
        *(undefined2 *)(lVar17 + 0xc + lVar18) = 1;
        lVar18 = lVar18 + 0x10;
      } while (lVar19 != lVar18);
    }
    puVar16[10] = lVar17;
                    /* WARNING: Could not recover jumptable at 0x000145f40560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    memcpy(lVar17,param_2[10],lVar19);
    return;
  }
  return;
}

