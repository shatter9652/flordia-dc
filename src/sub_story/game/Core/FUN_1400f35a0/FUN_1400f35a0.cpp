// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f35a0  size: 209 bytes
// Name:    FUN_1400f35a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f3680
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400f35a0(undefined8 param_1,int param_2)

{
  if (param_2 - 8U < 2) {
    FUN_1400f3680();
  }
  else {
    switch(param_2) {
    case 0:
      FUN_1456a6660();
      break;
    case 1:
      FUN_14436d9d0();
      break;
    case 2:
      FUN_14436d9f0();
      break;
    case 3:
      FUN_14436da10();
      break;
    case 4:
    case 7:
      return 0;
    case 5:
    case 6:
      FUN_1456a6640();
      break;
    case 10:
      FUN_14436da30();
    }
  }
  return 1;
}

