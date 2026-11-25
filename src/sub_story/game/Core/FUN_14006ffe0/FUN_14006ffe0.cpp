// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006ffe0  size: 174 bytes
// Name:    FUN_14006ffe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007b220, FUN_145026b00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006ffe0(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0x3f800000;
  func_0x000140bf2610(param_1 + 1);
  lVar2 = param_1[0x88];
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x43c) != 0) {
    lVar1 = (ulonglong)*(uint *)((longlong)param_1 + 0x43c) << 4;
    do {
      FUN_145026b00(lVar2);
      lVar2 = lVar2 + 0x10;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
    lVar2 = param_1[0x88];
  }
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  if (lVar2 != 0) {
    func_0x000144d9c130(lVar2);
  }
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  FUN_14007b220(param_1 + 0x89);
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x45e) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *(undefined1 *)((longlong)param_1 + 0x462) = 0;
  return;
}

