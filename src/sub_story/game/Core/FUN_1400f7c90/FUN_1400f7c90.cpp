// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7c90  size: 137 bytes
// Name:    FUN_1400f7c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f7c90(uint param_1,uint param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  if (1 < param_2) {
    lVar3 = (ulonglong)param_2 - 1;
    uVar2 = param_1;
    do {
      uVar2 = uVar2 + 1;
      uVar4 = *(ulonglong *)(_DAT_1471bfb08 + (ulonglong)param_1 * 8);
      *(ulonglong *)(_DAT_1471bfb08 + (ulonglong)param_1 * 8) =
           uVar4 & 0xffffffffffff8000 | (ulonglong)((int)uVar4 - 1U & 0x7fff);
      uVar4 = *(ulonglong *)(_DAT_1471bfb08 + (ulonglong)uVar2 * 8);
      lVar3 = lVar3 + -1;
      *(ulonglong *)(_DAT_1471bfb08 + (ulonglong)uVar2 * 8) =
           uVar4 & 0xffffffffffff8000 | (ulonglong)((int)uVar4 + 1U & 0x7fff);
    } while (lVar3 != 0);
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar4 = (ulonglong)param_1;
    param_1 = param_1 + 1;
    puVar1 = (ulonglong *)(_DAT_1471bfb08 + uVar4 * 8);
    *puVar1 = *puVar1 & 0xfffffffffff07fff;
  }
  return;
}

