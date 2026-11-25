// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14017dc60  size: 46 bytes
// Name:    FUN_14017dc60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_14017dc60(longlong *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x3c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    if (param_2 == '\0') {
      (*(code *)((undefined8 *)*param_1)[2])();
    }
    else {
      (**(code **)*param_1)(param_1,1);
    }
  }
  return iVar2 + -1;
}

