// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400feec0  size: 93 bytes
// Name:    FUN_1400feec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400feec0(undefined4 *param_1,byte param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (ulonglong)_DAT_1499a3aa0;
  pbVar3 = _DAT_1499a3a98;
  uVar5 = uVar4;
  uVar1 = 0;
  if (uVar4 != 0) {
    do {
      uVar2 = uVar5 >> 1;
      if ((pbVar3 + uVar2 * 8 + 8)[-8] < param_2) {
        pbVar3 = pbVar3 + uVar2 * 8 + 8;
        uVar2 = ~uVar2 + uVar5;
      }
      uVar5 = uVar2;
    } while (0 < (longlong)uVar2);
    uVar1 = 0;
    if ((pbVar3 != _DAT_1499a3a98 + uVar4 * 8) && (*pbVar3 == param_2)) {
      uVar1 = *(undefined4 *)(pbVar3 + 4);
    }
  }
  *param_1 = uVar1;
  return;
}

