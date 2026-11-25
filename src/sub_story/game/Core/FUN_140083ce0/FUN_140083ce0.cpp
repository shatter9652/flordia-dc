// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083ce0  size: 356 bytes
// Name:    FUN_140083ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140422040
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140083ce0(ulonglong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  param_1 = param_1 & 0xfffffffffffffff0;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_40 = *(undefined8 *)(param_1 + 0x78);
    func_0x000144dc3790(&uStack_48,auStack_28);
    FUN_140422040(param_2,auStack_38);
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    auVar5 = vsubps_avx(auStack_38,auStack_28);
    auVar2._0_4_ = auVar5._0_4_ * auVar5._0_4_;
    auVar2._4_4_ = auVar5._4_4_ * auVar5._4_4_;
    auVar2._8_4_ = auVar5._8_4_ * auVar5._8_4_;
    auVar2._12_4_ = auVar5._12_4_ * auVar5._12_4_;
    auVar5 = vblendps_avx(auVar2,auVar4,8);
    auVar5 = vhaddps_avx(auVar5,auVar5);
    auVar5 = vhaddps_avx(auVar5,auVar5);
    fVar3 = auVar5._0_4_;
    if (fVar3 <= _DAT_14615ada0) {
      if (fVar3 <= _DAT_146159c58) {
        if (fVar3 <= _DAT_14615a7f8) {
          uVar1 = 0;
          if (_DAT_14615ba80 < fVar3) {
            auVar7._0_12_ = ZEXT812(0);
            auVar7._12_4_ = 0;
            auVar5 = ZEXT416((uint)(SQRT(fVar3) * _DAT_145fc6edc + _DAT_14615b7a0));
            auVar2 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar5);
            auVar5 = vcmpss_avx(auVar5,auVar7,1);
            uVar1 = CONCAT44(~auVar5._4_4_ & auVar2._4_4_,~auVar5._0_4_ & auVar2._0_4_);
          }
        }
        else {
          auVar8._4_4_ = _DAT_145fc6ed8;
          auVar8._0_4_ = _DAT_145fc6ed8;
          auVar8._8_4_ = _DAT_145fc6ed8;
          auVar8._12_4_ = _DAT_145fc6ed8;
          auVar5 = ZEXT416((uint)(SQRT(fVar3) * _DAT_146159f8c + _DAT_145fc6f48));
          auVar2 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar5);
          auVar5 = vcmpss_avx(auVar5,ZEXT816(0) << 0x20,1);
          auVar5 = vblendvps_avx(ZEXT416((uint)(auVar2._0_4_ + _DAT_145fc6ed8)),auVar8,auVar5);
          uVar1 = auVar5._0_8_;
        }
      }
      else {
        auVar5 = ZEXT416((uint)(SQRT(fVar3) * _DAT_145fc7020 + _DAT_145fc6f48));
        auVar2 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar5);
        auVar5 = vcmpss_avx(auVar5,ZEXT816(0) << 0x20,1);
        auVar6._4_4_ = _DAT_146159bd4;
        auVar6._0_4_ = _DAT_146159bd4;
        auVar6._8_4_ = _DAT_146159bd4;
        auVar6._12_4_ = _DAT_146159bd4;
        auVar5 = vblendvps_avx(ZEXT416((uint)(auVar2._0_4_ * _DAT_14614f808 + _DAT_146159bd4)),
                               auVar6,auVar5);
        uVar1 = auVar5._0_8_;
      }
    }
    else {
      uVar1 = (ulonglong)_DAT_14615a2c4;
    }
  }
  return uVar1;
}

