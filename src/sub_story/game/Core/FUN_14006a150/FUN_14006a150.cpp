// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006a150  size: 573 bytes
// Name:    FUN_14006a150
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fe3300, FUN_144dc7ae0, FUN_144fe3370, FUN_14000bae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14006a150(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar11;
  undefined1 auVar10 [64];
  undefined1 auVar12 [64];
  undefined1 auStack_160 [4];
  float fStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 auStack_150 [4];
  float fStack_14c;
  longlong lStack_148;
  longlong lStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  longlong lStack_118;
  longlong lStack_110;
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 uStack_b8;
  undefined2 uStack_b7;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  undefined8 uStack_a4;
  undefined8 uStack_9c;
  undefined1 auStack_88 [8];
  float fStack_80;
  float fStack_7c;
  
  lVar4 = func_0x000144e24670(*(undefined4 *)(param_1 + 0x9c));
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar4 + 0x700);
    lStack_118 = param_2[0xe];
    lStack_110 = param_2[0xf];
    iVar9 = *(int *)(lVar1 + 0x15f4);
    iVar11 = iVar9;
    func_0x000144dc3790(&lStack_118,auStack_d8);
    uStack_b4 = CONCAT44(iVar11 + _UNK_1461686d4,iVar9 + _DAT_1461686d0);
    uVar5 = 0;
    auStack_c8._0_12_ = ZEXT812(0);
    auStack_c8._12_4_ = 0;
    uStack_a8 = 0;
    uStack_a4 = 0xffffffffffffffff;
    uStack_9c = 0;
    uStack_b8 = 0;
    _auStack_88 = ZEXT432(0) << 0x20;
    uStack_ac = 0;
    uStack_b7 = 0;
    FUN_14000bae0(lVar1,auStack_e8,auStack_d8);
    auVar10 = ZEXT1664(auStack_e8);
    auVar2 = vcmpps_avx(auStack_e8,_DAT_14614f7f0,0);
    uVar3 = vmovmskps_avx(auVar2);
    if ((~(byte)uVar3 & 7) != 0) {
      FUN_144fe3370(param_1,&fStack_14c,auStack_150,1);
      auVar2 = vmovshdup_avx(auVar10._0_16_);
      auVar7._0_4_ = auVar10._0_4_ ^ _DAT_145fc6f10;
      auVar7._4_4_ = auVar10._4_4_ ^ _DAT_145fc6f10;
      auVar7._8_4_ = auVar10._8_4_ ^ _DAT_145fc6f10;
      auVar7._12_4_ = auVar10._12_4_ ^ _DAT_145fc6f10;
      auVar7 = vunpcklps_avx(auVar2,auVar7);
      auVar2 = vshufps_avx(auVar7,auVar10._0_16_,100);
      auVar12 = ZEXT1664(auVar2);
      fVar6 = (float)(**(code **)(**(longlong **)(lVar4 + 0x700) + 0x98))(auVar7._0_8_);
      auVar12 = ZEXT1664(CONCAT412(auVar12._12_4_ * fVar6 + fStack_7c,
                                   CONCAT48(auVar12._8_4_ * fVar6 + fStack_80,
                                            CONCAT44(auVar12._4_4_ * fVar6 + (float)auStack_88._4_4_
                                                     ,auVar12._0_4_ * fVar6 +
                                                      (float)auStack_88._0_4_))));
      FUN_144fe3300(param_2,&uStack_154,&uStack_158);
      (**(code **)(*param_2 + 0x470))(param_2,&uStack_f8,0);
      auStack_138 = auVar10._0_16_;
      uStack_128 = uStack_f8;
      uStack_120 = uStack_f0;
      FUN_144dc7ae0(uStack_154,uStack_158,&uStack_128,auStack_138,&fStack_15c,auStack_160);
      fVar6 = fStack_14c * _DAT_145fc6edc + fStack_15c;
      lStack_148 = param_2[0xe];
      lStack_140 = param_2[0xf];
      func_0x000144dc3790(&lStack_148,auStack_108);
      auVar2 = vsubps_avx(auVar12._0_16_,auStack_108);
      auVar8._0_4_ = auVar2._0_4_ * auVar2._0_4_;
      auVar8._4_4_ = auVar2._4_4_ * auVar2._4_4_;
      auVar8._8_4_ = auVar2._8_4_ * auVar2._8_4_;
      auVar8._12_4_ = auVar2._12_4_ * auVar2._12_4_;
      auVar2 = vhaddps_avx(auVar8,auVar8);
      uVar5 = CONCAT71((int7)((ulonglong)&fStack_14c >> 8),auVar2._0_4_ <= fVar6 * fVar6);
    }
  }
  return uVar5 & 0xffffffff;
}

