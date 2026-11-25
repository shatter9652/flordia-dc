// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140047e70  size: 190 bytes
// Name:    FUN_140047e70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140047e70(longlong param_1,uint param_2,uint param_3,int *param_4,int *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar4 = (ulonglong)param_2;
  lVar6 = uVar4 * 0xc;
  lVar1 = param_1;
  if (param_2 != 0) {
    do {
      uVar2 = uVar4 >> 1;
      lVar5 = lVar1 + 0xc + uVar2 * 0xc;
      uVar3 = ~uVar2 + uVar4;
      uVar4 = uVar2;
      if (*(uint *)(lVar5 + -8) < param_3) {
        lVar1 = lVar5;
        uVar4 = uVar3;
      }
    } while (0 < (longlong)uVar4);
  }
  uVar4 = (param_1 + lVar6) - lVar1;
  lVar6 = lVar1;
  if (0 < (longlong)uVar4) {
    uVar4 = (uVar4 >> 2) * -0x5555555555555555;
    lVar5 = lVar1;
    do {
      uVar2 = uVar4 >> 1;
      lVar6 = lVar5 + 0xc + uVar2 * 0xc;
      uVar4 = ~uVar2 + uVar4;
      if (param_3 < *(uint *)(lVar6 + -8)) {
        lVar6 = lVar5;
        uVar4 = uVar2;
      }
      lVar5 = lVar6;
    } while (0 < (longlong)uVar4);
  }
  *param_4 = (int)((ulonglong)(lVar1 - param_1) >> 2) * -0x55555555;
  *param_5 = (int)((ulonglong)(lVar6 - param_1) >> 2) * -0x55555555;
  return;
}

