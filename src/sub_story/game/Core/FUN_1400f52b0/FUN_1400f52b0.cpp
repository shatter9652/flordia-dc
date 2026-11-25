// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f52b0  size: 570 bytes
// Name:    FUN_1400f52b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f52b0(float *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar7 = _DAT_146159f9c;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *(uint *)(lVar2 + 0x10);
  if (3 < uVar1) {
    return;
  }
  if (uVar1 == 2) {
    fVar7 = *(float *)(lVar2 + 0x20);
    fVar6 = *(float *)(lVar2 + 0x14);
    fVar12 = *(float *)(lVar2 + 0x1c);
    auVar14._0_12_ = ZEXT812(0);
    auVar14._12_4_ = 0;
    fVar9 = fVar12 - fVar6;
    auVar14 = vcmpss_avx(auVar14,ZEXT416((uint)(fVar9 + _DAT_146159f9c)),2);
    fVar9 = (float)(auVar14._0_4_ & (uint)((fVar7 - *(float *)(lVar2 + 0x18)) / fVar9));
    *param_1 = fVar9;
    param_1[1] = -(fVar12 * fVar9) + fVar7;
    param_1[2] = fVar6;
LAB_1400f53e6:
    param_1[3] = fVar12;
    *(undefined1 *)(param_1 + 0xc) = 2;
  }
  else {
    if (uVar1 == 1) {
      fVar7 = *(float *)(lVar2 + 0x18);
    }
    else {
      fVar6 = *(float *)(lVar2 + 0x20);
      fVar12 = *(float *)(lVar2 + 0x14);
      fVar9 = *(float *)(lVar2 + 0x1c);
      auVar15._0_12_ = ZEXT812(0);
      auVar15._12_4_ = 0;
      auVar14 = vcmpss_avx(auVar15,ZEXT416((uint)((fVar9 - fVar12) + _DAT_146159f9c)),2);
      auVar11._0_4_ =
           (float)(auVar14._0_4_ & (uint)((fVar6 - *(float *)(lVar2 + 0x18)) / (fVar9 - fVar12)));
      auVar11._4_8_ = 0;
      auVar11._12_4_ = auVar14._12_4_ & SUB124(SUB6012((undefined1  [60])0x0,0),8);
      *param_1 = auVar11._0_4_;
      fVar6 = -(fVar9 * auVar11._0_4_) + fVar6;
      param_1[1] = fVar6;
      param_1[2] = fVar9;
      fVar10 = *(float *)(lVar2 + 0x24);
      fVar13 = *(float *)(lVar2 + 0x28);
      fVar5 = fVar10 - *(float *)(lVar2 + 0x1c);
      auVar14 = vcmpss_avx(auVar15,ZEXT416((uint)(fVar5 + fVar7)),2);
      auVar16._0_4_ = (float)((uint)((fVar13 - *(float *)(lVar2 + 0x20)) / fVar5) & auVar14._0_4_);
      auVar16._4_8_ = 0;
      auVar16._12_4_ = SUB124(SUB6012((undefined1  [60])0x0,0),8) & auVar14._12_4_;
      param_1[3] = auVar16._0_4_;
      fVar13 = -(fVar10 * auVar16._0_4_) + fVar13;
      param_1[4] = fVar13;
      if ((*(byte *)((longlong)param_1 + 0x31) & 1) == 0) {
        param_1[6] = fVar12;
        param_1[7] = fVar10;
        return;
      }
      auVar3 = vminss_avx(ZEXT416((uint)fVar10),ZEXT416((uint)param_1[6]));
      auVar8 = ZEXT416((uint)fVar12);
      auVar14 = vcmpss_avx(ZEXT416((uint)param_1[6]),auVar8,1);
      auVar4 = vminss_avx(ZEXT416((uint)fVar10),ZEXT416((uint)param_1[7]));
      auVar15 = vcmpss_avx(ZEXT416((uint)param_1[7]),auVar8,1);
      auVar14 = vblendvps_avx(auVar3,auVar8,auVar14);
      auVar15 = vblendvps_avx(auVar4,auVar8,auVar15);
      fVar12 = auVar14._0_4_;
      fVar7 = auVar15._0_4_;
      param_1[6] = fVar12;
      param_1[7] = fVar7;
      if ((fVar12 != fVar7) || (NAN(fVar12) || NAN(fVar7))) {
        fVar6 = *(float *)(lVar2 + 0x1c);
        if ((fVar6 < fVar12) || (fVar6 < fVar7)) {
          if (fVar12 <= fVar6) {
            return;
          }
          if (fVar7 <= fVar6) {
            return;
          }
          if (fVar12 <= fVar6) goto LAB_1400f546b;
          fVar12 = *(float *)(lVar2 + 0x24);
          fVar7 = *(float *)(lVar2 + 0x28);
          fVar9 = fVar12 - fVar6;
          fVar10 = (fVar7 - *(float *)(lVar2 + 0x20)) / fVar9;
        }
        else {
LAB_1400f546b:
          fVar7 = *(float *)(lVar2 + 0x20);
          fVar9 = fVar6 - *(float *)(lVar2 + 0x14);
          fVar10 = (fVar7 - *(float *)(lVar2 + 0x18)) / fVar9;
          fVar12 = fVar6;
          fVar6 = *(float *)(lVar2 + 0x14);
        }
        auVar14 = vcmpss_avx(ZEXT416(0) << 0x20,ZEXT416((uint)(fVar9 + _DAT_146159f9c)),2);
        fVar10 = (float)(auVar14._0_4_ & (uint)fVar10);
        *param_1 = fVar10;
        param_1[1] = -(fVar12 * fVar10) + fVar7;
        param_1[2] = fVar6;
        goto LAB_1400f53e6;
      }
      auVar3._4_12_ = auVar11._4_12_;
      auVar3._0_4_ = fVar12 * auVar11._0_4_ + fVar6;
      auVar4._4_12_ = auVar16._4_12_;
      auVar4._0_4_ = fVar12 * auVar16._0_4_ + fVar13;
      auVar14 = vcmpss_avx(ZEXT816(0) << 0x20,ZEXT416((uint)(fVar12 - fVar9)),2);
      auVar14 = vblendvps_avx(auVar3,auVar4,auVar14);
      fVar7 = auVar14._0_4_;
    }
    *param_1 = fVar7;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  return;
}

