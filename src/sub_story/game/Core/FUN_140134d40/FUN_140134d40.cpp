// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140134d40  size: 41 bytes
// Name:    FUN_140134d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fd1540
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140134d40(void)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144fd1540();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140134d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*_DAT_1476b48f8 + 0xb0))();
    return uVar2;
  }
  return 0;
}

