// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140110790  size: 46 bytes
// Name:    FUN_140110790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fc21d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140110790(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = FUN_144fc21d0(&UNK_14678d1bb,0);
  cVar1 = func_0x000144ee8690();
  if (cVar1 == '\0') {
    return 0xffffffff;
  }
  iVar3 = FUN_144f135d0(param_1);
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    iVar5 = 0;
    do {
      uVar6 = (uint)(iVar3 + iVar5) >> 1;
      uVar4 = *(uint *)(param_2 + (ulonglong)uVar6 * 4) & 0x1fffffff;
      if (uVar4 < (uVar2 & 0x1fffffff)) {
        iVar5 = uVar6 + 1;
      }
      else {
        if (uVar4 <= (uVar2 & 0x1fffffff)) {
          return uVar6;
        }
        iVar3 = uVar6 - 1;
      }
    } while (iVar5 <= iVar3);
  }
  return 0xffffffff;
}

