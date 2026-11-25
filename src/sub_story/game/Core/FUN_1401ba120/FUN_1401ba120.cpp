// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ba120  size: 144 bytes
// Name:    FUN_1401ba120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14436c810, FUN_1401ba1b0, FUN_1401ba2d0, FUN_1401ba270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401ba120(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  uint uStack_20;
  uint uStack_1c;
  
  FUN_1401ba270(param_1,&uStack_1c);
  *param_2 = uStack_1c;
  FUN_1401ba1b0(param_1,&uStack_1c);
  uVar1 = (ulonglong)uStack_1c;
  if (uStack_1c == 0) {
    param_2[1] = 10;
    FUN_1401ba2d0(param_1,&uStack_20);
  }
  else {
    if (uStack_1c == 0xffffffff) {
      return 0;
    }
    if (uStack_1c == 1) {
      param_2[1] = 0x15;
      param_2[2] = 0;
      goto LAB_1401ba170;
    }
    if (uStack_1c != 2) goto LAB_1401ba170;
    param_2[1] = 0x1c;
    FUN_14436c810(param_1,&uStack_20);
  }
  uVar1 = (ulonglong)uStack_20;
  param_2[2] = uStack_20;
LAB_1401ba170:
  return CONCAT71((int7)(uVar1 >> 8),1);
}

