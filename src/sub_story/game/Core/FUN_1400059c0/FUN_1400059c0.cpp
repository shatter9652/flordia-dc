// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400059c0  size: 135 bytes
// Name:    FUN_1400059c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144da6220, FUN_144db8c60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1400059c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 4) == '\r') {
    lVar4 = *(longlong *)(param_1 + 0x18);
    plVar1 = (longlong *)(param_1 + 0x18);
    lVar2 = lVar4 + (longlong)plVar1;
    if (lVar2 != 0 && lVar4 != 1) {
      FUN_144da6220();
      lVar4 = *plVar1;
      lVar2 = (longlong)plVar1 + lVar4;
    }
    lVar3 = 0;
    if (lVar4 != 1) {
      lVar3 = lVar2;
    }
    *(longlong *)(lVar3 + 0x30) = param_1;
  }
  else if (*(char *)(param_1 + 4) == '\v') {
    if (param_1 + 0x18 + *(longlong *)(param_1 + 0x18) != 0 && *(longlong *)(param_1 + 0x18) != 1) {
      FUN_144db8c60();
    }
  }
  return param_1;
}

