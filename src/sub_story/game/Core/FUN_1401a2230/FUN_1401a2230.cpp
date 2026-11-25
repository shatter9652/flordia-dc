// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2230  size: 178 bytes
// Name:    FUN_1401a2230
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f68bd0, FUN_1401a2310, FUN_1408685e0, FUN_145069e80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401a2230(void)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  cVar2 = func_0x0001451ed070();
  if ((cVar2 == '\0') && (cVar2 = func_0x000144f862e0(), lVar4 = _DAT_14ab56e38, cVar2 == '\0')) {
    if (_DAT_14ab56e38 == 0) {
      return 1;
    }
    uVar1 = *(undefined4 *)(_DAT_14ab56e38 + 0x9c);
    lVar3 = func_0x000144ef6280(uVar1);
    if (((lVar3 == 0) ||
        (((*(byte *)(lVar3 + 0x13) & 2) == 0 && ((*(byte *)(lVar3 + 0x9f) & 2) == 0)))) &&
       (cVar2 = FUN_145069e80(uVar1), cVar2 == '\0')) {
      uStack_28 = *(undefined8 *)(lVar4 + 0x70);
      uStack_20 = *(undefined8 *)(lVar4 + 0x78);
      cVar2 = FUN_144f68bd0(&uStack_28,uVar1,9);
      if (cVar2 == '\0') {
        return 1;
      }
      cVar2 = FUN_1408685e0(lVar4);
      if ((((cVar2 != '\0') && (lVar4 = FUN_1401a2310(*(undefined4 *)(lVar4 + 0x9c)), lVar4 != 0))
          && (lVar4 = func_0x0001401a22f0(lVar4,5), lVar4 != 0)) && (*(int *)(lVar4 + 4) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

