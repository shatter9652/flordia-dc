// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401500c0  size: 65 bytes
// Name:    FUN_1401500c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140274950
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_1401500c0(longlong param_1,byte param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((param_2 & 4) == 0) && (*(short *)(param_1 + 0xc2) == 5)) {
    cVar1 = FUN_140274950(param_1);
    if (cVar1 == '\0') {
      cVar1 = func_0x000144ecebe0(*(undefined4 *)(param_1 + 0x9c));
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
    }
  }
  return uVar2 & 0xffffffff;
}

