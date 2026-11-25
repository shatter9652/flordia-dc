// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083460  size: 96 bytes
// Name:    FUN_140083460
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efb330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140083460(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((((*(byte *)(lVar1 + 0x411) & 0x80) == 0) &&
      (((bVar2 = *(char *)(param_1 + 0xfa) - 2, 9 < bVar2 || ((0x3e1U >> (bVar2 & 0x1f) & 1) == 0))
       && (cVar3 = func_0x0001400834c0(*(undefined8 *)(lVar1 + 0x60)), cVar3 == '\0')))) &&
     (cVar3 = func_0x000144e67ff0(lVar1), cVar3 == '\0')) {
    uVar4 = FUN_144efb330(*(undefined4 *)(param_1 + 0x9c));
    return uVar4 ^ 1;
  }
  return 0;
}

