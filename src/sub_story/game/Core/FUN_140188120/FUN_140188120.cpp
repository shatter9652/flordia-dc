// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140188120  size: 73 bytes
// Name:    FUN_140188120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


uint FUN_140188120(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lStack_18;
  
  func_0x0001453588a0(param_2,&lStack_18);
  uVar2 = (uint)*(undefined8 *)(lStack_18 + 0x80);
  if ((uVar2 >> 0x17 & 1) == 0) {
    uVar1 = 1;
    if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
      uVar1 = uVar2 >> 0x16 & 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

