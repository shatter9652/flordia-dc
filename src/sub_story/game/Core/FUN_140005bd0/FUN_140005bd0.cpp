// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140005bd0  size: 127 bytes
// Name:    FUN_140005bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140005ab0, FUN_1456a2550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140005bd0(uint param_1,ulonglong param_2)

{
  undefined8 uVar1;
  undefined1 uStack_19;
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = (ulonglong)param_1;
  uStack_18 = param_2 & 0xffffffff;
  uStack_19 = 1;
  FUN_140005ab0(0x1219db73,&uStack_19);
  if ((int)param_1 < 0x5be124b0) {
    if (param_1 == 0x22b1f5a9) {
      uVar1 = 5;
    }
    else {
      if (param_1 != 0x1855c6f5) {
        return;
      }
      uVar1 = 2;
    }
  }
  else if (param_1 == 0x5be124b0) {
    uVar1 = 1;
  }
  else {
    if (param_1 != 0x7f2d7bcf) {
      return;
    }
    uVar1 = 3;
  }
  FUN_1456a2550(uVar1);
  return;
}

