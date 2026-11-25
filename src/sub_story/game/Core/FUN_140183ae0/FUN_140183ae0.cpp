// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140183ae0  size: 135 bytes
// Name:    FUN_140183ae0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e140, FUN_1401834d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140183ae0(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  
  uVar1 = (*(ushort *)(param_1 + 0x4a) & 0xffbf) + (*(ushort *)(param_1 + 0x4a) & 0x20) * 2;
  lVar2 = FUN_14503e140(param_3 + 0x40,2);
  uVar3 = uVar1 | 0x80;
  if (lVar2 == 0) {
    uVar3 = uVar1;
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar3 = uVar3 | *(ushort *)(*(longlong *)(param_1 + 0x30) + 0x4a) & 0xc0;
  }
  *(ushort *)(param_1 + 0x4a) = uVar3 | *(ushort *)(param_3 + 10) & 0x200;
  FUN_1401834d0(param_1,param_2,param_3,param_4,1);
  return;
}

