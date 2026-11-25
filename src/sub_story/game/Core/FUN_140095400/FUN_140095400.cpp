// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140095400  size: 388 bytes
// Name:    FUN_140095400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a4ab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140095400(undefined8 *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = (longlong)param_3 - (longlong)param_2 >> 4;
  FUN_1456a4ab0(param_2,param_2 + lVar9,param_3 + -1);
  puVar3 = param_2 + lVar9;
  do {
    puVar6 = puVar3;
    if (puVar6 <= param_2) break;
    puVar3 = puVar6 + -1;
  } while (*puVar6 == puVar6[-1]);
  puVar3 = param_2 + lVar9 + 1;
  do {
    puVar4 = puVar3;
    puVar5 = puVar4;
    puVar8 = puVar6;
    if (param_3 <= puVar4) break;
    puVar3 = puVar4 + 1;
  } while (*puVar6 == *puVar4);
LAB_140095465:
  do {
    puVar3 = puVar6;
    if (puVar5 < param_3) {
      uVar7 = *puVar5;
      if (uVar7 <= *puVar6) {
        if (*puVar6 != uVar7) goto joined_r0x00014009546d;
        if (puVar5 != puVar4) {
          uVar1 = *puVar4;
          *puVar4 = uVar7;
          *puVar5 = uVar1;
        }
        puVar4 = puVar4 + 1;
      }
      puVar5 = puVar5 + 1;
      goto LAB_140095465;
    }
joined_r0x00014009546d:
    while (puVar2 = puVar8, param_2 < puVar2) {
      puVar8 = puVar2 + -1;
      uVar7 = puVar2[-1];
      if (*puVar3 <= uVar7) {
        if (*puVar3 < uVar7) break;
        puVar6 = puVar3 + -1;
        bVar10 = puVar2 != puVar3;
        puVar3 = puVar6;
        if (bVar10) {
          uVar1 = *puVar6;
          *puVar6 = uVar7;
          *puVar8 = uVar1;
        }
      }
    }
    if ((puVar5 == param_3) && (puVar2 == param_2)) {
      *param_1 = puVar3;
      param_1[1] = puVar4;
      return;
    }
    if (puVar2 == param_2) {
      uVar7 = *puVar3;
      if (puVar4 != puVar5) {
        *puVar3 = *puVar4;
        *puVar4 = uVar7;
        uVar7 = *puVar3;
      }
      puVar4 = puVar4 + 1;
      *puVar3 = *puVar5;
      puVar6 = puVar3 + 1;
      *puVar5 = uVar7;
      puVar5 = puVar5 + 1;
      puVar8 = param_2;
    }
    else {
      puVar8 = puVar2 + -1;
      if (puVar5 == param_3) {
        puVar6 = puVar3 + -1;
        uVar7 = puVar3[-1];
        if (puVar2 != puVar3) {
          uVar7 = *puVar8;
          *puVar8 = puVar3[-1];
          *puVar6 = uVar7;
        }
        *puVar6 = puVar4[-1];
        puVar4[-1] = uVar7;
        puVar4 = puVar4 + -1;
      }
      else {
        uVar7 = *puVar5;
        *puVar5 = *puVar8;
        *puVar8 = uVar7;
        puVar5 = puVar5 + 1;
        puVar6 = puVar3;
      }
    }
  } while( true );
}

