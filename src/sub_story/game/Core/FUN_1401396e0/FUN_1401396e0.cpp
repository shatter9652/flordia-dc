// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401396e0  size: 67 bytes
// Name:    FUN_1401396e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140139730
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401396e0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_140139730(*(undefined8 *)(param_1 + 0x28));
  FUN_140139730(*(undefined8 *)(param_1 + 0x30));
  FUN_140139730(*(undefined8 *)(param_1 + 0x38));
  FUN_140139730(*(undefined8 *)(param_1 + 0x40));
  FUN_140139730(*(undefined8 *)(param_1 + 0x48));
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (*(char *)(lVar1 + 0x17d) == '\x01') {
    uVar2 = func_0x000140787a40();
    *(undefined1 *)(lVar1 + 0x17c) = 0;
    FUN_140787a70(uVar2);
    *(undefined1 *)(lVar1 + 0x17d) = 0;
  }
  return;
}

