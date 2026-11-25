// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401655b0  size: 134 bytes
// Name:    FUN_1401655b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404df2f0, FUN_144f86dc0, FUN_144f86e10, FUN_144dd9c90, FUN_144dd3330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401655b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 uStack_54;
  undefined1 auStack_50 [56];
  
  uVar2 = (**(code **)(*param_1 + 0x160))();
  plVar3 = (longlong *)FUN_144dd9c90(uVar2,0xc51eb951);
  uVar4 = (ulonglong)_DAT_14615bc50;
  if (plVar3 != (longlong *)0x0) {
    if (*plVar3 == 0) {
      lVar1 = plVar3[2];
      if (lVar1 != 0) {
        FUN_144f86dc0(auStack_50);
        FUN_144dd3330(*(undefined4 *)(lVar1 + 0x68),&uStack_54);
        FUN_144f86e10(auStack_50,uStack_54);
        uVar4 = FUN_1404df2f0(param_1[0x16],auStack_50);
      }
    }
    else {
      uVar4 = (ulonglong)*(uint *)(*plVar3 + 0x720);
    }
  }
  return uVar4;
}

