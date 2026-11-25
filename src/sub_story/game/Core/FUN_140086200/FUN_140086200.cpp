// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140086200  size: 760 bytes
// Name:    FUN_140086200
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ef4620, FUN_140086020, FUN_144dd7510, FUN_14037d510, FUN_140422040, FUN_1413ca700, FUN_1401331f0, FUN_140085ec0, FUN_140086070, FUN_144ef3e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_140086200(ulonglong param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [12];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [12];
  undefined4 uStack_7c;
  undefined1 auStack_78 [12];
  int iStack_6c;
  undefined8 uStack_68;
  byte bStack_58;
  
  param_1 = param_1 & 0xfffffffffffffff0;
  if (param_1 == 0) {
    fVar6 = 0.0;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    fVar14 = _DAT_145fc6ed8;
    if ((lVar3 != 0) && (lVar3 = FUN_1413ca700(param_1,lVar3), lVar3 != 0)) {
      FUN_1401331f0(&uStack_b8,param_1);
      lVar4 = FUN_144ef3e20(param_2);
      lVar5 = FUN_144ef4620(param_2);
      if (lVar5 == 0 && lVar4 != 0) {
        lVar5 = FUN_144dd7510(*(undefined4 *)(lVar4 + 0x9c));
      }
      fVar14 = _DAT_145fc6ed8;
      if (((lVar5 != 0) && (cVar2 = FUN_140086020(lVar5), cVar2 != '\0')) &&
         (lVar3 = func_0x000144f68b80(*(undefined4 *)(lVar3 + 0x9c)), lVar3 != 0)) {
        uStack_98 = 0;
        uStack_90 = 0x17;
        uStack_8c = 0;
        auStack_88._8_4_ = 0;
        auStack_88._0_8_ = SUB128(ZEXT812(0),4);
        uStack_7c = 0x1ffff;
        FUN_14037d510(auStack_78);
        iStack_6c = func_0x000144fd53c0();
        iStack_6c = iStack_6c + -0x240c8401;
        uStack_68 = 0;
        bStack_58 = bStack_58 & 0xf8;
        FUN_140085ec0(&uStack_98,lVar5,param_1);
        lVar3 = FUN_140086070(lVar3,uStack_b8,&uStack_98,0,1,1,1);
        if ((lVar3 == 0) ||
           (cVar2 = func_0x00014037d590(lVar3,&uStack_98), fVar14 = _DAT_145fc6edc, cVar2 == '\0'))
        {
          fVar14 = _DAT_145fc6ed8;
        }
      }
    }
    uStack_a8 = *(undefined8 *)(param_1 + 0x70);
    uStack_a0 = *(undefined8 *)(param_1 + 0x78);
    func_0x000144dc3790(&uStack_a8,&uStack_98);
    FUN_140422040(param_2,&uStack_b8);
    auVar10._4_12_ = auStack_b4;
    auVar10._0_4_ = uStack_b8;
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    auVar1._8_4_ = uStack_90;
    auVar1._0_8_ = uStack_98;
    auVar1._12_4_ = uStack_8c;
    auVar10 = vsubps_avx(auVar10,auVar1);
    auVar7._0_4_ = auVar10._0_4_ * auVar10._0_4_;
    auVar7._4_4_ = auVar10._4_4_ * auVar10._4_4_;
    auVar7._8_4_ = auVar10._8_4_ * auVar10._8_4_;
    auVar7._12_4_ = auVar10._12_4_ * auVar10._12_4_;
    auVar10 = vblendps_avx(auVar7,auVar9,8);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    auVar10 = vhaddps_avx(auVar10,auVar10);
    fVar8 = auVar10._0_4_;
    fVar6 = _DAT_14615ba84;
    if (fVar8 <= _DAT_146162494) {
      if (fVar8 <= _DAT_14615adb4) {
        if (fVar8 <= _DAT_14615aea0) {
          fVar6 = 0.0;
          if (_DAT_146159c58 < fVar8) {
            auVar12._0_12_ = ZEXT812(0);
            auVar12._12_4_ = 0;
            auVar10 = ZEXT416((uint)(SQRT(fVar8) * _DAT_14614f7d0 + _DAT_14615a5a4));
            auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar10);
            auVar10 = vcmpss_avx(auVar10,auVar12,1);
            fVar6 = (float)(~auVar10._0_4_ & (uint)(auVar1._0_4_ * _DAT_145fc6f88));
          }
        }
        else {
          auVar13._4_4_ = _DAT_145fc6f88;
          auVar13._0_4_ = _DAT_145fc6f88;
          auVar13._8_4_ = _DAT_145fc6f88;
          auVar13._12_4_ = _DAT_145fc6f88;
          auVar10 = ZEXT416((uint)(SQRT(fVar8) * _DAT_14615b6b4 + _DAT_14614f804));
          auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar10);
          auVar10 = vcmpss_avx(auVar10,ZEXT816(0) << 0x20,1);
          auVar10 = vblendvps_avx(ZEXT416((uint)(auVar1._0_4_ * _DAT_145fc6f88 + _DAT_145fc6f88)),
                                  auVar13,auVar10);
          fVar6 = auVar10._0_4_;
        }
      }
      else {
        auVar10 = ZEXT416((uint)(SQRT(fVar8) * _DAT_14615b6b4 + _DAT_146168ea4));
        auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar10);
        auVar10 = vcmpss_avx(auVar10,ZEXT816(0) << 0x20,1);
        auVar11._4_4_ = _DAT_14615a6b4;
        auVar11._0_4_ = _DAT_14615a6b4;
        auVar11._8_4_ = _DAT_14615a6b4;
        auVar11._12_4_ = _DAT_14615a6b4;
        auVar10 = vblendvps_avx(ZEXT416((uint)(auVar1._0_4_ * _DAT_145fc6f88 + _DAT_14615a6b4)),
                                auVar11,auVar10);
        fVar6 = auVar10._0_4_;
      }
    }
    fVar6 = fVar6 * fVar14;
  }
  return fVar6;
}

