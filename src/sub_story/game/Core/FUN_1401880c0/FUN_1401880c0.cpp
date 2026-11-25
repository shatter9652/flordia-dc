// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401880c0  size: 81 bytes
// Name:    FUN_1401880c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145146ab0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401880c0(longlong param_1,undefined8 param_2,char param_3)

{
  uint uVar1;
  undefined4 uStack_c;
  
  if (param_1 == 0) {
    uStack_c = 0;
  }
  else {
    uStack_c = 0xbf800000;
    uVar1 = ~*(uint *)(param_1 + 0x78) & 1;
    if (param_3 == '\0') {
      uVar1 = *(uint *)(param_1 + 0x78);
    }
    FUN_145146ab0(param_1 + 0x80 + (ulonglong)uVar1 * 0x30,param_2,&uStack_c);
  }
  return uStack_c;
}

