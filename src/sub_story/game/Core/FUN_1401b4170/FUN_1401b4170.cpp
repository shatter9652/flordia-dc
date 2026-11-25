// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b4170  size: 383 bytes
// Name:    FUN_1401b4170
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_1401b4170(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0 || param_1 == 0) {
    return -1;
  }
  lVar5 = func_0x00014537c440();
  uVar1 = *(uint *)(lVar5 + 0x48);
  if (uVar1 == 0) {
    return -1;
  }
  lVar3 = *(longlong *)(lVar5 + 0x50);
  uVar6 = (ulonglong)(uVar1 - 1 & param_1);
  uVar7 = *(uint *)(lVar3 + uVar6 * 8);
  if (uVar7 != param_1 && uVar7 != 0) {
    do {
      uVar6 = (ulonglong)((uint)(uVar6 * 8 + 8 >> 3) & uVar1 - 1);
      uVar7 = *(uint *)(lVar3 + uVar6 * 8);
      if (uVar7 == 0) break;
    } while (uVar7 != param_1);
  }
  if (uVar7 == 0) {
    return -1;
  }
  while( true ) {
    uVar7 = (uint)uVar6;
    if (uVar1 == uVar7) {
      return -1;
    }
    if (*(int *)(lVar3 + uVar6 * 8) != 0) break;
    uVar6 = (ulonglong)(uVar7 + 1);
  }
  while( true ) {
    if (uVar7 == uVar1) {
      return -1;
    }
    if (*(int *)(lVar3 + uVar6 * 8) != 0) break;
    uVar7 = (uint)uVar6 + 1;
    uVar6 = (ulonglong)uVar7;
  }
  if ((uint)uVar6 == uVar1) {
    return -1;
  }
  iVar2 = *(int *)(lVar5 + 0x58);
  if (iVar2 == 0) {
    return -1;
  }
  lVar4 = *(longlong *)(lVar5 + 0x60);
  uVar9 = (ulonglong)(iVar2 - 1U & param_2);
  uVar1 = *(uint *)(lVar4 + uVar9 * 8);
  if (uVar1 != param_2 && uVar1 != 0) {
    do {
      uVar9 = (ulonglong)((uint)(uVar9 * 8 + 8 >> 3) & iVar2 - 1U);
      uVar1 = *(uint *)(lVar4 + uVar9 * 8);
      if (uVar1 == 0) break;
    } while (uVar1 != param_2);
  }
  if (uVar1 != 0) {
    while (iVar8 = (int)uVar9, iVar2 != iVar8) {
      if (*(int *)(lVar4 + uVar9 * 8) != 0) {
        if (iVar8 == iVar2) {
          return -1;
        }
        return *(int *)(lVar3 + 4 + uVar6 * 8) * *(int *)(lVar5 + 0x5c) +
               *(int *)(lVar4 + 4 + uVar9 * 8) + 1;
      }
      uVar9 = (ulonglong)(iVar8 + 1);
    }
  }
  return -1;
}

