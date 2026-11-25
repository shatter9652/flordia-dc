// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a440  size: 139 bytes
// Name:    FUN_14010a440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14010a4d0, FUN_144e681a0, FUN_14010a4f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14010a440(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  
  lVar3 = func_0x000144ece580(*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    func_0x00014010a540(auStack_68);
    uVar5 = 0;
    iVar6 = -1;
    while (cVar1 = FUN_144e681a0(*(undefined4 *)(lVar3 + 0x9c),auStack_68), cVar1 != '\0') {
      iVar2 = FUN_14010a4d0(uStack_48);
      if ((iVar6 < iVar2) &&
         (lVar4 = FUN_14010a4f0(uStack_48), iVar6 = iVar2, *(int *)(lVar4 + 4) != 0)) {
        uVar5 = **(undefined4 **)(lVar4 + 8);
      }
    }
    *(undefined4 *)(param_1 + 0x514) = uVar5;
  }
  return;
}

