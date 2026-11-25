// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140105560  size: 5339 bytes
// Name:    FUN_140105560
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145723b00, FUN_14555faa0, FUN_140006180, FUN_140104a30, FUN_1400062d0, FUN_1447c2a60, FUN_1424f4450, FUN_144fad5f0, FUN_140104a00, FUN_144faca30, FUN_145490140, FUN_144facaf0, FUN_140554af0, FUN_14518e0c0, FUN_14553f3b0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x00014010570c) */
/* WARNING: Removing unreachable block (ram,0x000140105719) */
/* WARNING: Removing unreachable block (ram,0x000140105737) */
/* WARNING: Removing unreachable block (ram,0x000140105701) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140105560(longlong param_1,longlong param_2,float *param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ushort uVar4;
  float *pfVar5;
  longlong lVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte bVar16;
  byte bVar17;
  short sVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  longlong *plVar24;
  ushort uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  longlong unaff_GS_OFFSET;
  bool bVar28;
  bool bVar29;
  float fVar30;
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
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar54;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar64 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar81;
  undefined1 auVar71 [16];
  float fVar76;
  float fVar77;
  float fVar79;
  float fVar80;
  float fVar82;
  undefined1 auVar72 [16];
  float fVar75;
  float fVar78;
  undefined1 auVar73 [64];
  undefined1 auVar74 [64];
  float fVar83;
  float fVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar97;
  float fVar98;
  undefined1 auVar96 [64];
  undefined1 auVar99 [16];
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar104 [16];
  float fVar105;
  float fVar108;
  float fVar109;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar110 [16];
  float fStack_2b4;
  longlong lStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  longlong lStack_2a0;
  undefined8 uStack_298;
  float fStack_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [8];
  undefined8 uStack_250;
  longlong *plStack_248;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  ulonglong uStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float *pfStack_190;
  float fStack_184;
  undefined1 auStack_180 [4];
  undefined4 uStack_17c;
  undefined1 auStack_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined1 auStack_168 [8];
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [16];
  
  cVar8 = func_0x000144faca00();
  if (cVar8 == '\0') {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0x1160);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  lStack_2b0 = param_2;
  if (lVar11 == 0) {
    lVar11 = 0;
LAB_140105686:
    bVar28 = true;
  }
  else {
    cVar8 = *(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
    lVar11 = func_0x000144e25990(*(undefined4 *)(lVar11 + 0x9c));
    if ((lVar11 == 0) || (cVar8 == '\0')) goto LAB_140105686;
    uVar26 = (ulonglong)*(ushort *)(lVar11 + 0x14);
    uVar12 = uVar26 & 0xff;
    if ((uVar12 != 0xff) &&
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar12 >> 6) * 8) >>
         (uVar26 & 0x3f) & 1) != 0)) goto LAB_140105686;
    uVar23 = (uint)*(ushort *)(lVar11 + 0x14);
    iVar21 = (uVar23 & 0xffffff00) + 0x100 + (int)uVar12;
    while( true ) {
      LOCK();
      uVar25 = *(ushort *)(lVar11 + 0x14);
      bVar28 = (ushort)uVar23 == uVar25;
      if (bVar28) {
        *(ushort *)(lVar11 + 0x14) = (ushort)iVar21;
      }
      else {
        uVar23 = (uint)uVar25;
      }
      UNLOCK();
      if (bVar28) break;
      uVar26 = (ulonglong)uVar23;
      iVar21 = uVar23 + 0x100;
    }
    if ((ushort)uVar26 < 0x100) {
      do {
        do {
          uVar25 = (ushort)(_DAT_14a9b3da8 >> 0x20);
        } while (uVar25 == 0x40);
        uVar12 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                 (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                 (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
        LOCK();
        UNLOCK();
        bVar17 = (byte)(_DAT_14a9b3da8 >> 0x20);
        uVar25 = uVar25 & 0xff;
        _DAT_14a9b3da8 = uVar12;
      } while (0x3f < uVar25);
      uVar23 = (uint)uVar26 | 0x100;
      LOCK();
      uVar4 = *(ushort *)(lVar11 + 0x14);
      bVar28 = (ushort)uVar23 == uVar4;
      if (bVar28) {
        *(ushort *)(lVar11 + 0x14) = uVar25 | 0x100;
      }
      else {
        uVar23 = (uint)uVar4;
      }
      UNLOCK();
      while (!bVar28) {
        LOCK();
        uVar4 = *(ushort *)(lVar11 + 0x14);
        bVar28 = (ushort)uVar23 == uVar4;
        if (bVar28) {
          *(ushort *)(lVar11 + 0x14) = (ushort)uVar23 & 0xff00 | uVar25;
        }
        else {
          uVar23 = (uint)uVar4;
        }
        UNLOCK();
      }
    }
    else {
      bVar17 = (byte)uVar26;
      while (bVar17 == 0xff) {
        bVar17 = (byte)*(undefined2 *)(lVar11 + 0x14);
      }
    }
    uVar12 = (ulonglong)bVar17;
    puVar2 = (uint *)(uVar12 * 0x18 + 0x14a9b3708);
    puVar3 = (ulonglong *)(uVar12 * 0x18 + 0x14a9b3710);
    uVar23 = *puVar2;
    pfStack_190 = param_3;
LAB_1401057b5:
    do {
      uVar10 = uVar23;
      if ((uVar10 & 0x1ff0000) != 0) {
        LOCK();
        uVar23 = *puVar2;
        bVar28 = uVar10 == uVar23;
        if (bVar28) {
          *puVar2 = uVar10 + 0x100;
          uVar23 = uVar10;
        }
        UNLOCK();
        if (bVar28) {
          uVar22 = (uint)(*puVar3 >> 7) & 0xffffff;
          uVar26 = *puVar3;
          if ((*puVar3 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar26 < 0x100000000) {
                uVar19 = *puVar3;
              }
              else {
                LOCK();
                uVar19 = *puVar3;
                if (uVar26 == uVar19) {
                  *puVar3 = uVar26 - 0x100000000;
                  uVar19 = uVar26;
                }
                UNLOCK();
                uVar23 = uVar10;
                if (uVar26 == uVar19) goto LAB_1401057b5;
              }
              uVar22 = uVar22 - 1;
              uVar26 = uVar19;
            } while (uVar22 != 0);
          }
          uVar26 = *puVar3;
          do {
            while (uStack_288 = uVar26, 0xffffffff < (longlong)uStack_288) {
              LOCK();
              uVar26 = *puVar3;
              if (uStack_288 == uVar26) {
                *puVar3 = uStack_288 - 0x100000000;
                uVar26 = uStack_288;
              }
              UNLOCK();
              uVar23 = uVar10;
              if (uStack_288 == uVar26) goto LAB_1401057b5;
            }
            cVar8 = FUN_140006180(puVar3,1,&uStack_288);
            uVar23 = uVar10;
            uVar26 = uStack_288;
          } while (cVar8 == '\0');
        }
        goto LAB_1401057b5;
      }
      LOCK();
      uVar23 = *puVar2;
      bVar28 = uVar10 == uVar23;
      if (bVar28) {
        *puVar2 = uVar10 + 1;
        uVar23 = uVar10;
      }
      UNLOCK();
    } while (!bVar28);
    bVar28 = false;
    puVar3 = (ulonglong *)
             (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar17 >> 6) * 8);
    *puVar3 = *puVar3 | 1L << (uVar12 & 0x3f);
    param_3 = pfStack_190;
    param_2 = lStack_2b0;
  }
  lVar13 = func_0x000144e25990(*(undefined4 *)(*(longlong *)(param_1 + 0x1160) + 0x9c));
  lVar13 = *(longlong *)(lVar13 + 0x18);
  uStack_298 = 0x2000000;
  lStack_2a0 = (*(ulonglong *)(lVar13 + 0x100) & 0x1002015eb35e0) + 0xc0000000;
  FUN_145490140(param_1,&fStack_218,&fStack_1d8);
  uVar12 = *(ulonglong *)(param_1 + 0x980);
  if (uVar12 != 0) {
    fVar60 = *(float *)(param_1 + 0x1280);
    goto LAB_140105a42;
  }
  uVar25 = FUN_140554af0(lVar13,*(undefined2 *)(param_1 + 0x11ae));
  if ((uVar25 == 0xffff) || ((*(ulonglong *)(param_1 + 0x1190) & 0x100000000) != 0)) {
    FUN_14553f3b0(*(undefined4 *)(*(longlong *)(param_1 + 0x1160) + 0x9c),
                  *(undefined2 *)(param_1 + 0x11b0),&uStack_288);
    uVar12 = (ulonglong)(((uint)uStack_288 & 0xffff) << 4);
    if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar12) ==
         (short)(uStack_288 >> 0x10)) &&
       ((lVar15 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar12), lVar15 != 0 &&
        (uVar12 = *(ulonglong *)(*(longlong *)(lVar15 + 8) + 0x20), uVar12 != 0)))) {
      if ((*(char *)(uVar12 + 0x10) != '\x06') || (uStack_288._4_2_ == -2)) goto LAB_140105934;
      uVar25 = func_0x0001403dc2f0();
      if ((uVar25 != 0xffff) && (uVar25 < *(ushort *)(uVar12 + 0x9a))) {
        fVar60 = 0.0;
        uVar12 = *(ulonglong *)(*(longlong *)(uVar12 + 0x70) + (ulonglong)uVar25 * 8);
        if (uVar12 != 0) goto LAB_140105a42;
      }
    }
    if (((*(ulonglong *)(param_1 + 0x1190) & 0x100000000) == 0) ||
       (lVar15 = FUN_145723b00(param_1), lVar15 != 0)) {
      fVar60 = 0.0;
      if ((longlong)*(short *)(param_1 + 0x11ae) != -1) {
        lVar13 = *(longlong *)(lVar13 + 0x1a8);
        uVar25 = *(ushort *)
                  (*(longlong *)(lVar13 + 0x20) + 0x1a +
                  (longlong)*(short *)(param_1 + 0x11ae) * 0x70);
        if ((uVar25 != 0xffff) &&
           (uVar12 = (ulonglong)
                     *(ushort *)
                      (*(longlong *)(lVar13 + 0x28) + 0x4a + (ulonglong)((uint)uVar25 * 0x50)),
           uVar12 != 0xffff)) {
          uVar12 = *(ulonglong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x20) + 0x70) +
                    uVar12 * 8);
          goto LAB_140105a42;
        }
      }
      uVar12 = 0;
      goto LAB_140105a42;
    }
    uVar12 = *(longlong *)(param_2 + 0x28) + 0xfU & 0xfffffffffffffff0;
    if ((*(ulonglong *)(param_2 + 0x38) < uVar12 + 0x80) ||
       (*(ulonglong *)(param_2 + 0x28) = uVar12 + 0x80, uVar12 == 0)) {
      uVar12 = 0;
    }
    else {
      FUN_1447c2a60(uVar12);
    }
    auStack_f8._4_4_ = _DAT_146159fa0;
    auStack_f8._0_4_ = _DAT_146159fa0;
    auStack_f8._8_4_ = _DAT_146159fa0;
    auStack_f8._12_4_ = _DAT_146159fa0;
    func_0x000142117140(uVar12);
    fVar60 = *(float *)(param_1 + 0x1290) + _DAT_14615bcb4;
    auStack_108._4_4_ = fVar60;
    auStack_108._0_4_ = fVar60;
    auStack_108._8_4_ = fVar60;
    auStack_108._12_4_ = fVar60;
    func_0x00014101e730(uVar12);
  }
  else {
    uVar12 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(*(longlong *)(lVar13 + 8) + 0x20) + 0x70) +
              (ulonglong)uVar25 * 8);
  }
LAB_140105934:
  fVar60 = 0.0;
LAB_140105a42:
  lVar13 = *(longlong *)(param_1 + 0x1180);
  auVar96 = ZEXT1664(CONCAT412(fStack_1ec,CONCAT48(fStack_1f0,CONCAT44(fStack_1f4,fStack_1f8))));
  auVar35._0_12_ = ZEXT812(0);
  auVar35._12_4_ = 0;
  pfVar5 = *(float **)(param_2 + 0x10);
  fVar48 = *(float *)(lVar13 + 0x10);
  fVar100 = *(float *)(lVar13 + 0x14);
  fVar101 = *(float *)(lVar13 + 0x18);
  fVar102 = *(float *)(lVar13 + 0x1c);
  fVar30 = *pfVar5;
  fVar84 = pfVar5[1];
  fVar97 = pfVar5[2];
  fVar98 = pfVar5[3];
  fVar67 = pfVar5[4];
  fVar70 = pfVar5[5];
  fVar77 = pfVar5[6];
  fVar80 = pfVar5[7];
  fVar103 = pfVar5[8];
  fVar63 = pfVar5[9];
  fVar65 = pfVar5[10];
  fVar66 = pfVar5[0xb];
  auVar31._0_4_ = fVar48 * fStack_1f8;
  auVar31._4_4_ = fVar100 * fStack_1f4;
  auVar31._8_4_ = fVar101 * fStack_1f0;
  auVar31._12_4_ = fVar102 * fStack_1ec;
  auVar31 = vblendps_avx(auVar31,auVar35,8);
  auVar31 = vhaddps_avx(auVar31,auVar31);
  auVar31 = vhaddps_avx(auVar31,auVar31);
  auVar73 = ZEXT1664(auVar31);
  fVar83 = (float)((uint)(*(float *)(param_1 + 0x388) * pfVar5[2] +
                         *(float *)(param_1 + 900) * pfVar5[1] +
                         fVar30 * *(float *)(param_1 + 0x380)) & _DAT_145fc6f4c);
  uStack_220 = uVar12;
  fStack_2b4 = (float)FUN_14518e0c0(param_1);
  uVar27 = uStack_298;
  lVar15 = lStack_2a0;
  fStack_2a4 = *(float *)(param_1 + 0xa7c + (ulonglong)(_DAT_14615a608 < fVar83) * 4);
  if (auVar73._0_4_ <= 0.0) {
    fStack_2a8 = 0.0;
    fVar83 = *(float *)(param_1 + 0x904);
    fVar105 = 0.0;
    fVar108 = 0.0;
    fVar109 = 0.0;
    fVar42 = 0.0;
  }
  else {
    auVar40._0_12_ = ZEXT812(0);
    auVar40._12_4_ = 0;
    fVar42 = _DAT_145fc6ed8 / auVar73._0_4_;
    auVar31 = vmaxss_avx(auVar40,ZEXT416((uint)(fStack_2a4 - *(float *)(param_1 + 0x1290))));
    fStack_2a8 = auVar31._0_4_ * fVar42;
    fVar83 = fStack_2a8 + *(float *)(param_1 + 0x904);
    auVar31 = vmaxss_avx(auVar40,ZEXT416((uint)(((fStack_2a4 + *(float *)(lVar13 + 0x6c)) -
                                                *(float *)(lVar13 + 0x30)) * fVar42)));
    fVar42 = auVar31._0_4_;
    fVar105 = fVar48 * fVar42;
    fVar108 = fVar100 * fVar42;
    fVar109 = fVar101 * fVar42;
    fVar42 = fVar102 * fVar42;
  }
  fVar54 = fVar60 * _DAT_146159c48;
  auVar49._0_4_ = (uint)(fVar54 + (float)((uint)_DAT_145fc6edc | (uint)fVar54 & _DAT_145fc6f10));
  auVar49._4_4_ = (uint)(fVar54 + (float)((uint)_DAT_145fc6edc | (uint)fVar54 & _DAT_145fc6f10));
  auVar49._8_4_ = (uint)(fVar54 + (float)((uint)_DAT_145fc6edc | (uint)fVar54 & _DAT_145fc6f10));
  auVar49._12_4_ = (uint)(fVar54 + (float)((uint)_DAT_145fc6edc | (uint)fVar54 & _DAT_145fc6f10));
  auVar31 = vcvtdq2ps_avx(auVar49);
  fVar54 = auVar31._0_4_ * _DAT_146159b50 + auVar31._0_4_ * _DAT_146159b4c + fVar60;
  fVar58 = auVar31._4_4_ * _DAT_146159b50 + auVar31._4_4_ * _DAT_146159b4c + fVar60;
  fVar59 = auVar31._8_4_ * _DAT_146159b50 + auVar31._8_4_ * _DAT_146159b4c + fVar60;
  fVar60 = auVar31._12_4_ * _DAT_146159b50 + auVar31._12_4_ * _DAT_146159b4c + fVar60;
  fVar68 = fVar54 * fVar54;
  fVar75 = fVar58 * fVar58;
  fVar78 = fVar59 * fVar59;
  fVar81 = fVar60 * fVar60;
  auVar85._0_4_ =
       fVar68 * (fVar68 * (fVar68 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar85._4_4_ =
       fVar75 * (fVar75 * (fVar75 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar85._8_4_ =
       fVar78 * (fVar78 * (fVar78 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar85._12_4_ =
       fVar81 * (fVar81 * (fVar81 * _DAT_146159b58 + _DAT_146159b54) + _DAT_146159b64) +
       _DAT_145fc6ed8;
  auVar71._0_4_ = fVar68 * fVar54;
  auVar71._4_4_ = fVar75 * fVar58;
  auVar71._8_4_ = fVar78 * fVar59;
  auVar71._12_4_ = fVar81 * fVar60;
  auVar41 = ZEXT416(0) << 0x20;
  auVar93._0_4_ =
       auVar71._0_4_ * (fVar68 * (fVar68 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar54;
  auVar93._4_4_ =
       auVar71._4_4_ * (fVar75 * (fVar75 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar58;
  auVar93._8_4_ =
       auVar71._8_4_ * (fVar78 * (fVar78 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar59;
  auVar93._12_4_ =
       auVar71._12_4_ * (fVar81 * (fVar81 * _DAT_146159b60 + _DAT_146159b5c) + _DAT_146159b68) +
       fVar60;
  auVar55._0_4_ = auVar49._0_4_ & _DAT_145f43778;
  auVar55._4_4_ = auVar49._4_4_ & _DAT_145f43778;
  auVar55._8_4_ = auVar49._8_4_ & _DAT_145f43778;
  auVar55._12_4_ = auVar49._12_4_ & _DAT_145f43778;
  auVar31 = vpcmpeqd_avx(auVar71,auVar71);
  auVar35 = vpcmpeqd_avx(auVar41,auVar55);
  auVar40 = vpsubd_avx(auVar41,auVar55);
  auVar55 = vpsubd_avx(auVar49,auVar31);
  auVar31 = vblendvps_avx(auVar85,auVar93,auVar35);
  auVar35 = vblendvps_avx(auVar85,auVar93,auVar40);
  auVar86._4_4_ = _DAT_145f43774;
  auVar86._0_4_ = _DAT_145f43774;
  auVar86._8_4_ = _DAT_145f43774;
  auVar86._12_4_ = _DAT_145f43774;
  auVar40 = vpand_avx(auVar55,auVar86);
  auVar55 = vpand_avx(auVar86,auVar49);
  auVar87._0_4_ = auVar31._0_4_ ^ _DAT_145fc6f10;
  auVar87._4_4_ = auVar31._4_4_ ^ _DAT_145fc6f10;
  auVar87._8_4_ = auVar31._8_4_ ^ _DAT_145fc6f10;
  auVar87._12_4_ = auVar31._12_4_ ^ _DAT_145fc6f10;
  auVar43._0_4_ = auVar35._0_4_ ^ _DAT_145fc6f10;
  auVar43._4_4_ = auVar35._4_4_ ^ _DAT_145fc6f10;
  auVar43._8_4_ = auVar35._8_4_ ^ _DAT_145fc6f10;
  auVar43._12_4_ = auVar35._12_4_ ^ _DAT_145fc6f10;
  auVar40 = vpcmpeqd_avx(auVar40,auVar41);
  auVar55 = vpcmpeqd_avx(auVar41,auVar55);
  auVar35 = vblendvps_avx(auVar43,auVar35,auVar40);
  auVar74 = ZEXT1664(auVar35);
  auVar31 = vblendvps_avx(auVar87,auVar31,auVar55);
  auVar73 = ZEXT1664(auVar31);
  fVar69 = auVar35._0_4_;
  fVar76 = auVar35._4_4_;
  fVar79 = auVar35._8_4_;
  fVar82 = auVar35._12_4_;
  fVar68 = auVar31._0_4_;
  auVar44._0_4_ = fStack_1b8 * fVar68 + fVar69 * fStack_1c8;
  fVar75 = auVar31._4_4_;
  auVar44._4_4_ = fStack_1b4 * fVar75 + fVar76 * fStack_1c4;
  fVar78 = auVar31._8_4_;
  auVar44._8_4_ = fStack_1b0 * fVar78 + fVar79 * fStack_1c0;
  fVar81 = auVar31._12_4_;
  auVar44._12_4_ = fStack_1ac * fVar81 + fVar82 * fStack_1bc;
  auVar41._0_4_ = -(fVar68 * fStack_1c8) + fVar69 * fStack_1b8;
  auVar41._4_4_ = -(fVar75 * fStack_1c4) + fVar76 * fStack_1b4;
  auVar41._8_4_ = -(fVar78 * fStack_1c0) + fVar79 * fStack_1b0;
  auVar41._12_4_ = -(fVar81 * fStack_1bc) + fVar82 * fStack_1ac;
  auVar31 = vshufps_avx(auVar44,auVar44,0x55);
  auVar35 = vshufps_avx(auVar41,auVar41,0x55);
  auVar40 = vshufps_avx(auVar41,auVar41,0xaa);
  fStack_238 = auVar96._0_4_;
  fVar60 = fStack_238;
  fStack_234 = auVar96._4_4_;
  fVar54 = fStack_234;
  fStack_230 = auVar96._8_4_;
  fVar58 = fStack_230;
  fStack_22c = auVar96._12_4_;
  fVar59 = fStack_22c;
  fStack_234 = fVar108;
  fStack_238 = fVar105;
  fStack_230 = fVar109;
  fStack_22c = fVar42;
  auVar55 = vshufps_avx(auVar44,auVar44,0xaa);
  auVar32._0_4_ = fVar83 * fVar48 + fVar105 + fStack_1e8;
  auVar32._4_4_ = fVar83 * fVar100 + fVar108 + fStack_1e4;
  auVar32._8_4_ = fVar83 * fVar101 + fVar109 + fStack_1e0;
  auVar32._12_4_ = fVar83 * fVar102 + fVar42 + fStack_1dc;
  uStack_288 = CONCAT44(fVar63 * fStack_1d0 + fVar70 * fStack_1d4 + fVar84 * fStack_1d8,
                        fVar103 * fStack_1d0 + fVar67 * fStack_1d4 + fVar30 * fStack_1d8);
  uStack_280 = CONCAT44(fVar66 * fStack_1d0 + fVar80 * fStack_1d4 + fVar98 * fStack_1d8,
                        fVar65 * fStack_1d0 + fVar77 * fStack_1d4 + fVar97 * fStack_1d8);
  auVar36._0_4_ = fVar60 * fVar68 + fVar69 * fStack_208;
  auVar36._4_4_ = fVar54 * fVar75 + fVar76 * fStack_204;
  auVar36._8_4_ = fVar58 * fVar78 + fVar79 * fStack_200;
  auVar36._12_4_ = fVar59 * fVar81 + fVar82 * fStack_1fc;
  uStack_278 = (undefined1 *)
               CONCAT44(fVar63 * auVar55._4_4_ + fVar70 * auVar31._4_4_ + auVar44._0_4_ * fVar84,
                        fVar103 * auVar55._0_4_ + fVar67 * auVar31._0_4_ + auVar44._0_4_ * fVar30);
  uStack_270 = (float *)CONCAT44(fVar66 * auVar55._12_4_ +
                                 fVar80 * auVar31._12_4_ + auVar44._0_4_ * fVar98,
                                 fVar65 * auVar55._8_4_ +
                                 fVar77 * auVar31._8_4_ + auVar44._0_4_ * fVar97);
  uStack_268 = (float *)CONCAT44(fVar63 * auVar40._4_4_ +
                                 fVar70 * auVar35._4_4_ + auVar41._0_4_ * fVar84,
                                 fVar103 * auVar40._0_4_ +
                                 fVar67 * auVar35._0_4_ + auVar41._0_4_ * fVar30);
  uStack_260 = (float *)CONCAT44(fVar66 * auVar40._12_4_ +
                                 fVar80 * auVar35._12_4_ + auVar41._0_4_ * fVar98,
                                 fVar65 * auVar40._8_4_ +
                                 fVar77 * auVar35._8_4_ + auVar41._0_4_ * fVar97);
  auVar50._0_4_ = -(fVar68 * fStack_208) + fVar69 * fVar60;
  auVar50._4_4_ = -(fVar75 * fStack_204) + fVar76 * fVar54;
  auVar50._8_4_ = -(fVar78 * fStack_200) + fVar79 * fVar58;
  auVar50._12_4_ = -(fVar81 * fStack_1fc) + fVar82 * fVar59;
  auVar31 = vshufps_avx(auVar36,auVar36,0x55);
  auVar35 = vshufps_avx(auVar50,auVar50,0x55);
  auStack_258._4_4_ = fVar63 * fStack_1a0 + fVar70 * fStack_1a4 + fVar84 * fStack_1a8 + pfVar5[0xd];
  auStack_258._0_4_ = fVar103 * fStack_1a0 + fVar67 * fStack_1a4 + fVar30 * fStack_1a8 + pfVar5[0xc]
  ;
  uStack_250._0_4_ = fVar65 * fStack_1a0 + fVar77 * fStack_1a4 + fVar97 * fStack_1a8 + pfVar5[0xe];
  uStack_250._4_4_ = fVar66 * fStack_1a0 + fVar80 * fStack_1a4 + fVar98 * fStack_1a8 + pfVar5[0xf];
  fVar60 = *pfVar5;
  fVar30 = pfVar5[1];
  fVar84 = pfVar5[2];
  fVar97 = pfVar5[3];
  fVar98 = pfVar5[4];
  fVar48 = pfVar5[5];
  fVar100 = pfVar5[6];
  fVar101 = pfVar5[7];
  auVar40 = vshufps_avx(auVar36,auVar36,0xaa);
  auVar55 = vshufps_avx(auVar50,auVar50,0xaa);
  auVar41 = vshufps_avx(auVar32,auVar32,0x55);
  auVar43 = vshufps_avx(auVar32,auVar32,0xaa);
  fVar102 = pfVar5[8];
  fVar103 = pfVar5[9];
  fVar63 = pfVar5[10];
  fVar65 = pfVar5[0xb];
  auStack_178._0_4_ = fVar102 * fStack_210 + fVar98 * fStack_214 + fVar60 * fStack_218;
  auStack_178._4_4_ = fVar103 * fStack_210 + fVar48 * fStack_214 + fVar30 * fStack_218;
  fStack_170 = fVar63 * fStack_210 + fVar100 * fStack_214 + fVar84 * fStack_218;
  fStack_16c = fVar65 * fStack_210 + fVar101 * fStack_214 + fVar97 * fStack_218;
  auStack_168._0_4_ = fVar102 * auVar40._0_4_ + fVar98 * auVar31._0_4_ + fVar60 * auVar36._0_4_;
  auStack_168._4_4_ = fVar103 * auVar40._4_4_ + fVar48 * auVar31._4_4_ + fVar30 * auVar36._0_4_;
  fStack_160 = fVar63 * auVar40._8_4_ + fVar100 * auVar31._8_4_ + fVar84 * auVar36._0_4_;
  fStack_15c = fVar65 * auVar40._12_4_ + fVar101 * auVar31._12_4_ + fVar97 * auVar36._0_4_;
  fStack_158 = fVar102 * auVar55._0_4_ + fVar98 * auVar35._0_4_ + auVar50._0_4_ * fVar60;
  fStack_154 = fVar103 * auVar55._4_4_ + fVar48 * auVar35._4_4_ + auVar50._0_4_ * fVar30;
  fStack_150 = fVar63 * auVar55._8_4_ + fVar100 * auVar35._8_4_ + auVar50._0_4_ * fVar84;
  fStack_14c = fVar65 * auVar55._12_4_ + fVar101 * auVar35._12_4_ + auVar50._0_4_ * fVar97;
  auStack_148._4_4_ =
       fVar103 * auVar43._4_4_ + fVar48 * auVar41._4_4_ + fVar30 * auVar32._0_4_ + pfVar5[0xd];
  auStack_148._0_4_ =
       fVar102 * auVar43._0_4_ + fVar98 * auVar41._0_4_ + fVar60 * auVar32._0_4_ + pfVar5[0xc];
  uStack_140._0_4_ =
       fVar63 * auVar43._8_4_ + fVar100 * auVar41._8_4_ + fVar84 * auVar32._0_4_ + pfVar5[0xe];
  uStack_140._4_4_ =
       fVar65 * auVar43._12_4_ + fVar101 * auVar41._12_4_ + fVar97 * auVar32._0_4_ + pfVar5[0xf];
  uVar9 = func_0x0001455ad5e0((int)*(short *)(param_1 + 0x11a0),0);
  uVar12 = uStack_220;
  FUN_144fad5f0(lStack_2b0,uVar9,uStack_220,&uStack_288,auStack_178,uVar27,lVar15,1);
  uStack_118 = auStack_148;
  uStack_110 = uStack_140;
  FUN_14555faa0(param_1,&uStack_118,&uStack_288,param_1 + 0x9d0);
  fVar60 = *(float *)(param_1 + 0x908);
  cVar8 = FUN_140104a30(param_1);
  uVar27 = uStack_298;
  lVar15 = lStack_2a0;
  lVar13 = lStack_2b0;
  if (param_3 != (float *)0x0 && cVar8 == '\x01') {
    lVar6 = *(longlong *)(param_1 + 0x1180);
    fVar84 = param_3[4];
    fVar97 = param_3[5];
    fVar98 = param_3[6];
    fVar48 = param_3[7];
    auStack_138 = auVar73._0_16_;
    fVar30 = *(float *)(lVar6 + 0x6c) - *(float *)(lVar6 + 0x30);
    fVar70 = auVar74._0_4_;
    fVar77 = auVar74._4_4_;
    fVar80 = auVar74._8_4_;
    fVar83 = auVar74._12_4_;
    fVar63 = auVar73._0_4_;
    auVar88._0_4_ = fStack_1b8 * fVar63 + fVar70 * fStack_1c8;
    fVar65 = auVar73._4_4_;
    auVar88._4_4_ = fStack_1b4 * fVar65 + fVar77 * fStack_1c4;
    fVar66 = auVar73._8_4_;
    auVar88._8_4_ = fStack_1b0 * fVar66 + fVar80 * fStack_1c0;
    fVar67 = auVar73._12_4_;
    auVar88._12_4_ = fStack_1ac * fVar67 + fVar83 * fStack_1bc;
    fVar100 = param_3[8];
    fVar101 = param_3[9];
    fVar102 = param_3[10];
    fVar103 = param_3[0xb];
    auVar106._0_4_ = -(fVar63 * fStack_1c8) + fVar70 * fStack_1b8;
    auVar106._4_4_ = -(fVar65 * fStack_1c4) + fVar77 * fStack_1b4;
    auVar106._8_4_ = -(fVar66 * fStack_1c0) + fVar80 * fStack_1b0;
    auVar106._12_4_ = -(fVar67 * fStack_1bc) + fVar83 * fStack_1ac;
    auVar37._0_4_ = *(float *)(lVar6 + 0x10) * fVar30 + fStack_1e8;
    auVar37._4_4_ = *(float *)(lVar6 + 0x14) * fVar30 + fStack_1e4;
    auVar37._8_4_ = *(float *)(lVar6 + 0x18) * fVar30 + fStack_1e0;
    auVar37._12_4_ = *(float *)(lVar6 + 0x1c) * fVar30 + fStack_1dc;
    auVar45._0_4_ = fStack_1f8 * fVar63 + fVar70 * fStack_208;
    auVar45._4_4_ = fStack_1f4 * fVar65 + fVar77 * fStack_204;
    auVar45._8_4_ = fStack_1f0 * fVar66 + fVar80 * fStack_200;
    auVar45._12_4_ = fStack_1ec * fVar67 + fVar83 * fStack_1fc;
    auVar56._0_4_ = -(fVar63 * fStack_208) + fVar70 * fStack_1f8;
    auVar56._4_4_ = -(fVar65 * fStack_204) + fVar77 * fStack_1f4;
    auVar56._8_4_ = -(fVar66 * fStack_200) + fVar80 * fStack_1f0;
    auVar56._12_4_ = -(fVar67 * fStack_1fc) + fVar83 * fStack_1ec;
    fVar30 = *param_3;
    fVar63 = param_3[1];
    fVar65 = param_3[2];
    fVar66 = param_3[3];
    auVar64._0_12_ = ZEXT812(0);
    auVar64._12_4_ = 0;
    auVar31 = vshufps_avx(auVar88,auVar88,0x55);
    auVar35 = vshufps_avx(auVar88,auVar88,0xaa);
    auVar40 = vshufps_avx(auVar106,auVar106,0x55);
    auVar55 = vshufps_avx(auVar106,auVar106,0xaa);
    uStack_288 = CONCAT44(fVar101 * fStack_1d0 + fVar97 * fStack_1d4 + fStack_1d8 * fVar63,
                          fVar100 * fStack_1d0 + fVar84 * fStack_1d4 + fStack_1d8 * fVar30);
    uStack_280 = CONCAT44(fVar103 * fStack_1d0 + fVar48 * fStack_1d4 + fStack_1d8 * fVar66,
                          fVar102 * fStack_1d0 + fVar98 * fStack_1d4 + fStack_1d8 * fVar65);
    uStack_278 = (undefined1 *)
                 CONCAT44(fVar101 * auVar35._4_4_ + fVar97 * auVar31._4_4_ + auVar88._0_4_ * fVar63,
                          fVar100 * auVar35._0_4_ + fVar84 * auVar31._0_4_ + auVar88._0_4_ * fVar30)
    ;
    uStack_270 = (float *)CONCAT44(fVar103 * auVar35._12_4_ +
                                   fVar48 * auVar31._12_4_ + auVar88._0_4_ * fVar66,
                                   fVar102 * auVar35._8_4_ +
                                   fVar98 * auVar31._8_4_ + auVar88._0_4_ * fVar65);
    uStack_268 = (float *)CONCAT44(fVar101 * auVar55._4_4_ +
                                   fVar97 * auVar40._4_4_ + auVar106._0_4_ * fVar63,
                                   fVar100 * auVar55._0_4_ +
                                   fVar84 * auVar40._0_4_ + auVar106._0_4_ * fVar30);
    uStack_260 = (float *)CONCAT44(fVar103 * auVar55._12_4_ +
                                   fVar48 * auVar40._12_4_ + auVar106._0_4_ * fVar66,
                                   fVar102 * auVar55._8_4_ +
                                   fVar98 * auVar40._8_4_ + auVar106._0_4_ * fVar65);
    auVar31 = vshufps_avx(auVar45,auVar45,0x55);
    auVar35 = vshufps_avx(auVar45,auVar45,0xaa);
    auVar40 = vshufps_avx(auVar56,auVar56,0x55);
    auVar55 = vshufps_avx(auVar56,auVar56,0xaa);
    auStack_178._4_4_ = fVar101 * fStack_210 + fVar97 * fStack_214 + fStack_218 * fVar63;
    auStack_178._0_4_ = fVar100 * fStack_210 + fVar84 * fStack_214 + fStack_218 * fVar30;
    fStack_170 = fVar102 * fStack_210 + fVar98 * fStack_214 + fStack_218 * fVar65;
    fStack_16c = fVar103 * fStack_210 + fVar48 * fStack_214 + fStack_218 * fVar66;
    auVar41 = vshufps_avx(auVar37,auVar37,0x55);
    auStack_168._4_4_ = fVar101 * auVar35._4_4_ + fVar97 * auVar31._4_4_ + auVar45._0_4_ * fVar63;
    auStack_168._0_4_ = fVar100 * auVar35._0_4_ + fVar84 * auVar31._0_4_ + auVar45._0_4_ * fVar30;
    fStack_160 = fVar102 * auVar35._8_4_ + fVar98 * auVar31._8_4_ + auVar45._0_4_ * fVar65;
    fStack_15c = fVar103 * auVar35._12_4_ + fVar48 * auVar31._12_4_ + auVar45._0_4_ * fVar66;
    fStack_158 = fVar100 * auVar55._0_4_ + fVar84 * auVar40._0_4_ + fVar30 * auVar56._0_4_;
    fStack_154 = fVar101 * auVar55._4_4_ + fVar97 * auVar40._4_4_ + fVar63 * auVar56._0_4_;
    fStack_150 = fVar102 * auVar55._8_4_ + fVar98 * auVar40._8_4_ + fVar65 * auVar56._0_4_;
    fStack_14c = fVar103 * auVar55._12_4_ + fVar48 * auVar40._12_4_ + fVar66 * auVar56._0_4_;
    auVar31 = vshufps_avx(auVar37,auVar37,0xaa);
    pfVar5 = *(float **)(lStack_2b0 + 0x10);
    auVar51._0_4_ =
         auVar31._0_4_ * fVar100 + auVar41._0_4_ * fVar84 + auVar37._0_4_ * fVar30 + param_3[0xc];
    auVar51._4_4_ =
         auVar31._4_4_ * fVar101 + auVar41._4_4_ * fVar97 + auVar37._0_4_ * fVar63 + param_3[0xd];
    auVar51._8_4_ =
         auVar31._8_4_ * fVar102 + auVar41._8_4_ * fVar98 + auVar37._0_4_ * fVar65 + param_3[0xe];
    auVar51._12_4_ =
         auVar31._12_4_ * fVar103 + auVar41._12_4_ * fVar48 + auVar37._0_4_ * fVar66 + param_3[0xf];
    auVar46._0_4_ = fStack_1a0 * fVar100 + fStack_1a4 * fVar84 + fStack_1a8 * fVar30 + param_3[0xc];
    auVar46._4_4_ = fStack_1a0 * fVar101 + fStack_1a4 * fVar97 + fStack_1a8 * fVar63 + param_3[0xd];
    auVar46._8_4_ = fStack_1a0 * fVar102 + fStack_1a4 * fVar98 + fStack_1a8 * fVar65 + param_3[0xe];
    auVar46._12_4_ = fStack_1a0 * fVar103 + fStack_1a4 * fVar48 + fStack_1a8 * fVar66 + param_3[0xf]
    ;
    fVar100 = pfVar5[8];
    fVar101 = pfVar5[9];
    fVar102 = pfVar5[10];
    fVar103 = pfVar5[0xb];
    auVar38._0_4_ =
         fVar100 * auVar31._0_4_ + auVar41._0_4_ * pfVar5[4] + auVar37._0_4_ * *pfVar5 + pfVar5[0xc]
    ;
    auVar38._4_4_ =
         fVar101 * auVar31._4_4_ +
         auVar41._4_4_ * pfVar5[5] + auVar37._0_4_ * pfVar5[1] + pfVar5[0xd];
    auVar38._8_4_ =
         fVar102 * auVar31._8_4_ +
         auVar41._8_4_ * pfVar5[6] + auVar37._0_4_ * pfVar5[2] + pfVar5[0xe];
    auVar38._12_4_ =
         fVar103 * auVar31._12_4_ +
         auVar41._12_4_ * pfVar5[7] + auVar37._0_4_ * pfVar5[3] + pfVar5[0xf];
    auVar33._0_4_ =
         fVar100 * fStack_1a0 + pfVar5[4] * fStack_1a4 + *pfVar5 * fStack_1a8 + pfVar5[0xc];
    auVar33._4_4_ =
         fVar101 * fStack_1a0 + pfVar5[5] * fStack_1a4 + pfVar5[1] * fStack_1a8 + pfVar5[0xd];
    auVar33._8_4_ =
         fVar102 * fStack_1a0 + pfVar5[6] * fStack_1a4 + pfVar5[2] * fStack_1a8 + pfVar5[0xe];
    auVar33._12_4_ =
         fVar103 * fStack_1a0 + pfVar5[7] * fStack_1a4 + pfVar5[3] * fStack_1a8 + pfVar5[0xf];
    auVar31 = vsubps_avx(auVar51,auVar38);
    auVar52._4_4_ = _DAT_146159bfc;
    auVar52._0_4_ = _DAT_146159bfc;
    auVar52._8_4_ = _DAT_146159bfc;
    auVar52._12_4_ = _DAT_146159bfc;
    auVar40 = vsubps_avx(auVar46,auVar33);
    fVar30 = auVar31._0_4_;
    auVar57._0_4_ = fVar30 * fVar100;
    fVar84 = auVar31._4_4_;
    auVar57._4_4_ = fVar84 * fVar101;
    fVar97 = auVar31._8_4_;
    auVar57._8_4_ = fVar97 * fVar102;
    fVar98 = auVar31._12_4_;
    auVar57._12_4_ = fVar98 * fVar103;
    auVar104._0_4_ = fVar30 * fVar30;
    auVar104._4_4_ = fVar84 * fVar84;
    auVar104._8_4_ = fVar97 * fVar97;
    auVar104._12_4_ = fVar98 * fVar98;
    auVar31 = vblendps_avx(auVar57,auVar64,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar55 = vhaddps_avx(auVar31,auVar31);
    auVar107._0_4_ = -(auVar55._0_4_ * fVar100) + fVar30;
    auVar107._4_4_ = -(auVar55._4_4_ * fVar101) + fVar84;
    auVar107._8_4_ = -(auVar55._8_4_ * fVar102) + fVar97;
    auVar107._12_4_ = -(auVar55._12_4_ * fVar103) + fVar98;
    auVar89._0_4_ = auVar107._0_4_ * auVar107._0_4_;
    auVar89._4_4_ = auVar107._4_4_ * auVar107._4_4_;
    auVar89._8_4_ = auVar107._8_4_ * auVar107._8_4_;
    auVar89._12_4_ = auVar107._12_4_ * auVar107._12_4_;
    auVar31 = vblendps_avx(auVar89,auVar64,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar35 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vrsqrtps_avx(auVar35);
    fVar30 = auVar31._0_4_;
    fVar84 = auVar31._4_4_;
    fVar97 = auVar31._8_4_;
    fVar98 = auVar31._12_4_;
    auVar31 = vcmpps_avx(auVar52,auVar35,2);
    auVar90._0_4_ =
         (float)(auVar31._0_4_ &
                (uint)(((_DAT_145fc6f08 * fVar30 * fVar30 * auVar35._0_4_ - _DAT_145fc6f08) * fVar30
                       + fVar30) * auVar35._0_4_));
    auVar90._4_4_ =
         (float)(auVar31._4_4_ &
                (uint)(((_DAT_145fc6f08 * fVar84 * fVar84 * auVar35._4_4_ - _DAT_145fc6f08) * fVar84
                       + fVar84) * auVar35._4_4_));
    auVar90._8_4_ =
         (float)(auVar31._8_4_ &
                (uint)(((_DAT_145fc6f08 * fVar97 * fVar97 * auVar35._8_4_ - _DAT_145fc6f08) * fVar97
                       + fVar97) * auVar35._8_4_));
    auVar90._12_4_ =
         (float)(auVar31._12_4_ &
                (uint)(((_DAT_145fc6f08 * fVar98 * fVar98 * auVar35._12_4_ - _DAT_145fc6f08) *
                        fVar98 + fVar98) * auVar35._12_4_));
    auVar31 = vrcpps_avx(auVar90);
    fVar84 = auVar31._0_4_;
    fVar97 = auVar31._4_4_;
    fVar98 = auVar31._8_4_;
    fVar30 = auVar31._12_4_;
    fVar48 = *(float *)(*(longlong *)(param_1 + 0x1170) + 0x168) * fStack_2b4;
    auVar110._4_4_ = fVar48;
    auVar110._0_4_ = fVar48;
    auVar110._8_4_ = fVar48;
    auVar110._12_4_ = fVar48;
    auVar31 = vcmpps_avx(auVar110,auVar90,1);
    auVar94._0_4_ =
         fVar48 * auVar107._0_4_ * (-((auVar90._0_4_ * fVar84 - _DAT_145fc6ed8) * fVar84) + fVar84);
    auVar94._4_4_ =
         fVar48 * auVar107._4_4_ * (-((auVar90._4_4_ * fVar97 - _DAT_145fc6ed8) * fVar97) + fVar97);
    auVar94._8_4_ =
         fVar48 * auVar107._8_4_ * (-((auVar90._8_4_ * fVar98 - _DAT_145fc6ed8) * fVar98) + fVar98);
    auVar94._12_4_ =
         fVar48 * auVar107._12_4_ *
         (-((auVar90._12_4_ * fVar30 - _DAT_145fc6ed8) * fVar30) + fVar30);
    auVar35 = vblendvps_avx(auVar107,auVar94,auVar31);
    auVar91._0_4_ = auVar40._0_4_ * fVar100;
    auVar91._4_4_ = auVar40._4_4_ * fVar101;
    auVar91._8_4_ = auVar40._8_4_ * fVar102;
    auVar91._12_4_ = auVar40._12_4_ * fVar103;
    auVar31 = vblendps_avx(auVar91,auVar64,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar41 = vhaddps_avx(auVar31,auVar31);
    auVar47._0_4_ = -(auVar41._0_4_ * fVar100) + auVar40._0_4_;
    auVar47._4_4_ = -(auVar41._4_4_ * fVar101) + auVar40._4_4_;
    auVar47._8_4_ = -(auVar41._8_4_ * fVar102) + auVar40._8_4_;
    auVar47._12_4_ = -(auVar41._12_4_ * fVar103) + auVar40._12_4_;
    auVar95._0_4_ = auVar47._0_4_ * auVar47._0_4_;
    auVar95._4_4_ = auVar47._4_4_ * auVar47._4_4_;
    auVar95._8_4_ = auVar47._8_4_ * auVar47._8_4_;
    auVar95._12_4_ = auVar47._12_4_ * auVar47._12_4_;
    auVar31 = vblendps_avx(auVar95,auVar64,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar40 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vrsqrtps_avx(auVar40);
    fVar30 = auVar31._0_4_;
    fVar84 = auVar31._4_4_;
    fVar97 = auVar31._8_4_;
    fVar98 = auVar31._12_4_;
    auVar61._4_4_ = _DAT_146159bfc;
    auVar61._0_4_ = _DAT_146159bfc;
    auVar61._8_4_ = _DAT_146159bfc;
    auVar61._12_4_ = _DAT_146159bfc;
    auVar31 = vcmpps_avx(auVar61,auVar40,2);
    auVar62._0_4_ =
         (float)((uint)(((_DAT_145fc6f08 * fVar30 * fVar30 * auVar40._0_4_ - _DAT_145fc6f08) *
                         fVar30 + fVar30) * auVar40._0_4_) & auVar31._0_4_);
    auVar62._4_4_ =
         (float)((uint)(((_DAT_145fc6f08 * fVar84 * fVar84 * auVar40._4_4_ - _DAT_145fc6f08) *
                         fVar84 + fVar84) * auVar40._4_4_) & auVar31._4_4_);
    auVar62._8_4_ =
         (float)((uint)(((_DAT_145fc6f08 * fVar97 * fVar97 * auVar40._8_4_ - _DAT_145fc6f08) *
                         fVar97 + fVar97) * auVar40._8_4_) & auVar31._8_4_);
    auVar62._12_4_ =
         (float)((uint)(((_DAT_145fc6f08 * fVar98 * fVar98 * auVar40._12_4_ - _DAT_145fc6f08) *
                         fVar98 + fVar98) * auVar40._12_4_) & auVar31._12_4_);
    auVar31 = vrcpps_avx(auVar62);
    fVar30 = auVar31._0_4_;
    fVar84 = auVar31._4_4_;
    fVar97 = auVar31._8_4_;
    fVar98 = auVar31._12_4_;
    auVar99._0_4_ =
         fVar48 * auVar47._0_4_ * (-((auVar62._0_4_ * fVar30 - _DAT_145fc6ed8) * fVar30) + fVar30);
    auVar99._4_4_ =
         fVar48 * auVar47._4_4_ * (-((auVar62._4_4_ * fVar84 - _DAT_145fc6ed8) * fVar84) + fVar84);
    auVar99._8_4_ =
         fVar48 * auVar47._8_4_ * (-((auVar62._8_4_ * fVar97 - _DAT_145fc6ed8) * fVar97) + fVar97);
    auVar99._12_4_ =
         fVar48 * auVar47._12_4_ * (-((auVar62._12_4_ * fVar98 - _DAT_145fc6ed8) * fVar98) + fVar98)
    ;
    auVar74 = ZEXT1664(auVar74._0_16_);
    auVar31 = vblendps_avx(auVar104,auVar64,8);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar43 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vcmpps_avx(auVar110,auVar62,1);
    auVar32 = ZEXT416(0) << 0x20;
    auVar40 = vblendvps_avx(auVar47,auVar99,auVar31);
    auVar31 = vrsqrtss_avx(auVar43,auVar43);
    fVar84 = auVar31._0_4_;
    auVar31 = vminss_avx(auVar32,auVar41);
    fVar48 = auVar31._0_4_;
    auVar31 = vmaxss_avx(auVar32,auVar55);
    fVar30 = auVar31._0_4_;
    auVar34._0_4_ = auVar35._0_4_ + fVar100 * fVar30 + auVar38._0_4_;
    auVar34._4_4_ = auVar35._4_4_ + fVar101 * fVar30 + auVar38._4_4_;
    auVar34._8_4_ = auVar35._8_4_ + fVar102 * fVar30 + auVar38._8_4_;
    auVar34._12_4_ = auVar35._12_4_ + fVar103 * fVar30 + auVar38._12_4_;
    auVar31 = vsubps_avx(auVar34,auVar38);
    auVar39._0_4_ = auVar31._0_4_ * auVar31._0_4_;
    auVar39._4_4_ = auVar31._4_4_ * auVar31._4_4_;
    auVar39._8_4_ = auVar31._8_4_ * auVar31._8_4_;
    auVar39._12_4_ = auVar31._12_4_ * auVar31._12_4_;
    auVar31 = vblendps_avx(auVar39,auVar64,8);
    auVar73 = ZEXT1664(auStack_138);
    auVar31 = vhaddps_avx(auVar31,auVar31);
    auVar55 = vhaddps_avx(auVar31,auVar31);
    auVar31 = vrsqrtss_avx(auVar55,auVar55);
    fVar30 = auVar31._0_4_;
    fVar98 = fVar60 + fStack_2a8;
    auVar31 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar43,2);
    fVar84 = (float)(auVar31._0_4_ &
                    (uint)(((_DAT_145fc6f08 * auVar43._0_4_ * fVar84 * fVar84 + _DAT_145fc6edc) *
                            fVar84 + fVar84) * auVar43._0_4_));
    auVar31 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar55,2);
    auVar35 = vcmpss_avx(auVar32,ZEXT416((uint)fVar84),1);
    *(uint *)(param_1 + 0x970) =
         auVar35._0_4_ &
         (uint)((float)(auVar31._0_4_ &
                       (uint)(((_DAT_145fc6f08 * fVar30 * fVar30 * auVar55._0_4_ + _DAT_145fc6edc) *
                               fVar30 + fVar30) * auVar55._0_4_)) / fVar84);
    fVar30 = *(float *)(lVar6 + 0x10);
    fVar84 = *(float *)(lVar6 + 0x14);
    fVar97 = *(float *)(lVar6 + 0x18);
    auStack_148._4_4_ =
         (param_3[9] * fVar97 + param_3[5] * fVar84 + fVar30 * param_3[1]) * fVar98 + auVar34._4_4_;
    auStack_148._0_4_ =
         (param_3[8] * fVar97 + param_3[4] * fVar84 + fVar30 * *param_3) * fVar98 + auVar34._0_4_;
    uStack_140._0_4_ =
         (param_3[10] * fVar97 + param_3[6] * fVar84 + fVar30 * param_3[2]) * fVar98 + auVar34._8_4_
    ;
    uStack_140._4_4_ =
         (param_3[0xb] * fVar97 + param_3[7] * fVar84 + fVar30 * param_3[3]) * fVar98 +
         auVar34._12_4_;
    fVar30 = *(float *)(lVar6 + 0x10);
    fVar84 = *(float *)(param_1 + 0x1290);
    fVar97 = *(float *)(lVar6 + 0x14);
    fVar98 = *(float *)(lVar6 + 0x18);
    auStack_258._0_4_ =
         (-(param_3[8] * fVar98) - (param_3[4] * fVar97 + fVar30 * *param_3)) * fVar84 +
         fVar100 * fVar48 + auVar33._0_4_ + auVar40._0_4_;
    auStack_258._4_4_ =
         (-(param_3[9] * fVar98) - (param_3[5] * fVar97 + fVar30 * param_3[1])) * fVar84 +
         fVar101 * fVar48 + auVar33._4_4_ + auVar40._4_4_;
    uStack_250._0_4_ =
         (-(param_3[10] * fVar98) - (param_3[6] * fVar97 + fVar30 * param_3[2])) * fVar84 +
         fVar102 * fVar48 + auVar33._8_4_ + auVar40._8_4_;
    uStack_250._4_4_ =
         (-(param_3[0xb] * fVar98) - (param_3[7] * fVar97 + fVar30 * param_3[3])) * fVar84 +
         fVar103 * fVar48 + auVar33._12_4_ + auVar40._12_4_;
    fStack_28c = fVar60;
    uVar9 = func_0x0001455ad5e0((int)*(short *)(param_1 + 0x11a0),4);
    uVar12 = uStack_220;
    FUN_144fad5f0(lVar13,uVar9,uStack_220,&uStack_288,auStack_178,uVar27,lVar15,1);
    uStack_128 = auStack_148;
    uStack_120 = uStack_140;
    FUN_14555faa0(param_1,&uStack_128,&uStack_288,param_1 + 0xa20);
  }
  uVar27 = *(undefined8 *)(param_1 + 0x1190);
  cVar8 = FUN_140104a00(*(undefined4 *)(*(longlong *)(param_1 + 0x1160) + 0x9c),uVar27);
  uVar7 = uStack_298;
  lVar13 = lStack_2a0;
  if (cVar8 != '\0') {
    pfVar5 = *(float **)(lStack_2b0 + 0x10);
    fVar60 = *pfVar5;
    fVar30 = pfVar5[1];
    fVar84 = pfVar5[2];
    fVar97 = pfVar5[3];
    fVar98 = pfVar5[4];
    fVar48 = pfVar5[5];
    fVar100 = pfVar5[6];
    fVar101 = pfVar5[7];
    auVar72._0_4_ = -(fStack_208 * auVar73._0_4_) + auVar74._0_4_ * fStack_1f8;
    auVar72._4_4_ = -(fStack_204 * auVar73._4_4_) + auVar74._4_4_ * fStack_1f4;
    auVar72._8_4_ = -(fStack_200 * auVar73._8_4_) + auVar74._8_4_ * fStack_1f0;
    auVar72._12_4_ = -(fStack_1fc * auVar73._12_4_) + auVar74._12_4_ * fStack_1ec;
    auVar53._0_4_ = fStack_1f8 * auVar73._0_4_ + auVar74._0_4_ * fStack_208;
    auVar53._4_4_ = fStack_1f4 * auVar73._4_4_ + auVar74._4_4_ * fStack_204;
    auVar53._8_4_ = fStack_1f0 * auVar73._8_4_ + auVar74._8_4_ * fStack_200;
    auVar53._12_4_ = fStack_1ec * auVar73._12_4_ + auVar74._12_4_ * fStack_1fc;
    auVar92._0_4_ = fStack_238 + fStack_1e8;
    auVar92._4_4_ = fStack_234 + fStack_1e4;
    auVar92._8_4_ = fStack_230 + fStack_1e0;
    auVar92._12_4_ = fStack_22c + fStack_1dc;
    auVar31 = vshufps_avx(auVar53,auVar53,0x55);
    auVar35 = vshufps_avx(auVar72,auVar72,0x55);
    auVar40 = vshufps_avx(auVar53,auVar53,0xaa);
    auVar55 = vshufps_avx(auVar72,auVar72,0xaa);
    fStack_234 = fStack_214;
    fStack_238 = fStack_214;
    fStack_230 = fStack_214;
    fStack_22c = fStack_214;
    auVar41 = vshufps_avx(auVar92,auVar92,0x55);
    fVar102 = pfVar5[8];
    fVar103 = pfVar5[9];
    fVar63 = pfVar5[10];
    fVar65 = pfVar5[0xb];
    auVar43 = vshufps_avx(auVar92,auVar92,0xaa);
    uStack_288 = CONCAT44(fStack_210 * fVar103 + fStack_214 * fVar48 + fVar30 * fStack_218,
                          fStack_210 * fVar102 + fStack_214 * fVar98 + fVar60 * fStack_218);
    uStack_280 = CONCAT44(fStack_210 * fVar65 + fStack_214 * fVar101 + fVar97 * fStack_218,
                          fStack_210 * fVar63 + fStack_214 * fVar100 + fVar84 * fStack_218);
    uStack_278 = (undefined1 *)
                 CONCAT44(auVar40._4_4_ * fVar103 + auVar31._4_4_ * fVar48 + fVar30 * auVar53._0_4_,
                          auVar40._0_4_ * fVar102 + auVar31._0_4_ * fVar98 + fVar60 * auVar53._0_4_)
    ;
    uStack_270 = (float *)CONCAT44(auVar40._12_4_ * fVar65 +
                                   auVar31._12_4_ * fVar101 + fVar97 * auVar53._0_4_,
                                   auVar40._8_4_ * fVar63 +
                                   auVar31._8_4_ * fVar100 + fVar84 * auVar53._0_4_);
    uStack_268 = (float *)CONCAT44(auVar55._4_4_ * fVar103 +
                                   auVar35._4_4_ * fVar48 + fVar30 * auVar72._0_4_,
                                   auVar55._0_4_ * fVar102 +
                                   auVar35._0_4_ * fVar98 + fVar60 * auVar72._0_4_);
    uStack_260 = (float *)CONCAT44(auVar55._12_4_ * fVar65 +
                                   auVar35._12_4_ * fVar101 + fVar97 * auVar72._0_4_,
                                   auVar55._8_4_ * fVar63 +
                                   auVar35._8_4_ * fVar100 + fVar84 * auVar72._0_4_);
    auStack_258._4_4_ =
         auVar43._4_4_ * fVar103 + auVar41._4_4_ * fVar48 + auVar92._0_4_ * fVar30 + pfVar5[0xd];
    auStack_258._0_4_ =
         auVar43._0_4_ * fVar102 + auVar41._0_4_ * fVar98 + auVar92._0_4_ * fVar60 + pfVar5[0xc];
    uStack_250._0_4_ =
         auVar43._8_4_ * fVar63 + auVar41._8_4_ * fVar100 + auVar92._0_4_ * fVar84 + pfVar5[0xe];
    uStack_250._4_4_ =
         auVar43._12_4_ * fVar65 + auVar41._12_4_ * fVar101 + auVar92._0_4_ * fVar97 + pfVar5[0xf];
    pfVar5 = *(float **)(lStack_2b0 + 0x18);
    fVar60 = *pfVar5;
    fVar30 = pfVar5[1];
    fVar84 = pfVar5[2];
    fVar97 = pfVar5[3];
    fVar98 = pfVar5[4];
    fVar48 = pfVar5[5];
    fVar100 = pfVar5[6];
    fVar101 = pfVar5[7];
    fVar102 = pfVar5[8];
    fVar103 = pfVar5[9];
    fVar63 = pfVar5[10];
    fVar65 = pfVar5[0xb];
    auStack_168._0_4_ = fVar102 * auVar40._0_4_ + fVar98 * auVar31._0_4_ + fVar60 * auVar53._0_4_;
    auStack_168._4_4_ = fVar103 * auVar40._4_4_ + fVar48 * auVar31._4_4_ + fVar30 * auVar53._0_4_;
    fStack_160 = fVar63 * auVar40._8_4_ + fVar100 * auVar31._8_4_ + fVar84 * auVar53._0_4_;
    fStack_15c = fVar65 * auVar40._12_4_ + fVar101 * auVar31._12_4_ + fVar97 * auVar53._0_4_;
    fStack_158 = fVar102 * auVar55._0_4_ + fVar98 * auVar35._0_4_ + fVar60 * auVar72._0_4_;
    fStack_154 = fVar103 * auVar55._4_4_ + fVar48 * auVar35._4_4_ + fVar30 * auVar72._0_4_;
    fStack_150 = fVar63 * auVar55._8_4_ + fVar100 * auVar35._8_4_ + fVar84 * auVar72._0_4_;
    fStack_14c = fVar65 * auVar55._12_4_ + fVar101 * auVar35._12_4_ + fVar97 * auVar72._0_4_;
    auStack_178._0_4_ = fVar102 * fStack_210 + fVar98 * fStack_214 + fVar60 * fStack_218;
    auStack_178._4_4_ = fVar103 * fStack_210 + fVar48 * fStack_214 + fVar30 * fStack_218;
    fStack_170 = fVar63 * fStack_210 + fVar100 * fStack_214 + fVar84 * fStack_218;
    fStack_16c = fVar65 * fStack_210 + fVar101 * fStack_214 + fVar97 * fStack_218;
    auStack_148._0_4_ =
         auVar43._0_4_ * fVar102 + auVar41._0_4_ * fVar98 + auVar92._0_4_ * fVar60 + pfVar5[0xc];
    auStack_148._4_4_ =
         auVar43._4_4_ * fVar103 + auVar41._4_4_ * fVar48 + auVar92._0_4_ * fVar30 + pfVar5[0xd];
    uStack_140._0_4_ =
         auVar43._8_4_ * fVar63 + auVar41._8_4_ * fVar100 + auVar92._0_4_ * fVar84 + pfVar5[0xe];
    uStack_140._4_4_ =
         auVar43._12_4_ * fVar65 + auVar41._12_4_ * fVar101 + auVar92._0_4_ * fVar97 + pfVar5[0xf];
    uVar9 = func_0x0001455ad5e0((int)*(short *)(param_1 + 0x11a0),1);
    FUN_144fad5f0(lStack_2b0,uVar9,uVar12,&uStack_288,auStack_178,uVar7,lVar13,1);
    uVar27 = *(undefined8 *)(param_1 + 0x1190);
  }
  uStack_270 = &fStack_2a4;
  uStack_268 = &fStack_2b4;
  auStack_178._0_4_ = 0x3d4ccccd;
  uStack_17c = 0x3f800000;
  uStack_288 = lStack_2b0;
  uStack_260 = &fStack_1d8;
  plStack_248 = &lStack_2a0;
  uStack_250 = &uStack_298;
  auStack_258 = (undefined1  [8])&uStack_17c;
  uStack_280 = param_1;
  uStack_278 = auStack_178;
  cVar8 = func_0x000144facab0(uVar27,*(undefined8 *)(param_1 + 0x1198));
  if (cVar8 != '\0') {
    FUN_1424f4450(&uStack_288,2);
  }
  cVar8 = FUN_144faca30(param_1);
  if (cVar8 != '\0') {
    auVar73 = ZEXT464((uint)fStack_2b4);
    lVar13 = *(longlong *)(param_1 + 0x1170);
    func_0x0001451ea930(fStack_2b4 + fStack_2b4,lVar13,*(undefined1 *)(param_1 + 0x13c),auStack_180,
                        &fStack_184);
    fVar60 = (float)FUN_144facaf0(*(undefined4 *)(*(longlong *)(param_1 + 0x1180) + 0x18),
                                  auVar73._0_8_,*(undefined4 *)(lVar13 + 0x164));
    auVar31 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)(fStack_184 - fVar60)));
    fStack_2a4 = auVar31._0_4_;
    FUN_1424f4450(&uStack_288,3);
  }
  if (lVar11 != 0 && !bVar28) {
    bVar16 = (byte)*(undefined2 *)(lVar11 + 0x14);
    bVar17 = bVar16 & 0x3f;
    puVar3 = (ulonglong *)
             (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar16 >> 6) * 8);
    *puVar3 = *puVar3 & (-2L << bVar17 | 0xfffffffffffffffeU >> 0x40 - bVar17);
    uVar12 = (ulonglong)(byte)*(undefined2 *)(lVar11 + 0x14);
    LOCK();
    piVar1 = (int *)(uVar12 * 0x18 + 0x14a9b3708);
    iVar21 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar23 = iVar21 - 1;
    if ((char)uVar23 == '\0') {
      lVar13 = uVar12 * 0x18;
      puVar2 = (uint *)(lVar13 + 0x14a9b3708);
      if ((uVar23 & 0xff0000) == 0) {
        if ((uVar23 & 0xff00) != 0) {
          uVar23 = *puVar2;
          do {
            LOCK();
            uVar10 = *puVar2;
            bVar28 = uVar23 == uVar10;
            if (bVar28) {
              *puVar2 = uVar23 & 0xffff00ff;
              uVar10 = uVar23;
            }
            uVar23 = uVar10;
            UNLOCK();
          } while (!bVar28);
          uVar23 = uVar23 >> 8 & 0xff;
          if (uVar23 != 0) {
            plVar24 = (longlong *)(lVar13 + 0x14a9b3710);
            uStack_288 = *(longlong *)(lVar13 + 0x14a9b3710);
            do {
              while (-1 < (longlong)uStack_288) {
                LOCK();
                lVar13 = *plVar24;
                if (uStack_288 == lVar13) {
                  *plVar24 = uStack_288 + ((ulonglong)uVar23 << 0x20);
                  lVar13 = uStack_288;
                }
                UNLOCK();
                bVar28 = uStack_288 == lVar13;
                uStack_288 = lVar13;
                if (bVar28) goto LAB_140106775;
              }
              cVar8 = FUN_1400062d0(plVar24,uVar23);
            } while (cVar8 == '\0');
          }
        }
      }
      else {
        plVar24 = (longlong *)(lVar13 + 0x14a9b3718);
        do {
          if ((uVar23 & 0xff0000) == 0) break;
          LOCK();
          uVar10 = *puVar2;
          bVar28 = uVar23 == uVar10;
          if (bVar28) {
            *puVar2 = uVar23 - 0x10000;
            uVar10 = uVar23;
          }
          UNLOCK();
          if (bVar28) {
            uStack_288 = *plVar24;
            do {
              while (-1 < (longlong)uStack_288) {
                LOCK();
                lVar13 = *plVar24;
                if (uStack_288 == lVar13) {
                  *plVar24 = uStack_288 + 0x100000000;
                  lVar13 = uStack_288;
                }
                UNLOCK();
                bVar29 = uStack_288 == lVar13;
                uVar10 = uVar23;
                uStack_288 = lVar13;
                if (bVar29) goto LAB_140106925;
              }
              cVar8 = FUN_1400062d0(plVar24,1);
              uVar10 = uVar23;
            } while (cVar8 == '\0');
          }
LAB_140106925:
          uVar23 = uVar10;
        } while (!bVar28);
      }
    }
LAB_140106775:
    uVar4 = *(ushort *)(lVar11 + 0x14);
    sVar18 = *(byte *)(lVar11 + 0x15) - 1;
    bVar17 = (byte)sVar18;
    LOCK();
    uVar25 = *(ushort *)(lVar11 + 0x14);
    bVar28 = uVar4 == uVar25;
    if (bVar28) {
      *(ushort *)(lVar11 + 0x14) =
           (ushort)(byte)(-(bVar17 == 0) | *(byte *)(lVar11 + 0x14)) | sVar18 * 0x100;
      uVar25 = uVar4;
    }
    uVar23 = (uint)uVar25;
    UNLOCK();
    while (!bVar28) {
      uVar25 = (ushort)uVar23 & 0xff;
      bVar17 = (char)(uVar23 >> 8) - 1;
      if (bVar17 == 0) {
        uVar25 = 0xff;
      }
      LOCK();
      uVar4 = *(ushort *)(lVar11 + 0x14);
      bVar28 = (ushort)uVar23 == uVar4;
      if (bVar28) {
        *(ushort *)(lVar11 + 0x14) = uVar25 | (ushort)bVar17 << 8;
      }
      else {
        uVar23 = (uint)uVar4;
      }
      UNLOCK();
    }
    if (bVar17 == 0) {
      uVar20 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
      uVar26 = _DAT_14a9b3da8 >> 0x30;
      uVar19 = _DAT_14a9b3da8 & 0xffffffff;
      do {
        *(short *)(uVar12 * 2 + 0x14a9b3d20) = (short)uVar20;
        uVar14 = uVar19 & 0xffffffff;
        uVar19 = (uVar20 & 0xffff) << 0x20 | uVar26 << 0x30 | uVar14;
        LOCK();
        bVar28 = uVar19 != _DAT_14a9b3da8;
        uVar26 = uVar20 << 0x30 | uVar12 << 0x20 | uVar14;
        if (bVar28) {
          uVar19 = _DAT_14a9b3da8;
          uVar26 = _DAT_14a9b3da8;
        }
        _DAT_14a9b3da8 = uVar26;
        UNLOCK();
        uVar20 = uVar19 >> 0x20;
        uVar26 = uVar19 >> 0x30;
      } while (bVar28);
    }
  }
  return;
}

