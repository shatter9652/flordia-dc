// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005b610  size: 139 bytes
// Name:    FUN_14005b610
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e992c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14005b610(void)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if (_DAT_14a151a08 != 0) {
    uVar2 = 0;
    plVar3 = _DAT_14a04ec10;
    uVar1 = _DAT_14a151a08;
    do {
      uVar4 = *(uint *)(uVar2 * 8 + 0x14a151a0c) & 0x1ffff;
      if (((~*(uint *)(plVar3[5] + (ulonglong)uVar4 * 4) & *(uint *)(plVar3 + 6)) == 0) &&
         (*plVar3 != 0)) {
        if (**(char **)(*plVar3 + (ulonglong)(uVar4 * (int)plVar3[1]) + 0xc38) == '\0') {
          FUN_144e992c0();
          plVar3 = _DAT_14a04ec10;
          uVar1 = _DAT_14a151a08;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  _DAT_14a151a08 = 0;
  return;
}

