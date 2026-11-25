// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c8a10  size: 310 bytes
// Name:    FUN_1400c8a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c8b50, FUN_1400db110, FUN_1400c8c10, FUN_1400c9040, FUN_1400cd610, FUN_1400d6490, FUN_1400e5cb0, FUN_1400c8c80, FUN_1400c8d00, FUN_1400cacd0, FUN_1400cf4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c8a10(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  *(bool *)(param_1 + 0x394) =
       *(char *)(param_1 + 0x60) == '\x01' &&
       (*(char *)(param_3 + 0x14c) < '\0' && (*(byte *)(param_3 + 0x120) & 0x20) == 0);
  func_0x0001400c8ba0(param_1,*(undefined8 *)(param_3 + 0x30));
  if ((*(byte *)(param_1 + 0x91) & 4) != 0) {
    FUN_1400e5cb0(param_1,param_2);
  }
  FUN_1400c8d00(param_1);
  uVar2 = FUN_1400c9040(param_1,param_3);
  FUN_1400db110(param_1 + 0x2a0,uVar2);
  FUN_1400c8b50(param_1,param_3);
  uVar1 = FUN_1400c8c80(param_3,uVar2);
  FUN_1400cd610(param_1,param_2,param_3,param_4,param_5,uVar2,uVar1);
  if (param_6 != '\0') {
    FUN_1400cacd0(param_1,param_2,param_3,uVar2,uVar1);
  }
  FUN_1400c8c10(param_1,param_3,param_4);
  FUN_1400cf4b0(param_1,param_2);
  FUN_1400d6490(param_1,param_3,uVar2,param_4,param_5);
  *(undefined4 *)(param_1 + 0x380) = uVar2;
  return;
}

