// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004ac40  size: 277 bytes
// Name:    FUN_14004ac40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14004ac40(longlong param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [64];
  uint auStack_60 [20];
  undefined1 auVar11 [64];
  
  auVar5._0_12_ = ZEXT812(0);
  auVar5._12_4_ = 0;
  if ((0.0 < in_ZMM2._0_4_) || (fVar4 = _DAT_145fc6f48, 0.0 < in_ZMM1._0_4_)) {
    if ((ulonglong)*(uint *)(param_1 + 0xec) != 0) {
      lVar3 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xf0) + 0x30 + lVar3);
        lVar3 = lVar3 + 0x120;
        auVar5 = vmaxss_avx(ZEXT416(*puVar1),auVar5);
      } while ((ulonglong)*(uint *)(param_1 + 0xec) * 0x120 != lVar3);
    }
    auVar10._0_12_ = ZEXT812(0);
    auVar10._12_4_ = 0;
    auVar11 = ZEXT1664(auVar10);
    auVar6 = in_ZMM1._0_16_;
    auVar2 = vcmpss_avx(auVar10,auVar6,1);
    auVar7 = in_ZMM2._0_16_;
    auVar8 = vcmpss_avx(auVar10,auVar7,1);
    auVar2 = vblendvps_avx(auVar7,auVar6,auVar2);
    auVar8 = vblendvps_avx(auVar6,auVar7,auVar8);
    auVar6 = vcmpss_avx(auVar5,ZEXT416(_DAT_145fc6f8c),1);
    auVar7 = vcmpss_avx(auVar5,auVar10,0);
    auVar5 = vblendvps_avx(auVar2,auVar8,auVar6);
    auVar9._0_8_ = CONCAT44(_DAT_145fc6f50,_DAT_145fc6f50);
    auVar9._8_4_ = _DAT_145fc6f50;
    auVar9._12_4_ = _DAT_145fc6f50;
    auVar2 = vblendvps_avx(auVar5,auVar9,auVar7);
    auVar12 = ZEXT1664(auVar2);
    func_0x000144e72fd0(auVar7._0_8_,auVar5._0_8_,auVar6._0_8_,auVar9._0_8_);
    func_0x000145123910(*(undefined8 *)((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x20),
                        auStack_60);
    auVar8._0_8_ = CONCAT44(_DAT_146159f94,_DAT_146159f94);
    auVar8._8_4_ = _DAT_146159f94;
    auVar8._12_4_ = _DAT_146159f94;
    auVar2 = vcmpss_avx(auVar11._0_16_,ZEXT416(auStack_60[0]),1);
    auVar5 = vblendvps_avx(auVar8,ZEXT416(auStack_60[0]),auVar2);
    auVar11 = ZEXT1664(auVar5);
    fVar4 = (float)func_0x000144e686a0(*(undefined4 *)(param_1 + 0xc4),auVar2._0_8_,auVar8._0_8_);
    auVar5 = vcmpss_avx(auVar12._0_16_,ZEXT416(_DAT_145fc6f50),1);
    fVar4 = (float)(auVar5._0_4_ & (uint)(auVar11._0_4_ / auVar12._0_4_)) * fVar4;
  }
  return fVar4;
}

