// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cbe90  size: 88 bytes
// Name:    FUN_1401cbe90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f86e10, FUN_144f86dc0, FUN_144dd3330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401cbe90(undefined4 param_1)

{
  char cVar1;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar2;
  undefined1 extraout_var [56];
  undefined1 auVar4 [16];
  undefined4 uStack_54;
  undefined1 auStack_50 [56];
  undefined1 auVar3 [64];
  
  FUN_144f86dc0(auStack_50);
  FUN_144dd3330(param_1,&uStack_54);
  cVar1 = FUN_144f86e10(auStack_50,uStack_54);
  auVar3._8_56_ = extraout_var;
  auVar3._0_8_ = extraout_XMM0_Qa;
  if (cVar1 == '\0') {
    uVar2 = (ulonglong)_DAT_145fc6f48;
  }
  else {
    auVar4._0_4_ = (float)_DAT_14ab5cdd0;
    auVar4._4_12_ = auVar3._4_12_;
    uVar2 = func_0x000144d9ff70(auStack_50,auVar4._0_8_);
  }
  return uVar2;
}

