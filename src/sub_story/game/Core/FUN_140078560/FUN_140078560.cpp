// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140078560  size: 111 bytes
// Name:    FUN_140078560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ee95f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140078560(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if ((param_2 != 0) && (lVar2 == 0)) {
    lVar2 = 0;
    plVar1 = (longlong *)
             FUN_144ee95f0(*(undefined1 *)(*(longlong *)(param_2 + 0x30) + 0x1c),1,
                           *(undefined2 *)(*(longlong *)(param_2 + 0x30) + 8),0);
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      if (*(char *)(*(longlong *)(param_2 + 0x30) + 0x1c) == '\x05') {
        *(undefined1 *)(plVar1 + 0xc) = 1;
      }
      (**(code **)(*plVar1 + 0x78))(plVar1,1);
      _DAT_149aea530 = _DAT_149aea530 + 1;
      lVar2 = *param_1;
    }
  }
  return lVar2 != 0;
}

