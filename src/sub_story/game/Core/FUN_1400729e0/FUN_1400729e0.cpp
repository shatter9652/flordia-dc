// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400729e0  size: 86 bytes
// Name:    FUN_1400729e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed5ad0, FUN_140289570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400729e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iStack_14;
  
  uVar3 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  lVar2 = FUN_144ed5ad0(uVar3);
  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x14) != 0)) &&
     (cVar1 = FUN_140289570(uVar3,*(int *)(lVar2 + 0x14),&iStack_14), cVar1 != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (0 < (int)*(uint *)(param_1 + 0x24)) {
      uVar3 = (ulonglong)*(uint *)(param_1 + 0x24);
      do {
        if (*(int *)(*(longlong *)(lVar2 + 8) + 0x30) == iStack_14) {
          return lVar2;
        }
        lVar2 = lVar2 + 0xc0;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return 0;
  }
  return 0;
}

