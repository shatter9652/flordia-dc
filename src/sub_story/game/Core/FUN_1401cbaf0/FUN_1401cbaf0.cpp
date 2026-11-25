// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cbaf0  size: 103 bytes
// Name:    FUN_1401cbaf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401cbaf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_2c [20];
  undefined1 auVar4 [64];
  
  lVar1 = FUN_145086440(*(undefined4 *)(param_2 + 8),auStack_2c,0x1c);
  auVar4 = ZEXT464(_DAT_145fc6f48);
  uVar3 = (ulonglong)_DAT_145fc6f48;
  if (lVar1 != 0) {
    lVar2 = func_0x0001401cbb60(param_1);
    uVar3 = auVar4._0_8_;
    if (lVar2 != 0) {
      uVar3 = (ulonglong)
              *(uint *)(param_2 + 0xc + (ulonglong)(lVar1 != *(longlong *)(lVar2 + 0x2f0)) * 4);
    }
  }
  return uVar3;
}

