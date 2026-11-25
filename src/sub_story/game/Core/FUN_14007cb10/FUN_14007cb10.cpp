// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007cb10  size: 42 bytes
// Name:    FUN_14007cb10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007cb10(void)

{
  longlong lVar1;
  undefined4 in_XMM3_Da;
  
  lVar1 = func_0x00014007b480();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x54) = in_XMM3_Da;
  }
  return;
}

