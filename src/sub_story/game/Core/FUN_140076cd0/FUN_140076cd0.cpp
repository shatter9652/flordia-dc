// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076cd0  size: 75 bytes
// Name:    FUN_140076cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140076cd0(int param_1,int param_2)

{
  float fVar1;
  
  if (_DAT_14928d7b0 != 0) {
    fVar1 = (float)func_0x000143b707c0(*(undefined4 *)(_DAT_14928d7b0 + 4),
                                       *(undefined8 *)(_DAT_14928d7b0 + 8),param_1 + param_2);
    if (fVar1 < _DAT_145fc6ed8) {
      return (int)(fVar1 * (float)(param_1 + param_2));
    }
  }
  return -1;
}

