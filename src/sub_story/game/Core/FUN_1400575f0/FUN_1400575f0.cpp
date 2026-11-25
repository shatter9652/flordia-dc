// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400575f0  size: 94 bytes
// Name:    FUN_1400575f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400575f0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  *(undefined1 (*) [32])(param_1 + 0x479e0) = ZEXT1232(ZEXT812(0));
  plVar1 = *(longlong **)(param_1 + 0x127c8);
  if ((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x47a28) != 0)) {
    (**(code **)(*plVar1 + 0x3f8))(plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x47a28) + 0x20));
  }
  *(undefined1 *)(param_1 + 0x47a88) = 0xff;
  plVar1 = *(longlong **)(param_1 + 0x127c8);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x12295) != '\x03')) {
    uStack_18 = uRam00000001475e7390;
    uStack_10 = uRam00000001475e73d8;
    (**(code **)(*plVar1 + 0x100))(plVar1,2,&uStack_18);
  }
  *(undefined1 (*) [32])(param_1 + 0x32180) = ZEXT1232(ZEXT812(0));
  *(undefined1 (*) [16])(param_1 + 0x32148) = ZEXT416(0) << 0x20;
  func_0x000144e4cb00(param_1);
  return;
}

