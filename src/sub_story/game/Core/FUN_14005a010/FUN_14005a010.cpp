// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005a010  size: 90 bytes
// Name:    FUN_14005a010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140059f30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_14005a010(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = *(short *)(param_1 + 0x180);
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = func_0x000144f97130(0x18);
    func_0x000144e95ce0(uVar2);
    FUN_140059f30(uVar2,*(undefined8 *)(param_1 + 0x178),sVar1,0x10,*(undefined8 *)(param_1 + 0x20))
    ;
  }
  return uVar2;
}

