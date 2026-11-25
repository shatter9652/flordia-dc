// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b4670  size: 108 bytes
// Name:    FUN_1400b4670
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd2940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b4670(void)

{
  if ((_DAT_147ed0410 == 0) && (_DAT_147c84470 != 0)) {
    _DAT_147ed0420 =
         *(undefined8 *)
          ((ulonglong)((uint)(*(char *)(_DAT_147c84470 + 0x40) == '\t') * 0x50) + 0x147ec88e0);
    _DAT_147ed0418 =
         (ulonglong)*(ushort *)(_DAT_147c84470 + 0x3a) << 0x20 |
         (ulonglong)*(ushort *)(_DAT_147c84470 + 0x38);
    _DAT_147ed0410 =
         FUN_144fd2940(*(undefined8 *)(_DAT_147c84470 + 0x18),*(undefined8 *)(_DAT_147c84470 + 0x20)
                      );
  }
  return;
}

