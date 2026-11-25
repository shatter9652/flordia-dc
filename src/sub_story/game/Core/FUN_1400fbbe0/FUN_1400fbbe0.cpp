// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fbbe0  size: 167 bytes
// Name:    FUN_1400fbbe0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1408866d0, FUN_144ef6160
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_1400fbbe0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_1408866d0();
  cVar1 = FUN_144ef6160(param_2);
  if (((((cVar1 == '\0') || (lVar3 == 0)) || (cVar1 = FUN_144ef6160(lVar3), cVar1 == '\0')) &&
      (((*(uint *)(param_2 + 0xe8) >> 0x12 & 0xf) - 1 < 5 &&
       (lVar3 = func_0x000144da10f0(*(undefined4 *)(param_2 + 0x9c)), lVar3 != 0)))) &&
     (((*(byte *)(lVar3 + 0x192) & 4) != 0 && (0 < (longlong)*(int *)(lVar3 + 0x188))))) {
    lVar4 = 0;
    do {
      if (*(short *)(lVar3 + 0x122 + lVar4 * 4) == 0x192) {
        return 1;
      }
      lVar4 = lVar4 + 1;
    } while (*(int *)(lVar3 + 0x188) != lVar4);
  }
  lVar3 = FUN_1408866d0(param_1);
  uVar2 = 1;
  if ((lVar3 != 0) && (cVar1 = FUN_144db7b20(*(undefined4 *)(lVar3 + 0x9c)), cVar1 == '\0')) {
    uVar2 = func_0x0001406253c0(lVar3);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}

