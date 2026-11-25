// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b56b0  size: 82 bytes
// Name:    FUN_1401b56b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092760, FUN_140092790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1401b56b0(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_2c = 0;
  uVar1 = FUN_140092790(param_1,0x4e68e142,0x53a83bf);
  func_0x000140092750(&uStack_28,uVar1);
  cVar2 = FUN_140092760(uStack_28,&uStack_2c);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = uStack_2c;
  }
  *param_2 = uVar3;
  return;
}

