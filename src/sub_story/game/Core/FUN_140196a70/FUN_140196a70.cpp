// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140196a70  size: 82 bytes
// Name:    FUN_140196a70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402c59f0, FUN_140347fd0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140196a70(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uStack_18;
  
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0xa0);
    FUN_140347fd0(&uStack_18,0x14764b500);
    lVar2 = (ulonglong)uVar1 * 0x10;
    uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(short *)(lVar2 + 0x149e5b5dc) != -1);
    FUN_1402c59f0(uStack_18);
  }
  return uVar3;
}

