// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140196c80  size: 63 bytes
// Name:    FUN_140196c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e72e10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140196c80(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xa4);
  if (param_2 < uVar3) {
    while( true ) {
      LOCK();
      puVar1 = (uint *)(param_1 + 0x1b0);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 + 1;
      UNLOCK();
      if (uVar3 <= uVar2) break;
      FUN_144e72e10(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + (ulonglong)uVar2 * 8));
    }
  }
  return;
}

