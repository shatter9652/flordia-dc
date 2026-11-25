// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109d40  size: 103 bytes
// Name:    FUN_140109d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140109db0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140109d40(byte *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  bVar3 = param_1[2];
  if (bVar3 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + uVar4 * 8 + 8);
      if (lVar2 != 0) {
        if ((*param_1 & 1) == 0) {
          FUN_140109db0(lVar2);
        }
        else {
          FUN_140109db0(lVar2);
        }
        func_0x000144d9c130(lVar2,0x30);
        pbVar1 = param_1 + uVar4 * 8 + 8;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        bVar3 = param_1[2];
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < bVar3);
  }
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

