// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140176b20  size: 137 bytes
// Name:    FUN_140176b20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e65fc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


char FUN_140176b20(longlong param_1)

{
  char cVar1;
  char cVar2;
  float fStack_1c;
  
  if ((*(longlong *)(param_1 + 0x10) == 0) ||
     (cVar1 = *(char *)(*(longlong *)(param_1 + 0x10) + 0x2c), cVar1 == '\0')) {
    cVar1 = FUN_144e65fc0(param_1,0x51bb4460);
    if (cVar1 == '\0') {
      fStack_1c = 0.0;
      cVar2 = FUN_144e65fc0(param_1,0x6a1ceb62,&fStack_1c);
      cVar1 = (0.0 < fStack_1c) + '\x01';
      if (cVar2 == '\0') {
        cVar1 = '\0';
      }
    }
    else {
      cVar1 = '\x02';
    }
  }
  return cVar1;
}

