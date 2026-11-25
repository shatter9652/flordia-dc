// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14002c900  size: 107 bytes
// Name:    FUN_14002c900
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7ac10, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14002c900(longlong param_1)

{
  uint uVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_140004b40(0x1499aa7e8);
  if (*(short *)(param_1 + 0x158) == 0) {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_144e7ac10(*(longlong *)(param_1 + 0x150) + lVar3);
      uVar2 = (ulonglong)uVar1;
      if ((char)uVar1 == '\0') break;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 4;
    } while (uVar4 < *(ushort *)(param_1 + 0x158));
  }
  func_0x000144d9dab0(0x1499aa7e8);
  return uVar2 & 0xffffffff;
}

