// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 143da7ad0  size: 1977 bytes
// Name:    rlRosHttpFilter::ProcessRequestHeader
// Subsystem: core
// Class:   rlRosHttpFilter
//
// Evidence:
//   GTAVSRC: rlRosHttpFilter::ProcessRequestHeader  (rage/base/src/rline/ros/rlroshttptask.cpp)
//   literal: ros-Challenge
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: fiDevice::GetDevice, FUN_141499590, FUN_1402675a0, FUN_1457d1ec0, FUN_1441f0de0, FUN_145647140, FUN_1428d51d0, FUN_143da9050, FUN_1411d0210, FUN_1457f8840, FUN_1419bf920, FUN_143da90b0, FUN_1400b8000
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/rlRosHttpFilter.h"


ulonglong rlRosHttpFilter__ProcessRequestHeader(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined8 auStack_1b0 [3];
  undefined1 auStack_198 [16];
  longlong lStack_188;
  ulonglong uStack_180;
  undefined1 auStack_178 [236];
  undefined1 auStack_8c [4];
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined1 auStack_58 [16];
  undefined1 uStack_41;
  
  auStack_1b0[2] = 0x143da7afe;
  FUN_141499590(auStack_178);
  uStack_41 = 0;
  bVar12 = *(byte *)(param_1 + 0x15);
  puVar8 = (undefined1 *)(ulonglong)bVar12;
  if ((bVar12 & 0x40) == 0) {
    if (bVar12 != 0) goto LAB_143da7dea;
    bVar12 = 0;
LAB_143da7e78:
    if (*(char *)(param_1 + 0x568) == '\x01') {
      puVar8 = (undefined1 *)(param_1 + 0x590);
      auStack_1b0[2] = 0x143da7e9e;
      cVar3 = FUN_1411d0210(param_2,&UNK_14677aa34,puVar8);
      if (cVar3 == '\0') {
        uStack_180 = uStack_180 & 0xffffffff00000000;
        lStack_188._0_4_ = 0xd0aa3c2f;
        auStack_1b0[0] = 0x143da8172;
        FUN_1402675a0(0x146c31c98,4);
        puVar10 = auStack_198;
        uVar6 = 0x2c2;
        uVar11 = 0xae3b41b6;
        goto LAB_143da8268;
      }
      bVar12 = *(byte *)(param_1 + 0x15);
      if ((bVar12 & 0x40) != 0) {
        auStack_1b0[2] = 0x143da7ec0;
        uVar4 = func_0x000145f407f0(puVar8);
        auStack_1b0[2] = 0x143da7ecf;
        FUN_1419bf920(auStack_178,puVar8,uVar4);
      }
    }
    if ((char)bVar12 < '\0') {
      auStack_1b0[2] = 0x143da7ef2;
      FUN_1419bf920(auStack_178,&uStack_41,1);
    }
    puVar5 = auStack_178;
    if ((bVar12 & 1) == 0) {
LAB_143da7fbc:
      if ((char)bVar12 < '\0') {
        *(undefined8 *)(puVar5 + -0x28) = 0x143da7fdb;
        FUN_1419bf920(auStack_178,&uStack_41,1);
      }
      uVar9 = CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
      if ((bVar12 & 0x40) == 0) goto LAB_143da8273;
      *(undefined8 *)(puVar5 + -0x28) = 0x143da7ff4;
      uVar6 = func_0x000144f507b0();
      *(undefined8 *)(puVar5 + -0x28) = 0x143da7ffc;
      uVar6 = func_0x0001405926e0(uVar6);
      *(undefined8 *)(puVar5 + -0x28) = 0x143da800e;
      FUN_143da90b0(uVar6,auStack_58);
      *(undefined8 *)(puVar5 + -0x28) = 0x143da8023;
      FUN_1419bf920(auStack_178,auStack_58,0x10);
      *(undefined8 *)(puVar5 + -0x28) = 0x143da803d;
      FUN_1457f8840(auStack_178,param_1 + 0x211);
      *(undefined8 *)(puVar5 + -0x28) = 0x143da8047;
      func_0x000141b7df50(0x14);
      *(undefined8 *)(puVar5 + -8) = 0x143da805d;
      lVar7 = FUN_145647140();
      lVar7 = -lVar7;
      *(undefined1 **)(puVar5 + lVar7 + -0x10) = auStack_8c;
      *(undefined8 *)(puVar5 + lVar7 + -0x38) = 0x143da8080;
      cVar3 = fiDevice__GetDevice(param_1 + 0x211,0x14,(longlong)puVar5 + lVar7);
      if (cVar3 == '\0') {
        *(undefined4 *)(puVar5 + lVar7 + -8) = 0;
        *(undefined4 *)(puVar5 + lVar7 + -0x10) = 0xa7615190;
        *(undefined8 *)(puVar5 + lVar7 + -0x38) = 0x143da8208;
        FUN_1402675a0(0x146c31c98,4);
        puVar10 = puVar5 + lVar7 + -0x20;
        uVar6 = 0x303;
        uVar11 = 0x64e94174;
      }
      else {
        *(undefined8 *)(puVar5 + lVar7 + -0x28) = 0x143da80a2;
        cVar3 = FUN_1411d0210(param_2,&UNK_1467859b4,(longlong)puVar5 + lVar7);
        if (cVar3 != '\0') goto LAB_143da8273;
        *(undefined4 *)(puVar5 + lVar7 + -8) = 0;
        *(undefined4 *)(puVar5 + lVar7 + -0x10) = 0x9248cd32;
        *(undefined8 *)(puVar5 + lVar7 + -0x38) = 0x143da80dc;
        FUN_1402675a0(0x146c31c98,4);
        puVar10 = puVar5 + lVar7 + -0x20;
        uVar6 = 0x306;
        uVar11 = 0x1727e59e;
      }
    }
    else {
      auStack_1b0[2] = 0x143da7f09;
      uVar6 = FUN_1441f0de0();
      *(undefined8 *)(param_1 + 0x209) = uVar6;
      auStack_1b0[2] = 0x143da7f29;
      func_0x000141b7df50(8);
      uStack_180 = 0x143da7f3f;
      lVar7 = FUN_145647140();
      lVar7 = -lVar7;
      *(undefined1 **)((longlong)&lStack_188 + lVar7) = auStack_58;
      *(undefined8 *)((longlong)auStack_1b0 + lVar7) = 0x143da7f65;
      cVar3 = fiDevice__GetDevice(param_1 + 0x209,8,auStack_178 + lVar7);
      if (cVar3 == '\0') {
        *(undefined4 *)(auStack_178 + lVar7 + -8) = 0;
        *(undefined4 *)((longlong)&lStack_188 + lVar7) = 0xf95ad8be;
        *(undefined8 *)((longlong)auStack_1b0 + lVar7) = 0x143da81bd;
        FUN_1402675a0(0x146c31c98,4);
        puVar10 = auStack_198 + lVar7;
        uVar6 = 0x2df;
        uVar11 = 0x21c0530;
      }
      else {
        *(undefined8 *)(auStack_198 + lVar7 + -8) = 0x143da7f87;
        cVar3 = FUN_1411d0210(param_2,&UNK_1467833a8,auStack_178 + lVar7);
        if (cVar3 != '\0') {
          bVar12 = *(byte *)(param_1 + 0x15);
          puVar8 = auStack_178 + lVar7;
          puVar5 = auStack_178 + lVar7;
          if ((bVar12 & 0x40) != 0) {
            *(undefined8 *)(auStack_198 + lVar7 + -8) = 0x143da7fa9;
            uVar4 = func_0x000145f407f0(auStack_178 + lVar7);
            *(undefined8 *)(auStack_198 + lVar7 + -8) = 0x143da7fb8;
            FUN_1419bf920(auStack_178,auStack_178 + lVar7,uVar4);
            puVar8 = auStack_178 + lVar7;
            puVar5 = auStack_178 + lVar7;
          }
          goto LAB_143da7fbc;
        }
        *(undefined4 *)(auStack_178 + lVar7 + -8) = 0;
        *(undefined4 *)((longlong)&lStack_188 + lVar7) = 0x13d5ce9f;
        *(undefined8 *)((longlong)auStack_1b0 + lVar7) = 0x143da8250;
        FUN_1402675a0(0x146c31c98,4);
        puVar10 = auStack_198 + lVar7;
        uVar6 = 0x2e2;
        uVar11 = 0x1dd808ba;
      }
    }
  }
  else {
    auStack_58 = (undefined1  [16])0x0;
    auStack_1b0[2] = 0x143da7b3b;
    uVar6 = func_0x000144f507b0();
    auStack_1b0[2] = 0x143da7b43;
    uVar6 = func_0x0001405926e0(uVar6);
    auStack_1b0[2] = 0x143da7b4e;
    FUN_143da9050(uVar6);
    if (*(char *)(param_1 + 0x568) == '\x01') {
      uVar1 = *(uint *)(param_1 + 0x58c);
      uStack_88 = 2 % (ulonglong)uVar1;
      uStack_80 = 3 % (ulonglong)uVar1;
      uStack_78 = 4 % (ulonglong)uVar1;
      uStack_70 = 5 % (ulonglong)uVar1;
      uStack_68 = 6 % (ulonglong)uVar1;
      uStack_60 = 7 % (ulonglong)uVar1;
      auVar2 = vpinsrb_avx(*(undefined1 (*) [16])(param_1 + 0x56c),
                           (uint)*(byte *)(param_1 + 0x56c + (ulonglong)(uVar1 != 1)),1);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + uStack_88),2);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + uStack_80),3);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + uStack_78),4);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + uStack_70),5);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + uStack_68),6);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + uStack_60),7);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + 8U % (ulonglong)uVar1),8);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + 9U % (ulonglong)uVar1),9);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + 10U % (ulonglong)uVar1),10);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + 0xbU % (ulonglong)uVar1),0xb);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + 0xcU % (ulonglong)uVar1),0xc);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + 0xdU % (ulonglong)uVar1),0xd);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + 0xeU % (ulonglong)uVar1),0xe);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_1 + 0x56c + 0xfU % (ulonglong)uVar1),0xf);
      auStack_58 = auVar2 ^ auStack_58;
    }
    auStack_1b0[2] = 0x143da7d2d;
    FUN_1428d51d0(auStack_178,auStack_58);
    auStack_1b0[2] = 0x143da7d40;
    uVar6 = func_0x000141140dc0(*(undefined1 *)(param_2 + 0x18dc));
    auStack_1b0[2] = 0x143da7d53;
    uVar4 = func_0x000145f407f0(uVar6);
    auStack_1b0[2] = 0x143da7d61;
    FUN_1419bf920(auStack_178,uVar6,uVar4);
    if ((char)bVar12 < '\0') {
      puVar5 = &uStack_41;
      auStack_1b0[2] = 0x143da7dac;
      FUN_1419bf920(auStack_178,puVar5,1);
      auStack_1b0[2] = 0x143da7db4;
      uVar6 = func_0x0001441db770(param_2);
      auStack_1b0[2] = 0x143da7dc7;
      uVar4 = func_0x000145f407f0(uVar6);
      auStack_1b0[2] = 0x143da7dd5;
      FUN_1419bf920(auStack_178,uVar6,uVar4);
      uVar4 = 1;
    }
    else {
      auStack_1b0[2] = 0x143da7d75;
      puVar5 = (undefined1 *)func_0x0001441db770(param_2);
      auStack_1b0[2] = 0x143da7d88;
      uVar4 = func_0x000145f407f0(puVar5);
    }
    auStack_1b0[2] = 0x143da7de6;
    FUN_1419bf920(auStack_178,puVar5,uVar4);
LAB_143da7dea:
    puVar10 = auStack_198;
    auStack_1b0[2] = 0x143da7e07;
    FUN_1400b8000(auStack_58,&UNK_1467854e3,puVar8);
    auStack_1b0[2] = 0x143da7e19;
    cVar3 = FUN_1411d0210(param_2,&UNK_14677c020,auStack_58);
    if (cVar3 != '\0') {
      bVar12 = *(byte *)(param_1 + 0x15);
      if ((bVar12 & 0x40) != 0) {
        puVar8 = auStack_58;
        auStack_1b0[2] = 0x143da7e42;
        uVar4 = func_0x000145f407f0(puVar8);
        auStack_1b0[2] = 0x143da7e51;
        FUN_1419bf920(auStack_178,puVar8,uVar4);
      }
      if ((char)bVar12 < '\0') {
        auStack_1b0[2] = 0x143da7e74;
        FUN_1419bf920(auStack_178,&uStack_41,1);
      }
      goto LAB_143da7e78;
    }
    uStack_180 = uStack_180 & 0xffffffff00000000;
    lStack_188._0_4_ = 0xe78bf1a0;
    auStack_1b0[0] = 0x143da8127;
    FUN_1402675a0(0x146c31c98,4);
    uVar6 = 0x2af;
    uVar11 = 0x6553adb;
  }
LAB_143da8268:
  *(undefined8 *)(puVar10 + -8) = 0x143da826d;
  FUN_1457d1ec0(0x146c31c98,1,uVar6,uVar11);
  uVar9 = 0;
LAB_143da8273:
  return uVar9 & 0xffffffff;
}

