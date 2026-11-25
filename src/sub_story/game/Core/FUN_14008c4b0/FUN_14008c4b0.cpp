// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008c4b0  size: 88 bytes
// Name:    FUN_14008c4b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14008c4b0(longlong param_1,short param_2)

{
  short *psVar1;
  ulonglong uVar2;
  longlong lVar3;
  short *psVar4;
  ulonglong uVar5;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 4);
  if (uVar2 != 0) {
    psVar1 = *(short **)(param_1 + 8);
    lVar3 = uVar2 * 2;
    psVar4 = psVar1;
    do {
      if (*psVar4 == param_2) {
        if (((ulonglong)((longlong)psVar4 - (longlong)psVar1) >> 0x20 & 1) != 0) {
          return;
        }
        uVar5 = (ulonglong)((uint)((longlong)psVar4 - (longlong)psVar1) & 0xfffffffe);
        lVar3 = (longlong)psVar1 + uVar5 + 2;
        func_0x000145f40570((longlong)psVar1 + uVar5,lVar3,(longlong)psVar1 + (uVar2 * 2 - lVar3));
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
        return;
      }
      psVar4 = psVar4 + 1;
      lVar3 = lVar3 + -2;
    } while (lVar3 != 0);
  }
  return;
}

