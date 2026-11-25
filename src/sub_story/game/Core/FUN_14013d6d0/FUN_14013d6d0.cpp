// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013d6d0  size: 133 bytes
// Name:    FUN_14013d6d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145044990
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14013d6d0(uint param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  uint uVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 != 0x1ffff) {
    uVar5 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(param_1 & 0x1ffff) * 4);
    if ((((~uVar5 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0) &&
        (uVar5 = uVar5 & 0x7fe0000, uVar5 == (param_1 & 0xfffe0000))) && (*_DAT_14abbe8c8 != 0)) {
      uVar1 = *(undefined4 *)
               (*_DAT_14abbe8c8 + 0x9c + (ulonglong)((param_1 & 0x1ffff) * (int)_DAT_14abbe8c8[1]));
      cVar2 = FUN_145044990(uVar1,_DAT_14abbe8c8,uVar5,0);
      if (cVar2 == '\0') {
        lVar3 = func_0x000144eb3780(uVar1);
        if (lVar3 != 0) {
          cVar2 = func_0x000144dd0a90(*(undefined4 *)(lVar3 + 0xf74));
          if (cVar2 != '\0') goto LAB_14013d74c;
        }
        uVar4 = 0;
      }
    }
  }
LAB_14013d74c:
  return uVar4 & 0xffffffff;
}

