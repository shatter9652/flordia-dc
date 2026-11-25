// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9ce0  size: 74 bytes
// Name:    FUN_1401b9ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


longlong FUN_1401b9ce0(longlong param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if ((((param_2 == 0) &&
       (lVar1 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x18) + 0x18))(),
       lVar1 != 0)) &&
      (uVar2 = (ulonglong)*(byte *)(lVar1 + 0xc0 + (ulonglong)DAT_14a952378), uVar2 != 0xff)) &&
     (lVar1 = *(longlong *)(lVar1 + 0x10 + uVar2 * 8), lVar1 != 0)) {
    return lVar1 + 0x20;
  }
  return 0;
}

