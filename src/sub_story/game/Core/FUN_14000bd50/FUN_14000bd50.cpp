// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000bd50  size: 52 bytes
// Name:    FUN_14000bd50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402f6140, FUN_1451c04d0, FUN_1451c0ce0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000bd50(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  int *piVar14;
  longlong lVar15;
  int *piVar16;
  char cVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  float *pfVar20;
  longlong lVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  float *pfVar26;
  longlong lVar27;
  float *pfVar28;
  char *pcVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [64];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [64];
  undefined1 auVar48 [64];
  float fVar49;
  undefined1 auVar50 [64];
  float fVar51;
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  float fVar56;
  char cStack_130;
  float fStack_f8;
  float fStack_f4;
  ulonglong auStack_f0 [22];
  
  FUN_1402f6140(param_1,0);
  FUN_1451c04d0(param_1);
  FUN_1451c0ce0(param_1);
  if (((*(char *)(param_1 + 0x1615) != '\0') || (*(char *)(param_1 + 0x1614) == '\x01')) &&
     (*(int *)(param_1 + 0x15f0) != 0)) {
    *(undefined4 *)(param_1 + 0x1610) = _DAT_14abbef44;
    iVar3 = _DAT_14abbef40;
    if ((uint)(_DAT_14abbef40 - *(int *)(param_1 + 0x1cd4)) < 0x4e21) {
      bVar30 = false;
    }
    else {
      bVar30 = *(int *)(param_1 + 0x1cd0) != 0;
      *(uint *)(param_1 + 0x1cd0) = *(int *)(param_1 + 0x1cd4) * (uint)*(ushort *)(param_2 + 0xf8);
      *(int *)(param_1 + 0x1cd4) = iVar3;
    }
    uVar11 = FUN_144eb3750(*(undefined4 *)(param_2 + 0x9c));
    FUN_14082bfe0(uVar11,param_2,&fStack_f4,&fStack_f8);
    FUN_144e523e0(auStack_f0,*(undefined4 *)(param_1 + 0x1cd0));
    uVar18 = (auStack_f0[0] & 0xffffffff) * 0x5cdcfaa7 + (auStack_f0[0] >> 0x20);
    uVar2 = *(undefined4 *)(param_2 + 0x9c);
    fVar34 = fStack_f8;
    fVar43 = fStack_f4;
    auStack_f0[0] = uVar18;
    lVar12 = func_0x000144e24670(uVar2);
    uVar11 = func_0x000144fe37f0(uVar2);
    puVar13 = (undefined4 *)FUN_1451b1310(uVar11);
    piVar14 = (int *)FUN_1451b12d0(uVar11);
    if (*(char *)(param_1 + 0x1615) == '\x01') {
      uVar11 = FUN_144eb3750(uVar2);
      cStack_130 = FUN_1402f8b10(uVar11,uVar2);
    }
    else {
      cStack_130 = '\0';
    }
    iVar3 = *(int *)(param_1 + 0x1640);
    uVar7 = FUN_14515d8c0(param_2);
    lVar15 = func_0x000144da0df0(*(undefined4 *)(param_2 + 0x9c));
    if (lVar15 == 0) {
      bVar8 = 0;
    }
    else {
      bVar8 = (*(byte *)(lVar15 + 0x28) & 4) >> 2;
    }
    iVar24 = *(int *)(param_1 + 0x15f0);
    if (0 < iVar24) {
      auVar46 = ZEXT464(_DAT_145fc6f50);
      auVar55 = ZEXT464(_DAT_145fc6ed8);
      auVar53 = ZEXT464(_DAT_146159cc0);
      pcVar29 = (char *)(param_1 + 0xad);
      uVar25 = 0xffffffff;
      iVar23 = -1;
      fVar56 = 0.0;
      uVar19 = 0;
      bVar1 = *(byte *)(lVar12 + 0x12);
      fVar43 = (float)((uint)uVar18 & 0x7fffff) * (fVar34 - fVar43) * _DAT_14615af54 + fVar43;
      auVar44 = ZEXT1264(ZEXT812(0));
      fVar34 = _DAT_14615a2c4;
      fVar49 = _DAT_146159c58;
      fVar51 = _DAT_14615a2d0;
      do {
        *(uint *)(pcVar29 + -0x39) = *(uint *)(pcVar29 + -0x3d);
        if (iVar3 == 0) {
          pcVar29[-0x41] = -1;
          pcVar29[-0x40] = -1;
          pcVar29[-0x3f] = '\x7f';
          pcVar29[-0x3e] = '\x7f';
        }
        pcVar29[-0x35] = -1;
        pcVar29[-0x34] = -1;
        pcVar29[-0x33] = '\x7f';
        pcVar29[-0x32] = '\x7f';
        if (*(char *)(param_1 + 0x1614) == '\x01') {
          uVar18 = (ulonglong)*(uint *)(pcVar29 + -0x45) & 0xffff;
          if (((uVar18 == 0xffff) || (0x12bf < (uint)uVar18)) ||
             (plVar4 = *(longlong **)(_DAT_14a9e88c0 + 0xc30 + uVar18 * 8),
             plVar4 == (longlong *)0x0)) goto code_r0x0001402f5a69;
          uVar9 = *(uint *)(pcVar29 + -0x45) >> 0x10;
          if (((*(ushort *)(plVar4 + 1) <= uVar9) ||
              (*(ushort *)(plVar4 + 1) == 0 && (short)plVar4[9] == 0)) ||
             (lVar15 = *plVar4, lVar15 == 0)) goto code_r0x0001402f5a69;
          lVar21 = (ulonglong)uVar9 * 0x34;
          auVar39 = vpinsrw_avx(ZEXT416(*(uint *)(pcVar29 + -0x3d)),
                                (uint)*(ushort *)(lVar15 + 0x24 + lVar21),0);
          cVar17 = *pcVar29 << 4;
          if (cVar17 == -0x10) {
            cVar17 = *pcVar29;
          }
          fVar31 = (float)FUN_1451b7bf0(param_2,auVar39._0_8_,
                                        *(undefined1 *)(lVar15 + 0x2b + lVar21),cVar17 >> 4);
          uVar9 = *(uint *)(lVar15 + 0xc + lVar21);
          if ((uVar9 >> 0x11 & 1) == 0) {
            auVar39 = vmaxss_avx(ZEXT416((uint)(fVar31 * fVar43)),ZEXT416(*(uint *)(lVar12 + 0xe7c))
                                );
          }
          else {
            auVar39 = ZEXT416(_UNK_14616bb70);
          }
          if (bVar30) {
            iVar24 = *(int *)(param_1 + 0x15f4);
            if ((longlong)iVar24 < (longlong)uVar19) {
              fVar31 = *(float *)(param_1 + 0x78 + (longlong)iVar24 * 0xa0);
              auVar39 = ZEXT416((uint)(((auVar39._0_4_ - fVar31) * (float)((int)uVar19 - iVar24)) /
                                       (float)(*(int *)(param_1 + 0x15f0) - iVar24) + fVar31));
            }
          }
          if ((uVar9 & 0x80000010) != 0) {
            fVar56 = 0.0;
            uVar25 = uVar19 & 0xffffffff;
          }
          iVar24 = (int)uVar25;
          if (iVar24 == -1) {
code_r0x0001402f5da3:
            auVar45 = ZEXT1664(auVar39);
            uVar25 = 0xffffffff;
          }
          else if (((longlong)iVar24 < (longlong)uVar19) && (4 < *(byte *)(lVar15 + lVar21 + 0x2b)))
          {
            lVar15 = (longlong)iVar24 * 0xa0;
            auVar36 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x78 + lVar15)),
                                 ZEXT416(*(uint *)(param_1 + 0x7c + lVar15)));
            auVar45 = ZEXT1664(auVar36);
            if (auVar36._0_4_ <= auVar39._0_4_) goto code_r0x0001402f5da3;
            if ((longlong)(iVar24 + 1) < (longlong)uVar19) {
              fVar56 = fVar56 + *(float *)(pcVar29 + -0xad);
              fVar31 = fVar56 * _UNK_14615d78c + auVar36._0_4_;
              auVar45 = ZEXT1664(CONCAT124(auVar36._4_12_,fVar31));
              if (fVar31 <= auVar39._0_4_) goto code_r0x0001402f5da3;
            }
          }
          else {
            auVar45 = ZEXT1664(auVar39);
          }
          *(int *)(pcVar29 + -0x35) = auVar45._0_4_;
        }
        else {
code_r0x0001402f5a69:
          auVar45 = ZEXT1664(auVar46._0_16_);
        }
        auVar39 = auVar45._0_16_;
        pcVar29[-0x31] = -1;
        pcVar29[-0x30] = -1;
        pcVar29[-0x2f] = '\x7f';
        pcVar29[-0x2e] = '\x7f';
        if (*(char *)(param_1 + 0x1615) == '\x01') {
          piVar16 = piVar14;
          if (*(char *)(param_1 + 0x161d) == '\x01') {
            piVar16 = (int *)FUN_1402eccc0(*puVar13,*(undefined8 *)(puVar13 + 2),
                                           *(undefined4 *)(pcVar29 + -5));
          }
          auVar39 = auVar45._0_16_;
          if (piVar16 == (int *)0x0) goto code_r0x0001402f5b0d;
          uVar2 = CONCAT31((int3)((uint)iVar3 >> 8),uVar7);
          fVar32 = (float)FUN_14515d830(piVar16[7],piVar16[8],uVar2);
          auVar39 = auVar45._0_16_;
          iVar24 = *piVar16;
          fVar31 = *(float *)(pcVar29 + -0x19);
          bVar5 = *(float *)(param_1 + 0x1ccc) <= fVar31;
          iVar10 = iVar23;
          if (fVar32 <= fVar31 || bVar5 && iVar24 == 0x33cc3801) {
            auVar37 = auVar46._0_16_;
            if (cStack_130 != '\0') {
code_r0x0001402f5b5c:
              auVar36 = auVar37;
              if (*(float *)(pcVar29 + -0x15) < fVar49) {
                auVar41._4_4_ = _DAT_14615a2c4;
                auVar41._0_4_ = _DAT_14615a2c4;
                auVar41._8_4_ = _DAT_14615a2c4;
                auVar41._12_4_ = _DAT_14615a2c4;
                auVar36 = ZEXT416((uint)(*(float *)(pcVar29 + -0x15) * _UNK_14615f320 +
                                        _UNK_146164968));
                iVar10 = (int)uVar19;
                if ((longlong)uVar19 < (longlong)*(int *)(param_1 + 0x15f4) + -3) {
                  iVar10 = iVar23;
                }
                auVar40 = vminss_avx(auVar55._0_16_,auVar36);
                auVar40._4_12_ = auVar40._4_12_;
                auVar40._0_4_ = auVar40._0_4_ * _UNK_14615ba8c + fVar34;
                auVar36 = vcmpss_avx(auVar36,auVar44._0_16_,1);
                auVar41 = vblendvps_avx(auVar40,auVar41,auVar36);
                auVar36 = vminss_avx(auVar37,auVar41);
                if (auVar37._0_4_ <= auVar41._0_4_) {
                  iVar10 = iVar23;
                }
              }
code_r0x0001402f5bc3:
              if ((iVar10 == -1) || ((longlong)(iVar10 + 3) < (longlong)uVar19)) {
                iVar23 = -1;
              }
              else {
                iVar23 = iVar10;
                if ((fVar51 < auVar36._0_4_) && (*(float *)(pcVar29 + -0x11) < _UNK_14615b6a0)) {
                  auVar42._4_4_ = _DAT_14615a2d0;
                  auVar42._0_4_ = _DAT_14615a2d0;
                  auVar42._8_4_ = _DAT_14615a2d0;
                  auVar42._12_4_ = _DAT_14615a2d0;
                  auVar40 = ZEXT416((uint)(*(float *)(pcVar29 + -0x11) * _UNK_14616bb74 +
                                          _UNK_14616bb78));
                  auVar41 = vminss_avx(auVar55._0_16_,auVar40);
                  auVar6._4_12_ = auVar41._4_12_;
                  auVar6._0_4_ = auVar41._0_4_ * _DAT_146159ce0 + fVar51;
                  auVar41 = vcmpss_avx(auVar40,auVar44._0_16_,1);
                  auVar41 = vblendvps_avx(auVar6,auVar42,auVar41);
                  auVar36 = vminss_avx(auVar36,auVar41);
                }
              }
              auVar36 = vminss_avx(auVar37,auVar36);
              *(int *)(pcVar29 + -0x31) = auVar36._0_4_;
            }
            if ((*(byte *)(param_1 + 0x161c) & (fVar32 <= fVar31 || bVar5 && iVar24 == 0x33cc3801))
                == 0) goto code_r0x0001402f5c4b;
            auVar36 = ZEXT416(*(uint *)(pcVar29 + -0x41));
          }
          else {
            fVar33 = (float)FUN_1451b7a00(piVar16,fVar31,uVar2);
            auVar39 = auVar45._0_16_;
            fVar35 = auVar53._0_4_;
            if ((bVar8 & bVar1) == 0) {
              fVar35 = *(float *)(lVar12 + 0xcd8);
            }
            auVar36 = vminss_avx(auVar46._0_16_,ZEXT416((uint)(fVar35 * fVar33)));
            *(float *)(pcVar29 + -0x31) = auVar36._0_4_;
            if (cStack_130 != '\0') {
              auVar37 = auVar36;
              if (fVar34 < auVar36._0_4_) goto code_r0x0001402f5b5c;
              goto code_r0x0001402f5bc3;
            }
code_r0x0001402f5c4b:
            fVar31 = (float)FUN_14515d750(param_2,piVar16);
            auVar39 = ZEXT416(*(uint *)(pcVar29 + -0x35));
            auVar36 = vminss_avx(ZEXT416(*(uint *)(pcVar29 + -0x31)),
                                 ZEXT416((uint)(fVar34 + fVar31)));
          }
          *(int *)(pcVar29 + -0x31) = auVar36._0_4_;
        }
        else {
code_r0x0001402f5b0d:
          auVar36 = auVar46._0_16_;
        }
        auVar39 = vminss_avx(auVar39,auVar36);
        auVar36 = vminss_avx(ZEXT416(*(uint *)(pcVar29 + -0x41)),auVar39);
        *(int *)(pcVar29 + -0x41) = auVar36._0_4_;
        if ((*(float *)(pcVar29 + -0x3d) != auVar46._0_4_) ||
           (NAN(*(float *)(pcVar29 + -0x3d)) || NAN(auVar46._0_4_))) {
          auVar39 = vminss_avx(ZEXT416(*(uint *)(pcVar29 + -0x39)),auVar39);
          *(int *)(pcVar29 + -0x39) = auVar39._0_4_;
        }
        iVar24 = *(int *)(param_1 + 0x15f0);
        uVar19 = uVar19 + 1;
        pcVar29 = pcVar29 + 0xa0;
      } while ((longlong)uVar19 < (longlong)iVar24);
    }
    if (*(char *)(param_1 + 0x1617) == '\0') {
      if (iVar24 < 2) {
        return;
      }
      if (*(char *)(param_1 + 0x1615) == '\0') {
        return;
      }
      uVar18 = (ulonglong)(iVar24 - 2);
      fVar34 = *(float *)(param_1 + 0x6c + uVar18 * 0xa0);
    }
    else {
      *(undefined4 *)(param_1 + 0x6c + (longlong)(iVar24 + -1) * 0xa0) = 0;
      if (iVar24 < 2) {
        return;
      }
      if (*(char *)(param_1 + 0x1615) == '\0') {
        return;
      }
      uVar18 = (ulonglong)(iVar24 - 2);
      fVar34 = 0.0;
    }
    auVar44 = ZEXT464(_DAT_146159ae0);
    auVar46 = ZEXT464(_DAT_145fc6f50);
    fVar43 = 0.0;
    lVar15 = (ulonglong)(iVar24 - 1) * 0xa0;
    lVar21 = uVar18 * 0xa0 + param_1;
    pfVar28 = (float *)(param_1 + 0x6c + lVar15);
    pfVar20 = (float *)(param_1 + 0x78 + lVar15);
    pfVar26 = (float *)(param_1 + 0x7c + lVar15);
    pfVar22 = (float *)(param_1 + 0x74 + lVar15);
    *pfVar28 = fVar34;
    lVar15 = uVar18 + 1;
    do {
      fVar34 = *(float *)(lVar21 + 0x6c);
      auVar47 = ZEXT464((uint)*pfVar28);
      auVar53 = ZEXT464((uint)*pfVar22);
      auVar45 = ZEXT464((uint)*pfVar26);
      auVar55 = ZEXT464((uint)*pfVar20);
      auVar52 = ZEXT464(*(uint *)(lVar21 + 0x7c));
      auVar48 = ZEXT464(*(uint *)(lVar21 + 0x78));
      auVar39 = vminss_avx(ZEXT416(*(uint *)(lVar21 + 0x74)),auVar44._0_16_);
      piVar16 = piVar14;
      if (*(char *)(param_1 + 0x161d) == '\x01') {
        piVar16 = (int *)FUN_1402eccc0(*puVar13,*(undefined8 *)(puVar13 + 2),
                                       *(undefined4 *)(lVar21 + 0xa8));
      }
      fVar56 = *(float *)(lVar21 + 0xa0);
      uVar18 = CONCAT71((int7)((ulonglong)pfVar22 >> 8),uVar7);
      pfVar28 = (float *)(lVar21 + 0x6c);
      if (auVar47._0_4_ < fVar34) {
        auVar54 = ZEXT1664(auVar44._0_16_);
        auVar50 = ZEXT464(*(uint *)(lVar12 + 0xe74));
        auVar44._0_8_ =
             FUN_1451afd90(piVar16,auVar47._0_8_,fVar56 * *(float *)(lVar12 + 0xcd0),
                           uVar18 & 0xffffffff);
        auVar44._8_56_ = extraout_var;
        auVar36 = auVar46._0_16_;
        if (_DAT_14615b49c < auVar50._0_4_) {
          auVar36._0_4_ = SQRT((fVar56 + fVar56) * auVar50._0_4_ + auVar47._0_4_ * auVar47._0_4_);
          auVar36._4_12_ = auVar50._4_12_;
        }
        auVar36 = vminss_avx(auVar44._0_16_,auVar36);
        auVar36 = vminss_avx(auVar36,ZEXT416((uint)fVar34));
        auVar44 = ZEXT1664(auVar54._0_16_);
        auVar46 = ZEXT1664(auVar46._0_16_);
        fVar43 = 0.0;
        if (auVar36._0_4_ < *pfVar28) {
          *pfVar28 = auVar36._0_4_;
        }
      }
      pfVar26 = (float *)(lVar21 + 0x7c);
      if (auVar45._0_4_ < auVar52._0_4_) {
        auVar50 = ZEXT464(*(uint *)(lVar12 + 0xe74));
        auVar47._0_8_ =
             FUN_1451afd90(piVar16,auVar45._0_8_,fVar56 * *(float *)(lVar12 + 0xcd0),
                           uVar18 & 0xffffffff);
        auVar47._8_56_ = extraout_var_00;
        auVar37 = auVar46._0_16_;
        if (fVar43 < auVar50._0_4_) {
          auVar37._0_4_ = SQRT((fVar56 + fVar56) * auVar50._0_4_ + auVar45._0_4_ * auVar45._0_4_);
          auVar37._4_12_ = auVar50._4_12_;
        }
        auVar36 = vminss_avx(auVar47._0_16_,auVar37);
        auVar36 = vminss_avx(auVar36,auVar52._0_16_);
        if (auVar36._0_4_ < *pfVar26) {
          *pfVar26 = auVar36._0_4_;
        }
      }
      pfVar20 = (float *)(lVar21 + 0x78);
      if ((*(char *)(param_1 + 0x1614) == '\x01') && (auVar55._0_4_ < auVar48._0_4_)) {
        auVar47 = ZEXT464(*(uint *)(lVar12 + 0xe74));
        auVar45._0_8_ =
             FUN_1451afd90(piVar16,auVar55._0_8_,fVar56 * *(float *)(lVar12 + 0xcd0),
                           uVar18 & 0xffffffff);
        auVar45._8_56_ = extraout_var_01;
        auVar38 = auVar46._0_16_;
        if (fVar43 < auVar47._0_4_) {
          auVar38._0_4_ = SQRT((fVar56 + fVar56) * auVar47._0_4_ + auVar55._0_4_ * auVar55._0_4_);
          auVar38._4_12_ = auVar47._4_12_;
        }
        auVar36 = vminss_avx(auVar45._0_16_,auVar38);
        auVar36 = vminss_avx(auVar36,auVar48._0_16_);
        if (auVar36._0_4_ < *pfVar20) {
          *pfVar20 = auVar36._0_4_;
        }
      }
      auVar55 = ZEXT464((uint)auVar39._0_4_);
      pfVar22 = (float *)(lVar21 + 0x74);
      if (auVar53._0_4_ < auVar39._0_4_) {
        auVar45 = ZEXT464(*(uint *)(lVar12 + 0xe74));
        auVar48._0_8_ =
             FUN_1451afd90(piVar16,auVar53._0_8_,fVar56 * *(float *)(lVar12 + 0xcd0),uVar7);
        auVar48._8_56_ = extraout_var_02;
        auVar39 = auVar46._0_16_;
        if (fVar43 < auVar45._0_4_) {
          auVar39._0_4_ = SQRT((fVar56 + fVar56) * auVar45._0_4_ + auVar53._0_4_ * auVar53._0_4_);
          auVar39._4_12_ = auVar45._4_12_;
        }
        auVar39 = vminss_avx(auVar48._0_16_,auVar39);
        auVar39 = vminss_avx(auVar39,auVar55._0_16_);
        if ((iVar3 != 0) || (auVar39._0_4_ < fVar34)) {
          *pfVar22 = auVar39._0_4_;
        }
      }
      lVar21 = lVar21 + -0xa0;
      lVar27 = lVar15 + -1;
      bVar30 = 0 < lVar15;
      lVar15 = lVar27;
    } while (lVar27 != 0 && bVar30);
  }
  return;
}

