// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140153280  size: 273 bytes
// Name:    FUN_140153280
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145efaa20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140153280(longlong param_1,ushort param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ushort *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if ((*(byte *)(param_1 + 0x5074 + (ulonglong)param_2 * 0x38) & 1) == 0) {
    uVar6 = *(uint *)(param_1 + 0x814);
    if ((ulonglong)uVar6 != 0) {
      lVar15 = (ulonglong)uVar6 * 2;
      puVar12 = (ushort *)(param_1 + 0x818);
      do {
        if (*puVar12 == param_2) {
          uVar6 = uVar6 - 1;
          puVar3 = (ushort *)(param_1 + 0x818) + uVar6;
          if (puVar3 != puVar12) {
            *puVar12 = *puVar3;
            uVar6 = *(int *)(param_1 + 0x814) - 1;
          }
          *(uint *)(param_1 + 0x814) = uVar6;
          return;
        }
        puVar12 = puVar12 + 1;
        lVar15 = lVar15 + -2;
      } while (lVar15 != 0);
    }
    return;
  }
  lVar15 = param_1 + 0x5040 + (ulonglong)param_2 * 0x38;
  puVar1 = (uint *)(param_1 + 0x13040);
  lVar7 = FUN_145efaa20(puVar1,*(undefined4 *)(lVar15 + 0x30));
  if (lVar7 == 0) {
    uVar6 = *puVar1;
    uVar9 = uVar6;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x13040);
    uVar18 = (int)((ulonglong)(lVar7 - (param_1 + 0x13048)) >> 3) * -0x55555555;
    uVar6 = uVar18;
    while ((uVar9 = uVar6, uVar10 != uVar18 &&
           (uVar6 = uVar10, uVar9 = uVar18,
           *(int *)(param_1 + 0x13048 + (ulonglong)uVar18 * 0x18) == -1))) {
      uVar18 = uVar18 + 1;
    }
  }
  plVar4 = (longlong *)(param_1 + 0x13050 + (ulonglong)uVar9 * 0x18);
  func_0x000142e8a8a0(plVar4,lVar15 + 0x18);
  if ((*plVar4 == 0) && (plVar4[1] == 0)) {
    while ((uVar10 = uVar6, uVar9 != uVar6 &&
           (uVar10 = uVar9, *(int *)(param_1 + 0x13048 + (ulonglong)uVar9 * 0x18) == -1))) {
      uVar9 = uVar9 + 1;
    }
    puVar8 = (undefined8 *)(param_1 + 0x13048 + (ulonglong)uVar10 * 0x18);
    lVar15 = param_1 + 0x13048;
    uVar6 = *puVar1;
    uVar14 = (ulonglong)
             (uVar6 - 1 & (int)((ulonglong)((longlong)puVar8 + (0x18 - lVar15)) >> 3) * -0x55555555)
    ;
    lVar7 = uVar14 * 0x18;
    uVar9 = *(uint *)(param_1 + 0x13048 + lVar7);
    if (uVar9 != 0xffffffff) {
      puVar13 = (undefined8 *)(param_1 + 0x13048 + lVar7);
      do {
        uVar9 = (uVar9 >> 0x10 ^ uVar9) * -0x7a143595;
        uVar10 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        uVar9 = uVar6 - 1;
        uVar11 = (ulonglong)((uVar10 >> 0x10 ^ uVar10) & uVar9);
        puVar2 = (undefined8 *)(lVar15 + uVar11 * 0x18);
        uVar17 = 0;
        if (puVar8 < puVar2) {
          uVar17 = (ulonglong)uVar6;
        }
        uVar16 = lVar7 + uVar11 * -0x18;
        if (uVar14 < uVar11) {
          uVar16 = (longlong)puVar13 + ((ulonglong)uVar6 * 0x18 - (longlong)puVar2);
        }
        if ((uint)((int)((longlong)puVar8 + (uVar17 * 0x18 - (longlong)puVar2) >> 3) * -0x55555555)
            < (uint)((int)(uVar16 >> 3) * -0x55555555)) {
          puVar8[2] = puVar13[2];
          uVar5 = puVar13[1];
          *puVar8 = *puVar13;
          puVar8[1] = uVar5;
          uVar6 = *puVar1;
          uVar9 = uVar6 - 1;
          puVar8 = puVar13;
        }
        uVar14 = (ulonglong)
                 ((int)((ulonglong)((longlong)puVar13 + (0x18 - lVar15)) >> 3) * -0x55555555 & uVar9
                 );
        lVar7 = uVar14 * 0x18;
        uVar9 = *(uint *)(lVar15 + lVar7);
        puVar13 = (undefined8 *)(lVar15 + lVar7);
      } while (uVar9 != 0xffffffff);
    }
    *(undefined4 *)puVar8 = 0xffffffff;
    *(int *)(param_1 + 0x13044) = *(int *)(param_1 + 0x13044) + -1;
    return;
  }
  return;
}

