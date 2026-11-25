// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140017c80  size: 111 bytes
// Name:    FUN_140017c80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144de2690
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140017c80(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      uVar3 = (uint)*(ushort *)(param_1 + 0xb4 + (longlong)(int)uVar4 * 2);
      if ((uVar3 != 0xffff) && (_DAT_14ab73aa0 != 0)) {
        lVar1 = *(longlong *)
                 (_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)(param_1 + 0x7e) * 0x8ad0);
        if (lVar1 != 0) {
          FUN_144de2690(lVar1 + (ulonglong)(uVar3 * _DAT_14ab73a88));
          uVar2 = *(uint *)(param_1 + 0x100);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return;
}

