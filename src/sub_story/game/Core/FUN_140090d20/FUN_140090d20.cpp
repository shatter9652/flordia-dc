// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090d20  size: 226 bytes
// Name:    FUN_140090d20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144eba870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140090d20(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if ((lVar4 == 0) || (DAT_14927f938 != '\0')) {
LAB_140090d3c:
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (DAT_14a9ec598 == '\0') goto LAB_140090d3e;
    if (*(int *)(param_1 + 0xd8) == 0) {
      func_0x000144eba840(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x58));
      lVar4 = FUN_144eba870(*(undefined4 *)(lVar4 + 0x48),*(undefined8 *)(lVar4 + 0x50));
      if (lVar4 != 0) goto LAB_140090d3c;
    }
    if ((ulonglong)*(uint *)(param_1 + 0xfc) != 0) {
      lVar4 = 0;
      do {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x100) + lVar4);
        if ((((uVar1 != 0x1ffff) &&
             (uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4),
             (~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) == 0)) &&
            ((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000))) && (*_DAT_14abb6918 != 0))
        goto LAB_140090d3c;
        lVar4 = lVar4 + 4;
      } while ((ulonglong)*(uint *)(param_1 + 0xfc) << 2 != lVar4);
    }
  }
LAB_140090d3e:
  return uVar3 & 0xffffffff;
}

