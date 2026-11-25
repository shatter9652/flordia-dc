// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140064010  size: 908 bytes
// Name:    FUN_140064010
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14551d6b0, FUN_142669b20, FUN_1402e5b80, FUN_14551dd20, FUN_14540c440, FUN_143be4300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140064010(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
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
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  longlong *plStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 aauStack_78 [4] [16];
  
  plVar8 = (longlong *)(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  lVar6 = func_0x0001450bb780(*(undefined4 *)((longlong)plVar8 + 0x9c));
  if (lVar6 != 0) {
    FUN_143be4300(*(undefined8 *)(lVar6 + 8),param_1);
  }
  if (*(char *)(param_1 + 0x14c) == '\x01') {
    auStack_b8 = ZEXT416(_DAT_145fc6ed8);
    uStack_a8 = _DAT_146159bc0;
    uStack_a0 = 0;
    uStack_98 = _DAT_14614f7f0;
    uStack_90 = _UNK_14614f7f8;
    auStack_88 = ZEXT816(0) << 0x20;
    cVar4 = func_0x000144faa1d0(plVar8,auStack_b8,1);
    if (cVar4 == '\0') {
      pcStack_e0 = (code *)&UNK_1424ff560;
    }
    else {
      auVar11 = vsubps_avx(*(undefined1 (*) [16])(plVar8 + 0xe),auStack_88);
      auStack_c8 = vpsubw_avx(*(undefined1 (*) [16])(plVar8 + 0xe),auStack_88);
      auVar11 = vblendps_avx(auVar11,auStack_c8,8);
      auVar13 = vpunpckhwd_avx(auVar11,auVar11);
      auVar13 = vpsrad_avx(auVar13,0x10);
      auVar13 = vcvtdq2ps_avx(auVar13);
      auVar13 = vshufpd_avx(auVar13,auVar13,3);
      auVar14._0_4_ = (uint)(auVar13._0_4_ * _DAT_146159c90 + auVar11._0_4_) & _DAT_145fc6f4c;
      auVar14._4_4_ = (uint)(auVar13._4_4_ * _UNK_146159c94 + auVar11._4_4_) & _DAT_145fc6f4c;
      auVar14._8_4_ = (uint)(auVar13._8_4_ * _UNK_146159c98 + auVar11._8_4_) & _DAT_145fc6f4c;
      auVar14._12_4_ = (uint)(auVar13._12_4_ * _UNK_146159c9c + auVar11._12_4_) & _DAT_145fc6f4c;
      auVar11._4_4_ = _DAT_145fc6f14;
      auVar11._0_4_ = _DAT_145fc6f14;
      auVar11._8_4_ = _DAT_145fc6f14;
      auVar11._12_4_ = _DAT_145fc6f14;
      auVar11 = vcmpps_avx(auVar14,auVar11,2);
      uVar5 = vmovmskps_avx(auVar11);
      if ((~(byte)uVar5 & 7) == 0) {
        auVar13._8_8_ = uStack_90;
        auVar13._0_8_ = uStack_98;
        auVar3._8_8_ = uStack_a0;
        auVar3._0_8_ = uStack_a8;
        auVar21._0_4_ = *(float *)(plVar8 + 0xc) + _DAT_145fc6fb0;
        auVar21._4_4_ = *(float *)((longlong)plVar8 + 100) + _DAT_145fc6fb0;
        auVar21._8_4_ = *(float *)(plVar8 + 0xd) + _DAT_145fc6fb0;
        auVar21._12_4_ = *(float *)((longlong)plVar8 + 0x6c) + _DAT_145fc6fb0;
        auVar16._0_4_ = *(float *)(plVar8 + 0xc) + _DAT_145fc6f14;
        auVar16._4_4_ = *(float *)((longlong)plVar8 + 100) + _DAT_145fc6f14;
        auVar16._8_4_ = *(float *)(plVar8 + 0xd) + _DAT_145fc6f14;
        auVar16._12_4_ = *(float *)((longlong)plVar8 + 0x6c) + _DAT_145fc6f14;
        auVar11 = vcmpps_avx(auVar21,auVar13,2);
        auVar13 = vcmpps_avx(auVar13,auVar16,2);
        auVar18._0_4_ = *(float *)(plVar8 + 10) + _DAT_145fc6fb0;
        auVar18._4_4_ = *(float *)((longlong)plVar8 + 0x54) + _DAT_145fc6fb0;
        auVar18._8_4_ = *(float *)(plVar8 + 0xb) + _DAT_145fc6fb0;
        auVar18._12_4_ = *(float *)((longlong)plVar8 + 0x5c) + _DAT_145fc6fb0;
        auVar15._0_4_ = *(float *)(plVar8 + 10) + _DAT_145fc6f14;
        auVar15._4_4_ = *(float *)((longlong)plVar8 + 0x54) + _DAT_145fc6f14;
        auVar15._8_4_ = *(float *)(plVar8 + 0xb) + _DAT_145fc6f14;
        auVar15._12_4_ = *(float *)((longlong)plVar8 + 0x5c) + _DAT_145fc6f14;
        auVar9._0_4_ = *(float *)(plVar8 + 8) + _DAT_145fc6f14;
        auVar9._4_4_ = *(float *)((longlong)plVar8 + 0x44) + _DAT_145fc6f14;
        auVar9._8_4_ = *(float *)(plVar8 + 9) + _DAT_145fc6f14;
        auVar9._12_4_ = *(float *)((longlong)plVar8 + 0x4c) + _DAT_145fc6f14;
        auVar14 = vcmpps_avx(auVar18,auVar3,2);
        auVar3 = vcmpps_avx(auVar3,auVar15,2);
        auVar17._0_4_ = *(float *)(plVar8 + 8) + _DAT_145fc6fb0;
        auVar17._4_4_ = *(float *)((longlong)plVar8 + 0x44) + _DAT_145fc6fb0;
        auVar17._8_4_ = *(float *)(plVar8 + 9) + _DAT_145fc6fb0;
        auVar17._12_4_ = *(float *)((longlong)plVar8 + 0x4c) + _DAT_145fc6fb0;
        auVar9 = vcmpps_avx(auStack_b8,auVar9,2);
        auVar15 = vcmpps_avx(auVar17,auStack_b8,2);
        auVar10._0_4_ =
             auVar13._0_4_ & auVar3._0_4_ & auVar11._0_4_ & auVar14._0_4_ &
             auVar9._0_4_ & auVar15._0_4_;
        auVar10._4_4_ =
             auVar13._4_4_ & auVar3._4_4_ & auVar11._4_4_ & auVar14._4_4_ &
             auVar9._4_4_ & auVar15._4_4_;
        auVar10._8_4_ =
             auVar13._8_4_ & auVar3._8_4_ & auVar11._8_4_ & auVar14._8_4_ &
             auVar9._8_4_ & auVar15._8_4_;
        auVar10._12_4_ =
             auVar13._12_4_ & auVar3._12_4_ & auVar11._12_4_ & auVar14._12_4_ &
             auVar9._12_4_ & auVar15._12_4_;
        auVar11 = vpslld_avx(auVar10,0x1f);
        uVar5 = vmovmskps_avx(auVar11);
        if ((~(byte)uVar5 & 7) == 0) {
          return;
        }
      }
      lVar6 = *(longlong *)(param_1 + 0x10);
      if (lVar6 != 0 || *(char *)(param_1 + 0x14c) == '\0') {
        FUN_14540c440(&plStack_f0,lVar6,(int)*(short *)(param_1 + 0x148));
        auVar19._0_12_ = ZEXT812(0);
        auVar19._12_4_ = 0;
        auVar12._0_12_ = ZEXT812(0);
        auVar12._12_4_ = 0;
        cVar4 = (char)(param_2 & 0xffffffff);
        if (cVar4 == '\0') {
          auVar13 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
          auVar11 = vpunpckhwd_avx(auStack_88,auStack_88);
          auVar11 = vpsrad_avx(auVar11,0x10);
          auVar11 = vcvtdq2ps_avx(auVar11);
          auVar11 = vshufpd_avx(auVar11,auVar11,3);
          aauStack_78[0]._0_4_ = auVar11._0_4_ * _DAT_146159c90 + auStack_88._0_4_;
          aauStack_78[0]._4_4_ = auVar11._4_4_ * _UNK_146159c94 + auStack_88._4_4_;
          aauStack_78[0]._8_4_ = auVar11._8_4_ * _UNK_146159c98 + auStack_88._8_4_;
          aauStack_78[0]._12_4_ = auVar11._12_4_ * _UNK_146159c9c + auStack_88._12_4_;
          uVar7 = auVar13._0_2_ | 0x10000;
          FUN_14551dd20(plStack_f0,&uStack_e8,aauStack_78,uVar7);
          auVar20 = ZEXT1664(CONCAT88(pcStack_e0,CONCAT44(uStack_e8._4_4_,(uint)uStack_e8)));
          FUN_14551d6b0(plStack_f0,&uStack_e8,uVar7);
          auVar19 = auVar20._0_16_;
          auVar12._4_4_ = uStack_e8._4_4_;
          auVar12._0_4_ = (uint)uStack_e8;
          auVar12._8_8_ = pcStack_e0;
        }
        *(undefined1 (*) [16])(param_1 + 0x70) = auVar19;
        *(undefined1 (*) [16])(param_1 + 0x80) = auVar12;
        (**(code **)(*plVar8 + 0x170))(plVar8,auStack_b8,1,1,cVar4);
        bVar2 = *(byte *)(plVar8 + 6);
        cVar4 = func_0x000144dd12a0(CONCAT71((int7)((param_2 & 0xffffffff) >> 8),bVar2),
                                    *(undefined4 *)((longlong)plVar8 + 0x9c),&uStack_e8);
        if (cVar4 != '\0') {
          LOCK();
          puVar1 = (uint *)(*(longlong *)(*(longlong *)((ulonglong)bVar2 * 8 + 0x14a951468) + 0x10)
                           + (ulonglong)((uint)uStack_e8 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((uint)uStack_e8 & 0x1f);
          UNLOCK();
        }
        FUN_142669b20(lVar6,plVar8);
        return;
      }
      (**(code **)(*plVar8 + 0x170))(plVar8,auStack_b8,1,1,0);
      pcStack_e0 = FUN_14300af50;
    }
    uStack_e8 = &plStack_f0;
    puStack_d8 = &UNK_1401167b0;
    puStack_d0 = &SUB_140004380;
    plStack_f0 = plVar8;
    FUN_1402e5b80(6);
  }
  return;
}

