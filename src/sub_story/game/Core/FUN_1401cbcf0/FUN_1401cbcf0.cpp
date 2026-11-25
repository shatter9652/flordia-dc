// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cbcf0  size: 159 bytes
// Name:    FUN_1401cbcf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f86e10, FUN_1401cbd90, FUN_144f86dc0, FUN_144dd3330, FUN_145086440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401cbcf0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 extraout_var [56];
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auVar6 [64];
  undefined4 uStack_74;
  undefined1 auStack_70 [96];
  
  lVar2 = FUN_145086440(*(undefined4 *)(param_2 + 8),auStack_70,0x1c);
  auVar6 = ZEXT464(_DAT_145fc6f48);
  uVar3 = (ulonglong)_DAT_145fc6f48;
  if (lVar2 != 0) {
    auVar5._0_8_ = FUN_1401cbd90(param_1,lVar2);
    auVar5._8_56_ = extraout_var;
    auVar5 = ZEXT1664(auVar5._0_16_);
    FUN_144f86dc0(auStack_70);
    FUN_144dd3330(*(undefined4 *)(param_2 + 0xc),&uStack_74);
    cVar1 = FUN_144f86e10(auStack_70,uStack_74);
    uVar3 = auVar6._0_8_;
    if (cVar1 != '\0') {
      auVar4._0_4_ = (float)auVar5._0_8_;
      auVar4._4_12_ = auVar5._4_12_;
      uVar3 = func_0x000144d9ff70(auStack_70,auVar4._0_8_);
    }
  }
  return uVar3;
}

