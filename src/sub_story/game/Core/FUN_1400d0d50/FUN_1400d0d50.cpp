// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d0d50  size: 1397 bytes
// Name:    FUN_1400d0d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451ae520, FUN_144f63b80, FUN_1400d0240, FUN_144e510e0, FUN_1406e5a30, FUN_144f67c80, FUN_1400e7bc0, FUN_1400d12d0, FUN_144f63830
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d0d50(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  longlong *plStack_e50;
  undefined1 auStack_e48 [16];
  undefined8 uStack_e38;
  undefined4 uStack_e30;
  undefined1 uStack_e2c;
  undefined1 auStack_e28 [16];
  undefined1 auStack_e18 [16];
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 *puStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 auStack_dc0 [128];
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined5 uStack_978;
  undefined3 uStack_973;
  undefined8 uStack_95b;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 *puStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined1 auStack_8d0 [1024];
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  uint uStack_488;
  undefined4 uStack_484;
  undefined8 uStack_46b;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined4 uStack_2e8;
  undefined1 auStack_2e0 [16];
  undefined1 *puStack_2d0;
  undefined1 auStack_2c8 [48];
  undefined8 uStack_298;
  undefined4 uStack_90;
  undefined1 auVar14 [64];
  
  bVar5 = 1;
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1406e5a30(*(longlong *)(param_2 + 8) + 0x640,&puStack_8f8);
    if (((float)uStack_8f0 != _DAT_14615bd54) || (NAN((float)uStack_8f0) || NAN(_DAT_14615bd54))) {
      auVar7 = vcmpss_avx(ZEXT416((uint)_DAT_14615bd54),
                          ZEXT416(*(uint *)(*(longlong *)(param_2 + 8) + 0x648)),0);
      bVar5 = auVar7[0] & 1;
    }
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (((lVar3 == 0) || ((*(uint *)(lVar3 + 0x10) & 0x20) == 0)) ||
     ((*(byte *)(lVar3 + 0x38) & 0x80) != 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(uint *)(lVar3 + 0x10) >> 0x15 & 1) == 0;
  }
  if ((bVar5 | bVar6) == 1) {
    auVar10 = ZEXT1664(*(undefined1 (*) [16])(*(longlong *)(param_1 + 0x2f8) + 0x70));
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x2f8) + 0x78);
    *(byte *)(param_2 + 0x14d) = *(byte *)(param_2 + 0x14d) & 0xfb;
    lVar3 = func_0x000144e63d60(*(undefined8 *)(*(longlong *)(param_1 + 0x2f8) + 0x20),
                                *(undefined8 *)(param_2 + 8));
    *(undefined1 (*) [16])(param_2 + 0xb0) = auVar10._0_16_;
    auVar13 = _DAT_14614f7f0;
    fVar8 = fVar8 - *(float *)(lVar3 + 0x28);
    auVar12 = ZEXT464((uint)fVar8);
    auVar9 = ZEXT1664(_DAT_14614f7f0);
    auVar7._4_4_ = fVar8;
    auVar7._0_4_ = fVar8;
    auVar7._8_4_ = fVar8;
    auVar7._12_4_ = fVar8;
    auVar7 = vblendps_avx(auVar10._0_16_,auVar7,4);
    *(undefined1 (*) [16])(param_2 + 0xb0) = auVar7;
    *(undefined1 (*) [16])(param_2 + 0xc0) = auVar13;
    if ((*(byte *)(param_2 + 0x14c) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x91) & 4) != 0) {
        uStack_2e8 = 0;
        auStack_2e0._0_12_ = ZEXT412(6) << 0x40;
        auStack_2e0._12_4_ = 0;
        uStack_298 = 0x80;
        uStack_90 = 0;
        puStack_2d0 = auStack_2c8;
        FUN_1451ae520(&puStack_de8);
        auVar11 = auVar12._0_16_;
        auVar13 = auVar10._0_16_;
        auVar7 = auVar9._0_16_;
        if (*(char *)((longlong)puStack_de8 + 0x1e) == '\x03') {
          puStack_8f8 = puStack_de8;
          uStack_8f0 = uStack_de0;
          uStack_8e8 = uStack_dd8;
          uStack_8e0 = uStack_dd0;
          uStack_8d8 = 0x100;
          if ((ulonglong)uStack_dc8._4_4_ != 0) {
            if (0x100 < uStack_dc8._4_4_) {
              uStack_8d8 = (ulonglong)uStack_dc8._4_4_;
            }
            auVar9 = ZEXT1664(auVar7);
            auVar10 = ZEXT1664(auVar13);
            auVar12 = ZEXT1664(auVar11);
            func_0x000145f40560(auStack_8d0,auStack_dc0,(ulonglong)uStack_dc8._4_4_ << 2);
            auVar11 = auVar12._0_16_;
            auVar13 = auVar10._0_16_;
            auVar7 = auVar9._0_16_;
            uStack_8d8 = CONCAT44(uStack_dc8._4_4_,(undefined4)uStack_8d8);
          }
          uStack_4b0 = uStack_9a0;
          uStack_4a8 = uStack_998;
          uStack_4a0 = uStack_990;
          uStack_498 = uStack_988;
          uStack_46b = uStack_95b;
          uStack_490 = uStack_980;
          uStack_488 = (uint)uStack_978;
          uStack_484 = (undefined4)(CONCAT35(uStack_973,uStack_978) >> 0x20);
          uStack_4d0 = uStack_9c0;
          uStack_4c8 = uStack_9b8;
          uStack_4c0 = uStack_9b0;
          uStack_4b8 = uStack_9a8;
          uStack_458 = uStack_948;
          uStack_450 = uStack_940;
          uStack_448 = uStack_938;
          uStack_440 = uStack_930;
          uStack_438 = uStack_928;
          uStack_430 = uStack_920;
          uStack_428 = uStack_918;
          uStack_420 = uStack_910;
          uStack_418 = uStack_908;
          uStack_410 = uStack_900;
        }
        else {
          func_0x000145f40560(&puStack_8f8,&puStack_de8,0x4f0);
          auVar11 = auVar12._0_16_;
          auVar13 = auVar10._0_16_;
          auVar7 = auVar9._0_16_;
        }
        puStack_8f8 = &uStack_458;
        puStack_de8 = (undefined8 *)0x0;
        uStack_de0 = 0;
        uStack_dd8 = 0;
        uStack_dd0 = 0;
        uStack_dc8 = 0xffffffff00000000;
        auStack_dc0[0] = 0xffff;
        auStack_e48 = (undefined1  [16])0x0;
        uStack_e38 = 0x1ffffffff;
        uStack_e30 = 0;
        uStack_e2c = 0;
        auVar9 = ZEXT1664(auVar7);
        auVar10 = ZEXT1664(auVar13);
        auVar12 = ZEXT1664(auVar11);
        plStack_e50 = (longlong *)&puStack_de8;
        FUN_1400d0240(param_1,&puStack_8f8,param_2);
        auVar7 = vpunpckhwd_avx(auVar10._0_16_,auVar10._0_16_);
        uStack_488 = uStack_488 | 0x40000000;
        auVar7 = vpsrad_avx(auVar7,0x10);
        auVar7 = vcvtdq2ps_avx(auVar7);
        auVar7 = vshufpd_avx(auVar7,auVar7,3);
        auVar13._0_4_ = auVar7._0_4_ * _DAT_146159c90 + auVar10._0_4_;
        auVar13._4_4_ = auVar7._4_4_ * _UNK_146159c94 + auVar10._4_4_;
        auVar13._8_4_ = auVar7._8_4_ * _UNK_146159c98 + auVar10._8_4_;
        auVar13._12_4_ = auVar7._12_4_ * _UNK_146159c9c + auVar10._12_4_;
        auVar14 = ZEXT1664(auVar13);
        auVar7 = vinsertps_avx(auVar13,ZEXT416((uint)(auVar12._0_4_ + _DAT_145fc6f48)),0x20);
        auVar7 = vinsertps_avx(auVar7,auVar13,0x30);
        auVar10 = ZEXT1664(auVar7);
        uVar4 = func_0x000144febb80(&puStack_8f8);
        auStack_e28 = auVar10._0_16_;
        auStack_e18 = auVar14._0_16_;
        func_0x0001451ae4b0(uVar4);
        auStack_2e0._0_8_ = &plStack_e50;
        func_0x000144f65500(puStack_8f8,&puStack_de8,1,0);
        puStack_8f8[2] = &plStack_e50;
        cVar2 = func_0x000144f64560(&puStack_8f8,0);
        if ((cVar2 != '\0') && ((undefined8 **)plStack_e50 != (undefined8 **)0x0)) {
          uVar1 = *(undefined4 *)(plStack_e50 + 1);
          *(byte *)(param_2 + 0x14d) = *(byte *)(param_2 + 0x14d) | 4;
          auVar11._4_4_ = uVar1;
          auVar11._0_4_ = uVar1;
          auVar11._8_4_ = uVar1;
          auVar11._12_4_ = uVar1;
          auVar7 = vblendps_avx(*(undefined1 (*) [16])(param_2 + 0xb0),auVar11,4);
          *(undefined1 (*) [16])(param_2 + 0xb0) = auVar7;
          *(undefined1 (*) [16])(param_2 + 0xc0) = auVar9._0_16_;
          FUN_144f63b80(param_2 + 0xc0,0);
        }
        FUN_144e510e0(&plStack_e50);
        uStack_298 = 0x80;
        auStack_2e0._12_4_ = 0;
        if ((auStack_2c8 != puStack_2d0) && (puStack_2d0 != (undefined1 *)0x0)) {
          func_0x000144d9c130();
        }
        auStack_2e0._8_4_ = 6;
        puStack_2d0 = (undefined1 *)0x0;
        FUN_144f67c80();
      }
    }
    else {
      FUN_1400e7bc0(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c),param_2);
    }
  }
  else {
    FUN_1400d12d0(param_1,param_2,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  }
  uStack_df8 = *(undefined8 *)(param_1 + 0x200);
  uStack_df0 = *(undefined8 *)(param_1 + 0x208);
  uStack_e08 = *(undefined8 *)(param_2 + 0xc0);
  uStack_e00 = *(undefined8 *)(param_2 + 200);
  FUN_144f63830(&puStack_8f8,&uStack_e08,&uStack_df8,*(undefined4 *)(param_2 + 0xec),
                (*(byte *)(param_1 + 0x91) & 4) >> 2);
  *(undefined8 **)(param_1 + 0x200) = puStack_8f8;
  *(undefined8 *)(param_1 + 0x208) = uStack_8f0;
  uVar4 = *(undefined8 *)(param_1 + 0x208);
  *(undefined8 *)(param_2 + 0xc0) = *(undefined8 *)(param_1 + 0x200);
  *(undefined8 *)(param_2 + 200) = uVar4;
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 == 0) {
    uVar4 = 0;
    bVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x680);
    bVar5 = (byte)(*(uint *)(lVar3 + 0x238) >> 0x15) & 4;
  }
  *(undefined8 *)(param_2 + 0xd8) = uVar4;
  *(byte *)(param_2 + 0x141) = *(byte *)(param_2 + 0x141) & 0xeb | bVar5;
  return;
}

