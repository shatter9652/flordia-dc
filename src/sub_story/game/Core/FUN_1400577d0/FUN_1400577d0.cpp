// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400577d0  size: 52 bytes
// Name:    FUN_1400577d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e258f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400577d0(longlong param_1,ulonglong param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  int iStack_28;
  undefined4 uStack_24;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    param_2 = param_2 & 0xffffffff;
    lVar2 = FUN_144e258f0();
  }
  *param_3 = 0;
  *param_4 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_14010a630(lVar2,param_2);
    FUN_14540c4c0(lVar2,&iStack_28,uVar1);
    if (iStack_28 != 0) {
      FUN_14552e9e0(CONCAT44(uStack_24,iStack_28),param_3,param_4);
    }
  }
  return;
}

