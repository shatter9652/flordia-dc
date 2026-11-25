// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2a90  size: 67 bytes
// Name:    FUN_1401a2a90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1401a2a90(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  bool bVar2;
  
  uVar1 = func_0x0001432ebd00(*(undefined4 *)(*(longlong *)(_DAT_148566280 + 0x10) + 0x14),
                              *(undefined8 *)(*(longlong *)(_DAT_148566280 + 0x10) + 0x18),
                              *(undefined4 *)(_DAT_148566280 + 0x3c),param_2);
  if ((uint)uVar1 == 0xffffffff) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(uint *)(param_1 + (uVar1 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar1 & 0x1f) & 1) != 0;
  }
  return bVar2;
}

