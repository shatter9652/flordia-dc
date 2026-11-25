// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140169860  size: 188 bytes
// Name:    FUN_140169860
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145502460
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140169860(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  if (1 < (ulonglong)*(uint *)(param_1 + 0xc)) {
    FUN_145502460(param_1 + 0x10,param_1 + 0x10 + (ulonglong)*(uint *)(param_1 + 0xc) * 4);
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xc);
    if (uVar4 != 0) {
      lVar2 = param_1 + 0x10 + uVar4 * 4;
      puVar1 = (uint *)(param_1 + 0xc);
      lVar5 = uVar4 * 4 + -4;
      lVar6 = 0;
      do {
        lVar8 = lVar6;
        if (lVar5 == lVar8) {
          return;
        }
        iVar7 = *(int *)(param_1 + 0x10 + lVar8);
        lVar6 = lVar8 + 4;
      } while (iVar7 != *(int *)(param_1 + 0x14 + lVar8));
      lVar8 = param_1 + 0x10 + lVar8;
      if (lVar8 + 8 != lVar2) {
        do {
          iVar3 = *(int *)(param_1 + 0x14 + lVar6);
          if (iVar7 != iVar3) {
            *(int *)(lVar8 + 4) = iVar3;
            lVar8 = lVar8 + 4;
          }
          lVar6 = lVar6 + 4;
          iVar7 = iVar3;
        } while (lVar5 != lVar6);
      }
      lVar8 = lVar8 + 4;
      if (lVar8 != lVar2) {
        func_0x000145f40570(lVar8,lVar2,(param_1 + 0x10 + (ulonglong)*puVar1 * 4) - lVar2);
        *puVar1 = *puVar1 - (int)((ulonglong)(lVar2 - lVar8) >> 2);
      }
    }
  }
  return;
}

