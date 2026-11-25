// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f6ac0  size: 951 bytes
// Name:    FUN_1400f6ac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140451360, FUN_1409ea8b0, FUN_1400f6f60, FUN_144f8c4b0, FUN_1400f6e80, FUN_144f8cbc0, FUN_1400f6ee0, FUN_140451760, FUN_1454453c0, FUN_145286be0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400f6ac0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  if ((*(byte *)(param_1 + 0x10) & 0x10) == 0) {
    uVar14 = 500;
LAB_1400f6e49:
    FUN_1409ea8b0(param_1,uVar14,0x96,1);
  }
  else {
    cVar10 = FUN_1400f6ee0(param_1);
    if (cVar10 != '\0') {
      return 0;
    }
    cVar10 = FUN_1400f6e80(param_1);
    if (cVar10 == '\0') {
      uVar14 = *(undefined8 *)(param_1 + 0x728);
      uVar13 = 0x10;
    }
    else {
      cVar10 = FUN_1400f6f60(param_1);
      if (cVar10 == '\0') {
        return 0;
      }
      uVar11 = *(undefined4 *)(param_1 + 0x1c8);
      uVar15 = *(uint *)(param_1 + 0x2b0);
      uVar17 = *(uint *)(param_1 + 0x2b4);
      uVar14 = *(undefined8 *)(param_1 + 0x2a8);
      cVar10 = FUN_140451360(param_1);
      FUN_140451760(param_1,uVar11,uVar15,uVar14);
      if (cVar10 == '\0') {
        return 0;
      }
      cVar10 = FUN_144f8c4b0(param_1);
      if (cVar10 != '\0') {
        return 0;
      }
      uVar14 = CONCAT71((uint7)(uint3)((uint)uVar11 >> 8),1);
      if (*(char *)(param_1 + 0x2a1) != '\x01') {
        return uVar14;
      }
      auVar18._0_12_ = ZEXT812(0);
      auVar18._12_4_ = 0;
      auVar18 = vcmpps_avx(auVar18,*(undefined1 (*) [16])(param_1 + 0x680),0);
      uVar11 = vmovmskps_avx(auVar18);
      if ((~(byte)uVar11 & 7) == 0) {
        uVar16 = *(uint *)(param_1 + 0x2b0);
        uVar12 = *(uint *)(param_1 + 0x2b4);
LAB_1400f6ca0:
        FUN_145286be0(param_1,param_1 + 0x650,param_1 + 0x690,uVar16,uVar12,
                      *(undefined4 *)(param_1 + 0x40));
        fVar34 = *(float *)(param_1 + 0x660);
        fVar36 = *(float *)(param_1 + 0x664);
        fVar37 = *(float *)(param_1 + 0x668);
        fVar38 = *(float *)(param_1 + 0x66c);
        fVar25 = *(float *)(param_1 + 0x670);
        fVar28 = *(float *)(param_1 + 0x674);
        fVar29 = *(float *)(param_1 + 0x678);
        fVar30 = *(float *)(param_1 + 0x67c);
        auVar19._0_12_ = ZEXT812(0);
        auVar19._12_4_ = 0;
        fVar41 = *(float *)(param_1 + 0x650);
        fVar42 = *(float *)(param_1 + 0x654);
        fVar43 = *(float *)(param_1 + 0x658);
        fVar44 = *(float *)(param_1 + 0x65c);
        auVar23._0_4_ = fVar25 * fVar25;
        auVar23._4_4_ = fVar28 * fVar28;
        auVar23._8_4_ = fVar29 * fVar29;
        auVar23._12_4_ = fVar30 * fVar30;
        auVar45._0_4_ = fVar34 * fVar34;
        auVar45._4_4_ = fVar36 * fVar36;
        auVar45._8_4_ = fVar37 * fVar37;
        auVar45._12_4_ = fVar38 * fVar38;
        auVar18 = vblendps_avx(auVar23,auVar19,8);
        auVar23 = vblendps_avx(auVar45,auVar19,8);
        auVar23 = vhaddps_avx(auVar23,auVar23);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        auVar21 = vhaddps_avx(auVar18,auVar18);
        auVar23 = vhaddps_avx(auVar23,auVar23);
        auVar24._4_4_ = _DAT_145fc6f4c;
        auVar24._0_4_ = _DAT_145fc6f4c;
        auVar24._8_4_ = _DAT_145fc6f4c;
        auVar24._12_4_ = _DAT_145fc6f4c;
        auVar33._0_4_ = (uint)(auVar21._0_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar33._4_4_ = (uint)(auVar21._4_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar33._8_4_ = (uint)(auVar21._8_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar33._12_4_ = (uint)(auVar21._12_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar46._0_4_ = (uint)(auVar23._0_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar46._4_4_ = (uint)(auVar23._4_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar46._8_4_ = (uint)(auVar23._8_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar46._12_4_ = (uint)(auVar23._12_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar33 = vmaxps_avx(auVar46,auVar33);
        auVar47._0_4_ = fVar41 * fVar41;
        auVar47._4_4_ = fVar42 * fVar42;
        auVar47._8_4_ = fVar43 * fVar43;
        auVar47._12_4_ = fVar44 * fVar44;
        auVar18 = vblendps_avx(auVar47,auVar19,8);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        auVar20 = vrsqrtps_avx(auVar18);
        auVar31._0_4_ = (uint)(auVar18._0_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar31._4_4_ = (uint)(auVar18._4_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar31._8_4_ = (uint)(auVar18._8_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar31._12_4_ = (uint)(auVar18._12_4_ + _DAT_145fc6f48) & _DAT_145fc6f4c;
        auVar33 = vmaxps_avx(auVar31,auVar33);
        auVar32._4_4_ = _DAT_146159ef4;
        auVar32._0_4_ = _DAT_146159ef4;
        auVar32._8_4_ = _DAT_146159ef4;
        auVar32._12_4_ = _DAT_146159ef4;
        fVar1 = auVar20._0_4_;
        fVar2 = auVar20._4_4_;
        fVar3 = auVar20._8_4_;
        fVar4 = auVar20._12_4_;
        auVar33 = vcmpps_avx(auVar33,auVar32,2);
        fVar41 = ((_DAT_145fc6f08 * fVar1 * fVar1 * auVar18._0_4_ - _DAT_145fc6f08) * fVar1 + fVar1)
                 * fVar41;
        fVar42 = ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar18._4_4_ - _DAT_145fc6f08) * fVar2 + fVar2)
                 * fVar42;
        fVar43 = ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar18._8_4_ - _DAT_145fc6f08) * fVar3 + fVar3)
                 * fVar43;
        fVar44 = ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar18._12_4_ - _DAT_145fc6f08) * fVar4 + fVar4
                 ) * fVar44;
        auVar18 = vrsqrtps_avx(auVar23);
        fVar1 = auVar18._0_4_;
        fVar3 = auVar18._4_4_;
        fVar5 = auVar18._8_4_;
        fVar7 = auVar18._12_4_;
        auVar18 = vrsqrtps_avx(auVar21);
        fVar2 = auVar18._0_4_;
        fVar4 = auVar18._4_4_;
        fVar6 = auVar18._8_4_;
        fVar8 = auVar18._12_4_;
        fVar34 = ((_DAT_145fc6f08 * fVar1 * fVar1 * auVar23._0_4_ - _DAT_145fc6f08) * fVar1 + fVar1)
                 * fVar34;
        fVar36 = ((_DAT_145fc6f08 * fVar3 * fVar3 * auVar23._4_4_ - _DAT_145fc6f08) * fVar3 + fVar3)
                 * fVar36;
        fVar37 = ((_DAT_145fc6f08 * fVar5 * fVar5 * auVar23._8_4_ - _DAT_145fc6f08) * fVar5 + fVar5)
                 * fVar37;
        fVar38 = ((_DAT_145fc6f08 * fVar7 * fVar7 * auVar23._12_4_ - _DAT_145fc6f08) * fVar7 + fVar7
                 ) * fVar38;
        fVar25 = ((_DAT_145fc6f08 * fVar2 * fVar2 * auVar21._0_4_ - _DAT_145fc6f08) * fVar2 + fVar2)
                 * fVar25;
        fVar28 = ((_DAT_145fc6f08 * fVar4 * fVar4 * auVar21._4_4_ - _DAT_145fc6f08) * fVar4 + fVar4)
                 * fVar28;
        fVar29 = ((_DAT_145fc6f08 * fVar6 * fVar6 * auVar21._8_4_ - _DAT_145fc6f08) * fVar6 + fVar6)
                 * fVar29;
        fVar30 = ((_DAT_145fc6f08 * fVar8 * fVar8 * auVar21._12_4_ - _DAT_145fc6f08) * fVar8 + fVar8
                 ) * fVar30;
        auVar39._0_4_ = fVar25 * fVar34;
        auVar39._4_4_ = fVar28 * fVar36;
        auVar39._8_4_ = fVar29 * fVar37;
        auVar39._12_4_ = fVar30 * fVar38;
        auVar26._0_4_ = fVar25 * fVar41;
        auVar26._4_4_ = fVar28 * fVar42;
        auVar26._8_4_ = fVar29 * fVar43;
        auVar26._12_4_ = fVar30 * fVar44;
        auVar35._0_4_ = fVar34 * fVar41;
        auVar35._4_4_ = fVar36 * fVar42;
        auVar35._8_4_ = fVar37 * fVar43;
        auVar35._12_4_ = fVar38 * fVar44;
        auVar18 = vblendps_avx(auVar39,auVar19,8);
        auVar23 = vblendps_avx(auVar26,auVar19,8);
        auVar21 = vblendps_avx(auVar35,auVar19,8);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        auVar23 = vhaddps_avx(auVar23,auVar23);
        auVar21 = vhaddps_avx(auVar21,auVar21);
        auVar18 = vhaddps_avx(auVar18,auVar18);
        auVar23 = vhaddps_avx(auVar23,auVar23);
        auVar21 = vhaddps_avx(auVar21,auVar21);
        auVar40._0_4_ = auVar18._0_4_ & _DAT_145fc6f4c;
        auVar40._4_4_ = auVar18._4_4_ & _DAT_145fc6f4c;
        auVar40._8_4_ = auVar18._8_4_ & _DAT_145fc6f4c;
        auVar40._12_4_ = auVar18._12_4_ & _DAT_145fc6f4c;
        auVar27._0_4_ = auVar23._0_4_ & _DAT_145fc6f4c;
        auVar27._4_4_ = auVar23._4_4_ & _DAT_145fc6f4c;
        auVar27._8_4_ = auVar23._8_4_ & _DAT_145fc6f4c;
        auVar27._12_4_ = auVar23._12_4_ & _DAT_145fc6f4c;
        auVar20._0_4_ = auVar21._0_4_ & _DAT_145fc6f4c;
        auVar20._4_4_ = auVar21._4_4_ & _DAT_145fc6f4c;
        auVar20._8_4_ = auVar21._8_4_ & _DAT_145fc6f4c;
        auVar20._12_4_ = auVar21._12_4_ & _DAT_145fc6f4c;
        auVar23 = vpcmpeqd_avx(auVar24,auVar24);
        auVar18 = vmaxps_avx(auVar27,auVar40);
        auVar18 = vmaxps_avx(auVar20,auVar18);
        auVar18 = vcmpps_avx(auVar18,auVar32,2);
        auVar21._0_4_ = auVar18._0_4_ & auVar33._0_4_;
        auVar21._4_4_ = auVar18._4_4_ & auVar33._4_4_;
        auVar21._8_4_ = auVar18._8_4_ & auVar33._8_4_;
        auVar21._12_4_ = auVar18._12_4_ & auVar33._12_4_;
        if ((auVar23 & ~auVar21) == (undefined1  [16])0x0) {
          auVar18 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x590),
                               *(undefined1 (*) [16])(param_1 + 0x680));
          auVar22._0_4_ = auVar18._0_4_ * auVar18._0_4_;
          auVar22._4_4_ = auVar18._4_4_ * auVar18._4_4_;
          auVar22._8_4_ = auVar18._8_4_ * auVar18._8_4_;
          auVar22._12_4_ = auVar18._12_4_ * auVar18._12_4_;
          auVar18 = vhaddps_avx(auVar22,auVar22);
          if (auVar18._0_4_ < _DAT_14615bcf4) {
            uVar16 = *(uint *)(param_1 + 0x2b0);
            goto LAB_1400f6c57;
          }
        }
        uVar14 = 0x9c4;
        goto LAB_1400f6e49;
      }
      uVar16 = *(uint *)(param_1 + 0x2b0);
      uVar15 = uVar15 & 0x3fffff;
      uVar12 = *(uint *)(param_1 + 0x2b4);
      bVar9 = uVar15 == 0x3fffff;
      if ((uVar16 & 0x3fffff) != 0x3fffff) {
        bVar9 = uVar15 == (uVar16 & 0x3fffff) && uVar15 != 0x3fffff;
      }
      if (!bVar9) goto LAB_1400f6ca0;
      uVar17 = uVar17 & 0x3fffff;
      bVar9 = uVar17 == 0x3fffff;
      if ((uVar12 & 0x3fffff) != 0x3fffff) {
        bVar9 = uVar17 == (uVar12 & 0x3fffff) && uVar17 != 0x3fffff;
      }
      if (!bVar9) goto LAB_1400f6ca0;
LAB_1400f6c57:
      uVar13 = func_0x000144e929d0(uVar16);
      cVar10 = FUN_144f8cbc0(param_1,uVar13,param_1 + 0x650);
      if (cVar10 != '\0') {
        return uVar14;
      }
      FUN_1454453c0(param_1);
      uVar14 = *(undefined8 *)(param_1 + 0x728);
      uVar13 = 0x200;
    }
    func_0x0001409e9e90(uVar14,uVar13);
  }
  return 0;
}

