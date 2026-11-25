// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c3910  size: 128 bytes
// Name:    FUN_1400c3910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f5c0c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400c3910(longlong param_1,longlong *param_2)

{
  FUN_144f5c0c0();
  if (*param_2 == 0) {
    (*(code *)param_2[1])(7,*(undefined8 *)(param_1 + 0x30));
  }
  else {
    (*(code *)param_2[1])(*param_2,7);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    if (*param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001400c3968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)param_2[1])(*param_2,7);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001400c398d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[1])(7,*(longlong *)(param_1 + 0x38));
    return;
  }
  return;
}

