// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140070370  size: 136 bytes
// Name:    FUN_140070370
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140070340
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140070370(longlong param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  if (param_3 == 1) {
    uVar1 = *(uint *)(param_1 + 0x10);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
  }
  if (uVar1 < param_2) {
    bVar5 = false;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    bVar5 = true;
    if (((-1 < (int)uVar1) && (uVar2 = *(uint *)(param_1 + 0x1c), uVar1 <= uVar2)) &&
       ((ulonglong)uVar2 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x20);
      uVar7 = 0;
      lVar9 = 0;
      do {
        uVar6 = FUN_140070340(*(undefined8 *)(lVar3 + lVar9));
        uVar8 = uVar7 + 1;
        uVar4 = uVar8;
        if (uVar6 <= param_2) {
          uVar4 = uVar7;
        }
        uVar7 = uVar4;
        bVar5 = uVar6 <= param_2 || uVar8 < uVar1;
      } while ((uVar6 <= param_2 || uVar8 < uVar1) &&
              (bVar10 = (ulonglong)uVar2 * 8 + -8 != lVar9, lVar9 = lVar9 + 8, bVar10));
    }
  }
  return bVar5;
}

