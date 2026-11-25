// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff1a0  size: 159 bytes
// Name:    FUN_1400ff1a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1403e2d30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400ff1a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  cVar1 = func_0x000144da28f0(param_3);
  if (((cVar1 != '\0') && (lVar2 = func_0x000144da6540(param_3), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x10c8), lVar2 != 0)) {
    cVar1 = func_0x000145311e80(lVar2 + 0x1390);
    if (cVar1 == '\0') {
      lVar3 = 0;
    }
    else {
      lVar3 = func_0x000144dd0bd0(*(undefined4 *)(lVar2 + 0x13b8));
    }
    if (((lVar3 == param_1) && (*(int *)(lVar2 + 0x13d4) != 0)) &&
       (cVar1 = FUN_1403e2d30(param_2), cVar1 != '\0')) {
      *param_4 = 0;
      param_4[1] = 0;
      return 1;
    }
  }
  return 0;
}

