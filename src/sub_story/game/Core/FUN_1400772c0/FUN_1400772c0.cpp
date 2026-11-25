// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400772c0  size: 59 bytes
// Name:    FUN_1400772c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140759da0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400772c0(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  
  if (*(char *)((longlong)param_1 + 0x6c) != param_2) {
    *(char *)((longlong)param_1 + 0x6c) = param_2;
    if (param_2 != '\0') {
      uVar1 = FUN_140759da0();
      *(undefined4 *)(param_1 + 0xe) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001400772e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd8))(param_1);
      return;
    }
    *(undefined4 *)(param_1 + 0xe) = 5;
  }
  return;
}

