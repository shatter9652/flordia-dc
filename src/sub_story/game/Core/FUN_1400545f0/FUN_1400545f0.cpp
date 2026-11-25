// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400545f0  size: 62 bytes
// Name:    FUN_1400545f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7b8f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400545f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  cVar2 = FUN_144e7b8f0();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == -0x218132af) {
      bVar5 = true;
    }
    else {
      lVar3 = (**(code **)(*param_2 + 0x40))();
      bVar5 = false;
      if ((iVar1 != 0) && (lVar3 != 0)) {
        uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
        lVar3 = FUN_140266500(uVar4,iVar1);
        bVar5 = lVar3 != 0;
      }
    }
    return bVar5;
  }
  return false;
}

