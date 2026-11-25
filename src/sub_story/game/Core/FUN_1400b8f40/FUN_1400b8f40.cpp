// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b8f40  size: 100 bytes
// Name:    FUN_1400b8f40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140073960
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400b8f40(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar1 = *(int *)(param_1 + 0x34);
    if (0 < (longlong)iVar1) {
      lVar4 = 0;
      do {
        puVar3 = *(undefined4 **)(*(longlong *)(param_1 + 0x38) + lVar4 * 8);
        if (puVar3 != (undefined4 *)0x0) {
          iVar2 = puVar3[3];
          if ((iVar2 == 0) || (iVar2 == 7)) {
            fVar5 = (float)FUN_140073960(iVar2,*puVar3);
            if (*(float *)(param_1 + 0x4c) < fVar5) {
              *(float *)(param_1 + 0x4c) = fVar5;
            }
          }
        }
        lVar4 = lVar4 + 1;
      } while (iVar1 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}

