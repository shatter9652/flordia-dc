// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007bed0  size: 157 bytes
// Name:    FUN_14007bed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14007b620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007bed0(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  bVar1 = *(byte *)(param_1 + 0x59);
  bVar3 = *(byte *)(param_2 + 0x25) >> 5 & 1;
  *(byte *)(param_1 + 0x59) = bVar1 & 0xfe | bVar3;
  bVar4 = *(byte *)(param_2 + 0x25) >> 5 & 2;
  *(byte *)(param_1 + 0x59) = bVar1 & 0xfc | bVar3 | bVar4;
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x24);
  *(byte *)(param_1 + 0x59) = bVar1 & 0xf8 | bVar3 | bVar4 | *(byte *)(param_2 + 0x25) >> 5 & 4;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x20);
  func_0x000144ef0c50(param_1,0);
  uVar2 = *(uint *)(param_1 + 4);
  if ((ulonglong)uVar2 != 0) {
    lVar5 = 0;
    do {
      FUN_14007b620(*(undefined8 *)(param_1 + 8 + lVar5),*(undefined4 *)(param_1 + 0x4c),0,1,0);
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar2 << 3 != lVar5);
  }
  return;
}

