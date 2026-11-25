// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140101390  size: 44 bytes
// Name:    FUN_140101390
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140101390(ulonglong param_1,int param_2)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((param_1 & 2) == 0) &&
     ((param_2 == 0 || (cVar1 = func_0x000144e3f250(_DAT_14abbef40), cVar1 == '\0')))) {
    uVar2 = 0;
  }
  return uVar2 & 0xffffffff;
}

