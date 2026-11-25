// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140196a10  size: 93 bytes
// Name:    FUN_140196a10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400746e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_140196a10(longlong *param_1,int param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uStack_1c;
  
  uStack_1c = 0xffffffff;
  uVar3 = 0xffffffff;
  if (param_1 != (longlong *)0x0) {
    bVar1 = (**(code **)(*param_1 + 0x288))();
    if ((param_2 != 0 & bVar1) == 1) {
      uVar2 = (**(code **)(*param_1 + 0xa8))(param_1);
      FUN_1400746e0(uVar2,param_2,&uStack_1c);
      uVar3 = uStack_1c;
    }
  }
  return uVar3;
}

