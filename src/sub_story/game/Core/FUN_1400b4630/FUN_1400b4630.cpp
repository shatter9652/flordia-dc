// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b4630  size: 61 bytes
// Name:    FUN_1400b4630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f50d20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400b4630(void)

{
  uint uVar1;
  int iVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined7 uVar4;
  
  uVar1 = func_0x000144e60030();
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (*(int *)((ulonglong)uVar1 * 0x1fe4 + 0x1476acae0) < 1) {
    iVar2 = FUN_144f50d20();
    if (iVar2 < 1) {
      uVar3 = CONCAT71(uVar4,DAT_1476af280);
    }
  }
  return uVar3 & 0xffffffff;
}

