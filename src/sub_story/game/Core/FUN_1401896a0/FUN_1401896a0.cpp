// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401896a0  size: 224 bytes
// Name:    FUN_1401896a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145044990, FUN_143b60820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401896a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (*(int *)(param_2 + 0xb8) == 1) {
    lVar5 = *(longlong *)(param_2 + 0x88);
    if (lVar5 != 0) {
LAB_1401896c2:
      return CONCAT71((int7)((ulonglong)lVar5 >> 8),*(longlong *)(lVar5 + 0x60) == param_1);
    }
    uVar4 = *(ulonglong *)(param_2 + 8) & 0xfffffffffffffff0;
    if ((uVar4 != 0) && (uVar1 = *(uint *)(param_2 + 0x100), uVar1 != 0x1ffff)) {
      uVar2 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
      if (((~uVar2 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0) &&
         (((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000) && (*_DAT_14abbe8c8 != 0)))) {
        lVar5 = *_DAT_14abbe8c8 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abbe8c8[1]);
        cVar3 = FUN_145044990(*(undefined4 *)(lVar5 + 0x9c));
        if ((cVar3 == '\0') && (*(int *)(param_2 + 0x118) != 0)) {
          FUN_143b60820(param_1,lVar5,*(int *)(param_2 + 0x118),uVar4);
          lVar5 = *(longlong *)(param_2 + 0x88);
          if (lVar5 != 0) goto LAB_1401896c2;
        }
      }
    }
  }
  return 0;
}

