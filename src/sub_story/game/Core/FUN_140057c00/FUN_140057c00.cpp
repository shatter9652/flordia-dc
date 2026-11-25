// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140057c00  size: 128 bytes
// Name:    FUN_140057c00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_143353f80, FUN_1452327e0, FUN_144e40400
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140057c00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 0x120) == '\0') {
    lVar2 = FUN_1452327e0();
    if (lVar2 != 0) {
      lVar2 = FUN_144e40400(*(undefined4 *)(lVar2 + 0x18));
      if (lVar2 != 0) goto LAB_140057c74;
    }
    if (0.0 < *(float *)(param_1 + 100)) {
      cVar1 = FUN_143353f80(param_4);
      if (cVar1 != '\0') {
        uVar3 = 0;
      }
    }
  }
LAB_140057c74:
  return uVar3 & 0xffffffff;
}

