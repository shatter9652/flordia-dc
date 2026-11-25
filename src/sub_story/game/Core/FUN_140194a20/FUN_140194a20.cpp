// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194a20  size: 201 bytes
// Name:    FUN_140194a20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1452f4780, FUN_1451a2cd0, FUN_144f29ff0, FUN_144dd1870
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140194a20(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_44;
  
  uVar6 = *(uint *)(param_1 + 0x24);
  uVar5 = *(uint *)(param_1 + 0x14);
  if (((uVar6 | uVar5) & 0x7fffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    uVar4 = 0;
    do {
      lVar3 = FUN_1451a2cd0(param_1,uVar4);
      if (lVar3 != 0) {
        bVar1 = *(byte *)(lVar3 + 4);
        if (bVar1 < 0x17) {
          if ((0x48100eU >> (bVar1 & 0x1f) & 1) == 0) {
            if (bVar1 != 0xd) goto LAB_140194aca;
            uStack_44 = FUN_144f29ff0(lVar3);
          }
          else {
            uStack_44 = FUN_144dd1870(lVar3);
          }
        }
        else {
LAB_140194aca:
          uStack_44 = FUN_1452f4780(lVar3);
        }
        uVar2 = func_0x000144f2a060(&uStack_44,4,uVar2);
        uVar5 = *(uint *)(param_1 + 0x14);
        uVar6 = *(uint *)(param_1 + 0x24);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uVar6 & 0x7fffffff) + (uVar5 & 0x7fffffff));
  }
  return uVar2;
}

