// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400708e0  size: 59 bytes
// Name:    FUN_1400708e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140070920
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400708e0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  
  piVar2 = (int *)FUN_140070920(*(undefined8 *)(param_1 + 0xc0));
  if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) {
    return true;
  }
  if (*(uint *)(_DAT_14ab5d090 + 4) != 0) {
    uVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(_DAT_14ab5d090 + 8) + uVar3 * 8);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) == *piVar2)) {
        return *(short *)(lVar1 + 0x10) == 3;
      }
      uVar3 = uVar3 + 1;
    } while (*(uint *)(_DAT_14ab5d090 + 4) != uVar3);
  }
  return false;
}

