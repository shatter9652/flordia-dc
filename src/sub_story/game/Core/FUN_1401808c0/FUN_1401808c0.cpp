// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401808c0  size: 173 bytes
// Name:    FUN_1401808c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006a9c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401808c0(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  
  iVar1 = FUN_14006a9c0(param_4);
  uVar7 = 0;
  if (iVar1 != 2) {
    do {
      lVar2 = func_0x000143e479a0(param_2,param_3);
      uVar7 = 0;
      if (lVar2 == 0) break;
      uVar4 = (ulonglong)*(ushort *)(lVar2 + 0x18);
      if (uVar4 != 0) {
        puVar3 = *(uint **)(lVar2 + 0x10);
        uVar5 = uVar4;
        do {
          uVar6 = uVar5 >> 1;
          uVar8 = ~uVar6 + uVar5;
          uVar5 = uVar6;
          if ((puVar3 + uVar6 * 6 + 6)[-6] < param_4) {
            puVar3 = puVar3 + uVar6 * 6 + 6;
            uVar5 = uVar8;
          }
        } while (0 < (longlong)uVar5);
        if (((puVar3 != *(uint **)(lVar2 + 0x10) + uVar4 * 6) && (*puVar3 == param_4)) &&
           (puVar3[3] != 0)) {
          uVar7 = **(undefined4 **)(puVar3 + 4);
          break;
        }
      }
      param_3 = *(int *)(lVar2 + 4);
    } while (param_3 != 0);
  }
  *param_1 = uVar7;
  return;
}

