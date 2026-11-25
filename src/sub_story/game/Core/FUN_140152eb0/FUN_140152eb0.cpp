// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140152eb0  size: 86 bytes
// Name:    FUN_140152eb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401533a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140152eb0(longlong param_1,undefined4 param_2)

{
  uint uStack_4;
  
  if (param_1 != 0) {
    uStack_4 = (uint)((ulonglong)(param_1 - *_DAT_149e8e208) /
                     (ulonglong)*(uint *)(_DAT_149e8e208 + 1)) & 0x1ffff;
    uStack_4 = *(uint *)(_DAT_149e8e208[5] + (ulonglong)uStack_4 * 4) & 0xfffe0000 | uStack_4;
    FUN_1401533a0(0x14a9ecd60,&uStack_4,*(undefined4 *)(param_1 + 0x14),param_2);
  }
  return;
}

