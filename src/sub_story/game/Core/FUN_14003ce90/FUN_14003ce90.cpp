// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003ce90  size: 198 bytes
// Name:    FUN_14003ce90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14003cf60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003ce90(longlong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar1 = _DAT_14ab56e38;
  *(undefined1 *)(param_1 + 0xec0) = 0;
  uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  bVar2 = FUN_14003cf60(uVar3,uVar1,0);
  *(byte *)(param_1 + 0xec0) = *(byte *)(param_1 + 0xec0) & 0xfe | bVar2;
  *(undefined1 *)(param_1 + 0xec1) = 0;
  bVar2 = FUN_14003cf60(uVar3,uVar1,1);
  *(byte *)(param_1 + 0xec1) = *(byte *)(param_1 + 0xec1) & 0xfe | bVar2;
  *(undefined1 *)(param_1 + 0xec2) = 0;
  bVar2 = FUN_14003cf60(uVar3,uVar1,2);
  *(byte *)(param_1 + 0xec2) = *(byte *)(param_1 + 0xec2) & 0xfe | bVar2;
  *(undefined1 *)(param_1 + 0xec3) = 0;
  bVar2 = FUN_14003cf60(uVar3,uVar1,3);
  *(byte *)(param_1 + 0xec3) = *(byte *)(param_1 + 0xec3) & 0xfe | bVar2;
  return;
}

