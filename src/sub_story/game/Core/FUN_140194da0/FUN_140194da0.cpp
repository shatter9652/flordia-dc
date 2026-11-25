// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194da0  size: 52 bytes
// Name:    FUN_140194da0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140194da0(byte param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if ((param_1 & 1) == 0) {
    bVar2 = false;
  }
  else {
    lVar1 = func_0x00014049e1a0();
    if (*(char *)(lVar1 + 0x760) == '\x01') {
      lVar1 = func_0x00014049e1a0();
      bVar2 = *(longlong *)(lVar1 + 0x458) == 0;
    }
    else {
      bVar2 = true;
    }
  }
  return bVar2;
}

