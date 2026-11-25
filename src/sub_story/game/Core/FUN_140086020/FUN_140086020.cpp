// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086020  size: 75 bytes
// Name:    FUN_140086020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144efb330
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140086020(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x411) & 0x80) == 0) &&
     (((8 < *(byte *)(param_1 + 0xfa) || ((0x184U >> (*(byte *)(param_1 + 0xfa) & 0x1f) & 1) == 0))
      && (cVar1 = func_0x000144e67ff0(), cVar1 == '\0')))) {
    uVar2 = FUN_144efb330(*(undefined4 *)(param_1 + 0x9c));
    return uVar2 ^ 1;
  }
  return 0;
}

