// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f62e0  size: 116 bytes
// Name:    FUN_1400f62e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_1400f62e0(longlong *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(*param_1 + 0x3f8))(param_1,0xba180afb232d1b4b,param_2);
  if (lVar2 == 0) {
    lVar2 = (**(code **)(*param_1 + 0x3f8))(param_1,0x33f70dfaf2c50989,param_2);
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x3f8))(param_1,0x4eaa16dd829995bc,param_2);
      uVar1 = *(undefined1 *)(lVar2 + 0xf);
    }
    else {
      uVar1 = *(undefined1 *)(lVar2 + 6);
    }
  }
  else {
    uVar1 = *(undefined1 *)(lVar2 + 0x11);
  }
  return uVar1;
}

