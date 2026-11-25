// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011c7c0  size: 135 bytes
// Name:    FUN_14011c7c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450e1d80, FUN_145305050, FUN_140083460, FUN_144dd7510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14011c7c0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = FUN_144dd7510(*(undefined4 *)(param_1 + 0x9c));
  if (lVar4 != 0) {
    bVar1 = *(byte *)(lVar4 + 0xfa);
    if (0xe < bVar1) {
      return 0;
    }
    if ((0x718dU >> (bVar1 & 0x1f) & 1) == 0) {
      return 0;
    }
    if (bVar1 < 0xc) {
      lVar5 = func_0x000144eb3780(*(undefined4 *)(lVar4 + 0x9c));
      if (lVar5 != 0) {
        uVar3 = FUN_1450e1d80(lVar5 + 0x40,param_1);
        cVar2 = FUN_145305050(lVar4,uVar3);
        if (cVar2 != '\0') {
          return 0;
        }
      }
      cVar2 = FUN_140083460(lVar4);
      if (cVar2 != '\0') {
        *param_2 = lVar4;
        return 1;
      }
    }
  }
  return 0;
}

