// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003f430  size: 64 bytes
// Name:    FUN_14003f430
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14003f430(void)

{
  longlong lVar1;
  
  lVar1 = _DAT_1499aad40;
  if (((*(byte *)(_DAT_1499aad40 + 0x6f8) & 1) != 0) && (*(char *)(_DAT_1499aad40 + 0x6fa) == '\0'))
  {
    func_0x000145180cd0(*(undefined8 *)(_DAT_1499aad40 + 0x468),1,0,0);
    *(undefined1 *)(lVar1 + 0x6fa) = 1;
  }
  return;
}

