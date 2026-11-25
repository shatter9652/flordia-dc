// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c6450  size: 439 bytes
// Name:    FUN_1400c6450
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400c6660, FUN_1400c66b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400c6450(longlong param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  uVar3 = _DAT_145fc6f10;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    uVar5 = func_0x0001400c6610(param_1);
    uVar4 = FUN_1400c6660(param_1,uVar5);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
    uVar4 = FUN_1400c66b0(param_1,uVar5);
    bVar2 = _DAT_145fc6ed8 <= (float)uVar5;
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x58) = 0;
    }
    else {
      if (0.0 < (float)uVar5) {
        fVar1 = *(float *)(param_1 + 0x44);
        _DAT_14ab7ef38 = (_DAT_14ab7ef38 & 0xffffffff) * 0x5cdcfaa7 + (_DAT_14ab7ef38 >> 0x20);
        fVar7 = _DAT_145fc6ed8;
        if (*(char *)(param_1 + 0x2e) != '\0') {
          fVar7 = *(float *)(param_1 + 0x50);
        }
        fVar7 = *(float *)(param_1 + 0xc) * _DAT_14617cda4 * *(float *)(param_1 + 0x38) *
                *(float *)(param_1 + 0x4c) * fVar7 *
                (((float)((uint)_DAT_14ab7ef38 & 0x7fffff) * _DAT_14615afbc + _DAT_145fc6f48) *
                 *(float *)(param_1 + 0x24) + _DAT_145fc6ed8) + fVar1;
        auVar8 = ZEXT416((uint)fVar7);
        if (*(char *)(param_1 + 0x2f) == '\x01') {
          auVar6 = vroundss_avx(ZEXT416((uint)(fVar1 + _DAT_145fc6ed8)),
                                ZEXT416((uint)(fVar1 + _DAT_145fc6ed8)),9);
          auVar10 = vroundss_avx(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1),9);
          auVar6 = vminss_avx(auVar6,auVar8);
          auVar8 = vroundss_avx(auVar8,auVar8,9);
          *(int *)(param_1 + 0x44) = auVar6._0_4_;
          if ((auVar10._0_4_ != auVar8._0_4_) || (NAN(auVar10._0_4_) || NAN(auVar8._0_4_))) {
            func_0x00014007f070(param_1);
          }
        }
        else {
          *(float *)(param_1 + 0x44) = fVar7;
        }
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
  }
  else {
    auVar6._0_4_ = (float)*(undefined8 *)(param_1 + 0x3c) * _DAT_14615a608;
    auVar6._4_4_ = (float)((ulonglong)*(undefined8 *)(param_1 + 0x3c) >> 0x20) * _DAT_14615a608;
    auVar6._8_4_ = _DAT_14615a608 * 0.0;
    auVar6._12_4_ = _DAT_14615a608 * 0.0;
    auVar8._0_4_ = auVar6._0_4_ + _DAT_146159fa0;
    auVar8._4_4_ = auVar6._4_4_ + _DAT_146159fa0;
    auVar8._8_4_ = auVar6._8_4_ + _DAT_146159fa0;
    auVar8._12_4_ = auVar6._12_4_ + _DAT_146159fa0;
    uVar5 = vmovlps_avx(auVar8);
    *(undefined8 *)(param_1 + 0x3c) = uVar5;
    fVar1 = _DAT_14615a608;
    fVar7 = _DAT_145fc6f78;
    auVar10._0_4_ = (uint)(_DAT_14615a608 - auVar6._0_4_) ^ uVar3;
    auVar10._4_4_ = uVar3;
    auVar10._8_4_ = uVar3;
    auVar10._12_4_ = uVar3;
    auVar8 = vmaxss_avx(auVar10,ZEXT416((uint)(_DAT_14615a608 - auVar6._0_4_)));
    if (auVar8._0_4_ < _DAT_145fc6f78) {
      *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
    }
    auVar8 = vmovshdup_avx(auVar6);
    fVar1 = fVar1 - auVar8._0_4_;
    auVar9._0_4_ = (uint)fVar1 ^ uVar3;
    auVar9._4_4_ = uVar3;
    auVar9._8_4_ = uVar3;
    auVar9._12_4_ = uVar3;
    auVar8 = vmaxss_avx(auVar9,ZEXT416((uint)fVar1));
    if (auVar8._0_4_ < fVar7) {
      *(undefined4 *)(param_1 + 0x40) = 0x3f800000;
    }
  }
  return;
}

