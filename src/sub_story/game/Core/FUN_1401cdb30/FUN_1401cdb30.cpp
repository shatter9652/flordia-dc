// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401cdb30  size: 1004 bytes
// Name:    FUN_1401cdb30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db8cc, FUN_1455db934, FUN_145088850, FUN_1455dcc0c, FUN_1453da9b0, FUN_140ef42f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401cdb30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_GS_OFFSET;
  undefined8 uVar8;
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [64];
  undefined4 uStack_354;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined1 auStack_338 [16];
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 auStack_308 [16];
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [16];
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 auStack_268 [16];
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 auStack_e8 [32];
  undefined4 uStack_a8;
  undefined2 uStack_a4;
  undefined1 uStack_a2;
  
  auVar9 = ZEXT464(*(uint *)(*(longlong *)(param_1 + 0x128) + 0x340));
  uStack_350 = param_2;
  uStack_348 = param_3;
  uStack_340 = param_4;
  if (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 4
              ) < _DAT_149a9d630) {
    FUN_1455db8cc(&DAT_149a9d630);
    if (_DAT_149a9d630 == -1) {
      _DAT_149a9d608 = 0x200000002;
      _DAT_149a9d610 = _DAT_1465c3640;
      uRam0000000149a9d618 = _UNK_1465c3648;
      uRam0000000149a9d620 = _UNK_1465c3650;
      uRam0000000149a9d628 = _UNK_1465c3658;
      auVar9 = ZEXT1664(auVar9._0_16_);
      FUN_1455dcc0c(&UNK_1442a5930);
      FUN_1455db934(&DAT_149a9d630);
    }
  }
  func_0x000140869730(*(undefined8 *)(param_1 + 0x128),_DAT_146159bd4);
  uVar8 = auVar9._0_8_;
  iVar2 = *(int *)(param_1 + 0x8c);
  if ((longlong)iVar2 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x90);
    lVar5 = 0;
    do {
      pbVar1 = (byte *)(lVar6 + 0x134 + lVar5);
      *pbVar1 = *pbVar1 & 0xdf;
      lVar5 = lVar5 + 0x140;
    } while ((longlong)iVar2 * 0x140 != lVar5);
  }
  if (_DAT_149a9d60c != 0) {
    auVar10 = ZEXT464(_DAT_145fc6ed8);
    uVar12 = 0;
    uVar7 = 0;
    auVar15 = ZEXT1264(ZEXT812(0));
    uVar11 = _DAT_146159bc0;
    uVar13 = _DAT_14614f7f0;
    uVar14 = _UNK_14614f7f8;
    do {
      lVar6 = uVar7 * 0x10;
      func_0x000145f40560(auStack_298,uStack_340,0x200);
      auStack_338 = auVar10._0_16_;
      auStack_308 = auVar15._0_16_;
      uStack_280 = CONCAT44(uStack_280._4_4_,*(undefined4 *)(lVar6 + 0x149a9d614));
      uStack_278 = CONCAT44(uStack_278._4_4_,*(undefined4 *)(lVar6 + 0x149a9d618));
      uStack_328 = uVar11;
      uStack_320 = uVar12;
      uStack_318 = uVar13;
      uStack_310 = uVar14;
      FUN_1453da9b0(&uStack_2f8,auStack_338);
      auStack_338 = auVar10._0_16_;
      auStack_308 = auVar15._0_16_;
      uStack_218 = uStack_2f8;
      uStack_210 = uStack_2f0;
      uStack_208 = uStack_2e8;
      uStack_200 = uStack_2e0;
      uStack_1f8 = uStack_2d8;
      uStack_1f0 = uStack_2d0;
      uStack_1e8 = uStack_2c8;
      uStack_1e0 = uStack_2c0;
      uStack_1d8 = uStack_2b8;
      uStack_1d0 = uStack_2b0;
      uStack_1c8 = uStack_2a8;
      uStack_1c0 = uStack_2a0;
      auVar9 = ZEXT1664(auVar9._0_16_);
      auVar10 = ZEXT1664(auStack_338);
      auVar15 = ZEXT1664(auStack_308);
      uStack_328 = uVar11;
      uStack_320 = uVar12;
      uStack_318 = uVar13;
      uStack_310 = uVar14;
      FUN_1453da9b0(&uStack_2f8,auStack_338);
      uStack_a2 = uVar7 == 0;
      uStack_198 = uStack_2d8;
      uStack_190 = uStack_2d0;
      uStack_188 = uStack_2c8;
      uStack_180 = uStack_2c0;
      uStack_a8 = *(undefined4 *)(&DAT_149a9d610 + lVar6);
      uStack_1b8 = uStack_2f8;
      uStack_1b0 = uStack_2f0;
      uStack_1a8 = uStack_2e8;
      uStack_1a0 = uStack_2e0;
      uStack_178 = uStack_2b8;
      uStack_170 = uStack_2b0;
      uStack_168 = uStack_2a8;
      uStack_160 = uStack_2a0;
      auStack_e8 = ZEXT832(0) << 0x20;
      uStack_a4 = 0x101;
      auVar9 = ZEXT1664(auVar9._0_16_);
      auVar10 = ZEXT1664(auVar10._0_16_);
      auVar15 = ZEXT1664(auVar15._0_16_);
      FUN_145088850(param_1,uStack_350,uStack_348,auStack_298);
      if ((*(char *)(lVar6 + 0x149a9d61c) == '\x01') &&
         (iVar2 = *(int *)(param_1 + 0x8c), (longlong)iVar2 != 0)) {
        lVar6 = *(longlong *)(param_1 + 0x90);
        lVar5 = 0;
        do {
          uVar3 = *(undefined4 *)(lVar6 + 0xb8 + lVar5);
          cVar4 = func_0x00014508bf20(*(undefined8 *)(*(longlong *)(lVar6 + 0xb0 + lVar5) + 0x2f8));
          if (cVar4 != '\0') {
            uVar8 = *(undefined8 *)(param_1 + 0x128);
            func_0x000140019da0(uVar3,&uStack_354);
            FUN_140ef42f0(uVar8,uStack_354,0x7fffffff);
          }
          lVar5 = lVar5 + 0x140;
        } while ((longlong)iVar2 * 0x140 != lVar5);
      }
      uVar8 = auVar9._0_8_;
      uVar7 = uVar7 + 1;
    } while (uVar7 < _DAT_149a9d608 >> 0x20);
  }
  func_0x000140869730(*(undefined8 *)(param_1 + 0x128),uVar8);
  iVar2 = *(int *)(param_1 + 0x8c);
  if ((longlong)iVar2 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x90);
    lVar5 = 0;
    do {
      pbVar1 = (byte *)(lVar6 + 0x134 + lVar5);
      *pbVar1 = *pbVar1 | 0x28;
      lVar5 = lVar5 + 0x140;
    } while ((longlong)iVar2 * 0x140 != lVar5);
  }
  auStack_298 = ZEXT416(_DAT_145fc6ed8);
  uStack_288 = _DAT_146159bc0;
  uStack_280 = 0;
  uStack_278 = _DAT_14614f7f0;
  uStack_270 = _UNK_14614f7f8;
  auStack_268 = ZEXT816(0) << 0x20;
  func_0x0001408698d0(*(undefined8 *)(param_1 + 0x128));
  return;
}

