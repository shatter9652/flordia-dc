// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077920  size: 71 bytes
// Name:    FUN_140077920
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140077920(longlong param_1)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x3c) == '\x01') && (*(longlong *)(param_1 + 0x80) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x80) + 0x18) == '\x01')) {
    func_0x0001413515e0();
    lVar1 = *(longlong *)(param_1 + 0x80);
    *(undefined1 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    func_0x0001413515d0();
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}

