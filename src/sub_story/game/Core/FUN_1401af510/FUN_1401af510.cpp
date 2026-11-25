// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401af510  size: 98 bytes
// Name:    FUN_1401af510
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa45a0, FUN_1401af5d0, FUN_1401af580
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401af510(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  FUN_1401af580();
  lVar2 = FUN_144fa45a0(param_1);
  if (lVar2 != 0) {
    lVar2 = func_0x000145112f90(*(undefined4 *)(lVar2 + 0x9c));
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x10) != 0)) {
      cVar1 = FUN_1401af5d0();
      if (cVar1 != '\0') {
        *(undefined8 *)(param_2 + 0xb8) = 0;
      }
    }
  }
  return;
}

