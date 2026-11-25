// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400554e0  size: 91 bytes
// Name:    FUN_1400554e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400554e0(int *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = DAT_1468b6cac == '\x01';
  if (bVar3) {
    lVar2 = (longlong)param_2 * 0x20 + 0x14764e4f0;
    FUN_140004b40(lVar2);
    LOCK();
    piVar1 = (int *)((longlong)param_2 * 4 + 0x14764e630);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    func_0x000144d9dab0(lVar2);
    *param_1 = param_2;
  }
  *(bool *)(param_1 + 1) = bVar3;
  return;
}

