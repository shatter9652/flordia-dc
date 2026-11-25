// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140084520  size: 465 bytes
// Name:    FUN_140084520
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1424a6990, FUN_144efb3d0, FUN_1400847e0, FUN_144efb3a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140084520(longlong param_1,float *param_2,ulonglong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  undefined1 auVar10 [16];
  float fVar13;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  cVar6 = func_0x000140084700(param_3);
  if (cVar6 == '\0') {
    if ((int)param_3 < 0) {
      lVar7 = func_0x000145073c10();
      auVar1 = *(undefined1 (*) [16])(lVar7 + 0x1b0);
      uVar8 = *(undefined8 *)(lVar7 + 0x1a0);
      auVar10 = vpunpckhwd_avx(auVar1,auVar1);
      auVar10 = vpsrad_avx(auVar10,0x10);
      auVar10 = vcvtdq2ps_avx(auVar10);
      auVar10 = vshufpd_avx(auVar10,auVar10,3);
      fVar13 = auVar10._0_4_ * _DAT_146159c90;
      fVar12 = auVar10._4_4_ * _UNK_146159c94;
      fVar11 = auVar10._8_4_ * _UNK_146159c98;
      fVar9 = auVar10._12_4_ * _UNK_146159c9c;
      uVar2 = *(undefined8 *)(lVar7 + 0x180);
      uVar3 = *(undefined8 *)(lVar7 + 0x188);
      uVar4 = *(undefined8 *)(lVar7 + 400);
      uVar5 = *(undefined8 *)(lVar7 + 0x198);
      param_4[5] = *(undefined8 *)(lVar7 + 0x1a8);
      param_4[4] = uVar8;
      *param_4 = uVar2;
      param_4[1] = uVar3;
      param_4[2] = uVar4;
      param_4[3] = uVar5;
      *(float *)(param_4 + 6) = fVar13 + auVar1._0_4_;
      *(float *)((longlong)param_4 + 0x34) = fVar12 + auVar1._4_4_;
      *(float *)(param_4 + 7) = fVar11 + auVar1._8_4_;
      *(float *)((longlong)param_4 + 0x3c) = fVar9 + auVar1._12_4_;
      return;
    }
    if (*(char *)(param_1 + 0x30) == '\x03') {
      FUN_144efb3d0(param_1,param_4);
      if ((param_3 >> 0x2d & 1) != 0) {
        uStack_88 = *(undefined8 *)(param_1 + 0x70);
        uStack_80 = *(undefined8 *)(param_1 + 0x78);
        func_0x000144dc3790(&uStack_88,auStack_68);
        uVar8 = func_0x00014399d990();
        FUN_1424a6990(param_1,uVar8,param_4);
      }
      cVar6 = FUN_144efb3a0(*(undefined4 *)(param_1 + 0x9c),1);
      if ((param_3 >> 0x20 & 1) == 0) {
        return;
      }
      if (cVar6 == '\0') {
        return;
      }
      uStack_78 = *(undefined8 *)param_2;
      uStack_70 = *(undefined8 *)(param_2 + 2);
      FUN_1400847e0(param_1,param_4,&uStack_78,param_5);
      return;
    }
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
    auVar10 = vpunpckhwd_avx(auVar1,auVar1);
    auVar10 = vpsrad_avx(auVar10,0x10);
    auVar10 = vcvtdq2ps_avx(auVar10);
    auVar10 = vshufpd_avx(auVar10,auVar10,3);
    fVar9 = auVar10._0_4_ * _DAT_146159c90 + auVar1._0_4_;
    fVar11 = auVar10._4_4_ * _UNK_146159c94 + auVar1._4_4_;
    fVar12 = auVar10._8_4_ * _UNK_146159c98 + auVar1._8_4_;
    fVar13 = auVar10._12_4_ * _UNK_146159c9c + auVar1._12_4_;
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    param_4[4] = *(undefined8 *)(param_1 + 0x60);
    param_4[5] = *(undefined8 *)(param_1 + 0x68);
    *param_4 = uVar8;
    param_4[1] = uVar2;
    param_4[2] = uVar3;
    param_4[3] = uVar4;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
    auVar10 = vpunpckhwd_avx(auVar1,auVar1);
    auVar10 = vpsrad_avx(auVar10,0x10);
    auVar10 = vcvtdq2ps_avx(auVar10);
    auVar10 = vshufpd_avx(auVar10,auVar10,3);
    fVar13 = auVar10._0_4_ * _DAT_146159c90;
    fVar12 = auVar10._4_4_ * _UNK_146159c94;
    fVar11 = auVar10._8_4_ * _UNK_146159c98;
    fVar9 = auVar10._12_4_ * _UNK_146159c9c;
    uVar8 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    param_4[4] = *(undefined8 *)(param_1 + 0x60);
    param_4[5] = *(undefined8 *)(param_1 + 0x68);
    *param_4 = uVar8;
    param_4[1] = uVar2;
    param_4[2] = uVar3;
    param_4[3] = uVar4;
    *(float *)(param_4 + 6) = fVar13 + auVar1._0_4_;
    *(float *)((longlong)param_4 + 0x34) = fVar12 + auVar1._4_4_;
    *(float *)(param_4 + 7) = fVar11 + auVar1._8_4_;
    *(float *)((longlong)param_4 + 0x3c) = fVar9 + auVar1._12_4_;
    func_0x000140084790(&fStack_58,param_3);
    fVar9 = fStack_58 * _DAT_146159bd4 + *param_2;
    fVar11 = fStack_54 * _DAT_146159bd4 + param_2[1];
    fVar12 = fStack_50 * _DAT_146159bd4 + param_2[2];
    fVar13 = fStack_4c * _DAT_146159bd4 + param_2[3];
  }
  *(float *)(param_4 + 6) = fVar9;
  *(float *)((longlong)param_4 + 0x34) = fVar11;
  *(float *)(param_4 + 7) = fVar12;
  *(float *)((longlong)param_4 + 0x3c) = fVar13;
  return;
}

