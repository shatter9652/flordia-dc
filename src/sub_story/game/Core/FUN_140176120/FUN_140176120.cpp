// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140176120  size: 101 bytes
// Name:    FUN_140176120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402675a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140176120(uint param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 < 4) {
    lVar1 = func_0x00014502b2e0();
    if (lVar1 != 0) {
      plVar2 = (longlong *)func_0x00014502b2e0();
                    /* WARNING: Could not recover jumptable at 0x00014017614f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x80))(plVar2,param_1,*(code **)(*plVar2 + 0x80));
      return uVar3;
    }
  }
  else {
    FUN_1402675a0(0x146c31b38,1,param_3,0x2b6,0xe9c0d73e,2,param_1);
  }
  return 0;
}

