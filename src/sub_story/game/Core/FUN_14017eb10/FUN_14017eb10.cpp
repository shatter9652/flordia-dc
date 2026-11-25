// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017eb10  size: 75 bytes
// Name:    FUN_14017eb10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14017eb10(ulonglong param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  
  cVar2 = func_0x000144da4370(*(undefined1 *)(_DAT_14aae3b70 + 0x100));
  if (((cVar2 == '\0') && ((param_2 & 1) != 0)) &&
     (bVar1 = *(byte *)((param_1 & 0xfffffffffffffff0) + 0xfa), bVar1 < 10)) {
    uVar3 = 0x2a7 >> (bVar1 & 0x1f);
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 0xffffff01;
}

