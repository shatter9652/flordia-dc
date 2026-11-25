// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401331f0  size: 138 bytes
// Name:    FUN_1401331f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142af1700, FUN_142af1740
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014013321f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000140133224) */
/* WARNING: Removing unreachable block (ram,0x00014013322a) */

void FUN_1401331f0(int *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iStack_34;
  int aiStack_30 [2];
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  lVar2 = func_0x000144fc04a0(uVar1);
  if (lVar2 != 0) {
    return;
  }
  FUN_142af1700(aiStack_30,uVar1);
  if (aiStack_30[0] == 0) {
    FUN_142af1740(&iStack_34,*(undefined1 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x9c));
    aiStack_30[0] = iStack_34;
  }
  *param_1 = aiStack_30[0];
  return;
}

