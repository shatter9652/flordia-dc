// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401761e0  size: 126 bytes
// Name:    FUN_1401761e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1402675a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1401761e0(longlong param_1,uint param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  FUN_140004b40(0x1498c1080);
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x300) <= (int)param_2)) {
    FUN_1402675a0(0x146c32008,4,param_3,0xdc,0xeb871a81,0x28,&UNK_14678d1bb,param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x2e0 + (ulonglong)param_2 * 8);
  }
  func_0x000144d9dab0(0x1498c1080);
  return uVar1;
}

