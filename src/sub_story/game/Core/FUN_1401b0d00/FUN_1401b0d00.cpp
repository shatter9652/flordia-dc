// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b0d00  size: 73 bytes
// Name:    FUN_1401b0d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1436b9510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1401b0d00(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (_DAT_14ab56e38 != 0) {
    if (*(char *)(param_1 + 0x9d0) != '\0') {
      return false;
    }
    cVar1 = FUN_1436b9510();
    if (cVar1 == '\0') {
      return false;
    }
  }
  cVar1 = func_0x000145073670(*(undefined8 *)(param_1 + 0x1e0));
  if (((cVar1 != '\0') || ((*(byte *)(param_1 + 0xd1) & 0x10) != 0)) &&
     (iVar2 = FUN_1422d7690(), iVar2 == 4)) {
    return false;
  }
  return (*(byte *)(param_1 + 0xe0) & 0x40) == 0;
}

