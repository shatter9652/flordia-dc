// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ad400  size: 183 bytes
// Name:    FUN_1401ad400
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401ade30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401ad400(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if ((((*(byte *)(param_2 + 0x149) & 0x10) != 0) && (*(int *)(param_2 + 0x160) == 1)) &&
     (uVar5 = (ulonglong)*(uint *)(param_2 + 0xfc), *(uint *)(param_2 + 0xfc) != 0)) {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_2 + 0x100) + uVar4 * 4);
      if (uVar1 != 0x1ffff) {
        uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
        if ((((uVar1 ^ uVar2) < 0x20000) &&
            ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6))) &&
           ((*_DAT_14a9b3f48 != 0 &&
            (lVar3 = *_DAT_14a9b3f48 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14a9b3f48[1]),
            (*(byte *)(lVar3 + 0x88) & 8) == 0)))) {
          FUN_1401ade30(param_1,lVar3);
          uVar5 = (ulonglong)*(uint *)(param_2 + 0xfc);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  return;
}

