// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140013c30  size: 175 bytes
// Name:    FUN_140013c30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14242a170, FUN_1452b3330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140013c30(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x707c);
  if ((ulonglong)uVar1 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x7080 + lVar5);
      if (uVar2 != 0x1ffff) {
        uVar3 = *(uint *)(_DAT_1499fc910[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
        if (((((uVar2 ^ uVar3) < 0x20000) &&
             ((uVar3 & *(uint *)(_DAT_1499fc910 + 6)) == *(uint *)(_DAT_1499fc910 + 6))) &&
            (*_DAT_1499fc910 != 0)) && (0 < *(int *)(param_1 + 0x7084 + lVar5))) {
          lVar4 = *_DAT_1499fc910 + (ulonglong)((uVar2 & 0x1ffff) * (int)_DAT_1499fc910[1]);
          FUN_1452b3330(lVar4);
          if ((*(byte *)(lVar4 + 0x1417) & 1) != 0) {
            FUN_14242a170(param_1,*(undefined4 *)(lVar4 + 0xf10));
          }
        }
      }
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 << 3 != lVar5);
  }
  return;
}

