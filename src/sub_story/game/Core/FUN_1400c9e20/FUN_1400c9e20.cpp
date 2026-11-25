// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400c9e20  size: 538 bytes
// Name:    FUN_1400c9e20
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145247300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1400c9e20(longlong param_1,longlong param_2,ulonglong param_3,float param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint *puVar10;
  float *pfVar11;
  uint *puVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  float fVar18;
  undefined1 auVar15 [16];
  float fVar19;
  undefined1 auVar16 [16];
  
  if ((param_4 != _DAT_145fc6f54) || (NAN(param_4) || NAN(_DAT_145fc6f54))) goto LAB_1400c9e8c;
  if ((*(byte *)(param_2 + 0x14c) & 0x40) == 0) {
    param_4 = _DAT_146159ca4;
    if ((*(byte *)(param_2 + 0x120) & 4) != 0) goto LAB_1400c9e8c;
    uVar6 = func_0x000144f12500(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
    lVar7 = FUN_145247300(uVar6);
    lVar8 = lVar7;
    if (_DAT_14abbef18 == lVar7) {
LAB_1400c9e75:
      pfVar11 = (float *)0x14abbe8c0;
      if (*(float **)(lVar8 + 0x60) != (float *)0x0) {
        pfVar11 = *(float **)(lVar8 + 0x60);
      }
    }
    else {
      pfVar11 = *(float **)(lVar7 + 0x60);
      if (pfVar11 == (float *)0x0) {
        piVar1 = (int *)(lVar7 + 0x88);
        iVar9 = 0;
        do {
          lVar8 = _DAT_14abbef18;
          if ((*piVar1 <= iVar9) || (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 == 0))
          goto LAB_1400c9e75;
          pfVar11 = *(float **)(lVar7 + 0x60);
          iVar9 = iVar9 + 1;
        } while (pfVar11 == (float *)0x0);
      }
    }
LAB_1400c9e87:
    param_4 = *pfVar11;
  }
  else {
    if ((*(byte *)(param_2 + 0x140) & 4) == 0) {
      if ((param_3 & 0x40) == 0) {
        uVar6 = func_0x000144f12500(*(undefined4 *)(*(longlong *)(param_1 + 0x2f8) + 0x9c));
        lVar7 = FUN_145247300(uVar6);
        lVar8 = lVar7;
        if (_DAT_14abbef18 == lVar7) goto LAB_1400c9e75;
        pfVar11 = *(float **)(lVar7 + 0x60);
        if (pfVar11 == (float *)0x0) {
          piVar1 = (int *)(lVar7 + 0x88);
          iVar9 = 0;
          do {
            lVar8 = _DAT_14abbef18;
            if ((*piVar1 <= iVar9) || (lVar7 = *(longlong *)(lVar7 + 0x80), lVar7 == 0))
            goto LAB_1400c9e75;
            pfVar11 = *(float **)(lVar7 + 0x60);
            iVar9 = iVar9 + 1;
          } while (pfVar11 == (float *)0x0);
        }
        goto LAB_1400c9e87;
      }
      if (*(char *)(param_1 + 0x60) == '\x01') {
        puVar10 = (uint *)&DAT_14abbd824;
        puVar12 = (uint *)0x14abbd830;
        auVar15._0_12_ = ZEXT812(0);
        auVar15._12_4_ = 0;
        if ((*(byte *)(param_2 + 0x120) & 0x20) == 0) {
          puVar10 = (uint *)0x14abbd828;
          puVar12 = (uint *)0x14abbd82c;
        }
        if (-1 < (char)*(byte *)(param_2 + 0x14c)) {
          puVar12 = puVar10;
        }
        auVar4 = vminss_avx(ZEXT416(*puVar12),
                            ZEXT416((uint)(*(float *)(param_2 + 0xd0) - *(float *)(param_1 + 0x350))
                                   ));
        auVar2 = *(undefined1 (*) [16])(param_1 + 0x250);
        auVar15 = vblendps_avx(auVar15,auVar4,1);
        auVar3 = vinsertps_avx(auVar4,auVar4,0x1d);
        auVar5 = vshufps_avx(auVar2,auVar2,0xc9);
        auVar2 = vshufps_avx(auVar2,auVar2,0xd2);
        fVar14 = -(auVar2._0_4_ * auVar3._0_4_) + auVar5._0_4_ * auVar15._0_4_;
        fVar17 = -(auVar2._4_4_ * auVar3._4_4_) + auVar5._4_4_ * auVar15._4_4_;
        fVar18 = -(auVar2._8_4_ * auVar3._8_4_) + auVar5._8_4_ * auVar15._8_4_;
        fVar19 = -(auVar2._12_4_ * auVar3._12_4_) + auVar5._12_4_ * auVar15._12_4_;
        auVar16._0_4_ = fVar14 + fVar14;
        auVar16._4_4_ = fVar17 + fVar17;
        auVar16._8_4_ = fVar18 + fVar18;
        auVar16._12_4_ = fVar19 + fVar19;
        auVar15 = vshufps_avx(auVar16,auVar16,0xd2);
        auVar3 = vshufps_avx(auVar16,auVar16,0xc9);
        auVar13._0_4_ = -(auVar2._0_4_ * auVar3._0_4_) + auVar15._0_4_ * auVar5._0_4_;
        auVar13._4_4_ = -(auVar2._4_4_ * auVar3._4_4_) + auVar15._4_4_ * auVar5._4_4_;
        auVar13._8_4_ = -(auVar2._8_4_ * auVar3._8_4_) + auVar15._8_4_ * auVar5._8_4_;
        auVar13._12_4_ = -(auVar2._12_4_ * auVar3._12_4_) + auVar15._12_4_ * auVar5._12_4_;
        auVar15 = vshufpd_avx(auVar16,auVar16,1);
        auVar2 = vshufpd_avx(auVar13,auVar13,1);
        param_4 = auVar15._0_4_ * *(float *)(param_1 + 0x25c) + auVar4._0_4_ + auVar2._0_4_;
        goto LAB_1400c9e8c;
      }
    }
    auVar15 = vminss_avx(ZEXT416(_DAT_14abbd824),
                         ZEXT416((uint)(*(float *)(param_2 + 0xd0) - *(float *)(param_1 + 0x350))));
    param_4 = auVar15._0_4_;
  }
LAB_1400c9e8c:
  return -(param_4 * *(float *)(param_2 + 0xe4)) + *(float *)(param_2 + 0x98);
}

