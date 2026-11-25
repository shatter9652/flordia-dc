// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aa530  size: 209 bytes
// Name:    FUN_1401aa530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1401aa530(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0x1ffff) {
    uVar6 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if ((((~uVar6 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
        (uVar6 = uVar6 & 0x7fe0000, uVar6 == (uVar1 & 0xfffe0000))) &&
       (lVar4 = *_DAT_14abb6918, lVar4 != 0)) {
      uVar2 = *(undefined4 *)
               (lVar4 + 0x9c + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]));
      lVar4 = func_0x000144da10f0(uVar2,lVar4,uVar6,0);
      if (((lVar4 != 0) &&
          (((*(byte *)(param_1 + 0x92) & 2) != 0 || ((*(byte *)(param_1 + 0x91) & 8) != 0)))) &&
         ((lVar5 = func_0x000144dd7540(uVar2), lVar5 == 0 ||
          (((*(byte *)(lVar5 + 0x10) & 0x20) == 0 || (*(longlong *)(lVar5 + 0x898) == 0)))))) {
        uVar3 = *(undefined8 *)(lVar4 + 0x650);
        lVar4 = func_0x000144f3ea40(uVar3,0x1ba);
        if (lVar4 == 0) {
          lVar4 = func_0x000144f3ea40(uVar3,0x4e);
          return lVar4 != 0;
        }
        return true;
      }
    }
  }
  return false;
}

