// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140004430  size: 145 bytes
// Name:    FUN_140004430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140037a50, FUN_140056cb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140004430(longlong param_1,longlong param_2,undefined8 param_3,byte param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  
  if (*(longlong *)(param_1 + 0xe800 + param_2 * 8) != 0) {
    bVar2 = func_0x000144da9f50(param_1);
    if (((bVar2 & param_4) == 1) && ((**(uint **)(param_1 + 0x12198) & 0xc000000) == 0)) {
      cVar3 = func_0x000144e88f60(param_1);
      if (cVar3 != '\0') {
        puVar1 = *(uint **)(param_1 + 0x12198);
        while ((*puVar1 & 0xe000000) != 0x2000000) {
          FUN_140037a50(puVar1,0,1);
        }
        FUN_140056cb0(param_1);
      }
    }
  }
  *(undefined8 *)(param_1 + 0xe800 + param_2 * 8) = param_3;
  return;
}

