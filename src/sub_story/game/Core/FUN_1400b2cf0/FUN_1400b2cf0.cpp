// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b2cf0  size: 271 bytes
// Name:    FUN_1400b2cf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e58980, FUN_144f3e6e0, FUN_1452e3b10, FUN_1405fda70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400b2cf0(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 extraout_var [56];
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  
  FUN_144f3e6e0();
  if (param_2 == 0) {
    lVar3 = FUN_1452e3b10();
    auVar7 = ZEXT464(*(uint *)(lVar3 + 0x364));
    auVar5 = ZEXT464(_DAT_146159ae0);
  }
  else {
    auVar5._0_8_ = FUN_1405fda70(param_2,param_1);
    auVar5._8_56_ = extraout_var;
    auVar5 = ZEXT1664(auVar5._0_16_);
    lVar3 = FUN_1452e3b10();
    auVar7 = ZEXT464(*(uint *)(lVar3 + 0x364));
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x2c) == -0x484427d9) {
      uVar1 = func_0x000145073c10();
      cVar2 = func_0x000144f92d40(uVar1,0,0);
      if (cVar2 != '\0') {
        lVar3 = FUN_1452e3b10();
        auVar7 = ZEXT464(*(uint *)(lVar3 + 0x36c));
        lVar3 = func_0x000144ef6280(*(undefined4 *)(param_1 + 0x9c));
        auVar4 = auVar5._0_16_;
        auVar6 = auVar7._0_16_;
        if ((lVar3 != 0) &&
           (((*(byte *)(lVar3 + 0x84) & 1) != 0 || ((*(byte *)(lVar3 + 0x110) & 1) != 0)))) {
          auVar6 = auVar4;
        }
        goto LAB_1400b2d60;
      }
    }
  }
  if (param_3 == 3) {
    lVar3 = FUN_1452e3b10();
    auVar4 = auVar5._0_16_;
    auVar6 = ZEXT416(*(uint *)(lVar3 + 0x368));
  }
  else {
    lVar3 = FUN_144e58980(*(undefined4 *)(param_1 + 0x9c));
    auVar4 = auVar5._0_16_;
    auVar6 = auVar7._0_16_;
    if (lVar3 != 0) {
      lVar3 = FUN_1452e3b10();
      auVar4 = auVar5._0_16_;
      auVar6 = ZEXT416(*(uint *)(lVar3 + 0x370));
    }
  }
LAB_1400b2d60:
  auVar6 = vminss_avx(auVar6,auVar4);
  return auVar6._0_8_;
}

