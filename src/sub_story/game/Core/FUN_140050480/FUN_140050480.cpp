// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140050480  size: 2979 bytes
// Name:    FUN_140050480
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140905090, FUN_140998010, FUN_140264ac0, FUN_140426f90, FUN_140d6b0c0, FUN_1404b8950, FUN_140457040, FUN_144ea5550, FUN_144ead9e0, FUN_14017c8d0, FUN_144ea5480, FUN_140140130, FUN_14017c310, FUN_1409c4330, FUN_1431f7580, FUN_14087b130, FUN_1408bc310, FUN_140b71210, FUN_1406292b0, FUN_140a1c140, FUN_14537b1c0, FUN_1451886f0, FUN_144ea5460, FUN_1404251e0, FUN_1406cae70, FUN_140997fe0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140050480(longlong *param_1,longlong param_2,undefined8 param_3,undefined2 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  float fVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong *plVar14;
  float fVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  longlong *plVar18;
  bool bVar19;
  int iVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  float fVar28;
  float fVar29;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [64];
  undefined1 uStack_2a1;
  longlong *plStack_2a0;
  longlong lStack_298;
  longlong *plStack_290;
  longlong *plStack_288;
  longlong *plStack_280;
  float afStack_278 [2];
  undefined1 auStack_270 [32];
  undefined1 auStack_250 [32];
  undefined2 uStack_230;
  undefined1 auStack_228 [32];
  undefined4 uStack_208;
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  unkbyte10 Stack_1a0;
  undefined1 auStack_196 [22];
  unkbyte10 Stack_180;
  undefined1 auStack_170 [304];
  undefined1 auVar33 [64];
  
  if (*(char *)((longlong)param_1 + 0x4329) == '\0') {
    auVar23._0_12_ = ZEXT812(0);
    auVar23._12_4_ = 0;
    *param_1 = param_2;
    param_1[0x87e] = 0;
    plVar14 = param_1 + 0x2e;
    *(undefined1 (*) [16])(param_1 + 0x2b) = auVar23;
    if (*(char *)((longlong)param_1 + 0x172) != '\a') {
      FUN_14537b1c0(plVar14,7);
      lVar10 = param_1[0x2d];
      if ((lVar10 != 0) &&
         (cVar7 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x173)), cVar7 != '\0')) {
        FUN_1406292b0(lVar10,afStack_278,(longlong)param_1 + 0x174);
        FUN_140426f90(plVar14,afStack_278);
        FUN_144ea5460(afStack_278);
        func_0x00014046d540(plVar14);
      }
    }
    plVar1 = param_1 + 0x31;
    if (*(char *)((longlong)param_1 + 0x18a) != '\x06') {
      FUN_14537b1c0(plVar1,6);
      lVar10 = param_1[0x30];
      if ((lVar10 != 0) &&
         (cVar7 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x18b)), cVar7 != '\0')) {
        FUN_1406292b0(lVar10,afStack_278,(longlong)param_1 + 0x18c);
        FUN_140426f90(plVar1,afStack_278);
        FUN_144ea5460(afStack_278);
        func_0x00014046d540(plVar1);
      }
    }
    plVar2 = param_1 + 0x66;
    if (*(char *)((longlong)param_1 + 0x332) != '\a') {
      FUN_14537b1c0(plVar2,7);
      lVar10 = param_1[0x65];
      if ((lVar10 != 0) &&
         (cVar7 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x333)), cVar7 != '\0')) {
        FUN_1406292b0(lVar10,afStack_278,(longlong)param_1 + 0x334);
        FUN_140426f90(plVar2,afStack_278);
        FUN_144ea5460(afStack_278);
        func_0x00014046d540(plVar2);
      }
    }
    plVar18 = param_1 + 0x69;
    plStack_280 = plVar2;
    if (*(char *)((longlong)param_1 + 0x34a) != '\a') {
      FUN_14537b1c0(plVar18,7);
      lVar10 = param_1[0x68];
      if ((lVar10 != 0) &&
         (cVar7 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x34b)), cVar7 != '\0')) {
        FUN_1406292b0(lVar10,afStack_278,(longlong)param_1 + 0x34c);
        FUN_140426f90(plVar18,afStack_278);
        FUN_144ea5460(afStack_278);
        func_0x00014046d540(plVar18);
      }
    }
    plVar2 = param_1 + 0x6c;
    plStack_288 = plVar18;
    if (*(char *)((longlong)param_1 + 0x362) != '\x06') {
      FUN_14537b1c0(plVar2,6);
      lVar10 = param_1[0x6b];
      if ((lVar10 != 0) &&
         (cVar7 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x363)), cVar7 != '\0')) {
        FUN_1406292b0(lVar10,afStack_278,(longlong)param_1 + 0x364);
        FUN_140426f90(plVar2,afStack_278);
        FUN_144ea5460(afStack_278);
        func_0x00014046d540(plVar2);
      }
    }
    plVar18 = param_1 + 0x6f;
    if (*(char *)((longlong)param_1 + 0x37a) != '\x06') {
      FUN_14537b1c0(plVar18,6);
      lVar10 = param_1[0x6e];
      if ((lVar10 != 0) &&
         (cVar7 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x37b)), cVar7 != '\0')) {
        FUN_1406292b0(lVar10,afStack_278,(longlong)param_1 + 0x37c);
        FUN_140426f90(plVar18,afStack_278);
        FUN_144ea5460(afStack_278);
        func_0x00014046d540(plVar18);
      }
    }
    if (*(char *)((longlong)param_1 + 0x433a) != '\x06') {
      plVar3 = param_1 + 0x867;
      FUN_14537b1c0(plVar3,6);
      lVar10 = param_1[0x866];
      if ((lVar10 != 0) &&
         (cVar7 = func_0x000144da4370(*(undefined1 *)((longlong)param_1 + 0x433b)), cVar7 != '\0'))
      {
        plStack_2a0 = plVar18;
        FUN_1406292b0(lVar10,afStack_278,(longlong)param_1 + 0x433c);
        FUN_140426f90(plVar3,afStack_278);
        plVar18 = plStack_2a0;
        FUN_144ea5460(afStack_278);
        func_0x00014046d540(plVar3);
      }
    }
    func_0x0001400f2130(param_1 + 1,*param_1);
    uVar9 = func_0x000144e6ea40(*(undefined4 *)(*param_1 + 0x9c));
    uVar9 = func_0x000144e6e9f0(uVar9);
    *(undefined1 *)((longlong)param_1 + 0x43f9) = 1;
    FUN_1431f7580(param_1,uVar9);
    FUN_14087b130(param_1);
    FUN_1406cae70(param_1);
    if (param_1[0x2b] != 0) {
      plStack_2a0 = plVar18;
      lVar10 = func_0x000144f97130(0x160);
      if (lVar10 != 0) {
        FUN_140d6b0c0(lVar10,param_1);
      }
      param_1[0x87e] = lVar10;
      puVar11 = (undefined8 *)func_0x000144f97130(0x940);
      lStack_298 = param_2;
      if (puVar11 == (undefined8 *)0x0) {
        puVar21 = (undefined8 *)0x0;
      }
      else {
        puVar21 = puVar11 + 2;
        *puVar11 = 3;
        FUN_140457040(puVar21);
        FUN_140457040(puVar11 + 100);
        FUN_140457040(puVar11 + 0xc6);
      }
      uVar4 = _DAT_145f43848;
      auVar34 = ZEXT464(_DAT_145f43848);
      auVar32._0_12_ = ZEXT812(0);
      auVar32._12_4_ = 0;
      auVar33 = ZEXT1664(auVar32);
      param_1[0x1e4] = (longlong)puVar21;
      *(undefined1 (*) [16])(param_1 + 0xf8) = auVar32;
      *(undefined1 (*) [16])((longlong)param_1 + 0x7cc) = auVar32;
      *(undefined1 (*) [16])((longlong)param_1 + 0x7dc) = ZEXT416(uVar4);
      FUN_140998010(param_1 + 0xd5);
      FUN_140997fe0(param_1);
      FUN_140998010(param_1 + 0x489);
      plStack_290 = param_1 + 0x344;
      param_1[0xf7] = (longlong)param_1;
      param_1[0x120] = (longlong)param_1;
      param_1[0x4ab] = (longlong)param_1;
      *(undefined2 *)(param_1 + 0x4ad) = 0;
      *(undefined1 (*) [16])(param_1 + 0x1e6) = auVar33._0_16_;
      param_1[0x1e8] = 0;
      param_1[0x4b8] = 0;
      *(undefined2 *)(param_1 + 0x4b9) = 0x300;
      FUN_140a1c140();
      func_0x00014048d410(param_1);
      uVar8 = (undefined1)((ushort)param_4 >> 8);
      if (*(int *)((longlong)param_1 + 0x414c) != 0) {
        pauVar17 = (undefined1 (*) [16])(param_1 + 0x54f);
        plVar18 = param_1 + 0x4c4;
        uVar22 = 0;
        do {
          *(undefined1 (*) [16])((longlong)*pauVar17 + 0xc) = auVar33._0_16_;
          *pauVar17 = auVar33._0_16_;
          *(undefined1 (*) [16])((longlong)pauVar17[1] + 0xc) = auVar34._0_16_;
          FUN_1409c4330(plVar18);
          uVar8 = (undefined1)((ushort)param_4 >> 8);
          plVar18[0x16] = (longlong)param_1;
          plVar18[0xc6] = (longlong)param_1;
          uVar22 = uVar22 + 1;
          plVar18 = plVar18 + 0x17;
          pauVar17 = pauVar17 + 3;
        } while (uVar22 < *(uint *)((longlong)param_1 + 0x414c));
      }
      if (param_1[0x30] != 0) {
        param_1[0x30] = 0;
        FUN_144ea5480(plVar1);
      }
      *(undefined1 (*) [32])(param_1 + 0x1d0) = ZEXT1232(ZEXT812(0));
      *(undefined1 (*) [32])(param_1 + 0x1cc) = ZEXT1232(ZEXT812(0));
      lVar10 = param_1[0x2b];
      lVar12 = *param_1;
      lVar16 = *(longlong *)(lVar10 + 0x60);
      bVar6 = FUN_140905090(lVar12);
      bVar19 = false;
      iVar20 = 0;
      if ((lVar16 != 0 & bVar6) != 0) {
        lVar12 = func_0x000145238e40(*(undefined4 *)(lVar12 + 0x9c));
        if (lVar12 != 0) {
          iVar20 = *(int *)(lVar12 + 0x14);
        }
        bVar19 = iVar20 == 6 || iVar20 == 1;
      }
      if (lVar10 == 0) {
        lVar16 = 0;
      }
      if (lVar10 != 0 && !bVar19) {
        lVar16 = *(longlong *)(lVar10 + 0x58);
      }
      lVar10 = param_1[0x2d];
      if (param_1[0x2d] != lVar16) {
        FUN_144ea5550(plVar14);
        param_1[0x2d] = lVar16;
        lVar10 = lVar16;
      }
      FUN_1408bc310(param_1,lVar10,0,CONCAT11(uVar8,1));
      if (param_1[0x6b] != 0) {
        param_1[0x6b] = 0;
        FUN_144ea5480(plVar2);
      }
      plVar14 = plStack_2a0;
      if (param_1[0x65] != 0) {
        param_1[0x65] = 0;
        FUN_144ea5480(plStack_280);
      }
      if (param_1[0x6e] != 0) {
        param_1[0x6e] = 0;
        FUN_144ea5480(plVar14);
      }
      if (param_1[0x68] != 0) {
        param_1[0x68] = 0;
        FUN_144ea5480(plStack_288);
      }
      auVar24._0_12_ = ZEXT812(0);
      auVar24._12_4_ = 0;
      *(undefined1 (*) [32])(param_1 + 0x1e0) = ZEXT1632(auVar24);
      *(undefined1 (*) [32])(param_1 + 0x1dc) = ZEXT1632(auVar24);
      *(undefined1 (*) [32])(param_1 + 0x1d8) = ZEXT1632(auVar24);
      *(undefined1 (*) [32])(param_1 + 0x1d4) = ZEXT1632(auVar24);
      if ((longlong)(int)param_1[0x5fe] != 0) {
        lVar10 = (longlong)(int)param_1[0x5fe] * 0xb8;
        plVar14 = param_1 + 0x574;
        do {
          FUN_1409c4330(plVar14);
          plVar14 = plVar14 + 0x17;
          lVar10 = lVar10 + -0xb8;
        } while (lVar10 != 0);
      }
      afStack_278[0] = 0.0;
      cVar7 = FUN_140140130(uVar9,0x19d1c355d);
      lVar10 = lStack_298;
      fVar15 = afStack_278[0];
      if (cVar7 == '\0') {
        _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
        bVar19 = 0x3ffe < ((uint)_DAT_146df5b88 & 0x7fff);
        fVar15 = (float)(bVar19 + 2 + (uint)bVar19);
      }
      afStack_278[0] = 0.0;
      FUN_1404b8950(uVar9,0x28178869,afStack_278,0x8000);
      afStack_278[0] = 0.0;
      FUN_1404b8950(uVar9,0xcd8e018a,afStack_278,0x8000);
      afStack_278[0] = 0.0;
      FUN_1404b8950(uVar9,0xeba41b8c,afStack_278,0x8000);
      afStack_278[0] = 4.2039e-45;
      FUN_1404b8950(uVar9,0xa29600f1,afStack_278,0x8000);
      afStack_278[0] = (float)((uint)afStack_278[0] & 0xffffff00);
      FUN_14017c8d0(uVar9,0xd74d43bf,afStack_278,0x8000);
      afStack_278[0] = (float)((uint)afStack_278[0] & 0xffffff00);
      FUN_14017c8d0(uVar9,0x7e4a226,afStack_278,0x8000);
      afStack_278[0] = (float)((uint)afStack_278[0] & 0xffffff00);
      FUN_14017c8d0(uVar9,0x81c45e18,afStack_278,0x8000);
      afStack_278[0] = fVar15;
      FUN_1404b8950(uVar9,0x8edd0e83,afStack_278,0x8000);
      afStack_278[0] = fVar15;
      FUN_1404b8950(uVar9,0xad432bc2,afStack_278,0x8000);
      afStack_278[0] = fVar15;
      FUN_1404b8950(uVar9,0x648cde51,afStack_278,0x8000);
      *(undefined4 *)(param_1 + 0x851) = _DAT_14abbef40;
      *(undefined4 *)((longlong)param_1 + 0x428c) = 0;
      func_0x0001402bbf70(param_1);
      func_0x000144ea3f00(param_1 + 0x825,*(undefined2 *)(lVar10 + 0xf8));
      lVar10 = (param_1[0x825] & 0xffffffffU) * 0x5cdcfaa7 + ((ulonglong)param_1[0x825] >> 0x20);
      param_1[0x825] = lVar10;
      afStack_278[0] = (float)((uint)lVar10 & 0x7fffff) * _DAT_14615af54;
      FUN_14017c310(uVar9,0xb1cd0ad6,afStack_278,0x8000);
      uVar8 = 0x80;
      afStack_278[0] = (float)CONCAT31(afStack_278[0]._1_3_,1);
      FUN_140264ac0(uVar9,0x9e87ae36,afStack_278,0x8000);
      fVar5 = _DAT_14616c550;
      fVar15 = _DAT_145fc6ed8;
      auVar31._4_4_ = _DAT_14615af0c;
      auVar31._0_4_ = _DAT_14615af0c;
      auVar31._8_4_ = _DAT_14615af0c;
      auVar31._12_4_ = _DAT_14615af0c;
      uVar13 = (param_1[0x825] & 0xffffffffU) * 0x5cdcfaa7 + ((ulonglong)param_1[0x825] >> 0x20);
      uVar22 = (uVar13 & 0xffffffff) * 0x5cdcfaa7 + (uVar13 >> 0x20);
      uVar22 = (uVar22 & 0xffffffff) * 0x5cdcfaa7 + (uVar22 >> 0x20);
      uVar22 = (uVar22 & 0xffffffff) * 0x5cdcfaa7 + (uVar22 >> 0x20);
      auVar25._0_8_ = uVar13 & 0xffffffff;
      auVar25._8_8_ = 0;
      auVar23 = vpand_avx(auVar25,auVar31);
      auVar23 = vcvtdq2ps_avx(auVar23);
      fVar28 = _DAT_14616c550 * auVar23._4_4_ + _DAT_145fc6ed8;
      fVar29 = _DAT_14616c550 * auVar23._8_4_ + _DAT_145fc6ed8;
      fVar30 = _DAT_14616c550 * auVar23._12_4_ + _DAT_145fc6ed8;
      uVar13 = (uVar22 & 0xffffffff) * 0x5cdcfaa7 + (uVar22 >> 0x20);
      *(float *)(param_1 + 0x826) = _DAT_14616c550 * auVar23._0_4_ + _DAT_145fc6ed8;
      *(float *)((longlong)param_1 + 0x4134) = fVar28;
      *(float *)(param_1 + 0x827) = fVar29;
      *(float *)((longlong)param_1 + 0x413c) = fVar30;
      fVar28 = _DAT_14616c550;
      uVar22 = (uVar13 & 0xffffffff) * 0x5cdcfaa7 + (uVar13 >> 0x20);
      auVar26._0_8_ = uVar13 & 0xffffffff;
      auVar26._8_8_ = 0;
      auVar23 = vpand_avx(auVar26,auVar31);
      auVar23 = vcvtdq2ps_avx(auVar23);
      lVar12 = (uVar22 & 0xffffffff) * 0x5cdcfaa7 + (uVar22 >> 0x20);
      auVar27._0_4_ = fVar5 * auVar23._0_4_ + fVar15;
      auVar27._4_4_ = fVar5 * auVar23._4_4_ + fVar15;
      auVar27._8_4_ = fVar5 * auVar23._8_4_ + fVar15;
      auVar27._12_4_ = fVar5 * auVar23._12_4_ + fVar15;
      lVar10 = vmovlps_avx(auVar27);
      param_1[0x828] = lVar10;
      auStack_196._0_16_ = ZEXT816(0);
      *(float *)(param_1 + 0x829) = (float)((uint)lVar12 & 0x7fffff) * fVar28 + _DAT_145fc6ed8;
      param_1[0x825] = lVar12;
      param_1[0x852] = 0;
      *(undefined8 *)((longlong)param_1 + 0x429c) = 0;
      afStack_278[0] = (float)CONCAT13((char)((uint)afStack_278[0] >> 0x18),0x10000);
      auStack_270 = ZEXT1632(auStack_196._0_16_);
      uStack_230 = 0;
      auStack_228 = ZEXT1632(auStack_196._0_16_);
      uStack_208 = 0;
      Stack_1a0 = auStack_196._0_10_;
      auStack_1c0 = ZEXT1632(auStack_196._0_16_);
      auStack_196._16_6_ = 0;
      Stack_180 = 0;
      auStack_250 = auStack_270;
      auStack_200 = auStack_228;
      auStack_1e0 = auStack_228;
      func_0x000144e6d420(afStack_278,&uStack_2a1);
      lVar10 = param_1[0x851];
      func_0x000145f40560(auStack_170,afStack_278,0x108);
      FUN_1404251e0(plStack_290,auStack_170,(int)lVar10,CONCAT11(uVar8,1));
      *(undefined1 *)((longlong)param_1 + 0xfa4) = 0;
      *(undefined1 *)((longlong)param_1 + 0x112c) = 0;
      *(undefined1 *)((longlong)param_1 + 0x12b4) = 0;
      *(undefined1 *)((longlong)param_1 + 0x143c) = 0;
      lVar10 = *param_1;
      uVar8 = FUN_144ead9e0(*(undefined4 *)(*(longlong *)(lVar10 + 0x20) + 0x264));
      *(undefined1 *)((longlong)param_1 + 0x15c4) = uVar8;
      *(undefined1 *)((longlong)param_1 + 0x174c) = uVar8;
      *(undefined1 *)((longlong)param_1 + 0x18d4) = 0;
      *(undefined1 *)((longlong)param_1 + 0x214c) = 0;
      *(undefined1 *)((longlong)param_1 + 0x22d4) = 0;
      FUN_140b71210(param_1 + 0x863,lVar10);
      FUN_1451886f0(param_1);
      *(undefined1 *)((longlong)param_1 + 0x4329) = 1;
    }
  }
  return;
}

