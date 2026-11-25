// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401bb320  size: 717 bytes
// Name:    FUN_1401bb320
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14438fa80, FUN_145078990, FUN_1401bb5f0, FUN_145077900, FUN_1450778c0, FUN_1401ba120, FUN_1401b5920, FUN_1401bb630, FUN_1450785a0, FUN_1401b5500, FUN_1401b4790, FUN_14438fa40, FUN_145079170, FUN_144f21750, FUN_140459350
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1401bb320(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined1 auStack_88 [72];
  
  uVar6 = *(undefined8 *)(*param_1 + 0x20);
  cVar3 = FUN_1401ba120(uVar6);
  if (((cVar3 != '\0') &&
      (lVar4 = FUN_144f21750(*(undefined8 *)(param_1[2] + 0x2a0),0x275822c4,uStack_100,
                             *(undefined8 *)(*param_1 + 0x230)), lVar4 != 0)) &&
     (lVar4 = FUN_145077900(param_1[2],lVar4), lVar4 != 0)) {
    cVar3 = func_0x000144da4370(*(undefined1 *)(_DAT_14ab7ef10 + 0x232));
    if (cVar3 == '\0') {
      FUN_14438fa40(uVar6,auStack_b8);
      auVar9._4_4_ = _DAT_14615a290;
      auVar9._0_4_ = _DAT_14615a290;
      auVar9._8_4_ = _DAT_14615a290;
      auVar9._12_4_ = _DAT_14615a290;
      auVar18 = ZEXT864(CONCAT44(uStack_fc,uStack_100));
      auVar9 = vrcpps_avx(auVar9);
      auVar17._8_8_ = 0;
      auVar17._0_8_ = CONCAT44(uStack_fc,uStack_100);
      auVar17 = vpshufd_avx(auVar17,0xe1);
      auVar19 = ZEXT1664(auVar17);
      fVar12 = auVar9._0_4_;
      fVar14 = auVar9._4_4_;
      fVar15 = auVar9._8_4_;
      fVar16 = auVar9._12_4_;
      auVar10._0_4_ = ((-(fVar12 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar12 + fVar12) * 0.0;
      auVar10._4_4_ = ((-(fVar14 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar14 + fVar14) * 0.0;
      auVar10._8_4_ = ((-(fVar15 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar15 + fVar15) * 0.0;
      auVar10._12_4_ = ((-(fVar16 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar16 + fVar16) * 0.0;
      auVar9 = vroundps_avx(auVar10,3);
      auVar13._0_4_ = auVar9._0_4_ * _DAT_14615ad78;
      auVar13._4_4_ = auVar9._4_4_ * _DAT_14615ad78;
      auVar13._8_4_ = auVar9._8_4_ * _DAT_14615ad78;
      auVar13._12_4_ = auVar9._12_4_ * _DAT_14615ad78;
      auVar11._0_4_ = (int)auVar9._0_4_;
      auVar11._4_4_ = (int)auVar9._4_4_;
      auVar11._8_4_ = (int)auVar9._8_4_;
      auVar11._12_4_ = (int)auVar9._12_4_;
      auVar9 = vpackssdw_avx(auVar11,auVar11);
      auStack_a8 = vinsertps_avx(auVar13,auVar9,0x34);
      uStack_98 = auVar17._0_8_;
      lStack_f8 = func_0x000145079380(lVar4,auStack_b8);
      if (lStack_f8 == 0) {
        return 0;
      }
      FUN_14438fa80(uVar6,auStack_e8);
      uStack_d8 = auVar19._0_8_;
      lVar5 = FUN_145078990(lVar4,auStack_e8);
      if (lVar5 == 0) {
        return 0;
      }
      uStack_fc = auVar18._4_4_;
      uVar7 = (ulonglong)auVar18._0_4_;
    }
    else {
      uVar7 = CONCAT44(uStack_fc,uStack_100);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar7;
      auVar9 = vpshufd_avx(auVar8,0xe1);
      auVar18 = ZEXT1664(auVar9);
      uStack_98 = auVar9._0_8_;
      FUN_1401bb5f0(uVar6,auStack_e8);
      lStack_f8 = FUN_145079170(lVar4,auStack_b8,param_1,auStack_e8,(undefined1  [16])0x0,0);
      if (lStack_f8 == 0) {
        return 0;
      }
      uStack_d8 = auVar18._0_8_;
      lVar5 = FUN_145078990(lVar4);
      if (lVar5 == 0) {
        return 0;
      }
      lVar1 = *param_1;
      lVar2 = param_1[1];
      FUN_1401bb630(uVar6,auStack_88);
      uVar6 = func_0x000144f01ca0(lVar5);
      FUN_1450785a0(lVar1,uVar6,auStack_88,(int)lVar2);
    }
    lVar4 = FUN_1401b5920(lVar4,uVar7 & 0xffffffff,uStack_fc);
    if (lVar4 != 0) {
      uVar6 = FUN_1450778c0(param_1);
      if ((int)param_1[7] == 2) {
        lStack_f8 = FUN_1401b4790(uVar6,lStack_f8);
        lVar5 = FUN_140459350(uVar6,lVar5);
      }
      auStack_c8 = (undefined1  [16])0x0;
      uVar6 = FUN_1401b5500(uVar6,lStack_f8,lVar5,lVar4,auStack_c8);
      return uVar6;
    }
  }
  return 0;
}

