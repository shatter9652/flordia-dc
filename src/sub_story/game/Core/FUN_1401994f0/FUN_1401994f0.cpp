// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401994f0  size: 1875 bytes
// Name:    FUN_1401994f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e9fbf0, FUN_1450542b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1401994f0(longlong param_1,undefined4 *param_2,undefined1 (*param_3) [16],
                       longlong *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  int iVar10;
  float *pfVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  float fVar43;
  float fVar46;
  float fVar47;
  undefined1 auVar44 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  char cStack_e9;
  longlong *plStack_e8;
  longlong lStack_e0;
  undefined4 *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auVar45 [64];
  
  lVar5 = *param_4;
  auVar25 = *param_3;
  auVar42 = ZEXT1664(auVar25);
  auVar32._0_12_ = ZEXT812(0);
  auVar32._12_4_ = 0;
  uVar14 = *(uint *)(lVar5 + 0x1d4);
  auVar36 = vsubps_avx(*(undefined1 (*) [16])(lVar5 + 0xe0),auVar25);
  auVar41 = ZEXT1664(auVar36);
  auVar22._0_4_ = auVar36._0_4_ * auVar36._0_4_;
  auVar22._4_4_ = auVar36._4_4_ * auVar36._4_4_;
  auVar22._8_4_ = auVar36._8_4_ * auVar36._8_4_;
  auVar22._12_4_ = auVar36._12_4_ * auVar36._12_4_;
  auVar32 = vblendps_avx(auVar22,auVar32,8);
  auVar32 = vhaddps_avx(auVar32,auVar32);
  auVar32 = vhaddps_avx(auVar32,auVar32);
  auVar40 = ZEXT1664(auVar32);
  if ((uVar14 >> 0x10 & 1) != 0) {
    auVar32 = vhaddps_avx(auVar22,auVar22);
  }
  auVar39 = ZEXT464(_DAT_145fc6f50);
  uVar21 = (ulonglong)_DAT_145fc6f50;
  if (auVar32._0_4_ <= *(float *)(lVar5 + 0xf0) * *(float *)(lVar5 + 0xf0)) {
    fVar43 = *(float *)*param_3;
    fVar46 = *(float *)(*param_3 + 4);
    fVar47 = *(float *)(*param_3 + 8);
    auVar44._0_4_ =
         fVar47 * *(float *)(lVar5 + 0x120) +
         fVar46 * *(float *)(lVar5 + 0x110) +
         *(float *)(lVar5 + 0x100) * fVar43 + *(float *)(lVar5 + 0x130);
    auVar44._4_4_ =
         fVar47 * *(float *)(lVar5 + 0x124) +
         fVar46 * *(float *)(lVar5 + 0x114) +
         *(float *)(lVar5 + 0x104) * fVar43 + *(float *)(lVar5 + 0x134);
    auVar44._8_4_ =
         fVar47 * *(float *)(lVar5 + 0x128) +
         fVar46 * *(float *)(lVar5 + 0x118) +
         *(float *)(lVar5 + 0x108) * fVar43 + *(float *)(lVar5 + 0x138);
    auVar44._12_4_ =
         fVar47 * *(float *)(lVar5 + 300) +
         fVar46 * *(float *)(lVar5 + 0x11c) +
         *(float *)(lVar5 + 0x10c) * fVar43 + *(float *)(lVar5 + 0x13c);
    auVar45 = ZEXT1664(auVar44);
    fVar43 = *(float *)(lVar5 + 0x1f0);
    if (0.0 < fVar43) {
      auVar32 = vshufps_avx(auVar36,auVar36,0xaa);
      auVar23._4_4_ = fVar43;
      auVar23._0_4_ = fVar43;
      auVar23._8_4_ = fVar43;
      auVar23._12_4_ = fVar43;
      auVar33._0_4_ = auVar32._0_4_ & _DAT_145fc6f4c;
      auVar33._4_4_ = auVar32._4_4_ & _DAT_145fc6f4c;
      auVar33._8_4_ = auVar32._8_4_ & _DAT_145fc6f4c;
      auVar33._12_4_ = auVar32._12_4_ & _DAT_145fc6f4c;
      auVar32 = vcmpps_avx(auVar23,auVar33,5);
      if ((((SUB161(auVar32 >> 0x1f,0) & 1) == 0 && (SUB161(auVar32 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar32 >> 0x5f,0) & 1) == 0) && -1 < auVar32[0xf]) {
        return uVar21;
      }
    }
    if (0 < (longlong)*(int *)(lVar5 + 0x1d0)) {
      lVar18 = 0;
      auVar24._0_12_ = ZEXT812(0);
      auVar24._12_4_ = 0;
      do {
        auVar32 = *(undefined1 (*) [16])(lVar5 + 400 + lVar18);
        auVar22 = vsubps_avx(auVar32,auVar44);
        auVar34._0_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar34._4_4_ = auVar32._4_4_ * auVar32._4_4_;
        auVar34._8_4_ = auVar32._8_4_ * auVar32._8_4_;
        auVar34._12_4_ = auVar32._12_4_ * auVar32._12_4_;
        auVar35._0_4_ = auVar22._0_4_ * auVar22._0_4_;
        auVar35._4_4_ = auVar22._4_4_ * auVar22._4_4_;
        auVar35._8_4_ = auVar22._8_4_ * auVar22._8_4_;
        auVar35._12_4_ = auVar22._12_4_ * auVar22._12_4_;
        auVar22 = vshufps_avx(auVar34,auVar34,0xff);
        auVar32 = vblendps_avx(auVar35,auVar24,8);
        auVar32 = vhaddps_avx(auVar32,auVar32);
        auVar32 = vhaddps_avx(auVar32,auVar32);
        auVar32 = vcmpps_avx(auVar32,auVar22,6);
        if ((((SUB161(auVar32 >> 0x1f,0) & 1) == 0 && (SUB161(auVar32 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar32 >> 0x5f,0) & 1) == 0) && -1 < auVar32[0xf]) {
          return uVar21;
        }
        lVar18 = lVar18 + 0x10;
      } while ((longlong)*(int *)(lVar5 + 0x1d0) * 0x10 != lVar18);
    }
    plStack_e8 = param_4;
    lStack_e0 = param_1;
    puStack_d8 = param_2;
    if ((uVar14 & 1) != 0) {
      lVar18 = param_4[1];
      uVar1 = *(ushort *)(lVar18 + 0x1ca070);
      if ((ulonglong)uVar1 != 0) {
        auVar36._4_4_ = _DAT_146159ca4;
        auVar36._0_4_ = _DAT_146159ca4;
        auVar36._8_4_ = _DAT_146159ca4;
        auVar36._12_4_ = _DAT_146159ca4;
        lVar15 = *(longlong *)(lVar18 + 0x1ca068);
        uVar21 = 0;
        auVar51 = ZEXT1264(ZEXT812(0));
        uStack_d0 = *(undefined8 *)(_DAT_14924f9a0 + 0x20);
        auVar25 = vcmpss_avx(ZEXT816(0) << 0x40,ZEXT416(*(uint *)(lVar5 + 0x1e8)),1);
        auVar25 = vblendvps_avx(auVar36,ZEXT416(*(uint *)(lVar5 + 0x1e8)),auVar25);
        auVar50 = ZEXT1664(auVar25);
        do {
          lVar6 = *(longlong *)(lVar15 + uVar21 * 8);
          if ((((uVar14 >> 0x11 & 1) == 0) || ((*(byte *)(lVar6 + 0x682) & 2) == 0)) &&
             (((uVar14 >> 0x12 & 1) == 0 || ((*(byte *)(lVar6 + 0x683) & 0x40) != 0)))) {
            if (*(int *)(lVar5 + 0xf4) == -1) {
LAB_140199757:
              pfVar11 = (float *)func_0x0001450539b0(lVar18,lVar6);
              fVar43 = auVar45._0_4_;
              auVar25._0_4_ = fVar43 * *(float *)(lVar6 + 0x160);
              fVar46 = auVar45._4_4_;
              auVar25._4_4_ = fVar46 * *(float *)(lVar6 + 0x164);
              fVar47 = auVar45._8_4_;
              auVar25._8_4_ = fVar47 * *(float *)(lVar6 + 0x168);
              fVar48 = auVar45._12_4_;
              auVar25._12_4_ = fVar48 * *(float *)(lVar6 + 0x16c);
              auVar32 = auVar51._0_16_;
              auVar25 = vblendps_avx(auVar25,auVar32,8);
              auVar25 = vhaddps_avx(auVar25,auVar25);
              auVar25 = vhaddps_avx(auVar25,auVar25);
              fVar49 = auVar50._0_4_;
              if (auVar25._0_4_ + *(float *)(lVar6 + 0x16c) + *pfVar11 <= fVar49) {
                auVar26._0_4_ = fVar43 * *(float *)(lVar6 + 0x170);
                auVar26._4_4_ = fVar46 * *(float *)(lVar6 + 0x174);
                auVar26._8_4_ = fVar47 * *(float *)(lVar6 + 0x178);
                auVar26._12_4_ = fVar48 * *(float *)(lVar6 + 0x17c);
                auVar25 = vblendps_avx(auVar26,auVar32,8);
                auVar25 = vhaddps_avx(auVar25,auVar25);
                auVar25 = vhaddps_avx(auVar25,auVar25);
                if (auVar25._0_4_ + *(float *)(lVar6 + 0x17c) + pfVar11[1] <= fVar49) {
                  auVar27._0_4_ = fVar43 * *(float *)(lVar6 + 0x180);
                  auVar27._4_4_ = fVar46 * *(float *)(lVar6 + 0x184);
                  auVar27._8_4_ = fVar47 * *(float *)(lVar6 + 0x188);
                  auVar27._12_4_ = fVar48 * *(float *)(lVar6 + 0x18c);
                  auVar25 = vblendps_avx(auVar27,auVar32,8);
                  auVar25 = vhaddps_avx(auVar25,auVar25);
                  auVar25 = vhaddps_avx(auVar25,auVar25);
                  if (auVar25._0_4_ + *(float *)(lVar6 + 0x18c) + pfVar11[2] <= fVar49) {
                    auVar28._0_4_ = fVar43 * *(float *)(lVar6 + 400);
                    auVar28._4_4_ = fVar46 * *(float *)(lVar6 + 0x194);
                    auVar28._8_4_ = fVar47 * *(float *)(lVar6 + 0x198);
                    auVar28._12_4_ = fVar48 * *(float *)(lVar6 + 0x19c);
                    auVar25 = vblendps_avx(auVar28,auVar32,8);
                    auVar25 = vhaddps_avx(auVar25,auVar25);
                    auVar25 = vhaddps_avx(auVar25,auVar25);
                    if (auVar25._0_4_ + *(float *)(lVar6 + 0x19c) + pfVar11[3] <= fVar49) {
                      auVar29._0_4_ = fVar43 * *(float *)(lVar6 + 0x1a0);
                      auVar29._4_4_ = fVar46 * *(float *)(lVar6 + 0x1a4);
                      auVar29._8_4_ = fVar47 * *(float *)(lVar6 + 0x1a8);
                      auVar29._12_4_ = fVar48 * *(float *)(lVar6 + 0x1ac);
                      auVar25 = vblendps_avx(auVar29,auVar32,8);
                      auVar25 = vhaddps_avx(auVar25,auVar25);
                      auVar25 = vhaddps_avx(auVar25,auVar25);
                      if (auVar25._0_4_ + *(float *)(lVar6 + 0x1ac) + pfVar11[4] <= fVar49) {
                        auVar30._0_4_ = fVar43 * *(float *)(lVar6 + 0x1b0);
                        auVar30._4_4_ = fVar46 * *(float *)(lVar6 + 0x1b4);
                        auVar30._8_4_ = fVar47 * *(float *)(lVar6 + 0x1b8);
                        auVar30._12_4_ = fVar48 * *(float *)(lVar6 + 0x1bc);
                        auVar25 = vblendps_avx(auVar30,auVar32,8);
                        auVar25 = vhaddps_avx(auVar25,auVar25);
                        auVar25 = vhaddps_avx(auVar25,auVar25);
                        if (auVar25._0_4_ + *(float *)(lVar6 + 0x1bc) + pfVar11[5] <= fVar49) {
                          return auVar39._0_8_;
                        }
                      }
                    }
                  }
                }
              }
            }
            else if (*(ushort *)(lVar5 + 0x188) != 0) {
              uVar19 = 0;
              do {
                if (*(short *)(*(longlong *)(lVar5 + 0x180) + uVar19) ==
                    (short)((short)((uint)((int)lVar6 - (int)uStack_d0) >> 5) * 0x521d))
                goto LAB_140199757;
                uVar19 = uVar19 + 2;
              } while ((uint)*(ushort *)(lVar5 + 0x188) * 2 != uVar19);
            }
          }
          auVar36 = auVar41._0_16_;
          auVar25 = auVar42._0_16_;
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar1);
      }
    }
    puVar9 = puStack_d8;
    lVar18 = lStack_e0;
    plVar8 = plStack_e8;
    fVar43 = *(float *)(lVar5 + 0x1e0);
    if ((0.0 < fVar43) && (0 < (longlong)*(int *)(lVar5 + 0x204))) {
      lVar15 = 0;
      auVar37._0_12_ = ZEXT812(0);
      auVar37._12_4_ = 0;
      do {
        auVar32 = vsubps_avx(*(undefined1 (*) [16])(lVar5 + 0x220 + lVar15),auVar25);
        auVar38._0_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar38._4_4_ = auVar32._4_4_ * auVar32._4_4_;
        auVar38._8_4_ = auVar32._8_4_ * auVar32._8_4_;
        auVar38._12_4_ = auVar32._12_4_ * auVar32._12_4_;
        auVar32 = vblendps_avx(auVar38,auVar37,8);
        auVar32 = vhaddps_avx(auVar32,auVar32);
        auVar32 = vhaddps_avx(auVar32,auVar32);
        if (auVar32._0_4_ < fVar43 * fVar43) {
          return auVar39._0_8_;
        }
        lVar15 = lVar15 + 0x40;
      } while ((longlong)*(int *)(lVar5 + 0x204) * 0x40 != lVar15);
    }
    auVar25 = vshufpd_avx(auVar36,auVar36,1);
    if (0.0 <= auVar25._0_4_) {
      fVar43 = *(float *)(lVar5 + 0x1dc);
    }
    else {
      fVar43 = *(float *)(lVar5 + 0x1d8);
    }
    if ((fVar43 != _DAT_145fc6ed8) || (NAN(fVar43) || NAN(_DAT_145fc6ed8))) {
      auVar25 = vinsertps_avx(auVar36,ZEXT416((uint)(fVar43 * auVar25._0_4_)),0x20);
      auVar31._0_4_ = auVar25._0_4_ * auVar25._0_4_;
      auVar31._4_4_ = auVar25._4_4_ * auVar25._4_4_;
      auVar31._8_4_ = auVar25._8_4_ * auVar25._8_4_;
      auVar31._12_4_ = auVar25._12_4_ * auVar25._12_4_;
      auVar25 = vblendps_avx(auVar31,ZEXT816(0) << 0x20,8);
      auVar25 = vhaddps_avx(auVar25,auVar25);
      auVar25 = vhaddps_avx(auVar25,auVar25);
      auVar40 = ZEXT1664(auVar25);
    }
    lVar15 = FUN_144e9fbf0(plStack_e8[1],puStack_d8,0);
    if (((lVar15 != 0) && (0.0 < *(float *)(lVar5 + 0x1ec))) &&
       (*(int *)(lVar15 + 0xc) == *(int *)(plVar8[1] + 0x1ca060))) {
      cStack_e9 = '\0';
      uStack_c8 = *(undefined8 *)*param_3;
      uStack_c0 = *(undefined8 *)(*param_3 + 8);
      iVar10 = FUN_1450542b0(lVar18,puVar9,&uStack_c8,*(float *)(lVar5 + 0x1ec),&cStack_e9);
      if (iVar10 != -1) {
        return auVar39._0_8_;
      }
      if (((*(byte *)(lVar5 + 0x1d6) & 0x40) != 0) && (cStack_e9 != '\x01')) {
        return auVar39._0_8_;
      }
    }
    uVar21 = auVar40._0_8_;
    auVar25 = *param_3;
    uVar2 = *puVar9;
    uVar3 = *(undefined4 *)(*(longlong *)(lVar18 + 0xe0) + 0x18);
    iVar10 = (int)((ulonglong)
                   ((longlong)puVar9 -
                   *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar18 + 0x98) + 0x10) +
                    (ulonglong)*(byte *)(puVar9 + 9) * 0x10)) >> 2) * -0x45d1745d +
             *(int *)(*(longlong *)(*(longlong *)(lVar18 + 0x98) + 0x18) +
                     (ulonglong)*(byte *)(puVar9 + 9) * 4);
    uVar14 = *(uint *)(lVar5 + 0x204);
    uVar19 = (ulonglong)uVar14;
    fVar43 = auVar40._0_4_;
    if (uVar19 == 0) {
      *(undefined4 *)(lVar5 + 0x200) = *(undefined4 *)(lVar5 + 0xd0);
      auVar25 = vblendps_avx(auVar25,*(undefined1 (*) [16])(lVar5 + 0x220),8);
      *(undefined1 (*) [16])(lVar5 + 0x220) = auVar25;
      *(float *)(lVar5 + 0x22c) = fVar43;
      func_0x000145053a00(lVar5 + 0x240,puVar9);
      *(undefined4 *)(lVar5 + 0x210) = uVar2;
      *(int *)(lVar5 + 0x214) = iVar10;
      *(undefined4 *)(lVar5 + 0x218) = uVar3;
      puVar13 = (undefined8 *)func_0x000144ea0c70(puVar9[9]);
      uVar21 = auVar40._0_8_;
      uVar7 = puVar13[1];
      *(undefined8 *)(lVar5 + 0x230) = *puVar13;
      *(undefined8 *)(lVar5 + 0x238) = uVar7;
      *(int *)(lVar5 + 0x204) = *(int *)(lVar5 + 0x204) + 1;
    }
    else {
      uVar16 = *(uint *)(lVar5 + 0x1f8);
      lVar18 = (longlong)(int)uVar14;
      if ((uVar14 != uVar16) || (fVar43 < *(float *)(lVar18 * 0x40 + 0x1ec + lVar5))) {
        if ((int)uVar14 < 1) {
          uVar14 = 0;
        }
        else {
          puVar17 = (undefined4 *)(lVar5 + 0x210);
          uVar20 = 0;
          do {
            if (fVar43 < (float)puVar17[7]) {
              uVar21 = (longlong)(int)uVar16 - 1;
              uVar16 = (uint)uVar21;
              if ((int)uVar14 < (int)(uint)uVar21) {
                uVar16 = uVar14;
              }
              if ((int)uVar20 < (int)uVar16) {
                if ((longlong)uVar19 < (longlong)uVar21) {
                  uVar21 = uVar19;
                }
                puVar13 = (undefined8 *)(uVar21 * 0x40 + 0x210 + lVar5);
                do {
                  uVar21 = uVar21 - 1;
                  puVar13[4] = puVar13[-4];
                  puVar13[5] = puVar13[-3];
                  puVar13[6] = puVar13[-2];
                  puVar13[7] = puVar13[-1];
                  *puVar13 = puVar13[-8];
                  puVar13[1] = puVar13[-7];
                  puVar13[2] = puVar13[-6];
                  puVar13[3] = puVar13[-5];
                  puVar13 = puVar13 + -8;
                } while ((longlong)(int)uVar20 < (longlong)uVar21);
              }
              auVar25 = vblendps_avx(auVar25,*(undefined1 (*) [16])(puVar17 + 4),8);
              *(undefined1 (*) [16])(puVar17 + 4) = auVar25;
              puVar17[7] = fVar43;
              auVar40 = ZEXT1664(auVar40._0_16_);
              func_0x000145053a00(puVar17 + 0xc,puVar9);
              *puVar17 = uVar2;
              puVar17[1] = iVar10;
              puVar17[2] = uVar3;
              puVar13 = (undefined8 *)func_0x000144ea0c70(puVar9[9]);
              uVar7 = puVar13[1];
              *(undefined8 *)(puVar17 + 8) = *puVar13;
              *(undefined8 *)(puVar17 + 10) = uVar7;
              iVar10 = *(int *)(lVar5 + 0x204) + 1;
              if (*(int *)(lVar5 + 0x1f8) <= iVar10) {
                iVar10 = *(int *)(lVar5 + 0x1f8);
              }
              *(int *)(lVar5 + 0x204) = iVar10;
              return auVar40._0_8_;
            }
            uVar20 = uVar20 + 1;
            puVar17 = puVar17 + 0x10;
          } while (uVar19 != uVar20);
        }
        if ((int)uVar14 < (int)uVar16) {
          lVar18 = lVar5 + 0x240 + lVar18 * 0x40;
          auVar25 = vblendps_avx(auVar25,*(undefined1 (*) [16])(lVar18 + -0x20),8);
          *(undefined1 (*) [16])(lVar18 + -0x20) = auVar25;
          *(float *)(lVar18 + -0x14) = fVar43;
          func_0x000145053a00(lVar18,puVar9);
          iVar4 = *(int *)(lVar5 + 0x204);
          lVar18 = (longlong)iVar4 * 0x40;
          *(undefined4 *)(lVar5 + 0x210 + lVar18) = uVar2;
          *(int *)(lVar5 + 0x214 + lVar18) = iVar10;
          *(undefined4 *)(lVar5 + 0x218 + lVar18) = uVar3;
          puVar12 = (undefined8 *)func_0x000144ea0c70(puVar9[9]);
          uVar21 = auVar40._0_8_;
          uVar7 = puVar12[1];
          puVar13 = (undefined8 *)(lVar5 + 0x230 + lVar18);
          *puVar13 = *puVar12;
          puVar13[1] = uVar7;
          *(int *)(lVar5 + 0x204) = iVar4 + 1;
        }
      }
    }
  }
  return uVar21;
}

