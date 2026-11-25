// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011bbf0  size: 160 bytes
// Name:    FUN_14011bbf0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fcadf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14011bbf0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = func_0x00014529f640(*(undefined4 *)(param_1 + 0x9c));
  if ((lVar3 != 0) && (uVar1 = *(uint *)(lVar3 + 0x164), uVar1 != 0x1ffff)) {
    uVar4 = *(uint *)(_DAT_14abbe2e8[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if (((~uVar4 & *(uint *)(_DAT_14abbe2e8 + 6)) == 0) &&
       (((uVar4 = uVar4 & 0x7fe0000, uVar4 == (uVar1 & 0xfffe0000) &&
         (lVar3 = *_DAT_14abbe2e8, lVar3 != 0)) &&
        (lVar3 = func_0x0001453c0100(*(undefined4 *)
                                      (lVar3 + 0x9c +
                                      (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abbe2e8[1])),lVar3
                                     ,uVar4,0), lVar3 != 0)))) {
      lVar3 = *(longlong *)(lVar3 + 0x18);
      cVar2 = FUN_144fcadf0(*(undefined4 *)(lVar3 + 0x44),*(undefined8 *)(lVar3 + 0x48),param_1);
      if ((cVar2 != '\0') && (*(char *)(lVar3 + 0x44) == '\x01')) {
        return 1;
      }
    }
  }
  return 0;
}

