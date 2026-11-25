// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bc890  size: 65 bytes
// Name:    FUN_1401bc890
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401bc890(longlong param_1,undefined8 param_2)

{
  if (*(short *)(param_1 + 0x200) != -1) {
    func_0x000144e52ef0(*(short *)(param_1 + 0x200),0x95caf442,param_2);
    *(int *)(param_1 + 0x20c) = (int)param_2;
  }
  return;
}

