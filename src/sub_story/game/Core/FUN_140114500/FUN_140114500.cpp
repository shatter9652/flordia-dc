// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114500  size: 58 bytes
// Name:    FUN_140114500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140114500(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar2 = func_0x000144eb3780();
  if (lVar2 == 0) {
    return 0;
  }
  lVar3 = func_0x000144eb37f0((char *)(lVar2 + 0x40));
  if (lVar3 == 0) {
    lVar3 = func_0x000144eb3780(*(undefined4 *)(*(longlong *)(lVar2 + 0x110) + 0x9c));
    if (lVar3 != 0) {
      uVar4 = (uint)*(char *)(lVar2 + 0x40);
      uVar1 = FUN_144db6280(*(undefined8 *)(lVar3 + 8));
      if ((uVar4 < uVar1) &&
         (uVar1 = *(uint *)(lVar2 + 0xc4 + (longlong)(int)uVar4 * 4), uVar1 != 0x1ffff)) {
        uVar4 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
        if (((~uVar4 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
           (((uVar4 & 0x7fe0000) == (uVar1 & 0xfffe0000) && (*_DAT_14abb6918 != 0)))) {
          return *_DAT_14abb6918 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]);
        }
      }
    }
    uVar1 = *(uint *)(lVar2 + 0x104);
    if (uVar1 != 0x1ffff) {
      uVar4 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
      if (((~uVar4 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
         ((uVar4 & 0x7fe0000) == (uVar1 & 0xfffe0000))) {
        return (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
      }
    }
    return 0;
  }
  return lVar3;
}

