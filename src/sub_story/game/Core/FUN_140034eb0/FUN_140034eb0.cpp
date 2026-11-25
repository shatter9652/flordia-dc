// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140034eb0  size: 3318 bytes
// Name:    FUN_140034eb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e38ea0, FUN_144fc76c0, FUN_144e38540, FUN_14007b220, FUN_145647140, FUN_144d9f670, FUN_144e38600, FUN_14007ac30, FUN_1443a9200, FUN_144e387c0, FUN_140035c00
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140034eb0(longlong *param_1)

{
  float *pfVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  float fVar19;
  undefined2 *puVar20;
  char cVar21;
  byte bVar22;
  ushort uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint uVar37;
  longlong lVar38;
  undefined1 *puVar39;
  int iVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 in_ZMM1 [64];
  float fVar43;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar48 [16];
  undefined1 auVar49 [64];
  undefined1 auVar50 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar51 [64];
  undefined1 auStack_1c0 [19];
  char cStack_1ad;
  int iStack_1ac;
  ulonglong uStack_1a8;
  float fStack_19c;
  uint uStack_198;
  uint uStack_194;
  undefined2 *puStack_190;
  ulonglong uStack_188;
  longlong lStack_180;
  ulonglong uStack_178;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  undefined1 *puStack_160;
  ulonglong uStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [32];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_d8 [16];
  undefined1 auStack_98 [16];
  
  auStack_98 = in_ZMM11._0_16_;
  auStack_d8 = in_ZMM7._0_16_;
  uVar30 = (ulonglong)*(ushort *)(param_1 + 0xf);
  lVar27 = FUN_145647140();
  puVar39 = (undefined1 *)((ulonglong)(auStack_1c0 + -lVar27) & 0xffffffffffffffe0);
  if ((int)uVar30 != 0) {
    uVar35 = 0;
    do {
      if (*(short *)((longlong)param_1 + uVar35 * 2 + 8) != -1) {
        uVar3 = *(undefined8 *)(_DAT_14a923120 + 0x28);
        *(undefined8 *)(puVar39 + -0x28) = 0x140034f65;
        FUN_144d9f670(uVar3);
        uVar30 = (ulonglong)*(ushort *)(param_1 + 0xf);
      }
      uVar35 = uVar35 + 1;
    } while (uVar35 < (uVar30 & 0xffff));
  }
  if ((int)param_1[0x18] == 0) {
    return 0;
  }
  uVar25 = *(uint *)((longlong)param_1 + 0x114);
  if ((int)param_1[0x18] == 2 || (uVar25 >> 0x18 & 1) != 0) {
    *(uint *)((longlong)param_1 + 0x114) = uVar25 | 0x1000000;
    return 0;
  }
  if ((((*(byte *)(param_1 + 7) & 2) != 0) && ((*(byte *)(param_1 + 7) & 1) != 0)) ||
     (((longlong)*(char *)((longlong)param_1 + 0x37) != -1 &&
      (*(char *)(_DAT_14a924088 + 0x3ce10 + (longlong)*(char *)((longlong)param_1 + 0x37)) != '\0'))
     )) {
LAB_140035003:
    *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
    return 0;
  }
  uVar2 = *(undefined2 *)((longlong)param_1 + 0x34);
  *(undefined8 *)(puVar39 + -0x28) = 0x140034fe8;
  cVar21 = func_0x000144ddb170(uVar2);
  if (cVar21 != '\0') {
    *(undefined8 *)(puVar39 + -0x28) = 0x140034ffb;
    cVar21 = FUN_144e38ea0(uVar2);
    if (cVar21 != '\0') goto LAB_140035003;
  }
  plVar4 = (longlong *)param_1[0xc];
  if (((byte)(uVar25 >> 0x19) & plVar4 == (longlong *)0x0) != 0) {
    return 0;
  }
  if ((uVar25 >> 0x19 & 1) != 0) {
    pcVar5 = *(code **)(*plVar4 + 0x28);
    *(undefined8 *)(puVar39 + -0x28) = 0x14003503e;
    (*pcVar5)(plVar4);
  }
  *(undefined8 *)(puVar39 + -0x28) = 0x14003504e;
  FUN_144e387c0(param_1);
  uStack_150 = param_1[8];
  uVar23 = *(ushort *)(param_1 + 0xf);
  lStack_180 = 0;
  uStack_164 = *(uint *)((longlong)param_1 + 0xac) / (uint)uVar23;
  *(undefined8 *)(puVar39 + -0x28) = 0x140035081;
  iVar24 = FUN_144e38540(param_1);
  uVar25 = *(uint *)((longlong)param_1 + 0x114);
  uStack_178 = 0x100 - (ulonglong)(uVar25 & 0xff);
  cStack_1ad = iVar24 != 48000;
  if (iVar24 == 48000) {
    auVar48._0_12_ = ZEXT812(0);
    auVar48._12_4_ = 0;
    auVar41._0_12_ = ZEXT812(0);
    auVar41._12_4_ = 0;
    fStack_19c = _DAT_145fc6ed8;
    uVar30 = uStack_178;
  }
  else {
    fStack_19c = (float)iVar24 * _DAT_14617c834;
    auVar41._4_12_ = in_ZMM1._4_12_;
    auVar41._0_4_ = fStack_19c * (float)(int)uStack_178 + *(float *)(param_1 + 0x16);
    auVar42 = vroundss_avx(auVar41,auVar41,10);
    auVar48 = vroundss_avx(auVar41,auVar41,9);
    lStack_180 = (longlong)auVar48._0_4_;
    uVar30 = (ulonglong)((int)(longlong)auVar42._0_4_ + 1);
  }
  auVar49 = ZEXT1664(auVar48);
  auVar47 = ZEXT1664(auVar41);
  uVar29 = (int)uVar30 * (uint)uVar23;
  uVar30 = (ulonglong)uVar29;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    uVar2 = *(undefined2 *)((longlong)param_1 + 0x2a);
    *(undefined8 *)(puVar39 + -0x28) = 0x140035116;
    cVar21 = func_0x000144ddb170(uVar2);
    if (cVar21 != '\0') {
      lVar27 = param_1[0x1e];
      *(undefined8 *)(puVar39 + -0x28) = 0x14003512d;
      cVar21 = func_0x0001455cbdf0((int)lVar27);
      if (cVar21 == '\0') {
        if ((uVar25 >> 0x19 & 1) == 0) {
LAB_14003515f:
          *(undefined4 *)((longlong)param_1 + 0x14) = 0;
          *(undefined8 *)(puVar39 + -0x28) = 0x140035178;
          FUN_140035c00((longlong)param_1 + 0x2a,0,0);
        }
        else if (plVar4 != (longlong *)0x0) {
          pcVar5 = *(code **)(*plVar4 + 0x58);
          *(undefined8 *)(puVar39 + -0x28) = 0x14003514e;
          uVar35 = (*pcVar5)(plVar4);
          if (uVar29 <= (uint)((uVar35 & 0xffffffff) / (ulonglong)*(ushort *)(param_1 + 0xf)))
          goto LAB_14003515f;
        }
      }
    }
  }
  uVar2 = *(undefined2 *)((longlong)param_1 + 0x2a);
  *(undefined8 *)(puVar39 + -0x28) = 0x140035189;
  cVar21 = func_0x000144ddb170(uVar2);
  if (cVar21 != '\0') {
    return 0;
  }
  *(undefined8 *)(puVar39 + -0x28) = 0x14003519d;
  cVar21 = func_0x000144e38520(param_1);
  if (cVar21 == '\0') {
    return 0;
  }
  lVar27 = param_1[0x1e];
  *(undefined8 *)(puVar39 + -0x28) = 0x1400351b4;
  cVar21 = func_0x0001455cbdf0((int)lVar27);
  fStack_168 = auVar49._0_4_;
  if (cVar21 != '\0') {
    return 0;
  }
  uStack_1a8 = uVar30;
  if ((*(byte *)((longlong)param_1 + 0x117) & 2) == 0) {
    if (param_1[0x10] != 0) {
      pcVar5 = *(code **)(*param_1 + 0x80);
      *(undefined8 *)(puVar39 + -0x28) = 0x140035243;
      cVar21 = (*pcVar5)(param_1);
      fStack_168 = auVar49._0_4_;
      iStack_1ac = *(int *)((longlong)param_1 + 0xac);
      if (cVar21 == '\0') {
        uVar25 = *(int *)((longlong)param_1 + 0xdc) - iStack_1ac;
        if (uVar29 <= uVar25) {
          uVar25 = uVar29;
        }
        uVar30 = (ulonglong)uVar25;
        cStack_1ad = 1 < uVar25 && iVar24 != 48000;
      }
      uVar35 = 0;
      uStack_198 = 0;
      uStack_194 = 0;
      uStack_1a8 = uVar30;
      if ((int)uVar30 != 0) {
        uVar35 = 0;
        uStack_188 = CONCAT71(uStack_188._1_7_,cStack_1ad) ^ 1;
        do {
          pcVar5 = *(code **)(*param_1 + 0x80);
          *(undefined8 *)(puVar39 + -0x28) = 0x140035406;
          bVar22 = (*pcVar5)(param_1);
          fStack_168 = auVar49._0_4_;
          if (((bVar22 & *(uint *)((longlong)param_1 + 0xdc) != 0) == 0) &&
             (*(uint *)((longlong)param_1 + 0xdc) <= *(uint *)((longlong)param_1 + 0xac))) break;
          iVar24 = (int)uVar35;
          *(undefined8 **)(puVar39 + -0x10) = &uStack_148;
          *(uint **)(puVar39 + -8) = &uStack_198;
          *(undefined8 *)(puVar39 + -0x38) = 0x140035454;
          FUN_1443a9200(param_1,(int)uStack_1a8 - iVar24,&puStack_160,&uStack_194);
          uVar25 = uStack_194;
          uVar35 = (ulonglong)uStack_194;
          uVar30 = (ulonglong)uStack_198;
          iVar40 = uStack_198 + uStack_194;
          *(undefined8 *)(puVar39 + -0x28) = 0x140035479;
          FUN_144e38600(param_1,iVar40,iVar40,uStack_188 & 0xff);
          uVar23 = *(ushort *)(param_1 + 0xf);
          puStack_190 = (undefined2 *)CONCAT44(puStack_190._4_4_,(uint)uVar23);
          *(undefined8 *)(puVar39 + -0x28) = 0x1400354a2;
          func_0x000145f40560(puVar39 + (ulonglong)(iVar24 * (uint)uVar23) * 2,puStack_160,
                              uVar35 * 2);
          if (uVar30 != 0) {
            *(undefined8 *)(puVar39 + -0x28) = 0x1400354cb;
            func_0x000145f40560(puVar39 + (ulonglong)((uVar25 + iVar24) * (int)puStack_190) * 2,
                                uStack_148,uVar30 * 2);
          }
          fStack_168 = auVar49._0_4_;
          uVar35 = (ulonglong)(uint)(iVar24 + iVar40);
        } while ((uint)(iVar24 + iVar40) < (uint)uStack_1a8);
      }
      goto LAB_140035552;
    }
    goto LAB_140035545;
  }
  pcVar5 = *(code **)(*plVar4 + 0x58);
  *(undefined8 *)(puVar39 + -0x28) = 0x14003526d;
  uVar25 = (*pcVar5)(plVar4);
  if (uVar25 < uVar29) {
    if ((*(byte *)((longlong)param_1 + 0x117) & 8) != 0) {
      lVar27 = param_1[0xd];
      *(undefined8 *)(puVar39 + -0x28) = 0x140035296;
      lVar27 = func_0x000144f131b0((short)lVar27);
      fStack_168 = auVar49._0_4_;
      if (*(char *)(lVar27 + 0x4ef + (longlong)*(short *)((longlong)param_1 + 0xbe) * 0x10) == '\0')
      {
        *(byte *)(param_1 + 0x23) = *(byte *)(param_1 + 0x23) | 1;
        goto LAB_140035545;
      }
    }
    pcVar5 = *(code **)(*plVar4 + 0x18);
    *(undefined8 *)(puVar39 + -0x28) = 0x1400352c1;
    iVar24 = (*pcVar5)(plVar4);
    fStack_168 = auVar49._0_4_;
    if (iVar24 != 2) {
      if ((*(uint *)((longlong)param_1 + 0x114) & 0xe00000) == 0x800000) {
        *(uint *)((longlong)param_1 + 0x114) = *(uint *)((longlong)param_1 + 0x114) | 0x1000000;
      }
      else {
        pcVar5 = *(code **)(*plVar4 + 0x18);
        *(undefined8 *)(puVar39 + -0x28) = 0x140035520;
        iVar24 = (*pcVar5)(plVar4);
        fStack_168 = auVar49._0_4_;
        uVar25 = *(uint *)((longlong)param_1 + 0x114);
        if (iVar24 != 3) {
          if ((uVar25 & 0x8e00000) == 0x8600000) {
            iStack_1ac = 0;
            uVar35 = 0;
            goto LAB_140035552;
          }
          uVar35 = 0;
          uVar25 = (uVar25 & 0xff1e00ff) + 0x400000 + (uVar25 + 0x100 & 0x1ff00);
          goto LAB_1400353a2;
        }
        *(uint *)((longlong)param_1 + 0x114) = uVar25 & 0xfe1fffff | 0x1a00000;
      }
LAB_140035545:
      iStack_1ac = 0;
      uVar35 = 0;
      goto LAB_140035552;
    }
    pcVar5 = *(code **)(*plVar4 + 0x48);
    *(undefined8 *)(puVar39 + -0x28) = 0x1400352e1;
    uVar29 = (*pcVar5)(plVar4,puVar39,uVar25);
    uVar35 = (ulonglong)uVar29;
    pcVar5 = *(code **)(*plVar4 + 0x50);
    *(undefined8 *)(puVar39 + -0x28) = 0x1400352fa;
    (*pcVar5)(plVar4,uVar25);
    *(undefined8 *)(puVar39 + -0x28) = 0x14003530a;
    FUN_144e38600(param_1,uVar25,uVar25,1);
    fStack_168 = auVar49._0_4_;
    uVar25 = *(uint *)((longlong)param_1 + 0x114) & 0xfe1fffff | 0x1800000;
  }
  else {
    pcVar5 = *(code **)(*plVar4 + 0x48);
    *(undefined8 *)(puVar39 + -0x28) = 0x14003533d;
    uVar25 = (*pcVar5)(plVar4,puVar39,uVar30);
    uVar35 = (ulonglong)uVar25;
    uVar34 = (ulonglong)((uint)*(ushort *)(param_1 + 0xf) * (int)lStack_180);
    if (iVar24 == 48000) {
      uVar34 = uVar30;
    }
    pcVar5 = *(code **)(*plVar4 + 0x50);
    *(undefined8 *)(puVar39 + -0x28) = 0x140035365;
    (*pcVar5)(plVar4);
    uVar23 = *(ushort *)(param_1 + 0xf);
    *(undefined8 *)(puVar39 + -0x28) = 0x140035384;
    FUN_144e38600(param_1,uVar34,(uint)uVar23 * (int)uStack_178,1);
    fStack_168 = auVar49._0_4_;
    uVar25 = *(uint *)((longlong)param_1 + 0x114) & 0xff1fffff | 0x600000;
  }
LAB_1400353a2:
  iStack_1ac = 0;
  *(uint *)((longlong)param_1 + 0x114) = uVar25;
LAB_140035552:
  fStack_16c = auVar47._0_4_;
  *(undefined8 *)(puVar39 + -0x28) = 0x140035579;
  func_0x000145f40580(puVar39 + uVar35 * 2,0);
  uVar30 = (ulonglong)*(ushort *)(param_1 + 0xf);
  puVar32 = puVar39;
  puStack_160 = puVar39;
  if (1 < *(ushort *)(param_1 + 0xf)) {
    *(undefined8 *)(puVar39 + -8) = 0x140035591;
    lVar27 = FUN_145647140();
    puVar32 = (undefined1 *)((longlong)puVar39 - lVar27 & 0xffffffffffffffe0);
    *(undefined8 *)(puVar32 + -8) = 0x1400355ac;
    puVar33 = puVar32;
    puStack_160 = puVar32;
    lVar27 = FUN_145647140();
    puVar32 = (undefined1 *)((longlong)puVar32 - lVar27 & 0xffffffffffffffe0);
    lVar27 = 0;
    do {
      uVar2 = *(undefined2 *)(puVar39 + lVar27 * 4 + 2);
      *(undefined2 *)(puVar33 + lVar27 * 2) = *(undefined2 *)(puVar39 + lVar27 * 4);
      *(undefined2 *)(puVar32 + lVar27 * 2) = uVar2;
      lVar27 = lVar27 + 1;
      uStack_158 = (ulonglong)puVar32;
    } while (lVar27 != 0x402);
  }
  if ((short)uVar30 != 0) {
    auStack_140._4_4_ = _DAT_145f43840;
    auStack_140._0_4_ = _DAT_145f43840;
    auStack_140._8_4_ = _DAT_145f43840;
    auStack_140._12_4_ = _DAT_145f43840;
    auStack_140._16_4_ = _DAT_145f43840;
    auStack_140._20_4_ = _DAT_145f43840;
    auStack_140._24_4_ = _DAT_145f43840;
    auStack_140._28_4_ = _DAT_145f43840;
    auVar49 = ZEXT464((uint)_DAT_145fc6ed8);
    auVar51 = ZEXT1664(CONCAT412(_DAT_14615a2ac,
                                 CONCAT48(_DAT_14615a2ac,CONCAT44(_DAT_14615a2ac,_DAT_14615a2ac))));
    uStack_188 = (ulonglong)(uint)((int)uStack_178 << 2);
    auVar50 = ZEXT1264(ZEXT812(0));
    uVar35 = 0;
    puStack_190 = (undefined2 *)((longlong)param_1 + 0x2e);
    uStack_120 = _DAT_145f437c0;
    uStack_118 = _DAT_145f437c0;
    uStack_110 = _DAT_145f437c0;
    uStack_108 = _DAT_145f437c0;
    do {
      uVar3 = *(undefined8 *)(_DAT_14a923120 + 0x28);
      auVar47 = ZEXT1664(auVar47._0_16_);
      auVar49 = ZEXT1664(auVar49._0_16_);
      auVar50 = ZEXT1664(auVar50._0_16_);
      auVar51 = ZEXT1664(auVar51._0_16_);
      *(undefined8 *)(puVar32 + -0x28) = 0x140035660;
      lVar28 = func_0x000144d9f6a0(uVar3);
      lVar27 = 0x149af4f40;
      if (*(char *)((longlong)param_1 + 0x114) == '\0') {
        lVar27 = lVar28;
      }
      if (cStack_1ad == '\0') {
        if (lVar27 != 0) {
          uVar30 = (uStack_1a8 & 0xffffffff) / (uVar30 & 0xffff);
          puVar39 = (&puStack_160)[uVar35];
          uVar34 = (ulonglong)((uint)uVar30 & 0xfffffff8);
          if ((uVar30 & 0xfffffff8) != 0) {
            uVar36 = 0;
            do {
              auVar48 = *(undefined1 (*) [16])(puVar39 + uVar36 * 2);
              auVar41 = vpunpcklwd_avx(auVar48,auVar48);
              auVar48 = vpunpckhwd_avx(auVar48,auVar48);
              auVar42 = vpsrad_avx(auVar41,0x10);
              auVar41 = vpsrad_avx(auVar48,0x10);
              auVar48 = vcvtdq2ps_avx(auVar42);
              auVar41 = vcvtdq2ps_avx(auVar41);
              auVar42._0_4_ = auVar51._0_4_ * auVar41._0_4_;
              auVar42._4_4_ = auVar51._4_4_ * auVar41._4_4_;
              auVar42._8_4_ = auVar51._8_4_ * auVar41._8_4_;
              auVar42._12_4_ = auVar51._12_4_ * auVar41._12_4_;
              pfVar1 = (float *)(lVar27 + uVar36 * 4);
              *pfVar1 = auVar51._0_4_ * auVar48._0_4_;
              pfVar1[1] = auVar51._4_4_ * auVar48._4_4_;
              pfVar1[2] = auVar51._8_4_ * auVar48._8_4_;
              pfVar1[3] = auVar51._12_4_ * auVar48._12_4_;
              *(undefined1 (*) [16])(lVar27 + 0x10 + uVar36 * 4) = auVar42;
              uVar36 = uVar36 + 8;
            } while (uVar36 < uVar34);
          }
          fVar19 = _DAT_14615a2ac;
          if ((uVar30 & 7) != 0) {
            uVar36 = 0;
            do {
              lVar38 = uVar36 + uVar34;
              uVar36 = uVar36 + 1;
              *(float *)(lVar27 + lVar38 * 4) =
                   (float)(int)*(short *)(puVar39 + lVar38 * 2) * fVar19;
            } while (uVar36 < ((uint)uVar30 & 7));
          }
        }
        uVar25 = (uint)((uStack_1a8 & 0xffffffff) / (ulonglong)*(ushort *)(param_1 + 0xf));
      }
      else {
        puVar39 = (&puStack_160)[uVar35];
        *(int *)(puVar32 + -8) = (int)param_1[0x16];
        *(int *)(puVar32 + -0x10) = (int)uStack_178;
        *(undefined8 *)(puVar32 + -0x38) = 0x1400356b7;
        uVar25 = FUN_144fc76c0(fStack_19c,lVar27,puVar39,
                               (uStack_1a8 & 0xffffffff) / (uVar30 & 0xffff));
        if ((*(byte *)((longlong)param_1 + 0x117) & 2) == 0) {
          *(undefined8 *)(puVar32 + -0x28) = 0x1400356da;
          FUN_14007ac30(param_1,iStack_1ac);
          *(undefined8 *)(puVar32 + -0x28) = 0x1400356ec;
          FUN_144e38600(param_1,lStack_180,uVar25,1);
        }
      }
      bVar22 = *(byte *)((longlong)param_1 + 0x114);
      uVar30 = (ulonglong)bVar22;
      if (uVar30 != 0) {
        if (lVar28 != 0) {
          *(undefined8 *)(puVar32 + -0x28) = 0x1400357c0;
          func_0x000145f40580(lVar28,0,(ulonglong)bVar22 << 2);
          bVar22 = *(byte *)((longlong)param_1 + 0x114);
          *(undefined8 *)(puVar32 + -0x28) = 0x1400357df;
          func_0x000145f40560(lVar28 + (ulonglong)bVar22 * 4,lVar27,uStack_188);
          uVar30 = (ulonglong)*(byte *)((longlong)param_1 + 0x114);
        }
        uVar25 = uVar25 + (int)uVar30;
      }
      uVar29 = *(uint *)((longlong)param_1 + 0x104);
      uVar31 = *(uint *)(param_1 + 0x21);
      if (uStack_150 < uVar29 + uVar31) {
        do {
          auVar48 = vmaxss_avx(auVar50._0_16_,
                               ZEXT416((uint)((float)(longlong)
                                                     ((ulonglong)
                                                      ((int)uVar30 -
                                                      (uint)*(byte *)((longlong)param_1 + 0x114)) +
                                                     (uStack_150 - uVar29)) *
                                             (auVar49._0_4_ / (float)uVar31))));
          auVar48 = vminss_avx(auVar49._0_16_,auVar48);
          *(float *)(lVar28 + uVar30 * 4) = auVar48._0_4_ * *(float *)(lVar28 + uVar30 * 4);
          uVar30 = uVar30 + 1;
        } while (uVar30 != 0x100);
      }
      lVar27 = _DAT_14a924088;
      uVar29 = *(uint *)(param_1 + 4);
      if ((*(byte *)(param_1 + 0x23) & 0x10) == 0) {
LAB_140035867:
        if (uVar29 != 0xffffffff) {
          uVar31 = *(uint *)(_DAT_14a924088 + 0x1548);
LAB_1400359f5:
          if (uVar29 <= uVar31) {
            if (uVar31 == uVar29) {
              uVar23 = *(ushort *)((longlong)param_1 + 0x24);
            }
            else {
              uVar23 = 0;
            }
            if (lVar28 != 0) {
              auVar47 = ZEXT1664(auVar47._0_16_);
              auVar49 = ZEXT1664(auVar49._0_16_);
              auVar50 = ZEXT1664(auVar50._0_16_);
              auVar51 = ZEXT1664(auVar51._0_16_);
              *(undefined8 *)(puVar32 + -0x28) = 0x140035a2c;
              func_0x000145f40580((ulonglong)((uint)uVar23 * 4) + lVar28);
            }
            if (uVar23 <= uVar25) {
              uVar25 = (uint)uVar23;
            }
          }
        }
      }
      else if (uVar29 != 0xffffffff) {
        uVar2 = *(undefined2 *)((longlong)param_1 + 0x24);
        *(undefined8 *)(puVar32 + -0x28) = 0x1400358a1;
        iVar24 = func_0x00014144b960(uVar29,uVar2);
        fVar19 = _DAT_145fc6ed8;
        uVar31 = *(uint *)(lVar27 + 0x1548);
        iVar40 = iVar24 - *(uint *)((longlong)param_1 + 0x10c);
        uVar37 = iVar40 + uVar31 * -0x100;
        if ((int)uVar37 < 0x100) {
          auVar14 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
          auVar15 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
          uVar26 = iVar24 + uVar31 * -0x100 + 1;
          uVar37 = ~((int)uVar37 >> 0x1f) & uVar37;
          if (0xff < uVar26) {
            uVar26 = 0x100;
          }
          if (uVar37 < uVar26) {
            auVar18._8_8_ = uStack_118;
            auVar18._0_8_ = uStack_120;
            auVar18._16_8_ = uStack_110;
            auVar18._24_8_ = uStack_108;
            iVar40 = uVar31 * 0x100 - iVar40;
            auVar13 = vpcmpeqd_avx2(auVar47._0_32_,auVar47._0_32_);
            auVar47 = ZEXT3264(auVar13);
            lVar38 = (ulonglong)uVar26 - (ulonglong)uVar37;
            lVar27 = lVar38 + -1;
            iVar24 = uVar37 + _DAT_145f43820;
            iVar6 = uVar37 + _UNK_145f43824;
            iVar7 = uVar37 + _UNK_145f43828;
            iVar8 = uVar37 + _UNK_145f4382c;
            iVar9 = uVar37 + _UNK_145f43830;
            iVar10 = uVar37 + _UNK_145f43834;
            iVar11 = uVar37 + _UNK_145f43838;
            iVar12 = uVar37 + _UNK_145f4383c;
            fVar43 = auVar49._0_4_ / (float)*(uint *)((longlong)param_1 + 0x10c);
            auVar44._8_8_ = lVar27;
            auVar44._0_8_ = lVar27;
            auVar44._16_8_ = lVar27;
            auVar44._24_8_ = lVar27;
            lVar27 = lVar28 + (ulonglong)uVar37 * 4;
            uVar30 = 0;
            do {
              auVar45._8_8_ = uVar30;
              auVar45._0_8_ = uVar30;
              auVar45._16_8_ = uVar30;
              auVar45._24_8_ = uVar30;
              auVar16 = vpor_avx2(auVar14,auVar45);
              auVar17 = vpor_avx2(auVar15,auVar45);
              auVar17 = vpcmpgtq_avx2(auVar18 ^ auVar17,auVar18 ^ auVar44);
              auVar16 = vpcmpgtq_avx2(auVar18 ^ auVar16,auVar18 ^ auVar44);
              auVar17 = vpackssdw_avx2(auVar16,auVar17);
              auVar48 = vpackssdw_avx(SUB3216(auVar17 ^ auVar13,0),SUB3216(auVar17 ^ auVar13,0x10));
              auVar17._0_4_ = iVar40 + iVar24;
              auVar17._4_4_ = iVar40 + iVar6;
              auVar17._8_4_ = iVar40 + iVar7;
              auVar17._12_4_ = iVar40 + iVar8;
              auVar17._16_4_ = iVar40 + iVar9;
              auVar17._20_4_ = iVar40 + iVar10;
              auVar17._24_4_ = iVar40 + iVar11;
              auVar17._28_4_ = iVar40 + iVar12;
              iVar24 = auStack_140._0_4_ + iVar24;
              iVar6 = auStack_140._4_4_ + iVar6;
              iVar7 = auStack_140._8_4_ + iVar7;
              iVar8 = auStack_140._12_4_ + iVar8;
              iVar9 = auStack_140._16_4_ + iVar9;
              iVar10 = auStack_140._20_4_ + iVar10;
              iVar11 = auStack_140._24_4_ + iVar11;
              iVar12 = auStack_140._28_4_ + iVar12;
              auVar48 = vpshufd_avx(auVar48,0xd8);
              auVar17 = vcvtdq2ps_avx(auVar17);
              auVar16 = vpmovzxwd_avx2(auVar48);
              auVar45 = vpslld_avx2(auVar16,0x1f);
              auVar16 = vmaskmovps_avx(auVar45,*(undefined1 (*) [32])(lVar27 + uVar30 * 4));
              auVar46._0_4_ = auVar16._0_4_ * (-(fVar43 * auVar17._0_4_) + fVar19);
              auVar46._4_4_ = auVar16._4_4_ * (-(fVar43 * auVar17._4_4_) + fVar19);
              auVar46._8_4_ = auVar16._8_4_ * (-(fVar43 * auVar17._8_4_) + fVar19);
              auVar46._12_4_ = auVar16._12_4_ * (-(fVar43 * auVar17._12_4_) + fVar19);
              auVar46._16_4_ = auVar16._16_4_ * (-(fVar43 * auVar17._16_4_) + fVar19);
              auVar46._20_4_ = auVar16._20_4_ * (-(fVar43 * auVar17._20_4_) + fVar19);
              auVar46._24_4_ = auVar16._24_4_ * (-(fVar43 * auVar17._24_4_) + fVar19);
              auVar46._28_4_ = auVar16._28_4_ * (-(fVar43 * auVar17._28_4_) + fVar19);
              auVar17 = vmaskmovps_avx(auVar45,auVar46);
              *(undefined1 (*) [32])(lVar27 + uVar30 * 4) = auVar17;
              uVar30 = uVar30 + 8;
            } while ((lVar38 + 7U & 0xfffffffffffffff8) != uVar30);
            goto LAB_140035867;
          }
        }
        goto LAB_1400359f5;
      }
      if (uVar35 == 0) {
        uVar2 = *puStack_190;
        auVar47 = ZEXT1664(auVar47._0_16_);
        auVar49 = ZEXT1664(auVar49._0_16_);
        auVar50 = ZEXT1664(auVar50._0_16_);
        auVar51 = ZEXT1664(auVar51._0_16_);
        *(undefined8 *)(puVar32 + -0x28) = 0x140035a53;
        cVar21 = func_0x000144ddb170(uVar2);
        puVar20 = puStack_190;
        if (cVar21 != '\0') {
          if ((*(byte *)((longlong)param_1 + 0x117) & 1) == 0) {
            uVar29 = 0xffffffff;
            if ((*(uint *)(param_1 + 4) != 0xffffffff) &&
               (*(uint *)(param_1 + 4) <= *(uint *)(_DAT_14a924088 + 0x1548))) goto LAB_140035a80;
          }
          else {
LAB_140035a80:
            uVar29 = uVar25;
          }
          uVar25 = *(uint *)((longlong)param_1 + 0xac) - *(uint *)((longlong)param_1 + 0xa4);
          if (uVar29 < uVar25) {
            uVar25 = uVar29;
          }
          if (*(uint *)((longlong)param_1 + 0xac) < *(uint *)((longlong)param_1 + 0xa4)) {
            uVar25 = uVar29;
          }
          if (uVar25 != 0xffffffff) {
            *(undefined8 *)(puVar32 + -0x28) = 0x140035abe;
            FUN_140035c00(puStack_190);
            *(undefined8 *)(puVar32 + -0x28) = 0x140035ac6;
            FUN_14007b220(puVar20);
          }
        }
      }
      uVar25 = *(uint *)((longlong)param_1 + 0xac);
      uVar23 = *(ushort *)(param_1 + 0xf);
      if (0xfff < (uVar25 / uVar23 ^ uStack_164)) {
        auVar47 = ZEXT1664(auVar47._0_16_);
        auVar49 = ZEXT1664(auVar49._0_16_);
        auVar50 = ZEXT1664(auVar50._0_16_);
        auVar51 = ZEXT1664(auVar51._0_16_);
        *(undefined8 *)(puVar32 + -0x28) = 0x140035af1;
        func_0x000144e38a20(param_1,(ulonglong)uVar25 % (ulonglong)uVar23);
      }
      if (lVar28 != 0) {
        bVar22 = *(byte *)(param_1 + 7);
        if ((bVar22 & 2) == 0) {
          if ((bVar22 & 1) != 0) {
            auVar47 = ZEXT1664(auVar47._0_16_);
            auVar49 = ZEXT1664(auVar49._0_16_);
            auVar50 = ZEXT1664(auVar50._0_16_);
            auVar51 = ZEXT1664(auVar51._0_16_);
            *(undefined8 *)(puVar32 + -0x28) = 0x140035b14;
            func_0x0001443a9860(lVar28);
          }
        }
        else if ((bVar22 & 1) == 0) {
          auVar47 = ZEXT1664(auVar47._0_16_);
          auVar49 = ZEXT1664(auVar49._0_16_);
          auVar50 = ZEXT1664(auVar50._0_16_);
          auVar51 = ZEXT1664(auVar51._0_16_);
          *(undefined8 *)(puVar32 + -0x28) = 0x140035b29;
          func_0x0001443a9290(lVar28);
        }
      }
      uVar30 = (ulonglong)*(ushort *)(param_1 + 0xf);
      uVar35 = uVar35 + 1;
    } while (uVar35 < uVar30);
  }
  *(float *)(param_1 + 0x16) = fStack_16c - fStack_168;
  *(undefined1 *)((longlong)param_1 + 0x114) = 0;
  return 1;
}

