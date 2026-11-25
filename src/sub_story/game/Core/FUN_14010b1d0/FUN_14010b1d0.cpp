// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010b1d0  size: 2075 bytes
// Name:    FUN_14010b1d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1450caf90, FUN_14010c6d0, FUN_14010bb10, FUN_1450cb0e0, FUN_14010c9a0, FUN_145647140, FUN_144fb2a50, FUN_14010ba10, FUN_14010bf10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Possible PIC construction at 0x00014010ba2f: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00014010ba34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14010b1d0(undefined8 *param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  short sVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  longlong lVar19;
  char cVar20;
  ushort uVar21;
  int iVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined4 uVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong *plVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 *puVar35;
  byte bVar36;
  ulonglong unaff_R15;
  bool bVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar42 [32];
  undefined8 auStack_250 [4];
  longlong alStack_230 [3];
  int aiStack_218 [4];
  undefined8 uStack_208;
  undefined4 uStack_200;
  undefined8 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 uStack_1b0;
  undefined8 uStack_1a8;
  undefined4 uStack_1a0;
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  undefined4 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined8 uStack_e8;
  undefined4 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 *puStack_c8;
  undefined4 uStack_c0;
  undefined1 *puStack_b8;
  undefined4 uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  uint uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 *puStack_70;
  undefined4 uStack_68;
  uint uStack_64;
  undefined8 *puStack_60;
  
  uVar32 = _DAT_14849bcb0;
  alStack_230[0] = 0x14010b20a;
  iVar22 = func_0x000144fc4fe0(2);
  alStack_230[0] = 0x14010b219;
  uVar21 = func_0x00014010b9f0();
  if ((((int)uVar32 < 0x10 && iVar22 < (int)(uint)uVar21) & param_2) == 0) {
    auVar40._4_4_ = _DAT_145fc6ed8;
    auVar40._0_4_ = _DAT_145fc6ed8;
    auVar40._8_4_ = _DAT_145fc6ed8;
    auVar40._12_4_ = _DAT_145fc6ed8;
    bVar37 = (DAT_14849c035 & DAT_14849c034) == 0;
    uVar26 = 0xffffffff;
    uVar18 = uVar26;
    if (!bVar37) {
      uVar26 = uRam000000014849be3c;
      uVar18 = uRam000000014849be40;
    }
    auVar38._0_4_ = (fRam000000014849be4c - _DAT_14849c01c) / _DAT_14849c01c;
    auVar38._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar8 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar38);
    auVar38 = vcmpss_avx(auVar38,ZEXT816(0) << 0x20,1);
    auVar40 = vblendvps_avx(ZEXT416((uint)(_DAT_145fc6ed8 - auVar8._0_4_)),auVar40,auVar38);
    auVar40 = vminss_avx(auVar40,ZEXT416(uRam000000014849be44));
    uVar23 = auVar40._0_4_;
    if (bVar37) {
      uVar23 = 0;
    }
    lVar31 = ((ulonglong)uRam00000001484a1020 ^ 1) * 0x10;
    *(undefined4 *)(lVar31 + 0x14849bcf0) = uVar26;
    *(undefined4 *)(lVar31 + 0x14849bcf4) = uVar18;
    *(undefined4 *)(lVar31 + 0x14849bcf8) = uVar23;
    *(undefined4 *)(lVar31 + 0x14849bcfc) = 0;
    if (cRam000000014849bcd0 == '\0') {
      uRam000000014849be30 = 0;
      cRam000000014849bcd0 = 0;
      return;
    }
    return;
  }
  uVar29 = (uint)DAT_14849c02c;
  aiStack_218[2] = 0x4010b263;
  aiStack_218[3] = 1;
  lVar31 = FUN_145647140();
  lVar31 = -lVar31;
  uVar28 = (ulonglong)(uVar29 + 1);
  *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b279;
  cVar20 = func_0x000144df8950(0xffffffff);
  uStack_90 = uVar28;
  if (cVar20 == '\0') {
    auVar39._8_8_ = _DAT_145f437c0;
    auVar39._0_8_ = _DAT_145f437c0;
    auVar39._16_8_ = _DAT_145f437c0;
    auVar39._24_8_ = _DAT_145f437c0;
    auVar10 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
    auVar9 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
    uVar24 = uVar28 + 0x3fffffffffffffff & 0x3fffffffffffffff;
    lVar25 = 0;
    auVar41._8_8_ = uVar24;
    auVar41._0_8_ = uVar24;
    auVar41._16_8_ = uVar24;
    auVar41._24_8_ = uVar24;
    auVar11 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    auVar41 = vpor_avx2(auVar41,auVar39);
    do {
      auVar42._8_8_ = lVar25;
      auVar42._0_8_ = lVar25;
      auVar42._16_8_ = lVar25;
      auVar42._24_8_ = lVar25;
      auVar12 = vpor_avx2(auVar42,auVar11);
      auVar42 = vpor_avx2(auVar42,auVar10);
      auVar42 = vpcmpgtq_avx2(auVar42 ^ auVar39,auVar41);
      auVar12 = vpcmpgtq_avx2(auVar12 ^ auVar39,auVar41);
      auVar42 = vpackssdw_avx2(auVar12,auVar42);
      auVar40 = vpackssdw_avx(SUB3216(auVar42 ^ auVar9,0),SUB3216(auVar42 ^ auVar9,0x10));
      auVar40 = vpshufd_avx(auVar40,0xd8);
      auVar42 = vpmovzxwd_avx2(auVar40);
      auVar42 = vpslld_avx2(auVar42,0x1f);
      auVar42 = vpmaskmovd_avx2(auVar42,auVar9);
      *(undefined1 (*) [32])((longlong)&uStack_208 + lVar25 * 4 + lVar31) = auVar42;
      lVar25 = lVar25 + 8;
    } while ((uVar24 + 8) - (ulonglong)((uint)(uVar28 + 0x3fffffffffffffff) & 7) != lVar25);
  }
  else {
    *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b99f;
    func_0x000144ec66f0((longlong)&uStack_208 + lVar31,uVar28);
  }
  uStack_208 = *param_1;
  uStack_64 = uVar32;
  uStack_200 = 0xbf800000;
  uStack_1f8 = param_1[1];
  uStack_1f0 = 0xbf800000;
  uStack_1e8 = param_1[2];
  uStack_1e0 = 0xbf800000;
  uStack_1d8 = param_1[3];
  uStack_1d0 = 0xbf800000;
  uStack_1c8 = param_1[4];
  uStack_1c0 = 0xbf800000;
  uStack_1b8 = param_1[5];
  uStack_1b0 = 0xbf800000;
  uStack_1a8 = param_1[6];
  uStack_1a0 = 0xbf800000;
  uStack_198 = param_1[7];
  uStack_190 = 0xbf800000;
  uStack_188 = param_1[8];
  uStack_180 = 0xbf800000;
  uStack_178 = param_1[9];
  uStack_170 = 0xbf800000;
  uStack_168 = param_1[10];
  uStack_160 = 0xbf800000;
  uStack_158 = param_1[0xb];
  uStack_150 = 0xbf800000;
  uStack_148 = param_1[0xc];
  uStack_140 = 0xbf800000;
  uStack_138 = param_1[0xd];
  uStack_130 = 0xbf800000;
  uStack_128 = param_1[0xe];
  uStack_120 = 0xbf800000;
  uStack_118 = param_1[0xf];
  uStack_110 = 0xbf800000;
  uStack_108 = param_1[0x10];
  uStack_100 = 0xbf800000;
  uStack_f8 = param_1[0x11];
  uStack_f0 = 0xbf800000;
  uStack_e8 = param_1[0x12];
  uStack_e0 = 0xbf800000;
  uStack_d8 = param_1[0x13];
  uStack_d0 = 0xbf800000;
  puStack_70 = (undefined1 *)((longlong)&uStack_208 + lVar31);
  if (0 < (int)uVar32) {
    bVar36 = 1;
    lVar25 = 0;
    puStack_60 = param_1;
    puStack_70 = (undefined1 *)((longlong)&uStack_208 + lVar31);
    do {
      if (*(longlong *)(lVar25 * 0x180 + 0x14849be30) != 0) {
        unaff_R15 = 0;
        plVar30 = (longlong *)0x1484be478;
        do {
          if ((puStack_60[unaff_R15] != 0) &&
             (*(longlong *)(lVar25 * 0x180 + 0x14849be30) == *plVar30)) {
            *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b4ba;
            cVar20 = FUN_14010bb10();
            if (cVar20 != '\0') {
              *(int *)(puStack_70 + lVar25 * 4) = (int)unaff_R15;
            }
          }
          unaff_R15 = unaff_R15 + 1;
          plVar30 = plVar30 + 0x5e;
        } while (uVar32 != unaff_R15);
      }
      lVar25 = 1;
      bVar7 = DAT_14849c02c & bVar36;
      bVar36 = 0;
      param_1 = puStack_60;
    } while (bVar7 != 0);
  }
  uVar24 = CONCAT71((int7)(unaff_R15 >> 8),1);
  lVar25 = 0;
  uVar28 = uStack_90;
  puVar35 = puStack_70;
  uVar32 = uStack_64;
  do {
    puStack_60 = (undefined8 *)lVar25;
    *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b52a;
    iVar22 = func_0x000144fc4fe0(2);
    *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b539;
    uVar21 = func_0x00014010b9f0();
    if (((int)(uint)uVar21 <= iVar22) || (0x13 < (int)_DAT_14849bcb0)) break;
    uVar29 = *(uint *)(puVar35 + (longlong)puStack_60 * 4);
    if ((longlong)(int)uVar29 == -1) {
LAB_14010b91e:
      *(undefined4 *)(puVar35 + (longlong)puStack_60 * 4) = 0xffffffff;
      puStack_b8 = puVar35;
      uStack_b0 = (int)uVar28;
      *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b950;
      uVar29 = FUN_144fb2a50(&uStack_208,uVar32,&puStack_b8,&uStack_68);
      if (uVar29 != 0xffffffff) goto LAB_14010b5d9;
    }
    else {
      uStack_68 = 0;
      puStack_c8 = puVar35;
      uStack_c0 = (int)uVar28;
      *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b59e;
      FUN_144fb2a50(&uStack_208,uVar32,&puStack_c8,&uStack_68);
      puVar1 = puStack_60;
      uVar18 = uStack_68;
      *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b5c6;
      cVar20 = FUN_14010bf10(puVar1,&uStack_208 + (longlong)(int)uVar29 * 2,uVar18);
      if (cVar20 == '\0') goto LAB_14010b91e;
LAB_14010b5d9:
      _DAT_14849bca8 = _DAT_14849bca8 + 1;
      uStack_7c = (uint)uVar24;
      *(uint *)(puVar35 + (longlong)puStack_60 * 4) = uVar29;
      uVar32 = _DAT_14849bcb0;
      uVar28 = (ulonglong)_DAT_14849bcb0;
      _DAT_14849bcb0 = _DAT_14849bcb0 + 1;
      *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b604;
      iStack_78 = func_0x00014010ba00();
      *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b619;
      iStack_74 = func_0x000144fc4fe0(2);
      uStack_a0 = (ulonglong)uVar29;
      lVar34 = uVar28 * 0x2f0;
      lVar27 = uStack_a0 * 0x2f0;
      lVar25 = lVar34 + 0x1484be240;
      lStack_88 = lVar27 + 0x1484be240;
      *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b662;
      func_0x000145f40560(lVar25);
      lVar19 = lStack_88;
      *(undefined8 *)(lVar34 + 0x1484be328) = *(undefined8 *)(lVar27 + 0x1484be328);
      uVar5 = *(undefined8 *)(lVar27 + 0x1484be330);
      uVar6 = *(undefined8 *)(lVar27 + 0x1484be338);
      uVar13 = *(undefined8 *)(lVar27 + 0x1484be340);
      uVar14 = *(undefined8 *)(lVar27 + 0x1484be348);
      uVar15 = *(undefined8 *)(lVar27 + 0x1484be346);
      uVar16 = *(undefined8 *)(lVar27 + 0x1484be34e);
      uVar17 = *(undefined8 *)(lVar27 + 0x1484be356);
      *(undefined8 *)(lVar34 + 0x1484be33e) = *(undefined8 *)(lVar27 + 0x1484be33e);
      *(undefined8 *)(lVar34 + 0x1484be346) = uVar15;
      *(undefined8 *)(lVar34 + 0x1484be34e) = uVar16;
      *(undefined8 *)(lVar34 + 0x1484be356) = uVar17;
      *(undefined8 *)(lVar34 + 0x1484be330) = uVar5;
      *(undefined8 *)(lVar34 + 0x1484be338) = uVar6;
      *(undefined8 *)(lVar34 + 0x1484be340) = uVar13;
      *(undefined8 *)(lVar34 + 0x1484be348) = uVar14;
      uVar5 = *(undefined8 *)(lVar27 + 0x1484be368);
      uVar6 = *(undefined8 *)(lVar27 + 0x1484be370);
      uVar13 = *(undefined8 *)(lVar27 + 0x1484be378);
      uVar14 = *(undefined8 *)(lVar27 + 0x1484be380);
      uVar15 = *(undefined8 *)(lVar27 + 0x1484be388);
      uVar16 = *(undefined8 *)(lVar27 + 0x1484be390);
      uVar17 = *(undefined8 *)(lVar27 + 0x1484be398);
      *(undefined8 *)(lVar34 + 0x1484be360) = *(undefined8 *)(lVar27 + 0x1484be360);
      *(undefined8 *)(lVar34 + 0x1484be368) = uVar5;
      *(undefined8 *)(lVar34 + 0x1484be370) = uVar6;
      *(undefined8 *)(lVar34 + 0x1484be378) = uVar13;
      *(undefined8 *)(lVar34 + 0x1484be380) = uVar14;
      *(undefined8 *)(lVar34 + 0x1484be388) = uVar15;
      *(undefined8 *)(lVar34 + 0x1484be390) = uVar16;
      *(undefined8 *)(lVar34 + 0x1484be398) = uVar17;
      *(undefined8 *)(lVar34 + 0x1484be3a0) = *(undefined8 *)(lVar27 + 0x1484be3a0);
      uStack_a8 = uVar28;
      if (uVar29 == uVar32) {
        uVar5 = *(undefined8 *)(lStack_88 + 0x238);
        uVar6 = *(undefined8 *)(lStack_88 + 0x240);
        *(undefined1 (*) [16])(lVar34 + 0x1484be485) = *(undefined1 (*) [16])(lStack_88 + 0x245);
        *(undefined8 *)(lVar34 + 0x1484be478) = uVar5;
        *(undefined8 *)(lVar34 + 0x1484be480) = uVar6;
      }
      else {
        if ((ulonglong)*(uint *)(lVar34 + 0x1484be3ac) != 0) {
          lVar33 = (ulonglong)*(uint *)(lVar34 + 0x1484be3ac) << 3;
          plVar30 = (longlong *)(lVar34 + 0x1484be3b0);
          do {
            lVar4 = *plVar30;
            if (lVar4 != 0) {
              *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b727;
              FUN_1450cb0e0(lVar4,plVar30);
            }
            *plVar30 = 0;
            plVar30 = plVar30 + 1;
            lVar33 = lVar33 + -8;
          } while (lVar33 != 0);
        }
        *(undefined4 *)(lVar34 + 0x1484be3ac) = 0;
        uVar32 = *(uint *)(lVar19 + 0x16c);
        if ((ulonglong)uVar32 != 0) {
          if (*(uint *)(lVar34 + 0x1484be3a8) < uVar32) {
            *(uint *)(lVar34 + 0x1484be3a8) = uVar32;
          }
          lVar27 = lVar27 + 0x1484be3b0;
          lVar33 = 0;
          do {
            lVar4 = *(longlong *)(lVar27 + lVar33);
            *(longlong *)(lVar34 + 0x1484be3b0 + lVar33) = lVar4;
            if (lVar4 != 0) {
              lStack_98 = lVar27;
              *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b7a4;
              FUN_1450caf90(lVar4,lVar34 + 0x1484be3b0 + lVar33);
              lVar27 = lStack_98;
            }
            lVar33 = lVar33 + 8;
          } while ((ulonglong)uVar32 << 3 != lVar33);
          *(uint *)(lVar34 + 0x1484be3ac) = uVar32;
        }
        uVar5 = *(undefined8 *)(lVar19 + 0x238);
        uVar6 = *(undefined8 *)(lVar19 + 0x240);
        *(undefined1 (*) [16])(lVar34 + 0x1484be485) = *(undefined1 (*) [16])(lVar19 + 0x245);
        *(undefined8 *)(lVar34 + 0x1484be478) = uVar5;
        *(undefined8 *)(lVar34 + 0x1484be480) = uVar6;
        iVar22 = *(int *)(lVar19 + 0x2e0);
        *(int *)(lVar34 + 0x1484be520) = iVar22;
        if ((longlong)iVar22 != 0) {
          lVar27 = 0;
          do {
            puVar1 = (undefined8 *)(lVar19 + 0x260 + lVar27);
            uVar5 = puVar1[1];
            puVar2 = (undefined8 *)(lVar34 + 0x1484be4a0 + lVar27);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            lVar27 = lVar27 + 0x10;
          } while ((longlong)iVar22 * 0x10 != lVar27);
        }
      }
      uVar32 = uStack_64;
      iVar22 = iStack_78 - iStack_74;
      *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b845;
      func_0x00014055ef70(lVar25,iVar22,0xffff);
      uVar28 = uStack_a8;
      *(undefined1 *)(lVar34 + 0x1484be494) = 2;
      lVar27 = (longlong)(int)uStack_a0;
      sVar3 = *(short *)(lVar34 + 0x1484be486);
      uVar5 = *(undefined8 *)(lVar34 + 0x1484be478);
      *(undefined4 *)((ulonglong)(uint)(int)sVar3 * 0x150 + 0x1484c58f8) =
           *(undefined4 *)((ulonglong)(uint)(int)*(short *)(lVar19 + 0x246) * 0x150 + 0x1484c58f8);
      uVar6 = param_1[lVar27];
      *(int *)((longlong)aiStack_218 + lVar31) = (int)uStack_a0;
      *(longlong *)((longlong)alStack_230 + lVar31 + 0x10) = lVar25;
      *(longlong *)((longlong)alStack_230 + lVar31 + 8) = lVar25;
      *(int *)((longlong)aiStack_218 + lVar31 + 8) = (int)uVar28;
      puVar1 = puStack_60;
      *(undefined8 *)((longlong)auStack_250 + lVar31) = 0x14010b8c5;
      FUN_14010c6d0(puVar1,uVar6,(ulonglong)(uint)(int)sVar3,uVar5);
      *(byte *)(lVar19 + 0x241) = *(byte *)(lVar19 + 0x241) | 0x40;
      uVar5 = param_1[lVar27];
      *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b8e8;
      FUN_14010c9a0(uVar5,lVar34 + 0x1484be4a0);
      uVar24 = (ulonglong)uStack_7c;
      uVar28 = uStack_90;
      puVar35 = puStack_70;
    }
    lVar25 = 1;
    bVar36 = (byte)uVar24;
    uVar24 = 0;
  } while ((DAT_14849c02c & bVar36) != 0);
  *(undefined8 *)((longlong)alStack_230 + lVar31) = 0x14010b970;
  FUN_14010ba10();
  return;
}

