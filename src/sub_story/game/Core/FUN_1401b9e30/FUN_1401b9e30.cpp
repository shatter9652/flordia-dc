// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9e30  size: 206 bytes
// Name:    FUN_1401b9e30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401b9f00, FUN_14039a010, FUN_1401ba020, FUN_1401baf00, FUN_1401b9f70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401b9e30(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 auStack_f8 [32];
  undefined1 auStack_d8 [160];
  undefined8 uStack_38;
  undefined4 uStack_30;
  
  uStack_fc = 0xffffffff;
  FUN_1401b9f00(*(undefined8 *)(*param_2 + 0x20));
  uVar3 = FUN_1401b9f70(*(undefined8 *)(*param_2 + 0x20));
  FUN_14039a010(auStack_f8,*(undefined8 *)(*param_2 + 0x230),*(undefined8 *)(param_2[2] + 0x2a0));
  cVar1 = FUN_1401ba020(&uStack_100,param_2);
  if (cVar1 != '\0') {
    uStack_38 = 0;
    uStack_30 = 0xffffffff;
    cVar1 = FUN_1401baf00(auStack_d8,param_3,uStack_100,uStack_fc,uVar3);
    if (cVar1 != '\0') {
      uVar2 = func_0x0001401b9520(param_1,auStack_d8);
      return uVar2;
    }
  }
  return 0;
}

