// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143da8290  size: 2791 bytes
// Name:    netHttpRequest::GetHeaderValue
// Subsystem: core
// Class:   netHttpRequest
//
// Evidence:
//   GTAVSRC: netHttpRequest::GetHeaderValue  (rage/base/src/rline/ros/rlroshttptask.cpp)
//   literal: ros-ContentHash
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1404e0e20, FUN_140b171b0, FUN_14003bd50, FUN_1402675a0, FUN_1457d1ec0, FUN_1428d51b0, FUN_1457f8840, FUN_145647140, FUN_1419bf920, FUN_143da9050, FUN_143da90b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/netHttpRequest.h"


undefined8 netHttpRequest__GetHeaderValue(longlong param_1,int param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined8 auStack_220 [3];
  undefined1 auStack_208 [16];
  undefined4 auStack_1f8 [2];
  undefined8 uStack_1f0;
  undefined1 auStack_1e8 [24];
  int aiStack_1d0 [58];
  undefined4 uStack_e8;
  undefined1 auStack_e4 [12];
  uint uStack_d8;
  undefined1 auStack_c8 [16];
  uint uStack_b8;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  undefined1 auStack_68 [16];
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  uint uStack_48;
  undefined1 uStack_41;
  
  puVar13 = auStack_1e8;
  puVar16 = (undefined1 *)0x0;
  iStack_54 = 0;
  iStack_50 = 0;
  iStack_4c = 0;
  uStack_48 = 0;
  if (param_3 == 0) {
    puVar15 = (undefined1 *)0x0;
    puVar9 = (undefined1 *)0x0;
LAB_143da8868:
    if (((*(byte *)(param_1 + 0x15) & 2) != 0) && ((param_2 < 400 || (param_2 == 0x194)))) {
      *(undefined4 *)(puVar13 + -8) = 0;
      *(undefined4 *)(puVar13 + -0x10) = 0x8b486fa4;
      *(undefined8 *)(puVar13 + -0x38) = 0x143da88b4;
      FUN_1402675a0(0x146c31c98,4);
      puVar12 = puVar13 + -0x20;
      uVar7 = 0x351;
      uVar14 = 0xe081e869;
      goto LAB_143da8d58;
    }
  }
  else {
    puVar9 = (undefined1 *)0x0;
    auStack_220[2] = 0x143da82fd;
    FUN_1404e0e20(param_3,&UNK_14677f3fc,0,&iStack_54);
    puVar10 = auStack_1e8;
    if (iStack_54 != 0) {
      iStack_54 = iStack_54 + 1;
      uStack_1f0 = 0x143da8321;
      lVar6 = FUN_145647140();
      lVar6 = -lVar6;
      puVar9 = auStack_1e8 + lVar6;
      *(undefined8 *)(auStack_208 + lVar6 + -8) = 0x143da833d;
      cVar4 = FUN_1404e0e20(param_3,&UNK_14677f3fc,auStack_1e8 + lVar6);
      puVar10 = auStack_1e8 + lVar6;
      if (cVar4 == '\0') {
        *(undefined4 *)(auStack_1e8 + lVar6 + -8) = 0;
        *(undefined4 *)((longlong)auStack_1f8 + lVar6) = 0xcff0aede;
        *(undefined8 *)((longlong)auStack_220 + lVar6) = 0x143da8bcc;
        FUN_1402675a0(0x146c31c98,4);
        puVar12 = auStack_208 + lVar6;
        uVar7 = 0x328;
        uVar14 = 0xee1c578e;
        goto LAB_143da8d58;
      }
    }
    puVar15 = (undefined1 *)0x0;
    *(undefined8 *)(puVar10 + -0x28) = 0x143da836c;
    FUN_1404e0e20(param_3,&UNK_146782017,0,&iStack_50);
    puVar13 = puVar10;
    if (iStack_50 != 0) {
      iStack_50 = iStack_50 + 1;
      *(undefined8 *)(puVar10 + -8) = 0x143da8390;
      lVar6 = FUN_145647140();
      lVar6 = -lVar6;
      puVar15 = puVar10 + lVar6;
      puVar13 = puVar10 + lVar6;
      *(undefined8 *)(puVar10 + lVar6 + -0x28) = 0x143da83ac;
      cVar4 = FUN_1404e0e20(param_3,&UNK_146782017,(longlong)puVar10 + lVar6);
      if (cVar4 == '\0') {
        *(undefined4 *)(puVar10 + lVar6 + -8) = 0;
        *(undefined4 *)(puVar10 + lVar6 + -0x10) = 0x197d4832;
        *(undefined8 *)(puVar10 + lVar6 + -0x38) = 0x143da8c17;
        FUN_1402675a0(0x146c31c98,4);
        puVar12 = puVar10 + lVar6 + -0x20;
        uVar7 = 0x332;
        uVar14 = 0x5cd75cd8;
        goto LAB_143da8d58;
      }
    }
    puVar16 = (undefined1 *)0x0;
    *(undefined8 *)(puVar13 + -0x28) = 0x143da83db;
    FUN_1404e0e20(param_3,&UNK_146780c44,0,&iStack_4c);
    puVar11 = puVar13;
    if (iStack_4c != 0) {
      iStack_4c = iStack_4c + 1;
      *(undefined8 *)(puVar13 + -8) = 0x143da8400;
      lVar6 = FUN_145647140();
      lVar6 = -lVar6;
      puVar16 = puVar13 + lVar6;
      puVar11 = puVar13 + lVar6;
      *(undefined8 *)(puVar13 + lVar6 + -0x28) = 0x143da841c;
      cVar4 = FUN_1404e0e20(param_3,&UNK_146780c44,(longlong)puVar13 + lVar6);
      if (cVar4 == '\0') {
        *(undefined4 *)(puVar13 + lVar6 + -8) = 0;
        *(undefined4 *)(puVar13 + lVar6 + -0x10) = 0x9d5d6f4f;
        *(undefined8 *)(puVar13 + lVar6 + -0x38) = 0x143da8c62;
        FUN_1402675a0(0x146c31c98,4);
        puVar12 = puVar13 + lVar6 + -0x20;
        uVar7 = 0x33c;
        uVar14 = 0x21c06a5;
        goto LAB_143da8d58;
      }
    }
    *(undefined8 *)(puVar11 + -0x28) = 0x143da8448;
    FUN_1404e0e20(param_3,&UNK_1467859b4,0,&uStack_48);
    puVar13 = puVar11;
    if (uStack_48 == 0) goto LAB_143da8868;
    uStack_48 = uStack_48 + 1;
    *(undefined8 *)(puVar11 + -8) = 0x143da8471;
    lVar6 = FUN_145647140();
    lVar6 = -lVar6;
    puVar13 = puVar11 + lVar6;
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da848d;
    cVar4 = FUN_1404e0e20(param_3,&UNK_1467859b4,(longlong)puVar11 + lVar6);
    if (cVar4 == '\0') {
      *(undefined4 *)(puVar11 + lVar6 + -8) = 0;
      *(undefined4 *)(puVar11 + lVar6 + -0x10) = 0x6afe7b53;
      *(undefined8 *)(puVar11 + lVar6 + -0x38) = 0x143da8cad;
      FUN_1402675a0(0x146c31c98,4);
      puVar12 = puVar11 + lVar6 + -0x20;
      uVar7 = 0x346;
      uVar14 = 0xb131ccaf;
      goto LAB_143da8d58;
    }
    uStack_41 = 0;
    iStack_58 = 0;
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da84c6;
    cVar4 = FUN_140b171b0((longlong)puVar11 + lVar6,0x14,auStack_c8);
    if ((cVar4 == '\0') || (iStack_58 != 0x14)) {
      *(undefined4 *)(puVar11 + lVar6 + -8) = 0;
      *(undefined4 *)(puVar11 + lVar6 + -0x10) = 0xa3abff37;
      *(undefined8 *)(puVar11 + lVar6 + -0x38) = 0x143da8cf8;
      FUN_1402675a0(0x146c31c98,4);
      puVar12 = puVar11 + lVar6 + -0x20;
      uVar7 = 0x35c;
      uVar14 = 0x67014c01;
      goto LAB_143da8d58;
    }
    auStack_68 = (undefined1  [16])0x0;
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da84f9;
    uVar7 = func_0x000144f507b0();
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da8501;
    uVar7 = func_0x0001405926e0(uVar7);
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da850c;
    FUN_143da9050(uVar7);
    if (*(char *)(param_1 + 0x568) == '\x01') {
      uVar2 = *(uint *)(param_1 + 0x58c);
      uStack_a8 = 2 % (ulonglong)uVar2;
      uStack_a0 = 3 % (ulonglong)uVar2;
      uStack_98 = 4 % (ulonglong)uVar2;
      uStack_90 = 5 % (ulonglong)uVar2;
      uStack_88 = 6 % (ulonglong)uVar2;
      uStack_80 = 7 % (ulonglong)uVar2;
      uStack_78 = 8 % (ulonglong)uVar2;
      uStack_70 = 9 % (ulonglong)uVar2;
      auVar3 = vpinsrb_avx(*(undefined1 (*) [16])(param_1 + 0x56c),
                           (uint)*(byte *)(param_1 + 0x56c + (ulonglong)(uVar2 != 1)),1);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + uStack_a8),2);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + uStack_a0),3);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + uStack_98),4);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + uStack_90),5);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + uStack_88),6);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + uStack_80),7);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + uStack_78),8);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + uStack_70),9);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + 10U % (ulonglong)uVar2),10);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + 0xbU % (ulonglong)uVar2),0xb);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + 0xcU % (ulonglong)uVar2),0xc);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + 0xdU % (ulonglong)uVar2),0xd);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + 0xeU % (ulonglong)uVar2),0xe);
      auVar3 = vpinsrb_avx(auVar3,(uint)*(byte *)(param_1 + 0x56c + 0xfU % (ulonglong)uVar2),0xf);
      auStack_68 = auVar3 ^ auStack_68;
    }
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da86fb;
    FUN_1428d51b0(aiStack_1d0,auStack_68);
    if (puVar9 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da8710;
      uVar5 = func_0x000145f407f0(puVar9);
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da871f;
      FUN_1419bf920(aiStack_1d0,puVar9,uVar5);
    }
    bVar1 = *(byte *)(param_1 + 0x15);
    if ((char)bVar1 < '\0') {
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da8746;
      FUN_1419bf920(aiStack_1d0,&uStack_41,1);
    }
    if (puVar15 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da875b;
      uVar5 = func_0x000145f407f0(puVar15);
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da876a;
      FUN_1419bf920(aiStack_1d0,puVar15,uVar5);
    }
    if ((char)bVar1 < '\0') {
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da878d;
      FUN_1419bf920(aiStack_1d0,&uStack_41,1);
    }
    if (puVar16 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da87a2;
      uVar5 = func_0x000145f407f0(puVar16);
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da87b1;
      FUN_1419bf920(aiStack_1d0,puVar16,uVar5);
    }
    if ((char)bVar1 < '\0') {
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da87d4;
      FUN_1419bf920(aiStack_1d0,&uStack_41,1);
    }
    if ((bVar1 & 0x20) != 0) {
      uStack_e8 = CONCAT13((char)param_2,
                           CONCAT12((char)((uint)param_2 >> 8),
                                    CONCAT11((char)((uint)param_2 >> 0x10),
                                             (char)((uint)param_2 >> 0x18))));
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da87fc;
      FUN_1419bf920(aiStack_1d0,&uStack_e8,4);
      if ((char)bVar1 < '\0') {
        *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da881f;
        FUN_1419bf920(aiStack_1d0,&uStack_41,1);
      }
    }
    if ((bVar1 & 1) == 0) {
      if ((bVar1 & 0x40) != 0) {
        *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da8851;
        FUN_1419bf920(aiStack_1d0,param_1 + 0x211,0x14);
        if ((char)bVar1 < '\0') {
LAB_143da8953:
          puVar8 = &uStack_41;
          uVar7 = 1;
LAB_143da8968:
          *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da896d;
          FUN_1419bf920(aiStack_1d0,puVar8,uVar7);
        }
      }
    }
    else {
      *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da88eb;
      FUN_1419bf920(aiStack_1d0,param_1 + 0x209,8);
      if ((char)bVar1 < '\0') {
        *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da892b;
        FUN_1419bf920(aiStack_1d0,&uStack_41,1);
        if ((bVar1 & 0x40) != 0) {
          *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da894f;
          FUN_1419bf920(aiStack_1d0,param_1 + 0x211,0x14);
          goto LAB_143da8953;
        }
      }
      else if ((bVar1 & 0x40) != 0) {
        puVar8 = (undefined1 *)(param_1 + 0x211);
        uVar7 = 0x14;
        goto LAB_143da8968;
      }
    }
    puVar12 = puVar11 + lVar6 + -0x20;
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da897a;
    uVar7 = func_0x000144f507b0();
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da8982;
    uVar7 = func_0x0001405926e0(uVar7);
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da8991;
    FUN_143da90b0(uVar7,auStack_1e8);
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da89a6;
    FUN_1419bf920(aiStack_1d0,auStack_1e8,0x10);
    *(undefined8 *)(puVar11 + lVar6 + -0x28) = 0x143da89b8;
    FUN_1457f8840(aiStack_1d0,&uStack_e8);
    auVar3._4_12_ = auStack_e4;
    auVar3._0_4_ = uStack_e8;
    auVar3 = vpor_avx(ZEXT416(uStack_d8 ^ uStack_b8),auVar3 ^ auStack_c8);
    if (auVar3 != (undefined1  [16])0x0) {
      *(undefined4 *)(puVar11 + lVar6 + -8) = 0;
      *(undefined4 *)(puVar11 + lVar6 + -0x10) = 0x1e5c2698;
      *(undefined8 *)(puVar11 + lVar6 + -0x38) = 0x143da8d40;
      FUN_1402675a0(0x146c31c98,4,uStack_b8,0x3aa);
      uVar7 = 0x3aa;
      uVar14 = 0xdc83fc9;
      goto LAB_143da8d58;
    }
  }
  if (puVar15 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar13 + -0x28) = 0x143da8a10;
    cVar4 = FUN_140b171b0(puVar15,0x80,param_1 + 0x358,param_1 + 0x3d8);
    if (cVar4 == '\0') {
      *(undefined4 *)(puVar13 + -8) = 0;
      *(undefined4 *)(puVar13 + -0x10) = 0xfc960c67;
      *(undefined8 *)(puVar13 + -0x38) = 0x143da8b10;
      FUN_1402675a0(0x146c31c98,4);
      puVar12 = puVar13 + -0x20;
      uVar7 = 0x3b7;
      uVar14 = 0x47a548b1;
      goto LAB_143da8d58;
    }
    *(byte *)(param_1 + 0x343) = *(byte *)(param_1 + 0x343) | 2;
  }
  if (puVar16 != (undefined1 *)0x0) {
    *(undefined8 *)(puVar13 + -0x28) = 0x143da8a44;
    cVar4 = FUN_140b171b0(puVar16,0x14,param_1 + 0x344,aiStack_1d0);
    if ((cVar4 == '\0') || (aiStack_1d0[0] != 0x14)) {
      *(undefined4 *)(puVar13 + -8) = 0;
      *(undefined4 *)(puVar13 + -0x10) = 0xbae0b225;
      *(undefined8 *)(puVar13 + -0x38) = 0x143da8b5b;
      FUN_1402675a0(0x146c31c98,4);
      puVar12 = puVar13 + -0x20;
      uVar7 = 0x3c9;
      uVar14 = 0x3942ca60;
LAB_143da8d58:
      *(undefined8 *)(puVar12 + -8) = 0x143da8d5d;
      FUN_1457d1ec0(0x146c31c98,1,uVar7,uVar14);
      return 0;
    }
    *(byte *)(param_1 + 0x343) = *(byte *)(param_1 + 0x343) | 4;
  }
  if (param_2 - 300U < 100 && param_2 != 0x130) {
    if (puVar9 != (undefined1 *)0x0) {
      *(undefined8 *)(puVar13 + -0x28) = 0x143da8a96;
      lVar6 = FUN_14003bd50(puVar9,&UNK_14677fabc);
      if (lVar6 != 0) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x22c) = 0;
      *(undefined1 *)(param_1 + 0x15) = 0;
      return 1;
    }
    *(undefined8 *)(puVar13 + -0x28) = 0x143da8b95;
    FUN_1457d1ec0(0x146c31c98,5,0x3e5,0x4f5c36c0);
  }
  else if (param_2 < 400) {
    *(undefined4 *)(param_1 + 0x228) = *(undefined4 *)(param_1 + 0x22c);
  }
  else {
    *(undefined4 *)(param_1 + 0x228) = 0;
  }
  return 1;
}

