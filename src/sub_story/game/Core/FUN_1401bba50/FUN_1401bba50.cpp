// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bba50  size: 153 bytes
// Name:    FUN_1401bba50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145f0a3f0, FUN_1401bbb20, FUN_145078050, FUN_144e96700, FUN_1401bbaf0, FUN_144fac3c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401bba50(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
                      undefined1 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_4 == '\0') {
    lVar1 = FUN_145f0a3f0();
    if (lVar1 != 0) {
      FUN_1401bbb20(lVar1,param_2,param_3);
      goto LAB_1401bba8e;
    }
LAB_1401bbae4:
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_144e96700(0x149aafaa0);
    if (lVar1 == 0) {
      uVar2 = func_0x000144fc99c0(0,0);
      lVar1 = FUN_144fac3c0(uVar2,0x38,0x10);
      if (lVar1 == 0) goto LAB_1401bbae4;
    }
    FUN_1401bbaf0(lVar1,param_2,param_3,param_5);
  }
LAB_1401bba8e:
  FUN_145078050(param_1,lVar1);
  return lVar1;
}

