// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007baa0  size: 130 bytes
// Name:    FUN_14007baa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007baa0(longlong param_1,int param_2,longlong *param_3,undefined8 param_4,char param_5)

{
  longlong unaff_GS_OFFSET;
  
  if ((param_2 < 0x24) && (param_3 != (longlong *)0x0)) {
    if (param_5 != '\0') {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      (**(code **)(*param_3 + 8))(param_3,*(undefined4 *)(param_1 + 2000));
    }
    *(longlong **)(param_1 + 0x508 + (longlong)param_2 * 8) = param_3;
    *(undefined4 *)(param_1 + 0x360 + (longlong)param_2 * 4) =
         *(undefined4 *)((longlong)param_3 + 0x1c);
  }
  return;
}

