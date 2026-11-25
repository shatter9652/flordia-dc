// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401667d0  size: 664 bytes
// Name:    FUN_1401667d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401667d0, FUN_1424d59f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401667d0(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puStack_48;
  ulonglong *puStack_40;
  
  uVar2 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar2 < 0x101) {
LAB_1401667ec:
    puVar4 = param_1 + 1;
    puVar8 = param_1;
    if (param_1 + 1 != param_2 && param_1 != param_2) {
      do {
        puVar3 = puVar4;
        uVar2 = puVar8[1];
        if (uVar2 < *param_1) {
          func_0x000140301860(param_1,puVar3,puVar8 + 2);
          puVar4 = param_1;
        }
        else {
          uVar10 = puVar3[-1];
          puVar4 = puVar3;
          while (uVar2 < uVar10) {
            *puVar4 = uVar10;
            puVar8 = puVar4 + -2;
            puVar4 = puVar4 + -1;
            uVar10 = *puVar8;
          }
        }
        *puVar4 = uVar2;
        puVar4 = puVar3 + 1;
        puVar8 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  else {
    if (0 < (longlong)param_3) {
      puVar4 = param_2;
      do {
        FUN_1424d59f0(&puStack_48,param_1,puVar4);
        puVar8 = puStack_40;
        param_2 = puStack_48;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)puStack_48 - (longlong)param_1 < (longlong)puVar4 - (longlong)puStack_40) {
          FUN_1401667d0(param_1,puStack_48,param_3);
          param_1 = puVar8;
          param_2 = puVar4;
        }
        else {
          FUN_1401667d0(puStack_40,puVar4,param_3);
        }
        uVar2 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar2 < 0x101) goto LAB_1401667ec;
        puVar4 = param_2;
      } while (param_3 != 0);
    }
    uVar10 = (uVar2 >> 3) - 1;
    uVar11 = uVar10 >> 1;
    uVar5 = uVar2 >> 4;
    do {
      uVar6 = uVar5 - 1;
      uVar9 = param_1[uVar5 - 1];
      uVar7 = uVar6;
      uVar12 = uVar6;
      if ((longlong)uVar5 <= (longlong)uVar11) {
        do {
          if (param_1[uVar12 * 2 + 2] < param_1[uVar12 * 2 + 1]) {
            uVar7 = uVar12 * 2 + 1;
          }
          else {
            uVar7 = uVar12 * 2 + 2;
          }
          param_1[uVar12] = param_1[uVar7];
          uVar12 = uVar7;
        } while ((longlong)uVar7 < (longlong)uVar11);
      }
      if (((uVar2 & 8) == 0) && (uVar7 == uVar11)) {
        param_1[uVar11] = param_1[(uVar2 >> 3) - 1];
        uVar7 = uVar10;
      }
      while ((longlong)uVar5 <= (longlong)uVar7) {
        uVar12 = (longlong)(uVar7 - 1) >> 1;
        if (uVar9 <= param_1[uVar12]) break;
        param_1[uVar7] = param_1[uVar12];
        uVar7 = uVar12;
      }
      param_1[uVar7] = uVar9;
      bVar1 = 1 < (longlong)uVar5;
      uVar5 = uVar6;
    } while (bVar1);
    uVar2 = (longlong)param_2 - (longlong)param_1;
    while (8 < (longlong)uVar2) {
      uVar5 = param_2[-1];
      param_2[-1] = *param_1;
      param_2 = param_2 + -1;
      uVar2 = (longlong)param_2 - (longlong)param_1;
      uVar10 = ((longlong)uVar2 >> 3) - 1;
      uVar11 = (longlong)uVar10 >> 1;
      if ((longlong)uVar11 < 1) {
        uVar7 = 0;
      }
      else {
        uVar9 = 0;
        do {
          if (param_1[uVar9 * 2 + 2] < param_1[uVar9 * 2 + 1]) {
            uVar7 = uVar9 * 2 + 1;
          }
          else {
            uVar7 = uVar9 * 2 + 2;
          }
          param_1[uVar9] = param_1[uVar7];
          uVar9 = uVar7;
        } while ((longlong)uVar7 < (longlong)uVar11);
      }
      if (((uVar2 & 8) == 0) && (uVar7 == uVar11)) {
        param_1[uVar11] = param_1[((longlong)uVar2 >> 3) + -1];
        uVar7 = uVar10;
      }
      if (0 < (longlong)uVar7) {
        do {
          uVar10 = uVar7 - 1;
          uVar11 = uVar10 >> 1;
          if (uVar5 <= param_1[uVar11]) goto LAB_140166a4d;
          param_1[uVar7] = param_1[uVar11];
          uVar7 = uVar11;
        } while (1 < uVar10);
        uVar7 = 0;
      }
LAB_140166a4d:
      param_1[uVar7] = uVar5;
    }
  }
  return;
}

