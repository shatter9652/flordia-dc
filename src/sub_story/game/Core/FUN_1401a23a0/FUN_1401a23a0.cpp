// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a23a0  size: 119 bytes
// Name:    FUN_1401a23a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1401a23a0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x18))();
  if (((param_2 < uVar2) && (param_2 < _DAT_14aa56000)) &&
     (uVar2 = *(uint *)((ulonglong)param_2 * 4 + 0x14aa56004), uVar2 != 0x1ffff)) {
    uVar1 = *(uint *)(_DAT_14abbe2e8[5] + (ulonglong)(uVar2 & 0x1ffff) * 4);
    if (((~uVar1 & *(uint *)(_DAT_14abbe2e8 + 6)) == 0) &&
       ((uVar1 & 0x7fe0000) == (uVar2 & 0xfffe0000))) {
      return (ulonglong)((uVar2 & 0x1ffff) * (int)_DAT_14abbe2e8[1]) + *_DAT_14abbe2e8;
    }
  }
  return 0;
}

