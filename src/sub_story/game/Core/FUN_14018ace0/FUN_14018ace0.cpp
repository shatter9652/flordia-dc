// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018ace0  size: 148 bytes
// Name:    FUN_14018ace0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140835b70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14018ace0(longlong param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_2 < 0xb) {
    uVar1 = *(uint *)(param_1 + 0x110);
    uVar3 = 1 << (param_2 & 0x1f);
    if ((char)param_3 == '\0') {
      *(uint *)(param_1 + 0x110) = ~uVar3 & uVar1;
      if ((uVar1 & uVar3) == 0) {
        return;
      }
    }
    else {
      *(uint *)(param_1 + 0x110) = uVar1 | uVar3;
      if ((uVar1 & uVar3) != 0) {
        return;
      }
    }
    uVar4 = (ulonglong)*(uint *)((ulonglong)param_2 * 0x20 + 0x1499f9ab4);
    if (uVar4 != 0) {
      lVar2 = *(longlong *)((ulonglong)param_2 * 0x20 + 0x1499f9ab8);
      lVar5 = 0;
      do {
        FUN_140835b70(param_1,*(undefined4 *)(lVar2 + lVar5),param_3);
        lVar5 = lVar5 + 4;
      } while (uVar4 << 2 != lVar5);
    }
  }
  return;
}

