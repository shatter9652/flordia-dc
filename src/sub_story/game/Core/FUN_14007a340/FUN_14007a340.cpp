// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007a340  size: 1161 bytes
// Name:    FUN_14007a340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142b96fe0, FUN_1455b46e0, FUN_141644320, FUN_1455248a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14007a340(undefined1 (*param_1) [16],longlong param_2,int param_3,int *param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  undefined2 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  byte bVar13;
  undefined1 uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  undefined8 uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  longlong lVar26;
  byte bVar27;
  bool bVar28;
  bool bVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [16];
  undefined4 uVar46;
  undefined1 auVar47 [64];
  undefined1 *puVar48;
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [16];
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float fStack_4c;
  undefined8 uStack_48;
  float fStack_40;
  float afStack_3c [3];
  undefined1 auVar45 [64];
  
  fVar33 = _DAT_145fc6f08;
  uVar5 = *(undefined2 *)((longlong)param_4 + 0xc2);
  auVar31._2_2_ = uVar5;
  auVar31._0_2_ = uVar5;
  auVar31._4_2_ = uVar5;
  auVar31._6_2_ = uVar5;
  auVar31._8_2_ = uVar5;
  auVar31._10_2_ = uVar5;
  auVar31._12_2_ = uVar5;
  auVar31._14_2_ = uVar5;
  auVar31 = vpand_avx(auVar31,_DAT_1461661c0);
  auVar31 = vpcmpeqw_avx(auVar31,(undefined1  [16])0x0);
  auVar31 = vpmovsxwd_avx(auVar31);
  uVar15 = vmovmskps_avx(auVar31);
  uVar17 = 0;
  if ((uVar15 & 4) != 0) {
    uVar17 = (ulonglong)((uint)((uVar15 & 8) == 0) * 3);
  }
  uVar23 = 1;
  if ((uVar15 & 2) != 0) {
    uVar23 = uVar17;
  }
  uVar14 = 2;
  if ((uVar15 & 1) != 0) {
    uVar14 = (char)uVar23;
  }
  *(undefined1 *)((longlong)param_4 + 0xca) = uVar14;
  fVar12 = _DAT_145fc6ed8;
  auVar31 = vsubps_avx(*(undefined1 (*) [16])(param_4 + 4),*param_1);
  fVar8 = auVar31._0_4_;
  auVar40._0_4_ = fVar8 * fVar8;
  fVar9 = auVar31._4_4_;
  auVar40._4_4_ = fVar9 * fVar9;
  fVar7 = auVar31._8_4_;
  auVar40._8_4_ = fVar7 * fVar7;
  fVar10 = auVar31._12_4_;
  auVar40._12_4_ = fVar10 * fVar10;
  auVar31 = vblendps_avx(auVar40,(undefined1  [16])0x0,8);
  auVar31 = vhaddps_avx(auVar31,auVar31);
  auVar40 = vhaddps_avx(auVar31,auVar31);
  auVar31 = vrsqrtps_avx(auVar40);
  fVar34 = auVar31._0_4_;
  fVar38 = auVar31._4_4_;
  fVar39 = auVar31._8_4_;
  fVar11 = auVar31._12_4_;
  auVar41._4_4_ = _DAT_146159bfc;
  auVar41._0_4_ = _DAT_146159bfc;
  auVar41._8_4_ = _DAT_146159bfc;
  auVar41._12_4_ = _DAT_146159bfc;
  auVar31 = vcmpps_avx(auVar41,auVar40,2);
  auVar44._0_4_ =
       (float)(auVar31._0_4_ &
              (uint)(((fVar34 * fVar34 * auVar40._0_4_ * fVar33 - fVar33) * fVar34 + fVar34) *
                    auVar40._0_4_));
  auVar44._4_4_ =
       (float)(auVar31._4_4_ &
              (uint)(((fVar38 * fVar38 * auVar40._4_4_ * fVar33 - fVar33) * fVar38 + fVar38) *
                    auVar40._4_4_));
  auVar44._8_4_ =
       (float)(auVar31._8_4_ &
              (uint)(((fVar39 * fVar39 * auVar40._8_4_ * fVar33 - fVar33) * fVar39 + fVar39) *
                    auVar40._8_4_));
  auVar44._12_4_ =
       (float)(auVar31._12_4_ &
              (uint)(((fVar11 * fVar11 * auVar40._12_4_ * fVar33 - fVar33) * fVar11 + fVar11) *
                    auVar40._12_4_));
  auVar45 = ZEXT1664(auVar44);
  auVar31 = vrcpps_avx(auVar44);
  param_4[0x13] = (int)auVar44._0_4_;
  fVar33 = auVar31._0_4_;
  fVar34 = auVar31._4_4_;
  fVar38 = auVar31._8_4_;
  fVar39 = auVar31._12_4_;
  auStack_c8._0_4_ = (-((fVar33 * auVar44._0_4_ - fVar12) * fVar33) + fVar33) * fVar8;
  auStack_c8._4_4_ = (-((fVar34 * auVar44._4_4_ - fVar12) * fVar34) + fVar34) * fVar9;
  auStack_c8._8_4_ = (-((fVar38 * auVar44._8_4_ - fVar12) * fVar38) + fVar38) * fVar7;
  auStack_c8._12_4_ = (-((fVar39 * auVar44._12_4_ - fVar12) * fVar39) + fVar39) * fVar10;
  auVar47 = ZEXT1664(auStack_c8);
  *(undefined1 (*) [16])(param_4 + 0x14) = auStack_c8;
  auVar42 = ZEXT464(*(uint *)param_1[3]);
  uStack_b8 = *(undefined8 *)param_1[2];
  uStack_b0 = *(undefined8 *)(param_1[2] + 8);
  uStack_a8 = *(undefined8 *)param_1[0xc];
  uStack_a0 = *(undefined8 *)(param_1[0xc] + 8);
  auVar43 = ZEXT464(*(uint *)param_1[0xd]);
  uVar46 = *(undefined4 *)param_1[0xe];
  iVar16 = FUN_141644320(&uStack_a8,*(uint *)param_1[0xd],&uStack_b8,*(uint *)param_1[3],uVar46,
                         auStack_c8,auVar44._0_4_,0,param_4 + 0x32);
  param_4[0x18] = iVar16;
  uVar21 = CONCAT71((int7)(uVar17 >> 8),param_1[0xd][8]);
  iVar16 = FUN_142b96fe0(*(undefined4 *)(param_1[3] + 4),uVar21,param_2,param_4,iVar16);
  param_4[0x19] = iVar16;
  puVar48 = auStack_f8;
  uStack_e8 = *(undefined8 *)param_1[2];
  uStack_e0 = *(undefined8 *)(param_1[2] + 8);
  uStack_d8 = *(undefined8 *)param_1[0xc];
  uStack_d0 = *(undefined8 *)(param_1[0xc] + 8);
  auStack_f8 = auVar47._0_16_;
  uVar17 = FUN_141644320(&uStack_d8,auVar43._0_8_,&uStack_e8,auVar42._0_8_,uVar46,puVar48,
                         auVar45._0_4_,1,param_4 + 0x32);
  uVar46 = (undefined4)((ulonglong)puVar48 >> 0x20);
  bVar18 = (byte)(uVar17 >> 0x27) & 2;
  bVar27 = (byte)(uVar17 >> 0x2e) & 4;
  uVar23 = CONCAT71((int7)((ulonglong)uVar21 >> 8),*(undefined1 *)((longlong)param_4 + 0xcb)) &
           0xfffffffffffffff9;
  bVar20 = (byte)uVar23;
  *(byte *)((longlong)param_4 + 0xcb) = bVar27 | bVar20 | bVar18;
  iVar30 = FUN_142b96fe0(*(undefined4 *)(param_1[3] + 4),
                         CONCAT71((int7)(uVar23 >> 8),param_1[0xd][8]),param_2,param_4,(int)uVar17);
  param_4[0x1a] = iVar30;
  if (param_3 == 1) {
    uVar15 = param_4[0x12];
    if ((((ulonglong)uVar15 & 0x1ffff) == 0x1ffff) ||
       (plVar6 = *(longlong **)((ulonglong)(uVar15 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar6 == (longlong *)0x0)) goto LAB_14007a651;
    uVar22 = *(uint *)(plVar6[5] + ((ulonglong)uVar15 & 0x1ffff) * 4);
    if ((uVar22 >> 0x11 & 0x3ff) != uVar15 >> 0x16) goto LAB_14007a651;
    if (((((uVar22 & *(uint *)(plVar6 + 6)) != *(uint *)(plVar6 + 6)) || (*plVar6 == 0)) ||
        ((char)param_4[0x1e] != '\0')) ||
       (((_DAT_149251cd0 & 0xfffffffe) == 2 || ((param_1[0xd][8] & 1) != 0)))) goto LAB_14007a651;
    auVar35._4_4_ = _DAT_149251cc8;
    auVar35._0_4_ = _DAT_149251cc8;
    auVar35._8_4_ = _DAT_149251cc8;
    auVar35._12_4_ = _DAT_149251cc8;
    uVar14 = *(undefined1 *)(param_2 + 10);
    pauVar25 = &auStack_118;
    pauVar24 = &auStack_108;
    auVar31 = vsubps_avx(*(undefined1 (*) [16])(param_4 + 0x28),auVar35);
    auVar36._0_4_ = _DAT_149251cc8 + (float)param_4[0x2c];
    auVar36._4_4_ = _DAT_149251cc8 + (float)param_4[0x2d];
    auVar36._8_4_ = _DAT_149251cc8 + (float)param_4[0x2e];
    auVar36._12_4_ = _DAT_149251cc8 + (float)param_4[0x2f];
  }
  else {
LAB_14007a651:
    auVar36 = *(undefined1 (*) [16])(param_4 + 0x2c);
    auVar31 = *(undefined1 (*) [16])(param_4 + 0x28);
    uVar14 = *(undefined1 *)(param_2 + 10);
    pauVar25 = &auStack_138;
    pauVar24 = &auStack_128;
  }
  *pauVar25 = auVar36;
  *pauVar24 = auVar31;
  iVar30 = FUN_1455b46e0(param_1,uVar14,pauVar24,pauVar25,auVar45._0_4_);
  param_4[0x1b] = iVar30;
  iVar30 = FUN_142b96fe0(*(undefined4 *)(param_1[3] + 4),param_1[0xd][8],param_2,param_4,iVar30);
  param_4[0x1b] = iVar30;
  bVar29 = (uVar17 & 0x10100000000) != 0;
  FUN_1455248a0(&uStack_140,param_1,*(undefined1 *)(param_2 + 0xf),param_4,auVar45._0_4_,
                CONCAT44(uVar46,iVar16),uVar17 >> 0x38 != 0 && bVar29);
  *(undefined8 *)(param_4 + 0x1c) = uStack_140;
  bVar19 = 0;
  if (param_1[0xd][10] != '\0') {
    bVar19 = bVar29 << 7;
  }
  *(byte *)((longlong)param_4 + 0xcb) = bVar27 | bVar20 & 0x7f | bVar18 | bVar19;
  if (((*(char *)(param_2 + 8) == '\0') && (*(char *)(param_2 + 9) == '\0')) &&
     (*(char *)(param_2 + 0xc) != '\x01')) {
    return;
  }
  uVar17 = (ulonglong)*(byte *)(param_2 + 0xf);
  lVar26 = uVar17 * 0x14;
  fVar33 = *(float *)(lVar26 + 0x149251b80);
  fVar8 = *(float *)(lVar26 + 0x149251b84);
  fVar34 = *(float *)(lVar26 + 0x149251b88);
  fVar9 = *(float *)(lVar26 + 0x149251b8c);
  if (*(char *)(param_2 + 8) == '\x01') {
    lVar26 = uVar17 * 0x14;
    fVar38 = (float)param_4[0x19];
    uStack_48 = (ulonglong)(uint)(fVar33 * *(float *)(lVar26 + 0x149251bd0)) << 0x20;
    _fStack_40 = CONCAT44(fVar34 * *(float *)(lVar26 + 0x149251bd8),
                          fVar8 * *(float *)(lVar26 + 0x149251bd4));
    afStack_3c[1] = fVar9 * *(float *)(lVar26 + 0x149251bdc);
    afStack_3c[2] = 3.4028235e+38;
    bVar18 = *(byte *)(param_4 + 0x1e);
    uVar23 = 5;
    do {
      uVar1 = uVar23 - 1;
      if (uVar23 == 1) break;
      pfVar4 = &fStack_4c + uVar23;
      uVar23 = uVar1;
    } while (fVar38 <= *pfVar4);
    uVar23 = 4;
    if ((byte)uVar1 < 4) {
      uVar23 = uVar1 & 0xffffffff;
    }
    if (((_DAT_149251cd0 & 0xfffffffe) == 2) || ((param_1[0xd][8] & 1) != 0)) {
code_r0x000142b97300:
      bVar20 = (byte)uVar23;
    }
    else {
      iVar16 = (int)(uVar23 & 0xff);
      if (bVar18 + 1 == iVar16) {
        fVar7 = fRam0000000149251cc4 + *(float *)((longlong)&uStack_48 + (uVar23 & 0xff) * 4);
        bVar29 = fVar7 < fVar38;
      }
      else {
        if (bVar18 - 1 != iVar16) goto code_r0x000142b97300;
        fVar7 = *(float *)((longlong)&uStack_48 + (ulonglong)bVar18 * 4) - fRam0000000149251cc4;
        bVar29 = fVar38 < fVar7;
      }
      bVar20 = bVar18;
      if (bVar29 || fVar7 == fVar38) goto code_r0x000142b97300;
    }
    *(byte *)((longlong)param_4 + 0x79) = bVar18;
    *(byte *)((longlong)param_4 + 0x7a) = bVar20;
    *(byte *)(param_4 + 0x1e) = bVar20;
    *(byte *)((longlong)param_4 + 0x7b) = bVar20;
    fVar7 = *(float *)((longlong)&uStack_48 + (ulonglong)bVar20 * 4);
    auVar37._0_4_ =
         (fVar38 - fVar7) / (*(float *)((longlong)&uStack_48 + (ulonglong)bVar20 * 4 + 4) - fVar7);
    auVar37._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar40 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar37);
    auVar31 = vcmpss_avx(auVar37,ZEXT816(0),1);
    param_4[0x20] = ~auVar31._0_4_ & auVar40._0_4_;
  }
  if (*(char *)(param_2 + 9) == '\x01') {
    lVar26 = uVar17 * 0x14;
    uStack_48 = (ulonglong)(uint)(fVar33 * *(float *)(lVar26 + 0x149251c20)) << 0x20;
    _fStack_40 = CONCAT44(fVar34 * *(float *)(lVar26 + 0x149251c28),
                          fVar8 * *(float *)(lVar26 + 0x149251c24));
    afStack_3c[1] = fVar9 * *(float *)(lVar26 + 0x149251c2c);
    afStack_3c[2] = 3.4028235e+38;
    fVar33 = (float)param_4[0x1a];
    bVar18 = *(byte *)(param_4 + 0x21);
    uVar23 = 5;
    do {
      uVar1 = uVar23 - 1;
      if (uVar23 == 1) break;
      pfVar4 = &fStack_4c + uVar23;
      uVar23 = uVar1;
    } while (fVar33 <= *pfVar4);
    uVar23 = 4;
    if ((byte)uVar1 < 4) {
      uVar23 = uVar1 & 0xffffffff;
    }
    bVar29 = (_DAT_149251cd0 & 0xfffffffe) == 2;
    if (bVar29 || (param_1[0xd][8] & 1) != 0) {
code_r0x000142b97411:
      bVar20 = (byte)uVar23;
    }
    else {
      iVar16 = (int)(uVar23 & 0xff);
      if (bVar18 + 1 == iVar16) {
        fVar8 = fRam0000000149251cc4 + *(float *)((longlong)&uStack_48 + (uVar23 & 0xff) * 4);
        bVar28 = fVar8 < fVar33;
      }
      else {
        if (bVar18 - 1 != iVar16) goto code_r0x000142b97411;
        fVar8 = *(float *)((longlong)&uStack_48 + (ulonglong)bVar18 * 4) - fRam0000000149251cc4;
        bVar28 = fVar33 < fVar8;
      }
      bVar20 = bVar18;
      if (bVar28 || fVar8 == fVar33) goto code_r0x000142b97411;
    }
    bVar27 = *(byte *)((longlong)param_4 + 0x87);
    lVar26 = 5;
    do {
      lVar2 = lVar26 + -1;
      if (lVar26 == 1) break;
      pfVar4 = &fStack_4c + lVar26;
      lVar26 = lVar2;
    } while ((float)param_4[0x1c] <= *pfVar4);
    lVar26 = 5;
    do {
      lVar3 = lVar26 + -1;
      if (lVar26 == 1) break;
      pfVar4 = &fStack_4c + lVar26;
      lVar26 = lVar3;
    } while ((float)param_4[0x1d] <= *pfVar4);
    uVar15 = (uint)lVar3;
    if ((byte)lVar3 <= (byte)*(uint *)(param_1[8] + 8)) {
      uVar15 = *(uint *)(param_1[8] + 8);
    }
    uVar22 = (uint)lVar2;
    if ((byte)uVar15 <= (byte)lVar2) {
      uVar22 = uVar15;
    }
    uVar15 = 4;
    if ((byte)uVar22 < 4) {
      uVar15 = uVar22;
    }
    if (bVar29 || (param_1[0xd][8] & 1) != 0) {
code_r0x000142b974cb:
      bVar19 = (byte)uVar15;
    }
    else {
      auVar31 = vminss_avx(ZEXT416((uint)param_4[0x1c]),ZEXT416((uint)param_4[0x1d]));
      fVar33 = auVar31._0_4_;
      if (bVar27 + 1 == (uVar15 & 0xff)) {
        fVar8 = fRam0000000149251cc4 +
                *(float *)((longlong)&uStack_48 + (ulonglong)(byte)uVar15 * 4);
        bVar29 = fVar8 < fVar33;
      }
      else {
        if (bVar27 - 1 != (uVar15 & 0xff)) goto code_r0x000142b974cb;
        fVar8 = *(float *)((longlong)&uStack_48 + (ulonglong)bVar27 * 4) - fRam0000000149251cc4;
        bVar29 = fVar33 < fVar8;
      }
      bVar19 = bVar27;
      if (bVar29 || fVar8 == fVar33) goto code_r0x000142b974cb;
    }
    *(byte *)((longlong)param_4 + 0x85) = bVar18;
    *(byte *)((longlong)param_4 + 0x86) = bVar20;
    *(byte *)(param_4 + 0x21) = bVar20;
    *(byte *)(param_4 + 0x22) = bVar27;
    if ((*(byte *)(param_4 + 0x33) & 2) != 0) {
      bVar19 = 0;
    }
    *(byte *)((longlong)param_4 + 0x87) = bVar19;
  }
  bVar18 = *(byte *)(param_2 + 0xc);
  bVar20 = *(byte *)(param_4 + 0x1e);
  *(byte *)((longlong)param_4 + 0x89) = bVar20;
  param_4[0x23] = param_4[0x20];
  bVar27 = bVar20;
  if (((bVar18 & 1) == 0) || (bVar18 = *(byte *)((longlong)param_4 + 0xcb), (bVar18 & 0x40) == 0))
  goto code_r0x000142b977a3;
  afStack_3c[1] = 0.0;
  bVar19 = *(byte *)(param_4 + 0x33);
  if ((bVar19 & 6) == 0) {
    fVar33 = fRam0000000149251c74;
    if ((-1 < (char)bVar19) &&
       (fVar33 = fRam0000000149251c7c, (*(byte *)((longlong)param_4 + 0xcd) & 1) == 0)) {
      fVar33 = _DAT_145fc6ed8;
    }
  }
  else {
    fVar33 = *(float *)((ulonglong)(bVar19 >> 7) * 8 + 0x149251c70);
  }
  afStack_3c[2] =
       fVar33 * *(float *)(&UNK_146162580 + (ulonglong)(*param_4 == 1) * 4) * (float)param_4[0x25] *
                *(float *)(uVar17 * 0x14 + 0x149251b84) * *(float *)(uVar17 * 0x14 + 0x149251bd4) *
                _DAT_145fc6edc;
  if ((char)bVar18 < '\0') {
    fVar33 = (float)param_4[0x13] * _DAT_146159cc4;
  }
  else {
    fVar33 = (float)param_4[0x18];
  }
  uVar17 = 3;
  do {
    uVar23 = uVar17 - 1;
    if (uVar17 == 1) break;
    pfVar4 = afStack_3c + uVar17;
    uVar17 = uVar23;
  } while (fVar33 <= *pfVar4);
  uVar17 = 2;
  if ((byte)uVar23 < 2) {
    uVar17 = uVar23 & 0xffffffff;
  }
  bVar27 = (byte)uVar17;
  *(byte *)((longlong)param_4 + 0x89) = bVar27;
  auVar31 = ZEXT416((uint)((fVar33 - afStack_3c[(uVar17 & 0xff) + 1]) /
                          (afStack_3c[(uVar17 & 0xff) + 2] - afStack_3c[(uVar17 & 0xff) + 1])));
  auVar40 = vminss_avx(ZEXT416((uint)_DAT_145fc6ed8),auVar31);
  auVar31 = vcmpss_avx(auVar31,ZEXT816(0),1);
  fVar34 = (float)(~auVar31._0_4_ & auVar40._0_4_);
  param_4[0x23] = (int)fVar34;
  fVar8 = _DAT_14615ada8;
  if (*param_4 == 3) {
    uVar15 = param_4[0x12];
    uVar17 = (ulonglong)uVar15 & 0x1ffff;
    if ((((uVar17 == 0x1ffff) ||
         (plVar6 = *(longlong **)((ulonglong)(uVar15 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar6 == (longlong *)0x0)) ||
        (uVar22 = *(uint *)(plVar6[5] + uVar17 * 4), (uVar22 >> 0x11 & 0x3ff) != uVar15 >> 0x16)) ||
       (((uVar22 & *(uint *)(plVar6 + 6)) != *(uint *)(plVar6 + 6) || (*plVar6 == 0))))
    goto code_r0x000142b97782;
    fVar9 = (float)*(ushort *)(*plVar6 + 0x88 + (ulonglong)(uint)((int)uVar17 * (int)plVar6[1])) +
            _DAT_146159bd0;
    bVar13 = 2;
    if (fVar33 < fVar9) {
      if (1 < uVar23 && (bVar18 & 0x20) != 0) {
        bVar27 = 1;
        *(undefined1 *)((longlong)param_4 + 0x89) = 1;
        param_4[0x23] = 0x3f7d70a4;
        fVar34 = fVar8;
      }
      auVar32._0_4_ = (fVar33 + fVar33) / fVar9;
      auVar32._4_12_ = SUB6012((undefined1  [60])0x0,0);
      if (fVar34 + (float)(int)(char)bVar27 < auVar32._0_4_) {
        auVar31 = vroundss_avx(auVar32,auVar32,0xb);
        bVar27 = (byte)(int)auVar32._0_4_;
        *(byte *)((longlong)param_4 + 0x89) = bVar27;
        param_4[0x23] = (int)(auVar32._0_4_ - auVar31._0_4_);
      }
      goto code_r0x000142b97782;
    }
  }
  else {
code_r0x000142b97782:
    if (((bVar19 & 0x10) == 0) || (bVar13 = 1, bVar27 != 0)) goto code_r0x000142b977a3;
  }
  bVar27 = bVar13;
  *(byte *)((longlong)param_4 + 0x89) = bVar27;
  param_4[0x23] = 0;
code_r0x000142b977a3:
  if ((1 < bVar27) || (2 < bVar20 && *param_4 == 1)) {
    *(undefined1 *)((longlong)param_4 + 0x89) = 2;
    param_4[0x23] = 0;
  }
  return;
}

