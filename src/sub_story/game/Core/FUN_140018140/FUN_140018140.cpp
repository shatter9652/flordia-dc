// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018140  size: 119 bytes
// Name:    FUN_140018140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f1eaf0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140018140(longlong param_1)

{
  longlong lVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  if ((*(ushort *)(param_1 + 0xb4) != 0xffff) && (_DAT_14ab73aa0 != 0)) {
    lVar1 = *(longlong *)(_DAT_14ab73aa0 + 0x8ab8 + (ulonglong)*(byte *)(param_1 + 0x7e) * 0x8ad0);
    if (lVar1 != 0) {
      uStack_14 = FUN_144f1eaf0(lVar1 + (ulonglong)
                                        ((uint)*(ushort *)(param_1 + 0xb4) * _DAT_14ab73a88));
      func_0x000144f1eac0(*(undefined8 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0xfe),&uStack_14
                         );
    }
  }
  return uStack_14;
}

