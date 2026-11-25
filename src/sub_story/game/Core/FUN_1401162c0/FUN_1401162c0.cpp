// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401162c0  size: 104 bytes
// Name:    FUN_1401162c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140116500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401162c0(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  
  uVar2 = func_0x000144debc60(param_2);
  if (uVar2 == 0) {
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(param_1 + 0x48));
    uVar3 = uVar5 & 0xffffff02;
  }
  else {
    lVar6 = 0;
    do {
      lVar4 = param_1;
      FUN_140116500(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar6));
      bVar1 = *(byte *)(param_1 + 0x48);
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),bVar1);
      uVar3 = uVar5 & 0xffffff02;
      if (((bVar1 & 2) == 0) || ((bVar1 & 1) == 0)) break;
      bVar7 = (ulonglong)uVar2 * 0x30 + -0x30 != lVar6;
      lVar6 = lVar6 + 0x30;
    } while (bVar7);
  }
  return CONCAT71((int7)(uVar3 >> 8),(char)uVar3 != '\0' & (byte)uVar5);
}

