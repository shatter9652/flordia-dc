// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140055df0  size: 54 bytes
// Name:    FUN_140055df0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 FUN_140055df0(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  
  plVar2 = (longlong *)func_0x00014506c3d0(*(undefined4 *)(*(longlong *)(param_1 + 1000) + 0x9c));
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0xff;
  }
  else {
    uVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2);
    uVar3 = 1 < uVar1;
  }
  return uVar3;
}

