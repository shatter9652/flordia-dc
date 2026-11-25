// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140083720  size: 578 bytes
// Name:    FUN_140083720
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140083970, FUN_144ef3e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140083720(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  
  uVar6 = 0;
  auVar12 = ZEXT1264(ZEXT812(0));
  uVar7 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if (uVar7 != 0) {
    lVar4 = FUN_144ef3e20(param_2);
    uVar6 = auVar12._0_8_;
    if (lVar4 != 0) {
      uVar5 = *(int *)(param_1 + 0x50) - 1;
      fVar13 = _DAT_145fc6ed8;
      fVar17 = _DAT_14614f808;
      fVar16 = _DAT_14614f808;
      fVar18 = _DAT_14615ba84;
      fVar14 = _DAT_14615aec0;
      uVar2 = _DAT_14615a2d0;
      uVar3 = _DAT_14615a2d0;
      if (uVar5 < 6) {
        uVar6 = (ulonglong)uVar5;
        fVar13 = *(float *)(&UNK_146520168 + uVar6 * 4);
        fVar17 = *(float *)(&UNK_146520180 + uVar6 * 4);
        fVar16 = *(float *)(&UNK_146520108 + uVar6 * 4);
        fVar18 = *(float *)(&UNK_146520138 + uVar6 * 4);
        fVar14 = *(float *)(&UNK_146520150 + uVar6 * 4);
        uVar2 = *(uint *)(&UNK_146520120 + uVar6 * 4);
        uVar3 = *(uint *)(&UNK_146520198 + uVar6 * 4);
      }
      auVar19 = ZEXT464(uVar3);
      auVar15 = ZEXT464(uVar2);
      uStack_a8 = *(undefined8 *)(lVar4 + 0x70);
      uStack_a0 = *(undefined8 *)(lVar4 + 0x78);
      fVar8 = (float)FUN_140083970(uVar7,&uStack_a8,0);
      uVar6 = auVar12._0_8_;
      if (fVar14 * fVar14 < fVar8) {
        uVar6 = auVar19._0_8_;
      }
      else if (fVar18 * fVar18 < fVar8) {
        auVar10._0_4_ = (SQRT(fVar8) - fVar18) / (fVar14 - fVar18);
        auVar10._4_12_ = SUB6012((undefined1  [60])0x0,0);
        auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar10);
        auVar10 = vcmpss_avx(auVar10,ZEXT816(0),1);
        uVar6 = (ulonglong)
                (uint)((float)(~auVar10._0_4_ & auVar1._0_4_) * (auVar19._0_4_ - fVar17) + fVar17);
      }
      else {
        fVar14 = auVar15._0_4_;
        if (fVar14 * fVar14 < fVar8) {
          auVar11._0_4_ = (SQRT(fVar8) - fVar14) / (fVar18 - fVar14);
          auVar11._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar11);
          auVar10 = vcmpss_avx(auVar11,ZEXT816(0),1);
          uVar6 = (ulonglong)
                  (uint)((float)(~auVar10._0_4_ & auVar1._0_4_) * (fVar17 - fVar13) + fVar13);
        }
        else if (fVar16 * fVar16 < fVar8) {
          auVar9._0_4_ = (SQRT(fVar8) - fVar16) / (fVar14 - fVar16);
          auVar9._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar1 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar9);
          auVar10 = vcmpss_avx(auVar9,ZEXT816(0),1);
          uVar6 = (ulonglong)(uint)((float)(~auVar10._0_4_ & auVar1._0_4_) * fVar13);
        }
      }
    }
  }
  return uVar6;
}

