// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013f3a0  size: 100 bytes
// Name:    FUN_14013f3a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ed8ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_14013f3a0(short *param_1)

{
  short sVar1;
  undefined1 auVar2 [16];
  
  FUN_144ed8ae0();
  sVar1 = *param_1;
  if ((longlong)sVar1 != -1) {
    auVar2._0_12_ = ZEXT812(0);
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])((longlong)sVar1 * 0x10 + 0x149aed9d8) = auVar2;
    func_0x000144e52f40();
  }
  return sVar1 != -1;
}

