// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140073960  size: 59 bytes
// Name:    FUN_140073960
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1418ac620
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140073960(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = func_0x00014334f420();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_1418ac620(lVar1);
    uVar2 = _DAT_145fc6f50;
    if (*(char *)(lVar1 + 0x59) != '\0') {
      uVar2 = *(undefined4 *)(lVar1 + 0x5c);
    }
  }
  return uVar2;
}

