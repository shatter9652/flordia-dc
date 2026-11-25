// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e8a00  size: 86 bytes
// Name:    FUN_1400e8a00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142ffc6c0, FUN_144f661b0, FUN_144e6ea00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400e8a00(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  undefined1 auStack_c [4];
  
  lVar2 = FUN_144e6ea00(param_2,*(undefined4 *)(param_1 + 0x10));
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_144f661b0(lVar2,1);
    if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x13a) & 0x40) == 0)) {
      bVar1 = 0;
      uVar5 = 0;
      bVar6 = 0;
    }
    else {
      uVar4 = FUN_142ffc6c0(lVar2,auStack_c);
      bVar6 = (byte)uVar4;
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar1 = 1;
    }
    uVar4 = CONCAT71(uVar5,bVar1 & bVar6);
  }
  return uVar4;
}

