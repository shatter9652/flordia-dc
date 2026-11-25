// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400e7bc0  size: 501 bytes
// Name:    FUN_1400e7bc0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e40a00, FUN_144de6230, FUN_144ec2d60, FUN_144fbcfc0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400e7bc0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  char cVar8;
  byte bVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  plVar10 = (longlong *)FUN_144de6230();
  lVar11 = func_0x00014515d910(*(undefined4 *)((longlong)plVar10 + 0x9c));
  if ((lVar11 != 0) && (iVar1 = *(int *)(lVar11 + 0x94), 0 < (longlong)iVar1)) {
    fVar19 = *(float *)(param_2 + 0xc0);
    fVar21 = *(float *)(param_2 + 0xc4);
    fVar23 = *(float *)(param_2 + 200);
    fVar25 = *(float *)(param_2 + 0xcc);
    auVar18 = ZEXT1264(ZEXT812(0));
    lVar13 = 0;
    iVar12 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar11 + 0x98) + lVar13 * 8);
      if ((lVar2 != 0) &&
         (cVar8 = FUN_144fbcfc0(*(undefined4 *)(lVar2 + 0xa0),*(undefined8 *)(lVar2 + 0x110),0),
         cVar8 != '\0')) {
        auVar18 = ZEXT1664(CONCAT412(auVar18._12_4_ + *(float *)(lVar2 + 0xbc),
                                     CONCAT48(auVar18._8_4_ + *(float *)(lVar2 + 0xb8),
                                              CONCAT44(auVar18._4_4_ + *(float *)(lVar2 + 0xb4),
                                                       auVar18._0_4_ + *(float *)(lVar2 + 0xb0)))));
        fVar19 = fVar19 + *(float *)(lVar2 + 0xf0);
        fVar21 = fVar21 + *(float *)(lVar2 + 0xf4);
        fVar23 = fVar23 + *(float *)(lVar2 + 0xf8);
        fVar25 = fVar25 + *(float *)(lVar2 + 0xfc);
        iVar12 = iVar12 + 1;
      }
      lVar13 = lVar13 + 1;
    } while (iVar1 != lVar13);
    if (0 < iVar12) {
      auVar17._0_12_ = ZEXT812(0);
      auVar17._12_4_ = 0;
      fVar14 = _DAT_145fc6ed8 / (float)iVar12;
      fVar19 = fVar14 * fVar19;
      fVar21 = fVar14 * fVar21;
      fVar23 = fVar14 * fVar23;
      fVar25 = fVar14 * fVar25;
      auVar16._0_4_ = fVar19 * fVar19;
      auVar16._4_4_ = fVar21 * fVar21;
      auVar16._8_4_ = fVar23 * fVar23;
      auVar16._12_4_ = fVar25 * fVar25;
      auVar16 = vblendps_avx(auVar16,auVar17,8);
      auVar16 = vhaddps_avx(auVar16,auVar16);
      auVar16 = vhaddps_avx(auVar16,auVar16);
      auVar15 = vrsqrtps_avx(auVar16);
      fVar3 = auVar15._0_4_;
      fVar4 = auVar15._4_4_;
      fVar5 = auVar15._8_4_;
      fVar6 = auVar15._12_4_;
      auVar15 = vcmpps_avx(auVar17,auVar16,1);
      fVar20 = fVar3 * fVar3 * auVar16._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
      fVar22 = fVar4 * fVar4 * auVar16._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
      fVar24 = fVar5 * fVar5 * auVar16._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
      fVar26 = fVar6 * fVar6 * auVar16._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08;
      auVar16 = vshufps_avx(auVar18._0_16_,auVar18._0_16_,0xaa);
      auVar7._4_4_ = fVar14 * auVar16._4_4_;
      auVar7._0_4_ = fVar14 * auVar16._0_4_;
      auVar7._8_4_ = fVar14 * auVar16._8_4_;
      auVar7._12_4_ = fVar14 * auVar16._12_4_;
      auVar16 = vblendps_avx(*(undefined1 (*) [16])(param_2 + 0xb0),auVar7,4);
      *(undefined1 (*) [16])(param_2 + 0xb0) = auVar16;
      *(uint *)(param_2 + 0xc0) = auVar15._0_4_ & (uint)((fVar20 * fVar3 + fVar3) * fVar19);
      *(uint *)(param_2 + 0xc4) = auVar15._4_4_ & (uint)((fVar22 * fVar4 + fVar4) * fVar21);
      *(uint *)(param_2 + 200) = auVar15._8_4_ & (uint)((fVar24 * fVar5 + fVar5) * fVar23);
      *(uint *)(param_2 + 0xcc) = auVar15._12_4_ & (uint)((fVar26 * fVar6 + fVar6) * fVar25);
      *(byte *)(param_2 + 0x14d) = *(byte *)(param_2 + 0x14d) | 4;
    }
  }
  lVar11 = func_0x0001450bb780(*(undefined4 *)((longlong)plVar10 + 0x9c));
  if (lVar11 != 0) {
    FUN_144e40a00(lVar11,&fStack_68);
    lVar11 = func_0x000144ec2d10(*(undefined4 *)((longlong)plVar10 + 0x9c));
    if (lVar11 != 0) {
      auVar18 = ZEXT1664(CONCAT412(fStack_5c * *(float *)((longlong)plVar10 + 0x5c),
                                   CONCAT48(fStack_60 * *(float *)(plVar10 + 0xb),
                                            CONCAT44(fStack_64 *
                                                     *(float *)((longlong)plVar10 + 0x54),
                                                     fStack_68 * *(float *)(plVar10 + 10)))));
      cVar8 = (**(code **)(*plVar10 + 0x480))(plVar10,1);
      if ((cVar8 != '\0') || (fVar19 = (float)FUN_144ec2d60(lVar11), 0.0 <= fVar19)) {
        bVar9 = 0;
      }
      else {
        auVar15._0_12_ = ZEXT812(0);
        auVar15._12_4_ = 0;
        auVar16 = vblendps_avx(auVar18._0_16_,auVar15,8);
        auVar16 = vhaddps_avx(auVar16,auVar16);
        auVar16 = vhaddps_avx(auVar16,auVar16);
        auVar16 = vcmpps_avx(auVar16,ZEXT416(0) << 0x20,5);
        bVar9 = ((((SUB161(auVar16 >> 0x1f,0) & 1) == 0 && (SUB161(auVar16 >> 0x3f,0) & 1) == 0) &&
                 (SUB161(auVar16 >> 0x5f,0) & 1) == 0) && -1 < auVar16[0xf]) * '\x02';
      }
      *(byte *)(param_2 + 0x14c) = *(byte *)(param_2 + 0x14c) & 0xfd | bVar9;
      return;
    }
    return;
  }
  return;
}

