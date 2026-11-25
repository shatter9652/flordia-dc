// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140093630  size: 47 bytes
// Name:    FUN_140093630
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140093630(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_149c3a8f0;
  if ((_DAT_149c3a8f0 != param_1) && (iVar1 = param_1, _DAT_149c3a8c8 != (code *)0x0)) {
    (*_DAT_149c3a8c8)();
    iVar1 = param_1;
  }
  _DAT_149c3a8f0 = iVar1;
  return;
}

