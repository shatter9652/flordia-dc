// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140061c40  size: 256 bytes
// Name:    FUN_140061c40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140061c40(uint *param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar3 = *param_1 & 0xfffffc00;
  }
  else {
    uVar3 = *param_1;
    uVar2 = *(uint *)(param_3 + 0x20) >> 0x18 & 1;
    *param_1 = uVar3 & 0xfffffffe | uVar2;
    uVar3 = (uVar3 & 0xfffffffc | uVar2) + (*(int *)(param_3 + 0x18) >> 0x1f) * -2;
    *param_1 = uVar3;
    uVar3 = (uVar3 & 0xfffffffb) + (*(uint *)(param_3 + 0x18) >> 0x17 & 1) * 4;
    *param_1 = uVar3;
    uVar3 = (uVar3 & 0xfffffff7) + (*(uint *)(param_3 + 8) >> 7 & 1) * 8;
    *param_1 = uVar3;
    uVar2 = *(uint *)(param_3 + 0x18) >> 0x17 & 0x10;
    *param_1 = uVar3 & 0xffffffef | uVar2;
    bVar1 = func_0x000144ea0c40(*(undefined4 *)(param_3 + 0x28),*(undefined1 *)(param_2 + 0x89),
                                *(undefined1 *)(param_2 + 0x88));
    uVar5 = uVar3 & 0xffffffaf | uVar2 | (uint)(bVar1 ^ 1) << 6;
    *param_1 = uVar5;
    uVar3 = *(uint *)(param_3 + 0x18) >> 0x12 & 0x80;
    *param_1 = uVar5 & 0xffffff7f | uVar3;
    uVar2 = *(uint *)(param_3 + 0x20) >> 0x18 & 0x20;
    uVar4 = 0;
    *param_1 = uVar5 & 0xffffff5f | uVar3 | uVar2;
    if ((*(byte *)(param_3 + 0x19) & 0x20) != 0) {
      uVar4 = ~*(uint *)(param_3 + 0x20) >> 0x13 & 0x100;
    }
    *param_1 = uVar5 & 0xfffffe5f | uVar3 | uVar2 | uVar4;
    uVar3 = uVar5 & 0xfffffc5f | uVar3 | uVar2 | uVar4 | *(uint *)(param_3 + 0x24) >> 0xd & 0x200;
  }
  *param_1 = uVar3;
  return;
}

