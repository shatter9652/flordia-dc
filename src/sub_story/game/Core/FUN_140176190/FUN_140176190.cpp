// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140176190  size: 77 bytes
// Name:    FUN_140176190
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401761e0, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140176190(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  FUN_140004b40(0x1498c1080);
  lVar1 = FUN_1401761e0(param_1,param_2 & 0xffffffff);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((param_2 & 0xffffffff) >> 8),*(undefined1 *)(lVar1 + 0x80)) &
            0xffffffffffffff02;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
  }
  func_0x000144d9dab0(0x1498c1080);
  return uVar3;
}

