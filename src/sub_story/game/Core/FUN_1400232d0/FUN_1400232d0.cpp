// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400232d0  size: 4915 bytes
// Name:    FUN_1400232d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144df1bf0, FUN_144df2390, FUN_144df1c70, FUN_144e067d0, FUN_144379570, FUN_144df2420, FUN_144df1ba0, FUN_144e079f0, FUN_144dfa080, FUN_140024610, FUN_144e07920, FUN_144e08210, FUN_144df1cf0, FUN_1443794b0, FUN_144e065a0, FUN_1400247d0, FUN_144e14710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1400232d0(longlong *param_1,undefined8 param_2,undefined8 param_3,int *param_4,byte param_5
                  ,undefined8 *param_6,undefined1 param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong **pplVar13;
  float fVar14;
  float fVar24;
  float fVar25;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar26;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar63;
  float fVar72;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined8 uVar80;
  float fVar82;
  undefined8 uVar83;
  float fVar84;
  undefined1 auVar81 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [64];
  float fVar90;
  float fVar92;
  float fVar93;
  float fVar94;
  undefined1 auVar91 [64];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [64];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [64];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [64];
  float fVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar127;
  float fVar128;
  float fVar129;
  undefined1 auVar126 [64];
  byte bStack_4ea;
  undefined1 uStack_4e9;
  longlong *plStack_4e8;
  uint uStack_4e0;
  undefined4 uStack_4dc;
  longlong *plStack_4d8;
  uint uStack_4d0;
  longlong *plStack_4c8;
  int iStack_4c0;
  undefined4 uStack_4bc;
  undefined1 auStack_4b8 [20];
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  undefined1 auStack_498 [16];
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined1 *puStack_478;
  byte *pbStack_470;
  undefined1 auStack_468 [16];
  undefined1 auStack_458 [16];
  undefined1 auStack_448 [16];
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 auStack_428 [16];
  undefined1 auStack_3f8 [16];
  int iStack_3dc;
  int iStack_3d8;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 auStack_3b8 [16];
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined1 auStack_398 [16];
  undefined1 auStack_388 [16];
  undefined4 uStack_358;
  undefined1 auStack_348 [16];
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_318 [16];
  undefined1 auStack_308 [16];
  undefined1 auStack_2f8 [16];
  longlong *plStack_2e8;
  undefined8 uStack_2e0;
  longlong *plStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_2b8 [40];
  undefined1 auStack_290 [48];
  undefined1 auStack_260 [72];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 auVar117 [64];
  
  puStack_478 = &uStack_4e9;
  pbStack_470 = &bStack_4ea;
  bStack_4ea = 0;
  plStack_4c8 = (longlong *)0x0;
  plStack_4d8 = (longlong *)0x0;
  uStack_4e9 = param_7;
  iStack_4c0 = 0xffffffff;
  uStack_4d0 = 0xffffffff;
  plStack_4e8 = param_1;
  uStack_488 = param_2;
  uStack_480 = param_3;
  if (param_5 == 2) {
    iStack_4c0 = *param_4;
    plStack_4e8 = (longlong *)0x0;
    pplVar13 = &plStack_4d8;
    plStack_4c8 = param_1;
    if (iStack_4c0 == -1) {
      plStack_4c8 = plStack_4e8;
    }
    uStack_4d0 = param_4[1];
    plStack_4d8 = param_1;
    if (uStack_4d0 == 0xffffffff) {
      plStack_4d8 = plStack_4e8;
    }
    uStack_4e0 = param_4[2];
    if (uStack_4e0 != 0xffffffff) {
      plStack_4e8 = param_1;
    }
    FUN_140024610(&uStack_488,&plStack_4c8,*param_6);
    puVar9 = param_6 + 1;
  }
  else {
    if (param_5 != 1) {
      if (param_5 != 0) {
        return 0;
      }
      uStack_4e0 = *param_4;
      if (uStack_4e0 == -1) {
        plStack_4e8 = (longlong *)0x0;
      }
      FUN_140024610(&uStack_488,&plStack_4e8,*param_6);
      return bStack_4ea;
    }
    uStack_4e0 = param_4[1];
    plStack_4c8 = (longlong *)0x0;
    pplVar13 = &plStack_4c8;
    if (uStack_4e0 == 0xffffffff) {
      plStack_4e8 = plStack_4c8;
    }
    iStack_4c0 = *param_4;
    puVar9 = param_6;
    plStack_4d8 = plStack_4e8;
    uStack_4d0 = uStack_4e0;
    if (iStack_4c0 != -1) {
      plStack_4c8 = param_1;
    }
  }
  FUN_140024610(&uStack_488,pplVar13,*puVar9);
  lVar10 = FUN_144dfa080(param_3,uStack_4e0);
  if (lVar10 == 0) {
    return bStack_4ea;
  }
  auStack_3b8._0_12_ = ZEXT812(0);
  auStack_3b8._12_4_ = 0;
  uStack_3c8 = _DAT_145fc6ee0;
  uStack_3c0 = _UNK_145fc6ee8;
  uVar80 = _DAT_145fc6ee0;
  uVar83 = _UNK_145fc6ee8;
  FUN_144df1bf0(auStack_290,&plStack_4c8,&plStack_4e8);
  FUN_144df1ba0(auStack_2b8,&plStack_4c8,&plStack_4e8,1);
  FUN_144df1c70(auStack_260,&plStack_4e8,0);
  uVar1 = uStack_4e0;
  plVar11 = plStack_4e8;
  puVar9 = (undefined8 *)(ulonglong)uStack_4e0;
  uVar5 = func_0x000144e05fa0(plStack_4e8[1]);
  uStack_2c8 = uVar80;
  uStack_2c0 = uVar83;
  if (uVar1 != uVar5) {
    uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,uVar1);
    puVar9 = &uStack_218;
    (**(code **)(*plVar11 + 0x108))(plVar11,uVar6);
    uStack_2c8 = uStack_218;
    uStack_2c0 = uStack_210;
  }
  uStack_2d0 = CONCAT44(uStack_4dc,uStack_4e0);
  uStack_2e0 = CONCAT44(uStack_4bc,iStack_4c0);
  plStack_2d8 = plStack_4e8;
  plStack_2e8 = plStack_4c8;
  FUN_144df2420(&uStack_218,param_3,auStack_290,auStack_2b8,auStack_260,&plStack_2e8,&plStack_2d8,
                &uStack_2c8,1,0,0,0,0,0);
  uVar12 = CONCAT71((int7)((ulonglong)puVar9 >> 8),uStack_4e9);
  FUN_144e07920(&uStack_438);
  FUN_144e079f0(&uStack_218,param_2,&uStack_438,uVar12 & 0xffffffff);
  _auStack_4b8 = ZEXT1232(ZEXT812(0));
  FUN_144e08210(&uStack_438,&uStack_3c8,&uStack_218,auStack_4b8,1);
  uStack_3a8 = uStack_438;
  uVar80 = uStack_3a8;
  uStack_3a0 = uStack_430;
  uStack_3a8._0_4_ = (float)uStack_438;
  bVar4 = (float)uStack_3a8 <= _DAT_146159ec4;
  uStack_3a8 = uVar80;
  if (bVar4) goto LAB_140023e99;
  auVar91 = ZEXT1664(auStack_3b8);
  auStack_498._8_8_ = uStack_3c0;
  auStack_498._0_8_ = uStack_3c8;
  if ((_DAT_146159ec4 < fStack_4a4) || (_DAT_146159ec4 < fStack_4a0)) {
    bStack_4ea = 1;
    if (_DAT_146159ec4 < (float)auStack_4b8._16_4_) {
      bVar4 = true;
      goto LAB_140023712;
    }
  }
  else {
    bVar4 = fStack_49c < _DAT_14615be1c;
    bStack_4ea = bStack_4ea | _DAT_146159ec4 < (float)auStack_4b8._16_4_;
    if ((float)auStack_4b8._16_4_ <= _DAT_146159ec4) goto LAB_140023e99;
LAB_140023712:
    if (_DAT_146159ec4 < fStack_49c) {
      uStack_358 = 0;
      fVar63 = fStack_49c;
      fVar72 = _DAT_14615be1c;
      if (fStack_49c < _DAT_14615be1c) {
        FUN_1443794b0(auStack_398,&plStack_4c8,&plStack_4d8);
      }
      uVar1 = uStack_4e0;
      plVar11 = plStack_4e8;
      auVar89 = ZEXT1664(auStack_4b8._0_16_);
      uVar5 = func_0x000144e05fa0(plStack_4e8[1]);
      auVar15._8_8_ = _UNK_145fc6ee8;
      auVar15._0_8_ = _DAT_145fc6ee0;
      auVar98 = ZEXT1664(auVar15);
      auVar109 = ZEXT1264(ZEXT812(0));
      auVar111._0_12_ = ZEXT812(0);
      auVar111._12_4_ = 0;
      if (uVar1 != uVar5) {
        uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,uVar1);
        (**(code **)(*plVar11 + 0x108))(plVar11,uVar6,&uStack_438);
        auVar15._8_8_ = uStack_430;
        auVar15._0_8_ = uStack_438;
        auVar111 = auStack_428;
      }
      uVar1 = uStack_4d0;
      plVar11 = plStack_4d8;
      auVar117 = ZEXT1664(auVar111);
      auVar111 = vshufps_avx(auVar15,auVar15,0xc9);
      auVar27 = auVar89._0_16_;
      auVar97 = vshufps_avx(auVar27,auVar27,0xd2);
      auVar112 = vshufps_avx(auVar15,auVar15,0xd2);
      auVar27 = vshufps_avx(auVar27,auVar27,0xc9);
      auVar15 = vshufps_avx(auVar15,auVar15,0xff);
      fVar48 = -(auVar112._0_4_ * auVar27._0_4_) + auVar111._0_4_ * auVar97._0_4_;
      fVar60 = -(auVar112._4_4_ * auVar27._4_4_) + auVar111._4_4_ * auVar97._4_4_;
      fVar61 = -(auVar112._8_4_ * auVar27._8_4_) + auVar111._8_4_ * auVar97._8_4_;
      fVar62 = -(auVar112._12_4_ * auVar27._12_4_) + auVar111._12_4_ * auVar97._12_4_;
      auVar49._0_4_ = fVar48 + fVar48;
      auVar49._4_4_ = fVar60 + fVar60;
      auVar49._8_4_ = fVar61 + fVar61;
      auVar49._12_4_ = fVar62 + fVar62;
      auVar97 = vshufps_avx(auVar49,auVar49,0xd2);
      auVar27 = vshufps_avx(auVar49,auVar49,0xc9);
      auVar126 = ZEXT1664(CONCAT412(auVar49._12_4_ * auVar15._12_4_,
                                    CONCAT48(auVar49._8_4_ * auVar15._8_4_,
                                             CONCAT44(auVar49._4_4_ * auVar15._4_4_,
                                                      auVar49._0_4_ * auVar15._0_4_))));
      auVar121 = ZEXT1664(CONCAT412(-(auVar112._12_4_ * auVar27._12_4_) +
                                    auVar97._12_4_ * auVar111._12_4_,
                                    CONCAT48(-(auVar112._8_4_ * auVar27._8_4_) +
                                             auVar97._8_4_ * auVar111._8_4_,
                                             CONCAT44(-(auVar112._4_4_ * auVar27._4_4_) +
                                                      auVar97._4_4_ * auVar111._4_4_,
                                                      -(auVar112._0_4_ * auVar27._0_4_) +
                                                      auVar97._0_4_ * auVar111._0_4_))));
      uVar5 = func_0x000144e05fa0(plStack_4d8[1]);
      auVar49 = auVar121._0_16_;
      auVar27 = auVar117._0_16_;
      auVar112 = auVar91._0_16_;
      auVar97 = auVar98._0_16_;
      auVar15 = auVar89._0_16_;
      auVar17 = auVar126._0_16_;
      auVar111 = auVar109._0_16_;
      if (uVar1 != uVar5) {
        uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,uVar1);
        (**(code **)(*plVar11 + 0x108))(plVar11,uVar6,&uStack_438);
        auVar49 = auVar121._0_16_;
        auVar27 = auVar117._0_16_;
        auVar112 = auVar91._0_16_;
        auVar15 = auVar89._0_16_;
        auVar17 = auVar126._0_16_;
        auVar97._8_8_ = uStack_430;
        auVar97._0_8_ = uStack_438;
        auVar111 = auStack_428;
      }
      auVar91 = ZEXT1664(CONCAT412(_DAT_145fc6f10,
                                   CONCAT48(_DAT_145fc6f10,CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10)))
                        );
      auVar16._0_4_ = auVar49._0_4_ + auVar17._0_4_ + auVar27._0_4_ + auVar15._0_4_;
      auVar16._4_4_ = auVar49._4_4_ + auVar17._4_4_ + auVar27._4_4_ + auVar15._4_4_;
      auVar16._8_4_ = auVar49._8_4_ + auVar17._8_4_ + auVar27._8_4_ + auVar15._8_4_;
      auVar16._12_4_ = auVar49._12_4_ + auVar17._12_4_ + auVar27._12_4_ + auVar15._12_4_;
      auVar27._0_4_ = auVar97._0_4_ ^ _DAT_145fc6f10;
      auVar27._4_4_ = auVar97._4_4_ ^ _DAT_145fc6f10;
      auVar27._8_4_ = auVar97._8_4_ ^ _DAT_145fc6f10;
      auVar27._12_4_ = auVar97._12_4_ ^ _DAT_145fc6f10;
      auVar64 = vsubps_avx(auVar16,auVar111);
      auVar111 = vblendps_avx(auVar27,auVar97,8);
      auVar15 = vshufps_avx(auVar111,auVar111,0xc9);
      auVar111 = vshufps_avx(auVar111,auVar111,0xd2);
      auVar27 = vshufps_avx(auVar64,auVar64,0xd2);
      auVar49 = vshufps_avx(auVar64,auVar64,0xc9);
      fVar48 = -(auVar111._0_4_ * auVar49._0_4_) + auVar15._0_4_ * auVar27._0_4_;
      fVar60 = -(auVar111._4_4_ * auVar49._4_4_) + auVar15._4_4_ * auVar27._4_4_;
      fVar61 = -(auVar111._8_4_ * auVar49._8_4_) + auVar15._8_4_ * auVar27._8_4_;
      fVar62 = -(auVar111._12_4_ * auVar49._12_4_) + auVar15._12_4_ * auVar27._12_4_;
      auVar50._0_4_ = fVar48 + fVar48;
      auVar50._4_4_ = fVar60 + fVar60;
      auVar50._8_4_ = fVar61 + fVar61;
      auVar50._12_4_ = fVar62 + fVar62;
      auVar27 = vshufps_avx(auVar50,auVar50,0xd2);
      auVar49 = vshufps_avx(auVar50,auVar50,0xc9);
      auVar97 = vshufps_avx(auVar97,auVar97,0xff);
      auVar17 = vshufps_avx(auStack_498,auStack_498,0xd2);
      auVar16 = vshufps_avx(auStack_4b8._0_16_,auStack_4b8._0_16_,0xc9);
      auStack_2f8._0_4_ =
           auVar50._0_4_ * auVar97._0_4_ + auVar64._0_4_ +
           -(auVar111._0_4_ * auVar49._0_4_) + auVar27._0_4_ * auVar15._0_4_;
      auStack_2f8._4_4_ =
           auVar50._4_4_ * auVar97._4_4_ + auVar64._4_4_ +
           -(auVar111._4_4_ * auVar49._4_4_) + auVar27._4_4_ * auVar15._4_4_;
      auStack_2f8._8_4_ =
           auVar50._8_4_ * auVar97._8_4_ + auVar64._8_4_ +
           -(auVar111._8_4_ * auVar49._8_4_) + auVar27._8_4_ * auVar15._8_4_;
      auStack_2f8._12_4_ =
           auVar50._12_4_ * auVar97._12_4_ + auVar64._12_4_ +
           -(auVar111._12_4_ * auVar49._12_4_) + auVar27._12_4_ * auVar15._12_4_;
      auVar111 = vshufps_avx(auStack_498,auStack_498,0xc9);
      auVar15 = vshufps_avx(auStack_4b8._0_16_,auStack_4b8._0_16_,0xd2);
      fVar48 = -(auVar17._0_4_ * auVar16._0_4_) + auVar15._0_4_ * auVar111._0_4_;
      fVar60 = -(auVar17._4_4_ * auVar16._4_4_) + auVar15._4_4_ * auVar111._4_4_;
      fVar61 = -(auVar17._8_4_ * auVar16._8_4_) + auVar15._8_4_ * auVar111._8_4_;
      fVar62 = -(auVar17._12_4_ * auVar16._12_4_) + auVar15._12_4_ * auVar111._12_4_;
      auVar64._0_4_ = fVar48 + fVar48;
      auVar64._4_4_ = fVar60 + fVar60;
      auVar64._8_4_ = fVar61 + fVar61;
      auVar64._12_4_ = fVar62 + fVar62;
      auVar15 = vshufps_avx(auVar64,auVar64,0xd2);
      auVar97 = vshufps_avx(auVar64,auVar64,0xc9);
      auVar27 = vshufps_avx(auStack_498,auStack_498,0xff);
      auVar89 = ZEXT1664(CONCAT412(auVar64._12_4_ * auVar27._12_4_ +
                                   auStack_4b8._12_4_ + auVar112._12_4_,
                                   CONCAT48(auVar64._8_4_ * auVar27._8_4_ +
                                            auStack_4b8._8_4_ + auVar112._8_4_,
                                            CONCAT44(auVar64._4_4_ * auVar27._4_4_ +
                                                     auStack_4b8._4_4_ + auVar112._4_4_,
                                                     auVar64._0_4_ * auVar27._0_4_ +
                                                     auStack_4b8._0_4_ + auVar112._0_4_))));
      auVar98 = ZEXT1664(CONCAT412(-(auVar17._12_4_ * auVar97._12_4_) +
                                   auVar15._12_4_ * auVar111._12_4_,
                                   CONCAT48(-(auVar17._8_4_ * auVar97._8_4_) +
                                            auVar15._8_4_ * auVar111._8_4_,
                                            CONCAT44(-(auVar17._4_4_ * auVar97._4_4_) +
                                                     auVar15._4_4_ * auVar111._4_4_,
                                                     -(auVar17._0_4_ * auVar97._0_4_) +
                                                     auVar15._0_4_ * auVar111._0_4_))));
      auStack_308._8_8_ = _UNK_14614f7f8;
      auStack_308._0_8_ = _DAT_14614f7f0;
      auVar109 = ZEXT1664(auStack_308);
      FUN_1400247d0(&uStack_438,param_1 + 2,param_4,param_6,auStack_308,auStack_2f8);
      iVar8 = iStack_3d8;
      plVar11 = (longlong *)0x0;
      if (iStack_3d8 != -1) {
        plVar11 = param_1;
      }
      iVar7 = func_0x000144e05fa0(plVar11[1]);
      auVar15 = auVar98._0_16_;
      auVar111 = auVar89._0_16_;
      auVar117 = ZEXT1264(ZEXT812(0));
      auVar112._0_12_ = ZEXT812(0);
      auVar112._12_4_ = 0;
      if (iVar8 != iVar7) {
        uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,iVar8);
        (**(code **)(*plVar11 + 0x110))(plVar11,uVar6,auStack_468);
        auVar15 = auVar98._0_16_;
        auVar111 = auVar89._0_16_;
        auVar112 = auStack_458;
      }
      iVar8 = iStack_3dc;
      auVar121 = ZEXT1664(auVar112);
      auVar98 = ZEXT1664(CONCAT412(auVar111._12_4_ + auVar15._12_4_,
                                   CONCAT48(auVar111._8_4_ + auVar15._8_4_,
                                            CONCAT44(auVar111._4_4_ + auVar15._4_4_,
                                                     auVar111._0_4_ + auVar15._0_4_))));
      auVar89 = ZEXT1664(auStack_3f8);
      plVar11 = (longlong *)0x0;
      if (iStack_3dc != -1) {
        plVar11 = param_1;
      }
      iVar7 = func_0x000144e05fa0(plVar11[1]);
      auVar15 = auVar89._0_16_;
      auVar97 = auVar121._0_16_;
      auVar111 = auVar117._0_16_;
      if (iVar8 != iVar7) {
        uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,iVar8);
        (**(code **)(*plVar11 + 0x108))(plVar11,uVar6,auStack_468);
        auVar15 = auVar89._0_16_;
        auVar97 = auVar121._0_16_;
        auVar111 = auStack_458;
      }
      fVar48 = auVar15._0_4_ + auVar97._0_4_;
      fVar60 = auVar15._4_4_ + auVar97._4_4_;
      fVar61 = auVar15._8_4_ + auVar97._8_4_;
      fVar62 = auVar15._12_4_ + auVar97._12_4_;
      auVar15 = vsubps_avx(auVar98._0_16_,auVar111);
      auVar123._0_12_ = ZEXT812(0);
      auVar123._12_4_ = 0;
      auVar121 = ZEXT1664(auVar123);
      auVar89 = ZEXT1664(CONCAT412(_DAT_145fc6f08,
                                   CONCAT48(_DAT_145fc6f08,CONCAT44(_DAT_145fc6f08,_DAT_145fc6f08)))
                        );
      auVar113._4_4_ = _DAT_146159bfc;
      auVar113._0_4_ = _DAT_146159bfc;
      auVar113._8_4_ = _DAT_146159bfc;
      auVar113._12_4_ = _DAT_146159bfc;
      auVar117 = ZEXT1664(auVar113);
      auVar17._0_4_ = fVar48 * fVar48;
      auVar17._4_4_ = fVar60 * fVar60;
      auVar17._8_4_ = fVar61 * fVar61;
      auVar17._12_4_ = fVar62 * fVar62;
      fVar48 = auVar15._0_4_;
      auVar38._0_4_ = fVar48 * fVar48;
      fVar62 = auVar15._4_4_;
      auVar38._4_4_ = fVar62 * fVar62;
      fVar14 = auVar15._8_4_;
      auVar38._8_4_ = fVar14 * fVar14;
      fVar26 = auVar15._12_4_;
      auVar38._12_4_ = fVar26 * fVar26;
      auVar15 = vblendps_avx(auVar17,auVar123,8);
      auVar97 = vblendps_avx(auVar38,auVar123,8);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar97 = vhaddps_avx(auVar97,auVar97);
      auVar112 = vhaddps_avx(auVar15,auVar15);
      auVar27 = vhaddps_avx(auVar97,auVar97);
      auVar15 = vrsqrtps_avx(auVar112);
      auVar97 = vrsqrtps_avx(auVar27);
      fVar60 = auVar15._0_4_;
      fVar82 = auVar15._4_4_;
      fVar24 = auVar15._8_4_;
      fVar122 = auVar15._12_4_;
      fVar61 = auVar97._0_4_;
      fVar84 = auVar97._4_4_;
      fVar25 = auVar97._8_4_;
      fVar90 = auVar97._12_4_;
      auVar15 = vcmpps_avx(auVar113,auVar112,2);
      auVar97 = vcmpps_avx(auVar112,auVar27,1);
      auVar28._0_4_ =
           (float)(auVar15._0_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar60 * fVar60 * auVar112._0_4_ - _DAT_145fc6f08) *
                          fVar60 + fVar60) * auVar112._0_4_)) *
           ((_DAT_145fc6f08 * fVar61 * fVar61 * auVar27._0_4_ - _DAT_145fc6f08) * fVar61 + fVar61) *
           fVar48 + auVar111._0_4_;
      auVar28._4_4_ =
           (float)(auVar15._4_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar82 * fVar82 * auVar112._4_4_ - _DAT_145fc6f08) *
                          fVar82 + fVar82) * auVar112._4_4_)) *
           ((_DAT_145fc6f08 * fVar84 * fVar84 * auVar27._4_4_ - _DAT_145fc6f08) * fVar84 + fVar84) *
           fVar62 + auVar111._4_4_;
      auVar28._8_4_ =
           (float)(auVar15._8_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar24 * fVar24 * auVar112._8_4_ - _DAT_145fc6f08) *
                          fVar24 + fVar24) * auVar112._8_4_)) *
           ((_DAT_145fc6f08 * fVar25 * fVar25 * auVar27._8_4_ - _DAT_145fc6f08) * fVar25 + fVar25) *
           fVar14 + auVar111._8_4_;
      auVar28._12_4_ =
           (float)(auVar15._12_4_ &
                  (uint)(((_DAT_145fc6f08 * fVar122 * fVar122 * auVar112._12_4_ - _DAT_145fc6f08) *
                          fVar122 + fVar122) * auVar112._12_4_)) *
           ((_DAT_145fc6f08 * fVar90 * fVar90 * auVar27._12_4_ - _DAT_145fc6f08) * fVar90 + fVar90)
           * fVar26 + auVar111._12_4_;
      auStack_468 = vblendvps_avx(auVar98._0_16_,auVar28,auVar97);
      FUN_144e14710(param_1 + 2,&uStack_438,1,1,auStack_468);
      uVar1 = uStack_4e0;
      plVar11 = plStack_4e8;
      if (fVar72 <= fVar63) {
        auVar126 = ZEXT1664(auStack_4b8._0_16_);
        uVar5 = func_0x000144e05fa0(plStack_4e8[1]);
        auVar97 = auVar89._0_16_;
        auVar49 = auVar126._0_16_;
        auVar27 = auVar109._0_16_;
        auStack_448 = auVar91._0_16_;
        auVar112 = auVar98._0_16_;
        auVar99._8_8_ = _UNK_145fc6ee8;
        auVar99._0_8_ = _DAT_145fc6ee0;
        auVar117 = ZEXT1664(auVar99);
        auVar111 = auVar99;
        auVar15 = auVar121._0_16_;
        if (uVar1 != uVar5) {
          uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,uVar1);
          (**(code **)(*plVar11 + 0x108))(plVar11,uVar6,auStack_468);
          auVar99 = auVar117._0_16_;
          auVar97 = auVar89._0_16_;
          auVar49 = auVar126._0_16_;
          auVar27 = auVar109._0_16_;
          auStack_448 = auVar91._0_16_;
          auVar112 = auVar98._0_16_;
          auVar111 = auStack_468;
          auVar15 = auStack_458;
        }
        auVar50 = vsubps_avx(auVar112,auVar15);
        auVar39._0_4_ = auVar111._0_4_ ^ auStack_448._0_4_;
        auVar39._4_4_ = auVar111._4_4_ ^ auStack_448._4_4_;
        auVar39._8_4_ = auVar111._8_4_ ^ auStack_448._8_4_;
        auVar39._12_4_ = auVar111._12_4_ ^ auStack_448._12_4_;
        auVar15 = vblendps_avx(auVar39,auVar111,8);
        auVar112 = vshufps_avx(auVar111,auVar111,0xff);
        auVar17 = vshufps_avx(auVar15,auVar15,0xc9);
        auVar15 = vshufps_avx(auVar15,auVar15,0xd2);
        auVar111 = vshufps_avx(auVar50,auVar50,0xd2);
        auVar16 = vshufps_avx(auVar50,auVar50,0xc9);
        fVar63 = -(auVar15._0_4_ * auVar16._0_4_) + auVar17._0_4_ * auVar111._0_4_;
        fVar72 = -(auVar15._4_4_ * auVar16._4_4_) + auVar17._4_4_ * auVar111._4_4_;
        fVar48 = -(auVar15._8_4_ * auVar16._8_4_) + auVar17._8_4_ * auVar111._8_4_;
        fVar60 = -(auVar15._12_4_ * auVar16._12_4_) + auVar17._12_4_ * auVar111._12_4_;
        auVar65._0_4_ = fVar63 + fVar63;
        auVar65._4_4_ = fVar72 + fVar72;
        auVar65._8_4_ = fVar48 + fVar48;
        auVar65._12_4_ = fVar60 + fVar60;
        auVar16 = vshufps_avx(auVar65,auVar65,0xd2);
        auVar64 = vshufps_avx(auVar65,auVar65,0xc9);
        auVar28 = ZEXT816(0) << 0x20;
        fVar63 = auVar49._0_4_;
        auVar40._0_4_ = fVar63 * fVar63;
        fVar48 = auVar49._4_4_;
        auVar40._4_4_ = fVar48 * fVar48;
        fVar61 = auVar49._8_4_;
        auVar40._8_4_ = fVar61 * fVar61;
        fVar82 = auVar49._12_4_;
        auVar40._12_4_ = fVar82 * fVar82;
        auVar111 = vblendps_avx(auVar40,auVar28,8);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        fVar14 = auVar65._0_4_ * auVar112._0_4_ + auVar50._0_4_ +
                 -(auVar15._0_4_ * auVar64._0_4_) + auVar16._0_4_ * auVar17._0_4_;
        fVar24 = auVar65._4_4_ * auVar112._4_4_ + auVar50._4_4_ +
                 -(auVar15._4_4_ * auVar64._4_4_) + auVar16._4_4_ * auVar17._4_4_;
        fVar25 = auVar65._8_4_ * auVar112._8_4_ + auVar50._8_4_ +
                 -(auVar15._8_4_ * auVar64._8_4_) + auVar16._8_4_ * auVar17._8_4_;
        fVar26 = auVar65._12_4_ * auVar112._12_4_ + auVar50._12_4_ +
                 -(auVar15._12_4_ * auVar64._12_4_) + auVar16._12_4_ * auVar17._12_4_;
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar15 = vrsqrtps_avx(auVar111);
        fVar72 = auVar15._0_4_;
        fVar60 = auVar15._4_4_;
        fVar62 = auVar15._8_4_;
        fVar84 = auVar15._12_4_;
        fVar122 = auVar97._0_4_;
        fVar90 = auVar97._4_4_;
        fVar92 = auVar97._8_4_;
        fVar93 = auVar97._12_4_;
        auVar73._0_4_ =
             fVar63 * ((fVar122 * fVar72 * fVar72 * auVar111._0_4_ - fVar122) * fVar72 + fVar72);
        auVar73._4_4_ =
             fVar48 * ((fVar90 * fVar60 * fVar60 * auVar111._4_4_ - fVar90) * fVar60 + fVar60);
        auVar73._8_4_ =
             fVar61 * ((fVar92 * fVar62 * fVar62 * auVar111._8_4_ - fVar92) * fVar62 + fVar62);
        auVar73._12_4_ =
             fVar82 * ((fVar93 * fVar84 * fVar84 * auVar111._12_4_ - fVar93) * fVar84 + fVar84);
        auVar41._0_4_ = fVar14 * fVar14;
        auVar41._4_4_ = fVar24 * fVar24;
        auVar41._8_4_ = fVar25 * fVar25;
        auVar41._12_4_ = fVar26 * fVar26;
        auVar111 = vblendps_avx(auVar41,auVar28,8);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar15 = vrsqrtps_avx(auVar111);
        fVar72 = auVar15._0_4_;
        fVar60 = auVar15._4_4_;
        fVar62 = auVar15._8_4_;
        fVar84 = auVar15._12_4_;
        auVar114._0_4_ =
             ((fVar122 * fVar72 * fVar72 * auVar111._0_4_ - fVar122) * fVar72 + fVar72) * fVar14;
        auVar114._4_4_ =
             ((fVar90 * fVar60 * fVar60 * auVar111._4_4_ - fVar90) * fVar60 + fVar60) * fVar24;
        auVar114._8_4_ =
             ((fVar92 * fVar62 * fVar62 * auVar111._8_4_ - fVar92) * fVar62 + fVar62) * fVar25;
        auVar114._12_4_ =
             ((fVar93 * fVar84 * fVar84 * auVar111._12_4_ - fVar93) * fVar84 + fVar84) * fVar26;
        auVar18._0_4_ = auVar114._0_4_ * auVar73._0_4_;
        auVar18._4_4_ = auVar114._4_4_ * auVar73._4_4_;
        auVar18._8_4_ = auVar114._8_4_ * auVar73._8_4_;
        auVar18._12_4_ = auVar114._12_4_ * auVar73._12_4_;
        auVar111 = vblendps_avx(auVar18,auVar28,8);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        fVar72 = auVar111._0_4_;
        fVar60 = auVar111._4_4_;
        fVar62 = auVar111._8_4_;
        fVar84 = auVar111._12_4_;
        auVar51._0_4_ = (uint)(fVar72 + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar51._4_4_ = (uint)(fVar60 + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar51._8_4_ = (uint)(fVar62 + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar51._12_4_ = (uint)(fVar84 + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar42._4_4_ = _DAT_14615a034;
        auVar42._0_4_ = _DAT_14615a034;
        auVar42._8_4_ = _DAT_14615a034;
        auVar42._12_4_ = _DAT_14615a034;
        auVar111 = vcmpps_avx(auVar51,auVar42,5);
        auVar54 = auVar99;
        if ((((SUB161(auVar111 >> 0x1f,0) & 1) != 0 || (SUB161(auVar111 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar111 >> 0x5f,0) & 1) != 0) || auVar111[0xf] < '\0') {
          auVar110._0_4_ = (uint)fVar63 & _DAT_145fc6f4c;
          auVar110._4_4_ = (uint)fVar48 & _DAT_145fc6f4c;
          auVar110._8_4_ = (uint)fVar61 & _DAT_145fc6f4c;
          auVar110._12_4_ = (uint)fVar82 & _DAT_145fc6f4c;
          auVar118._4_4_ = auVar110._0_4_;
          auVar118._0_4_ = auVar110._0_4_;
          auVar118._8_4_ = auVar110._0_4_;
          auVar118._12_4_ = auVar110._0_4_;
          auVar97 = vshufps_avx(auVar110,auVar110,0x55);
          auVar111 = vshufps_avx(auVar110,auVar110,0xaa);
          auVar15 = vcmpps_avx(auVar118,auVar111,1);
          auVar111 = vcmpps_avx(auVar97,auVar111,1);
          auVar97 = vcmpps_avx(auVar118,auVar97,1);
          auVar111 = vblendvps_avx(auVar27,_DAT_146159bc0,auVar111);
          auVar15 = vblendvps_avx(auVar27,ZEXT416((uint)_DAT_145fc6ed8),auVar15);
          auVar52._0_4_ = (uint)(fVar72 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
          auVar52._4_4_ = (uint)(fVar60 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
          auVar52._8_4_ = (uint)(fVar62 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
          auVar52._12_4_ = (uint)(fVar84 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
          auVar111 = vblendvps_avx(auVar111,auVar15,auVar97);
          auVar15 = vcmpps_avx(auVar52,auVar42,1);
          auVar111 = vblendvps_avx(auVar114,auVar111,auVar15);
          auVar15 = vshufps_avx(auVar73,auVar73,0xc9);
          auVar97 = vshufps_avx(auVar73,auVar73,0xd2);
          auVar112 = vshufps_avx(auVar111,auVar111,0xd2);
          auVar111 = vshufps_avx(auVar111,auVar111,0xc9);
          auVar53._0_4_ = -(auVar97._0_4_ * auVar111._0_4_) + auVar112._0_4_ * auVar15._0_4_;
          auVar53._4_4_ = -(auVar97._4_4_ * auVar111._4_4_) + auVar112._4_4_ * auVar15._4_4_;
          auVar53._8_4_ = -(auVar97._8_4_ * auVar111._8_4_) + auVar112._8_4_ * auVar15._8_4_;
          auVar53._12_4_ = -(auVar97._12_4_ * auVar111._12_4_) + auVar112._12_4_ * auVar15._12_4_;
          auVar74._0_4_ = fVar72 + _DAT_145fc6ed8;
          auVar74._4_4_ = fVar60 + 0.0;
          auVar74._8_4_ = fVar62 + 0.0;
          auVar74._12_4_ = fVar84 + 0.0;
          auVar111 = vinsertps_avx(auVar53,auVar74,0x30);
          fVar63 = auVar111._0_4_;
          auVar75._0_4_ = fVar63 * fVar63;
          fVar48 = auVar111._4_4_;
          auVar75._4_4_ = fVar48 * fVar48;
          fVar61 = auVar111._8_4_;
          auVar75._8_4_ = fVar61 * fVar61;
          fVar82 = auVar111._12_4_;
          auVar75._12_4_ = fVar82 * fVar82;
          auVar111 = vhaddps_avx(auVar75,auVar75);
          auVar111 = vhaddps_avx(auVar111,auVar111);
          auVar15 = vrsqrtps_avx(auVar111);
          fVar72 = auVar15._0_4_;
          fVar60 = auVar15._4_4_;
          fVar62 = auVar15._8_4_;
          fVar84 = auVar15._12_4_;
          auVar54._0_4_ =
               ((fVar122 * fVar72 * fVar72 * auVar111._0_4_ - fVar122) * fVar72 + fVar72) * fVar63;
          auVar54._4_4_ =
               ((fVar90 * fVar60 * fVar60 * auVar111._4_4_ - fVar90) * fVar60 + fVar60) * fVar48;
          auVar54._8_4_ =
               ((fVar92 * fVar62 * fVar62 * auVar111._8_4_ - fVar92) * fVar62 + fVar62) * fVar61;
          auVar54._12_4_ =
               ((fVar93 * fVar84 * fVar84 * auVar111._12_4_ - fVar93) * fVar84 + fVar84) * fVar82;
        }
        auVar111 = vshufps_avx(auVar54,auVar54,0xc9);
        auVar15 = vshufps_avx(auVar54,auVar54,0xd2);
        fVar63 = auVar15._0_4_ * _DAT_14615bd00 + auVar111._0_4_ * _DAT_145fc6ed8;
        fVar72 = auVar15._4_4_ * _UNK_14615bd04 + auVar111._4_4_ * 0.0;
        fVar48 = auVar15._8_4_ * _UNK_14615bd08 + auVar111._8_4_ * 0.0;
        fVar60 = auVar15._12_4_ * _UNK_14615bd0c + auVar111._12_4_ * 0.0;
        auVar95._0_4_ = fVar63 + fVar63;
        auVar95._4_4_ = fVar72 + fVar72;
        auVar95._8_4_ = fVar48 + fVar48;
        auVar95._12_4_ = fVar60 + fVar60;
        auVar97 = vshufps_avx(auVar95,auVar95,0xd2);
        auVar112 = vshufps_avx(auVar95,auVar95,0xc9);
        auVar49 = vshufps_avx(auVar54,auVar54,0xff);
        fVar61 = auVar95._0_4_ * auVar49._0_4_ + auVar27._0_4_ +
                 -(auVar15._0_4_ * auVar112._0_4_) + auVar97._0_4_ * auVar111._0_4_;
        fVar62 = auVar95._4_4_ * auVar49._4_4_ + auVar27._4_4_ +
                 -(auVar15._4_4_ * auVar112._4_4_) + auVar97._4_4_ * auVar111._4_4_;
        fVar82 = auVar95._8_4_ * auVar49._8_4_ + auVar27._8_4_ +
                 -(auVar15._8_4_ * auVar112._8_4_) + auVar97._8_4_ * auVar111._8_4_;
        fVar84 = auVar95._12_4_ * auVar49._12_4_ + auVar27._12_4_ +
                 -(auVar15._12_4_ * auVar112._12_4_) + auVar97._12_4_ * auVar111._12_4_;
        auVar111 = vhaddps_avx(auVar27,auVar27);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar15 = vrsqrtps_avx(auVar111);
        fVar63 = auVar15._0_4_;
        fVar72 = auVar15._4_4_;
        fVar48 = auVar15._8_4_;
        fVar60 = auVar15._12_4_;
        auVar96._0_4_ =
             auVar27._0_4_ *
             ((fVar122 * fVar63 * fVar63 * auVar111._0_4_ - fVar122) * fVar63 + fVar63);
        auVar96._4_4_ =
             auVar27._4_4_ *
             ((fVar90 * fVar72 * fVar72 * auVar111._4_4_ - fVar90) * fVar72 + fVar72);
        auVar96._8_4_ =
             auVar27._8_4_ *
             ((fVar92 * fVar48 * fVar48 * auVar111._8_4_ - fVar92) * fVar48 + fVar48);
        auVar96._12_4_ =
             auVar27._12_4_ *
             ((fVar93 * fVar60 * fVar60 * auVar111._12_4_ - fVar93) * fVar60 + fVar60);
        auVar85._0_4_ = fVar61 * fVar61;
        auVar85._4_4_ = fVar62 * fVar62;
        auVar85._8_4_ = fVar82 * fVar82;
        auVar85._12_4_ = fVar84 * fVar84;
        auVar111 = vblendps_avx(auVar85,auVar28,8);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar15 = vrsqrtps_avx(auVar111);
        fVar63 = auVar15._0_4_;
        fVar72 = auVar15._4_4_;
        fVar48 = auVar15._8_4_;
        fVar60 = auVar15._12_4_;
        auVar103._0_4_ =
             ((fVar122 * fVar63 * fVar63 * auVar111._0_4_ - fVar122) * fVar63 + fVar63) * fVar61;
        auVar103._4_4_ =
             ((fVar90 * fVar72 * fVar72 * auVar111._4_4_ - fVar90) * fVar72 + fVar72) * fVar62;
        auVar103._8_4_ =
             ((fVar92 * fVar48 * fVar48 * auVar111._8_4_ - fVar92) * fVar48 + fVar48) * fVar82;
        auVar103._12_4_ =
             ((fVar93 * fVar60 * fVar60 * auVar111._12_4_ - fVar93) * fVar60 + fVar60) * fVar84;
        auVar81._0_4_ = auVar103._0_4_ * auVar96._0_4_;
        auVar81._4_4_ = auVar103._4_4_ * auVar96._4_4_;
        auVar81._8_4_ = auVar103._8_4_ * auVar96._8_4_;
        auVar81._12_4_ = auVar103._12_4_ * auVar96._12_4_;
        auVar111 = vblendps_avx(auVar81,auVar28,8);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        auVar111 = vhaddps_avx(auVar111,auVar111);
        fVar63 = auVar111._0_4_;
        fVar72 = auVar111._4_4_;
        fVar48 = auVar111._8_4_;
        fVar60 = auVar111._12_4_;
        auVar66._0_4_ = (uint)(fVar63 + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar66._4_4_ = (uint)(fVar72 + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar66._8_4_ = (uint)(fVar48 + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar66._12_4_ = (uint)(fVar60 + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar111 = vcmpps_avx(auVar66,auVar42,5);
        if ((((SUB161(auVar111 >> 0x1f,0) & 1) != 0 || (SUB161(auVar111 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar111 >> 0x5f,0) & 1) != 0) || auVar111[0xf] < '\0') {
          auVar29._0_4_ = fVar63 + _DAT_145fc6ed8;
          auVar29._4_4_ = fVar72 + 0.0;
          auVar29._8_4_ = fVar48 + 0.0;
          auVar29._12_4_ = fVar60 + 0.0;
          auVar67._0_4_ = (uint)(fVar63 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
          auVar67._4_4_ = (uint)(fVar72 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
          auVar67._8_4_ = (uint)(fVar48 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
          auVar67._12_4_ = (uint)(fVar60 + _DAT_145fc6ed8) & _DAT_145fc6f4c;
          auVar111 = vcmpps_avx(auVar67,auVar42,1);
          auVar15 = vshufps_avx(auVar96,auVar96,0xc9);
          auVar111 = vblendvps_avx(auVar103,_DAT_146159bc0,auVar111);
          auVar97 = vshufps_avx(auVar111,auVar111,0xd2);
          auVar111 = vshufps_avx(auVar111,auVar111,0xc9);
          auVar112 = vshufps_avx(auVar96,auVar96,0xd2);
          auVar43._0_4_ = -(auVar112._0_4_ * auVar111._0_4_) + auVar97._0_4_ * auVar15._0_4_;
          auVar43._4_4_ = -(auVar112._4_4_ * auVar111._4_4_) + auVar97._4_4_ * auVar15._4_4_;
          auVar43._8_4_ = -(auVar112._8_4_ * auVar111._8_4_) + auVar97._8_4_ * auVar15._8_4_;
          auVar43._12_4_ = -(auVar112._12_4_ * auVar111._12_4_) + auVar97._12_4_ * auVar15._12_4_;
          auVar111 = vinsertps_avx(auVar43,auVar29,0x30);
          fVar63 = auVar111._0_4_;
          auVar44._0_4_ = fVar63 * fVar63;
          fVar48 = auVar111._4_4_;
          auVar44._4_4_ = fVar48 * fVar48;
          fVar61 = auVar111._8_4_;
          auVar44._8_4_ = fVar61 * fVar61;
          fVar82 = auVar111._12_4_;
          auVar44._12_4_ = fVar82 * fVar82;
          auVar111 = vhaddps_avx(auVar44,auVar44);
          auVar111 = vhaddps_avx(auVar111,auVar111);
          auVar15 = vrsqrtps_avx(auVar111);
          fVar72 = auVar15._0_4_;
          fVar60 = auVar15._4_4_;
          fVar62 = auVar15._8_4_;
          fVar84 = auVar15._12_4_;
          auVar99._0_4_ =
               ((fVar72 * fVar72 * auVar111._0_4_ * fVar122 - fVar122) * fVar72 + fVar72) * fVar63;
          auVar99._4_4_ =
               ((fVar60 * fVar60 * auVar111._4_4_ * fVar90 - fVar90) * fVar60 + fVar60) * fVar48;
          auVar99._8_4_ =
               ((fVar62 * fVar62 * auVar111._8_4_ * fVar92 - fVar92) * fVar62 + fVar62) * fVar61;
          auVar99._12_4_ =
               ((fVar84 * fVar84 * auVar111._12_4_ * fVar93 - fVar93) * fVar84 + fVar84) * fVar82;
        }
        auVar30._0_4_ = (uint)auVar54._0_4_ ^ auStack_448._0_4_;
        auVar30._4_4_ = (uint)auVar54._4_4_ ^ auStack_448._4_4_;
        auVar30._8_4_ = (uint)auVar54._8_4_ ^ auStack_448._8_4_;
        auVar30._12_4_ = (uint)auVar54._12_4_ ^ auStack_448._12_4_;
        auVar97 = vshufps_avx(auVar99,auVar99,0xff);
        fVar63 = auVar99._0_4_;
        auVar112 = vshufps_avx(auVar99,auVar99,0x55);
        auVar27 = vshufps_avx(auVar99,auVar99,0xaa);
        auVar111 = vblendps_avx(auVar30,auVar54,10);
        auVar49 = vshufps_avx(auVar111,auVar111,0x1b);
        auVar15 = vshufpd_avx(auVar54,auVar30,1);
        auVar111 = vblendps_avx(auVar30,auVar54,9);
        auVar111 = vshufps_avx(auVar111,auVar111,0xb1);
        auVar31._0_4_ =
             -(auVar27._0_4_ * auVar111._0_4_) -
             (auVar112._0_4_ * auVar15._0_4_ +
             (fVar63 * auVar49._0_4_ - auVar97._0_4_ * auVar54._0_4_));
        auVar31._4_4_ =
             -(auVar27._4_4_ * auVar111._4_4_) -
             (auVar112._4_4_ * auVar15._4_4_ +
             (fVar63 * auVar49._4_4_ - auVar97._4_4_ * auVar54._4_4_));
        auVar31._8_4_ =
             -(auVar27._8_4_ * auVar111._8_4_) -
             (auVar112._8_4_ * auVar15._8_4_ +
             (fVar63 * auVar49._8_4_ - auVar97._8_4_ * auVar54._8_4_));
        auVar31._12_4_ =
             -(auVar27._12_4_ * auVar111._12_4_) -
             (auVar112._12_4_ * auVar15._12_4_ +
             (fVar63 * auVar49._12_4_ - auVar97._12_4_ * auVar54._12_4_));
        auVar45._4_4_ = _DAT_145fc6f70;
        auVar45._0_4_ = _DAT_145fc6f70;
        auVar45._8_4_ = _DAT_145fc6f70;
        auVar45._12_4_ = _DAT_145fc6f70;
        auVar19._0_4_ = (uint)auVar31._0_4_ & _DAT_145fc6f4c;
        auVar19._4_4_ = (uint)auVar31._4_4_ & _DAT_145fc6f4c;
        auVar19._8_4_ = (uint)auVar31._8_4_ & _DAT_145fc6f4c;
        auVar19._12_4_ = (uint)auVar31._12_4_ & _DAT_145fc6f4c;
        auVar111 = vcmpps_avx(auVar19,auVar45,0x11);
        auVar15 = vpcmpeqd_avx(auVar45,auVar45);
        auVar15 = auVar15 & ~auVar111;
        if (((((SUB161(auVar15 >> 0x1f,0) & 1) == 0 && (SUB161(auVar15 >> 0x3f,0) & 1) == 0) &&
             (SUB161(auVar15 >> 0x5f,0) & 1) == 0) && -1 < auVar15[0xf]) &&
           (auStack_348 = auVar31, FUN_144e067d0(&plStack_4e8), param_6[param_5] != 0)) {
          FUN_144e065a0(auStack_468,&plStack_4e8);
        }
        if (!bVar4) goto LAB_140023e99;
        goto LAB_14002450a;
      }
      uVar5 = func_0x000144e05fa0(plStack_4e8[1]);
      auVar97 = auVar98._0_16_;
      auVar15 = auVar89._0_16_;
      auVar112 = auVar117._0_16_;
      auVar111 = auVar91._0_16_;
      if (uVar1 == uVar5) {
        auVar20._8_8_ = _UNK_145fc6ee8;
        auVar20._0_8_ = _DAT_145fc6ee0;
      }
      else {
        uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,uVar1);
        (**(code **)(*plVar11 + 0x108))(plVar11,uVar6,auStack_468);
        auVar97 = auVar98._0_16_;
        auVar15 = auVar89._0_16_;
        auVar112 = auVar117._0_16_;
        auVar111 = auVar91._0_16_;
        auVar20 = auStack_468;
      }
      uVar1 = auVar111._0_4_;
      auVar55._0_4_ = (uint)auVar20._0_4_ ^ uVar1;
      uVar5 = auVar111._4_4_;
      auVar55._4_4_ = (uint)auVar20._4_4_ ^ uVar5;
      uVar2 = auVar111._8_4_;
      auVar55._8_4_ = (uint)auVar20._8_4_ ^ uVar2;
      uVar3 = auVar111._12_4_;
      auVar55._12_4_ = (uint)auVar20._12_4_ ^ uVar3;
      auVar124._0_12_ = ZEXT812(0);
      auVar124._12_4_ = 0;
      fVar63 = auStack_498._0_4_;
      auVar32._0_4_ = auVar20._0_4_ * fVar63;
      fVar48 = auStack_498._4_4_;
      auVar32._4_4_ = auVar20._4_4_ * fVar48;
      fVar61 = auStack_498._8_4_;
      auVar32._8_4_ = auVar20._8_4_ * fVar61;
      fVar82 = auStack_498._12_4_;
      auVar32._12_4_ = auVar20._12_4_ * fVar82;
      auVar111 = vhaddps_avx(auVar32,auVar32);
      auVar111 = vhaddps_avx(auVar111,auVar111);
      auVar111 = vcmpps_avx(auVar111,ZEXT816(0) << 0x20,1);
      auVar111 = vblendvps_avx(auVar20,auVar55,auVar111);
      auVar46._4_4_ = fStack_49c;
      auVar46._0_4_ = fStack_49c;
      auVar46._8_4_ = fStack_49c;
      auVar46._12_4_ = fStack_49c;
      auVar56._0_4_ = auVar111._0_4_ * fVar63;
      auVar56._4_4_ = auVar111._4_4_ * fVar48;
      auVar56._8_4_ = auVar111._8_4_ * fVar61;
      auVar56._12_4_ = auVar111._12_4_ * fVar82;
      auVar27 = vhaddps_avx(auVar56,auVar56);
      auVar49 = vhaddps_avx(auVar27,auVar27);
      auVar57._4_4_ = _DAT_145fc6ed8;
      auVar57._0_4_ = _DAT_145fc6ed8;
      auVar57._8_4_ = _DAT_145fc6ed8;
      auVar57._12_4_ = _DAT_145fc6ed8;
      auVar17 = vrcpps_avx(auVar49);
      fVar24 = auVar49._0_4_;
      auVar76._0_4_ = (uint)fVar24 ^ uVar1;
      fVar25 = auVar49._4_4_;
      auVar76._4_4_ = (uint)fVar25 ^ uVar5;
      fVar26 = auVar49._8_4_;
      auVar76._8_4_ = (uint)fVar26 ^ uVar2;
      fVar122 = auVar49._12_4_;
      auVar76._12_4_ = (uint)fVar122 ^ uVar3;
      auVar27 = vcmpps_avx(auVar49,auVar76,1);
      auVar49 = vcmpps_avx(auVar49,auVar76,0);
      fVar127 = auVar17._0_4_;
      fVar128 = auVar17._4_4_;
      fVar129 = auVar17._8_4_;
      fVar14 = auVar17._12_4_;
      auVar68._0_4_ = -(fVar24 * fVar24) + _DAT_145fc6ed8;
      auVar68._4_4_ = -(fVar25 * fVar25) + _DAT_145fc6ed8;
      auVar68._8_4_ = -(fVar26 * fVar26) + _DAT_145fc6ed8;
      auVar68._12_4_ = -(fVar122 * fVar122) + _DAT_145fc6ed8;
      auVar17 = vmaxps_avx(auVar124,auVar68);
      auVar16 = vrsqrtps_avx(auVar17);
      fVar72 = auVar16._0_4_;
      fVar60 = auVar16._4_4_;
      fVar62 = auVar16._8_4_;
      fVar84 = auVar16._12_4_;
      fVar90 = auVar15._0_4_;
      fVar92 = auVar15._4_4_;
      fVar93 = auVar15._8_4_;
      fVar94 = auVar15._12_4_;
      auVar15 = vcmpps_avx(auVar112,auVar17,2);
      auVar69._0_4_ =
           (float)(auVar15._0_4_ &
                  (uint)(((fVar90 * fVar72 * fVar72 * auVar17._0_4_ - fVar90) * fVar72 + fVar72) *
                        auVar17._0_4_));
      auVar69._4_4_ =
           (float)(auVar15._4_4_ &
                  (uint)(((fVar92 * fVar60 * fVar60 * auVar17._4_4_ - fVar92) * fVar60 + fVar60) *
                        auVar17._4_4_));
      auVar69._8_4_ =
           (float)(auVar15._8_4_ &
                  (uint)(((fVar93 * fVar62 * fVar62 * auVar17._8_4_ - fVar93) * fVar62 + fVar62) *
                        auVar17._8_4_));
      auVar69._12_4_ =
           (float)(auVar15._12_4_ &
                  (uint)(((fVar94 * fVar84 * fVar84 * auVar17._12_4_ - fVar94) * fVar84 + fVar84) *
                        auVar17._12_4_));
      auVar77._0_4_ = (-((fVar24 * fVar127 - _DAT_145fc6ed8) * fVar127) + fVar127) * auVar69._0_4_;
      auVar77._4_4_ = (-((fVar25 * fVar128 - _DAT_145fc6ed8) * fVar128) + fVar128) * auVar69._4_4_;
      auVar77._8_4_ = (-((fVar26 * fVar129 - _DAT_145fc6ed8) * fVar129) + fVar129) * auVar69._8_4_;
      auVar77._12_4_ = (-((fVar122 * fVar14 - _DAT_145fc6ed8) * fVar14) + fVar14) * auVar69._12_4_;
      auVar15 = vrcpps_avx(auVar77);
      auVar104._0_4_ = _DAT_145fc6f4c & (uint)auVar77._0_4_;
      auVar104._4_4_ = _DAT_145fc6f4c & (uint)auVar77._4_4_;
      auVar104._8_4_ = _DAT_145fc6f4c & (uint)auVar77._8_4_;
      auVar104._12_4_ = _DAT_145fc6f4c & (uint)auVar77._12_4_;
      fVar60 = auVar15._0_4_;
      fVar62 = auVar15._4_4_;
      fVar84 = auVar15._8_4_;
      fVar72 = auVar15._12_4_;
      auVar112 = vcmpps_avx(auVar57,auVar104,1);
      auVar125._0_4_ = (auVar77._0_4_ * fVar60 - _DAT_145fc6ed8) * fVar60 - fVar60;
      auVar125._4_4_ = (auVar77._4_4_ * fVar62 - _DAT_145fc6ed8) * fVar62 - fVar62;
      auVar125._8_4_ = (auVar77._8_4_ * fVar84 - _DAT_145fc6ed8) * fVar84 - fVar84;
      auVar125._12_4_ = (auVar77._12_4_ * fVar72 - _DAT_145fc6ed8) * fVar72 - fVar72;
      auVar15 = vblendvps_avx(auVar77,auVar125,auVar112);
      fVar72 = auVar15._0_4_;
      fVar14 = fVar72 * fVar72;
      fVar60 = auVar15._4_4_;
      fVar24 = fVar60 * fVar60;
      fVar62 = auVar15._8_4_;
      fVar25 = fVar62 * fVar62;
      fVar84 = auVar15._12_4_;
      fVar26 = fVar84 * fVar84;
      auVar15 = vsubps_avx(auVar111,auStack_498);
      fVar122 = fStack_49c * auVar15._0_4_ + fVar63;
      fVar127 = fStack_49c * auVar15._4_4_ + fVar48;
      fVar128 = fStack_49c * auVar15._8_4_ + fVar61;
      fVar129 = fStack_49c * auVar15._12_4_ + fVar82;
      auVar105._4_4_ = _DAT_145fc6f80;
      auVar105._0_4_ = _DAT_145fc6f80;
      auVar105._8_4_ = _DAT_145fc6f80;
      auVar105._12_4_ = _DAT_145fc6f80;
      auVar115._0_4_ =
           fVar14 * fVar14 * fVar14 * fVar14 * fVar72 *
           (fVar14 * (fVar14 * (fVar14 * (fVar14 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar14 * fVar72 * (fVar14 * (fVar14 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)(auVar112._0_4_ & ((uint)auVar77._0_4_ & uVar1 | _DAT_146159bdc)) + fVar72;
      auVar115._4_4_ =
           fVar24 * fVar24 * fVar24 * fVar24 * fVar60 *
           (fVar24 * (fVar24 * (fVar24 * (fVar24 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar24 * fVar60 * (fVar24 * (fVar24 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)(auVar112._4_4_ & ((uint)auVar77._4_4_ & uVar5 | _DAT_146159bdc)) + fVar60;
      auVar115._8_4_ =
           fVar25 * fVar25 * fVar25 * fVar25 * fVar62 *
           (fVar25 * (fVar25 * (fVar25 * (fVar25 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar25 * fVar62 * (fVar25 * (fVar25 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)(auVar112._8_4_ & ((uint)auVar77._8_4_ & uVar2 | _DAT_146159bdc)) + fVar62;
      auVar115._12_4_ =
           fVar26 * fVar26 * fVar26 * fVar26 * fVar84 *
           (fVar26 * (fVar26 * (fVar26 * (fVar26 * _DAT_14615a184 + _DAT_14615a180) + _DAT_14615a188
                               ) + _DAT_14615a18c) + _DAT_14615a190) +
           fVar26 * fVar84 * (fVar26 * (fVar26 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c)
           + (float)(auVar112._12_4_ & ((uint)auVar77._12_4_ & uVar3 | _DAT_146159bdc)) + fVar84;
      auVar100._4_4_ = _DAT_146159be0;
      auVar100._0_4_ = _DAT_146159be0;
      auVar100._8_4_ = _DAT_146159be0;
      auVar100._12_4_ = _DAT_146159be0;
      auVar78._0_4_ = (uint)auVar69._0_4_ ^ uVar1;
      auVar78._4_4_ = (uint)auVar69._4_4_ ^ uVar5;
      auVar78._8_4_ = (uint)auVar69._8_4_ ^ uVar2;
      auVar78._12_4_ = (uint)auVar69._12_4_ ^ uVar3;
      auVar15 = vcmpps_avx(auVar69,auVar78,1);
      auVar15 = vblendvps_avx(auVar105,auVar100,auVar15);
      auVar86._0_4_ = auVar115._0_4_ + auVar15._0_4_;
      auVar86._4_4_ = auVar115._4_4_ + auVar15._4_4_;
      auVar86._8_4_ = auVar115._8_4_ + auVar15._8_4_;
      auVar86._12_4_ = auVar115._12_4_ + auVar15._12_4_;
      auVar15 = vblendvps_avx(auVar115,auVar86,auVar27);
      auVar116._4_4_ = _DAT_146159bdc;
      auVar116._0_4_ = _DAT_146159bdc;
      auVar116._8_4_ = _DAT_146159bdc;
      auVar116._12_4_ = _DAT_146159bdc;
      auVar119._4_4_ = _DAT_14615a1a0;
      auVar119._0_4_ = _DAT_14615a1a0;
      auVar119._8_4_ = _DAT_14615a1a0;
      auVar119._12_4_ = _DAT_14615a1a0;
      auVar112 = vcmpps_avx(auVar78,auVar69,1);
      auVar112 = vblendvps_avx(auVar119,auVar116,auVar112);
      auVar87._0_4_ = fVar122 * fVar122;
      auVar87._4_4_ = fVar127 * fVar127;
      auVar87._8_4_ = fVar128 * fVar128;
      auVar87._12_4_ = fVar129 * fVar129;
      auVar27 = vhaddps_avx(auVar87,auVar87);
      auVar27 = vhaddps_avx(auVar27,auVar27);
      auVar17 = vrsqrtps_avx(auVar27);
      fVar72 = auVar17._0_4_;
      fVar60 = auVar17._4_4_;
      fVar62 = auVar17._8_4_;
      fVar84 = auVar17._12_4_;
      auVar88._0_4_ =
           fVar122 * ((fVar90 * fVar72 * fVar72 * auVar27._0_4_ - fVar90) * fVar72 + fVar72);
      auVar88._4_4_ =
           fVar127 * ((fVar92 * fVar60 * fVar60 * auVar27._4_4_ - fVar92) * fVar60 + fVar60);
      auVar88._8_4_ =
           fVar128 * ((fVar93 * fVar62 * fVar62 * auVar27._8_4_ - fVar93) * fVar62 + fVar62);
      auVar88._12_4_ =
           fVar129 * ((fVar94 * fVar84 * fVar84 * auVar27._12_4_ - fVar94) * fVar84 + fVar84);
      auVar15 = vblendvps_avx(auVar15,auVar112,auVar49);
      fVar72 = _DAT_145fc6ed8 - fStack_49c;
      auVar106._4_4_ = fVar72;
      auVar106._0_4_ = fVar72;
      auVar106._8_4_ = fVar72;
      auVar106._12_4_ = fVar72;
      auVar112 = vunpcklps_avx(auVar106,auVar46);
      fVar72 = auVar112._0_4_ * auVar15._0_4_;
      fVar62 = auVar112._4_4_ * auVar15._4_4_;
      fVar14 = auVar112._8_4_ * auVar15._8_4_;
      fVar25 = auVar112._12_4_ * auVar15._12_4_;
      auVar107._0_4_ = _DAT_146159b48 * fVar72;
      auVar107._4_4_ = _DAT_146159b48 * fVar62;
      auVar107._8_4_ = _DAT_146159b48 * fVar14;
      auVar107._12_4_ = _DAT_146159b48 * fVar25;
      auVar15 = vroundps_avx(auVar107,0);
      fVar72 = auVar15._0_4_ * _DAT_146159be0 + fVar72;
      fVar62 = auVar15._4_4_ * _DAT_146159be0 + fVar62;
      fVar14 = auVar15._8_4_ * _DAT_146159be0 + fVar14;
      fVar25 = auVar15._12_4_ * _DAT_146159be0 + fVar25;
      fVar60 = fVar72 * fVar72;
      fVar84 = fVar62 * fVar62;
      fVar24 = fVar14 * fVar14;
      fVar26 = fVar25 * fVar25;
      fVar60 = fVar60 * (fVar60 * (fVar60 * (fVar60 * _DAT_146159be8 + _DAT_146159be4) +
                                  _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
      fVar84 = fVar84 * (fVar84 * (fVar84 * (fVar84 * _DAT_146159be8 + _DAT_146159be4) +
                                  _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
      fVar24 = fVar24 * (fVar24 * (fVar24 * (fVar24 * _DAT_146159be8 + _DAT_146159be4) +
                                  _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
      fVar26 = fVar26 * (fVar26 * (fVar26 * (fVar26 * _DAT_146159be8 + _DAT_146159be4) +
                                  _DAT_146159bec) + _DAT_146159bf0) + _DAT_145fc6ed8;
      auVar33._0_4_ = fVar60 * fVar72;
      auVar33._4_4_ = fVar84 * fVar62;
      auVar33._8_4_ = fVar24 * fVar14;
      auVar33._12_4_ = fVar26 * fVar25;
      auVar120._0_4_ = -(fVar72 * fVar60) - 0.0;
      auVar120._4_4_ = -(fVar62 * fVar84) - 0.0;
      auVar120._8_4_ = -(fVar14 * fVar24) - 0.0;
      auVar120._12_4_ = -(fVar25 * fVar26) - 0.0;
      auVar101._0_4_ = (int)auVar15._0_4_;
      auVar101._4_4_ = (int)auVar15._4_4_;
      auVar101._8_4_ = (int)auVar15._8_4_;
      auVar101._12_4_ = (int)auVar15._12_4_;
      auVar108._4_4_ = _DAT_145f43778;
      auVar108._0_4_ = _DAT_145f43778;
      auVar108._8_4_ = _DAT_145f43778;
      auVar108._12_4_ = _DAT_145f43778;
      auVar15 = vpand_avx(auVar101,auVar108);
      auVar15 = vpcmpeqd_avx(auVar15,ZEXT416(0) << 0x20);
      auVar15 = vblendvps_avx(auVar120,auVar33,auVar15);
      auVar112 = vrcpps_avx(auVar69);
      fVar72 = auVar112._0_4_;
      fVar60 = auVar112._4_4_;
      fVar62 = auVar112._8_4_;
      fVar84 = auVar112._12_4_;
      auVar34._0_4_ =
           auVar15._0_4_ * (-((auVar69._0_4_ * fVar72 - _DAT_145fc6ed8) * fVar72) + fVar72);
      auVar34._4_4_ =
           auVar15._4_4_ * (-((auVar69._4_4_ * fVar60 - _DAT_145fc6ed8) * fVar60) + fVar60);
      auVar34._8_4_ =
           auVar15._8_4_ * (-((auVar69._8_4_ * fVar62 - _DAT_145fc6ed8) * fVar62) + fVar62);
      auVar34._12_4_ =
           auVar15._12_4_ * (-((auVar69._12_4_ * fVar84 - _DAT_145fc6ed8) * fVar84) + fVar84);
      auVar15 = vshufps_avx(auVar34,auVar34,0x55);
      fVar14 = auVar111._0_4_ * auVar15._0_4_ + auVar34._0_4_ * fVar63;
      fVar24 = auVar111._4_4_ * auVar15._4_4_ + auVar34._0_4_ * fVar48;
      fVar25 = auVar111._8_4_ * auVar15._8_4_ + auVar34._0_4_ * fVar61;
      fVar26 = auVar111._12_4_ * auVar15._12_4_ + auVar34._0_4_ * fVar82;
      auVar35._0_4_ = fVar14 * fVar14;
      auVar35._4_4_ = fVar24 * fVar24;
      auVar35._8_4_ = fVar25 * fVar25;
      auVar35._12_4_ = fVar26 * fVar26;
      auVar15 = vhaddps_avx(auVar35,auVar35);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar112 = vrsqrtps_avx(auVar15);
      fVar72 = auVar112._0_4_;
      fVar60 = auVar112._4_4_;
      fVar62 = auVar112._8_4_;
      fVar84 = auVar112._12_4_;
      auVar36._0_4_ =
           fVar14 * ((fVar90 * fVar72 * fVar72 * auVar15._0_4_ - fVar90) * fVar72 + fVar72);
      auVar36._4_4_ =
           fVar24 * ((fVar92 * fVar60 * fVar60 * auVar15._4_4_ - fVar92) * fVar60 + fVar60);
      auVar36._8_4_ =
           fVar25 * ((fVar93 * fVar62 * fVar62 * auVar15._8_4_ - fVar93) * fVar62 + fVar62);
      auVar36._12_4_ =
           fVar26 * ((fVar94 * fVar84 * fVar84 * auVar15._12_4_ - fVar94) * fVar84 + fVar84);
      auVar15 = vcmpps_avx(auVar69,auVar78,0);
      auVar15 = vblendvps_avx(auVar36,auStack_498,auVar15);
      auVar70._0_4_ = fVar63 + _DAT_146159ef4;
      auVar70._4_4_ = fVar48 + _DAT_146159ef4;
      auVar70._8_4_ = fVar61 + _DAT_146159ef4;
      auVar70._12_4_ = fVar82 + _DAT_146159ef4;
      auVar58._0_4_ = fVar63 + _DAT_146159ef0;
      auVar58._4_4_ = fVar48 + _DAT_146159ef0;
      auVar58._8_4_ = fVar61 + _DAT_146159ef0;
      auVar58._12_4_ = fVar82 + _DAT_146159ef0;
      auVar112 = vcmpps_avx(auVar58,auVar111,2);
      auVar111 = vcmpps_avx(auVar111,auVar70,2);
      auVar21._0_4_ = auVar112._0_4_ & auVar111._0_4_;
      auVar21._4_4_ = auVar112._4_4_ & auVar111._4_4_;
      auVar21._8_4_ = auVar112._8_4_ & auVar111._8_4_;
      auVar21._12_4_ = auVar112._12_4_ & auVar111._12_4_;
      auVar111 = vpcmpeqd_avx(auVar112,auVar112);
      iVar8 = -(uint)((auVar111 & ~auVar21) == (undefined1  [16])0x0);
      auVar22._4_4_ = iVar8;
      auVar22._0_4_ = iVar8;
      auVar22._8_4_ = iVar8;
      auVar22._12_4_ = iVar8;
      auStack_498 = vblendvps_avx(auVar15,auVar88,auVar22);
      auVar111 = vshufps_avx(auStack_498,auStack_498,0xc9);
      auVar15 = vshufps_avx(auStack_498,auStack_498,0xd2);
      auVar112 = vshufps_avx(auStack_4b8._0_16_,auStack_4b8._0_16_,0xd2);
      auVar27 = vshufps_avx(auStack_4b8._0_16_,auStack_4b8._0_16_,0xc9);
      auVar49 = vsubps_avx(auVar97,auStack_4b8._0_16_);
      fVar63 = auVar15._0_4_ * auVar27._0_4_ - auVar112._0_4_ * auVar111._0_4_;
      fVar72 = auVar15._4_4_ * auVar27._4_4_ - auVar112._4_4_ * auVar111._4_4_;
      fVar48 = auVar15._8_4_ * auVar27._8_4_ - auVar112._8_4_ * auVar111._8_4_;
      fVar60 = auVar15._12_4_ * auVar27._12_4_ - auVar112._12_4_ * auVar111._12_4_;
      auVar71._0_4_ = fVar63 + fVar63;
      auVar71._4_4_ = fVar72 + fVar72;
      auVar71._8_4_ = fVar48 + fVar48;
      auVar71._12_4_ = fVar60 + fVar60;
      auVar97 = vshufps_avx(auVar71,auVar71,0xd2);
      auVar112 = vshufps_avx(auVar71,auVar71,0xc9);
      auVar27 = vshufps_avx(auStack_498,auStack_498,0xff);
      auVar91 = ZEXT1664(CONCAT412(auVar71._12_4_ * auVar27._12_4_ + auVar49._12_4_ +
                                   -(auVar15._12_4_ * auVar112._12_4_) +
                                   auVar97._12_4_ * auVar111._12_4_,
                                   CONCAT48(auVar71._8_4_ * auVar27._8_4_ + auVar49._8_4_ +
                                            -(auVar15._8_4_ * auVar112._8_4_) +
                                            auVar97._8_4_ * auVar111._8_4_,
                                            CONCAT44(auVar71._4_4_ * auVar27._4_4_ + auVar49._4_4_ +
                                                     -(auVar15._4_4_ * auVar112._4_4_) +
                                                     auVar97._4_4_ * auVar111._4_4_,
                                                     auVar71._0_4_ * auVar27._0_4_ + auVar49._0_4_ +
                                                     -(auVar15._0_4_ * auVar112._0_4_) +
                                                     auVar97._0_4_ * auVar111._0_4_))));
      FUN_144379570(auStack_398,&plStack_4d8);
    }
    uVar1 = uStack_4e0;
    plVar11 = plStack_4e8;
    auVar89 = ZEXT1264(ZEXT812(0));
    auStack_318._0_12_ = ZEXT812(0);
    auStack_318._12_4_ = 0;
    if (param_5 == 2) {
      uVar5 = func_0x000144e05fa0(plStack_4e8[1]);
      if (uVar1 == uVar5) {
        auStack_318._0_12_ = ZEXT812(0);
        auStack_318._12_4_ = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,uVar1);
        (**(code **)(*plVar11 + 0x110))(plVar11,uVar6,&uStack_438);
        auStack_318 = auStack_428;
      }
    }
    uStack_328 = _DAT_14614f7f0;
    uStack_320 = _UNK_14614f7f8;
    FUN_1400247d0(&uStack_438,param_1 + 2,param_4,param_6,&uStack_328,auStack_318);
    plVar11 = (longlong *)0x0;
    if (iStack_3d8 != -1) {
      plVar11 = param_1;
    }
    iVar8 = func_0x000144e05fa0(plVar11[1]);
    if (iStack_3d8 != iVar8) {
      uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,iStack_3d8);
      (**(code **)(*plVar11 + 0x110))(plVar11,uVar6,auStack_398);
      auVar89 = ZEXT1664(auStack_388);
    }
    auVar98 = ZEXT1664(auStack_3f8);
    plVar11 = param_1;
    if (iStack_3dc == -1) {
      plVar11 = (longlong *)0x0;
    }
    iVar8 = func_0x000144e05fa0(plVar11[1]);
    auVar111 = auVar89._0_16_;
    auVar15 = auVar91._0_16_;
    auVar97 = auVar98._0_16_;
    auVar102._0_12_ = ZEXT812(0);
    auVar102._12_4_ = 0;
    auVar109 = ZEXT1664(auVar102);
    auVar23._0_12_ = ZEXT812(0);
    auVar23._12_4_ = 0;
    if (iStack_3dc != iVar8) {
      uVar6 = (**(code **)(*plVar11 + 0xf0))(plVar11,iStack_3dc);
      (**(code **)(*plVar11 + 0x108))(plVar11,uVar6,auStack_398);
      auVar111 = auVar89._0_16_;
      auVar102 = auVar109._0_16_;
      auVar15 = auVar91._0_16_;
      auVar97 = auVar98._0_16_;
      auVar23 = auStack_388;
    }
    fVar63 = auVar97._0_4_ + auVar111._0_4_;
    fVar72 = auVar97._4_4_ + auVar111._4_4_;
    fVar48 = auVar97._8_4_ + auVar111._8_4_;
    fVar60 = auVar97._12_4_ + auVar111._12_4_;
    auVar111 = vsubps_avx(auVar15,auVar23);
    auVar37._0_4_ = fVar63 * fVar63;
    auVar37._4_4_ = fVar72 * fVar72;
    auVar37._8_4_ = fVar48 * fVar48;
    auVar37._12_4_ = fVar60 * fVar60;
    fVar63 = auVar111._0_4_;
    auVar59._0_4_ = fVar63 * fVar63;
    fVar60 = auVar111._4_4_;
    auVar59._4_4_ = fVar60 * fVar60;
    fVar82 = auVar111._8_4_;
    auVar59._8_4_ = fVar82 * fVar82;
    fVar24 = auVar111._12_4_;
    auVar59._12_4_ = fVar24 * fVar24;
    auVar111 = vblendps_avx(auVar37,auVar102,8);
    auVar97 = vblendps_avx(auVar59,auVar102,8);
    auVar111 = vhaddps_avx(auVar111,auVar111);
    auVar97 = vhaddps_avx(auVar97,auVar97);
    auVar112 = vhaddps_avx(auVar111,auVar111);
    auVar97 = vhaddps_avx(auVar97,auVar97);
    auVar111 = vrsqrtps_avx(auVar112);
    auVar27 = vrsqrtps_avx(auVar97);
    fVar72 = auVar111._0_4_;
    fVar61 = auVar111._4_4_;
    fVar84 = auVar111._8_4_;
    fVar25 = auVar111._12_4_;
    fVar48 = auVar27._0_4_;
    fVar62 = auVar27._4_4_;
    fVar14 = auVar27._8_4_;
    fVar26 = auVar27._12_4_;
    auVar79._4_4_ = _DAT_146159bfc;
    auVar79._0_4_ = _DAT_146159bfc;
    auVar79._8_4_ = _DAT_146159bfc;
    auVar79._12_4_ = _DAT_146159bfc;
    auVar111 = vcmpps_avx(auVar79,auVar112,2);
    auVar47._0_4_ =
         (float)(auVar111._0_4_ &
                (uint)(((_DAT_145fc6f08 * fVar72 * fVar72 * auVar112._0_4_ - _DAT_145fc6f08) *
                        fVar72 + fVar72) * auVar112._0_4_)) *
         ((_DAT_145fc6f08 * fVar48 * fVar48 * auVar97._0_4_ - _DAT_145fc6f08) * fVar48 + fVar48) *
         fVar63 + auVar23._0_4_;
    auVar47._4_4_ =
         (float)(auVar111._4_4_ &
                (uint)(((_DAT_145fc6f08 * fVar61 * fVar61 * auVar112._4_4_ - _DAT_145fc6f08) *
                        fVar61 + fVar61) * auVar112._4_4_)) *
         ((_DAT_145fc6f08 * fVar62 * fVar62 * auVar97._4_4_ - _DAT_145fc6f08) * fVar62 + fVar62) *
         fVar60 + auVar23._4_4_;
    auVar47._8_4_ =
         (float)(auVar111._8_4_ &
                (uint)(((_DAT_145fc6f08 * fVar84 * fVar84 * auVar112._8_4_ - _DAT_145fc6f08) *
                        fVar84 + fVar84) * auVar112._8_4_)) *
         ((_DAT_145fc6f08 * fVar14 * fVar14 * auVar97._8_4_ - _DAT_145fc6f08) * fVar14 + fVar14) *
         fVar82 + auVar23._8_4_;
    auVar47._12_4_ =
         (float)(auVar111._12_4_ &
                (uint)(((_DAT_145fc6f08 * fVar25 * fVar25 * auVar112._12_4_ - _DAT_145fc6f08) *
                        fVar25 + fVar25) * auVar112._12_4_)) *
         ((_DAT_145fc6f08 * fVar26 * fVar26 * auVar97._12_4_ - _DAT_145fc6f08) * fVar26 + fVar26) *
         fVar24 + auVar23._12_4_;
    auVar111 = vcmpps_avx(auVar112,auVar97,1);
    auStack_398 = vblendvps_avx(auVar15,auVar47,auVar111);
    FUN_144e14710(param_1 + 2,&uStack_438,1,1,auStack_398);
  }
LAB_14002450a:
  uStack_338 = auStack_498._0_8_;
  uStack_330 = auStack_498._8_8_;
  FUN_144df2390(plStack_4e8,uStack_4e0);
  if (param_6[param_5] != 0) {
    FUN_144e065a0(&uStack_438,&plStack_4e8);
  }
LAB_140023e99:
  FUN_144df1cf0(&uStack_218);
  return bStack_4ea;
}

