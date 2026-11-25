// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076f90  size: 63 bytes
// Name:    FUN_140076f90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140076f90(longlong param_1,longlong param_2)

{
  char cVar1;
  
  func_0x000140076fd0();
  if (((*(int *)(param_2 + 0x68) != 0x4c) && (*(int *)(param_2 + 0x68) != 0x27)) &&
     (0 < *(int *)(param_2 + 0x28))) {
    cVar1 = func_0x000140ba57a0(*(undefined4 *)(param_1 + 0x70));
    if (cVar1 == '\0') {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + *(int *)(param_2 + 0x40);
    }
  }
  return;
}

