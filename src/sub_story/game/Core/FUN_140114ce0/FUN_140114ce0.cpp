// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140114ce0  size: 48 bytes
// Name:    FUN_140114ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450af680
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


bool FUN_140114ce0(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 21000 + (ulonglong)param_2 * 4);
  iVar2 = FUN_1450af680();
  uVar3 = func_0x000144dc06c0(iVar2);
  return uVar1 <= uVar3 || iVar2 == 0;
}

