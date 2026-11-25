// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c0f00  size: 174 bytes
// Name:    FUN_1400c0f00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c0f00(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint unaff_R12D;
  longlong lVar6;
  
  *param_2 = 0x10;
  uVar1 = *(uint *)(param_1 + 0xf4);
  if ((ulonglong)uVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar3 = *(undefined4 *)(param_1 + 0x100 + lVar6);
      lVar2 = func_0x000144dd0bd0(uVar3);
      uVar5 = uVar4;
      if (lVar2 != 0) {
        unaff_R12D = ((uint)*(byte *)(param_1 + 0x17d + lVar6) | unaff_R12D & 0xf8) +
                     (uint)*(byte *)(param_1 + 0x17f + lVar6) * 2 +
                     (uint)*(byte *)(param_1 + 0x17e + lVar6) * 4;
        uVar5 = (ulonglong)((int)uVar4 + 1);
        *(ulonglong *)(param_2 + uVar4 * 2 + 2) = CONCAT44(unaff_R12D,uVar3);
      }
      uVar3 = (undefined4)uVar5;
      lVar6 = lVar6 + 0x90;
      uVar4 = uVar5;
    } while ((ulonglong)uVar1 * 0x90 != lVar6);
  }
  param_2[1] = uVar3;
  return;
}

