// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140056f20  size: 52 bytes
// Name:    FUN_140056f20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145207f10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140056f20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x121a4) = 1;
  FUN_145207f10();
  LOCK();
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 2;
  UNLOCK();
  if ((int)uVar1 == 1) {
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  return;
}

