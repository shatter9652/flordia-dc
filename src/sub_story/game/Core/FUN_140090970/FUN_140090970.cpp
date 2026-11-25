// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140090970  size: 94 bytes
// Name:    FUN_140090970
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140090970(longlong param_1,longlong *param_2)

{
  if (*param_2 == 0) {
    (*(code *)param_2[1])(4,*(undefined8 *)(param_1 + 0x18));
  }
  else {
    (*(code *)param_2[1])(*param_2,4);
  }
  if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400909ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[1])(*param_2,5);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400909cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(5,*(undefined8 *)(param_1 + 0x20));
  return;
}

