// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cbe90  size: 75 bytes
// Name:    FUN_1400cbe90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_1400cbe90(ulonglong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  
  uVar1 = *(undefined4 *)((param_1 & 0xfffffffffffffff0) + 0x9c);
  lVar2 = func_0x000144dd7540(uVar1);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x10) & 0x20) == 0)) {
    lVar2 = func_0x0001450ed6c0(uVar1);
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x10) == 0)) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)(*(longlong *)(lVar2 + 0x10) + 0x30) == '\x02';
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

