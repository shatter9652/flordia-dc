// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fbcd0  size: 64 bytes
// Name:    FUN_1400fbcd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400fbcd0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = func_0x0001450f21c0(*(undefined4 *)(param_2 + 0x9c));
  if (lVar2 != 0) {
    cVar1 = func_0x000144ead4e0(*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x28));
    if (cVar1 != '\0') {
      return 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001400fbd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
  return uVar3;
}

