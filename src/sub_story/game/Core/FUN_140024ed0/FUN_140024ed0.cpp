// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140024ed0  size: 117 bytes
// Name:    FUN_140024ed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140029cd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140024ed0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  bool bVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  bVar2 = *(int *)(param_1 + 0x3b44) != 0;
  bVar3 = *(int *)(param_1 + 0x3b54) != 0;
  if (bVar3 && bVar2) {
    uVar1 = param_3[1];
    *(undefined8 *)(param_1 + 0x3af0) = *param_3;
    *(undefined8 *)(param_1 + 0x3af8) = uVar1;
    *(undefined4 *)(param_1 + 0x3b18) = param_4;
    FUN_140029cd0(&uStack_38,*(longlong *)(param_1 + 0x20) + 0x10,param_1 + 0x3af0,param_1 + 0x3b40)
    ;
    *param_2 = uStack_38;
    param_2[1] = uStack_30;
    param_2[2] = uStack_28;
    param_2[3] = uStack_20;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar3 && bVar2) & 0xffffffff;
}

