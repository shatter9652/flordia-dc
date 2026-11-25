// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080870  size: 559 bytes
// Name:    FUN_140080870
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fbfb70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140080870(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4,
                       char param_5)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined1 extraout_var [56];
  
  param_4 = param_4 & 0xffffffff;
  if (param_5 != '\0') {
    uVar1 = func_0x000144fbfbc0(param_4,*(undefined8 *)(param_1 + 0x30));
    param_4 = (ulonglong)uVar1;
  }
  auVar9._0_8_ = FUN_144fbfb70(param_1,param_4);
  auVar9._8_56_ = extraout_var;
  auVar7 = auVar9._0_16_;
  if (((param_2 & 0x20) != 0) && ((float)auVar9._0_8_ < _DAT_146167a68)) {
    return (ulonglong)(uint)_DAT_146167a68;
  }
  auVar8 = auVar7;
  if ((param_2 >> 8 & 1) != 0) {
    if ((param_2 & 0x40) != 0) {
      auVar7 = vminss_avx(ZEXT416(_DAT_146159ae0),auVar7);
    }
    fVar6 = auVar7._0_4_ * _DAT_145fc6edc;
    auVar8 = ZEXT416((uint)fVar6);
    if ((char)param_2 < '\0') {
      auVar8._4_4_ = _DAT_146167a6c;
      auVar8._0_4_ = _DAT_146167a6c;
      auVar8._8_4_ = _DAT_146167a6c;
      auVar8._12_4_ = _DAT_146167a6c;
      auVar7 = vcmpss_avx(ZEXT416(_DAT_146159b90),auVar7,1);
      auVar8 = vblendvps_avx(ZEXT416((uint)fVar6),auVar8,auVar7);
    }
  }
  if (((param_2 & 4) != 0) && (uVar3 = (ulonglong)_DAT_148fdfae8, uVar3 != 0)) {
    puVar2 = _DAT_148fdfae0;
    uVar5 = uVar3;
    do {
      uVar4 = uVar5 >> 1;
      if (puVar2[uVar4 * 0xd] < *(uint *)(param_1 + 0x1d8)) {
        puVar2 = puVar2 + uVar4 * 0xd + 0xd;
        uVar4 = ~uVar4 + uVar5;
      }
      uVar5 = uVar4;
    } while (0 < (longlong)uVar4);
    if ((puVar2 != _DAT_148fdfae0 + uVar3 * 0xd) && (*puVar2 == *(uint *)(param_1 + 0x1d8))) {
      auVar9 = ZEXT1664(auVar8);
      fVar6 = (float)func_0x0001455313e0(puVar2 + 1,param_3,param_4);
      auVar8 = ZEXT416((uint)(fVar6 * auVar9._0_4_));
    }
  }
  if ((param_2 & 1) != 0) {
    auVar8 = ZEXT416((uint)(auVar8._0_4_ * *(float *)(param_1 + 0x250)));
  }
  puVar2 = _DAT_148fdfb88;
  if ((param_2 & 0x10) == 0) {
    if (((param_2 & 8) == 0) || (uVar3 = (ulonglong)_DAT_148fdfb90, uVar3 == 0)) goto LAB_140080a3d;
    do {
      uVar5 = uVar3 >> 1;
      if (puVar2[uVar5 * 0xb] < _DAT_148fdfc08) {
        puVar2 = puVar2 + uVar5 * 0xb + 0xb;
        uVar5 = ~uVar5 + uVar3;
      }
      uVar3 = uVar5;
      uVar1 = _DAT_148fdfc08;
    } while (0 < (longlong)uVar5);
  }
  else {
    uVar3 = (ulonglong)_DAT_148fdfb90;
    if (uVar3 == 0) goto LAB_140080a3d;
    do {
      uVar5 = uVar3 >> 1;
      if (puVar2[uVar5 * 0xb] < _DAT_148fdfc0c) {
        puVar2 = puVar2 + uVar5 * 0xb + 0xb;
        uVar5 = ~uVar5 + uVar3;
      }
      uVar3 = uVar5;
      uVar1 = _DAT_148fdfc0c;
    } while (0 < (longlong)uVar5);
  }
  if ((puVar2 != _DAT_148fdfb88 + (ulonglong)_DAT_148fdfb90 * 0xb) && (*puVar2 == uVar1)) {
    auVar8 = ZEXT416((uint)(auVar8._0_4_ * (float)puVar2[param_4 + 1]));
  }
LAB_140080a3d:
  if ((param_2 >> 9 & 1) != 0) {
    auVar8 = vminss_avx(ZEXT416(*(uint *)(&UNK_146167a70 +
                                         (ulonglong)(3 < *(int *)(param_1 + 0x38)) * 4)),auVar8);
  }
  if ((param_2 & 0x40) != 0) {
    auVar8 = vminss_avx(ZEXT416(_DAT_146159ae0),auVar8);
  }
  if ((char)param_2 < '\0') {
    auVar8 = vminss_avx(ZEXT416(_DAT_146159b90),auVar8);
  }
  uVar3 = auVar8._0_8_;
  if ((param_2 >> 10 & 1) != 0) {
    auVar7 = vminss_avx(ZEXT416(_DAT_14614f808),auVar8);
    uVar3 = auVar7._0_8_;
  }
  return uVar3;
}

