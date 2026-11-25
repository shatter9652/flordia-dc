// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401835d0  size: 117 bytes
// Name:    FUN_1401835d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14503e0d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401835d0(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  
  lVar1 = FUN_14503e0d0(*(undefined8 *)(param_1 + 0x28));
  if (param_3 == 0xc) {
    uVar2 = 0xc;
  }
  else {
    uVar2 = *(ushort *)(lVar1 + 10) & 0xc;
    if ((*(ushort *)(lVar1 + 10) & 0xc) == 0) {
      uVar2 = param_3;
    }
  }
  if ((*(ushort *)(param_1 + 0x4a) & 0xc) != uVar2) {
    *(ushort *)(param_1 + 0x4a) = *(ushort *)(param_1 + 0x4a) & 0xfff3 | (ushort)uVar2;
    for (plVar3 = *(longlong **)(param_1 + 0x78); (longlong *)(param_1 + 0x60) != plVar3;
        plVar3 = (longlong *)plVar3[3]) {
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2,uVar2);
    }
  }
  return;
}

