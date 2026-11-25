// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401036c0  size: 121 bytes
// Name:    FUN_1401036c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140604ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1401036c0(int param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  
  cVar2 = func_0x000144fd5f10();
  if (((cVar2 != '\0') && (lVar3 = FUN_140604ec0(_DAT_14a922bd8), lVar3 != 0)) &&
     (uVar1 = *(uint *)(lVar3 + 0x2c), (ulonglong)uVar1 != 0)) {
    piVar4 = *(int **)(lVar3 + 0x30);
    cVar2 = func_0x0001413f4ab0(param_1);
    lVar3 = (ulonglong)uVar1 << 3;
    if (cVar2 == '\0') {
      do {
        if (piVar4[1] == param_1) {
LAB_140103735:
          return *piVar4;
        }
        piVar4 = piVar4 + 2;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
    else {
      do {
        if (*piVar4 == param_1) {
          piVar4 = piVar4 + 1;
          goto LAB_140103735;
        }
        piVar4 = piVar4 + 2;
        lVar3 = lVar3 + -8;
      } while (lVar3 != 0);
    }
  }
  return -1;
}

