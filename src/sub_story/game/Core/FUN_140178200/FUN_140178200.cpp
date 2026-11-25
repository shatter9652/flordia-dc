// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140178200  size: 104 bytes
// Name:    FUN_140178200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ecfad0, FUN_144ecfa30, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140178200(longlong param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStackX_8 [32];
  undefined8 uStack_20;
  
  uStack_20 = 0x14017820d;
  lVar4 = FUN_145647140();
  lVar4 = -lVar4;
  if ((*(byte *)(param_1 + 0x50) & 4) == 0) {
    uVar3 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x3c) = 1;
    uVar3 = *(undefined4 *)(param_1 + 0x14);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)((longlong)&uStack_20 + lVar4) = 0x14017822b;
    func_0x000144ecf9a0(uVar3,uVar1);
    *(undefined8 *)((longlong)&uStack_20 + lVar4) = 0x14017823c;
    FUN_144ecfad0(auStackX_8 + lVar4,param_1 + 0x10);
    pcVar2 = *(code **)(**(longlong **)(param_1 + 0x48) + 0x140);
    *(undefined8 *)((longlong)&uStack_20 + lVar4) = 0x140178249;
    uVar3 = (*pcVar2)();
    *(undefined8 *)((longlong)&uStack_20 + lVar4) = 0x140178253;
    FUN_144ecfa30(auStackX_8 + lVar4);
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  return uVar3;
}

