// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400792d0  size: 2731 bytes
// Name:    FUN_1400792d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145117f50, FUN_145647140, FUN_145117e30, FUN_143109af0, FUN_144e333d0, FUN_144f412b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400792d0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  char cVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong *plVar31;
  ulonglong uVar32;
  bool bVar33;
  bool bVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar49 [64];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined8 auStack_d0 [4];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  ulonglong uStack_88;
  longlong lStack_80;
  ulonglong uStack_78;
  undefined4 *puStack_70;
  
  bVar19 = *(byte *)(param_1 + 0x33d);
  if ((bVar19 & 2) == 0) {
    puStack_70 = (undefined4 *)param_4;
    if (((*(uint *)(param_2 + 0xb4) & 0x3e) == 8) && ((*(byte *)(param_1 + 0x33c) & 2) != 0)) {
      if (*(longlong *)(param_2 + 0x110) == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = (uint)*(ushort *)(*(longlong *)(param_2 + 0x110) + 0x98);
      }
      if (*(int *)(param_1 + 0x10) == param_3 - 1) {
        uVar24 = *(uint *)(param_1 + 0x228);
        *(byte *)(param_1 + 0x33d) = bVar19 & 0xdd;
        if (((bVar19 & 0x20) == 0) && (uVar23 <= uVar24)) {
          *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_1 + 0x298);
        }
        else {
          auStack_d0[0] = 0x140079c5c;
          lVar16 = FUN_144e333d0(uVar23 << 6,4,1,1);
          *(longlong *)(param_1 + 0x2a0) = lVar16;
          uVar25 = uVar23;
          if (uVar24 < uVar23) {
            uVar25 = uVar24;
          }
          auStack_d0[0] = 0x140079c8b;
          func_0x000145f40560(lVar16,*(undefined8 *)(param_1 + 0x298),uVar25 << 6);
          if (uVar24 < uVar23) {
            auStack_d0[0] = 0x140079cc6;
            func_0x000145f40560(lVar16 + (ulonglong)uVar24 * 0x40,
                                (ulonglong)uVar24 * 0x40 +
                                *(longlong *)(*(longlong *)(param_2 + 0x110) + 0x90),
                                (ulonglong)(uVar23 - uVar24) << 6);
          }
        }
      }
      else {
        *(byte *)(param_1 + 0x33d) = bVar19 & 0xdd;
        *(undefined8 *)(param_1 + 0x2a0) = 0;
      }
      *(uint *)(param_1 + 0x228) = uVar23;
      auStack_d0[0] = 0x1400793c3;
      uVar13 = FUN_144e333d0(uVar23 << 6,4,1,2);
      *(undefined8 *)(param_1 + 0x298) = uVar13;
      auStack_d0[0] = 0x1400793f3;
      func_0x000145f40560(uVar13,*(undefined8 *)(*(longlong *)(param_2 + 0x110) + 0x90));
      auStack_d0[0] = 0x1400793fb;
      func_0x000144f14870(param_1 + 0x220);
    }
    puVar26 = auStack_a8;
    if ((*(byte *)(param_1 + 0x33c) & 0x40) == 0) {
      bVar19 = *(byte *)(param_1 + 0x2d0) & 0xfb;
      *(byte *)(param_1 + 0x2d0) = bVar19;
    }
    else {
      auStack_a8._4_4_ = _DAT_145fc6f50;
      auStack_a8._0_4_ = _DAT_145fc6f50;
      auStack_a8._8_4_ = _DAT_145fc6f50;
      auStack_a8._12_4_ = _DAT_145fc6f50;
      auStack_98._4_4_ = _DAT_145fc6f54;
      auStack_98._0_4_ = _DAT_145fc6f54;
      auStack_98._8_4_ = _DAT_145fc6f54;
      auStack_98._12_4_ = _DAT_145fc6f54;
      *(byte *)(param_1 + 0x2d0) = *(byte *)(param_1 + 0x2d0) | 4;
      auStack_d0[0] = 0x140079455;
      FUN_144f412b0(param_2,auStack_a8);
      auVar36 = vsubps_avx(auStack_98,auStack_a8);
      auVar35 = vshufpd_avx(auVar36,auVar36,1);
      auVar35 = vmaxss_avx(ZEXT416(_DAT_146b55c58),
                           ZEXT416((uint)(_DAT_146b55c54 * _DAT_145fc6edc * auVar35._0_4_)));
      auVar40._0_4_ = auVar35._0_4_;
      auVar40._4_4_ = auVar40._0_4_;
      auVar40._8_4_ = auVar40._0_4_;
      auVar40._12_4_ = auVar40._0_4_;
      auVar35._0_4_ =
           -(_DAT_145fc6edc * auVar36._0_4_) +
           (float)((uint)(-(_DAT_145fc6edc * (auStack_98._0_4_ + auStack_a8._0_4_)) + _DAT_148d7a9e0
                         ) & _DAT_145fc6f4c);
      auVar35._4_4_ =
           -(_DAT_145fc6edc * auVar36._4_4_) +
           (float)((uint)(-(_DAT_145fc6edc * (auStack_98._4_4_ + auStack_a8._4_4_)) +
                         fRam0000000148d7a9e4) & _DAT_145fc6f4c);
      auVar35._8_4_ =
           -(_DAT_145fc6edc * auVar36._8_4_) +
           (float)((uint)(-(_DAT_145fc6edc * (auStack_98._8_4_ + auStack_a8._8_4_)) +
                         fRam0000000148d7a9e8) & _DAT_145fc6f4c);
      auVar35._12_4_ =
           -(_DAT_145fc6edc * auVar36._12_4_) +
           (float)((uint)(-(_DAT_145fc6edc * (auStack_98._12_4_ + auStack_a8._12_4_)) +
                         fRam0000000148d7a9ec) & _DAT_145fc6f4c);
      auVar35 = vmaxps_avx(ZEXT816(0) << 0x20,auVar35);
      auVar36._0_4_ = auVar35._0_4_ * auVar35._0_4_;
      auVar36._4_4_ = auVar35._4_4_ * auVar35._4_4_;
      auVar36._8_4_ = auVar35._8_4_ * auVar35._8_4_;
      auVar36._12_4_ = auVar35._12_4_ * auVar35._12_4_;
      auVar35 = vblendps_avx(auVar36,ZEXT816(0) << 0x20,8);
      auVar35 = vhaddps_avx(auVar35,auVar35);
      auVar36 = vhaddps_avx(auVar35,auVar35);
      auVar35 = vrsqrtps_avx(auVar36);
      fVar5 = auVar35._0_4_;
      fVar6 = auVar35._4_4_;
      fVar7 = auVar35._8_4_;
      fVar8 = auVar35._12_4_;
      auVar43._4_4_ = _DAT_146159bfc;
      auVar43._0_4_ = _DAT_146159bfc;
      auVar43._8_4_ = _DAT_146159bfc;
      auVar43._12_4_ = _DAT_146159bfc;
      in_ZMM4 = ZEXT1664(auVar43);
      auVar35 = vcmpps_avx(auVar43,auVar36,2);
      auVar37._0_4_ =
           auVar35._0_4_ &
           (uint)(((-(_DAT_145fc6edc * fVar5 * fVar5 * auVar36._0_4_) + _DAT_145fc6edc) * fVar5 +
                  fVar5) * auVar36._0_4_);
      auVar37._4_4_ =
           auVar35._4_4_ &
           (uint)(((-(_DAT_145fc6edc * fVar6 * fVar6 * auVar36._4_4_) + _DAT_145fc6edc) * fVar6 +
                  fVar6) * auVar36._4_4_);
      auVar37._8_4_ =
           auVar35._8_4_ &
           (uint)(((-(_DAT_145fc6edc * fVar7 * fVar7 * auVar36._8_4_) + _DAT_145fc6edc) * fVar7 +
                  fVar7) * auVar36._8_4_);
      auVar37._12_4_ =
           auVar35._12_4_ &
           (uint)(((-(_DAT_145fc6edc * fVar8 * fVar8 * auVar36._12_4_) + _DAT_145fc6edc) * fVar8 +
                  fVar8) * auVar36._12_4_);
      auVar35 = vcmpps_avx(auVar37,auVar40,5);
      *(byte *)(param_1 + 0x33d) =
           *(byte *)(param_1 + 0x33d) & 0xfe |
           ((((SUB161(auVar35 >> 0x1f,0) & 1) == 0 && (SUB161(auVar35 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar35 >> 0x5f,0) & 1) == 0) && -1 < auVar35[0xf]);
      bVar19 = *(byte *)(param_1 + 0x2d0);
    }
    uVar30 = 0;
    if (((*(byte *)(param_2 + 0x97) & 2) != 0) && ((bVar19 & 8) != 0)) {
      uVar30 = 0x20;
      if (*(int *)(param_2 + 0x138) != 0) {
        uVar23 = *(int *)(param_2 + 0x138) - 1;
        if (uVar23 == 0) {
          uVar32 = 0;
        }
        else {
          uVar32 = (ulonglong)uVar23;
          uVar28 = 0;
          do {
            if (*(int *)(*(longlong *)(param_2 + 0x130) + uVar28 * 4) != -1) goto LAB_14007958b;
            uVar28 = uVar28 + 1;
          } while (uVar32 != uVar28);
        }
        uVar23 = *(uint *)(param_2 + 0x13c) & 0x1f;
        uVar23 = -(uint)(uVar23 == 0) | ~(-1 << uVar23);
        uVar30 = (ulonglong)
                 CONCAT31((int3)(uVar23 >> 8),
                          (*(uint *)(*(longlong *)(param_2 + 0x130) + uVar32 * 4) != uVar23) << 5);
      }
    }
LAB_14007958b:
    bVar19 = *(byte *)(param_1 + 0x33c) & 0xdf | (byte)uVar30;
    *(byte *)(param_1 + 0x33c) = bVar19;
    *(undefined1 (*) [32])(param_1 + 0x2e0) = ZEXT1232(ZEXT812(0));
    bVar33 = (*(byte *)(param_2 + 0x97) & 8) == 0;
    lVar16 = *(longlong *)(param_2 + 0x80);
    plVar14 = (longlong *)CONCAT71((int7)(uVar30 >> 8),bVar33);
    bVar34 = lVar16 != 0;
    if (bVar34 && !bVar33) {
      plVar14 = *(longlong **)(lVar16 + 0x148);
    }
    plVar31 = *(longlong **)(param_2 + 0x148);
    if (!bVar34 || bVar33) {
      plVar14 = plVar31;
    }
    uStack_78 = (ulonglong)param_3;
    if (plVar14 != (longlong *)0x0) {
      if (*(longlong *)(param_2 + 0x110) == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = (uint)*(ushort *)(*(longlong *)(param_2 + 0x110) + 0x98);
      }
      uVar23 = uVar23 + 0x1f >> 5;
      uVar23 = uVar23 + (uVar23 == 0);
      uVar30 = (ulonglong)(uVar23 * 4);
      uStack_b0 = 0x14007962a;
      lVar15 = FUN_145647140();
      lVar15 = -lVar15;
      puVar26 = auStack_a8 + lVar15;
      auVar45 = ZEXT1664(in_ZMM4._0_16_);
      auVar49 = ZEXT1664(in_ZMM5._0_16_);
      uStack_88 = uVar30;
      *(undefined8 *)((longlong)auStack_d0 + lVar15) = 0x140079645;
      func_0x000145f40580(auStack_a8 + lVar15,0);
      auVar36 = auVar49._0_16_;
      auVar35 = auVar45._0_16_;
      if (bVar34 && !bVar33) {
        plVar31 = *(longlong **)(lVar16 + 0x148);
      }
      uVar24 = uVar23 * 0x20;
      if ((plVar31 != (longlong *)0x0) && (uVar25 = *(uint *)(plVar31 + 1), uVar25 != 0)) {
        lVar16 = *plVar31;
        if (uVar23 < uVar25) {
          uVar25 = uVar23;
        }
        if (uVar25 - 1 == 0) {
          uVar30 = 0;
        }
        else {
          uVar30 = (ulonglong)(uVar25 - 1);
          auVar51._8_8_ = _DAT_145f437c0;
          auVar51._0_8_ = _DAT_145f437c0;
          auVar51._16_8_ = _DAT_145f437c0;
          auVar51._24_8_ = _DAT_145f437c0;
          auVar10 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
          auVar9 = vpcmpeqd_avx2(auVar45._0_32_,auVar45._0_32_);
          auVar35 = auVar9._0_16_;
          lVar29 = uVar30 - 1;
          uVar32 = 0;
          auVar41._8_8_ = lVar29;
          auVar41._0_8_ = lVar29;
          auVar41._16_8_ = lVar29;
          auVar41._24_8_ = lVar29;
          auVar11 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
          do {
            auVar48._8_8_ = uVar32;
            auVar48._0_8_ = uVar32;
            auVar48._16_8_ = uVar32;
            auVar48._24_8_ = uVar32;
            auVar39 = vpor_avx2(auVar48,auVar11);
            auVar48 = vpor_avx2(auVar48,auVar10);
            auVar48 = vpcmpgtq_avx2(auVar48 ^ auVar51,auVar41 ^ auVar51);
            auVar39 = vpcmpgtq_avx2(auVar39 ^ auVar51,auVar41 ^ auVar51);
            auVar48 = vpackssdw_avx2(auVar39,auVar48);
            auVar36 = vpackssdw_avx(SUB3216(auVar48 ^ auVar9,0),SUB3216(auVar48 ^ auVar9,0x10));
            auVar36 = vpshufd_avx(auVar36,0xd8);
            auVar48 = vpmovzxwd_avx2(auVar36);
            auVar46 = vpslld_avx2(auVar48,0x1f);
            auVar36 = auVar46._0_16_;
            auVar48 = vpmaskmovd_avx2(auVar46,*(undefined1 (*) [32])(lVar16 + uVar32 * 4));
            auVar39 = vpmaskmovd_avx2(auVar46,*(undefined1 (*) [32])
                                               (auStack_a8 + uVar32 * 4 + lVar15));
            auVar48 = vpor_avx2(auVar39,auVar48);
            auVar48 = vpmaskmovd_avx2(auVar46,auVar48);
            *(undefined1 (*) [32])(auStack_a8 + uVar32 * 4 + lVar15) = auVar48;
            uVar32 = uVar32 + 8;
          } while ((uVar25 + 6 & 0xfffffff8) != uVar32);
        }
        uVar25 = *(uint *)((longlong)plVar31 + 0xc);
        if (uVar24 < *(uint *)((longlong)plVar31 + 0xc)) {
          uVar25 = uVar24;
        }
        *(uint *)(auStack_a8 + uVar30 * 4 + lVar15) =
             *(uint *)(auStack_a8 + uVar30 * 4 + lVar15) |
             (-(uint)((uVar25 & 0x1f) == 0) | ~(-1 << (uVar25 & 0x1f))) &
             *(uint *)(lVar16 + uVar30 * 4);
      }
      uVar30 = uStack_88;
      in_ZMM4 = ZEXT1664(auVar35);
      in_ZMM5 = ZEXT1664(auVar36);
      *(undefined8 *)((longlong)auStack_d0 + lVar15) = 0x140079773;
      uVar13 = FUN_144e333d0(uVar30,4,1,1);
      *(undefined8 *)((longlong)auStack_d0 + lVar15) = 0x14007978c;
      func_0x000145f40560(uVar13,auStack_a8 + lVar15,uVar30);
      *(undefined8 *)(param_1 + 0x2e0) = uVar13;
      *(uint *)(param_1 + 0x2ec) = uVar24;
      *(uint *)(param_1 + 0x2e8) = uVar23;
      bVar19 = *(byte *)(param_1 + 0x33c);
    }
    auVar35 = in_ZMM5._0_16_;
    puVar27 = puVar26;
    if ((bVar19 & 6) != 0) {
      if (*(longlong *)(param_2 + 0x110) == 0) {
        uVar23 = 0;
      }
      else {
        uVar23 = *(ushort *)(*(longlong *)(param_2 + 0x110) + 0x98) + 0x1f >> 5;
      }
      uVar23 = uVar23 + (uVar23 == 0);
      iVar1 = uVar23 * 4;
      *(undefined8 *)(puVar26 + -8) = 0x1400797f6;
      lVar16 = FUN_145647140();
      lVar16 = -lVar16;
      puVar27 = puVar26 + lVar16;
      auVar45 = ZEXT1664(in_ZMM4._0_16_);
      auVar49 = ZEXT1664(in_ZMM5._0_16_);
      *(undefined8 *)(puVar26 + lVar16 + -0x28) = 0x140079810;
      func_0x000145f40580((longlong)puVar26 + lVar16,0,iVar1);
      auVar35 = auVar49._0_16_;
      uVar24 = *(uint *)(param_2 + 0x138);
      uVar25 = uVar23 * 0x20;
      if (uVar24 != 0) {
        lVar15 = *(longlong *)(param_2 + 0x130);
        if (uVar23 < uVar24) {
          uVar24 = uVar23;
        }
        if (uVar24 - 1 == 0) {
          uVar30 = 0;
        }
        else {
          uVar30 = (ulonglong)(uVar24 - 1);
          auVar39._8_8_ = _DAT_145f437c0;
          auVar39._0_8_ = _DAT_145f437c0;
          auVar39._16_8_ = _DAT_145f437c0;
          auVar39._24_8_ = _DAT_145f437c0;
          auVar10 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
          auVar9 = vpcmpeqd_avx2(auVar45._0_32_,auVar45._0_32_);
          lVar29 = uVar30 - 1;
          uVar32 = 0;
          auVar46._8_8_ = lVar29;
          auVar46._0_8_ = lVar29;
          auVar46._16_8_ = lVar29;
          auVar46._24_8_ = lVar29;
          auVar11 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
          do {
            auVar47._8_8_ = uVar32;
            auVar47._0_8_ = uVar32;
            auVar47._16_8_ = uVar32;
            auVar47._24_8_ = uVar32;
            auVar41 = vpor_avx2(auVar47,auVar11);
            auVar51 = vpor_avx2(auVar47,auVar10);
            auVar51 = vpcmpgtq_avx2(auVar51 ^ auVar39,auVar46 ^ auVar39);
            auVar41 = vpcmpgtq_avx2(auVar41 ^ auVar39,auVar46 ^ auVar39);
            auVar51 = vpackssdw_avx2(auVar41,auVar51);
            auVar35 = vpackssdw_avx(SUB3216(auVar51 ^ auVar9,0),SUB3216(auVar51 ^ auVar9,0x10));
            auVar35 = vpshufd_avx(auVar35,0xd8);
            auVar51 = vpmovzxwd_avx2(auVar35);
            auVar48 = vpslld_avx2(auVar51,0x1f);
            auVar35 = auVar48._0_16_;
            auVar51 = vpmaskmovd_avx2(auVar48,*(undefined1 (*) [32])(lVar15 + uVar32 * 4));
            auVar41 = vpmaskmovd_avx2(auVar48,*(undefined1 (*) [32])(puVar26 + uVar32 * 4 + lVar16))
            ;
            auVar51 = vpor_avx2(auVar41,auVar51);
            auVar51 = vpmaskmovd_avx2(auVar48,auVar51);
            *(undefined1 (*) [32])(puVar26 + uVar32 * 4 + lVar16) = auVar51;
            uVar32 = uVar32 + 8;
          } while ((uVar24 + 6 & 0xfffffff8) != uVar32);
        }
        uVar24 = *(uint *)(param_2 + 0x13c);
        if (uVar25 < *(uint *)(param_2 + 0x13c)) {
          uVar24 = uVar25;
        }
        *(uint *)(puVar26 + uVar30 * 4 + lVar16) =
             *(uint *)(puVar26 + uVar30 * 4 + lVar16) |
             (-(uint)((uVar24 & 0x1f) == 0) | ~(-1 << (uVar24 & 0x1f))) &
             *(uint *)(lVar15 + uVar30 * 4);
      }
      auVar45 = ZEXT1664(auVar35);
      *(undefined8 *)(puVar26 + lVar16 + -0x28) = 0x14007992c;
      uVar13 = FUN_144e333d0(iVar1,4,1,1);
      *(undefined8 *)(puVar26 + lVar16 + -0x28) = 0x140079945;
      func_0x000145f40560(uVar13,(longlong)puVar26 + lVar16,iVar1);
      auVar35 = auVar45._0_16_;
      *(undefined8 *)(param_1 + 0x2f0) = uVar13;
      *(uint *)(param_1 + 0x2fc) = uVar25;
      *(uint *)(param_1 + 0x2f8) = uVar23;
    }
    puVar18 = puStack_70;
    uVar30 = uStack_78;
    auVar45 = ZEXT1664(auVar35);
    *(undefined8 *)(puVar27 + -0x28) = 0x140079977;
    func_0x000144f14950(param_1,param_2,uVar30,puVar18);
    if ((*(byte *)(param_1 + 0x33d) & 4) != 0) {
      *(undefined8 *)(puVar27 + -0x28) = 0x140079994;
      uVar13 = func_0x000144e3bfa0(param_2);
      *(undefined8 *)(puVar27 + -0x28) = 0x1400799ad;
      lVar16 = func_0x000144e8f430(uVar13,_DAT_149096d34);
      lStack_80 = param_2;
      if (lVar16 == 0) {
        uVar23 = *(uint *)(param_1 + 0x228);
        uVar32 = (ulonglong)uVar23;
        *(undefined8 *)(puVar27 + -0x28) = 0x140079af5;
        uVar17 = FUN_144e333d0(uVar23 * 4,4,1);
        *(undefined8 *)(param_1 + 0x310) = uVar17;
        *(undefined8 *)(puVar27 + -0x28) = 0x140079b12;
        lVar16 = func_0x000144e8f430(uVar13);
        uVar30 = uStack_78;
        if (lVar16 == 0) {
          uVar13 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x60);
          *(undefined8 *)(puVar27 + -0x28) = 0x140079b9b;
          cVar12 = func_0x000140452090(uVar13);
          if (cVar12 == '\0') {
            if (uVar32 != 0) {
              lVar15 = uVar32 - 1;
              auVar42._8_8_ = _DAT_145f437c0;
              auVar42._0_8_ = _DAT_145f437c0;
              auVar42._16_8_ = _DAT_145f437c0;
              auVar42._24_8_ = _DAT_145f437c0;
              auVar10 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
              auVar11 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
              lVar16 = *(longlong *)(param_1 + 0x310);
              uVar30 = 0;
              auVar9 = vpcmpeqd_avx2(auVar45._0_32_,auVar45._0_32_);
              auVar44._8_8_ = lVar15;
              auVar44._0_8_ = lVar15;
              auVar44._16_8_ = lVar15;
              auVar44._24_8_ = lVar15;
              uVar2 = *(undefined4 *)(param_1 + 0x338);
              auVar38._4_4_ = uVar2;
              auVar38._0_4_ = uVar2;
              auVar38._8_4_ = uVar2;
              auVar38._12_4_ = uVar2;
              auVar38._16_4_ = uVar2;
              auVar38._20_4_ = uVar2;
              auVar38._24_4_ = uVar2;
              auVar38._28_4_ = uVar2;
              do {
                auVar50._8_8_ = uVar30;
                auVar50._0_8_ = uVar30;
                auVar50._16_8_ = uVar30;
                auVar50._24_8_ = uVar30;
                auVar41 = vpor_avx2(auVar50,auVar10);
                auVar51 = vpor_avx2(auVar50,auVar11);
                auVar51 = vpcmpgtq_avx2(auVar51 ^ auVar42,auVar44 ^ auVar42);
                auVar41 = vpcmpgtq_avx2(auVar41 ^ auVar42,auVar44 ^ auVar42);
                auVar51 = vpackssdw_avx2(auVar41,auVar51);
                auVar35 = vpackssdw_avx(SUB3216(auVar51 ^ auVar9,0),SUB3216(auVar51 ^ auVar9,0x10));
                auVar35 = vpshufd_avx(auVar35,0xd8);
                auVar51 = vpmovzxwd_avx2(auVar35);
                auVar51 = vpslld_avx2(auVar51,0x1f);
                auVar51 = vpmaskmovd_avx2(auVar51,auVar38);
                *(undefined1 (*) [32])(lVar16 + uVar30 * 4) = auVar51;
                uVar30 = uVar30 + 8;
              } while ((uVar32 + 7 & 0xfffffffffffffff8) != uVar30);
            }
          }
          else {
            *(undefined8 *)(puVar27 + -0x28) = 0x140079bb3;
            uVar23 = FUN_143109af0(param_2);
            uVar30 = uStack_78;
            if (*(int *)(_DAT_148d7a9f8 + 0x2c + (ulonglong)uVar23 * 0x40) != 0) {
              lVar16 = _DAT_148d7a9f8 + 0x28 + (ulonglong)uVar23 * 0x40;
              puStack_70 = (undefined4 *)(param_1 + 0x338);
              lVar15 = 0x30;
              uVar32 = 0;
              do {
                lVar4 = *(longlong *)(lVar16 + 8);
                lVar29 = lVar4 + -0x28 + lVar15;
                uVar13 = *(undefined8 *)(lVar29 + 0x28);
                *(undefined8 *)(puVar27 + -0x28) = 0x140079c08;
                FUN_145117f50(lVar29,uVar13,uVar30 & 0xffffffff);
                puVar18 = (undefined4 *)(lVar4 + -0x1c + lVar15);
                if (*(int *)(lVar29 + 0x20) == 0) {
                  puVar18 = puStack_70;
                }
                lVar15 = lVar15 + 0x40;
                *(undefined4 *)(*(longlong *)(param_1 + 0x310) + uVar32 * 4) = *puVar18;
                uVar32 = uVar32 + 1;
              } while (uVar32 < *(uint *)(lVar16 + 4));
            }
          }
        }
        else {
          *(undefined8 *)(puVar27 + -0x28) = 0x140079b2e;
          FUN_145117e30(lVar16,uVar30);
          if (uVar32 != 0) {
            uVar3 = *(ushort *)(lVar16 + 0x10);
            lVar15 = *(longlong *)(param_1 + 0x310);
            lVar29 = 0x20;
            uVar30 = 0;
            do {
              puVar18 = (undefined4 *)(param_1 + 0x338);
              if ((uVar30 < uVar3) && (*(int *)(*(longlong *)(lVar16 + 8) + lVar29) != 0)) {
                puVar18 = (undefined4 *)(*(longlong *)(lVar16 + 8) + -0x14 + lVar29);
              }
              lVar29 = lVar29 + 0x28;
              *(undefined4 *)(lVar15 + uVar30 * 4) = *puVar18;
              uVar30 = uVar30 + 1;
            } while (uVar32 != uVar30);
          }
        }
      }
      else {
        uVar3 = *(ushort *)(lVar16 + 0x10);
        *(undefined8 *)(puVar27 + -0x28) = 0x1400799e2;
        uVar17 = FUN_144e333d0((ulonglong)uVar3 << 2,4,1,1);
        *(undefined8 *)(param_1 + 0x310) = uVar17;
        uVar3 = *(ushort *)(lVar16 + 0x10);
        uVar13 = *(undefined8 *)(lVar16 + 8);
        *(undefined8 *)(puVar27 + -0x28) = 0x140079a06;
        func_0x000145f40560(uVar17,uVar13,(ulonglong)uVar3 << 2);
      }
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x310);
      param_2 = lStack_80;
    }
    *(undefined8 *)(param_1 + 0x300) = 0;
    bVar19 = *(byte *)(param_1 + 0x33c);
    *(byte *)(param_1 + 0x2d0) =
         *(byte *)(param_1 + 0x2d0) & 0xfd | *(byte *)(param_2 + 0x95) >> 5 & 2;
    if ((bVar19 & 2) == 0) {
      bVar20 = 0;
    }
    else {
      bVar20 = ((*(uint *)(param_2 + 0xb4) & 0x3e) == 8) << 4;
    }
    *(byte *)(param_1 + 0x33d) = *(byte *)(param_1 + 0x33d) & 0xef | bVar20;
    if ((bVar19 & 6) != 0) {
      *(undefined2 *)(param_1 + 0x2d1) = 0xf0f;
      bVar20 = *(byte *)(param_1 + 0x120);
      bVar21 = *(char *)(param_2 + 0x94) * '\x02' & 8;
      bVar22 = bVar21 | bVar20 & 0xf7;
      *(byte *)(param_1 + 0x120) = bVar22;
      if ((bVar19 & 0x10) == 0) {
        bVar21 = bVar21 | bVar20 & 0xf5;
      }
      else {
        bVar21 = bVar22 | 2;
      }
      *(byte *)(param_1 + 0x120) = bVar21;
    }
  }
  else {
    *(uint *)(param_1 + 0x10) = param_3;
  }
  return;
}

