// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401ba270  size: 85 bytes
// Name:    FUN_1401ba270
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140092760, FUN_140092790
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 * FUN_1401ba270(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  uStack_2c = 0;
  uVar2 = FUN_140092790(param_1,0xe39993c8,0x53a83bf);
  func_0x000140092750(&uStack_28,uVar2);
  cVar1 = FUN_140092760(uStack_28,&uStack_2c);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = uStack_2c;
  }
  *param_2 = uVar3;
  return param_2;
}

