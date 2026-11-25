// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003b4a0  size: 129 bytes
// Name:    FUN_14003b4a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e4c830, FUN_145092b80, FUN_144eeabd0, FUN_1401d73b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14003b4a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 auStack_118 [33];
  
  FUN_144eeabd0();
  lVar1 = func_0x000144e929d0(*(undefined4 *)(param_1 + 0x100));
  if ((lVar1 != 0) && (*(char *)(param_1 + 0xa61) == '\x01')) {
    uVar2 = FUN_144e4c830(*(undefined4 *)(lVar1 + 0x58),*(undefined1 *)(lVar1 + 0x84));
    auStack_118[0] = 0x20;
    FUN_1401d73b0(param_1,uVar2,auStack_118,(*(byte *)(param_1 + 0x37c) & 0x20) >> 5);
    FUN_145092b80(param_1,0,auStack_118);
    *(undefined1 *)(param_1 + 0xa61) = 0;
  }
  return;
}

