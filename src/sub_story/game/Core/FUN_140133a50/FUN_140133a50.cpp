// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140133a50  size: 233 bytes
// Name:    FUN_140133a50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140133a50(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_48 [16];
  longlong lStack_38;
  longlong lStack_30;
  undefined1 auStack_28 [16];
  
  plVar2 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  if (*(int *)(param_1 + 0x4c) + 1U < _DAT_14abbef44) {
    (**(code **)(*plVar2 + 0x138))(plVar2,auStack_48);
    lStack_38 = plVar2[0xe];
    lStack_30 = plVar2[0xf];
    func_0x000144dc3790(&lStack_38,auStack_28);
    auVar3 = vsubps_avx(auStack_28,auStack_48);
  }
  else {
    func_0x000140133b40(param_1,auStack_48);
    auVar1 = vsubps_avx(*(undefined1 (*) [16])(plVar2 + 0xe),auStack_48);
    auVar3 = vpsubw_avx(*(undefined1 (*) [16])(plVar2 + 0xe),auStack_48);
    auVar1 = vblendps_avx(auVar1,auVar3,8);
    auVar3 = vpunpckhwd_avx(auVar1,auVar1);
    auVar3 = vpsrad_avx(auVar3,0x10);
    auVar3 = vcvtdq2ps_avx(auVar3);
    auVar4 = vshufpd_avx(auVar3,auVar3,3);
    auVar3._0_4_ = auVar4._0_4_ * _DAT_146159c90 + auVar1._0_4_;
    auVar3._4_4_ = auVar4._4_4_ * _UNK_146159c94 + auVar1._4_4_;
    auVar3._8_4_ = auVar4._8_4_ * _UNK_146159c98 + auVar1._8_4_;
    auVar3._12_4_ = auVar4._12_4_ * _UNK_146159c9c + auVar1._12_4_;
  }
  auVar4._4_4_ = _DAT_14abbef4c;
  auVar4._0_4_ = _DAT_14abbef4c;
  auVar4._8_4_ = _DAT_14abbef4c;
  auVar4._12_4_ = _DAT_14abbef4c;
  auVar1 = vrcpps_avx(auVar4);
  auVar9._0_4_ = (uint)_DAT_14abbef4c ^ _DAT_145fc6f10;
  auVar9._4_4_ = (uint)_DAT_14abbef4c ^ _DAT_145fc6f10;
  auVar9._8_4_ = (uint)_DAT_14abbef4c ^ _DAT_145fc6f10;
  auVar9._12_4_ = (uint)_DAT_14abbef4c ^ _DAT_145fc6f10;
  fVar5 = auVar1._0_4_;
  fVar6 = auVar1._4_4_;
  fVar10 = _DAT_14abbef4c * fVar6 - _DAT_145fc6ed8;
  fVar7 = auVar1._8_4_;
  fVar11 = _DAT_14abbef4c * fVar7 - _DAT_145fc6ed8;
  fVar8 = auVar1._12_4_;
  fVar12 = _DAT_14abbef4c * fVar8 - _DAT_145fc6ed8;
  auVar1 = vcmpps_avx(auVar4,auVar9,4);
  *param_2 = (float)(auVar1._0_4_ &
                    (uint)(-((_DAT_14abbef4c * fVar5 - _DAT_145fc6ed8) * fVar5) + fVar5)) *
             auVar3._0_4_;
  param_2[1] = (float)(auVar1._4_4_ & (uint)(-(fVar10 * fVar6) + fVar6)) * auVar3._4_4_;
  param_2[2] = (float)(auVar1._8_4_ & (uint)(-(fVar11 * fVar7) + fVar7)) * auVar3._8_4_;
  param_2[3] = (float)(auVar1._12_4_ & (uint)(-(fVar12 * fVar8) + fVar8)) * auVar3._12_4_;
  return;
}

