// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14008e810  size: 478 bytes
// Name:    FUN_14008e810
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fde790, FUN_140820ee0, FUN_144de6230
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14008e810(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auVar4 [32];
  char cVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
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
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar53;
  float fVar59;
  float fVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [64];
  float fVar68;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [64];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auStack_148 [8];
  float fStack_140;
  float fStack_13c;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [12];
  float fStack_dc;
  undefined1 auStack_d8 [16];
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined8 uStack_40;
  
  uStack_40 = 0x14008e827;
  cVar5 = func_0x000144f12410(*(undefined8 *)(param_1 + 0x788));
  if (cVar5 != '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x7d1) & 0x20) == 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
    uVar2 = *(uint *)(plVar3[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    lVar7 = 0;
    if (uVar1 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
        (uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
      lVar7 = (ulonglong)((uVar1 & 0x1ffff) * (int)plVar3[1]) + *plVar3;
    }
    uStack_40 = 0x14008e899;
    lVar7 = FUN_144de6230(*(undefined4 *)(lVar7 + 0x9c));
    if ((lVar7 == 0) && (*(char *)(param_1 + 0x135) == '\0')) {
      uStack_40 = 0x14008e8b8;
      lVar7 = FUN_144fde790(*(undefined4 *)(param_1 + 0x180),*(undefined1 *)(param_1 + 0x18c));
      if (((lVar7 == 0) && (*(int *)(param_1 + 0x4d4) != 4)) &&
         ((*(int *)(param_1 + 0x4d4) != 3 || ((*(byte *)(param_1 + 0x5c5) & 0x10) == 0))))
      goto LAB_14008e8c9;
    }
  }
  uStack_40 = 0x14008e8c9;
  FUN_140820ee0(param_1);
LAB_14008e8c9:
  if (((*(ushort *)(param_1 + 0x10) & 0xfffe) != 2) && ((*(byte *)(param_1 + 0x804) & 0x40) == 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x7fc) & 0x80) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
    uVar2 = *(uint *)(plVar3[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    lVar7 = 0;
    if (uVar1 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
        (uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
      lVar7 = (ulonglong)((uVar1 & 0x1ffff) * (int)plVar3[1]) + *plVar3;
    }
    uStack_40 = 0x14008e94d;
    lVar7 = func_0x000144faf160(*(undefined4 *)(lVar7 + 0x9c));
    if (lVar7 != 0) {
      *(undefined1 *)(lVar7 + 0xbd) = 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  lVar8 = param_1 + 0x140;
  plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
  uVar2 = *(uint *)(plVar3[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
  lVar7 = 0;
  if (uVar1 >> 0x16 == (uVar2 >> 0x11 & 0x3ff) &&
      (uVar2 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
    lVar7 = (ulonglong)((uVar1 & 0x1ffff) * (int)plVar3[1]) + *plVar3;
  }
  if (((*(byte *)(param_1 + 0x480) & 1) == 0) && (cVar5 = FUN_144f12420(lVar7), cVar5 == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x484);
    if ((uVar1 >> 0x10 & 1) == 0) {
      uVar6 = *(undefined4 *)(lVar7 + 0x9c);
      cVar5 = FUN_144dd11b0(uVar6);
      if (cVar5 != '\0') {
        auStack_128._4_4_ = _DAT_145fc6ed8;
        auStack_128._0_4_ = _DAT_145fc6ed8;
        auStack_128._8_4_ = _DAT_145fc6ed8;
        auStack_128._12_4_ = _DAT_145fc6ed8;
        _auStack_148 = CONCAT412(0x3f800000,ZEXT812(0));
        _auStack_148 = ZEXT1632(_auStack_148);
        auVar49 = ZEXT1664(auStack_128);
        func_0x000144f129e0(lVar8);
        auVar4 = _auStack_148;
        if ((uVar1 >> 0x14 & 1) != 0) {
          auVar12._0_4_ = _DAT_14615be50 * (float)auStack_148._0_4_;
          auVar12._4_4_ = _DAT_14615be50 * (float)auStack_148._4_4_;
          auVar12._8_4_ = _DAT_14615be50 * fStack_140;
          auVar12._12_4_ = _DAT_14615be50 * fStack_13c;
          auVar18 = vshufps_avx(auVar12,auVar12,0x5a);
          auVar30 = vshufps_avx(auVar12,auVar12,1);
          auVar64 = vshufps_avx(auVar12,auVar12,0xff);
          auVar9._0_4_ = auVar12._0_4_ * auVar12._0_4_;
          auVar9._4_4_ = auVar12._4_4_ * auVar12._4_4_;
          auVar9._8_4_ = auVar12._8_4_ * auVar12._8_4_;
          auVar9._12_4_ = auVar12._12_4_ * auVar12._12_4_;
          auVar11 = vshufps_avx(auVar9,auVar9,0x55);
          auVar10._0_4_ = auVar9._0_4_ + auVar11._0_4_;
          auVar10._4_4_ = auVar9._4_4_ + auVar11._4_4_;
          auVar10._8_4_ = auVar9._8_4_ + auVar11._8_4_;
          auVar10._12_4_ = auVar9._12_4_ + auVar11._12_4_;
          auVar9 = auVar49._0_16_;
          auVar11 = vsubps_avx(auVar9,auVar10);
          auVar40._0_4_ =
               auVar12._0_4_ * auVar64._0_4_ +
               (float)((uint)(auVar30._0_4_ * auVar18._0_4_) ^ _DAT_145fc11f0);
          auVar40._4_4_ =
               auVar12._4_4_ * auVar64._4_4_ +
               (float)((uint)(auVar30._4_4_ * auVar18._4_4_) ^ _UNK_145fc11f4);
          auVar40._8_4_ =
               auVar12._8_4_ * auVar64._8_4_ +
               (float)((uint)(auVar30._8_4_ * auVar18._8_4_) ^ _UNK_145fc11f8);
          auVar40._12_4_ =
               auVar12._12_4_ * auVar64._12_4_ +
               (float)((uint)(auVar30._12_4_ * auVar18._12_4_) ^ _UNK_145fc11fc);
          auVar16._4_4_ = auVar12._0_4_;
          auVar16._0_4_ = auVar12._0_4_;
          auVar16._8_4_ = auVar12._0_4_;
          auVar16._12_4_ = auVar12._0_4_;
          auVar18._0_4_ = auVar40._0_4_ * auVar40._0_4_;
          auVar18._4_4_ = auVar40._4_4_ * auVar40._4_4_;
          auVar18._8_4_ = auVar40._8_4_ * auVar40._8_4_;
          auVar18._12_4_ = auVar40._12_4_ * auVar40._12_4_;
          auVar18 = vminps_avx(auVar9,auVar18);
          auVar30 = vsubps_avx(auVar9,auVar18);
          auVar18 = vrsqrtps_avx(auVar30);
          fVar22 = auVar18._0_4_;
          fVar25 = auVar18._4_4_;
          fVar26 = auVar18._8_4_;
          fVar27 = auVar18._12_4_;
          auVar54._4_4_ = _DAT_146159bfc;
          auVar54._0_4_ = _DAT_146159bfc;
          auVar54._8_4_ = _DAT_146159bfc;
          auVar54._12_4_ = _DAT_146159bfc;
          auVar18 = vcmpps_avx(auVar54,auVar30,2);
          auVar28._0_4_ =
               auVar18._0_4_ &
               (uint)(((-(_DAT_145fc6edc * fVar22 * fVar22 * auVar30._0_4_) + _DAT_145fc6edc) *
                       fVar22 + fVar22) * auVar30._0_4_);
          auVar28._4_4_ =
               auVar18._4_4_ &
               (uint)(((-(_DAT_145fc6edc * fVar25 * fVar25 * auVar30._4_4_) + _DAT_145fc6edc) *
                       fVar25 + fVar25) * auVar30._4_4_);
          auVar28._8_4_ =
               auVar18._8_4_ &
               (uint)(((-(_DAT_145fc6edc * fVar26 * fVar26 * auVar30._8_4_) + _DAT_145fc6edc) *
                       fVar26 + fVar26) * auVar30._8_4_);
          auVar28._12_4_ =
               auVar18._12_4_ &
               (uint)(((-(_DAT_145fc6edc * fVar27 * fVar27 * auVar30._12_4_) + _DAT_145fc6edc) *
                       fVar27 + fVar27) * auVar30._12_4_);
          auVar18 = vblendps_avx(auVar11,auVar28,2);
          auVar29._4_4_ = _DAT_145fc6f0c;
          auVar29._0_4_ = _DAT_145fc6f0c;
          auVar29._8_4_ = _DAT_145fc6f0c;
          auVar29._12_4_ = _DAT_145fc6f0c;
          auVar30 = vshufps_avx(auVar40,auVar40,0x55);
          auVar11._0_4_ = _DAT_145fc6f4c & auVar30._0_4_;
          auVar11._4_4_ = _DAT_145fc6f4c & auVar30._4_4_;
          auVar11._8_4_ = _DAT_145fc6f4c & auVar30._8_4_;
          auVar11._12_4_ = _DAT_145fc6f4c & auVar30._12_4_;
          auVar11 = vcmpps_avx(auVar29,auVar11,1);
          auVar12 = ZEXT416(0) << 0x20;
          auVar30 = vblendps_avx(auVar12,auVar11,1);
          fVar53 = auVar49._0_4_;
          fVar59 = auVar49._4_4_;
          fVar60 = auVar49._8_4_;
          fVar61 = auVar49._12_4_;
          auVar18 = vblendvps_avx(auVar18,auVar64,auVar30);
          auVar30 = vblendvps_avx(auVar40,auVar16,auVar30);
          auVar64 = vrcpps_avx(auVar18);
          fVar25 = auVar64._0_4_;
          fVar26 = auVar64._4_4_;
          fVar27 = auVar64._8_4_;
          fVar22 = auVar64._12_4_;
          auVar41._0_4_ = (uint)auVar18._0_4_ ^ _DAT_145fc6f10;
          auVar41._4_4_ = (uint)auVar18._4_4_ ^ _DAT_145fc6f10;
          auVar41._8_4_ = (uint)auVar18._8_4_ ^ _DAT_145fc6f10;
          auVar41._12_4_ = (uint)auVar18._12_4_ ^ _DAT_145fc6f10;
          auVar62._0_4_ = (-((auVar18._0_4_ * fVar25 - fVar53) * fVar25) + fVar25) * auVar30._0_4_;
          auVar62._4_4_ = (-((auVar18._4_4_ * fVar26 - fVar59) * fVar26) + fVar26) * auVar30._4_4_;
          auVar62._8_4_ = (-((auVar18._8_4_ * fVar27 - fVar60) * fVar27) + fVar27) * auVar30._8_4_;
          auVar62._12_4_ =
               (-((auVar18._12_4_ * fVar22 - fVar61) * fVar22) + fVar22) * auVar30._12_4_;
          auVar64 = vrcpps_avx(auVar62);
          auVar55._0_4_ = (uint)auVar62._0_4_ & _DAT_145fc6f4c;
          auVar55._4_4_ = (uint)auVar62._4_4_ & _DAT_145fc6f4c;
          auVar55._8_4_ = (uint)auVar62._8_4_ & _DAT_145fc6f4c;
          auVar55._12_4_ = (uint)auVar62._12_4_ & _DAT_145fc6f4c;
          auVar9 = vcmpps_avx(auVar9,auVar55,1);
          fVar25 = auVar64._0_4_;
          fVar26 = auVar64._4_4_;
          fVar27 = auVar64._8_4_;
          fVar22 = auVar64._12_4_;
          auVar78._0_4_ = (auVar62._0_4_ * fVar25 - fVar53) * fVar25 - fVar25;
          auVar78._4_4_ = (auVar62._4_4_ * fVar26 - fVar59) * fVar26 - fVar26;
          auVar78._8_4_ = (auVar62._8_4_ * fVar27 - fVar60) * fVar27 - fVar27;
          auVar78._12_4_ = (auVar62._12_4_ * fVar22 - fVar61) * fVar22 - fVar22;
          auVar64 = vblendvps_avx(auVar62,auVar78,auVar9);
          fVar22 = auVar64._0_4_;
          fVar25 = auVar64._4_4_;
          fVar26 = auVar64._8_4_;
          fVar27 = auVar64._12_4_;
          fVar68 = fVar22 * fVar22;
          fVar73 = fVar25 * fVar25;
          fVar74 = fVar26 * fVar26;
          fVar75 = fVar27 * fVar27;
          auVar69._4_4_ = _DAT_145fc6f80;
          auVar69._0_4_ = _DAT_145fc6f80;
          auVar69._8_4_ = _DAT_145fc6f80;
          auVar69._12_4_ = _DAT_145fc6f80;
          auVar63._4_4_ = _DAT_146159be0;
          auVar63._0_4_ = _DAT_146159be0;
          auVar63._8_4_ = _DAT_146159be0;
          auVar63._12_4_ = _DAT_146159be0;
          auVar80._0_4_ =
               fVar68 * fVar68 * fVar68 * fVar68 * fVar22 *
               (fVar68 * (fVar68 * (fVar68 * (fVar68 * _DAT_14615a184 + _DAT_14615a180) +
                                   _DAT_14615a188) + _DAT_14615a18c) + _DAT_14615a190) +
               fVar68 * fVar22 *
               (fVar68 * (fVar68 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
               (float)(auVar9._0_4_ & ((uint)auVar62._0_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) +
               fVar22;
          auVar80._4_4_ =
               fVar73 * fVar73 * fVar73 * fVar73 * fVar25 *
               (fVar73 * (fVar73 * (fVar73 * (fVar73 * _DAT_14615a184 + _DAT_14615a180) +
                                   _DAT_14615a188) + _DAT_14615a18c) + _DAT_14615a190) +
               fVar73 * fVar25 *
               (fVar73 * (fVar73 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
               (float)(auVar9._4_4_ & ((uint)auVar62._4_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) +
               fVar25;
          auVar80._8_4_ =
               fVar74 * fVar74 * fVar74 * fVar74 * fVar26 *
               (fVar74 * (fVar74 * (fVar74 * (fVar74 * _DAT_14615a184 + _DAT_14615a180) +
                                   _DAT_14615a188) + _DAT_14615a18c) + _DAT_14615a190) +
               fVar74 * fVar26 *
               (fVar74 * (fVar74 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
               (float)(auVar9._8_4_ & ((uint)auVar62._8_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) +
               fVar26;
          auVar80._12_4_ =
               fVar75 * fVar75 * fVar75 * fVar75 * fVar27 *
               (fVar75 * (fVar75 * (fVar75 * (fVar75 * _DAT_14615a184 + _DAT_14615a180) +
                                   _DAT_14615a188) + _DAT_14615a18c) + _DAT_14615a190) +
               fVar75 * fVar27 *
               (fVar75 * (fVar75 * _DAT_14615a198 + _DAT_14615a194) + _DAT_14615a19c) +
               (float)(auVar9._12_4_ & ((uint)auVar62._12_4_ & _DAT_145fc6f10 | _DAT_146159bdc)) +
               fVar27;
          auVar64 = vcmpps_avx(auVar30,auVar12,1);
          auVar9 = vcmpps_avx(auVar12,auVar30,1);
          auVar30 = vblendvps_avx(auVar69,auVar63,auVar64);
          auVar64 = vcmpps_avx(auVar18,auVar41,1);
          auVar70._4_4_ = _DAT_14615a1a0;
          auVar70._0_4_ = _DAT_14615a1a0;
          auVar70._8_4_ = _DAT_14615a1a0;
          auVar70._12_4_ = _DAT_14615a1a0;
          auVar10 = vcmpps_avx(auVar18,auVar41,0);
          auVar42._4_4_ = _DAT_145fc6edc;
          auVar42._0_4_ = _DAT_145fc6edc;
          auVar42._8_4_ = _DAT_145fc6edc;
          auVar42._12_4_ = _DAT_145fc6edc;
          auVar56._0_4_ = auVar80._0_4_ + auVar30._0_4_;
          auVar56._4_4_ = auVar80._4_4_ + auVar30._4_4_;
          auVar56._8_4_ = auVar80._8_4_ + auVar30._8_4_;
          auVar56._12_4_ = auVar80._12_4_ + auVar30._12_4_;
          auVar18 = vblendvps_avx(auVar80,auVar56,auVar64);
          auVar64._4_4_ = _DAT_146159bdc;
          auVar64._0_4_ = _DAT_146159bdc;
          auVar64._8_4_ = _DAT_146159bdc;
          auVar64._12_4_ = _DAT_146159bdc;
          auVar30 = vblendvps_avx(auVar70,auVar64,auVar9);
          auVar18 = vblendvps_avx(auVar18,auVar30,auVar10);
          auVar30._0_4_ = auVar18._0_4_ * (float)(~auVar11._0_4_ & (uint)fVar53);
          auVar30._4_4_ = auVar18._4_4_ * (float)(~auVar11._4_4_ & (uint)fVar59);
          auVar30._8_4_ = auVar18._8_4_ * (float)(~auVar11._8_4_ & (uint)fVar60);
          auVar30._12_4_ = auVar18._12_4_ * (float)(~auVar11._12_4_ & (uint)fVar61);
          auVar18 = vblendps_avx(auVar30,auVar12,3);
          fVar22 = auVar18._0_4_ * _DAT_146159b48;
          fVar25 = auVar18._4_4_ * _DAT_146159b48;
          fVar26 = auVar18._8_4_ * _DAT_146159b48;
          fVar27 = auVar18._12_4_ * _DAT_146159b48;
          auVar31._0_4_ = (uint)fVar22 & _DAT_145fc6f10;
          auVar31._4_4_ = (uint)fVar25 & _DAT_145fc6f10;
          auVar31._8_4_ = (uint)fVar26 & _DAT_145fc6f10;
          auVar31._12_4_ = (uint)fVar27 & _DAT_145fc6f10;
          auVar31 = auVar31 | auVar42;
          auVar43._4_4_ = _DAT_145f43778;
          auVar43._0_4_ = _DAT_145f43778;
          auVar43._8_4_ = _DAT_145f43778;
          auVar43._12_4_ = _DAT_145f43778;
          auVar64 = vpcmpeqd_avx(auVar31,auVar31);
          auVar15._0_4_ = (int)(fVar22 + auVar31._0_4_);
          auVar15._4_4_ = (int)(fVar25 + auVar31._4_4_);
          auVar15._8_4_ = (int)(fVar26 + auVar31._8_4_);
          auVar15._12_4_ = (int)(fVar27 + auVar31._12_4_);
          auVar30 = vcvtdq2ps_avx(auVar15);
          auVar11 = vpsubd_avx(auVar15,auVar64);
          fVar22 = auVar30._0_4_ * _DAT_146159b50 +
                   auVar30._0_4_ * _DAT_146159b4c + auVar18._0_4_ * _DAT_145fc6edc;
          fVar25 = auVar30._4_4_ * _DAT_146159b50 +
                   auVar30._4_4_ * _DAT_146159b4c + auVar18._4_4_ * _DAT_145fc6edc;
          fVar26 = auVar30._8_4_ * _DAT_146159b50 +
                   auVar30._8_4_ * _DAT_146159b4c + auVar18._8_4_ * _DAT_145fc6edc;
          fVar27 = auVar30._12_4_ * _DAT_146159b50 +
                   auVar30._12_4_ * _DAT_146159b4c + auVar18._12_4_ * _DAT_145fc6edc;
          fVar68 = fVar22 * fVar22;
          fVar73 = fVar25 * fVar25;
          fVar74 = fVar26 * fVar26;
          fVar75 = fVar27 * fVar27;
          auVar81._0_4_ =
               fVar68 * (fVar68 * (fVar68 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
               fVar53;
          auVar81._4_4_ =
               fVar73 * (fVar73 * (fVar73 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
               fVar59;
          auVar81._8_4_ =
               fVar74 * (fVar74 * (fVar74 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
               fVar60;
          auVar81._12_4_ =
               fVar75 * (fVar75 * (fVar75 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
               fVar61;
          auVar50._4_4_ = _DAT_145f43774;
          auVar50._0_4_ = _DAT_145f43774;
          auVar50._8_4_ = _DAT_145f43774;
          auVar50._12_4_ = _DAT_145f43774;
          auVar79._0_4_ =
               fVar68 * fVar22 *
               (fVar68 * (fVar68 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar22;
          auVar79._4_4_ =
               fVar73 * fVar25 *
               (fVar73 * (fVar73 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar25;
          auVar79._8_4_ =
               fVar74 * fVar26 *
               (fVar74 * (fVar74 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar26;
          auVar79._12_4_ =
               fVar75 * fVar27 *
               (fVar75 * (fVar75 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) + fVar27;
          auVar18 = vpand_avx(auVar15,auVar43);
          auVar30 = vpcmpeqd_avx(auVar18,auVar12);
          auVar9 = vpsubd_avx(auVar12,auVar18);
          auVar64 = vpand_avx(auVar15,auVar50);
          auVar18 = vblendvps_avx(auVar81,auVar79,auVar30);
          auVar30 = vblendvps_avx(auVar81,auVar79,auVar9);
          auVar11 = vpand_avx(auVar11,auVar50);
          auVar64 = vpcmpeqd_avx(auVar64,auVar12);
          auVar11 = vpcmpeqd_avx(auVar11,auVar12);
          auVar32._0_4_ = auVar18._0_4_ ^ _DAT_145fc6f10;
          auVar32._4_4_ = auVar18._4_4_ ^ _DAT_145fc6f10;
          auVar32._8_4_ = auVar18._8_4_ ^ _DAT_145fc6f10;
          auVar32._12_4_ = auVar18._12_4_ ^ _DAT_145fc6f10;
          auVar17._0_4_ = auVar30._0_4_ ^ _DAT_145fc6f10;
          auVar17._4_4_ = auVar30._4_4_ ^ _DAT_145fc6f10;
          auVar17._8_4_ = auVar30._8_4_ ^ _DAT_145fc6f10;
          auVar17._12_4_ = auVar30._12_4_ ^ _DAT_145fc6f10;
          auVar18 = vblendvps_avx(auVar32,auVar18,auVar64);
          auVar30 = vblendvps_avx(auVar17,auVar30,auVar11);
          fVar22 = auVar30._0_4_;
          auVar64 = vshufps_avx(auVar18,auVar30,0x55);
          fVar25 = auVar18._0_4_;
          auVar11 = vshufps_avx(auVar30,auVar18,0x55);
          auVar9 = vshufps_avx(auVar18,auVar30,0xaa);
          auVar18 = vshufps_avx(auVar30,auVar18,0xaa);
          auVar18 = vshufps_avx(auVar18,auVar18,0xd8);
          auVar30 = vshufps_avx(auVar9,auVar9,0xd8);
          auStack_148._4_4_ =
               (float)((uint)(auVar64._4_4_ * fVar22 * auVar30._4_4_) ^ _UNK_146159b74) +
               (float)((uint)(fVar25 * auVar11._4_4_ * auVar18._4_4_) ^ _UNK_146159b84);
          auStack_148._0_4_ =
               (float)((uint)(auVar64._0_4_ * fVar22 * auVar30._0_4_) ^ _DAT_146159b70) +
               (float)((uint)(fVar25 * auVar11._0_4_ * auVar18._0_4_) ^ _DAT_146159b80);
          fStack_140 = (float)((uint)(auVar64._8_4_ * fVar22 * auVar30._8_4_) ^ _UNK_146159b78) +
                       (float)((uint)(fVar25 * auVar11._8_4_ * auVar18._8_4_) ^ _UNK_146159b88);
          fStack_13c = (float)((uint)(auVar64._12_4_ * fVar22 * auVar30._12_4_) ^ _UNK_146159b7c) +
                       (float)((uint)(fVar25 * auVar11._12_4_ * auVar18._12_4_) ^ _UNK_146159b8c);
          auStack_138 = auVar4._16_16_;
          uVar6 = *(undefined4 *)(lVar7 + 0x9c);
        }
        FUN_140bddd80(auStack_118,uVar6,0);
        FUN_140bdddc0(auStack_e8,lVar7,auStack_118,auStack_148,
                      (*(uint *)(param_1 + 0x484) >> 0x19 & 1) == 0);
        auVar67 = ZEXT1664(CONCAT412(fStack_dc,auStack_e8));
        auVar18 = vpunpckhwd_avx(auStack_d8,auStack_d8);
        auVar18 = vpsrad_avx(auVar18,0x10);
        auVar18 = vcvtdq2ps_avx(auVar18);
        auVar18 = vshufpd_avx(auVar18,auVar18,3);
        auVar72 = ZEXT1664(CONCAT412(auVar18._12_4_ * _UNK_146159c9c + auStack_d8._12_4_,
                                     CONCAT48(auVar18._8_4_ * _UNK_146159c98 + auStack_d8._8_4_,
                                              CONCAT44(auVar18._4_4_ * _UNK_146159c94 +
                                                       auStack_d8._4_4_,
                                                       auVar18._0_4_ * _DAT_146159c90 +
                                                       auStack_d8._0_4_))));
        fVar22 = fStack_c8;
        fVar25 = fStack_c4;
        fVar26 = fStack_c0;
        fVar27 = fStack_bc;
        fVar53 = fStack_dc;
        fVar59 = fStack_dc;
        fVar60 = fStack_dc;
        fVar61 = fStack_dc;
        lVar7 = func_0x000144efd450(*(undefined4 *)(lVar7 + 0x9c));
        cVar5 = FUN_145002e50(lVar8);
        auVar18 = auVar72._0_16_;
        if (cVar5 == '\0') {
          auVar13._0_12_ = ZEXT812(0);
          auVar13._12_4_ = 0;
          if ((lVar7 != 0) && (*(char *)(lVar7 + 0x14c) != '\0')) {
            auVar13 = ZEXT416(*(uint *)(lVar7 + 0x58));
          }
          auVar18 = vinsertps_avx(auVar18,auVar13,0x20);
        }
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x14c) != '\0')) {
          auVar30 = vcmpps_avx(auVar18,*(undefined1 (*) [16])(lVar7 + 0x50),0);
          uVar6 = vmovmskps_avx(auVar30);
          if ((~(byte)uVar6 & 7) != 0) {
            *(undefined1 (*) [16])(lVar7 + 0x50) = auVar18;
            *(byte *)(lVar7 + 0x154) = *(byte *)(lVar7 + 0x154) | 2;
          }
          if ((*(uint *)(param_1 + 0x484) & 0x100001) != 1) {
            auVar30 = auVar67._0_16_;
            auVar14._0_4_ = auVar67._0_4_ + auVar67._0_4_;
            auVar14._4_4_ = auVar67._4_4_ + auVar67._4_4_;
            auVar14._8_4_ = auVar67._8_4_ + auVar67._8_4_;
            auVar14._12_4_ = auVar67._12_4_ + auVar67._12_4_;
            auVar18 = vshufps_avx(auVar30,auVar30,0xc9);
            auVar30 = vshufps_avx(auVar30,auVar30,0xd2);
            auVar64 = vshufps_avx(auVar14,auVar14,0xc9);
            auVar11 = vshufps_avx(auVar14,auVar14,0xd2);
            auVar44._0_4_ = auVar30._0_4_ * auVar14._0_4_ + fVar53 * auVar64._0_4_;
            auVar44._4_4_ = auVar30._4_4_ * auVar14._4_4_ + fVar59 * auVar64._4_4_;
            auVar44._8_4_ = auVar30._8_4_ * auVar14._8_4_ + fVar60 * auVar64._8_4_;
            auVar44._12_4_ = auVar30._12_4_ * auVar14._12_4_ + fVar61 * auVar64._12_4_;
            auVar19._0_4_ = -(fVar53 * auVar11._0_4_) + auVar18._0_4_ * auVar14._0_4_;
            auVar19._4_4_ = -(fVar59 * auVar11._4_4_) + auVar18._4_4_ * auVar14._4_4_;
            auVar19._8_4_ = -(fVar60 * auVar11._8_4_) + auVar18._8_4_ * auVar14._8_4_;
            auVar19._12_4_ = -(fVar61 * auVar11._12_4_) + auVar18._12_4_ * auVar14._12_4_;
            auVar23._0_4_ =
                 -(auVar11._0_4_ * auVar30._0_4_) - (auVar18._0_4_ * auVar64._0_4_ - auVar49._0_4_);
            auVar23._4_4_ =
                 -(auVar11._4_4_ * auVar30._4_4_) - (auVar18._4_4_ * auVar64._4_4_ - auVar49._4_4_);
            auVar23._8_4_ =
                 -(auVar11._8_4_ * auVar30._8_4_) - (auVar18._8_4_ * auVar64._8_4_ - auVar49._8_4_);
            auVar23._12_4_ =
                 -(auVar11._12_4_ * auVar30._12_4_) -
                 (auVar18._12_4_ * auVar64._12_4_ - auVar49._12_4_);
            auVar18 = vblendps_avx(auVar44,auVar19,2);
            auVar30 = vblendps_avx(auVar23,auVar44,2);
            auVar64 = vblendps_avx(auVar19,auVar23,2);
            auVar18 = vblendps_avx(auVar23,auVar18,3);
            auVar30 = vblendps_avx(auVar19,auVar30,3);
            auVar64 = vblendps_avx(auVar44,auVar64,3);
            auVar33._0_4_ = auVar18._0_4_ * fVar22;
            auVar33._4_4_ = auVar18._4_4_ * fVar25;
            auVar33._8_4_ = auVar18._8_4_ * fVar26;
            auVar33._12_4_ = auVar18._12_4_ * fVar27;
            auVar45._0_4_ = auVar30._0_4_ * fVar22;
            auVar45._4_4_ = auVar30._4_4_ * fVar25;
            auVar45._8_4_ = auVar30._8_4_ * fVar26;
            auVar45._12_4_ = auVar30._12_4_ * fVar27;
            auVar36._0_4_ = auVar64._0_4_ * fVar22;
            auVar36._4_4_ = auVar64._4_4_ * fVar25;
            auVar36._8_4_ = auVar64._8_4_ * fVar26;
            auVar36._12_4_ = auVar64._12_4_ * fVar27;
            auVar15 = ZEXT816(0) << 0x20;
            auVar64 = vunpcklps_avx(auVar45,auVar33);
            auVar11 = vunpcklps_avx(auVar36,auVar15);
            auVar18 = vunpckhps_avx(auVar45,auVar33);
            auVar30 = vunpckhps_avx(auVar36,auVar15);
            auVar30 = vunpcklps_avx(auVar18,auVar30);
            auVar9 = vunpcklps_avx(auVar64,auVar11);
            auVar18 = vunpckhps_avx(auVar64,auVar11);
            auVar20._0_4_ =
                 auVar30._0_4_ * auVar30._0_4_ +
                 auVar18._0_4_ * auVar18._0_4_ + auVar9._0_4_ * auVar9._0_4_;
            auVar20._4_4_ =
                 auVar30._4_4_ * auVar30._4_4_ +
                 auVar18._4_4_ * auVar18._4_4_ + auVar9._4_4_ * auVar9._4_4_;
            auVar20._8_4_ =
                 auVar30._8_4_ * auVar30._8_4_ +
                 auVar18._8_4_ * auVar18._8_4_ + auVar9._8_4_ * auVar9._8_4_;
            auVar20._12_4_ =
                 auVar30._12_4_ * auVar30._12_4_ +
                 auVar18._12_4_ * auVar18._12_4_ + auVar9._12_4_ * auVar9._12_4_;
            auVar18 = vrsqrtps_avx(auVar20);
            fVar22 = auVar18._0_4_;
            fVar25 = auVar18._4_4_;
            fVar26 = auVar18._8_4_;
            fVar27 = auVar18._12_4_;
            auVar21._0_4_ = auVar20._0_4_ * auVar20._0_4_;
            auVar21._4_4_ = auVar20._4_4_ * auVar20._4_4_;
            auVar21._8_4_ = auVar20._8_4_ * auVar20._8_4_;
            auVar21._12_4_ = auVar20._12_4_ * auVar20._12_4_;
            auVar18 = vblendps_avx(auVar21,auVar15,8);
            auVar18 = vhaddps_avx(auVar18,auVar18);
            auVar9 = vhaddps_avx(auVar18,auVar18);
            auVar57._0_4_ =
                 (-(_DAT_145fc6edc * fVar22 * fVar22 * auVar20._0_4_) + _DAT_145fc6edc) * fVar22 +
                 fVar22;
            auVar57._4_4_ =
                 (-(_DAT_145fc6edc * fVar25 * fVar25 * auVar20._4_4_) + _DAT_145fc6edc) * fVar25 +
                 fVar25;
            auVar57._8_4_ =
                 (-(_DAT_145fc6edc * fVar26 * fVar26 * auVar20._8_4_) + _DAT_145fc6edc) * fVar26 +
                 fVar26;
            auVar57._12_4_ =
                 (-(_DAT_145fc6edc * fVar27 * fVar27 * auVar20._12_4_) + _DAT_145fc6edc) * fVar27 +
                 fVar27;
            auVar18 = vshufps_avx(auVar57,auVar57,0x55);
            auVar30 = vshufps_avx(auVar57,auVar57,0xaa);
            auVar37._0_4_ = auVar18._0_4_ * auVar36._0_4_;
            auVar37._4_4_ = auVar18._4_4_ * auVar36._4_4_;
            auVar37._8_4_ = auVar18._8_4_ * auVar36._8_4_;
            auVar37._12_4_ = auVar18._12_4_ * auVar36._12_4_;
            auVar51._0_4_ = auVar57._0_4_ * auVar45._0_4_;
            auVar51._4_4_ = auVar57._0_4_ * auVar45._4_4_;
            auVar51._8_4_ = auVar57._0_4_ * auVar45._8_4_;
            auVar51._12_4_ = auVar57._0_4_ * auVar45._12_4_;
            auVar34._0_4_ = auVar30._0_4_ * auVar33._0_4_;
            auVar34._4_4_ = auVar30._4_4_ * auVar33._4_4_;
            auVar34._8_4_ = auVar30._8_4_ * auVar33._8_4_;
            auVar34._12_4_ = auVar30._12_4_ * auVar33._12_4_;
            auVar18 = vblendps_avx(auVar51,auVar37,2);
            auVar18 = vblendps_avx(auVar34,auVar18,3);
            auVar30 = vshufps_avx(auVar18,auVar18,0x49);
            auVar64 = vshufps_avx(auVar18,auVar18,0x92);
            auVar11 = vshufps_avx(auVar18,auVar18,0x24);
            auVar65._0_4_ = auVar64._0_4_ + auVar30._0_4_;
            auVar65._4_4_ = auVar64._4_4_ + auVar30._4_4_;
            auVar65._8_4_ = auVar64._8_4_ + auVar30._8_4_;
            auVar65._12_4_ = auVar64._12_4_ + auVar30._12_4_;
            auVar30 = vblendps_avx(auVar51,auVar37,3);
            auVar30 = vblendps_avx(auVar30,auVar34,2);
            auVar30 = vshufps_avx(auVar30,auVar30,9);
            auVar46._0_4_ = auVar65._0_4_ + auVar11._0_4_;
            auVar46._4_4_ = auVar65._4_4_ + auVar11._4_4_;
            auVar46._8_4_ = auVar65._8_4_ + auVar11._8_4_;
            auVar46._12_4_ = auVar65._12_4_ + auVar11._12_4_;
            auVar18 = vsubps_avx(auVar18,auVar65);
            auVar18 = vblendps_avx(auVar18,auVar46,8);
            auVar47._0_4_ = auVar18._0_4_ + auVar49._0_4_;
            auVar47._4_4_ = auVar18._4_4_ + auVar49._4_4_;
            auVar47._8_4_ = auVar18._8_4_ + auVar49._8_4_;
            auVar47._12_4_ = auVar18._12_4_ + auVar49._12_4_;
            auVar18 = vrsqrtps_avx(auVar47);
            fVar22 = auVar18._0_4_;
            fVar25 = auVar18._4_4_;
            fVar26 = auVar18._8_4_;
            fVar27 = auVar18._12_4_;
            auVar18 = vblendps_avx(auVar37,auVar34,3);
            auVar10 = vshufps_avx(auVar37,auVar37,0x55);
            auVar12 = vshufps_avx(auVar34,auVar34,0xaa);
            auVar18 = vshufps_avx(auVar18,auVar51,0x12);
            auVar52._4_4_ = auVar51._0_4_;
            auVar52._0_4_ = auVar51._0_4_;
            auVar52._8_4_ = auVar51._0_4_;
            auVar52._12_4_ = auVar51._0_4_;
            auVar76._0_4_ = auVar18._0_4_ + auVar30._0_4_;
            auVar76._4_4_ = auVar18._4_4_ + auVar30._4_4_;
            auVar76._8_4_ = auVar18._8_4_ + auVar30._8_4_;
            auVar76._12_4_ = auVar18._12_4_ + auVar30._12_4_;
            auVar17 = vsubps_avx(auVar18,auVar30);
            auVar66._0_4_ =
                 ((-(_DAT_145fc6edc * fVar22 * fVar22 * auVar47._0_4_) + _DAT_145fc6edc) * fVar22 +
                 fVar22) * _DAT_145fc6edc;
            auVar66._4_4_ =
                 ((-(_DAT_145fc6edc * fVar25 * fVar25 * auVar47._4_4_) + _DAT_145fc6edc) * fVar25 +
                 fVar25) * _DAT_145fc6edc;
            auVar66._8_4_ =
                 ((-(_DAT_145fc6edc * fVar26 * fVar26 * auVar47._8_4_) + _DAT_145fc6edc) * fVar26 +
                 fVar26) * _DAT_145fc6edc;
            auVar66._12_4_ =
                 ((-(_DAT_145fc6edc * fVar27 * fVar27 * auVar47._12_4_) + _DAT_145fc6edc) * fVar27 +
                 fVar27) * _DAT_145fc6edc;
            auVar18 = vblendps_avx(auVar76,auVar17,1);
            auVar30 = vblendps_avx(auVar76,auVar17,2);
            auVar11 = vshufps_avx(auVar76,auVar17,0xa1);
            auVar16 = vshufps_avx(auVar18,auVar18,0x18);
            auVar64 = vshufpd_avx(auVar30,auVar30,1);
            auVar18 = vblendps_avx(auVar11,auVar47,4);
            auVar30 = vblendps_avx(auVar16,auVar47,1);
            auVar64 = vblendps_avx(auVar64,auVar47,2);
            auVar11 = vblendps_avx(auVar17,auVar47,8);
            auVar58._0_4_ = auVar66._0_4_ * auVar30._0_4_;
            auVar58._4_4_ = auVar66._0_4_ * auVar30._4_4_;
            auVar58._8_4_ = auVar66._0_4_ * auVar30._8_4_;
            auVar58._12_4_ = auVar66._0_4_ * auVar30._12_4_;
            auVar30 = vshufps_avx(auVar66,auVar66,0x55);
            auVar71._0_4_ = auVar30._0_4_ * auVar64._0_4_;
            auVar71._4_4_ = auVar30._4_4_ * auVar64._4_4_;
            auVar71._8_4_ = auVar30._8_4_ * auVar64._8_4_;
            auVar71._12_4_ = auVar30._12_4_ * auVar64._12_4_;
            auVar30 = vshufps_avx(auVar66,auVar66,0xaa);
            auVar64 = vshufps_avx(auVar66,auVar66,0xff);
            auVar77._0_4_ = auVar30._0_4_ * auVar18._0_4_;
            auVar77._4_4_ = auVar30._4_4_ * auVar18._4_4_;
            auVar77._8_4_ = auVar30._8_4_ * auVar18._8_4_;
            auVar77._12_4_ = auVar30._12_4_ * auVar18._12_4_;
            auVar48._0_4_ = auVar64._0_4_ * auVar11._0_4_;
            auVar48._4_4_ = auVar64._4_4_ * auVar11._4_4_;
            auVar48._8_4_ = auVar64._8_4_ * auVar11._8_4_;
            auVar48._12_4_ = auVar64._12_4_ * auVar11._12_4_;
            auVar18 = vcmpps_avx(auVar52,auVar10,1);
            auVar30 = vcmpps_avx(auVar10,auVar12,1);
            auVar64 = vcmpps_avx(auVar52,auVar12,1);
            auVar35._0_4_ = auVar64._0_4_ & auVar30._0_4_;
            auVar35._4_4_ = auVar64._4_4_ & auVar30._4_4_;
            auVar35._8_4_ = auVar64._8_4_ & auVar30._8_4_;
            auVar35._12_4_ = auVar64._12_4_ & auVar30._12_4_;
            auVar30 = vcmpps_avx(auVar15,auVar46,1);
            auVar64 = vcmpps_avx(auVar9,auVar15,0);
            auVar18 = vblendvps_avx(auVar58,auVar71,auVar18);
            auVar38._0_4_ = auVar30._0_4_;
            auVar38._4_4_ = auVar38._0_4_;
            auVar38._8_4_ = auVar38._0_4_;
            auVar38._12_4_ = auVar38._0_4_;
            auVar18 = vblendvps_avx(auVar18,auVar77,auVar35);
            auVar18 = vblendvps_avx(auVar18,auVar48,auVar38);
            fVar22 = auVar18._0_4_;
            auVar39._0_4_ = fVar22 * fVar22;
            fVar26 = auVar18._4_4_;
            auVar39._4_4_ = fVar26 * fVar26;
            fVar53 = auVar18._8_4_;
            auVar39._8_4_ = fVar53 * fVar53;
            fVar60 = auVar18._12_4_;
            auVar39._12_4_ = fVar60 * fVar60;
            auVar18 = vhaddps_avx(auVar39,auVar39);
            auVar18 = vhaddps_avx(auVar18,auVar18);
            auVar30 = vrsqrtps_avx(auVar18);
            fVar25 = auVar30._0_4_;
            fVar27 = auVar30._4_4_;
            fVar59 = auVar30._8_4_;
            fVar61 = auVar30._12_4_;
            auVar24._0_4_ =
                 fVar22 * ((-(_DAT_145fc6edc * fVar25 * fVar25 * auVar18._0_4_) + _DAT_145fc6edc) *
                           fVar25 + fVar25);
            auVar24._4_4_ =
                 fVar26 * ((-(_DAT_145fc6edc * fVar27 * fVar27 * auVar18._4_4_) + _DAT_145fc6edc) *
                           fVar27 + fVar27);
            auVar24._8_4_ =
                 fVar53 * ((-(_DAT_145fc6edc * fVar59 * fVar59 * auVar18._8_4_) + _DAT_145fc6edc) *
                           fVar59 + fVar59);
            auVar24._12_4_ =
                 fVar60 * ((-(_DAT_145fc6edc * fVar61 * fVar61 * auVar18._12_4_) + _DAT_145fc6edc) *
                           fVar61 + fVar61);
            auVar18 = vcmpps_avx(auVar64 | auVar24,*(undefined1 (*) [16])(lVar7 + 0x60),4);
            if ((((SUB161(auVar18 >> 0x1f,0) & 1) != 0 || (SUB161(auVar18 >> 0x3f,0) & 1) != 0) ||
                (SUB161(auVar18 >> 0x5f,0) & 1) != 0) || auVar18[0xf] < '\0') {
              *(undefined1 (*) [16])(lVar7 + 0x60) = auVar64 | auVar24;
              *(byte *)(lVar7 + 0x154) = *(byte *)(lVar7 + 0x154) | 2;
            }
          }
          *(byte *)(param_1 + 0x5c5) = *(byte *)(param_1 + 0x5c5) | 8;
        }
      }
    }
    else {
      FUN_1430c93a0(lVar8,lVar7,1,param_2);
      lVar7 = func_0x000144faf160(*(undefined4 *)(lVar7 + 0x9c));
      if (lVar7 != 0) {
        FUN_144faf320(lVar7,auStack_118);
        FUN_1430c98c0(lVar8,auStack_118);
      }
    }
  }
  return;
}

