// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090b30  size: 80 bytes
// Name:    FUN_140090b30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140090b30(longlong param_1,longlong *param_2)

{
  func_0x000144f1afc0();
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140090b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[1])(*param_2,7);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140090b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(7,*(undefined8 *)(param_1 + 0x28));
  return;
}

