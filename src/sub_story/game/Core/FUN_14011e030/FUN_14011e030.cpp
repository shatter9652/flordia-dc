// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14011e030  size: 97 bytes
// Name:    FUN_14011e030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006d810
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14011e030(uint *param_1)

{
  uint uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_1[1];
  if (uVar1 == *param_1) {
    uVar3 = 1;
    if (1 < uVar1) {
      uVar3 = uVar1 >> 1;
    }
    FUN_14006d810(param_1,uVar3 + uVar1);
    uVar1 = param_1[1];
  }
  param_1[1] = uVar1 + 1;
  pbVar2 = (byte *)((ulonglong)uVar1 * 0x78 + *(longlong *)(param_1 + 2));
  if (*(longlong *)(param_1 + 2) != 0) {
    pbVar2[0x74] = 0;
    pbVar2[0x75] = 0;
    pbVar2[0x76] = 0;
    pbVar2[0x77] = 0;
    *pbVar2 = *pbVar2 & 0xf4;
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(pbVar2 + 0x58) = auVar4;
    *(undefined1 (*) [16])(pbVar2 + 100) = auVar4;
  }
  return;
}

