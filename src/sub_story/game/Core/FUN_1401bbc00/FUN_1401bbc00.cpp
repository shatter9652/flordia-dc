// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bbc00  size: 123 bytes
// Name:    FUN_1401bbc00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401baf00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401bbc00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_c8 [160];
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  uStack_28 = 0;
  uStack_20 = 0xffffffff;
  cVar1 = FUN_1401baf00();
  if (cVar1 != '\0') {
    if (*param_4 == 0) {
      lVar2 = (*(code *)param_4[1])(param_1);
    }
    else {
      lVar2 = (*(code *)param_4[1])(*param_4,param_1);
    }
    cVar1 = func_0x0001401b9520(lVar2 + 0x30,auStack_c8);
    if (cVar1 != '\0') {
      return lVar2;
    }
  }
  return 0;
}

