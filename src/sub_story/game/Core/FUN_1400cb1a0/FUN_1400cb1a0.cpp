// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400cb1a0  size: 644 bytes
// Name:    FUN_1400cb1a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400cb500, FUN_1400cb450, FUN_144f62e90, FUN_1400cb430
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400cb1a0(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x38) + 0x98);
  fVar8 = (float)FUN_1400cb430(uVar2);
  if (0.0 < fVar8) {
    *(undefined1 *)(param_1 + 0x38a) = 0;
    lVar5 = FUN_144f62e90(uVar2);
    func_0x0001400cb560(lVar5,*(float *)(param_1 + 0x278) * *(float *)(param_1 + 0x284));
    *(byte *)(lVar5 + 0x5a8) = *(byte *)(lVar5 + 0x5a8) & 0xdf;
    lVar5 = func_0x000144f62f60(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
    if (lVar5 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x188);
      if ((*(longlong *)(lVar3 + 0xa0) != 0xffff) && (*(int *)(lVar3 + 0xa8) != 0)) {
        uStack_38 = *(undefined8 *)(lVar3 + 0xc0);
        uStack_30 = *(undefined8 *)(lVar3 + 200);
        uVar6 = 0;
        auVar1 = *(undefined1 (*) [16])(lVar3 + 0xb0);
        auVar9 = vpunpckhwd_avx(auVar1,auVar1);
        auVar9 = vpsrad_avx(auVar9,0x10);
        auVar9 = vcvtdq2ps_avx(auVar9);
        auVar9 = vshufpd_avx(auVar9,auVar9,3);
        auStack_48._0_4_ = auVar9._0_4_ * _DAT_146159c90 + auVar1._0_4_;
        auStack_48._4_4_ = auVar9._4_4_ * _UNK_146159c94 + auVar1._4_4_;
        auStack_48._8_4_ = auVar9._8_4_ * _UNK_146159c98 + auVar1._8_4_;
        auStack_48._12_4_ = auVar9._12_4_ * _UNK_146159c9c + auVar1._12_4_;
        FUN_1400cb450(lVar5,0,2,auStack_48,&uStack_38);
        uVar2 = *(undefined8 *)(lVar3 + 0xa8);
        uVar7 = (ulonglong)(((uint)uVar2 & 0xffff) << 4);
        if (*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar7) ==
            (short)((ulonglong)uVar2 >> 0x10)) {
          lVar4 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar7);
          if ((lVar4 == 0) || ((*(byte *)(lVar4 + 0x154) & 1) == 0)) {
            uVar6 = 0;
          }
          else {
            uVar6 = *(undefined8 *)(lVar4 + 0x48);
          }
        }
        FUN_1400cb500(lVar5,0,2,uVar6,*(undefined8 *)(lVar3 + 0xa0),uVar2);
      }
      *(undefined8 *)(lVar3 + 0xa0) = 0xffff;
      *(undefined8 *)(lVar3 + 0xa8) = 0xffffffff00000000;
      lVar3 = *(longlong *)(param_1 + 0x188);
      if ((*(longlong *)(lVar3 + 0x250) != 0xffff) && (*(int *)(lVar3 + 600) != 0)) {
        uStack_38 = *(undefined8 *)(lVar3 + 0x270);
        uStack_30 = *(undefined8 *)(lVar3 + 0x278);
        auVar1 = *(undefined1 (*) [16])(lVar3 + 0x260);
        auVar9 = vpunpckhwd_avx(auVar1,auVar1);
        auVar9 = vpsrad_avx(auVar9,0x10);
        auVar9 = vcvtdq2ps_avx(auVar9);
        auVar9 = vshufpd_avx(auVar9,auVar9,3);
        auStack_48._0_4_ = auVar9._0_4_ * _DAT_146159c90 + auVar1._0_4_;
        auStack_48._4_4_ = auVar9._4_4_ * _UNK_146159c94 + auVar1._4_4_;
        auStack_48._8_4_ = auVar9._8_4_ * _UNK_146159c98 + auVar1._8_4_;
        auStack_48._12_4_ = auVar9._12_4_ * _UNK_146159c9c + auVar1._12_4_;
        FUN_1400cb450(lVar5,1,2,auStack_48,&uStack_38);
        uVar2 = *(undefined8 *)(lVar3 + 600);
        uVar7 = (ulonglong)(((uint)uVar2 & 0xffff) << 4);
        if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar7) ==
             (short)((ulonglong)uVar2 >> 0x10)) &&
           ((lVar4 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar7), lVar4 != 0 &&
            ((*(byte *)(lVar4 + 0x154) & 1) != 0)))) {
          uVar6 = *(undefined8 *)(lVar4 + 0x48);
        }
        else {
          uVar6 = 0;
        }
        FUN_1400cb500(lVar5,1,2,uVar6,*(undefined8 *)(lVar3 + 0x250),uVar2);
      }
      *(undefined8 *)(lVar3 + 0x250) = 0xffff;
      *(undefined8 *)(lVar3 + 600) = 0xffffffff00000000;
    }
  }
  return;
}

