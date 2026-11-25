// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e3ce0  size: 522 bytes
// Name:    FUN_1400e3ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e3ce0(longlong *param_1,undefined4 *param_2,float param_3,float param_4,float *param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  ulonglong uVar12;
  ushort uVar13;
  longlong lVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  fVar10 = _DAT_14615a290;
  fVar9 = _UNK_14614f7fc;
  fVar8 = _UNK_14614f7f8;
  fVar7 = _UNK_14614f7f4;
  fVar6 = _DAT_14614f7f0;
  uVar5 = _DAT_145fc6f4c;
  fVar4 = _DAT_145fc6ed8;
  uVar13 = *(ushort *)((longlong)param_1 + 0x1e);
  if (uVar13 == 0) {
    uVar15 = 0xffffffff;
  }
  else {
    auVar20._4_4_ = _DAT_14615a290;
    auVar20._0_4_ = _DAT_14615a290;
    auVar20._8_4_ = _DAT_14615a290;
    auVar20._12_4_ = _DAT_14615a290;
    lVar14 = *param_1;
    uVar16 = 0xffffffff;
    uVar12 = 0;
    lVar11 = 0;
    auVar17._0_4_ = *param_5 * _DAT_14614f7f0;
    auVar17._4_4_ = param_5[1] * _UNK_14614f7f4;
    auVar17._8_4_ = param_5[2] * _UNK_14614f7f8;
    auVar17._12_4_ = param_5[3] * _UNK_14614f7fc;
    auVar17 = vblendps_avx(auVar17,ZEXT816(0) << 0x20,8);
    auVar17 = vhaddps_avx(auVar17,auVar17);
    auVar17 = vhaddps_avx(auVar17,auVar17);
    auVar18 = ZEXT416((uint)_DAT_145fc6ed8);
    auVar28 = vminss_avx(auVar18,auVar17);
    auVar17 = vcmpss_avx(auVar17,ZEXT816(0) << 0x20,1);
    auVar19._4_4_ = _DAT_145fc6ed8;
    auVar19._0_4_ = _DAT_145fc6ed8;
    auVar19._8_4_ = _DAT_145fc6ed8;
    auVar19._12_4_ = _DAT_145fc6ed8;
    auVar17 = vblendvps_avx(ZEXT416((uint)(_DAT_145fc6ed8 - auVar28._0_4_)),auVar19,auVar17);
    fVar22 = _DAT_14abbd860;
    do {
      uVar15 = (undefined4)uVar16;
      fVar21 = (float)((uint)(*(float *)(lVar14 + 8 + lVar11) - param_4) & uVar5);
      if (fVar22 < fVar21) break;
      pfVar1 = (float *)(lVar14 + 0x30 + lVar11);
      auVar28._0_4_ = fVar6 * *pfVar1;
      auVar28._4_4_ = fVar7 * pfVar1[1];
      auVar28._8_4_ = fVar8 * pfVar1[2];
      auVar28._12_4_ = fVar9 * pfVar1[3];
      auVar28 = vblendps_avx(auVar28,ZEXT816(0) << 0x20,8);
      auVar28 = vhaddps_avx(auVar28,auVar28);
      auVar28 = vhaddps_avx(auVar28,auVar28);
      if (param_3 < auVar28._0_4_) {
        auVar23 = vminss_avx(auVar18,auVar28);
        auVar28 = vcmpss_avx(auVar28,ZEXT816(0) << 0x20,1);
        auVar28 = vblendvps_avx(ZEXT416((uint)(fVar4 - auVar23._0_4_)),auVar19,auVar28);
        fVar21 = auVar28._0_4_ + fVar21;
        if (fVar21 <= auVar17._0_4_) {
          auVar28 = vrcpps_avx(auVar20);
          auVar17 = *(undefined1 (*) [16])(lVar14 + lVar11);
          fVar22 = auVar28._0_4_;
          fVar25 = auVar28._4_4_;
          fVar26 = auVar28._8_4_;
          fVar27 = auVar28._12_4_;
          auVar23._0_4_ = ((-(fVar22 * fVar10) + fVar4) * fVar22 + fVar22) * auVar17._0_4_;
          auVar23._4_4_ = ((-(fVar25 * fVar10) + fVar4) * fVar25 + fVar25) * auVar17._4_4_;
          auVar23._8_4_ = ((-(fVar26 * fVar10) + fVar4) * fVar26 + fVar26) * auVar17._8_4_;
          auVar23._12_4_ = ((-(fVar27 * fVar10) + fVar4) * fVar27 + fVar27) * auVar17._12_4_;
          auVar28 = vroundps_avx(auVar23,3);
          auVar29._0_4_ = -(auVar28._0_4_ * fVar10) + auVar17._0_4_;
          auVar29._4_4_ = -(auVar28._4_4_ * fVar10) + auVar17._4_4_;
          auVar29._8_4_ = -(auVar28._8_4_ * fVar10) + auVar17._8_4_;
          auVar29._12_4_ = -(auVar28._12_4_ * fVar10) + auVar17._12_4_;
          auVar24._0_4_ = (int)auVar28._0_4_;
          auVar24._4_4_ = (int)auVar28._4_4_;
          auVar24._8_4_ = (int)auVar28._8_4_;
          auVar24._12_4_ = (int)auVar28._12_4_;
          auVar28 = vpackssdw_avx(auVar24,auVar24);
          auVar17 = vblendps_avx(auVar17,auVar29,3);
          auVar17 = vinsertps_avx(auVar17,auVar28,0x30);
          *(undefined1 (*) [16])(param_2 + 4) = auVar17;
          puVar2 = (undefined8 *)(*param_1 + 0x30 + lVar11);
          uVar3 = puVar2[1];
          *(undefined8 *)(param_2 + 8) = *puVar2;
          *(undefined8 *)(param_2 + 10) = uVar3;
          *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(*param_1 + 0x20 + lVar11);
          lVar14 = *param_1;
          uVar16 = uVar12 & 0xffffffff;
          *(ulonglong *)(param_2 + 0xe) =
               CONCAT44(*(undefined4 *)(lVar14 + 0xc + lVar11),
                        *(undefined4 *)(lVar14 + 0x1c + lVar11));
          uVar13 = *(ushort *)((longlong)param_1 + 0x1e);
          auVar17 = ZEXT416((uint)fVar21);
          fVar22 = _DAT_14abbd860;
        }
      }
      uVar15 = (undefined4)uVar16;
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x40;
    } while (uVar12 < uVar13);
  }
  *param_2 = uVar15;
  return;
}

