// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011fdd0  size: 19 bytes
// Name:    FUN_14011fdd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ec8b60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011fdd0(void)

{
  char cVar1;
  longlong *plVar2;
  
  FUN_144ec8b60();
  plVar2 = (longlong *)(**(code **)(lRam0000000147455f40 + 0x18))(0x147455f40);
  cVar1 = func_0x00014041e990(plVar2[0x1b]);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)plVar2[0x1a] + 0x60))();
    (**(code **)(*(longlong *)plVar2[0x1b] + 0x60))();
                    /* WARNING: Could not recover jumptable at 0x00014074543d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x48))(plVar2);
    return;
  }
  return;
}

