// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016cf00  size: 55 bytes
// Name:    FUN_14016cf00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145028490
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14016cf00(longlong *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  
  cVar2 = FUN_145028490(*param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  lVar6 = *(longlong *)(*param_1 + 0x1a0);
  if (lVar6 == 0) {
    return 0;
  }
  piVar3 = (int *)0x0;
  if (*(longlong *)(lVar6 + 8) != 1) {
    piVar3 = (int *)(*(longlong *)(lVar6 + 8) + 8 + lVar6);
  }
  uVar5 = *(uint *)(lVar6 + 4) & 0x7fffffff;
  piVar1 = piVar3 + uVar5;
  piVar4 = piVar3;
  if (uVar5 != 0) {
    lVar6 = (ulonglong)uVar5 << 2;
    do {
      piVar4 = piVar3;
      if (*piVar3 == param_2) break;
      piVar3 = piVar3 + 1;
      lVar6 = lVar6 + -4;
      piVar4 = piVar1;
    } while (lVar6 != 0);
  }
  return CONCAT71((int7)((ulonglong)piVar4 >> 8),piVar4 != piVar1);
}

