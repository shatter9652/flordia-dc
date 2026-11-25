// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b06f0  size: 68 bytes
// Name:    FUN_1400b06f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f38c30, FUN_144f38a80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b06f0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  undefined1 auVar4 [64];
  
  FUN_144f38a80(0);
  FUN_144f38c30(param_1,param_2);
  if ((ulonglong)_DAT_149e4651c != 0) {
    func_0x000145f40580(0x149e46520,0,(ulonglong)_DAT_149e4651c << 4);
  }
  if (uRam0000000149e46294 != 0) {
    uVar3 = 0;
    auVar4 = ZEXT1264(ZEXT812(0));
    do {
      plVar1 = (longlong *)**(longlong **)(uVar3 * 8 + 0x149e46298);
      pauVar2 = (undefined1 (*) [16])FUN_144dd5cf0(0x10,0x10);
      if (pauVar2 != (undefined1 (*) [16])0x0) {
        *pauVar2 = auVar4._0_16_;
      }
      *plVar1 = (longlong)pauVar2;
      pauVar2 = (undefined1 (*) [16])FUN_144dd5cf0(0x10,0x10);
      if (pauVar2 != (undefined1 (*) [16])0x0) {
        *pauVar2 = auVar4._0_16_;
      }
      plVar1[1] = (longlong)pauVar2;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uRam0000000149e46294);
  }
  return;
}

