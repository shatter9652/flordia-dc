// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b2f0  size: 76 bytes
// Name:    FUN_14011b2f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14011b2f0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  
  bVar1 = *(byte *)(param_1 + 0x70);
  uVar3 = *(int *)(param_1 + 0x2c) - (uint)bVar1;
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    do {
      uVar4 = func_0x0001432e8e60(*(undefined8 *)
                                   (*(longlong *)((ulonglong)bVar1 * 8 + lVar2 + lVar5) + 0x10));
      if ((char)uVar4 != '\0') {
        return uVar4;
      }
      bVar6 = (ulonglong)uVar3 * 8 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  return uVar4;
}

