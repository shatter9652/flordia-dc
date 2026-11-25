// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b46e0  size: 127 bytes
// Name:    FUN_1400b46e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145cd6ee0, FUN_144fd2940
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b46e0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  if (_DAT_147ec8950 == 0) {
    lVar1 = FUN_145cd6ee0();
    if (lVar1 != 0) {
      lVar1 = FUN_145cd6ee0();
      lVar2 = FUN_145cd6ee0();
      if (lVar1 != 0) {
        _DAT_147ec8960 =
             *(undefined8 *)
              ((ulonglong)((uint)(*(char *)(lVar2 + 0x40) == '\t') * 0x50) + 0x147ec88a0);
        _DAT_147ec8958 =
             (ulonglong)*(ushort *)(lVar1 + 0x3a) << 0x20 | (ulonglong)*(ushort *)(lVar1 + 0x38);
        _DAT_147ec8950 = FUN_144fd2940(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x20));
      }
    }
  }
  return;
}

