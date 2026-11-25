// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007b2c0  size: 55 bytes
// Name:    FUN_14007b2c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007b2c0(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar1 = *param_1;
  cVar3 = func_0x000144ddb170(uVar1);
  if ((cVar3 != '\0') && (*(char *)(param_1 + 1) == '\0')) {
    uVar2 = func_0x000144da4590();
    func_0x00014007b300(uVar2,uVar1);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}

