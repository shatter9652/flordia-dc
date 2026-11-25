// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006c4f0  size: 2488 bytes
// Name:    FUN_14006c4f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_14006d1b0, FUN_142094460, FUN_14006c4f0, FUN_145a18680, FUN_14006bee0, FUN_14006d810, FUN_14006bd80, FUN_14006bd00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14006c4f0(longlong param_1,uint *param_2,byte param_3,byte param_4,byte param_5,
                  byte param_6,int param_7,int param_8,longlong param_9,byte param_10)

{
  byte *pbVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong unaff_GS_OFFSET;
  undefined1 auVar19 [16];
  undefined1 auStack_3e8 [8];
  longlong lStack_3e0;
  code *pcStack_398;
  undefined *puStack_390;
  undefined *puStack_388;
  longlong lStack_380;
  uint uStack_378;
  code *pcStack_330;
  undefined *puStack_328;
  undefined *puStack_320;
  undefined1 auStack_318 [8];
  longlong lStack_310;
  uint uStack_308;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  longlong lStack_2b0;
  uint uStack_2a8;
  code *pcStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined1 auStack_248 [80];
  undefined1 auStack_1f8 [16];
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [80];
  undefined1 auStack_190 [16];
  undefined8 uStack_180;
  undefined1 auStack_178 [80];
  undefined1 auStack_128 [16];
  undefined8 uStack_118;
  undefined1 auStack_110 [80];
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [80];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  uVar12 = *param_2;
  uVar15 = (ulonglong)uVar12;
  uVar11 = FUN_14006bee0(uVar15);
  if (0x3f < uVar11) goto LAB_14006cdfe;
  uVar16 = (ulonglong)uVar11;
  if (((param_4 == 1 && param_5 == 0) && (param_3 < 9)) && ((0x128U >> (param_3 & 0x1f) & 1) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 8);
    cVar8 = FUN_14006bd80(uVar3,*(undefined1 *)(param_1 + 0x61));
    if ((cVar8 == '\0') && (cVar8 = FUN_142094460(uVar3), cVar8 == '\0')) goto LAB_14006cdfe;
  }
  puVar13 = (ulonglong *)
            func_0x00014006bd30(*(undefined4 *)(param_1 + 0x6c),*(undefined8 *)(param_1 + 0x70),
                                uVar12);
  uVar4 = *(ulonglong *)(param_1 + 0x28);
  if ((byte)(param_5 | param_10 | (uVar4 >> (uVar16 & 0x3f) & 1) == 0) != 1) goto LAB_14006cdfe;
  uVar14 = 1L << (uVar16 & 0x3f);
  bVar9 = func_0x000144ec39f0(param_1,uVar16);
  if ((param_7 == 0) || (param_7 == 2 && param_8 == 0)) {
    if (puVar13 != (ulonglong *)0x0) goto LAB_14006c606;
    if ((byte)((uVar14 & uVar4) != 0 ^ param_6 | bVar9 ^ param_4) != 1) goto LAB_14006cdfe;
LAB_14006c664:
    FUN_140004b40(param_1 + 200);
    uVar12 = *(uint *)(param_1 + 0x14);
    if ((ulonglong)uVar12 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x18);
      lVar18 = 0;
      do {
        if (((((*(uint *)(lVar6 + 0x74 + lVar18) == *param_2) &&
              (bVar9 = *(byte *)(lVar6 + lVar18), ((bVar9 & 2) == 0) != (bool)param_5)) &&
             (bVar9 >> 4 == param_3)) &&
            ((((bVar9 ^ param_4) & 1) == 0 && ((bVar9 & 4) >> 2 == param_6)))) &&
           ((*(longlong *)(lVar6 + 0x58 + lVar18) != 0) == (*(longlong *)(param_9 + 0x50) != 0)))
        goto LAB_14006c827;
        lVar18 = lVar18 + 0x78;
      } while ((ulonglong)uVar12 * 0x78 - lVar18 != 0);
    }
    if (uVar12 == *(uint *)(param_1 + 0x10)) {
      uVar11 = 1;
      if (1 < uVar12) {
        uVar11 = uVar12 >> 1;
      }
      FUN_14006d810(param_1 + 0x10,uVar11 + uVar12);
      uVar12 = *(uint *)(param_1 + 0x14);
    }
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    *(uint *)(param_1 + 0x14) = uVar12 + 1;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x18) + (ulonglong)uVar12 * 0x78);
    lVar6 = *(longlong *)(param_1 + 0x18) + 8 + (ulonglong)uVar12 * 0x78;
    *(undefined4 *)(lVar6 + 0x6c) = 0;
    *(byte *)(lVar6 + -8) = *(byte *)(lVar6 + -8) & 0xf4;
    *(undefined1 (*) [16])(lVar6 + 0x50) = auVar19;
    *(undefined1 (*) [16])(lVar6 + 0x5c) = auVar19;
    *(uint *)(lVar6 + 0x6c) = *param_2;
    *(byte *)(lVar6 + -8) = param_3 * '\x10' + param_4 | param_5 * '\x02' | param_6 << 2;
    if (lVar6 != param_9) {
      pcVar5 = *(code **)(param_9 + 0x58);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(lVar6 + 0xfU & 0xfffffffffffffff0,param_9 + 0xfU & 0xfffffffffffffff0);
      }
      *(undefined8 *)(pbVar1 + 0x58) = *(undefined8 *)(param_9 + 0x50);
      *(code **)(pbVar1 + 0x60) = pcVar5;
      *(undefined8 *)(pbVar1 + 0x68) = *(undefined8 *)(param_9 + 0x60);
    }
    iVar7 = _DAT_14abbef40;
    if (puVar13 == (ulonglong *)0x0) {
      *(int *)(pbVar1 + 0x70) = _DAT_14abbef40 + 30000;
      *pbVar1 = *pbVar1 | 8;
    }
    else {
      if (param_7 == 1) {
        param_8 = FUN_14006d1b0(*(undefined8 *)(param_1 + 8),param_8);
      }
      *(int *)(pbVar1 + 0x70) = param_8 + iVar7;
    }
LAB_14006c827:
    func_0x000144d9dab0(param_1 + 200);
    goto LAB_14006cdfe;
  }
  if ((puVar13 == (ulonglong *)0x0) || ((*(byte *)(param_1 + 0x61) & 1) == 0)) {
LAB_14006c611:
    if (((uVar14 & uVar4) != 0) != (bool)param_6 || bVar9 != param_4) goto LAB_14006c664;
    if (puVar13 == (ulonglong *)0x0) goto LAB_14006cdfe;
    bVar10 = 0;
    bVar9 = 0;
  }
  else {
LAB_14006c606:
    if (*(longlong *)(param_9 + 0x50) != 0) goto LAB_14006c611;
    bVar9 = bVar9 ^ param_4;
    bVar10 = (uVar14 & uVar4) != 0 ^ param_6 | bVar9;
  }
  if ((bVar10 | param_10) != 1) goto LAB_14006cdfe;
  if (bVar9 == 1 && param_10 == 0) {
    *(int *)(puVar13 + 4) = _DAT_14abbef40;
    if (param_4 == 0) goto LAB_14006cbee;
    if ((uVar12 == 0xf9c8d7fc) || (uVar12 == 0xe91d4563)) {
      cVar8 = FUN_14006bd00(param_1,0x45497c0d);
      if (cVar8 != '\0') {
        auStack_58._0_12_ = ZEXT812(0);
        auStack_58._12_4_ = 0;
        uStack_48 = 0;
        uVar15 = (ulonglong)CONCAT31((int3)(uVar12 >> 8),*(undefined1 *)((longlong)puVar13 + 0x25))
                 & 0xffffffffffffff0f;
        FUN_14006c4f0(param_1,&UNK_146700b80,param_3,0,0,0,0,0,auStack_a8,0);
        if (&stack0x00000000 != (undefined1 *)0x2b0) {
          uStack_2a8 = *param_2;
          lStack_2b0 = param_1;
        }
        pcStack_260 = FUN_143d39050;
        puStack_258 = &UNK_1408d04c0;
        puStack_250 = &SUB_140004380;
        FUN_14006c4f0(param_1,&UNK_146700b80,uVar15,1,0,0,0,0,&lStack_2b0,0);
      }
      auStack_c0._0_12_ = ZEXT812(0);
      auStack_c0._12_4_ = 0;
      puVar17 = &UNK_1466cea30;
      uStack_b0 = 0;
      if (*param_2 == 0xf9c8d7fc) {
        puVar17 = &UNK_146700b84;
      }
      FUN_14006c4f0(param_1,puVar17,param_3,0,0,0,0,0,auStack_110,0);
    }
    uVar12 = *param_2;
    if (uVar12 == 0x45497c0d) {
      cVar8 = FUN_14006bd00(param_1,0xe91d4563);
      if (cVar8 != '\0') {
        auStack_128._0_12_ = ZEXT812(0);
        auStack_128._12_4_ = 0;
        uStack_118 = 0;
        uVar15 = CONCAT71((int7)(uVar15 >> 8),*(undefined1 *)((longlong)puVar13 + 0x25)) &
                 0xffffffffffffff0f;
        FUN_14006c4f0(param_1,&UNK_146700b84,param_3,0,0,0,0,0,auStack_178,0);
        if (&stack0x00000000 != (undefined1 *)0x310) {
          uStack_308 = *param_2;
          lStack_310 = param_1;
        }
        pcStack_2c8 = FUN_143d39050;
        puStack_2c0 = &UNK_1408d04c0;
        puStack_2b8 = &SUB_140004380;
        FUN_14006c4f0(param_1,&UNK_146700b84,uVar15,1,0,0,0,0,auStack_318,0);
      }
      cVar8 = FUN_14006bd00(param_1,0xf9c8d7fc);
      if (cVar8 != '\0') {
        auStack_190._0_12_ = ZEXT812(0);
        auStack_190._12_4_ = 0;
        uVar2 = *(undefined1 *)((longlong)puVar13 + 0x25);
        uStack_180 = 0;
        FUN_14006c4f0(param_1,&UNK_1466cea30,param_3,0,0,0,0,0,auStack_1e0,0);
        if (&stack0x00000000 != (undefined1 *)0x380) {
          uStack_378 = *param_2;
          lStack_380 = param_1;
        }
        pcStack_330 = FUN_143d39050;
        puStack_328 = &UNK_1408d04c0;
        puStack_320 = &SUB_140004380;
        FUN_14006c4f0(param_1,&UNK_1466cea30,
                      CONCAT71((int7)(uVar15 >> 8),uVar2) & 0xffffffffffffff0f,1,0,0,0,0,&lStack_380
                      ,0);
      }
      uVar12 = *param_2;
    }
    if ((uVar12 == 0x4b252ffc) || (uVar12 == 0x115b320f)) {
      puVar17 = &UNK_14666d4a0;
      auStack_1f8._0_12_ = ZEXT812(0);
      auStack_1f8._12_4_ = 0;
      if (uVar12 == 0x115b320f) {
        puVar17 = &UNK_146544b8c;
      }
      uStack_1e8 = 0;
      FUN_14006c4f0(param_1,puVar17,param_3,0,0,0,0,0,auStack_248,0);
    }
  }
  else if (param_4 == 0) {
LAB_14006cbee:
    if (((param_3 == 10) && ((*(uint *)(puVar13[1] + 0x2c) & 4) != 0)) &&
       (cVar8 = FUN_145a18680(param_1), cVar8 != '\0')) {
      if (&stack0x00000000 != (undefined1 *)0x3e0) {
        lStack_3e0 = param_1;
      }
      pcStack_398 = FUN_143d39070;
      puStack_390 = &UNK_1401167b0;
      puStack_388 = &SUB_140004380;
      FUN_14006c4f0(param_1,puVar13[1] + 0x10,10,0,0,0,0,0,auStack_3e8,0);
      goto LAB_14006cdfe;
    }
  }
  if (param_5 != 0) {
    if (param_6 == 0) {
      uVar15 = ~*puVar13 & *(ulonglong *)(param_1 + 0x28);
    }
    else {
      uVar15 = *puVar13 | *(ulonglong *)(param_1 + 0x28);
    }
    *(ulonglong *)(param_1 + 0x28) = uVar15;
  }
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  uVar15 = 0xffffffffffffffff;
  if (param_5 == 0) {
    uVar15 = ~*(ulonglong *)(param_1 + 0x28);
  }
  uVar15 = uVar15 & *puVar13;
  if (param_4 == 0) {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar16 = 0xffffffffffffffff;
    if (param_3 != 9) {
      uVar16 = ~uVar14;
    }
    uVar15 = ~(uVar16 & *(ulonglong *)(param_1 + 0x30)) & uVar15;
    if (uVar15 == 0) goto LAB_14006cdfe;
    *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) & ~uVar15;
    uVar12 = *(uint *)(param_1 + 0x6c);
    if ((ulonglong)uVar12 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x70);
      lVar18 = 0;
      do {
        bVar9 = *(byte *)(lVar6 + 0x24 + lVar18);
        if (((uVar15 >> ((ulonglong)bVar9 & 0x3f) & 1) != 0) &&
           (*(byte *)(lVar6 + 0x25 + lVar18) =
                 (*(byte *)(lVar6 + 0x25 + lVar18) & 0xd0) + (param_3 & 0xf), uVar11 != bVar9)) {
          cVar8 = func_0x000144ec39f0(param_1);
          *(byte *)(lVar6 + 0x26 + lVar18) = *(byte *)(lVar6 + 0x26 + lVar18) & 0xfb | cVar8 << 2;
          *(int *)(lVar6 + 0x20 + lVar18) = (int)puVar13[4];
        }
        lVar18 = lVar18 + 0x28;
      } while ((ulonglong)uVar12 * 0x28 != lVar18);
    }
  }
  else {
    if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8)
                 + 8) == '\0') {
      func_0x0001455db994();
    }
    uVar16 = 0xffffffffffffffff;
    if (param_3 != 9) {
      uVar16 = ~uVar14;
    }
    *(ulonglong *)(param_1 + 0x30) = *(ulonglong *)(param_1 + 0x30) | uVar16 & uVar15;
    *(ulonglong *)(param_1 + 0x20) = *(ulonglong *)(param_1 + 0x20) | uVar15;
    uVar12 = *(uint *)(param_1 + 0x6c);
    if ((ulonglong)uVar12 != 0) {
      lVar6 = *(longlong *)(param_1 + 0x70);
      lVar18 = 0;
      do {
        bVar9 = *(byte *)(lVar6 + 0x24 + lVar18);
        if ((uVar15 >> ((ulonglong)bVar9 & 0x3f) & 1) != 0) {
          bVar10 = (*(byte *)(lVar6 + 0x25 + lVar18) & 0xf0) + (param_3 & 0xf);
          *(byte *)(lVar6 + 0x25 + lVar18) = bVar10;
          *(byte *)(lVar6 + 0x25 + lVar18) =
               bVar10 & 0xdf | ((byte)*(undefined4 *)(puVar13[1] + 0x2c) & 1) << 5;
          if (uVar11 != bVar9) {
            cVar8 = func_0x000144ec39f0(param_1);
            *(byte *)(lVar6 + 0x26 + lVar18) = *(byte *)(lVar6 + 0x26 + lVar18) & 0xfb | cVar8 << 2;
            *(int *)(lVar6 + 0x20 + lVar18) = (int)puVar13[4];
          }
        }
        lVar18 = lVar18 + 0x28;
      } while ((ulonglong)uVar12 * 0x28 != lVar18);
    }
  }
  *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) | 0x40;
LAB_14006cdfe:
  if (*(code **)(param_9 + 0x60) != (code *)0x0) {
    (**(code **)(param_9 + 0x60))(param_9 + 0xfU & 0xfffffffffffffff0);
  }
  return;
}

