// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140136000  size: 76 bytes
// Name:    FUN_140136000
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140136050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140136000(uint param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar2 = (ulonglong)((param_1 & 0xffff) << 4);
  if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar2) == (short)(param_1 >> 0x10)) &&
      (lVar1 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar2), lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 0x154) & 1) != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
  }
  else {
    uVar3 = 0;
  }
  uVar2 = FUN_140136050(uVar3);
  return uVar2 ^ 1;
}

