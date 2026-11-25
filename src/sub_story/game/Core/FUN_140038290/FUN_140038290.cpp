// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140038290  size: 110 bytes
// Name:    FUN_140038290
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140038290(uint param_1,uint param_2)

{
  longlong lVar1;
  uint uVar2;
  
  if (((param_1 >> 0xe & 1) != 0) && (param_2 != 0x1ffff)) {
    uVar2 = *(uint *)(_DAT_14abbe2e8[5] + (ulonglong)(param_2 & 0x1ffff) * 4);
    if (((~uVar2 & *(uint *)(_DAT_14abbe2e8 + 6)) == 0) &&
       (((uVar2 = uVar2 & 0x7fe0000, uVar2 == (param_2 & 0xfffe0000) &&
         (lVar1 = *_DAT_14abbe2e8, lVar1 != 0)) &&
        (lVar1 = func_0x0001453c0100(*(undefined4 *)
                                      (lVar1 + 0x9c +
                                      (ulonglong)((param_2 & 0x1ffff) * (int)_DAT_14abbe2e8[1])),
                                     lVar1,uVar2,0), lVar1 != 0)))) {
      return *(undefined8 *)(lVar1 + 0x18);
    }
  }
  return 0;
}

