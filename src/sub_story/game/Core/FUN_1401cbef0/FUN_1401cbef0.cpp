// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cbef0  size: 144 bytes
// Name:    FUN_1401cbef0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401cbf80, FUN_144f86e10, FUN_144f86dc0, FUN_144dd3330, FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401cbef0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar4;
  undefined1 extraout_var [56];
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined4 uStack_64;
  undefined1 auStack_60 [72];
  
  lVar3 = FUN_145086440(*(undefined4 *)(param_2 + 8),auStack_60,0x1c);
  auVar6 = ZEXT464(_DAT_145fc6f48);
  uVar4 = (ulonglong)_DAT_145fc6f48;
  if (lVar3 != 0) {
    uVar2 = FUN_1401cbf80(param_1,lVar3);
    FUN_144f86dc0(auStack_60);
    FUN_144dd3330(*(undefined4 *)(param_2 + 0xc),&uStack_64);
    cVar1 = FUN_144f86e10(auStack_60,uStack_64);
    uVar4 = auVar6._0_8_;
    auVar6._8_56_ = extraout_var;
    auVar6._0_8_ = extraout_XMM0_Qa;
    if (cVar1 != '\0') {
      auVar5._0_4_ = (float)uVar2;
      auVar5._4_12_ = auVar6._4_12_;
      uVar4 = func_0x000144d9ff70(auStack_60,auVar5._0_8_);
    }
  }
  return uVar4;
}

