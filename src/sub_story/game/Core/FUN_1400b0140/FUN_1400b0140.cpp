// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b0140  size: 1085 bytes
// Name:    FUN_1400b0140
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400b0140(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
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
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined4 uVar49;
  longlong lVar50;
  longlong lVar51;
  undefined8 *puVar52;
  longlong lVar53;
  uint uVar54;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  
  puVar6 = *(uint **)(param_1 + 0x80);
  if (puVar6 == (uint *)0x0) {
    uVar11 = *param_6;
    uVar12 = param_6[1];
    uVar13 = param_6[2];
    uVar14 = param_6[3];
    uVar15 = param_6[4];
    uVar16 = param_6[5];
    uVar17 = param_6[6];
    uVar18 = param_6[7];
    uVar19 = param_6[8];
    uVar20 = param_6[9];
    uVar21 = param_6[10];
    uVar22 = param_6[0xb];
    uVar35 = *(undefined8 *)((longlong)param_6 + 100);
    uVar36 = *(undefined8 *)((longlong)param_6 + 0x6c);
    uVar37 = *(undefined8 *)((longlong)param_6 + 0x74);
    uStack_58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_6 + 0x5c) >> 0x20);
    uStack_5c = (undefined4)((ulonglong)uVar22 >> 0x20);
    uVar23 = *param_5;
    uVar24 = param_5[1];
    uVar25 = param_5[2];
    uVar26 = param_5[3];
    uVar27 = param_5[4];
    uVar28 = param_5[5];
    uVar29 = param_5[6];
    uVar30 = param_5[7];
    uVar31 = param_5[8];
    uVar32 = param_5[9];
    uVar33 = param_5[10];
    uVar34 = param_5[0xb];
    uVar4 = *(undefined4 *)((longlong)param_6 + 0x7c);
    uVar3 = *(uint *)(param_1 + 0x74);
    if (uVar3 == *(uint *)(param_1 + 0x70)) {
      uVar54 = 1;
      if (1 < uVar3) {
        uVar54 = uVar3 >> 1;
      }
      lVar50 = func_0x000144d9c140(0x10,(ulonglong)(uVar54 + uVar3) * 0x120);
      uVar5 = *(uint *)(param_1 + 0x74);
      if ((ulonglong)uVar5 != 0) {
        lVar53 = *(longlong *)(param_1 + 0x78);
        lVar51 = 0;
        do {
          puVar52 = (undefined8 *)(lVar50 + lVar51);
          if (puVar52 != (undefined8 *)0x0) {
            puVar2 = (undefined8 *)(lVar53 + lVar51);
            uVar7 = *puVar2;
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            uVar38 = puVar2[4];
            uVar39 = puVar2[5];
            uVar40 = puVar2[6];
            uVar41 = puVar2[7];
            uVar42 = puVar2[9];
            uVar43 = puVar2[10];
            uVar44 = puVar2[0xb];
            puVar52[8] = puVar2[8];
            puVar52[9] = uVar42;
            puVar52[10] = uVar43;
            puVar52[0xb] = uVar44;
            puVar52[4] = uVar38;
            puVar52[5] = uVar39;
            puVar52[6] = uVar40;
            puVar52[7] = uVar41;
            *puVar52 = uVar7;
            puVar52[1] = uVar8;
            puVar52[2] = uVar9;
            puVar52[3] = uVar10;
            uVar7 = puVar2[0xc];
            uVar8 = puVar2[0xd];
            uVar9 = puVar2[0xe];
            uVar10 = puVar2[0xf];
            uVar38 = puVar2[0x10];
            uVar39 = puVar2[0x11];
            uVar40 = puVar2[0x12];
            uVar41 = puVar2[0x13];
            uVar42 = puVar2[0x14];
            uVar43 = puVar2[0x15];
            uVar44 = puVar2[0x16];
            uVar45 = puVar2[0x17];
            uVar46 = *(undefined8 *)((longlong)puVar2 + 0xc4);
            uVar47 = *(undefined8 *)((longlong)puVar2 + 0xcc);
            uVar48 = *(undefined8 *)((longlong)puVar2 + 0xd4);
            puVar52 = (undefined8 *)(lVar50 + 0xbc + lVar51);
            *puVar52 = *(undefined8 *)((longlong)puVar2 + 0xbc);
            puVar52[1] = uVar46;
            puVar52[2] = uVar47;
            puVar52[3] = uVar48;
            puVar52 = (undefined8 *)(lVar50 + 0xa0 + lVar51);
            *puVar52 = uVar42;
            puVar52[1] = uVar43;
            puVar52[2] = uVar44;
            puVar52[3] = uVar45;
            puVar52 = (undefined8 *)(lVar50 + 0x80 + lVar51);
            *puVar52 = uVar38;
            puVar52[1] = uVar39;
            puVar52[2] = uVar40;
            puVar52[3] = uVar41;
            puVar52 = (undefined8 *)(lVar50 + 0x60 + lVar51);
            *puVar52 = uVar7;
            puVar52[1] = uVar8;
            puVar52[2] = uVar9;
            puVar52[3] = uVar10;
            *(undefined4 *)(lVar50 + 0xdc + lVar51) = *(undefined4 *)((longlong)puVar2 + 0xdc);
            uVar7 = puVar2[0x1c];
            uVar8 = puVar2[0x1d];
            uVar9 = puVar2[0x1e];
            uVar10 = puVar2[0x1f];
            uVar38 = *(undefined8 *)((longlong)puVar2 + 0xfd);
            uVar39 = *(undefined8 *)((longlong)puVar2 + 0x105);
            uVar40 = *(undefined8 *)((longlong)puVar2 + 0x10d);
            puVar52 = (undefined8 *)(lVar50 + 0xf5 + lVar51);
            *puVar52 = *(undefined8 *)((longlong)puVar2 + 0xf5);
            puVar52[1] = uVar38;
            puVar52[2] = uVar39;
            puVar52[3] = uVar40;
            puVar52 = (undefined8 *)(lVar50 + 0xe0 + lVar51);
            *puVar52 = uVar7;
            puVar52[1] = uVar8;
            puVar52[2] = uVar9;
            puVar52[3] = uVar10;
          }
          lVar51 = lVar51 + 0x120;
        } while ((ulonglong)uVar5 * 0x120 != lVar51);
      }
      if (*(longlong *)(param_1 + 0x78) != 0) {
        func_0x000144d9c130();
      }
      *(longlong *)(param_1 + 0x78) = lVar50;
      *(uint *)(param_1 + 0x70) = uVar54 + uVar3;
      uVar3 = *(uint *)(param_1 + 0x74);
    }
    else {
      lVar50 = *(longlong *)(param_1 + 0x78);
    }
    *(uint *)(param_1 + 0x74) = uVar3 + 1;
    if (lVar50 != 0) {
      lVar53 = (ulonglong)uVar3 * 0x120;
      puVar52 = (undefined8 *)(lVar50 + 0x40 + lVar53);
      *puVar52 = uVar31;
      puVar52[1] = uVar32;
      puVar52[2] = uVar33;
      puVar52[3] = uVar34;
      puVar52 = (undefined8 *)(lVar50 + 0x20 + lVar53);
      *puVar52 = uVar27;
      puVar52[1] = uVar28;
      puVar52[2] = uVar29;
      puVar52[3] = uVar30;
      puVar52 = (undefined8 *)(lVar50 + lVar53);
      *puVar52 = uVar23;
      puVar52[1] = uVar24;
      puVar52[2] = uVar25;
      puVar52[3] = uVar26;
      puVar52 = (undefined8 *)(lVar50 + 0x80 + lVar53);
      *puVar52 = uVar15;
      puVar52[1] = uVar16;
      puVar52[2] = uVar17;
      puVar52[3] = uVar18;
      uVar49 = _DAT_145fc6f50;
      puVar52 = (undefined8 *)(lVar50 + 0xa0 + lVar53);
      *puVar52 = uVar19;
      puVar52[1] = uVar20;
      puVar52[2] = uVar21;
      puVar52[3] = uVar22;
      puVar52 = (undefined8 *)(lVar50 + 0x60 + lVar53);
      *puVar52 = uVar11;
      puVar52[1] = uVar12;
      puVar52[2] = uVar13;
      puVar52[3] = uVar14;
      puVar52 = (undefined8 *)(lVar50 + 0xbc + lVar53);
      *puVar52 = CONCAT44(uStack_58,uStack_5c);
      puVar52[1] = uVar35;
      puVar52[2] = uVar36;
      puVar52[3] = uVar37;
      *(undefined4 *)(lVar50 + 0xdc + lVar53) = uVar4;
      *(undefined8 *)(lVar50 + 0xe0 + lVar53) = param_4;
      *(undefined8 *)(lVar50 + 0xe8 + lVar53) = 0;
      *(undefined8 *)(lVar50 + 0xf0 + lVar53) = param_3;
      *(undefined4 *)(lVar50 + 0xf8 + lVar53) = 0xbf800000;
      *(undefined2 *)(lVar50 + 0xfc + lVar53) = 0xffff;
      puVar1 = (undefined4 *)(lVar50 + 0x100 + lVar53);
      *puVar1 = uVar49;
      puVar1[1] = uVar49;
      puVar1[2] = uVar49;
      puVar1[3] = uVar49;
      *(undefined4 *)(lVar50 + 0x110 + lVar53) = 0;
      *(undefined1 *)(lVar50 + 0x114 + lVar53) = 0;
    }
  }
  else {
    uVar3 = puVar6[1];
    if (uVar3 != *puVar6) {
      uVar11 = *param_6;
      uVar12 = param_6[1];
      uVar13 = param_6[2];
      uVar14 = param_6[3];
      uVar15 = param_6[4];
      uVar16 = param_6[5];
      uVar17 = param_6[6];
      uVar18 = param_6[7];
      uVar19 = param_6[8];
      uVar20 = param_6[9];
      uVar21 = param_6[10];
      uVar22 = param_6[0xb];
      uVar23 = *(undefined8 *)((longlong)param_6 + 100);
      uVar24 = *(undefined8 *)((longlong)param_6 + 0x6c);
      uVar25 = *(undefined8 *)((longlong)param_6 + 0x74);
      uStack_58 = (undefined4)((ulonglong)*(undefined8 *)((longlong)param_6 + 0x5c) >> 0x20);
      uStack_5c = (undefined4)((ulonglong)uVar22 >> 0x20);
      uVar26 = *param_5;
      uVar27 = param_5[1];
      uVar28 = param_5[2];
      uVar29 = param_5[3];
      uVar30 = param_5[4];
      uVar31 = param_5[5];
      uVar32 = param_5[6];
      uVar33 = param_5[7];
      uVar34 = param_5[8];
      uVar35 = param_5[9];
      uVar36 = param_5[10];
      uVar37 = param_5[0xb];
      uVar4 = *(undefined4 *)((longlong)param_6 + 0x7c);
      lVar50 = *(longlong *)(puVar6 + 2);
      puVar6[1] = uVar3 + 1;
      if (lVar50 != 0) {
        lVar53 = (ulonglong)uVar3 * 0x120;
        puVar52 = (undefined8 *)(lVar50 + 0x40 + lVar53);
        *puVar52 = uVar34;
        puVar52[1] = uVar35;
        puVar52[2] = uVar36;
        puVar52[3] = uVar37;
        puVar52 = (undefined8 *)(lVar50 + 0x20 + lVar53);
        *puVar52 = uVar30;
        puVar52[1] = uVar31;
        puVar52[2] = uVar32;
        puVar52[3] = uVar33;
        puVar52 = (undefined8 *)(lVar50 + lVar53);
        *puVar52 = uVar26;
        puVar52[1] = uVar27;
        puVar52[2] = uVar28;
        puVar52[3] = uVar29;
        puVar52 = (undefined8 *)(lVar50 + 0x80 + lVar53);
        *puVar52 = uVar15;
        puVar52[1] = uVar16;
        puVar52[2] = uVar17;
        puVar52[3] = uVar18;
        uVar49 = _DAT_145fc6f50;
        puVar52 = (undefined8 *)(lVar50 + 0xa0 + lVar53);
        *puVar52 = uVar19;
        puVar52[1] = uVar20;
        puVar52[2] = uVar21;
        puVar52[3] = uVar22;
        puVar52 = (undefined8 *)(lVar50 + 0x60 + lVar53);
        *puVar52 = uVar11;
        puVar52[1] = uVar12;
        puVar52[2] = uVar13;
        puVar52[3] = uVar14;
        puVar52 = (undefined8 *)(lVar50 + 0xbc + lVar53);
        *puVar52 = CONCAT44(uStack_58,uStack_5c);
        puVar52[1] = uVar23;
        puVar52[2] = uVar24;
        puVar52[3] = uVar25;
        *(undefined4 *)(lVar50 + 0xdc + lVar53) = uVar4;
        *(undefined8 *)(lVar50 + 0xe0 + lVar53) = param_4;
        *(undefined8 *)(lVar50 + 0xe8 + lVar53) = 0;
        *(undefined8 *)(lVar50 + 0xf0 + lVar53) = param_3;
        *(undefined4 *)(lVar50 + 0xf8 + lVar53) = 0xbf800000;
        *(undefined2 *)(lVar50 + 0xfc + lVar53) = 0xffff;
        puVar1 = (undefined4 *)(lVar50 + 0x100 + lVar53);
        *puVar1 = uVar49;
        puVar1[1] = uVar49;
        puVar1[2] = uVar49;
        puVar1[3] = uVar49;
        *(undefined4 *)(lVar50 + 0x110 + lVar53) = 0;
        *(undefined1 *)(lVar50 + 0x114 + lVar53) = 0;
      }
    }
  }
  *param_2 = param_3;
  return;
}

