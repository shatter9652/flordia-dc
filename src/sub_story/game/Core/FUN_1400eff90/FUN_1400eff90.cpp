// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eff90  size: 86 bytes
// Name:    FUN_1400eff90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14528cc50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400eff90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  ulonglong uVar5;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),0xff);
  uVar3 = uVar2;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x3c) != 0)) {
    uVar5 = 0;
    do {
      lVar1 = FUN_14528cc50(param_1 + 0x40 + uVar5 * 0x18);
      uVar3 = uVar5;
      if (lVar1 == param_2) break;
      bVar4 = (char)uVar5 + 1;
      uVar5 = (ulonglong)bVar4;
      uVar3 = uVar2;
    } while ((uint)bVar4 < *(uint *)(param_1 + 0x3c));
  }
  return uVar3 & 0xffffffff;
}

