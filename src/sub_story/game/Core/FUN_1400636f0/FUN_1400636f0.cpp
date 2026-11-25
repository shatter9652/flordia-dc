// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400636f0  size: 98 bytes
// Name:    FUN_1400636f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400636f0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  lVar2 = *(longlong *)(param_1 + 0xa8);
  lVar1 = lVar2 + 8 + uVar3 * 8;
  func_0x000145f40570(lVar2 + uVar3 * 8,lVar1,
                      (lVar2 + (ulonglong)*(uint *)(param_1 + 0xa4) * 8) - lVar1);
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + -1;
  lVar2 = *(longlong *)(param_1 + 0xb8);
  lVar1 = lVar2 + 4 + uVar3 * 4;
  func_0x000145f40570(lVar2 + uVar3 * 4,lVar1,
                      (lVar2 + (ulonglong)*(uint *)(param_1 + 0xb4) * 4) - lVar1);
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + -1;
  return;
}

