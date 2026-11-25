// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006f5b0  size: 90 bytes
// Name:    FUN_14006f5b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed1510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006f5b0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  uint param_5)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 unaff_XMM6_Qa;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  auVar6 = ZEXT464(param_5);
  uStack_28 = unaff_XMM6_Qa;
  lVar2 = FUN_144ed1510(*param_3);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x88) != 0)) {
    uStack_38 = uStack_28;
    auVar7 = ZEXT1664(auVar6._0_16_);
    FUN_144daa2b0(auStack_48,param_2,param_4,auVar6._0_8_);
    auVar4._4_4_ = _DAT_145fc6f50;
    auVar4._0_4_ = _DAT_145fc6f50;
    auVar4._8_4_ = _DAT_145fc6f50;
    auVar4._12_4_ = _DAT_145fc6f50;
    auVar5._4_4_ = _DAT_145fc6f54;
    auVar5._0_4_ = _DAT_145fc6f54;
    auVar5._8_4_ = _DAT_145fc6f54;
    auVar5._12_4_ = _DAT_145fc6f54;
    *(undefined8 *)(lVar2 + 0x260) = 0;
    *(undefined1 *)(lVar2 + 0x272) = 0;
    *(undefined1 (*) [16])(lVar2 + 0x240) = auVar4;
    *(undefined1 (*) [16])(lVar2 + 0x250) = auVar5;
    cVar1 = *(char *)(param_2 + 0x2c2);
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1);
    FUN_144adae20(lVar2,param_2,uVar3 & 0xffffffff);
    if (*(int *)(lVar2 + 0x380) == 1) {
      if (cVar1 == '\0') {
        FUN_145125940(lVar2,param_2,param_4,auVar7._0_8_);
      }
      else {
        FUN_14213e420();
      }
    }
    else if (*(int *)(lVar2 + 0x380) == 0) {
      FUN_144ebd500(lVar2,param_2,auVar7._0_8_,uVar3 & 0xffffffff);
    }
    return;
  }
  return;
}

