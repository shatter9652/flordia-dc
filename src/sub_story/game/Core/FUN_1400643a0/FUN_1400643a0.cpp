// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400643a0  size: 650 bytes
// Name:    FUN_1400643a0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14551d6b0, FUN_145221b70, FUN_142669b20, FUN_14506e300, FUN_1455c5b10, FUN_14551dd20, FUN_1402e5b80, FUN_144faa1e0, FUN_14540c440
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400643a0(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong unaff_RBP;
  longlong *plVar9;
  undefined *puVar10;
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
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  longlong *plStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  
  puVar10 = (undefined *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  lVar6 = func_0x000144e63d10(*(undefined4 *)(puVar10 + 0x9c));
  if (lVar6 != 0) {
    FUN_1455c5b10(*(undefined8 *)(lVar6 + 8),param_1);
  }
  cVar3 = (char)(param_2 & 0xffffffff);
  if (*(char *)(param_1 + 0x14c) == '\x01') {
    auStack_98 = ZEXT416(_DAT_145fc6ed8);
    auStack_88._8_8_ = 0;
    auStack_88._0_8_ = _DAT_146159bc0;
    auStack_78._8_8_ = _UNK_14614f7f8;
    auStack_78._0_8_ = _DAT_14614f7f0;
    auStack_68 = ZEXT816(0) << 0x20;
    cVar4 = FUN_144faa1e0(auStack_98,puVar10,1);
    if (cVar4 == '\0') {
      auStack_c8._8_8_ = &UNK_1424ff560;
      auStack_c8._0_8_ = &puStack_d0;
      auStack_b8._8_8_ = &SUB_140004380;
      auStack_b8._0_8_ = &UNK_1401167b0;
      puStack_d0 = puVar10;
      FUN_1402e5b80(6);
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x10);
      if (*(char *)(param_1 + 0x14c) == '\0' || lVar7 != 0) {
        FUN_14540c440(&puStack_d0,lVar7,(int)*(short *)(param_1 + 0x148));
        auVar17._0_12_ = ZEXT812(0);
        auVar17._12_4_ = 0;
        auVar15._0_12_ = ZEXT812(0);
        auVar15._12_4_ = 0;
        if (cVar3 == '\0') {
          auVar15 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
          auVar17 = vpunpckhwd_avx(auStack_68,auStack_68);
          auVar17 = vpsrad_avx(auVar17,0x10);
          auVar17 = vcvtdq2ps_avx(auVar17);
          auVar17 = vshufpd_avx(auVar17,auVar17,3);
          auStack_a8._0_4_ = auVar17._0_4_ * _DAT_146159c90 + auStack_68._0_4_;
          auStack_a8._4_4_ = auVar17._4_4_ * _UNK_146159c94 + auStack_68._4_4_;
          auStack_a8._8_4_ = auVar17._8_4_ * _UNK_146159c98 + auStack_68._8_4_;
          auStack_a8._12_4_ = auVar17._12_4_ * _UNK_146159c9c + auStack_68._12_4_;
          uVar8 = auVar15._0_2_ | 0x10000;
          unaff_RBP = (ulonglong)uVar8;
          FUN_14551dd20(puStack_d0,auStack_c8,auStack_a8,uVar8);
          auVar23 = ZEXT1664(auStack_c8);
          FUN_14551d6b0(puStack_d0,auStack_c8,uVar8);
          auVar15 = auVar23._0_16_;
          auVar17 = auStack_c8;
        }
        *(undefined1 (*) [16])(param_1 + 0x70) = auVar15;
        *(undefined1 (*) [16])(param_1 + 0x80) = auVar17;
        bVar2 = puVar10[0x30];
        cVar4 = func_0x000144dd12a0(CONCAT71((int7)(unaff_RBP >> 8),bVar2) & 0xffffffff,
                                    *(undefined4 *)(puVar10 + 0x9c),auStack_c8);
        if (cVar4 != '\0') {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(*(longlong *)((ulonglong)bVar2 * 8 + 0x14a951468) + 0x10)
                           + (ulonglong)((uint)auStack_c8._0_4_ >> 5) * 4);
          *puVar1 = *puVar1 | 1 << (auStack_c8._0_4_ & 0x1f);
          UNLOCK();
        }
        FUN_142669b20(lVar7,puVar10);
      }
      puStack_d8 = (undefined *)CONCAT71(puStack_d8._1_7_,cVar3);
      FUN_14506e300(puVar10,auStack_98,1,1);
      lVar7 = func_0x0001450f21c0(*(undefined4 *)(puVar10 + 0x9c));
      if ((lVar7 != 0 && cVar3 == '\0') &&
         ((*(longlong *)(lVar7 + 0x28) == 0 ||
          (*(char *)(*(longlong *)(lVar7 + 0x28) + 0x156) != '\x01')))) {
        FUN_145221b70(lVar7,0);
      }
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 0x234) = *(byte *)(lVar6 + 0x234) | 0x20;
      }
    }
    return;
  }
  plVar9 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  lVar6 = func_0x0001450bb780(*(undefined4 *)((longlong)plVar9 + 0x9c));
  if (lVar6 != 0) {
    FUN_143be4300(*(undefined8 *)(lVar6 + 8),param_1);
  }
  if (*(char *)(param_1 + 0x14c) == '\x01') {
    auStack_b8 = ZEXT416(_DAT_145fc6ed8);
    auStack_a8._8_8_ = 0;
    auStack_a8._0_8_ = _DAT_146159bc0;
    auStack_98._8_8_ = _UNK_14614f7f8;
    auStack_98._0_8_ = _DAT_14614f7f0;
    auStack_88 = ZEXT816(0) << 0x20;
    cVar4 = func_0x000144faa1d0(plVar9,auStack_b8,1);
    if (cVar4 == '\0') {
      pcStack_e0 = (code *)&UNK_1424ff560;
    }
    else {
      auVar17 = vsubps_avx(*(undefined1 (*) [16])(plVar9 + 0xe),auStack_88);
      auStack_c8 = vpsubw_avx(*(undefined1 (*) [16])(plVar9 + 0xe),auStack_88);
      auVar17 = vblendps_avx(auVar17,auStack_c8,8);
      auVar15 = vpunpckhwd_avx(auVar17,auVar17);
      auVar15 = vpsrad_avx(auVar15,0x10);
      auVar15 = vcvtdq2ps_avx(auVar15);
      auVar15 = vshufpd_avx(auVar15,auVar15,3);
      auVar16._0_4_ = (uint)(auVar15._0_4_ * _DAT_146159c90 + auVar17._0_4_) & _DAT_145fc6f4c;
      auVar16._4_4_ = (uint)(auVar15._4_4_ * _UNK_146159c94 + auVar17._4_4_) & _DAT_145fc6f4c;
      auVar16._8_4_ = (uint)(auVar15._8_4_ * _UNK_146159c98 + auVar17._8_4_) & _DAT_145fc6f4c;
      auVar16._12_4_ = (uint)(auVar15._12_4_ * _UNK_146159c9c + auVar17._12_4_) & _DAT_145fc6f4c;
      auVar11._4_4_ = _DAT_145fc6f14;
      auVar11._0_4_ = _DAT_145fc6f14;
      auVar11._8_4_ = _DAT_145fc6f14;
      auVar11._12_4_ = _DAT_145fc6f14;
      auVar17 = vcmpps_avx(auVar16,auVar11,2);
      uVar5 = vmovmskps_avx(auVar17);
      if ((~(byte)uVar5 & 7) == 0) {
        auVar24._0_4_ = *(float *)(plVar9 + 0xc) + _DAT_145fc6fb0;
        auVar24._4_4_ = *(float *)((longlong)plVar9 + 100) + _DAT_145fc6fb0;
        auVar24._8_4_ = *(float *)(plVar9 + 0xd) + _DAT_145fc6fb0;
        auVar24._12_4_ = *(float *)((longlong)plVar9 + 0x6c) + _DAT_145fc6fb0;
        auVar19._0_4_ = *(float *)(plVar9 + 0xc) + _DAT_145fc6f14;
        auVar19._4_4_ = *(float *)((longlong)plVar9 + 100) + _DAT_145fc6f14;
        auVar19._8_4_ = *(float *)(plVar9 + 0xd) + _DAT_145fc6f14;
        auVar19._12_4_ = *(float *)((longlong)plVar9 + 0x6c) + _DAT_145fc6f14;
        auVar17 = vcmpps_avx(auVar24,auStack_98,2);
        auVar15 = vcmpps_avx(auStack_98,auVar19,2);
        auVar21._0_4_ = *(float *)(plVar9 + 10) + _DAT_145fc6fb0;
        auVar21._4_4_ = *(float *)((longlong)plVar9 + 0x54) + _DAT_145fc6fb0;
        auVar21._8_4_ = *(float *)(plVar9 + 0xb) + _DAT_145fc6fb0;
        auVar21._12_4_ = *(float *)((longlong)plVar9 + 0x5c) + _DAT_145fc6fb0;
        auVar18._0_4_ = *(float *)(plVar9 + 10) + _DAT_145fc6f14;
        auVar18._4_4_ = *(float *)((longlong)plVar9 + 0x54) + _DAT_145fc6f14;
        auVar18._8_4_ = *(float *)(plVar9 + 0xb) + _DAT_145fc6f14;
        auVar18._12_4_ = *(float *)((longlong)plVar9 + 0x5c) + _DAT_145fc6f14;
        auVar12._0_4_ = *(float *)(plVar9 + 8) + _DAT_145fc6f14;
        auVar12._4_4_ = *(float *)((longlong)plVar9 + 0x44) + _DAT_145fc6f14;
        auVar12._8_4_ = *(float *)(plVar9 + 9) + _DAT_145fc6f14;
        auVar12._12_4_ = *(float *)((longlong)plVar9 + 0x4c) + _DAT_145fc6f14;
        auVar11 = vcmpps_avx(auVar21,auStack_a8,2);
        auVar16 = vcmpps_avx(auStack_a8,auVar18,2);
        auVar20._0_4_ = *(float *)(plVar9 + 8) + _DAT_145fc6fb0;
        auVar20._4_4_ = *(float *)((longlong)plVar9 + 0x44) + _DAT_145fc6fb0;
        auVar20._8_4_ = *(float *)(plVar9 + 9) + _DAT_145fc6fb0;
        auVar20._12_4_ = *(float *)((longlong)plVar9 + 0x4c) + _DAT_145fc6fb0;
        auVar12 = vcmpps_avx(auStack_b8,auVar12,2);
        auVar18 = vcmpps_avx(auVar20,auStack_b8,2);
        auVar13._0_4_ =
             auVar15._0_4_ & auVar16._0_4_ & auVar17._0_4_ & auVar11._0_4_ &
             auVar12._0_4_ & auVar18._0_4_;
        auVar13._4_4_ =
             auVar15._4_4_ & auVar16._4_4_ & auVar17._4_4_ & auVar11._4_4_ &
             auVar12._4_4_ & auVar18._4_4_;
        auVar13._8_4_ =
             auVar15._8_4_ & auVar16._8_4_ & auVar17._8_4_ & auVar11._8_4_ &
             auVar12._8_4_ & auVar18._8_4_;
        auVar13._12_4_ =
             auVar15._12_4_ & auVar16._12_4_ & auVar17._12_4_ & auVar11._12_4_ &
             auVar12._12_4_ & auVar18._12_4_;
        auVar17 = vpslld_avx(auVar13,0x1f);
        uVar5 = vmovmskps_avx(auVar17);
        if ((~(byte)uVar5 & 7) == 0) {
          return;
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x10);
      if (lVar6 != 0 || *(char *)(param_1 + 0x14c) == '\0') {
        FUN_14540c440(&plStack_f0,lVar6,(int)*(short *)(param_1 + 0x148));
        auVar22._0_12_ = ZEXT812(0);
        auVar22._12_4_ = 0;
        auVar14._0_12_ = ZEXT812(0);
        auVar14._12_4_ = 0;
        if (cVar3 == '\0') {
          auVar15 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
          auVar17 = vpunpckhwd_avx(auStack_88,auStack_88);
          auVar17 = vpsrad_avx(auVar17,0x10);
          auVar17 = vcvtdq2ps_avx(auVar17);
          auVar17 = vshufpd_avx(auVar17,auVar17,3);
          auStack_78._0_4_ = auVar17._0_4_ * _DAT_146159c90 + auStack_88._0_4_;
          auStack_78._4_4_ = auVar17._4_4_ * _UNK_146159c94 + auStack_88._4_4_;
          auStack_78._8_4_ = auVar17._8_4_ * _UNK_146159c98 + auStack_88._8_4_;
          auStack_78._12_4_ = auVar17._12_4_ * _UNK_146159c9c + auStack_88._12_4_;
          uVar8 = auVar15._0_2_ | 0x10000;
          FUN_14551dd20(plStack_f0,&uStack_e8,auStack_78,uVar8);
          auVar23 = ZEXT1664(CONCAT88(pcStack_e0,CONCAT44(uStack_e8._4_4_,(uint)uStack_e8)));
          FUN_14551d6b0(plStack_f0,&uStack_e8,uVar8);
          auVar22 = auVar23._0_16_;
          auVar14._4_4_ = uStack_e8._4_4_;
          auVar14._0_4_ = (uint)uStack_e8;
          auVar14._8_8_ = pcStack_e0;
        }
        *(undefined1 (*) [16])(param_1 + 0x70) = auVar22;
        *(undefined1 (*) [16])(param_1 + 0x80) = auVar14;
        (**(code **)(*plVar9 + 0x170))(plVar9,auStack_b8,1,1,cVar3);
        bVar2 = *(byte *)(plVar9 + 6);
        cVar3 = func_0x000144dd12a0(CONCAT71((int7)((param_2 & 0xffffffff) >> 8),bVar2),
                                    *(undefined4 *)((longlong)plVar9 + 0x9c),&uStack_e8);
        if (cVar3 != '\0') {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(*(longlong *)((ulonglong)bVar2 * 8 + 0x14a951468) + 0x10)
                           + (ulonglong)((uint)uStack_e8 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((uint)uStack_e8 & 0x1f);
          UNLOCK();
        }
        FUN_142669b20(lVar6,plVar9);
        return;
      }
      (**(code **)(*plVar9 + 0x170))(plVar9,auStack_b8,1,1,0);
      pcStack_e0 = FUN_14300af50;
    }
    uStack_e8 = &plStack_f0;
    puStack_d8 = &UNK_1401167b0;
    puStack_d0 = &SUB_140004380;
    plStack_f0 = plVar9;
    FUN_1402e5b80(6);
  }
  return;
}

