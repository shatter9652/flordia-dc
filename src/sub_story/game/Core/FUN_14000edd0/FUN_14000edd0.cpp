// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000edd0  size: 57 bytes
// Name:    FUN_14000edd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e4ba80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000edd0(void)

{
  uint uVar1;
  
  if (DAT_149ab8068 == '\0') {
    uVar1 = FUN_144e4ba80();
    if (100 < uVar1) {
      DAT_149ab8068 = 1;
                    /* WARNING: Could not recover jumptable at 0x000140007333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSemaphore(_DAT_149ab8058,1,(void *)0x0);
      return;
    }
  }
  return;
}

