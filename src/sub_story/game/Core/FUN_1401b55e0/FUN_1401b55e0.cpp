// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b55e0  size: 63 bytes
// Name:    FUN_1401b55e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400746e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401b55e0(longlong param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uStack_4;
  
  if (param_2 != -0x218132af) {
    if (param_1 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      cVar1 = FUN_1400746e0(param_1,param_2,&uStack_4);
      uVar2 = 0xffffffff;
      if (cVar1 != '\0') {
        uVar2 = uStack_4;
      }
    }
    return uVar2;
  }
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x1d4);
  }
  return 0;
}

