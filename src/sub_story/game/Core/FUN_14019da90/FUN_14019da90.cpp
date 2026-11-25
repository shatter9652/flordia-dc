// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019da90  size: 1691 bytes
// Name:    FUN_14019da90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019da90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019da90(uint *param_1,uint *param_2,ulonglong param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  bool bVar16;
  uint uStack_5c;
  ulonglong uStack_58;
  uint *puStack_50;
  ulonglong uStack_48;
  
  uVar12 = (longlong)param_2 - (longlong)param_1;
  uVar14 = param_3;
  uVar2 = uStack_48;
  uVar11 = uStack_58;
  do {
    uStack_48 = uVar14;
    if ((longlong)uVar12 < 0x81) {
      if ((param_1 != param_2) && (puVar13 = param_1 + 1, puVar13 != param_2)) {
        lVar6 = 0;
        puVar9 = puVar13;
        uStack_58 = uVar11;
        uStack_48 = uVar2;
        do {
          func_0x000144df8490(&uStack_5c,*puVar9);
          if (uStack_5c < *param_1) {
            func_0x000145f40570(puVar13,param_1,lVar6 * 4 + 4);
            *param_1 = uStack_5c;
          }
          else {
            uVar5 = puVar9[-1];
            puVar3 = puVar9;
            while (uStack_5c < uVar5) {
              *puVar3 = uVar5;
              puVar15 = puVar3 + -2;
              puVar3 = puVar3 + -1;
              uVar5 = *puVar15;
            }
            *puVar3 = uStack_5c;
          }
          puVar9 = puVar9 + 1;
          lVar6 = lVar6 + 1;
        } while (puVar9 != param_2);
      }
      return;
    }
    uStack_58 = uVar12 >> 3;
    if ((longlong)uStack_48 < 1) {
      uVar14 = (uVar12 >> 2) - 1;
      uVar8 = uVar14 >> 1;
      uVar10 = uStack_58;
      uStack_58 = uVar11;
      uStack_48 = uVar2;
      do {
        uVar2 = uVar10 - 1;
        func_0x000144df8490(&uStack_5c,param_1[uVar10 - 1]);
        uVar11 = uVar2;
        uVar4 = uVar2;
        if ((longlong)uVar10 <= (longlong)uVar8) {
          do {
            if (param_1[uVar4 * 2 + 2] < param_1[uVar4 * 2 + 1]) {
              uVar11 = uVar4 * 2 + 1;
            }
            else {
              uVar11 = uVar4 * 2 + 2;
            }
            param_1[uVar4] = param_1[uVar11];
            uVar4 = uVar11;
          } while ((longlong)uVar11 < (longlong)uVar8);
        }
        if (((uVar12 & 4) == 0) && (uVar11 == uVar8)) {
          param_1[uVar8] = param_1[(uVar12 >> 2) - 1];
          uVar11 = uVar14;
        }
        while ((longlong)uVar10 <= (longlong)uVar11) {
          uVar4 = (longlong)(uVar11 - 1) >> 1;
          if (uStack_5c <= param_1[uVar4]) break;
          param_1[uVar11] = param_1[uVar4];
          uVar11 = uVar4;
        }
        param_1[uVar11] = uStack_5c;
        bVar16 = 1 < (longlong)uVar10;
        uVar10 = uVar2;
      } while (bVar16);
      if ((longlong)param_2 - (longlong)param_1 < 5) {
        return;
      }
      do {
        func_0x000144df8490(&uStack_5c,param_2[-1]);
        param_2[-1] = *param_1;
        uVar2 = (longlong)(param_2 + -1) - (longlong)param_1;
        uVar12 = ((longlong)uVar2 >> 2) - 1;
        uVar11 = (longlong)uVar12 >> 1;
        if ((longlong)uVar11 < 1) {
          uVar14 = 0;
        }
        else {
          uVar10 = 0;
          do {
            if (param_1[uVar10 * 2 + 2] < param_1[uVar10 * 2 + 1]) {
              uVar14 = uVar10 * 2 + 1;
            }
            else {
              uVar14 = uVar10 * 2 + 2;
            }
            param_1[uVar10] = param_1[uVar14];
            uVar10 = uVar14;
          } while ((longlong)uVar14 < (longlong)uVar11);
        }
        if (((uVar2 & 4) == 0) && (uVar14 == uVar11)) {
          param_1[uVar11] = param_1[((longlong)uVar2 >> 2) + -1];
          uVar14 = uVar12;
        }
        if (0 < (longlong)uVar14) {
          do {
            uVar12 = uVar14 - 1;
            uVar11 = uVar12 >> 1;
            if (uStack_5c <= param_1[uVar11]) goto LAB_14019e109;
            param_1[uVar14] = param_1[uVar11];
            uVar14 = uVar11;
          } while (1 < uVar12);
          uVar14 = 0;
        }
LAB_14019e109:
        param_1[uVar14] = uStack_5c;
        param_2 = param_2 + -1;
        if ((longlong)uVar2 < 5) {
          return;
        }
      } while( true );
    }
    puVar13 = param_2 + -1;
    puVar9 = param_1 + uStack_58;
    lVar6 = (longlong)puVar13 - (longlong)param_1 >> 2;
    puStack_50 = param_2;
    if (lVar6 < 0x29) {
      uVar5 = *puVar9;
      if (uVar5 < *param_1) {
        func_0x000144df8490(&uStack_5c);
        *puVar9 = *param_1;
        *param_1 = uStack_5c;
        uVar5 = *puVar9;
      }
      if (*puVar13 < uVar5) {
        func_0x000144df8490(&uStack_5c,*puVar13);
        *puVar13 = *puVar9;
        *puVar9 = uStack_5c;
        if (uStack_5c < *param_1) {
          func_0x000144df8490(&uStack_5c,*puVar9);
          *puVar9 = *param_1;
          *param_1 = uStack_5c;
        }
      }
    }
    else {
      uVar12 = lVar6 + 1U >> 3;
      uVar5 = param_1[uVar12];
      if (uVar5 < *param_1) {
        func_0x000144df8490(&uStack_5c);
        param_1[uVar12] = *param_1;
        *param_1 = uStack_5c;
        uVar5 = param_1[uVar12];
      }
      if (param_1[uVar12 * 2] < uVar5) {
        func_0x000144df8490(&uStack_5c,param_1[uVar12 * 2]);
        param_1[uVar12 * 2] = param_1[uVar12];
        param_1[uVar12] = uStack_5c;
        if (uStack_5c < *param_1) {
          func_0x000144df8490(&uStack_5c,param_1[uVar12]);
          param_1[uVar12] = *param_1;
          *param_1 = uStack_5c;
        }
      }
      uVar5 = *puVar9;
      if (uVar5 < puVar9[-uVar12]) {
        func_0x000144df8490(&uStack_5c);
        *puVar9 = puVar9[-uVar12];
        puVar9[-uVar12] = uStack_5c;
        uVar5 = *puVar9;
      }
      if (puVar9[uVar12] < uVar5) {
        func_0x000144df8490(&uStack_5c,puVar9[uVar12]);
        puVar9[uVar12] = *puVar9;
        *puVar9 = uStack_5c;
        if (uStack_5c < puVar9[-uVar12]) {
          func_0x000144df8490(&uStack_5c,*puVar9);
          *puVar9 = puVar9[-uVar12];
          puVar9[-uVar12] = uStack_5c;
        }
      }
      uVar5 = puVar13[-uVar12];
      if (uVar5 < puVar13[uVar12 * -2]) {
        func_0x000144df8490(&uStack_5c);
        puVar13[-uVar12] = puVar13[uVar12 * -2];
        puVar13[uVar12 * -2] = uStack_5c;
        uVar5 = puVar13[-uVar12];
      }
      if (*puVar13 < uVar5) {
        func_0x000144df8490(&uStack_5c,*puVar13);
        *puVar13 = puVar13[-uVar12];
        puVar13[-uVar12] = uStack_5c;
        if (uStack_5c < puVar13[uVar12 * -2]) {
          func_0x000144df8490(&uStack_5c,puVar13[-uVar12]);
          puVar13[-uVar12] = puVar13[uVar12 * -2];
          puVar13[uVar12 * -2] = uStack_5c;
        }
      }
      uVar5 = *puVar9;
      if (uVar5 < param_1[uVar12]) {
        func_0x000144df8490(&uStack_5c);
        *puVar9 = param_1[uVar12];
        param_1[uVar12] = uStack_5c;
        uVar5 = *puVar9;
      }
      if (puVar13[-uVar12] < uVar5) {
        func_0x000144df8490(&uStack_5c,puVar13[-uVar12]);
        puVar13[-uVar12] = *puVar9;
        *puVar9 = uStack_5c;
        if (uStack_5c < param_1[uVar12]) {
          func_0x000144df8490(&uStack_5c,*puVar9);
          *puVar9 = param_1[uVar12];
          param_1[uVar12] = uStack_5c;
        }
      }
    }
    do {
      puVar13 = puVar9;
      if (puVar13 <= param_1) break;
      puVar9 = puVar13 + -1;
    } while (*puVar13 == puVar13[-1]);
    puVar9 = param_1 + uStack_58 + 1;
    do {
      puVar7 = puVar9;
      puVar3 = puVar13;
      puVar15 = puVar7;
      if (param_2 <= puVar7) break;
      puVar9 = puVar7 + 1;
    } while (*puVar13 == *puVar7);
LAB_14019dd51:
    for (; puVar9 = puVar13, puVar7 < param_2; puVar7 = puVar7 + 1) {
      if (*puVar7 <= *puVar13) {
        if (*puVar13 != *puVar7) break;
        if (puVar7 != puVar15) {
          func_0x000144df8490(&uStack_5c,*puVar15);
          *puVar15 = *puVar7;
          *puVar7 = uStack_5c;
        }
        puVar15 = puVar15 + 1;
      }
    }
joined_r0x00014019dd92:
    puVar1 = puVar3;
    if (param_1 < puVar1) {
      puVar3 = puVar1 + -1;
      if (*puVar9 <= puVar1[-1]) {
        if (*puVar9 < puVar1[-1]) goto LAB_14019dde4;
        puVar13 = puVar9 + -1;
        bVar16 = puVar1 != puVar9;
        puVar9 = puVar13;
        if (bVar16) {
          func_0x000144df8490(&uStack_5c,*puVar13);
          *puVar13 = *puVar3;
          *puVar3 = uStack_5c;
        }
      }
      goto joined_r0x00014019dd92;
    }
LAB_14019dde4:
    if ((puVar7 != param_2) || (puVar1 != param_1)) {
      if (puVar1 == param_1) {
        uVar5 = *puVar9;
        if (puVar15 != puVar7) {
          func_0x000144df8490(&uStack_5c,uVar5);
          *puVar9 = *puVar15;
          *puVar15 = uStack_5c;
          uVar5 = *puVar9;
        }
        func_0x000144df8490(&uStack_5c,uVar5);
        *puVar9 = *puVar7;
        puVar13 = puVar9 + 1;
        *puVar7 = uStack_5c;
        puVar7 = puVar7 + 1;
        puVar3 = puVar1;
        puVar15 = puVar15 + 1;
      }
      else {
        puVar3 = puVar1 + -1;
        if (puVar7 == param_2) {
          puVar13 = puVar9 + -1;
          if (puVar1 != puVar9) {
            func_0x000144df8490(&uStack_5c,*puVar3);
            *puVar3 = *puVar13;
            *puVar13 = uStack_5c;
          }
          func_0x000144df8490(&uStack_5c,*puVar13);
          *puVar13 = puVar15[-1];
          puVar15[-1] = uStack_5c;
          puVar15 = puVar15 + -1;
        }
        else {
          func_0x000144df8490(&uStack_5c,*puVar7);
          *puVar7 = *puVar3;
          puVar7 = puVar7 + 1;
          *puVar3 = uStack_5c;
          puVar13 = puVar9;
        }
      }
      goto LAB_14019dd51;
    }
    uVar14 = (uStack_48 >> 2) + (uStack_48 >> 1);
    if ((longlong)puVar9 - (longlong)param_1 < (longlong)puStack_50 - (longlong)puVar15) {
      FUN_14019da90(param_1,puVar9,uVar14);
      puVar9 = param_2;
      param_1 = puVar15;
    }
    else {
      FUN_14019da90(puVar15,param_2,uVar14);
    }
    uVar12 = (longlong)puVar9 - (longlong)param_1;
    param_2 = puVar9;
    uVar2 = uStack_48;
    uVar11 = uStack_58;
  } while( true );
}

