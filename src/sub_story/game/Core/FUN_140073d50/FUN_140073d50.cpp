// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073d50  size: 291 bytes
// Name:    FUN_140073d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140073e80, FUN_144f399e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140073d50(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  cVar3 = func_0x000144edc1d0(uVar1);
  if ((cVar3 == '\0') && (cVar3 = FUN_144f399e0(uVar1), cVar3 == '\0')) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    cVar3 = func_0x0001451f9a70(*(undefined8 *)(lVar4 + 0x50));
    if ((cVar3 == '\0') && (lVar4 = func_0x000144e8f430(lVar4 + 0x10,_DAT_14999ec04), lVar4 == 0)) {
      uVar2 = *(uint *)(param_1 + 0x9c);
      cVar3 = FUN_140073e80(uVar2);
      if (cVar3 == '\0') {
        lVar4 = func_0x000144eaa5c0(uVar2);
        if (((((((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x1f08), lVar4 == 0)) ||
               ((cVar3 = func_0x00014053a920(*(undefined1 *)(lVar4 + 0x11c9)), cVar3 == '\0' &&
                (*(int *)(lVar4 + 0x760) == 0)))) &&
              ((cVar3 = func_0x000144eaa610(uVar2), cVar3 == '\0' &&
               ((*(byte *)(param_1 + 0x37) & 1) == 0)))) &&
             ((lVar4 = func_0x000144e98ba0(uVar2), lVar4 == 0 ||
              ((*(byte *)(lVar4 + 0xe8) & 1) == 0)))) &&
            (cVar3 = func_0x000144efcdd0(uVar2), cVar3 == '\0')) &&
           ((lVar4 = func_0x000144dd11e0(uVar2), lVar4 == 0 ||
            (((*(uint *)(lVar4 + 0x308) & 1) == 0 &&
             ((*(uint *)(lVar4 + 0x308) & 2) == 0 && (*(uint *)(lVar4 + 0x304) & 0x1080) == 0))))))
        {
          if (((uVar2 & 0x3e0000) == 0x80000) &&
             (*(short *)(lRam000000014abbe030 +
                        (ulonglong)((uVar2 & 0x1ffff) * iRam000000014abbe024 + 0xe) * 2) != -1)) {
            bVar5 = *(longlong *)(lRam000000014abbe040 + 0xe0) != 0;
          }
          else {
            bVar5 = false;
          }
          return bVar5;
        }
      }
    }
  }
  return true;
}

