// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140039840  size: 907 bytes
// Name:    FUN_140039840
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e510e0, FUN_144f67c80, FUN_1400d0610, FUN_1451ae520
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140039840(ulonglong *param_1,undefined1 *param_2,undefined1 (*param_3) [16],undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  float fVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 **ppuStack_e30;
  undefined1 auStack_e28 [16];
  undefined8 uStack_e18;
  undefined4 uStack_e10;
  undefined1 uStack_e0c;
  undefined1 auStack_e08 [16];
  ulonglong uStack_df8;
  ulonglong uStack_df0;
  undefined8 uStack_de8;
  undefined *puStack_de0;
  undefined8 *puStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 uStack_dc0;
  undefined4 uStack_db8;
  uint uStack_db4;
  undefined2 uStack_db0;
  undefined6 uStack_dae;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined5 uStack_958;
  undefined3 uStack_953;
  undefined5 uStack_950;
  undefined8 uStack_94b;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 *puStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined1 auStack_8c0 [1024];
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined5 uStack_478;
  undefined3 uStack_473;
  undefined5 uStack_468;
  undefined3 uStack_463;
  float fStack_460;
  undefined1 uStack_45c;
  undefined8 uStack_45b;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined4 uStack_2d8;
  undefined1 auStack_2d0 [16];
  undefined1 *puStack_2c0;
  undefined1 auStack_2b8 [48];
  undefined8 uStack_288;
  undefined4 uStack_80;
  
  auVar7 = ZEXT1664(in_ZMM3._0_16_);
  uStack_2d8 = 0;
  auStack_2d0._0_12_ = ZEXT412(6) << 0x40;
  auStack_2d0._12_4_ = 0;
  uStack_288 = 0x80;
  uStack_80 = 0;
  puStack_2c0 = auStack_2b8;
  FUN_1451ae520(&puStack_dd8);
  auVar6 = auVar7._0_16_;
  if (*(char *)((longlong)puStack_dd8 + 0x1e) == '\x03') {
    puStack_8e8 = puStack_dd8;
    uStack_8e0 = uStack_dd0;
    uStack_8d8 = uStack_dc8;
    uStack_8d0 = uStack_dc0;
    uStack_8c8 = 0x100;
    if ((ulonglong)uStack_db4 != 0) {
      if (0x100 < uStack_db4) {
        uStack_8c8 = (ulonglong)uStack_db4;
      }
      auVar7 = ZEXT1664(auVar6);
      func_0x000145f40560(auStack_8c0,&uStack_db0,(ulonglong)uStack_db4 << 2);
      auVar6 = auVar7._0_16_;
      uStack_8c8 = CONCAT44(uStack_db4,(undefined4)uStack_8c8);
    }
    uStack_4a0 = uStack_990;
    uStack_498 = uStack_988;
    uStack_490 = uStack_980;
    uStack_488 = uStack_978;
    fStack_460 = (float)uStack_950;
    uStack_45c = (undefined1)((uint5)uStack_950 >> 0x20);
    uStack_45b = uStack_94b;
    uStack_480 = uStack_970;
    uStack_468 = uStack_958;
    uStack_463 = uStack_953;
    uStack_4c0 = uStack_9b0;
    uStack_4b8 = uStack_9a8;
    uStack_4b0 = uStack_9a0;
    uStack_4a8 = uStack_998;
    uStack_448 = uStack_938;
    uStack_440 = uStack_930;
    uStack_438 = uStack_928;
    uStack_430 = uStack_920;
    uStack_428 = uStack_918;
    uStack_420 = uStack_910;
    uStack_418 = uStack_908;
    uStack_410 = uStack_900;
    uStack_408 = uStack_8f8;
    uStack_400 = uStack_8f0;
  }
  else {
    func_0x000145f40560(&puStack_8e8,&puStack_dd8,0x4f0);
    auVar6 = auVar7._0_16_;
  }
  puStack_8e8 = &uStack_448;
  uStack_dae = 0;
  puStack_dd8 = (undefined8 *)0x0;
  uStack_dd0 = 0;
  uStack_dc8 = 0;
  uStack_dc0 = 0;
  auStack_e28 = ZEXT416(0) << 0x20;
  uStack_db8 = 0;
  uStack_db4 = 0xffffffff;
  uStack_db0 = 0xffff;
  uStack_e18 = 0x1ffffffff;
  uStack_e10 = 0;
  uStack_e0c = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *param_1;
  uVar9 = *param_1;
  uVar10 = param_1[1];
  auVar5 = vinsertps_avx(auVar5,ZEXT416(_DAT_14615af58),0x20);
  auVar5 = vinsertps_avx(auVar5,ZEXT416((uint)*param_1),0x30);
  auVar7 = ZEXT1664(auVar6);
  auVar8 = ZEXT1664(auVar5);
  ppuStack_e30 = &puStack_dd8;
  uVar4 = func_0x000144febb80(&puStack_8e8);
  auStack_e08 = auVar8._0_16_;
  uStack_df8 = uVar9;
  uStack_df0 = uVar10;
  func_0x0001451ae4b0(uVar4);
  auStack_2d0._0_8_ = &ppuStack_e30;
  func_0x000144f65500(puStack_8e8,&puStack_dd8,1,0);
  puStack_8e8[2] = &ppuStack_e30;
  uStack_de8 = 0;
  puStack_de0 = &UNK_142e7acd0;
  uStack_478 = (undefined5)param_5;
  uStack_473 = (undefined3)((ulonglong)param_5 >> 0x28);
  func_0x0001451ae490(&puStack_8e8);
  fVar2 = auVar7._0_4_;
  if (auVar7._0_4_ < 0.0) {
    uStack_468 = 0x80000000;
    uStack_463 = 0;
    fVar2 = fStack_460;
  }
  fStack_460 = fVar2;
  cVar3 = FUN_1400d0610(&puStack_8e8,0);
  if (cVar3 == '\0') {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    auVar7 = ZEXT1264(ZEXT812(0));
    if (param_3 != (undefined1 (*) [16])0x0) {
      auVar6._0_12_ = ZEXT812(0);
      auVar6._12_4_ = 0;
      *param_3 = auVar6;
    }
  }
  else {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    if (param_3 != (undefined1 (*) [16])0x0) {
      puVar1 = ppuStack_e30[3];
      *(undefined8 **)*param_3 = ppuStack_e30[2];
      *(undefined8 **)(*param_3 + 8) = puVar1;
    }
    auVar7 = ZEXT464(*(uint *)(ppuStack_e30 + 1));
  }
  FUN_144e510e0(&ppuStack_e30);
  uStack_288 = 0x80;
  auStack_2d0._12_4_ = 0;
  if ((auStack_2b8 != puStack_2c0) && (puStack_2c0 != (undefined1 *)0x0)) {
    func_0x000144d9c130();
  }
  auStack_2d0._8_4_ = 6;
  puStack_2c0 = (undefined1 *)0x0;
  FUN_144f67c80();
  return auVar7._0_8_;
}

