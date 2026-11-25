// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019bb80  size: 42 bytes
// Name:    FUN_14019bb80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019bb80(undefined2 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined2 uStack_a;
  
  uStack_a = CONCAT11((char)param_1,(char)((ushort)param_1 >> 8));
  uVar1 = func_0x000144dd1920(&uStack_a,2,*param_2);
  *param_2 = uVar1;
  return;
}

