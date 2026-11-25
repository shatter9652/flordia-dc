// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400bd570  size: 63 bytes
// Name:    FUN_1400bd570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400bd570(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (((iVar1 == 1) &&
      ((*(char *)(param_1 + 8) != '\x01' || (*(char *)((longlong)param_2 + 9) == '\0')))) &&
     ((*(char *)(param_1 + 9) != '\x01' || ((char)param_2[1] == '\0')))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

