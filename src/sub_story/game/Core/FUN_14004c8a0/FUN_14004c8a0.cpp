// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004c8a0  size: 145 bytes
// Name:    FUN_14004c8a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a4940, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14004c8a0(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  
  if (*(longlong *)(param_1 + 0xdb40 + param_2 * 8) != 0) {
    bVar2 = func_0x000144da9f50(param_1);
    if (((bVar2 & param_4) == 1) && ((**(uint **)(param_1 + 0x12198) & 0xc000000) == 0)) {
      cVar3 = func_0x000144f25d00(param_1);
      if (cVar3 != '\0') {
        puVar1 = *(uint **)(param_1 + 0x12198);
        while ((*puVar1 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar1,0,1);
        }
        FUN_1456a4940(param_1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xdb40 + param_2 * 8) = param_3;
  return;
}

