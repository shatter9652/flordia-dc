// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006e9a0  size: 78 bytes
// Name:    FUN_14006e9a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14006e9a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  short *psVar8;
  ulonglong uVar9;
  undefined1 auStack_14 [4];
  
  lVar4 = func_0x000144da1090(param_1,param_2,auStack_14);
  iVar6 = (int)param_2;
  if ((*(byte *)(lVar4 + 0x41) & 0x10) != 0) {
    return ((uint)*(ushort *)(lVar4 + 0x98) + iVar6) - (uint)*(ushort *)(lVar4 + 0x48);
  }
  uVar1 = *(uint *)(param_1 + 0x1ac);
  psVar2 = *(short **)(param_1 + 0x1b0);
  uVar5 = (ulonglong)uVar1;
  psVar8 = psVar2;
  if (uVar1 != 0) {
    do {
      uVar9 = uVar5 >> 1;
      uVar7 = ~uVar9 + uVar5;
      uVar5 = uVar9;
      if ((psVar8 + uVar9 * 2 + 2)[-2] < iVar6) {
        psVar8 = psVar8 + uVar9 * 2 + 2;
        uVar5 = uVar7;
      }
    } while (0 < (longlong)uVar5);
  }
  iVar3 = -1;
  if ((psVar8 != psVar2 + (ulonglong)uVar1 * 2) && (*psVar8 == iVar6)) {
    iVar3 = (int)psVar8[1];
  }
  return iVar3;
}

