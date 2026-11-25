// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f9ca0  size: 75 bytes
// Name:    FUN_1400f9ca0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400f9ca0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  do {
    uVar2 = *param_2;
    if (*(ushort *)(param_1 + 0x22) <= uVar2) {
      return 0;
    }
    *param_2 = uVar2 + 1;
    uVar4 = (ulonglong)*(uint *)((longlong)param_1 + (ulonglong)uVar2 * 4 + 8);
    lVar1 = *param_1 + uVar4;
    iVar3 = (**(code **)(*(longlong *)(*param_1 + uVar4) + 0x20))(lVar1);
  } while (iVar3 != _DAT_149aae9a8);
  return lVar1;
}

