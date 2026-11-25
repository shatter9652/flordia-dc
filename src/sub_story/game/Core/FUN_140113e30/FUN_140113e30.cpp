// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140113e30  size: 104 bytes
// Name:    FUN_140113e30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145224aa0, FUN_141188600
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140113e30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined1 auStack_58 [64];
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x2c) == '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      FUN_145224aa0(auStack_58,param_3);
      uVar2 = 0;
      uVar1 = FUN_141188600(param_2,auStack_58,0x5b,0,0);
      if (uVar1 < 0x5c) {
        uVar2 = (ulonglong)((ulonglong)uVar1 - 1 < 0x17);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2 & 0xffffffff;
}

