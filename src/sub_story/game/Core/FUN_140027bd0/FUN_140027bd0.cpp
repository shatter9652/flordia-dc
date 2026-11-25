// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140027bd0  size: 91 bytes
// Name:    FUN_140027bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140027bd0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xa8))();
  if ((*(byte *)(param_1 + 0x50) & 2) == 0) {
    cVar2 = '\0';
  }
  else {
    cVar2 = *(char *)(_DAT_14ab7ef10 + 0x266);
  }
  if ((cVar2 == '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0x28), plVar1 != *(longlong **)(param_1 + 0x20))) {
                    /* WARNING: Could not recover jumptable at 0x000140027c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2);
    return;
  }
  return;
}

