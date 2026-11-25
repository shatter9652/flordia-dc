// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14003afa0  size: 69 bytes
// Name:    FUN_14003afa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14003afa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = func_0x00014554c5b0();
  iVar2 = func_0x0001450cef40(*(undefined8 *)(_DAT_14abbeef0 + 8),
                              *(undefined4 *)(_DAT_14abbeef0 + 0x10),0x8da12117,1);
  return iVar1 - (~(iVar2 - param_1 >> 0x1f) & iVar2 - param_1);
}

