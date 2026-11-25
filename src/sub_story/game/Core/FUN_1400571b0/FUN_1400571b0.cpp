// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400571b0  size: 146 bytes
// Name:    FUN_1400571b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400571b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = 0;
  do {
    lVar1 = *(longlong *)(lVar4 * 8 + 0x1475e7c60);
    if ((lVar1 != 0) && (uVar3 = *(uint *)(param_1 + lVar4 * 4), uVar3 != 0xffffffff)) {
      lVar2 = *(longlong *)(lVar4 * 8 + 0x1475e7d60);
      do {
        if (*param_2 == 0) {
          (*(code *)param_2[1])
                    (lVar1,*(undefined4 *)(*(longlong *)(lVar2 + 8) + (ulonglong)uVar3 * 4));
        }
        else {
          (*(code *)param_2[1])(*param_2,lVar1);
        }
        uVar3 = *(uint *)(*(longlong *)(lVar2 + 0x10) + (ulonglong)uVar3 * 4);
      } while (uVar3 != 0xffffffff);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x20);
  return;
}

