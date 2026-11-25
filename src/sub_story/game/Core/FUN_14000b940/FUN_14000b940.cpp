// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000b940  size: 410 bytes
// Name:    FUN_14000b940
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14000b940(longlong param_1,uint param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  bool bVar10;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x3e18);
  if ((uVar2 != 0) && ((param_2 & 0x1ffff) != 0x1ffff)) {
    puVar6 = *(uint **)(param_1 + 0x3e10);
    uVar7 = (param_2 >> 0x10 ^ param_2) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    puVar8 = puVar6 + (*(uint *)(param_1 + 0x3e18) - 1 & (uVar7 >> 0x10 ^ uVar7));
    uVar7 = *puVar8;
    bVar10 = (~uVar7 & 0x1ffff) == 0;
    if (uVar7 != param_2 && !bVar10) {
      do {
        puVar8 = puVar8 + 1;
        if (puVar8 == puVar6 + uVar2) {
          puVar8 = puVar6;
        }
        uVar7 = *puVar8;
        bVar10 = (~uVar7 & 0x1ffff) == 0;
      } while (uVar7 != param_2 && !bVar10);
    }
    if (!bVar10) {
      puVar3 = puVar8 + 1;
      if (puVar8 + 1 == puVar6 + uVar2) {
        puVar3 = puVar6;
      }
      uVar9 = *puVar3;
      if ((~uVar9 & 0x1ffff) != 0) {
        do {
          uVar7 = (uVar9 >> 0x10 ^ uVar9) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          puVar1 = puVar6 + ((int)uVar2 - 1U & (uVar7 >> 0x10 ^ uVar7));
          uVar5 = 0;
          if (puVar1 < puVar8) {
            uVar5 = uVar2;
          }
          uVar4 = 0;
          if (puVar1 < puVar3) {
            uVar4 = uVar2;
          }
          if ((longlong)puVar8 + (uVar5 * 4 - (longlong)puVar1) <
              (longlong)puVar3 + (uVar4 * 4 - (longlong)puVar1)) {
            *puVar8 = uVar9;
            uVar2 = (ulonglong)*(uint *)(param_1 + 0x3e18);
            puVar6 = *(uint **)(param_1 + 0x3e10);
            puVar8 = puVar3;
          }
          puVar3 = puVar3 + 1;
          if (puVar3 == puVar6 + uVar2) {
            puVar3 = puVar6;
          }
          uVar9 = *puVar3;
        } while ((~uVar9 & 0x1ffff) != 0);
        uVar7 = *puVar8;
      }
      *puVar8 = uVar7 | 0x1ffff;
      *(int *)(param_1 + 0x3e1c) = *(int *)(param_1 + 0x3e1c) + -1;
    }
  }
  return;
}

