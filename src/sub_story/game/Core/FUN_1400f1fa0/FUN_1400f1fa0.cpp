// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f1fa0  size: 172 bytes
// Name:    FUN_1400f1fa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144061ae0, FUN_145592220
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_1400f1fa0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar2 = *(longlong *)(param_1 + 8);
  bVar1 = *(byte *)(lVar2 + 0x1d);
  uVar6 = (ulonglong)bVar1;
  if (uVar6 < 5) {
    uVar7 = *(ulonglong *)(&UNK_1465a2040 + uVar6 * 8);
  }
  else {
    uVar7 = 0;
  }
  bVar3 = func_0x000144f832e0(uVar6);
  uVar4 = func_0x000144f83350(lVar2,param_2);
  uVar5 = FUN_145592220(bVar1);
  uVar6 = 0;
  uVar8 = 0;
  do {
    if (uVar8 < uVar4) {
      FUN_144061ae0(*(undefined8 *)(param_1 + 8),param_2,uVar8 & 0xffffffff,
                    param_3 >> (uVar6 & 0x3f) & uVar7);
    }
    uVar8 = uVar8 + 1;
    uVar6 = uVar6 + uVar5;
  } while (uVar8 < 8 / bVar3);
  return;
}

