// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140091450  size: 226 bytes
// Name:    FUN_140091450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14513c970, FUN_1453b77f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140091450(longlong param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  *(byte *)(param_1 + 0x73) = *(byte *)(param_1 + 0x73) | 0x80;
  if (*(uint *)(param_1 + 0x48) != 0) {
    uVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x28 + uVar5 * 4);
      if ((uVar2 & 0x3f8000) == 0x50000) {
        uVar2 = uVar2 & 0x7fff;
        if (*_DAT_14ab7f6e0 == 0 ||
            (~*(uint *)(_DAT_14ab7f6e0[5] + (ulonglong)uVar2 * 4) & *(uint *)(_DAT_14ab7f6e0 + 6))
            != 0) {
          return;
        }
        lVar3 = FUN_14513c970(*_DAT_149ab14a8,*(undefined8 *)(_DAT_149ab14a8 + 2),
                              *(undefined8 *)
                               (*_DAT_14ab7f6e0 + (ulonglong)(uVar2 * (int)_DAT_14ab7f6e0[1])));
        puVar1 = _DAT_14ab5d000;
        if (lVar3 == 0) {
          return;
        }
        uVar2 = *(uint *)(lVar3 + 0xc);
        if ((ulonglong)uVar2 == 0) {
          return;
        }
        lVar3 = *(longlong *)(lVar3 + 0x10);
        lVar6 = 0;
        do {
          lVar4 = FUN_1453b77f0(*puVar1,*(undefined8 *)(puVar1 + 2),*(undefined8 *)(lVar3 + lVar6));
          if (lVar4 != param_1 && lVar4 != 0) {
            *(byte *)(lVar4 + 0x73) = *(byte *)(lVar4 + 0x73) | 0x80;
          }
          lVar6 = lVar6 + 8;
        } while ((ulonglong)uVar2 << 3 != lVar6);
        return;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(param_1 + 0x48) != uVar5);
  }
  return;
}

