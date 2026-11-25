// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049800  size: 134 bytes
// Name:    FUN_140049800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145883d30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140049800(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if (((*(byte *)(param_1 + 0x11) & 0x80) != 0) && ((ulonglong)*(uint *)(param_1 + 0xec) != 0)) {
    bVar2 = 0;
    lVar1 = 0;
    do {
      bVar2 = bVar2 | *(byte *)(*(longlong *)(param_1 + 0xf0) + 0x48 + lVar1);
      lVar1 = lVar1 + 0x120;
    } while ((ulonglong)*(uint *)(param_1 + 0xec) * 0x120 != lVar1);
    if ((bVar2 & 1) != 0) {
      FUN_145883d30(param_1,CONCAT71((int7)((ulonglong)lVar1 >> 8),1));
      if (((short)*(uint *)(param_1 + 0x10) < 0) &&
         (*(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xffff7fff,
         *(longlong *)(param_1 + 0x28) != 0 || *(longlong *)(param_1 + 0x18) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140049883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1 + 0x30))(param_1 + 0x18,0xf);
        return;
      }
    }
  }
  return;
}

