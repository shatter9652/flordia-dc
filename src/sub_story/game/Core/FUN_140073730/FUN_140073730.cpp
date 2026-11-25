// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073730  size: 45 bytes
// Name:    FUN_140073730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14526d350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_140073730(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_14526d350(param_1,0);
  if (cVar1 != '\0') {
    return true;
  }
  if (param_1 != 0) {
    uVar2 = func_0x000144e3bfa0();
    lVar3 = func_0x000144e8f430(uVar2,uRam00000001499f7794);
    if ((lVar3 != 0) ||
       ((*(longlong *)(param_1 + 0x20) != 0 &&
        (lVar3 = func_0x000144e8f430(*(longlong *)(param_1 + 0x20) + 0x10,_DAT_1499f775c),
        lVar3 != 0)))) {
      return (*(uint *)(lVar3 + 0x44) >> 7 & 1) != 0;
    }
  }
  return false;
}

