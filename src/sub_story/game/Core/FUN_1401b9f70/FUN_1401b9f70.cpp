// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b9f70  size: 65 bytes
// Name:    FUN_1401b9f70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144debee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined4 FUN_1401b9f70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uVar1 = func_0x000140019d90(param_1,0x4cd89873);
  func_0x000144debac0(&uStack_18,uVar1);
  uStack_1c = 0;
  FUN_144debee0(uStack_18,&uStack_1c);
  return uStack_1c;
}

