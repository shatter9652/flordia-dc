// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401171f0  size: 345 bytes
// Name:    FUN_1401171f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f8c5c0, FUN_144e40a00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401171f0(longlong param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  undefined7 uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 aauStack_38 [2] [16];
  
  uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if (*(char *)(uVar2 + 0x30) != '\x02') {
    uVar2 = 0;
    goto LAB_14011733a;
  }
  lVar3 = func_0x000144da0df0(*(undefined4 *)(uVar2 + 0x9c));
  if ((lVar3 == 0) || ((*(byte *)(lVar3 + 0x28) & 6) != 0)) {
    bVar4 = 0;
    uVar5 = 0;
  }
  else {
    FUN_144e40a00(param_1,&fStack_58);
    auVar9._0_12_ = ZEXT812(0);
    auVar9._12_4_ = 0;
    uVar5 = (undefined7)((ulonglong)&fStack_58 >> 8);
    bVar4 = 1;
    auVar7._0_4_ = fStack_58 * fStack_58;
    auVar7._4_4_ = fStack_54 * fStack_54;
    auVar7._8_4_ = fStack_50 * fStack_50;
    auVar7._12_4_ = fStack_4c * fStack_4c;
    auVar7 = vblendps_avx(auVar7,auVar9,8);
    auVar7 = vhaddps_avx(auVar7,auVar7);
    auVar9 = vhaddps_avx(auVar7,auVar7);
    auVar7 = vrsqrtss_avx(auVar9,auVar9);
    fVar6 = auVar7._0_4_;
    auVar7 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar9,2);
    if (_DAT_145fc6edc <=
        (float)(auVar7._0_4_ &
               (uint)(((fVar6 * fVar6 * auVar9._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar6 +
                      fVar6) * auVar9._0_4_))) {
      lVar3 = func_0x000144dd1230(*(undefined4 *)
                                   ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
      if (lVar3 != 0) {
        if ((*(float *)(lVar3 + 0x44) == _DAT_145fc6ed8) &&
           (!NAN(*(float *)(lVar3 + 0x44)) && !NAN(_DAT_145fc6ed8))) goto LAB_140117335;
      }
      FUN_144f8c5c0(&fStack_58);
      fVar6 = (float)func_0x000141c72100(1);
      uVar2 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
      uStack_48 = *(undefined8 *)(uVar2 + 0x70);
      uStack_40 = *(undefined8 *)(uVar2 + 0x78);
      func_0x000144dc3790(&uStack_48,aauStack_38);
      auVar10._0_12_ = ZEXT812(0);
      auVar10._12_4_ = 0;
      lVar3 = 1;
      auVar1._4_4_ = fStack_54;
      auVar1._0_4_ = fStack_58;
      auVar1._8_4_ = fStack_50;
      auVar1._12_4_ = fStack_4c;
      auVar7 = vsubps_avx(aauStack_38[0],auVar1);
      uVar5 = (undefined7)((ulonglong)&fStack_58 >> 8);
      bVar4 = 1;
      auVar8._0_4_ = auVar7._0_4_ * auVar7._0_4_;
      auVar8._4_4_ = auVar7._4_4_ * auVar7._4_4_;
      auVar8._8_4_ = auVar7._8_4_ * auVar7._8_4_;
      auVar8._12_4_ = auVar7._12_4_ * auVar7._12_4_;
      auVar7 = vblendps_avx(auVar8,auVar10,8);
      auVar7 = vhaddps_avx(auVar7,auVar7);
      auVar7 = vhaddps_avx(auVar7,auVar7);
      if (fVar6 * fVar6 <= auVar7._0_4_) goto LAB_140117337;
      bVar4 = 0;
      uVar5 = 0;
    }
LAB_140117335:
    lVar3 = 0;
  }
LAB_140117337:
  uVar2 = CONCAT71(uVar5,bVar4 & (byte)lVar3);
LAB_14011733a:
  return uVar2 & 0xffffffff;
}

