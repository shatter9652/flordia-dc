// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140049ac0  size: 3033 bytes
// Name:    FUN_140049ac0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1454cb650, FUN_14004ad60, FUN_145883d30, FUN_144e68650, FUN_14004a750, FUN_14004b610, FUN_144554170, FUN_1427082a0, FUN_14004a7e0, FUN_1450362e0, FUN_14529f910, FUN_14004aaf0, FUN_14004af20, FUN_14004a9e0, FUN_144ec2da0, FUN_14004b3f0, FUN_14004b430, FUN_14004a6e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140049ac0(longlong param_1,float param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  byte bVar21;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  byte bVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  undefined1 auVar37 [16];
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 auVar41 [64];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  undefined1 auVar49 [16];
  float fVar50;
  undefined1 auVar51 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined8 uStack_1c0;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_88 [16];
  byte bVar22;
  undefined1 extraout_var_04 [56];
  
  auStack_88 = in_ZMM12._0_16_;
  uVar24 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  uVar16 = *(undefined4 *)(uVar24 + 0x9c);
  lVar9 = func_0x000144fe37f0(uVar16);
  if (*(int *)(lVar9 + 0x30) == 0) {
    lVar17 = 0;
LAB_14004a337:
    lVar23 = 0;
  }
  else {
    uVar13 = *(int *)(lVar9 + 0x30) - 1;
    lVar17 = 0;
    uVar20 = *(uint *)(_DAT_146c3e830 + 0x68);
    uVar14 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    uVar14 = uVar14 >> 0x10 ^ uVar14;
    lVar10 = *(longlong *)(lVar9 + 0x38);
    uVar19 = uVar14 >> 7;
    bVar22 = (byte)uVar14;
    bVar21 = bVar22 & 0x7f;
    auVar40._0_8_ =
         CONCAT17(bVar22,CONCAT16(bVar22,CONCAT15(bVar22,CONCAT14(bVar22,CONCAT13(bVar22,CONCAT12(
                                                  bVar22,CONCAT11(bVar22,bVar22))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar40[8] = bVar21;
    auVar40[9] = bVar21;
    auVar40[10] = bVar21;
    auVar40[0xb] = bVar21;
    auVar40[0xc] = bVar21;
    auVar40[0xd] = bVar21;
    auVar40[0xe] = bVar21;
    auVar40[0xf] = bVar21;
    while( true ) {
      uVar19 = uVar19 & uVar13;
      auVar37 = *(undefined1 (*) [16])(lVar10 + (ulonglong)uVar19 * 0x90);
      auVar49 = vpcmpeqb_avx(auVar37,auVar40);
      uVar2 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar49[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar2;
      if (uVar2 != 0) {
        do {
          uVar3 = 0;
          for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          if (*(uint *)((ulonglong)uVar19 * 0x90 + lVar10 + 0x10 + (ulonglong)uVar3 * 8) == uVar20)
          {
            uVar20 = uVar19 << 4 | uVar3;
            if (uVar20 == 0xffffffff) {
              lVar17 = 0;
            }
            else {
              lVar17 = *(longlong *)
                        (*(longlong *)(lVar9 + 0x28) +
                        (ulonglong)
                        *(uint *)((ulonglong)(uVar20 >> 4) * 0x90 + lVar10 + 0x14 +
                                 (ulonglong)(uVar3 & 0xf) * 8) * 8);
            }
            goto LAB_140049c26;
          }
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
      auVar37 = vpsignb_avx(auVar37,auVar37);
      if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) != 0 || (SUB161(auVar37 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar37 >> 0x17,0) & 1) != 0) || (SUB161(auVar37 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar37 >> 0x27,0) & 1) != 0) || (SUB161(auVar37 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar37 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar37 >> 0x3f,0) & 1) != 0) || (SUB161(auVar37 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar37 >> 0x4f,0) & 1) != 0) || (SUB161(auVar37 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar37 >> 0x5f,0) & 1) != 0) || (SUB161(auVar37 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar37 >> 0x6f,0) & 1) != 0) || (SUB161(auVar37 >> 0x77,0) & 1) != 0) ||
          auVar37[0xf] < '\0') break;
      uVar19 = uVar19 + 1;
    }
LAB_140049c26:
    lVar23 = 0;
    uVar20 = *(uint *)(_DAT_146d7a268 + 0x68);
    uVar14 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    uVar14 = uVar14 >> 0x10 ^ uVar14;
    uVar19 = uVar14 >> 7;
    bVar22 = (byte)uVar14;
    bVar21 = bVar22 & 0x7f;
    auVar37._0_8_ =
         CONCAT17(bVar22,CONCAT16(bVar22,CONCAT15(bVar22,CONCAT14(bVar22,CONCAT13(bVar22,CONCAT12(
                                                  bVar22,CONCAT11(bVar22,bVar22))))))) &
         0x7f7f7f7f7f7f7f7f;
    auVar37[8] = bVar21;
    auVar37[9] = bVar21;
    auVar37[10] = bVar21;
    auVar37[0xb] = bVar21;
    auVar37[0xc] = bVar21;
    auVar37[0xd] = bVar21;
    auVar37[0xe] = bVar21;
    auVar37[0xf] = bVar21;
    while( true ) {
      uVar19 = uVar19 & uVar13;
      auVar40 = *(undefined1 (*) [16])(lVar10 + (ulonglong)uVar19 * 0x90);
      auVar49 = vpcmpeqb_avx(auVar40,auVar37);
      uVar2 = (ushort)(SUB161(auVar49 >> 7,0) & 1) | (ushort)(SUB161(auVar49 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar49 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar49 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar49 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar49 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar49 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar49 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar49 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar49 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar49 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar49 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar49 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar49 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar49 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar49[0xf] >> 7) << 0xf;
      uVar14 = (uint)uVar2;
      if (uVar2 != 0) {
        do {
          uVar3 = 0;
          for (uVar4 = uVar14; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
            uVar3 = uVar3 + 1;
          }
          if (*(uint *)((ulonglong)uVar19 * 0x90 + lVar10 + 0x10 + (ulonglong)uVar3 * 8) == uVar20)
          {
            uVar20 = uVar19 << 4 | uVar3;
            if (uVar20 == 0xffffffff) goto LAB_14004a337;
            lVar23 = *(longlong *)
                      (*(longlong *)(lVar9 + 0x28) +
                      (ulonglong)
                      *(uint *)(lVar10 + (ulonglong)(uVar20 >> 4) * 0x90 + 0x14 +
                               (ulonglong)(uVar3 & 0xf) * 8) * 8);
            goto LAB_140049cf1;
          }
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
      }
      auVar40 = vpsignb_avx(auVar40,auVar40);
      if ((((((((((((((((SUB161(auVar40 >> 7,0) & 1) != 0 || (SUB161(auVar40 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar40 >> 0x17,0) & 1) != 0) || (SUB161(auVar40 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar40 >> 0x27,0) & 1) != 0) || (SUB161(auVar40 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar40 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar40 >> 0x3f,0) & 1) != 0) || (SUB161(auVar40 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar40 >> 0x5f,0) & 1) != 0) || (SUB161(auVar40 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || (SUB161(auVar40 >> 0x77,0) & 1) != 0) ||
          auVar40[0xf] < '\0') break;
      uVar19 = uVar19 + 1;
    }
  }
LAB_140049cf1:
  lVar9 = func_0x000144ec2d10(uVar16);
  if (((lVar9 != 0) && (lVar10 = func_0x000144db7a10(uVar16), lVar10 != 0)) &&
     (lVar11 = func_0x000144eb3780(uVar16), lVar11 != 0)) {
    lVar11 = func_0x000144eb37f0(lVar11 + 0x40);
    if (lVar11 == 0) {
      uStack_1c0 = 0;
    }
    else {
      uStack_1c0 = func_0x000144da6540(*(undefined4 *)(lVar11 + 0x9c));
    }
    *(undefined2 *)(param_1 + 0xac) = 0;
    fVar27 = (float)func_0x000144e686d0(*(undefined4 *)(lVar9 + 0x9c),*(undefined8 *)(lVar9 + 0xa0),
                                        2);
    if (0.0 < fVar27) {
      func_0x000143d31740(param_1);
    }
    else if (lVar23 != 0) {
      fVar28 = *(float *)(param_1 + 0xa8);
      if (*(float *)(param_1 + 0xa4) < fVar28) {
        fVar33 = *(float *)(lVar23 + 0x60);
        if ((fVar33 != 0.0) || (NAN(fVar33))) {
          auVar40 = ZEXT416((uint)(((float)((uint)fVar28 & _DAT_145fc6f4c) * param_2) / fVar33 +
                                  *(float *)(param_1 + 0xa4)));
          auVar37 = vminss_avx(ZEXT416((uint)fVar28),auVar40);
          auVar40 = vcmpss_avx(auVar40,(undefined1  [16])0x0,1);
          fVar33 = (float)(~auVar40._0_4_ & auVar37._0_4_);
          *(float *)(param_1 + 0xa4) = fVar33;
          if (fVar28 <= fVar33) {
            FUN_144554170(uVar24);
          }
          *(undefined1 *)(param_1 + 0xad) = 1;
        }
      }
    }
    *(undefined2 *)(param_1 + 0xb8) = 0;
    fVar28 = (float)func_0x000144e686d0(*(undefined4 *)(lVar9 + 0x9c),*(undefined8 *)(lVar9 + 0xa0),
                                        3);
    if (0.0 < fVar28) {
      func_0x000143d31770(param_1,fVar28 * param_2);
    }
    else if (((lVar23 != 0) && (*(float *)(param_1 + 0xb0) < *(float *)(param_1 + 0xb4))) &&
            ((fVar33 = *(float *)(*(longlong *)(param_1 + 0xf0) + 0x30), fVar33 == 0.0 &&
             (!NAN(fVar33))))) {
      FUN_144ec2da0(lVar9,&uStack_1a8,0x281e61a500000000);
      auVar45._0_8_ = func_0x000144ec2d90(uStack_1a8,uStack_1a4);
      auVar45._8_56_ = extraout_var_01;
      auVar45 = ZEXT1664(auVar45._0_16_);
      FUN_144ec2da0(lVar9,&uStack_1b0,0xe83633c00000000);
      auVar53._0_8_ = func_0x000144ec2d90(uStack_1b0,uStack_1ac);
      auVar53._8_56_ = extraout_var_02;
      auVar40 = vmaxss_avx(auVar53._0_16_,auVar45._0_16_);
      auVar45 = ZEXT1664(auVar40);
      lVar11 = func_0x00014515d910(*(undefined4 *)
                                    ((*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0) + 0x9c));
      fVar33 = auVar45._0_4_;
      if (lVar11 != 0) {
        iVar8 = *(int *)(lVar11 + 0x94);
        auVar49._0_12_ = ZEXT812(0);
        auVar53 = ZEXT1264(auVar49._0_12_);
        auVar49._12_4_ = 0;
        fVar29 = 0.0;
        auVar51 = ZEXT1264(ZEXT812(0));
        if (0 < iVar8) {
          auVar47 = ZEXT1264(ZEXT812(0));
          lVar18 = 0;
          fVar32 = _DAT_145fc6ed8;
          do {
            lVar12 = FUN_1454cb650(*(undefined8 *)(*(longlong *)(lVar11 + 0x98) + lVar18 * 8));
            auVar51 = ZEXT464((uint)(auVar51._0_4_ + *(float *)(lVar12 + 0x14)));
            lVar12 = FUN_1454cb650(*(undefined8 *)(*(longlong *)(lVar11 + 0x98) + lVar18 * 8));
            auVar49 = auVar53._0_16_;
            fVar33 = auVar45._0_4_;
            auVar40 = vcmpss_avx(auVar47._0_16_,ZEXT416(*(uint *)(lVar12 + 0x10)),4);
            iVar8 = *(int *)(lVar11 + 0x94);
            lVar18 = lVar18 + 1;
            fVar29 = fVar29 + (float)((uint)fVar32 & auVar40._0_4_);
          } while (lVar18 < iVar8);
        }
        fVar32 = _DAT_145fc6ed8 / (float)iVar8;
        auVar47._4_60_ = auVar51._4_60_;
        auVar47._0_4_ = -(fVar32 * auVar51._0_4_) - auVar49._0_4_;
        auVar37 = ZEXT416((uint)(auVar51._0_4_ * fVar32));
        auVar40 = vcmpss_avx(auVar37,auVar49,1);
        auVar40 = vblendvps_avx(auVar37,auVar47._0_16_,auVar40);
        auVar40 = vcmpss_avx(auVar40,ZEXT416(_DAT_145fc7020),1);
        fVar33 = (float)(~auVar40._0_4_ & (uint)fVar33) * fVar29 * fVar32;
      }
      fVar29 = *(float *)(param_1 + 0xb4);
      auVar44._0_12_ = ZEXT812(0);
      auVar44._12_4_ = 0;
      fVar32 = (float)((uint)fVar29 & _DAT_145fc6f4c) * param_2;
      auVar40 = vcmpss_avx(auVar44,ZEXT416((uint)*(float *)(lVar23 + 0x84)),1);
      auVar37 = vcmpss_avx(auVar44,ZEXT416((uint)*(float *)(lVar23 + 0x88)),1);
      auVar40 = ZEXT416((uint)((float)(auVar37._0_4_ &
                                      (uint)((fVar33 * fVar32) / *(float *)(lVar23 + 0x88))) +
                              (float)(auVar40._0_4_ & (uint)(fVar32 / *(float *)(lVar23 + 0x84))) +
                              *(float *)(param_1 + 0xb0)));
      auVar37 = vminss_avx(ZEXT416((uint)fVar29),auVar40);
      auVar40 = vcmpss_avx(auVar40,auVar44,1);
      fVar33 = (float)(~auVar40._0_4_ & auVar37._0_4_);
      *(float *)(param_1 + 0xb0) = fVar33;
      if (fVar29 <= fVar33) {
        FUN_144554170(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
      }
      *(undefined1 *)(param_1 + 0xb9) = 1;
    }
    auVar45 = ZEXT464(*(uint *)(lVar9 + 0x78));
    fVar29 = (float)func_0x00014515d890(*(undefined4 *)(lVar10 + 0x460),
                                        *(undefined4 *)(lVar10 + 0x464));
    fVar33 = 0.0;
    if ((fVar29 != 0.0) || (NAN(fVar29))) {
      fVar29 = (float)FUN_14004b610(lVar10);
      auVar45 = ZEXT464((uint)(fVar29 + auVar45._0_4_));
    }
    uVar20 = *(uint *)(param_1 + 0xc4);
    uVar16 = 0;
    if ((ulonglong)uVar20 == 0) {
      bVar25 = false;
      fVar29 = 0.0;
      auVar53 = ZEXT864(0);
    }
    else {
      lVar10 = *(longlong *)(param_1 + 200);
      auVar53 = ZEXT864(0);
      lVar11 = 0;
      fVar29 = 0.0;
      fVar33 = 0.0;
      bVar25 = false;
      do {
        auVar51 = ZEXT464(*(uint *)(lVar10 + lVar11));
        fVar32 = *(float *)(lVar10 + 4 + lVar11);
        fVar30 = (float)FUN_144e68650(*(uint *)(lVar10 + lVar11),fVar32);
        fVar31 = (float)func_0x000144e68690(auVar51._0_8_);
        cVar6 = func_0x000140005970(*(undefined1 *)(lVar10 + 0x11 + lVar11));
        auVar53 = ZEXT464((uint)(fVar32 + auVar53._0_4_));
        fVar29 = fVar30 + fVar29;
        fVar33 = fVar31 + fVar33;
        bVar25 = (bool)(bVar25 | (cVar6 != '\0' && 0.0 < fVar30));
        lVar11 = lVar11 + 0x14;
      } while ((ulonglong)uVar20 * 0x14 != lVar11);
    }
    fVar32 = (float)func_0x000144e686d0(*(undefined4 *)(lVar9 + 0x9c),*(undefined8 *)(lVar9 + 0xa0),
                                        1);
    uVar34 = FUN_14004aaf0(param_1);
    uVar35 = FUN_14004a9e0(*(undefined8 *)(param_1 + 8));
    uVar36 = FUN_14004ad60(param_1);
    fVar30 = (float)uVar36;
    fVar50 = (float)uVar35;
    fVar31 = (float)uVar34;
    puVar15 = *(undefined4 **)(param_1 + 200);
    if ((ulonglong)*(uint *)(param_1 + 0xc4) != 0) {
      fVar33 = fVar33 * fVar32 * param_2;
      puVar1 = puVar15 + (ulonglong)*(uint *)(param_1 + 0xc4) * 5;
      fVar32 = _DAT_145fc6ed8 / fVar29;
      do {
        fVar30 = (float)FUN_144e68650(*puVar15,puVar15[1]);
        FUN_14004a6e0(puVar15,fVar33 * fVar30 * fVar32);
        fVar30 = (float)uVar36;
        fVar50 = (float)uVar35;
        fVar31 = (float)uVar34;
        puVar15 = puVar15 + 5;
      } while (puVar15 != puVar1);
      uVar16 = *(undefined4 *)(param_1 + 0xc4);
      puVar15 = *(undefined4 **)(param_1 + 200);
    }
    fVar33 = (float)func_0x000144e68600(uVar16,puVar15);
    fVar32 = (float)FUN_14004a750(uVar16,puVar15);
    FUN_14004a7e0(param_1,param_2,uStack_1c0);
    auVar51 = ZEXT1264(ZEXT812(0));
    if ((fVar33 != 0.0) || (NAN(fVar33))) {
      auVar48._0_8_ =
           func_0x000144e68600(*(undefined4 *)(param_1 + 0xc4),*(undefined8 *)(param_1 + 200));
      auVar48._8_56_ = extraout_var;
      auVar40 = vcmpss_avx(auVar48._0_16_,auVar51._0_16_,0);
      bVar21 = auVar40[0] & 1;
    }
    else {
      bVar21 = 0;
    }
    auVar40 = auVar45._0_16_;
    if ((fVar32 != auVar51._0_4_) || (NAN(fVar32) || NAN(auVar51._0_4_))) {
      auVar51._0_8_ =
           func_0x000144e68600(*(undefined4 *)(param_1 + 0xc4),*(undefined8 *)(param_1 + 200));
      auVar40 = auVar45._0_16_;
      auVar51._8_56_ = extraout_var_03;
      auVar42._0_12_ = ZEXT812(0);
      auVar42._12_4_ = 0;
      auVar37 = vcmpss_avx(auVar51._0_16_,auVar42,0);
      bVar22 = auVar37[0] & 1;
    }
    else {
      bVar22 = 0;
    }
    if (lVar17 == 0) {
      auVar45 = ZEXT1264(ZEXT812(0));
    }
    else {
      auVar45 = ZEXT464(*(uint *)(lVar17 + 0x24));
    }
    if ((ulonglong)*(uint *)(param_1 + 0xec) != 0) {
      auVar38._0_12_ = ZEXT812(0);
      auVar38._12_4_ = 0;
      fVar33 = _DAT_146159fa4;
      if (fVar28 <= 0.0) {
        fVar33 = _DAT_145fc6ed8;
      }
      fVar32 = _DAT_146159fa4;
      if (fVar27 <= 0.0) {
        fVar32 = fVar33;
      }
      auVar52 = ZEXT464((uint)fVar32);
      lVar9 = *(longlong *)(param_1 + 0xf0);
      auVar47 = ZEXT464((uint)(fVar30 * fVar31));
      auVar48 = ZEXT464((uint)(fVar30 * fVar50));
      auVar40 = vmaxss_avx(auVar40,auVar38);
      auVar51 = ZEXT1664(auVar40);
      lVar17 = (ulonglong)*(uint *)(param_1 + 0xec) * 0x120;
      do {
        cVar6 = FUN_1450362e0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xa0));
        if (cVar6 != '\0') {
          FUN_14004b430(lVar9,auVar48._0_8_,auVar47._0_8_,param_2,uStack_1c0);
        }
        if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
          uVar7 = FUN_1450362e0(*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0xa0));
          FUN_14004af20(lVar9,auVar45._0_8_,*(undefined4 *)(param_1 + 0x98),param_2,uVar7);
        }
        else {
          func_0x000145b513e0(lVar9);
        }
        fVar33 = 0.0;
        if (0.0 < fVar27 && lVar23 != 0) {
          fVar33 = *(float *)(lVar23 + 0x68);
        }
        if (0.0 < fVar28 && lVar23 != 0) {
          fVar33 = fVar33 + *(float *)(lVar23 + 0x90);
        }
        *(int *)(lVar9 + 0xbc) = auVar51._0_4_;
        *(float *)(lVar9 + 0xc0) = fVar33;
        *(int *)(lVar9 + 0xd0) = auVar52._0_4_;
        lVar9 = lVar9 + 0x120;
        lVar17 = lVar17 + -0x120;
      } while (lVar17 != 0);
    }
    uVar20 = *(uint *)(param_1 + 0xc4);
    lVar9 = *(longlong *)(param_1 + 200);
    fVar28 = (float)func_0x000144e686a0(uVar20,lVar9);
    fVar27 = 0.0;
    if (0.0 < fVar28) {
      fVar28 = (float)func_0x00014004a6b0(uVar20,lVar9);
      if ((fVar28 == 0.0) && (!NAN(fVar28))) {
        FUN_145883d30(param_1,1);
        uVar20 = *(uint *)(param_1 + 0xc4);
        lVar9 = *(longlong *)(param_1 + 200);
      }
    }
    if (uVar20 != 0) {
      fVar27 = 0.0;
      lVar17 = 0;
      do {
        fVar27 = fVar27 + *(float *)(lVar9 + 4 + lVar17);
        lVar17 = lVar17 + 0x14;
      } while ((ulonglong)uVar20 * 0x14 != lVar17);
    }
    auVar39._0_4_ = (auVar53._0_4_ - fVar27) / param_2;
    auVar39._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar46._0_12_ = ZEXT812(0);
    auVar46._12_4_ = 0;
    auVar45 = ZEXT1664(auVar46);
    auVar40 = vmaxss_avx(auVar46,auVar39);
    *(int *)(param_1 + 0x98) = auVar40._0_4_;
    if (bVar25) {
      *(undefined4 *)(param_1 + 0x9c) = _DAT_14abbef40;
    }
    auVar52._0_8_ = func_0x000144e68600((ulonglong)uVar20,lVar9);
    auVar52._8_56_ = extraout_var_00;
    auVar51 = ZEXT1664(auVar52._0_16_);
    if ((fVar29 != auVar45._0_4_) || (NAN(fVar29) || NAN(auVar45._0_4_))) {
      auVar41._0_8_ = FUN_14004a750(uVar20,lVar9);
      auVar41._8_56_ = extraout_var_04;
      auVar43._0_12_ = ZEXT812(0);
      auVar43._12_4_ = 0;
      auVar40 = vcmpss_avx(auVar41._0_16_,auVar43,0);
      bVar26 = auVar40[0] & 1;
    }
    else {
      bVar26 = 0;
    }
    uVar24 = *(ulonglong *)(param_1 + 8);
    cVar6 = FUN_1450362e0(uVar24,*(undefined1 *)(param_1 + 0xa0));
    if (cVar6 != '\0') {
      auVar40 = vcmpps_avx(auVar53._0_16_,auVar45._0_16_,0);
      auVar37 = vcmpps_avx(auVar51._0_16_,auVar45._0_16_,4);
      auVar40 = auVar40 | auVar37;
      if (((auVar40[0] ^ 1) & 1) != 0 || bVar26 != 0) {
        if ((auVar40._0_4_ & 1) == 0) {
          FUN_145883d30(param_1,1);
          uVar24 = *(ulonglong *)(param_1 + 8);
        }
        plVar5 = _DAT_14ab7f658;
        FUN_1427082a0(&uStack_1a8,uVar24 & 0xfffffffffffffff0,
                      CONCAT31(auVar40._1_3_,auVar40[0] & bVar26),bVar21 | bVar22);
        (**(code **)(*plVar5 + 8))(plVar5,&uStack_1a8,0);
        FUN_14529f910(&uStack_1a8);
        uVar24 = *(ulonglong *)(param_1 + 8);
      }
    }
    uVar20 = (uint)*(byte *)((uVar24 & 0xfffffffffffffff0) + 0xfa);
    if (((6 < uVar20) || ((0x62U >> (uVar20 & 0x1f) & 1) == 0)) &&
       (uVar20 = *(uint *)(param_1 + 0xec), (ulonglong)uVar20 != 0)) {
      lVar9 = *(longlong *)(param_1 + 0xf0);
      lVar17 = 0;
      do {
        cVar6 = func_0x00014004a6a0(*(undefined4 *)(lVar9 + 0x34 + lVar17),
                                    *(undefined4 *)(lVar9 + 0x70 + lVar17));
        if (cVar6 != '\0') {
          FUN_14004b3f0(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0,0x12,_DAT_14abbef40);
        }
        lVar17 = lVar17 + 0x120;
      } while ((ulonglong)uVar20 * 0x120 != lVar17);
    }
  }
  return;
}

