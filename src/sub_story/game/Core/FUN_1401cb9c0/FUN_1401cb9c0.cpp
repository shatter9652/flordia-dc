// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cb9c0  size: 123 bytes
// Name:    FUN_1401cb9c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145086410, FUN_144dd33e0, FUN_140093560, FUN_1401cba40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401cb9c0(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  cVar1 = FUN_144dd33e0(*param_2,param_2[1],0x1c,2);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((cVar1 != '\0') && (lVar4 = *param_2, lVar4 != 0)) {
    lVar3 = FUN_145086410();
    if (lVar4 != lVar3) {
      lVar4 = FUN_1401cba40(*(undefined8 *)(param_1 + 0x3b8),*(undefined4 *)(param_1 + 0x3c0),lVar4)
      ;
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar2 = FUN_140093560(lVar4);
        uVar5 = (ulonglong)uVar2;
      }
    }
  }
  return uVar5 & 0xffffffff;
}

