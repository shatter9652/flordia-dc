// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fbc90  size: 58 bytes
// Name:    FUN_1400fbc90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db7b20, FUN_1408866d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400fbc90(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  
  lVar3 = FUN_1408866d0();
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (lVar3 != 0) {
    cVar1 = FUN_144db7b20(*(undefined4 *)(lVar3 + 0x9c));
    if (cVar1 == '\0') {
      uVar2 = func_0x0001406253c0(lVar3);
      uVar4 = (ulonglong)uVar2 ^ 1;
    }
  }
  return uVar4 & 0xffffffff;
}

