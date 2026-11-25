// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b1f90  size: 117 bytes
// Name:    FUN_1400b1f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400b2010
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b1f90(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(short *)(param_1 + 0x20) != 0) {
    lVar3 = param_1 + 0x10;
    uVar5 = 0;
    do {
      uVar1 = *(ushort *)(*(longlong *)(lVar3 + 8) + 4 + uVar5 * 8);
      lVar2 = (ulonglong)((uint)uVar1 * (int)_DAT_14758fc30[1]) + *_DAT_14758fc30;
      if ((~*(uint *)(_DAT_14758fc30[5] + (ulonglong)uVar1 * 4) & *(uint *)(_DAT_14758fc30 + 6)) !=
          0) {
        lVar2 = 0;
      }
      FUN_1400b2010(lVar2,*(undefined8 *)(param_1 + 0x48));
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if ((int)(uint)*(ushort *)(lVar3 + 0x10) <= (int)uVar4) {
        lVar3 = 0;
        uVar5 = 0;
      }
    } while (lVar3 != 0 || (int)uVar5 != 0);
  }
  return;
}

