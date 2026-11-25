// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140056ba0  size: 114 bytes
// Name:    FUN_140056ba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140056a20, FUN_140037a50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140056ba0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined1 *)(lVar1 + 0x121a4) = 1;
  FUN_140056a20(lVar1);
  if ((**(uint **)(lVar1 + 0x12198) & 0xc000000) == 0) {
    cVar3 = func_0x000144e88f60(lVar1);
    if (cVar3 != '\0') {
      puVar2 = *(uint **)(lVar1 + 0x12198);
      while ((*puVar2 & 0xe000000) != 0x2000000) {
        FUN_140037a50(puVar2,0,1);
      }
      FUN_140056f60(lVar1,&stack0xfffffffffffffff8,1);
      return;
    }
  }
  return;
}

