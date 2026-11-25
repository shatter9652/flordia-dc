// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014c880  size: 203 bytes
// Name:    FUN_14014c880
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14014c880(uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  uVar3 = (ulonglong)_DAT_14aaf4100;
  if (DAT_14aaf40f0 == '\0') {
    if (uVar3 != 0) {
      uVar2 = 0;
      puVar4 = _DAT_14aaf40f8;
      do {
        if (*puVar4 == param_1) goto LAB_14014c8f6;
        uVar2 = uVar2 + 1;
        puVar4 = puVar4 + 0xe;
      } while (uVar3 != uVar2);
    }
  }
  else {
    puVar4 = _DAT_14aaf40f8;
    uVar2 = uVar3;
    if (uVar3 == 0) {
      return 0;
    }
    do {
      uVar5 = uVar2 >> 1;
      if (puVar4[uVar5 * 0xe] < param_1) {
        puVar4 = puVar4 + uVar5 * 0xe + 0xe;
        uVar5 = ~uVar5 + uVar2;
      }
      uVar2 = uVar5;
    } while (0 < (longlong)uVar5);
    if (puVar4 == _DAT_14aaf40f8 + uVar3 * 0xe) {
      return 0;
    }
    if (*puVar4 != param_1) {
      return 0;
    }
    uVar2 = (ulonglong)((longlong)puVar4 - (longlong)_DAT_14aaf40f8) / 0x38;
LAB_14014c8f6:
    uVar1 = (uint)uVar2;
    if (-1 < (int)uVar1) {
      uVar3 = (ulonglong)(uVar1 >> 5 & 0x3ffffff);
      if ((*(uint *)(_DAT_14aaf6b30 + uVar3 * 4) >> (uVar1 & 0x1f) & 1) == 0) {
        LOCK();
        puVar4 = (uint *)(_DAT_14aaf6b30 + uVar3 * 4);
        *puVar4 = *puVar4 | 1 << (uVar1 & 0x1f);
        UNLOCK();
      }
      return uVar1 + 1;
    }
  }
  return 0;
}

