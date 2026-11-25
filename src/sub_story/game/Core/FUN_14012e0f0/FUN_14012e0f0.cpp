// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14012e0f0  size: 299 bytes
// Name:    FUN_14012e0f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145226d60, FUN_1450422a0, FUN_144f92f10, FUN_14012e250, FUN_145042180, FUN_14012e220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14012e0f0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_40 [16];
  
  uVar8 = 0;
  if (((*(longlong *)(param_1 + 0x10) != 0) && (piVar4 = *(int **)(param_1 + 0xb0), *piVar4 != 0))
     && ((*(byte *)(piVar4 + 10) & 1) == 0)) {
    lVar5 = *(longlong *)(piVar4 + 6);
    if (lVar5 == 0) {
      uVar8 = 1;
    }
    else {
      cVar6 = FUN_14012e220(param_1);
      if (cVar6 == '\0') {
        if ((*(int *)(lVar5 + 0x10) < 1) || (*(int *)(lVar5 + 0x88) < *(int *)(lVar5 + 0x10))) {
          lVar7 = func_0x000144fdec40(*(undefined8 *)(piVar4 + 2),piVar4[4]);
          if ((lVar7 != 0) && (cVar6 = FUN_145226d60(*(undefined4 *)(lVar7 + 0x9c)), cVar6 == '\0'))
          {
            FUN_144f92f10(auStack_40,lVar7);
            lVar9 = FUN_145042180(auStack_40);
            if ((lVar9 == 0) || (uVar1 = *(uint *)(lVar9 + 0xc), uVar1 < 2)) {
              FUN_1450422a0(auStack_40);
            }
            else {
              lVar9 = func_0x000144f92f40(uVar1,*(undefined8 *)(lVar9 + 0x10),
                                          *(undefined4 *)(lVar9 + 0x1c));
              if (lVar9 != lVar7) {
                FUN_1450422a0(auStack_40);
                return 7;
              }
              iVar2 = *(int *)(lVar5 + 0x20);
              iVar3 = *(int *)(lVar5 + 0x1c);
              FUN_1450422a0(auStack_40);
              if ((int)uVar1 < iVar3) {
                return 8;
              }
              if (iVar2 < (int)uVar1) {
                return 8;
              }
            }
          }
          uVar8 = FUN_14012e250(*(undefined8 *)(param_1 + 0x10),param_2);
        }
        else {
          uVar8 = 3;
        }
      }
      else {
        uVar8 = 2;
      }
    }
  }
  return uVar8;
}

