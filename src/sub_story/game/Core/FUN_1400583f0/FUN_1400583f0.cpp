// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400583f0  size: 123 bytes
// Name:    FUN_1400583f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141fa7710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400583f0(int param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  if ((param_2 == 0) || ((*(byte *)(param_2 + 0x34) & 1) != 0)) {
LAB_14005841e:
    uVar3 = (_DAT_14ab4e7c0 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab4e7c0 >> 0x20);
    uVar2 = CONCAT71((uint7)(_DAT_14ab4e7c0 >> 0x28),
                     (float)((uint)uVar3 & 0x7fffff) * _DAT_14615af54 <=
                     (float)param_1 * _DAT_146159ef4);
    _DAT_14ab4e7c0 = uVar3;
  }
  else {
    if ((*(uint *)(param_2 + 0xb4) & 0x3e) == 0x2e) {
      cVar1 = FUN_141fa7710(param_2);
      if (cVar1 != '\0') goto LAB_14005841e;
    }
    uVar2 = 0;
  }
  return uVar2;
}

