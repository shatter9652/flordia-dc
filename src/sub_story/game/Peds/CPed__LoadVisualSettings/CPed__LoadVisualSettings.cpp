// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1415efd90  size: 3983 bytes
// Name:    CPed::LoadVisualSettings
// Subsystem: peds
// Class:   CPed
//
// Evidence:
//   GTAVSRC: CPed::LoadVisualSettings  (game/Peds/Ped.cpp)
//   literal: pedFpsLight.volumeColor
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14578eb20, FUN_14578ec10, ConfigLightSettings::Set, FUN_145534890, FUN_14501aca0, FUN_14578ea20, FUN_144fc21d0, FUN_1403a8ee0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"
#include "gta6decomp/CPed.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CPed__LoadVisualSettings(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  longlong lStack_1c0;
  undefined1 auStack_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [16];
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_128 [232];
  
  FUN_14501aca0(0x9d939ee4,0);
  FUN_14501aca0(0xb78b0532,0);
  FUN_14501aca0(0x1a4cebd6,0);
  FUN_14501aca0(0xdcd860fb,0);
  _DAT_147bb9518 = FUN_14501aca0(0x47b5b69a,0);
  _DAT_147bb951c = FUN_14501aca0(0x83c2b8f7,0);
  _DAT_147bb9520 = FUN_14501aca0(0xaf3c85a2,0);
  fVar7 = (float)FUN_14501aca0(0x61ac37cb,0);
  _DAT_147bb9514 = (int)fVar7;
  _DAT_147bb9524 = FUN_14501aca0(0x62d0e634,0);
  _DAT_147bb9528 = (float)FUN_14501aca0(0x99874b50,0);
  fVar7 = (float)FUN_14501aca0(0x3a608358,0);
  auVar9 = ZEXT464((uint)_DAT_145fc6ed8);
  _DAT_147bb952c = _DAT_145fc6ed8 / (fVar7 - _DAT_147bb9528);
  FUN_14501aca0(0x8197b1e4,0);
  _DAT_147bb9530 = FUN_14501aca0(0x6887f67a,_DAT_14615a5c8);
  auVar8 = ZEXT464(_DAT_145fc6edc);
  _DAT_147bb9534 = FUN_14501aca0(0x58f29eb2,_DAT_145fc6edc);
  _DAT_147bb9538 = FUN_14501aca0(0x20d1b775,_DAT_146159cc0);
  auVar11 = ZEXT464(_DAT_146159bd0);
  _DAT_147bb950c = FUN_14501aca0(0xb7694af5,_DAT_146159bd0);
  _DAT_147bb9508 = FUN_14501aca0(0xbbe70c6e,_DAT_146159c64);
  _DAT_14694b0b4 = FUN_14501aca0(0xa52027f9,_DAT_14694b0b4);
  func_0x00014578eae0();
  ConfigLightSettings__Set(0x147bb9540,&UNK_14677a78b);
  _DAT_147bb9590 = FUN_14501aca0(0xc6ec71f3,0);
  _DAT_147bb9594 = FUN_14501aca0(0x40a25df7,0);
  _DAT_147bb9598 = FUN_14501aca0(0x3194d499,0);
  auStack_178._0_12_ = ZEXT812(0);
  auStack_178._12_4_ = 0;
  auVar10 = ZEXT1664(auStack_178);
  FUN_14578eb20(&uStack_168,&UNK_14677d60b);
  _DAT_147bb95a0 = uStack_168;
  uRam0000000147bb95a8 = uStack_160;
  _DAT_147bb95b0 = FUN_14501aca0(0x889420f0,0);
  _DAT_147bb95b4 = FUN_14501aca0(0xed3d6872,0);
  _DAT_147bb95b8 = FUN_14501aca0(0xddde0acb,0);
  ConfigLightSettings__Set(0x147bb95c0,&UNK_14677a809);
  _DAT_147bb9610 = FUN_14501aca0(0xa265d7a2,0);
  _DAT_147bb9614 = FUN_14501aca0(0xb30abbb0,0);
  _DAT_147bb9618 = FUN_14501aca0(0x5cb39b84,0);
  auStack_188 = auVar10._0_16_;
  FUN_14578eb20(&uStack_168,&UNK_14677d5f3);
  _DAT_147bb9620 = uStack_168;
  uRam0000000147bb9628 = uStack_160;
  _DAT_147bb9630 = FUN_14501aca0(0x6697d0ee,0);
  _DAT_147bb9634 = FUN_14501aca0(0x499b45e4,0);
  _DAT_147bb9638 = FUN_14501aca0(0x426237ff,0);
  _DAT_147bb8ca0 = FUN_14501aca0(0xecc5bb60,auVar9._0_8_);
  _DAT_147bb8ca4 = FUN_14501aca0(0x8b87220a,_DAT_14615b980);
  _DAT_147bb8ca8 = FUN_14501aca0(0xf37b0366,auVar11._0_8_);
  _DAT_147bb8cac = FUN_14501aca0(0xd65c71bf,_DAT_146159d50);
  auVar14 = ZEXT464(_DAT_146159ef4);
  _DAT_147bb8cb4 = FUN_14501aca0(0x4ed01bfb,_DAT_146159ef4);
  _DAT_147bb8cb8 = FUN_14501aca0(0x7e01d4db,_DAT_146159bd4);
  _DAT_147bb8cbc = FUN_14501aca0(0x2f8fb2bd,_DAT_146159cb0);
  auVar13 = ZEXT464(_DAT_14615a200);
  _DAT_147bb8cc0 = FUN_14501aca0(0xba467f21,_DAT_14615a200);
  _DAT_147bb8cb0 = FUN_14501aca0(0x7c7030b1,auVar8._0_8_);
  _DAT_147bb8ccc = FUN_14501aca0(0xef910c2b,auVar14._0_8_);
  _DAT_147bb8cd0 = FUN_14501aca0(0x50355d3f,_DAT_145fc6f90);
  auVar12 = ZEXT464(_DAT_145fc6f98);
  _DAT_147bb8cd4 = FUN_14501aca0(0xf5954571,_DAT_145fc6f98);
  _DAT_147bb8cd8 = FUN_14501aca0(0x4b50b305,auVar8._0_8_);
  auVar15 = ZEXT464(_DAT_145fc7020);
  _DAT_147bb8cdc = FUN_14501aca0(0xb2b3e153,_DAT_145fc7020);
  auVar16 = ZEXT464(_DAT_14615ae90);
  _DAT_147bb8ce0 = FUN_14501aca0(0xeda31bc,_DAT_14615ae90);
  _DAT_147bb8ce4 = FUN_14501aca0(0xdf0debf1,auVar15._0_8_);
  _DAT_147bb8ce8 = FUN_14501aca0(0x31fc0f6e,auVar16._0_8_);
  _DAT_147bb8cec = FUN_14501aca0(0x7e00d4d5,auVar13._0_8_);
  _DAT_147bb8cf0 = FUN_14501aca0(0x306e43a2,auVar9._0_8_);
  auVar17 = ZEXT464(_DAT_14615b74c);
  _DAT_147bb8cf4 = FUN_14501aca0(0x2fe3334,_DAT_14615b74c);
  _DAT_147bb8cf8 = FUN_14501aca0(0x2084bba2,auVar8._0_8_);
  _DAT_147bb8cfc = FUN_14501aca0(0xa94765bb,auVar9._0_8_);
  _DAT_147bb8d00 = FUN_14501aca0(0x8b02094c,auVar9._0_8_);
  _DAT_147bb8d04 = FUN_14501aca0(0x93263392,auVar9._0_8_);
  _DAT_147bb8d08 = FUN_14501aca0(0xd20f92ff,0);
  _DAT_147bb8d0c = FUN_14501aca0(0xe7a85fa2,0);
  auVar10 = ZEXT464(_DAT_146159c54);
  fVar7 = (float)FUN_14501aca0(0x6b503160,_DAT_146159c54);
  auVar11 = ZEXT464(_DAT_146159fe4);
  _DAT_147bb8cc4 = (undefined4)(longlong)fVar7;
  fVar7 = (float)FUN_14501aca0(0x6452bda,_DAT_146159fe4);
  _DAT_147bb8cc8 = (undefined4)(longlong)fVar7;
  _DAT_147bb8d10 = FUN_14501aca0(0xd06273b5,auVar9._0_8_);
  _DAT_147bb8d14 = FUN_14501aca0(0xfbe63f20,_DAT_14615b980);
  _DAT_147bb8d18 = FUN_14501aca0(0x7db1c060,_DAT_146159bd0);
  _DAT_147bb8d1c = FUN_14501aca0(0x858892dd,_DAT_146159d50);
  _DAT_147bb8d24 = FUN_14501aca0(0x97725602,auVar14._0_8_);
  _DAT_147bb8d28 = FUN_14501aca0(0x81a6506,_DAT_146159bd4);
  _DAT_147bb8d2c = FUN_14501aca0(0xa3d9b7a2,_DAT_146159cb0);
  _DAT_147bb8d30 = FUN_14501aca0(0x4f139462,auVar13._0_8_);
  _DAT_147bb8d20 = FUN_14501aca0(0xf2ccfe3a,auVar8._0_8_);
  _DAT_147bb8d3c = FUN_14501aca0(0x60dca013,auVar14._0_8_);
  _DAT_147bb8d40 = FUN_14501aca0(0x4aac4444,_DAT_145fc6f90);
  _DAT_147bb8d44 = FUN_14501aca0(0xccbcf5af,auVar12._0_8_);
  _DAT_147bb8d48 = FUN_14501aca0(0x7b45a8b7,auVar8._0_8_);
  _DAT_147bb8d4c = FUN_14501aca0(0x1a0297ea,auVar15._0_8_);
  _DAT_147bb8d50 = FUN_14501aca0(0x2dbce8c,auVar16._0_8_);
  _DAT_147bb8d54 = FUN_14501aca0(0xb4e449d9,auVar15._0_8_);
  _DAT_147bb8d58 = FUN_14501aca0(0x8d9d4f8b,auVar16._0_8_);
  _DAT_147bb8d5c = FUN_14501aca0(0xa10f2054,auVar13._0_8_);
  _DAT_147bb8d60 = FUN_14501aca0(0x4894a109,auVar9._0_8_);
  _DAT_147bb8d64 = FUN_14501aca0(0x22d3d374,auVar17._0_8_);
  _DAT_147bb8d68 = FUN_14501aca0(0x3d851a1b,auVar8._0_8_);
  _DAT_147bb8d6c = FUN_14501aca0(0xc6bc9664,auVar9._0_8_);
  _DAT_147bb8d70 = FUN_14501aca0(0x9ada0a66,auVar9._0_8_);
  _DAT_147bb8d74 = FUN_14501aca0(0xa3204f88,auVar9._0_8_);
  _DAT_147bb8d78 = FUN_14501aca0(0x3f7c352,0);
  fVar7 = (float)FUN_14501aca0(0x7e19978c,auVar10._0_8_);
  _DAT_147bb8d34 = (undefined4)(longlong)fVar7;
  fVar7 = (float)FUN_14501aca0(0x4e3a5407,auVar11._0_8_);
  _DAT_147bb8d38 = (undefined4)(longlong)fVar7;
  _DAT_147bb9640 = FUN_14501aca0(0xf633b52,_DAT_14615b980);
  _DAT_147bb9644 = FUN_14501aca0(0x4697466e,0);
  _DAT_14694b098 = FUN_14501aca0(0x33e0a4d2,_DAT_14615a7f8);
  _DAT_14694b09c = FUN_14501aca0(0x75b9c5a8,_DAT_146159d50);
  _DAT_14694b0a0 = FUN_14501aca0(0xbf4e7727,auVar8._0_8_);
  _DAT_14694b0a4 = FUN_14501aca0(0xc57a0c46,auVar9._0_8_);
  _DAT_14694b0a8 = FUN_14501aca0(0x5b490893,auVar8._0_8_);
  _DAT_14694b0ac = FUN_14501aca0(0xe362bb55,_DAT_146159fa0);
  _DAT_146dd58b4 = FUN_14501aca0(0xb885fd63,auVar8._0_8_);
  _DAT_14694b0b0 = (float)FUN_14501aca0(0xdb915fa4,_DAT_146159e20);
  _DAT_14694b0b0 = _DAT_14694b0b0 * _DAT_146159c28;
  if (_DAT_147bb9500 == 0) {
    _DAT_147bb9500 = func_0x000144f97130(0x300);
  }
  FUN_14578ec10(0x147bb9440,&UNK_146784b7d);
  auVar8 = ZEXT464(_DAT_146164994);
  FUN_14501aca0(0xde5e62cf,_DAT_146164994);
  FUN_14501aca0(0x8b95bd3f,auVar8._0_8_);
  FUN_14501aca0(0xc2f0abf4,auVar8._0_8_);
  FUN_14501aca0(0x9411a63a,0);
  auVar8 = ZEXT464(_DAT_146159c58);
  lVar6 = 0;
  auVar9 = ZEXT1264(ZEXT812(0));
  do {
    FUN_1403a8ee0(&uStack_168,0x40,&UNK_14677cfa8,*(undefined8 *)(&UNK_1463058a0 + lVar6 * 8));
    lStack_1c0 = lVar6;
    if (lVar6 == 1) {
      FUN_145534890(auStack_128,&UNK_14677ce03,&uStack_168);
      FUN_14578ec10(0x147bb8e40,auStack_128);
      FUN_145534890(auStack_128,&UNK_146785a7a,&uStack_168);
      auStack_198 = auVar9._0_16_;
      FUN_14578ea20(&uStack_1d8,auStack_128,auStack_198);
      lVar6 = _DAT_147bb9500;
      *(undefined8 *)(_DAT_147bb9500 + 0x100) = uStack_1d8;
      *(undefined8 *)(lVar6 + 0x108) = uStack_1d0;
      FUN_145534890(auStack_128,&UNK_146780a6b,&uStack_168);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      uVar3 = FUN_14501aca0(uVar3,0);
      *(undefined4 *)(_DAT_147bb9500 + 0x110) = uVar3;
      FUN_145534890(auStack_128,&UNK_1467809cc,&uStack_168);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      uVar3 = FUN_14501aca0(uVar3,0);
      *(undefined4 *)(_DAT_147bb9500 + 0x114) = uVar3;
      FUN_145534890(auStack_128,&UNK_146780a1d,&uStack_168);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      uVar3 = FUN_14501aca0(uVar3,0);
      lVar6 = 1;
      *(undefined4 *)(_DAT_147bb9500 + 0x118) = uVar3;
    }
    else {
      FUN_145534890(auStack_128,&UNK_14677cdf6,&uStack_168);
      FUN_14578ec10(lVar6 * 0xc0 + 0x147bb8d80,auStack_128);
      FUN_145534890(auStack_128,&UNK_146785a69,&uStack_168);
      auStack_1a8 = auVar9._0_16_;
      FUN_14578ea20(&uStack_1d8,auStack_128,auStack_1a8);
      lVar5 = lVar6 * 0x100;
      puVar1 = (undefined8 *)(_DAT_147bb9500 + lVar5);
      *puVar1 = uStack_1d8;
      puVar1[1] = uStack_1d0;
      FUN_145534890(auStack_128,&UNK_146780a51,&uStack_168);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      uVar3 = FUN_14501aca0(uVar3,0);
      *(undefined4 *)(_DAT_147bb9500 + 0x10 + lVar5) = uVar3;
      FUN_145534890(auStack_128,&UNK_1467809b1,&uStack_168);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      uVar3 = FUN_14501aca0(uVar3,0);
      *(undefined4 *)(_DAT_147bb9500 + 0x14 + lVar5) = uVar3;
      FUN_145534890(auStack_128,&UNK_146780a01,&uStack_168);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      uVar3 = FUN_14501aca0(uVar3,0);
      *(undefined4 *)(_DAT_147bb9500 + 0x18 + lVar5) = uVar3;
    }
    FUN_145534890(auStack_128,&UNK_14677cdea,&uStack_168);
    FUN_14578ec10(lVar6 * 0xc0 + 0x147bb8fc0,auStack_128);
    FUN_145534890(auStack_128,&UNK_146785a59,&uStack_168);
    auStack_1b8 = auVar9._0_16_;
    FUN_14578ea20(&uStack_1d8,auStack_128,auStack_1b8);
    lVar6 = lVar6 * 0x100;
    puVar1 = (undefined8 *)(_DAT_147bb9500 + 0x20 + lVar6);
    *puVar1 = uStack_1d8;
    puVar1[1] = uStack_1d0;
    FUN_145534890(auStack_128,&UNK_146780a38,&uStack_168);
    uVar3 = FUN_144fc21d0(auStack_128,0);
    uVar3 = FUN_14501aca0(uVar3,0);
    *(undefined4 *)(_DAT_147bb9500 + 0x30 + lVar6) = uVar3;
    FUN_145534890(auStack_128,&UNK_146780997,&uStack_168);
    uVar3 = FUN_144fc21d0(auStack_128,0);
    uVar3 = FUN_14501aca0(uVar3,0);
    *(undefined4 *)(_DAT_147bb9500 + 0x34 + lVar6) = uVar3;
    FUN_145534890(auStack_128,&UNK_1467809e6,&uStack_168);
    uVar3 = FUN_144fc21d0(auStack_128,0);
    uVar3 = FUN_14501aca0(uVar3,0);
    *(undefined4 *)(_DAT_147bb9500 + 0x38 + lVar6) = uVar3;
    FUN_145534890(auStack_128,&UNK_14677ce71,&uStack_168);
    uVar3 = FUN_144fc21d0(auStack_128,0);
    uVar3 = FUN_14501aca0(uVar3,0);
    lVar5 = 0;
    *(undefined4 *)(_DAT_147bb9500 + 0x3c + lVar6) = uVar3;
    do {
      uVar2 = *(undefined8 *)(&UNK_146303320 + lVar5);
      FUN_145534890(auStack_128,&UNK_14677ce5c,&uStack_168,uVar2);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      uVar3 = FUN_14501aca0(uVar3,0);
      *(undefined4 *)(_DAT_147bb9500 + 0x40 + lVar6) = uVar3;
      FUN_145534890(auStack_128,&UNK_14677ce49,&uStack_168,uVar2);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      uVar3 = FUN_14501aca0(uVar3,0);
      *(undefined4 *)(_DAT_147bb9500 + 0x44 + lVar6) = uVar3;
      FUN_145534890(auStack_128,&UNK_14677ce8c,&uStack_168,uVar2);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      fVar7 = (float)FUN_14501aca0(uVar3,0);
      iVar4 = (int)fVar7 * 100;
      if ((int)fVar7 < 0) {
        iVar4 = 0;
      }
      *(int *)(_DAT_147bb9500 + 0x4c + lVar6) = iVar4;
      FUN_145534890(auStack_128,&UNK_14677cdd3,&uStack_168,uVar2);
      uVar3 = FUN_144fc21d0(auStack_128,0);
      fVar7 = (float)FUN_14501aca0(uVar3,auVar8._0_8_);
      iVar4 = (int)fVar7 * 100;
      if ((int)fVar7 < 0) {
        iVar4 = 10000;
      }
      lVar5 = lVar5 + 8;
      *(int *)(_DAT_147bb9500 + 0x50 + lVar6) = iVar4;
      lVar6 = lVar6 + 0x14;
    } while (lVar5 != 0x48);
    lVar6 = lStack_1c0 + 1;
  } while (lVar6 != 3);
  func_0x00014578f1f0();
  return;
}

