// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140087aa0  size: 36 bytes
// Name:    FUN_140087aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140dcf0f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140087aa0(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  ulonglong uVar4;
  longlong lVar5;
  int *piStack_20;
  uint uStack_18;
  
  cVar2 = FUN_140dcf0f0();
  if (cVar2 != '\0') {
    return true;
  }
  FUN_14300d330(&piStack_20);
  uVar4 = (ulonglong)uStack_18;
  piVar1 = piStack_20 + uVar4;
  piVar3 = piStack_20;
  if (uVar4 != 0) {
    lVar5 = uVar4 << 2;
    do {
      piVar3 = piStack_20;
      if (*piStack_20 == param_1) break;
      piStack_20 = piStack_20 + 1;
      lVar5 = lVar5 + -4;
      piVar3 = piVar1;
    } while (lVar5 != 0);
  }
  return piVar3 != piVar1;
}

