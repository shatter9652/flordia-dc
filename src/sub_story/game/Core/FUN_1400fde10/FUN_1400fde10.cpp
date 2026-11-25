// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400fde10  size: 51 bytes
// Name:    FUN_1400fde10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_1400fde10(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1[5] + 0x28);
  cVar2 = (*(code *)puVar1[3])();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    *param_1 = *puVar1;
    uVar3 = puVar1[1];
    param_1[1] = uVar3;
    uVar3 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar3;
}

