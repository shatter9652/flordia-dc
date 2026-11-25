// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140100030  size: 59 bytes
// Name:    FUN_140100030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fa46c0, FUN_144fa45a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140100030(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0xa28);
  uVar2 = FUN_144fa45a0();
  auVar3._0_12_ = ZEXT812(0);
  auVar3._12_4_ = 0;
  FUN_144fa46c0(_DAT_14ab7f650,uVar1,_DAT_14ab56e38,uVar2,auVar3);
  return;
}

