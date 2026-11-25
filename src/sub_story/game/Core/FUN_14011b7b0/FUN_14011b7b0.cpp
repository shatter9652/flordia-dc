// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011b7b0  size: 98 bytes
// Name:    FUN_14011b7b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fca2d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011b7b0(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  undefined2 auStack_34 [2];
  
  if (0 < (int)param_3) {
    uVar4 = 0;
    do {
      uVar1 = *(uint *)(param_2 + uVar4 * 4);
      uVar3 = 0xffff;
      if ((~uVar1 & 0x1ffff) != 0) {
        cVar2 = FUN_144fca2d0(uVar1,auStack_34);
        if (cVar2 != '\0') {
          uVar3 = auStack_34[0];
        }
      }
      *(undefined2 *)(param_1 + uVar4 * 2) = uVar3;
      uVar4 = uVar4 + 1;
    } while (param_3 != uVar4);
  }
  return;
}

