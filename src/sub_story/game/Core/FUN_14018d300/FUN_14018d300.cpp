// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018d300  size: 100 bytes
// Name:    FUN_14018d300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dd9c90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14018d300(undefined8 param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_2 < 2) {
    uVar3 = (ulonglong)*(uint *)((ulonglong)param_2 * 0x20 + 0x1475a09a4);
    if (uVar3 != 0) {
      lVar1 = *(longlong *)((ulonglong)param_2 * 0x20 + 0x1475a09a8);
      lVar4 = 0;
      do {
        plVar2 = (longlong *)FUN_144dd9c90(param_1,*(undefined4 *)(lVar1 + lVar4));
        if ((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) {
          return 1;
        }
        lVar4 = lVar4 + 4;
      } while (uVar3 << 2 != lVar4);
    }
  }
  return 0;
}

