// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004af20  size: 1160 bytes
// Name:    FUN_14004af20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1456ae320, FUN_1424e5d10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14004af20(longlong param_1,float param_2,undefined8 param_3,float param_4,char param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_register_00001344 [12];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 extraout_var [56];
  
  auVar18 = ZEXT1664(in_ZMM2._0_16_);
  if (0.0 < *(float *)(param_1 + 0x98)) {
    bVar2 = *(byte *)(param_1 + 0x8c);
    if ((bVar2 != 1) || (*(float *)(param_1 + 0x88) <= 0.0)) {
      auVar14 = ZEXT416((uint)(*(float *)(param_1 + 0x30) * _DAT_14615d5c0 + _DAT_14615d5c4));
      auVar12 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar14);
      auVar1._4_12_ = auVar12._4_12_;
      auVar1._0_4_ = auVar12._0_4_ * _DAT_146159cc0 + _DAT_145fc6ed8;
      auVar12._0_12_ = ZEXT812(0);
      auVar12._12_4_ = 0;
      auVar12 = vcmpss_avx(auVar14,auVar12,1);
      auVar14._4_4_ = _DAT_145fc6ed8;
      auVar14._0_4_ = _DAT_145fc6ed8;
      auVar14._8_4_ = _DAT_145fc6ed8;
      auVar14._12_4_ = _DAT_145fc6ed8;
      auVar12 = vblendvps_avx(auVar1,auVar14,auVar12);
      auVar19 = ZEXT1664(auVar12);
    }
    else {
      auVar19 = ZEXT464((uint)_DAT_145fc6ed8);
    }
    auVar19._0_4_ = -(param_4 * auVar19._0_4_) + *(float *)(param_1 + 0x88);
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    auVar12 = vmaxss_avx(auVar15,auVar19._0_16_);
    fVar16 = auVar12._0_4_;
    *(float *)(param_1 + 0x88) = fVar16;
    if ((fVar16 == 0.0) && (!NAN(fVar16))) {
      fVar16 = *(float *)(param_1 + 0xa8);
      auVar12 = vmaxss_avx(ZEXT416((uint)fVar16),
                           ZEXT416((uint)(*(float *)(param_1 + 0x98) + _DAT_146159ef0)));
      fVar6 = auVar12._0_4_;
      *(float *)(param_1 + 0x98) = fVar6;
      auVar12 = vminss_avx(ZEXT416((uint)*(float *)(param_1 + 0xa4)),
                           ZEXT416(*(uint *)(param_1 + 0x9c)));
      bVar2 = ~bVar2 & 0.0 < fVar6;
      fVar7 = auVar12._0_4_;
      *(float *)(param_1 + 0x9c) = fVar7;
      *(byte *)(param_1 + 0x8c) = bVar2;
      _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
      if (bVar2 != 0) {
        fVar6 = fVar6 - fVar16;
      }
      else {
        fVar6 = *(float *)(param_1 + 0xa4) - fVar7;
      }
      if (bVar2 == 0) {
        fVar16 = fVar7;
      }
      *(float *)(param_1 + 0x88) =
           fVar6 * _DAT_14615a2ac * (float)((uint)_DAT_146df5b88 & 0x7fff) + fVar16;
      *(byte *)(param_1 + 0x94) = bVar2;
      FUN_1424e5d10(param_1);
      bVar2 = *(byte *)(param_1 + 0x8c);
    }
    if ((bVar2 & 1) != 0) {
      auVar8._0_12_ = ZEXT812(0);
      auVar8._12_4_ = 0;
      auVar12 = vmaxss_avx(auVar8,ZEXT416((uint)(*(float *)(param_1 + 0x90) - param_4)));
      fVar16 = auVar12._0_4_;
      *(float *)(param_1 + 0x90) = fVar16;
      if ((fVar16 == 0.0) && (!NAN(fVar16))) {
        *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) ^ 1;
        FUN_1424e5d10(param_1);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  auVar5._0_8_ = func_0x00014004b3b0(*(undefined4 *)(param_1 + 0x54),*(undefined8 *)(param_1 + 0x58)
                                    );
  auVar5._8_56_ = extraout_var;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  fVar16 = (float)auVar5._0_8_;
  if (param_5 != '\x01' || fVar16 <= 0.0) {
    return;
  }
  fVar6 = fVar16 / 0.0;
  auVar4._4_12_ = auVar5._4_12_;
  auVar12 = vcmpss_avx(auVar18._0_16_,auVar11,4);
  auVar4._0_4_ = fVar16 / (float)(auVar18._0_4_ & _DAT_145fc6f4c);
  auVar13._4_4_ = _DAT_145fc6f50;
  auVar13._0_4_ = _DAT_145fc6f50;
  auVar13._8_4_ = _DAT_145fc6f50;
  auVar13._12_4_ = _DAT_145fc6f50;
  auVar12 = vblendvps_avx(auVar13,auVar4,auVar12);
  auVar18 = ZEXT1664(auVar12);
  if ((auVar12._0_4_ <= _DAT_145fc6ed8) &&
     ((*(char *)(param_1 + 0x8c) != '\x01' || (*(float *)(param_1 + 0x88) <= 0.0)))) {
    func_0x0001415f4810(param_1,auVar12._0_8_,0,_DAT_145fc7020);
    *(int *)(param_1 + 0x88) = auVar18._0_4_;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x8c) = 1;
    *(undefined2 *)(param_1 + 0x94) = 0x100;
    return;
  }
  if (((param_2 <= fVar6) || (*(char *)(param_1 + 0x94) != '\0')) ||
     ((*(char *)(param_1 + 0x8c) == '\0' && (0.0 < *(float *)(param_1 + 0x88))))) {
    if ((param_2 <= fVar6) && (*(char *)(param_1 + 0x95) == '\x01')) {
      func_0x000145b513e0(param_1);
      *(undefined1 *)(param_1 + 0x95) = 0;
    }
  }
  else {
    fVar17 = (param_2 - fVar6) / param_2;
    fVar7 = _DAT_145fc6ed8 - fVar17;
    lVar3 = FUN_1456ae320(param_1,param_2 - fVar6);
    fVar16 = *(float *)(lVar3 + 0x98);
    lVar3 = FUN_1456ae320(param_1);
    fVar16 = fVar17 * *(float *)(lVar3 + 0x9c) + fVar16;
    lVar3 = FUN_1456ae320(param_1);
    fVar16 = fVar16 - *(float *)(lVar3 + 0x98);
    _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
    auVar9._0_4_ = (float)((uint)_DAT_146df5b88 & 0x7fff);
    auVar9._4_12_ = in_register_00001344;
    auVar18 = ZEXT464((uint)(auVar9._0_4_ * _DAT_14615a2ac * fVar16 + *(float *)(lVar3 + 0x98)));
    fVar6 = _DAT_14615a2ac;
    lVar3 = FUN_1456ae320(param_1,auVar9._0_8_,fVar16);
    fVar16 = *(float *)(lVar3 + 0xa0);
    lVar3 = FUN_1456ae320(param_1);
    fVar16 = fVar17 * *(float *)(lVar3 + 0xa4) + fVar16;
    lVar3 = FUN_1456ae320(param_1);
    fVar16 = fVar16 - *(float *)(lVar3 + 0xa0);
    _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
    auVar10._0_4_ = (float)((uint)_DAT_146df5b88 & 0x7fff);
    auVar10._4_12_ = in_register_00001344;
    auVar19 = ZEXT464((uint)(auVar10._0_4_ * fVar6 * fVar16 + *(float *)(lVar3 + 0xa0)));
    lVar3 = FUN_1456ae320(param_1,auVar10._0_8_,fVar16);
    fVar16 = *(float *)(lVar3 + 0xa8);
    lVar3 = FUN_1456ae320(param_1);
    fVar16 = fVar7 * *(float *)(lVar3 + 0xac) + fVar16;
    lVar3 = FUN_1456ae320(param_1);
    _DAT_146df5b88 = (_DAT_146df5b88 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_146df5b88 >> 0x20);
    func_0x0001415f4810(param_1,auVar18._0_8_,
                        (float)((uint)_DAT_146df5b88 & 0x7fff) *
                        fVar6 * (fVar16 - *(float *)(lVar3 + 0xa8)) + *(float *)(lVar3 + 0xa8),
                        auVar19._0_8_);
    *(undefined1 *)(param_1 + 0x95) = 1;
  }
  return;
}

