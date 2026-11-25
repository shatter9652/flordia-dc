// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140183650  size: 128 bytes
// Name:    FUN_140183650
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0, FUN_14503e140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140183650(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  lVar1 = FUN_14503e0d0(*(undefined8 *)(param_1 + 0x28));
  lVar1 = FUN_14503e140(lVar1 + 0x40,2);
  uVar2 = param_3 | 0x80;
  if (lVar1 == 0) {
    uVar2 = param_3;
  }
  if ((*(ushort *)(param_1 + 0x4a) & 0x80) != uVar2) {
    *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xff7f | (ushort)uVar2;
    for (plVar3 = *(longlong **)(param_1 + 0x78); (longlong *)(param_1 + 0x60) != plVar3;
        plVar3 = (longlong *)plVar3[3]) {
      (**(code **)(*plVar3 + 0x30))(plVar3,param_2,uVar2);
    }
  }
  return;
}

