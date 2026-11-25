// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fa0b0  size: 75 bytes
// Name:    FUN_1400fa0b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f96890
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400fa0b0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uStack_c;
  
  if (_DAT_1487703a8 != param_1) {
    uVar1 = func_0x000144f29850(*(undefined8 *)*param_2,0xd14b442b,3);
    if ((char)uVar1 != '\0') {
      uStack_c = 0x3f800000;
      FUN_144f96890(param_2,uVar1,&uStack_c,4);
    }
  }
  return;
}

