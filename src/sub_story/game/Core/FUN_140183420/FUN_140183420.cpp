// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140183420  size: 173 bytes
// Name:    FUN_140183420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e140, FUN_1401834d0, FUN_140183fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140183420(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x4a);
  uVar4 = (uVar1 & 0xffbf) + (uVar1 & 0x20) * 2 |
          *(ushort *)(*(longlong *)(param_1 + 0x30) + 0x4a) & 0xc0;
  if (param_3 != 0) {
    lVar3 = FUN_14503e140(param_3 + 0x40,2);
    uVar2 = uVar4 | 0x80;
    if (lVar3 == 0) {
      uVar2 = uVar4;
    }
    uVar4 = *(ushort *)(param_3 + 10) & 0x200 | uVar2;
  }
  if (uVar4 != uVar1) {
    *(ushort *)(param_1 + 0x4a) = uVar4;
    FUN_140183fc0(param_1,param_2);
  }
  if (param_3 != 0) {
    FUN_1401834d0(param_1,param_2,param_3,param_4,1);
  }
  return;
}

