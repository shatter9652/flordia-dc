// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f0e20  size: 126 bytes
// Name:    FUN_1400f0e20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400f0ea0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1400f0e20(longlong param_1,undefined8 *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  longlong lVar8;
  byte bStack_39;
  undefined7 uVar7;
  
  uVar7 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar6 = CONCAT71(uVar7,1);
  if ((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 4), (ulonglong)uVar2 != 0)) {
    lVar3 = *(longlong *)(param_1 + 8);
    uVar6 = CONCAT71(uVar7,1);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        bStack_39 = 0;
        cVar5 = FUN_1400f0ea0(lVar4,*param_2,&bStack_39);
        if (cVar5 == '\0') {
          bVar1 = *param_3;
          uVar6 = 0;
          *param_3 = bVar1 | bStack_39;
          if ((bVar1 | bStack_39) != 0) break;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((ulonglong)uVar2 << 3 != lVar8);
  }
  return uVar6 & 0xffffffff;
}

