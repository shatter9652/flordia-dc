// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140185fc0  size: 401 bytes
// Name:    FUN_140185fc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140185fc0(longlong param_1)

{
  longlong lVar1;
  byte *pbVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  
  uVar3 = 0x40;
  if (1 < (ulonglong)*(ushort *)(param_1 + 0x1c)) {
    pbVar2 = *(byte **)(param_1 + 0x20);
    uVar7 = 1;
    auVar10 = ZEXT1264(ZEXT812(0));
    bVar8 = *pbVar2;
    do {
      lVar1 = uVar7 * 8;
      fVar13 = (float)pbVar2[lVar1] - (float)bVar8;
      if (0.0 < fVar13) {
        fVar13 = _DAT_145fc6ed8 / fVar13;
        uVar5 = -((uint)pbVar2[uVar7 * 8 + -2] - (uint)pbVar2[uVar7 * 8 + 6]);
        if ((int)uVar5 < 0) {
          uVar5 = (uint)pbVar2[uVar7 * 8 + -2] - (uint)pbVar2[uVar7 * 8 + 6];
        }
        uVar6 = -((uint)pbVar2[uVar7 * 8 + -3] - (uint)pbVar2[uVar7 * 8 + 5]);
        if ((int)uVar6 < 0) {
          uVar6 = (uint)pbVar2[uVar7 * 8 + -3] - (uint)pbVar2[uVar7 * 8 + 5];
        }
        auVar9 = vmaxss_avx(ZEXT416((uint)((float)(uVar5 & 0xff) * fVar13)),auVar10._0_16_);
        uVar5 = -((uint)pbVar2[uVar7 * 8 + -4] - (uint)pbVar2[uVar7 * 8 + 4]);
        if ((int)uVar5 < 0) {
          uVar5 = (uint)pbVar2[uVar7 * 8 + -4] - (uint)pbVar2[uVar7 * 8 + 4];
        }
        auVar9 = vmaxss_avx(ZEXT416((uint)((float)(uVar6 & 0xff) * fVar13)),auVar9);
        uVar6 = -((uint)pbVar2[uVar7 * 8 + -1] - (uint)pbVar2[uVar7 * 8 + 7]);
        if ((int)uVar6 < 0) {
          uVar6 = (uint)pbVar2[uVar7 * 8 + -1] - (uint)pbVar2[uVar7 * 8 + 7];
        }
        auVar9 = vmaxss_avx(ZEXT416((uint)((float)(uVar5 & 0xff) * fVar13)),auVar9);
        auVar10 = ZEXT1664(auVar9);
        fVar13 = (float)(uVar6 & 0xff) * fVar13;
        if (auVar9._0_4_ < fVar13) {
          auVar10 = ZEXT464((uint)fVar13);
        }
      }
      auVar9 = auVar10._0_16_;
      uVar7 = uVar7 + 1;
      bVar8 = pbVar2[lVar1];
    } while (*(ushort *)(param_1 + 0x1c) != uVar7);
    fVar13 = auVar10._0_4_;
    if ((fVar13 != 0.0) || (NAN(fVar13))) {
      if (*(int *)(param_1 + 0x14) == 1) {
        auVar9 = ZEXT416((uint)(fVar13 * _DAT_146159cc0));
      }
      if (*(int *)(param_1 + 0x10) == 2) {
        fVar13 = (float)(*(uint *)(param_1 + 0x28) & _DAT_145fc6f4c);
        auVar11 = vcmpss_avx(ZEXT416(_DAT_145fc6edc),ZEXT416((uint)fVar13),1);
        auVar12._0_4_ = auVar9._0_4_ / (_DAT_14615faf0 - fVar13);
        auVar12._4_12_ = auVar9._4_12_;
        auVar9 = vblendvps_avx(auVar9,auVar12,auVar11);
      }
      auVar11._0_12_ = ZEXT812(0);
      auVar11._12_4_ = 0;
      auVar9 = vmaxss_avx(auVar11,auVar9);
      uVar7 = (ulonglong)SQRT(auVar9._0_4_ * _DAT_14615a2c4 + _DAT_146165ea0);
      uVar4 = 0x11;
      if ((uint)uVar7 < 0x11) {
        uVar4 = uVar7 & 0xffffffff;
      }
      uVar3 = *(undefined4 *)(&UNK_146631460 + uVar4 * 4);
    }
  }
  return uVar3;
}

