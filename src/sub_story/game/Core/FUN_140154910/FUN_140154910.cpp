// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140154910  size: 71 bytes
// Name:    FUN_140154910
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140154910(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x1ff0);
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      func_0x000144e3f350(lVar2);
      func_0x000144d9c130(lVar2,0x40);
    }
    *(undefined8 *)(param_1 + 0x1ff0) = 0;
  }
  return;
}

