// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006eb50  size: 96 bytes
// Name:    FUN_14006eb50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14006eb50(uint param_1,short *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  short *psVar4;
  ulonglong uVar5;
  
  uVar2 = (ulonglong)param_1;
  psVar4 = param_2;
  if (param_1 != 0) {
    do {
      uVar5 = uVar2 >> 1;
      uVar3 = ~uVar5 + uVar2;
      uVar2 = uVar5;
      if ((psVar4 + uVar5 * 2 + 2)[-2] < param_3) {
        psVar4 = psVar4 + uVar5 * 2 + 2;
        uVar2 = uVar3;
      }
    } while (0 < (longlong)uVar2);
  }
  iVar1 = -1;
  if ((psVar4 != param_2 + (ulonglong)param_1 * 2) && (*psVar4 == param_3)) {
    iVar1 = (int)psVar4[1];
  }
  return iVar1;
}

