// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140004c10  size: 67 bytes
// Name:    FUN_140004c10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140004c10(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((~(uint)param_3 & 0x3ff0) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = func_0x000144dac8a0(param_1,param_3);
    uVar2 = 0;
    if ((*(uint *)(param_2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      uVar2 = param_3 & 0xffffffffffffc000;
    }
  }
  return uVar2;
}

