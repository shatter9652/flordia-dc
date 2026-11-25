// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004d3c0  size: 190 bytes
// Name:    FUN_14004d3c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004d3c0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong unaff_GS_OFFSET;
  
  if ((*(int *)(param_1 + 0x148) != 0) && (*(int *)(param_1 + 0x14c) != 0)) {
    func_0x000144e6d7b0(param_2,param_1 + 0x148);
    *(undefined4 *)(param_2 + 0x50) = param_4;
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
      cVar1 = *(char *)(*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8);
      *(undefined4 *)(param_2 + 0x54) = *param_5;
      if (cVar1 == '\0') {
        func_0x0001455db994();
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x54) = *param_5;
    }
    *(undefined4 *)(param_2 + 0x58) = *param_6;
    lVar2 = FUN_144e6d820(param_2,*(undefined4 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x44));
    if (lVar2 != 0) {
      FUN_144e6df30(param_2,lVar2,param_3);
      FUN_144e6da60(param_2,1);
      *(short *)(param_2 + 0x3e) = *(short *)(param_2 + 0x3e) + 1;
    }
    return;
  }
  return;
}

