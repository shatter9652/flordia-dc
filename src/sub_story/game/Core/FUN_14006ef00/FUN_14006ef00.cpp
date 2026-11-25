// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ef00  size: 135 bytes
// Name:    FUN_14006ef00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14006ef00(longlong param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  iVar2 = func_0x000144da5a50();
  psVar1 = *(short **)(param_1 + 0x1b0);
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x1ac);
  psVar3 = psVar1;
  uVar6 = uVar5;
  if (uVar5 != 0) {
    do {
      uVar7 = uVar6 >> 1;
      uVar4 = ~uVar7 + uVar6;
      uVar6 = uVar7;
      if ((psVar3 + uVar7 * 2 + 2)[-2] < iVar2) {
        psVar3 = psVar3 + uVar7 * 2 + 2;
        uVar6 = uVar4;
      }
    } while (0 < (longlong)uVar6);
  }
  for (; (psVar3 != psVar1 + uVar5 * 2 && (iVar2 == *psVar3)); psVar3 = psVar3 + 2) {
    if (param_2 < psVar3[1]) {
      return (int)psVar3[1];
    }
  }
  return -1;
}

