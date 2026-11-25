// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ef050  size: 624 bytes
// Name:    FUN_1400ef050
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14528cc50, FUN_1400ef2c0, FUN_1400ef360, FUN_1400ef2e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400ef050(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 extraout_var [56];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 in_ZMM6 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  float fVar25;
  float fVar26;
  undefined1 auStack_118 [16];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  
  auStack_d8 = in_ZMM6._0_16_;
  if (*(int *)(param_1 + 4) == 0) {
    lVar5 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 8);
    auVar21 = ZEXT464(_DAT_145fc6f50);
    auVar23 = ZEXT464(_DAT_145fc6f54);
    lVar5 = 0;
    auVar24 = ZEXT1264(ZEXT812(0));
    fVar25 = 0.0;
    uVar6 = *(uint *)(lVar4 + 0x60);
    auVar9._4_4_ = uVar6;
    auVar9._0_4_ = uVar6;
    auVar9._8_4_ = uVar6;
    auVar9._12_4_ = uVar6;
    auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(lVar4 + 0x68)),0x20);
    auVar15 = ZEXT1664(auVar9);
    auVar10._0_4_ = _DAT_145fc6f10 ^ uVar6;
    auVar10._4_4_ = _DAT_145fc6f10 ^ uVar6;
    auVar10._8_4_ = _DAT_145fc6f10 ^ uVar6;
    auVar10._12_4_ = _DAT_145fc6f10 ^ uVar6;
    auVar9 = vshufps_avx(auVar10,ZEXT416(*(uint *)(lVar4 + 100)),0);
    auVar9 = vinsertps_avx(auVar9,auVar10,0x30);
    auVar20 = ZEXT1664(auVar9);
    uVar6 = 1;
    uVar16 = _DAT_145fc6f10;
    uVar17 = _DAT_145fc6f10;
    uVar18 = _DAT_145fc6f10;
    uVar19 = _DAT_145fc6f10;
    fVar26 = _DAT_146159ec4;
    do {
      uVar3 = (ulonglong)(uVar6 - 1 & 0xff);
      cVar2 = func_0x00014528cc80(*(undefined8 *)(param_1 + 0x10 + uVar3 * 0x18));
      if (cVar2 != '\0') {
        lVar4 = FUN_14528cc50(param_1 + 8 + uVar3 * 0x18);
        if (lVar4 != 0) {
          uStack_108 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x50);
          uStack_100 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x58);
          auStack_e8 = auVar15._0_16_;
          auStack_f8 = auVar20._0_16_;
          cVar2 = FUN_1400ef360(lVar4 + 0x1200,&uStack_108,auStack_f8,auStack_e8);
          if (cVar2 != '\0') {
            auVar14._0_8_ = FUN_1400ef2c0(lVar4,param_2);
            auVar14._8_56_ = extraout_var;
            lVar1 = *(longlong *)(param_2 + 8);
            auVar14 = ZEXT1664(auVar14._0_16_);
            FUN_1400ef2e0(*(undefined4 *)(lVar4 + 0x1270),*(undefined1 *)(lVar4 + 0x12c5),
                          auStack_118,lVar4 + 0x1250);
            fVar13 = auVar14._0_4_;
            auVar9 = vsubps_avx(*(undefined1 (*) [16])(lVar1 + 0x50),auStack_118);
            auVar11._0_4_ = auVar9._0_4_ * auVar9._0_4_;
            auVar11._4_4_ = auVar9._4_4_ * auVar9._4_4_;
            auVar11._8_4_ = auVar9._8_4_ * auVar9._8_4_;
            auVar11._12_4_ = auVar9._12_4_ * auVar9._12_4_;
            auVar9 = vblendps_avx(auVar11,auVar24._0_16_,8);
            auVar9 = vhaddps_avx(auVar9,auVar9);
            auVar9 = vhaddps_avx(auVar9,auVar9);
            fVar22 = auVar23._0_4_;
            if (fVar13 <= fVar25) {
LAB_1400ef216:
              bVar8 = fVar13 == fVar22;
              bVar7 = fVar13 < fVar22;
            }
            else {
              auVar12._0_4_ = uVar16 ^ (uint)(fVar13 - fVar22);
              auVar12._4_4_ = uVar17;
              auVar12._8_4_ = uVar18;
              auVar12._12_4_ = uVar19;
              auVar10 = vmaxss_avx(auVar12,ZEXT416((uint)(fVar13 - fVar22)));
              if (fVar26 < auVar10._0_4_) goto LAB_1400ef216;
              bVar8 = auVar21._0_4_ == auVar9._0_4_;
              bVar7 = auVar21._0_4_ < auVar9._0_4_;
            }
            if (!bVar7 && !bVar8) {
              auVar21 = ZEXT1664(auVar9);
              auVar23 = ZEXT1664(auVar14._0_16_);
              lVar5 = lVar4;
            }
          }
        }
      }
      bVar8 = uVar6 < *(uint *)(param_1 + 4);
      uVar6 = (uint)(byte)((char)uVar6 + 1);
    } while (bVar8);
  }
  return lVar5;
}

