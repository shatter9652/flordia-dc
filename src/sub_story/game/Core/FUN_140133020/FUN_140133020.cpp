// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133020  size: 296 bytes
// Name:    FUN_140133020
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fdf4b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140133020(longlong param_1,longlong param_2,undefined8 param_3,undefined4 *param_4,uint *param_5
             )

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong lVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  
  iVar2 = param_4[2];
  if ((iVar2 == 0) || (*(int *)(param_1 + 0xf0) == 4)) {
LAB_140133144:
    uVar5 = 0;
  }
  else {
    bVar6 = (byte)param_5[0x15];
    do {
      if ((byte)param_5[0x13] <= bVar6) goto LAB_140133144;
      LOCK();
      bVar4 = (byte)param_5[0x15];
      if (bVar6 == bVar4) {
        *(byte *)(param_5 + 0x15) = bVar6 + 1;
        bVar4 = bVar6;
      }
      UNLOCK();
      bVar8 = bVar6 != bVar4;
      bVar6 = bVar4;
    } while (bVar8);
    lVar7 = (longlong)*(int *)(param_1 + 0xf0) * 0x38;
    *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    *(int *)(param_1 + 0x10 + lVar7) = iVar2;
    *(uint **)(param_1 + 0x18 + lVar7) = param_5;
    *(undefined1 *)(param_1 + 0x45 + lVar7) = 1;
    *(undefined4 *)(param_1 + 0x20 + lVar7) = 1;
    *(undefined4 *)(param_1 + 0x24 + lVar7) = *param_4;
    uVar9 = FUN_144fdf4b0(*(undefined4 *)(param_2 + 0x9c),param_3,param_4[1],param_5[0x14]);
    *(undefined4 *)(param_1 + 0x28 + lVar7) = uVar9;
    *(undefined1 *)(param_1 + 0x46 + lVar7) = *(undefined1 *)(param_4 + 3);
    uStack_58 = *(undefined8 *)(param_2 + 0x70);
    uStack_50 = *(undefined8 *)(param_2 + 0x78);
    func_0x000144dc3790(&uStack_58,auStack_48);
    uVar5 = vmovlps_avx(auStack_48);
    *(undefined8 *)(param_1 + 0x2c + lVar7) = uVar5;
    uVar9 = vextractps_avx(auStack_48,2);
    *(undefined4 *)(param_1 + 0x34 + lVar7) = uVar9;
    *(undefined4 *)(param_1 + 0x38 + lVar7) = _DAT_14abbef40;
    *(undefined8 *)(param_1 + 0x3c + lVar7) = 0;
    *(undefined1 *)(param_1 + 0x44 + lVar7) = 0;
    uVar3 = *param_5;
    puVar1 = (uint *)(param_1 + (ulonglong)(uVar3 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << (uVar3 & 0x1f);
    uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 0xd),1);
  }
  return uVar5;
}

