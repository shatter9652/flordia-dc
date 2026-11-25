// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f2150  size: 61 bytes
// Name:    FUN_1400f2150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400f2150(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  float fVar2;
  float extraout_XMM0_Da;
  
  fVar2 = (float)(**(code **)(*param_2 + 0x18))(param_2);
  if (_DAT_145fc6f48 <= fVar2) {
    (**(code **)(*param_2 + 0x18))(param_2);
    bVar1 = extraout_XMM0_Da <= _DAT_145fc6ed8;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

