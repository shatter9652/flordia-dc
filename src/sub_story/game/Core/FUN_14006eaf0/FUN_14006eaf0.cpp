// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006eaf0  size: 90 bytes
// Name:    FUN_14006eaf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14006eaf0(longlong param_1,undefined8 param_2)

{
  short *psVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  short *psVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  lVar3 = func_0x000144da1090(param_1,param_2,&stack0xffffffffffffffec);
  if (-1 < (longlong)*(short *)(lVar3 + 0x44)) {
    lVar4 = ((longlong)*(short *)(lVar3 + 0x44) - (ulonglong)*(ushort *)(lVar3 + 0x48)) * 0x50;
    if (-1 < *(short *)(lVar3 + 0x46 + lVar4)) {
      return ((int)param_2 - (uint)*(ushort *)(lVar3 + 0x48)) +
             (uint)*(ushort *)(lVar3 + lVar4 + 0x48);
    }
  }
  iVar2 = func_0x000144da5a50();
  psVar1 = *(short **)(param_1 + 0x1b0);
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x1ac);
  psVar5 = psVar1;
  uVar8 = uVar7;
  if (uVar7 != 0) {
    do {
      uVar9 = uVar8 >> 1;
      uVar6 = ~uVar9 + uVar8;
      uVar8 = uVar9;
      if ((psVar5 + uVar9 * 2 + 2)[-2] < iVar2) {
        psVar5 = psVar5 + uVar9 * 2 + 2;
        uVar8 = uVar6;
      }
    } while (0 < (longlong)uVar8);
  }
  for (; (psVar5 != psVar1 + uVar7 * 2 && (iVar2 == *psVar5)); psVar5 = psVar5 + 2) {
    if ((int)param_2 < (int)psVar5[1]) {
      return (int)psVar5[1];
    }
  }
  return -1;
}

