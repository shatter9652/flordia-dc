// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140048a60  size: 112 bytes
// Name:    FUN_140048a60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140048ad0, FUN_14519e820
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140048a60(undefined4 param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar3 = func_0x000144ddb100(1);
  uVar4 = FUN_140048ad0(uVar3,param_1);
  lVar1 = _DAT_14764e688;
  if ((int)uVar4 == 0) {
    uVar2 = FUN_14519e820(_DAT_14764e680,_DAT_14764e688,param_1);
    if (uVar2 == 0xffffffff) {
      uVar4 = 0;
    }
    else {
      uVar4 = (ulonglong)
              *(uint *)(_DAT_14764e658 + 0x10 +
                       (ulonglong)
                       *(uint *)(lVar1 + (ulonglong)(uVar2 >> 4) * 0x90 + 0x14 +
                                (ulonglong)(uVar2 & 0xf) * 8) * 0x18);
    }
  }
  return uVar4;
}

