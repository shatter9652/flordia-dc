// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400d12d0  size: 595 bytes
// Name:    FUN_1400d12d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1406e5a30, FUN_144edcc50, FUN_144f632d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000144f63c03) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400d12d0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar37;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar34 [64];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  float fVar44;
  undefined1 auVar45 [64];
  float fVar46;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar47 [16];
  undefined1 auVar51 [16];
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auVar39 [64];
  
  *(byte *)(param_2 + 0x14d) = *(byte *)(param_2 + 0x14d) | 4;
  FUN_1406e5a30(param_3 + 0x640);
  auVar12._4_4_ = _DAT_14615a290;
  auVar12._0_4_ = _DAT_14615a290;
  auVar12._8_4_ = _DAT_14615a290;
  auVar12._12_4_ = _DAT_14615a290;
  auVar1._8_8_ = uStack_70;
  auVar1._0_8_ = uStack_78;
  auVar12 = vrcpps_avx(auVar12);
  fVar28 = auVar12._0_4_;
  fVar35 = auVar12._4_4_;
  fVar36 = auVar12._8_4_;
  fVar37 = auVar12._12_4_;
  auVar9._0_4_ = ((-(fVar28 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar28 + fVar28) *
                 (float)uStack_78;
  fVar28 = (float)((ulonglong)uStack_78 >> 0x20);
  auVar9._4_4_ = ((-(fVar35 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar35 + fVar35) * fVar28;
  auVar9._8_4_ = ((-(fVar36 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar36 + fVar36) *
                 (float)uStack_70;
  fVar35 = (float)((ulonglong)uStack_70 >> 0x20);
  auVar9._12_4_ = ((-(fVar37 * _DAT_14615a290) + _DAT_145fc6ed8) * fVar37 + fVar37) * fVar35;
  auVar9 = vroundps_avx(auVar9,3);
  auVar13._0_4_ = -(auVar9._0_4_ * _DAT_14615a290) + (float)uStack_78;
  auVar13._4_4_ = -(auVar9._4_4_ * _DAT_14615a290) + fVar28;
  auVar13._8_4_ = -(auVar9._8_4_ * _DAT_14615a290) + (float)uStack_70;
  auVar13._12_4_ = -(auVar9._12_4_ * _DAT_14615a290) + fVar35;
  auVar12 = vblendps_avx(auVar1,auVar13,3);
  auVar10._0_4_ = (int)auVar9._0_4_;
  auVar10._4_4_ = (int)auVar9._4_4_;
  auVar10._8_4_ = (int)auVar9._8_4_;
  auVar10._12_4_ = (int)auVar9._12_4_;
  auVar9 = vpackssdw_avx(auVar10,auVar10);
  auVar12 = vinsertps_avx(auVar12,auVar9,0x30);
  *(undefined1 (*) [16])(param_2 + 0xb0) = auVar12;
  uStack_98 = *(undefined8 *)(param_3 + 0x660);
  uStack_90 = *(undefined8 *)(param_3 + 0x668);
  if (*(char *)(param_2 + 0xe0) != '\x01') {
    uVar7 = *(undefined8 *)(param_3 + 0x660);
    uVar11 = *(undefined8 *)(param_3 + 0x668);
    goto LAB_1400d13df;
  }
  if ((param_4 == 0) ||
     ((-1 < *(char *)(param_2 + 0x140) && (*(char *)(param_1 + 0x38c) != '\x01')))) {
    uStack_a8 = (uint)*(undefined8 *)(param_3 + 0x6a0);
    uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x6a0) >> 0x20);
    uStack_a0 = *(undefined8 *)(param_3 + 0x6a8);
LAB_1400d13bc:
    auVar8._0_12_ = ZEXT812(0);
    auVar8._12_4_ = 0;
    auVar2._4_4_ = uStack_a4;
    auVar2._0_4_ = uStack_a8;
    auVar2._8_8_ = uStack_a0;
    auVar12 = vcmpps_avx(auVar8,auVar2,0);
    uVar3 = vmovmskps_avx(auVar12);
    puVar4 = (uint *)&uStack_98;
    if ((~(byte)uVar3 & 7) != 0) {
      puVar4 = &uStack_a8;
    }
  }
  else {
    puVar4 = &uStack_a8;
    pvVar6 = (void *)(param_4 + 0x1d70);
    FUN_144f632d0();
    fVar35 = (float)(uStack_a8 ^ _DAT_145fc6f10);
    atan2f(pvVar6,puVar4);
    puVar5 = (undefined8 *)func_0x000144ecfea0(param_4);
    uStack_88 = *puVar5;
    uStack_80 = puVar5[1];
    fVar28 = (float)FUN_144edcc50(&uStack_88,*(undefined4 *)(puVar5 + 2),1);
    auVar14._4_4_ = _DAT_146159be0;
    auVar14._0_4_ = _DAT_146159be0;
    auVar14._8_4_ = _DAT_146159be0;
    auVar14._12_4_ = _DAT_146159be0;
    auVar43 = ZEXT464((uint)_DAT_145fc6f80);
    fVar28 = fVar28 - fVar35;
    auVar34 = ZEXT464((uint)fVar28);
    auVar38._0_12_ = ZEXT812(0);
    auVar38._12_4_ = 0;
    auVar39 = ZEXT1664(auVar38);
    auVar12 = vcmpss_avx(auVar38,ZEXT416((uint)fVar28),2);
    auVar12 = vblendvps_avx(auVar14,ZEXT416((uint)_DAT_145fc6f80),auVar12);
    auVar45 = ZEXT1664(auVar12);
    fVar28 = (float)func_0x000145f40820(auVar12._0_4_ + fVar28,_DAT_145fc6f84);
    auVar9 = ZEXT416((uint)(fVar28 - auVar45._0_4_));
    auVar12 = vcmpss_avx(auVar9,ZEXT416(_DAT_146159be0),2);
    auVar1 = vcmpss_avx(auVar34._0_16_,auVar43._0_16_,2);
    auVar12 = vblendvps_avx(auVar9,auVar43._0_16_,auVar12);
    auVar9 = vcmpss_avx(auVar39._0_16_,ZEXT416((uint)(auVar43._0_4_ + auVar34._0_4_)),2);
    auVar9 = vblendvps_avx(auVar12,auVar34._0_16_,auVar9);
    auVar12 = vblendvps_avx(auVar12,auVar9,auVar1);
    uStack_a8 = (uint)*(undefined8 *)(param_3 + 0x6a0);
    uStack_a4 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x6a0) >> 0x20);
    uStack_a0 = *(undefined8 *)(param_3 + 0x6a8);
    if ((float)(auVar12._0_4_ & _DAT_145fc6f4c) < _DAT_146170774) goto LAB_1400d13bc;
    puVar4 = (uint *)&uStack_98;
  }
  uVar7 = *(undefined8 *)puVar4;
  uVar11 = *(undefined8 *)(puVar4 + 2);
LAB_1400d13df:
  *(undefined8 *)(param_2 + 0xc0) = uVar7;
  *(undefined8 *)(param_2 + 200) = uVar11;
  auVar12 = *(undefined1 (*) [16])(param_2 + 0xc0);
  auVar19._4_4_ = _DAT_145fc6f48;
  auVar19._0_4_ = _DAT_145fc6f48;
  auVar19._8_4_ = _DAT_145fc6f48;
  auVar19._12_4_ = _DAT_145fc6f48;
  auVar15._0_4_ = auVar12._0_4_ * _DAT_14614f7f0;
  auVar15._4_4_ = auVar12._4_4_ * _UNK_14614f7f4;
  auVar15._8_4_ = auVar12._8_4_ * _UNK_14614f7f8;
  auVar15._12_4_ = auVar12._12_4_ * _UNK_14614f7fc;
  auVar9 = vminss_avx(ZEXT416(_UNK_14615d220),ZEXT416(_UNK_14615d220));
  fVar44 = auVar9._0_4_;
  auVar17._4_4_ = fVar44;
  auVar17._0_4_ = fVar44;
  auVar17._8_4_ = fVar44;
  auVar17._12_4_ = fVar44;
  auVar10 = ZEXT816(0) << 0x20;
  auVar9 = vblendps_avx(auVar15,auVar10,8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar9 = vmaxps_avx(auVar9,auVar19);
  auVar16._4_4_ = _DAT_145fc6ed8;
  auVar16._0_4_ = _DAT_145fc6ed8;
  auVar16._8_4_ = _DAT_145fc6ed8;
  auVar16._12_4_ = _DAT_145fc6ed8;
  auVar1 = vminps_avx(auVar9,auVar16);
  fVar46 = auVar1._0_4_;
  auVar23._0_4_ = (float)((uint)fVar46 & _DAT_145fc6f4c);
  fVar48 = auVar1._4_4_;
  auVar23._4_4_ = (float)((uint)fVar48 & _DAT_145fc6f4c);
  fVar49 = auVar1._8_4_;
  auVar23._8_4_ = (float)((uint)fVar49 & _DAT_145fc6f4c);
  fVar50 = auVar1._12_4_;
  auVar23._12_4_ = (float)((uint)fVar50 & _DAT_145fc6f4c);
  auVar13 = vsubps_avx(auVar16,auVar23);
  auVar9 = vrsqrtps_avx(auVar13);
  fVar28 = auVar9._0_4_;
  fVar35 = auVar9._4_4_;
  fVar36 = auVar9._8_4_;
  fVar37 = auVar9._12_4_;
  auVar40._4_4_ = _DAT_146159bfc;
  auVar40._0_4_ = _DAT_146159bfc;
  auVar40._8_4_ = _DAT_146159bfc;
  auVar40._12_4_ = _DAT_146159bfc;
  auVar9 = vcmpps_avx(auVar40,auVar13,2);
  fVar28 = (float)(auVar9._0_4_ &
                  (uint)(((fVar28 * fVar28 * auVar13._0_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar28 + fVar28) * auVar13._0_4_));
  fVar35 = (float)(auVar9._4_4_ &
                  (uint)(((fVar35 * fVar35 * auVar13._4_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar35 + fVar35) * auVar13._4_4_));
  fVar36 = (float)(auVar9._8_4_ &
                  (uint)(((fVar36 * fVar36 * auVar13._8_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar36 + fVar36) * auVar13._8_4_));
  fVar37 = (float)(auVar9._12_4_ &
                  (uint)(((fVar37 * fVar37 * auVar13._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08) *
                          fVar37 + fVar37) * auVar13._12_4_));
  fVar46 = fVar46 * fVar46 * fVar46 * fVar46 *
           (auVar23._0_4_ *
            (auVar23._0_4_ * (auVar23._0_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar23._0_4_ *
           (auVar23._0_4_ * (auVar23._0_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar48 = fVar48 * fVar48 * fVar48 * fVar48 *
           (auVar23._4_4_ *
            (auVar23._4_4_ * (auVar23._4_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar23._4_4_ *
           (auVar23._4_4_ * (auVar23._4_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar49 = fVar49 * fVar49 * fVar49 * fVar49 *
           (auVar23._8_4_ *
            (auVar23._8_4_ * (auVar23._8_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar23._8_4_ *
           (auVar23._8_4_ * (auVar23._8_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  fVar50 = fVar50 * fVar50 * fVar50 * fVar50 *
           (auVar23._12_4_ *
            (auVar23._12_4_ * (auVar23._12_4_ * _DAT_146159c04 + _DAT_146159c00) + _DAT_146159c08) +
           _DAT_146159c0c) +
           auVar23._12_4_ *
           (auVar23._12_4_ * (auVar23._12_4_ * _DAT_146159c14 + _DAT_146159c10) + _DAT_146159c18) +
           _DAT_146159c1c;
  auVar24._0_4_ = -(fVar46 * fVar28) + _DAT_145fc6f80;
  auVar24._4_4_ = -(fVar48 * fVar35) + _DAT_145fc6f80;
  auVar24._8_4_ = -(fVar49 * fVar36) + _DAT_145fc6f80;
  auVar24._12_4_ = -(fVar50 * fVar37) + _DAT_145fc6f80;
  auVar29._0_4_ = fVar46 * fVar28;
  auVar29._4_4_ = fVar48 * fVar35;
  auVar29._8_4_ = fVar49 * fVar36;
  auVar29._12_4_ = fVar50 * fVar37;
  auVar9 = vblendvps_avx(auVar29,auVar24,auVar1);
  auVar9 = vcmpps_avx(auVar17,auVar9,5);
  if ((((SUB161(auVar9 >> 0x1f,0) & 1) == 0 && (SUB161(auVar9 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar9 >> 0x5f,0) & 1) == 0) && -1 < auVar9[0xf]) {
    auVar25._0_4_ = auVar12._0_4_ * _DAT_145fc6ed8;
    auVar25._4_4_ = auVar12._4_4_ * 0.0;
    auVar25._8_4_ = auVar12._8_4_ * 0.0;
    auVar25._12_4_ = auVar12._12_4_ * 0.0;
    auVar12 = vshufps_avx(auVar12,auVar12,0xc9);
    auVar9 = vshufps_avx(auVar25,auVar25,0xd2);
    fVar46 = -(_DAT_145fc6ed8 * auVar12._0_4_) + auVar9._0_4_;
    fVar48 = -(auVar12._4_4_ * 0.0) + auVar9._4_4_;
    fVar49 = -(auVar12._8_4_ * 0.0) + auVar9._8_4_;
    fVar50 = -(auVar12._12_4_ * 0.0) + auVar9._12_4_;
    auVar26._0_4_ = fVar46 * fVar46;
    auVar26._4_4_ = fVar48 * fVar48;
    auVar26._8_4_ = fVar49 * fVar49;
    auVar26._12_4_ = fVar50 * fVar50;
    auVar12 = vblendps_avx(auVar26,auVar10,8);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar12 = vhaddps_avx(auVar12,auVar12);
    auVar9 = vrsqrtps_avx(auVar12);
    fVar28 = auVar9._0_4_;
    fVar35 = auVar9._4_4_;
    fVar36 = auVar9._8_4_;
    fVar37 = auVar9._12_4_;
    auVar30._4_4_ = _DAT_145fc6f14;
    auVar30._0_4_ = _DAT_145fc6f14;
    auVar30._8_4_ = _DAT_145fc6f14;
    auVar30._12_4_ = _DAT_145fc6f14;
    auVar21._0_4_ =
         ((-(_DAT_145fc6edc * fVar28 * fVar28 * auVar12._0_4_) + _DAT_145fc6edc) * fVar28 + fVar28)
         * fVar46;
    auVar21._4_4_ =
         ((-(_DAT_145fc6edc * fVar35 * fVar35 * auVar12._4_4_) + _DAT_145fc6edc) * fVar35 + fVar35)
         * fVar48;
    auVar21._8_4_ =
         ((-(_DAT_145fc6edc * fVar36 * fVar36 * auVar12._8_4_) + _DAT_145fc6edc) * fVar36 + fVar36)
         * fVar49;
    auVar21._12_4_ =
         ((-(_DAT_145fc6edc * fVar37 * fVar37 * auVar12._12_4_) + _DAT_145fc6edc) * fVar37 + fVar37)
         * fVar50;
    auVar32._4_4_ = _DAT_145fc6edc;
    auVar32._0_4_ = _DAT_145fc6edc;
    auVar32._8_4_ = _DAT_145fc6edc;
    auVar32._12_4_ = _DAT_145fc6edc;
    auVar12 = vcmpps_avx(auVar30,auVar12,1);
    auVar12 = vblendvps_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar21,auVar12);
    auVar31._0_4_ = (uint)(fVar44 * _DAT_146159b48) & _DAT_145fc6f10;
    auVar31._4_4_ = (uint)(fVar44 * _DAT_146159b48) & _DAT_145fc6f10;
    auVar31._8_4_ = (uint)(fVar44 * _DAT_146159b48) & _DAT_145fc6f10;
    auVar31._12_4_ = (uint)(fVar44 * _DAT_146159b48) & _DAT_145fc6f10;
    auVar32 = auVar32 | auVar31;
    auVar41._4_4_ = _DAT_145f43778;
    auVar41._0_4_ = _DAT_145f43778;
    auVar41._8_4_ = _DAT_145f43778;
    auVar41._12_4_ = _DAT_145f43778;
    auVar1 = vpcmpeqd_avx(auVar32,auVar32);
    auVar27._0_4_ = (int)(fVar44 * _DAT_146159b48 + auVar32._0_4_);
    auVar27._4_4_ = (int)(fVar44 * _DAT_146159b48 + auVar32._4_4_);
    auVar27._8_4_ = (int)(fVar44 * _DAT_146159b48 + auVar32._8_4_);
    auVar27._12_4_ = (int)(fVar44 * _DAT_146159b48 + auVar32._12_4_);
    auVar9 = vcvtdq2ps_avx(auVar27);
    auVar13 = vpsubd_avx(auVar27,auVar1);
    fVar28 = auVar9._0_4_ * _DAT_146159b50 + auVar9._0_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar44
    ;
    fVar35 = auVar9._4_4_ * _DAT_146159b50 + auVar9._4_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar44
    ;
    fVar36 = auVar9._8_4_ * _DAT_146159b50 + auVar9._8_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar44
    ;
    fVar37 = auVar9._12_4_ * _DAT_146159b50 +
             auVar9._12_4_ * _DAT_146159b4c + _DAT_145fc6edc * fVar44;
    fVar44 = fVar28 * fVar28;
    fVar46 = fVar35 * fVar35;
    fVar48 = fVar36 * fVar36;
    fVar49 = fVar37 * fVar37;
    auVar47._0_4_ =
         fVar44 * (fVar44 * (fVar44 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar47._4_4_ =
         fVar46 * (fVar46 * (fVar46 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar47._8_4_ =
         fVar48 * (fVar48 * (fVar48 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar47._12_4_ =
         fVar49 * (fVar49 * (fVar49 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
         _DAT_145fc6ed8;
    auVar9 = vpand_avx(auVar41,auVar27);
    auVar42._4_4_ = _DAT_145f43774;
    auVar42._0_4_ = _DAT_145f43774;
    auVar42._8_4_ = _DAT_145f43774;
    auVar42._12_4_ = _DAT_145f43774;
    auVar51._0_4_ =
         fVar44 * fVar28 * (fVar44 * (fVar44 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar28;
    auVar51._4_4_ =
         fVar46 * fVar35 * (fVar46 * (fVar46 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar35;
    auVar51._8_4_ =
         fVar48 * fVar36 * (fVar48 * (fVar48 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar36;
    auVar51._12_4_ =
         fVar49 * fVar37 * (fVar49 * (fVar49 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
         fVar37;
    auVar14 = vpcmpeqd_avx(auVar9,auVar10);
    auVar1 = vpand_avx(auVar42,auVar27);
    auVar13 = vpand_avx(auVar42,auVar13);
    auVar2 = vpsubd_avx(auVar10,auVar9);
    auVar38 = vpcmpeqd_avx(auVar1,auVar10);
    auVar13 = vpcmpeqd_avx(auVar13,auVar10);
    auVar9 = vblendvps_avx(auVar47,auVar51,auVar14);
    auVar1 = vblendvps_avx(auVar47,auVar51,auVar2);
    auVar33._0_4_ = auVar9._0_4_ ^ _DAT_145fc6f10;
    auVar33._4_4_ = auVar9._4_4_ ^ _DAT_145fc6f10;
    auVar33._8_4_ = auVar9._8_4_ ^ _DAT_145fc6f10;
    auVar33._12_4_ = auVar9._12_4_ ^ _DAT_145fc6f10;
    auVar18._0_4_ = auVar1._0_4_ ^ _DAT_145fc6f10;
    auVar18._4_4_ = auVar1._4_4_ ^ _DAT_145fc6f10;
    auVar18._8_4_ = auVar1._8_4_ ^ _DAT_145fc6f10;
    auVar18._12_4_ = auVar1._12_4_ ^ _DAT_145fc6f10;
    auVar9 = vblendvps_avx(auVar33,auVar9,auVar38);
    auVar1 = vblendvps_avx(auVar18,auVar1,auVar13);
    auVar22._0_4_ = auVar9._0_4_ * auVar12._0_4_;
    auVar22._4_4_ = auVar9._4_4_ * auVar12._4_4_;
    auVar22._8_4_ = auVar9._8_4_ * auVar12._8_4_;
    auVar22._12_4_ = auVar9._12_4_ * auVar12._12_4_;
    auVar12 = vblendps_avx(auVar22,auVar1,8);
    auVar9 = vshufps_avx(auVar1,auVar1,0xff);
    auVar1 = vshufps_avx(auVar12,auVar12,0xc9);
    auVar12 = vshufps_avx(auVar12,auVar12,0xd2);
    fVar28 = auVar12._0_4_ * _DAT_14615bd00 + auVar1._0_4_ * _DAT_145fc6ed8;
    fVar35 = auVar12._4_4_ * _UNK_14615bd04 + auVar1._4_4_ * 0.0;
    fVar36 = auVar12._8_4_ * _UNK_14615bd08 + auVar1._8_4_ * 0.0;
    fVar37 = auVar12._12_4_ * _UNK_14615bd0c + auVar1._12_4_ * 0.0;
    auVar20._0_4_ = fVar28 + fVar28;
    auVar20._4_4_ = fVar35 + fVar35;
    auVar20._8_4_ = fVar36 + fVar36;
    auVar20._12_4_ = fVar37 + fVar37;
    fVar28 = auVar20._4_4_ * auVar9._4_4_ + _UNK_14614f7f4;
    fVar35 = auVar20._8_4_ * auVar9._8_4_ + _UNK_14614f7f8;
    fVar36 = auVar20._12_4_ * auVar9._12_4_ + _UNK_14614f7fc;
    auVar13 = vshufps_avx(auVar20,auVar20,0xd2);
    auVar10 = vshufps_avx(auVar20,auVar20,0xc9);
    *(float *)*(undefined1 (*) [16])(param_2 + 0xc0) =
         auVar20._0_4_ * auVar9._0_4_ + _DAT_14614f7f0 +
         -(auVar12._0_4_ * auVar10._0_4_) + auVar13._0_4_ * auVar1._0_4_;
    *(float *)(param_2 + 0xc4) =
         fVar28 + -(auVar12._4_4_ * auVar10._4_4_) + auVar13._4_4_ * auVar1._4_4_;
    *(float *)(param_2 + 200) =
         fVar35 + -(auVar12._8_4_ * auVar10._8_4_) + auVar13._8_4_ * auVar1._8_4_;
    *(float *)(param_2 + 0xcc) =
         fVar36 + -(auVar12._12_4_ * auVar10._12_4_) + auVar13._12_4_ * auVar1._12_4_;
  }
  return;
}

