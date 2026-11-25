// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401144b0  size: 72 bytes
// Name:    FUN_1401144b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd11b0, FUN_144de6230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401144b0(char param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((((param_1 != '\x04') || (cVar2 = FUN_144dd11b0(param_2), cVar2 == '\0')) ||
      (lVar4 = FUN_144de6230(param_2), lVar4 == 0)) ||
     (uVar3 = *(uint *)(lVar4 + 0x30), (0x1cU >> (uVar3 & 0x1f) & 1) == 0)) {
    return 0;
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x9c);
  if ((char)uVar3 != '\x01') {
    lVar4 = func_0x000144fc0920(uVar1);
    if ((lVar4 != 0) &&
       (lVar4 = FUN_140113b30(*(undefined4 *)(lVar4 + 0x14),*(undefined8 *)(lVar4 + 0x18)),
       lVar4 != 0)) {
      return lVar4;
    }
    if ((char)uVar3 == '\x03') {
      lVar4 = func_0x000144fab120(uVar1);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0xec) == 1)) {
        return 0;
      }
    }
    else if (((uVar3 & 0xff) == 4) && (lVar4 = FUN_1401144b0(4,uVar1), lVar4 != 0)) {
      return lVar4;
    }
  }
  if (((0x1cU >> (uVar3 & 0x1f) & 1) != 0) && (lVar4 = FUN_144fc1060(uVar1), lVar4 != 0)) {
    uVar1 = *(undefined4 *)(lVar4 + 0x9c);
    lVar4 = FUN_140114460(uVar1);
    if (lVar4 != 0) {
      return lVar4;
    }
    lVar4 = func_0x000144eb3780(uVar1);
    if (lVar4 == 0) {
      return 0;
    }
    lVar5 = func_0x000144eb37f0((char *)(lVar4 + 0x40));
    if (lVar5 != 0) {
      return lVar5;
    }
    lVar5 = func_0x000144eb3780(*(undefined4 *)(*(longlong *)(lVar4 + 0x110) + 0x9c));
    if (lVar5 != 0) {
      uVar6 = (uint)*(char *)(lVar4 + 0x40);
      uVar3 = FUN_144db6280(*(undefined8 *)(lVar5 + 8));
      if ((uVar6 < uVar3) &&
         (uVar3 = *(uint *)(lVar4 + 0xc4 + (longlong)(int)uVar6 * 4), uVar3 != 0x1ffff)) {
        uVar6 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar3 & 0x1ffff) * 4);
        if (((~uVar6 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
           (((uVar6 & 0x7fe0000) == (uVar3 & 0xfffe0000) && (*_DAT_14abb6918 != 0)))) {
          return *_DAT_14abb6918 + (ulonglong)((uVar3 & 0x1ffff) * (int)_DAT_14abb6918[1]);
        }
      }
    }
    uVar3 = *(uint *)(lVar4 + 0x104);
    if (uVar3 != 0x1ffff) {
      uVar6 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar3 & 0x1ffff) * 4);
      if (((~uVar6 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
         ((uVar6 & 0x7fe0000) == (uVar3 & 0xfffe0000))) {
        return (ulonglong)((uVar3 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
      }
    }
    return 0;
  }
  return 0;
}

