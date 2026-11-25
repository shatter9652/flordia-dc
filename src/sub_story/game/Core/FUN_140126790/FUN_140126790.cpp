// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140126790  size: 136 bytes
// Name:    FUN_140126790
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456a6d20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined1 (*) [16] FUN_140126790(undefined1 (*param_1) [16],longlong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [16];
  
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  *param_1 = auVar22;
  lVar3 = *(longlong *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 4);
  if (uVar2 != 0) {
    FUN_1456a6d20(param_1);
    lVar4 = *(longlong *)(*param_1 + 8);
    lVar20 = 0;
    do {
      puVar21 = (undefined8 *)(lVar4 + lVar20);
      if (puVar21 != (undefined8 *)0x0) {
        puVar1 = (undefined8 *)(lVar3 + lVar20);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar9 = puVar1[4];
        uVar10 = puVar1[5];
        uVar11 = puVar1[6];
        uVar12 = puVar1[7];
        uVar13 = puVar1[8];
        uVar14 = puVar1[9];
        uVar15 = puVar1[10];
        uVar16 = puVar1[0xb];
        uVar17 = puVar1[0xd];
        uVar18 = puVar1[0xe];
        uVar19 = puVar1[0xf];
        puVar21[0xc] = puVar1[0xc];
        puVar21[0xd] = uVar17;
        puVar21[0xe] = uVar18;
        puVar21[0xf] = uVar19;
        puVar21[8] = uVar13;
        puVar21[9] = uVar14;
        puVar21[10] = uVar15;
        puVar21[0xb] = uVar16;
        puVar21[4] = uVar9;
        puVar21[5] = uVar10;
        puVar21[6] = uVar11;
        puVar21[7] = uVar12;
        *puVar21 = uVar5;
        puVar21[1] = uVar6;
        puVar21[2] = uVar7;
        puVar21[3] = uVar8;
      }
      lVar20 = lVar20 + 0x80;
    } while ((ulonglong)uVar2 << 7 != lVar20);
    LOCK();
    *(uint *)(*param_1 + 4) = uVar2;
    UNLOCK();
  }
  return param_1;
}

