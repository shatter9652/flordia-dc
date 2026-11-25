// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c67d0  size: 92 bytes
// Name:    FUN_1400c67d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed1510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c67d0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_XMM6_Qa;
  undefined8 uVar3;
  undefined1 auVar4 [64];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  auVar4 = ZEXT464(param_6);
  uStack_28 = unaff_XMM6_Qa;
  lVar2 = FUN_144ed1510(*param_3);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x88) != 0)) {
    uStack_38 = uStack_28;
    auVar4 = ZEXT1664(auVar4._0_16_);
    FUN_144daa2b0(auStack_48);
    if (*(int *)(lVar2 + 0x380) == 0) {
      cVar1 = *(char *)(param_2 + 0x2c2);
      FUN_14017fcf0(*(undefined8 *)(lVar2 + 0x90),param_2,lVar2,param_5,auVar4._0_4_);
      if (cVar1 == '\x01') {
        FUN_14213e230();
        uVar3 = auVar4._0_8_;
      }
      else {
        FUN_144fd2f00(lVar2,param_2,param_5,auVar4._0_8_);
        uVar3 = auVar4._0_8_;
      }
      FUN_144ad8e20(lVar2,param_2,param_5,uVar3);
    }
    return;
  }
  return;
}

