// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005aa70  size: 54 bytes
// Name:    FUN_14005aa70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145044140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14005aa70(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  cVar1 = FUN_145044140();
  if (cVar1 == '\0') {
    return 0;
  }
  plVar3 = _DAT_147c84458;
  if (DAT_147c84461 == '\0') {
    plVar3 = (longlong *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014005aa98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar3 + 0xb0))();
  return uVar2;
}

