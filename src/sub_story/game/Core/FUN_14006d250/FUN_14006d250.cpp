// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006d250  size: 131 bytes
// Name:    FUN_14006d250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006d4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006d250(longlong param_1)

{
  longlong unaff_GS_OFFSET;
  longlong lStack_70;
  longlong *plStack_68;
  longlong *plStack_60;
  longlong alStack_58 [10];
  
  alStack_58[1] = 0x10;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  alStack_58[0] = *(longlong *)(param_1 + 0x20);
  plStack_68 = alStack_58;
  plStack_60 = alStack_58 + 1;
  lStack_70 = param_1;
  if (alStack_58[0] != 0) {
    FUN_14006d4b0(&lStack_70,CONCAT71((int7)((ulonglong)plStack_68 >> 8),1));
  }
  FUN_14006d4b0(&lStack_70,0);
  return;
}

