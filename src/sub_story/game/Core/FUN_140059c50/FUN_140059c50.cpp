// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140059c50  size: 369 bytes
// Name:    FUN_140059c50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140059c50(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  
  if ((*(short *)(param_1 + 0x26) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x26) + -1, *(short *)(param_1 + 0x26) = sVar1, sVar1 == 0)) {
    if (*(short *)(param_1 + 8) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 8) = 0xffff;
    }
    if (*(short *)(param_1 + 10) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 10) = 0xffff;
    }
    if (*(short *)(param_1 + 0xc) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 0xc) = 0xffff;
    }
    if (*(short *)(param_1 + 0xe) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 0xe) = 0xffff;
    }
    if (*(short *)(param_1 + 0x40) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 0x40) = 0xffff;
    }
    if (*(short *)(param_1 + 0x42) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 0x42) = 0xffff;
    }
    if (*(short *)(param_1 + 0x44) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 0x44) = 0xffff;
    }
    if (*(short *)(param_1 + 0x46) != -1) {
      func_0x000144e59e70(_DAT_14a923120);
      *(undefined2 *)(param_1 + 0x46) = 0xffff;
    }
    if (0 < *(int *)(param_1 + 0x2a4)) {
      lVar2 = 0;
      do {
        func_0x000144e59e70(_DAT_14a923120,*(undefined2 *)(param_1 + 0x2a0 + lVar2 * 2));
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x2a4));
    }
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    if (0 < *(int *)(param_1 + 0x2b8)) {
      lVar2 = 0;
      do {
        func_0x000144e59e70(_DAT_14a923120,*(undefined2 *)(param_1 + 0x2a8 + lVar2 * 2));
        lVar2 = lVar2 + 1;
      } while (lVar2 < *(int *)(param_1 + 0x2b8));
    }
    *(undefined4 *)(param_1 + 0x2b8) = 0;
    return;
  }
  return;
}

