// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401a2420  size: 521 bytes
// Name:    FUN_1401a2420
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144dece10, FUN_1453b5ee0, FUN_140651480, FUN_1401a2ec0, FUN_1454128c0, FUN_145044e70, FUN_144d9d7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401a2420(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  undefined1 extraout_var [56];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  if (*(char *)(param_2 + 0x30) != '\x04') {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  lVar6 = func_0x000144dd9bc0(uVar1);
  if (lVar6 == 0) {
    cVar5 = func_0x000144f51b50(uVar1);
    if (cVar5 == '\0') {
      return;
    }
    cVar5 = func_0x0001451a37d0(uVar1);
    if (cVar5 != '\0') {
      return;
    }
    FUN_140651480(_DAT_14ab56e30,param_2,0x10002,0,1,5);
    return;
  }
  lVar6 = func_0x000144fbbe70(uVar1);
  if (lVar6 != 0) {
    auVar10 = *(undefined1 (*) [16])(param_2 + 0x70);
    auVar8 = vpunpckhwd_avx(auVar10,auVar10);
    auVar8 = vpsrad_avx(auVar8,0x10);
    auVar8 = vcvtdq2ps_avx(auVar8);
    auVar8 = vshufpd_avx(auVar8,auVar8,3);
    fStack_58 = auVar8._0_4_ * _DAT_146159c90 + auVar10._0_4_;
    fStack_54 = auVar8._4_4_ * _UNK_146159c94 + auVar10._4_4_;
    fStack_50 = auVar8._8_4_ * _UNK_146159c98 + auVar10._8_4_;
    fStack_4c = auVar8._12_4_ * _UNK_146159c9c + auVar10._12_4_;
    auVar11._0_8_ =
         FUN_145044e70(&fStack_58,*(undefined4 *)((ulonglong)DAT_1475a08b4 * 4 + 0x1475a08a8),
                       _DAT_145fc6f48);
    auVar11._8_56_ = extraout_var;
    auVar11 = ZEXT1664(auVar11._0_16_);
    fVar7 = (float)FUN_1453b5ee0(lVar6);
    lVar2 = _DAT_14ab56e38;
    if ((fVar7 < _DAT_146159ef4) && (*(char *)(lVar6 + 0x80) != '\x01')) {
      auVar10 = vcvtph2ps_f16c(ZEXT416(*(uint *)(*(longlong *)(lVar6 + 0x40) + 0xe4)));
      auVar10 = vhsubps_avx(auVar10,auVar10);
      if ((float)(auVar10._0_4_ & _DAT_145fc6f4c) < _DAT_146159ef4) {
        auVar11 = ZEXT1664(CONCAT124(auVar11._4_12_,
                                     auVar11._0_4_ /
                                     *(float *)((ulonglong)DAT_1475a08c4 * 4 + 0x1475a08b8)));
      }
    }
    if (_DAT_14ab56e38 != 0) {
      FUN_144dece10(&uStack_5c,_DAT_14ab56e38);
      FUN_144dece10(&uStack_60,param_2);
      bVar3 = FUN_144d9d7a0(uStack_5c,uStack_5a);
      bVar4 = FUN_144d9d7a0(uStack_60,uStack_5e);
      auVar10 = auVar11._0_16_;
      if ((bVar3 | bVar4) == 1) {
        if (bVar3 == 0) {
          bVar3 = *(byte *)(lVar6 + 100) & 8;
joined_r0x0001401a2592:
          if (bVar3 != 0) goto LAB_1401a25a7;
        }
        else if (bVar4 != 0) {
          bVar3 = FUN_1401a2ec0(*(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(lVar2 + 0xa0));
          auVar10 = auVar11._0_16_;
          goto joined_r0x0001401a2592;
        }
        auVar11 = ZEXT1664(CONCAT124(auVar10._4_12_,
                                     auVar10._0_4_ /
                                     *(float *)((ulonglong)DAT_1475a08d4 * 4 + 0x1475a08c8)));
      }
    }
LAB_1401a25a7:
    cVar5 = FUN_1454128c0(param_2,0xbef83f1b);
    uVar9 = auVar11._0_8_;
    if (cVar5 != '\0') goto LAB_1401a25bc;
  }
  uVar9 = 0;
LAB_1401a25bc:
  (**(code **)(*param_1 + 0x60))(param_1,param_2,0,uVar9,0x3f800000);
  return;
}

