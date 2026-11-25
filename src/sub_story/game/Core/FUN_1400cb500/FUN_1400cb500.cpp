// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cb500  size: 92 bytes
// Name:    FUN_1400cb500
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451a8af0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400cb500(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0x670) == '\0') {
    uVar1 = (uint)((byte)param_2 & 3 ^ 2);
    if (param_3 != 4) {
      uVar1 = param_2;
    }
    FUN_1451a8af0(param_1,uVar1,param_4,param_5,param_6);
  }
  *(undefined1 *)(param_1 + 0x66f) = 1;
  return;
}

