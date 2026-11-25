// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010a390  size: 40 bytes
// Name:    FUN_14010a390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14010a390(byte param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulonglong uVar2;
  
  if (param_1 == 0xff) {
    param_1 = func_0x000145268610();
  }
  if (param_1 < 4) {
    cVar1 = func_0x000144fb0f10();
    if (cVar1 != '\0') {
      if (param_1 < 4) {
        uVar2 = CONCAT71((int7)((ulonglong)param_1 * 0x150 >> 8),
                         *(undefined1 *)((ulonglong)param_1 * 0x150 + 0x1498483fc)) &
                0xffffffffffffff04;
        return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 2);
      }
      FUN_1402675a0(0x146c31b38,1,param_3,0x1f7,0xe9c0d73e,2,param_1);
    }
    return 0;
  }
  return 0;
}

