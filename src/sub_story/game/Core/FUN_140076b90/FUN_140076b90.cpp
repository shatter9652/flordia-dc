// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076b90  size: 204 bytes
// Name:    FUN_140076b90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140076140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140076b90(longlong param_1,ulonglong param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  auVar7._0_12_ = ZEXT812(0);
  auVar7._12_4_ = 0;
  auVar7 = vcmpps_avx(auVar7,*param_3,0);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) + 0x28 +
           (ulonglong)((uint)(ushort)(*(short *)(param_1 + 0x20) + (short)param_2) * 0x50));
  uVar5 = vmovmskps_avx(auVar7);
  if ((~(byte)uVar5 & 7) == 0) {
    uVar5 = *(undefined4 *)(lVar2 + 0x14);
    auVar8._4_4_ = uVar5;
    auVar8._0_4_ = uVar5;
    auVar8._8_4_ = uVar5;
    auVar8._12_4_ = uVar5;
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x70) + (param_2 & 0xffff) * 8)
    ;
    fVar1 = *(float *)(lVar3 + 0x14);
    fVar4 = fVar1 + _DAT_14615d1f0;
    fVar1 = fVar1 + _DAT_14615af54;
    auVar11._4_4_ = fVar4;
    auVar11._0_4_ = fVar4;
    auVar11._8_4_ = fVar4;
    auVar11._12_4_ = fVar4;
    auVar10._4_4_ = fVar1;
    auVar10._0_4_ = fVar1;
    auVar10._8_4_ = fVar1;
    auVar10._12_4_ = fVar1;
    auVar7 = vcmpps_avx(auVar11,auVar8,2);
    auVar8 = vcmpps_avx(auVar8,auVar10,2);
    auVar10 = vpcmpeqd_avx(auVar10,auVar10);
    auVar9._0_4_ = auVar7._0_4_ & auVar8._0_4_;
    auVar9._4_4_ = auVar7._4_4_ & auVar8._4_4_;
    auVar9._8_4_ = auVar7._8_4_ & auVar8._8_4_;
    auVar9._12_4_ = auVar7._12_4_ & auVar8._12_4_;
    if ((lVar3 == lVar2) && ((auVar10 & ~auVar9) == (undefined1  [16])0x0)) {
      return;
    }
  }
  plVar6 = (longlong *)FUN_140076140(*(longlong *)(param_1 + 8),param_2,lVar2);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

