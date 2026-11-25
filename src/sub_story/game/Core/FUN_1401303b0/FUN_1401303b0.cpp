// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401303b0  size: 97 bytes
// Name:    FUN_1401303b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14012d630
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401303b0(longlong param_1)

{
  ushort uVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar1 = *(ushort *)(param_1 + 0x20);
    if ((ulonglong)uVar1 != 0) {
      lVar4 = 0;
      do {
        piVar2 = *(int **)(*(longlong *)(param_1 + 0x18) + 0xb0 + lVar4);
        if ((((*(longlong *)(piVar2 + 6) == 0) && (*piVar2 != 0)) &&
            ((*(byte *)(piVar2 + 10) & 1) == 0)) && (cVar3 = FUN_14012d630(), cVar3 == '\0')) {
          return;
        }
        lVar4 = lVar4 + 0xb8;
      } while ((ulonglong)uVar1 * 0xb8 - lVar4 != 0);
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  return;
}

