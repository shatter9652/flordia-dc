// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400819b0  size: 120 bytes
// Name:    FUN_1400819b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14522cfc0, FUN_140114060
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1400819b0(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong alStack_60 [7];
  
  uVar3 = FUN_14522cfc0(param_1,alStack_60 + 1,6);
  if (uVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    uVar5 = 1;
    do {
      if ((alStack_60[uVar5] != 0) &&
         (cVar2 = FUN_140114060(*(undefined4 *)(alStack_60[uVar5] + 0x9c),param_2), cVar2 != '\0'))
      break;
      lVar1 = (1 - (ulonglong)uVar3) + uVar5;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),uVar5 < uVar3);
      uVar5 = uVar5 + 1;
    } while (lVar1 != 1);
  }
  return uVar4 & 0xffffff01;
}

