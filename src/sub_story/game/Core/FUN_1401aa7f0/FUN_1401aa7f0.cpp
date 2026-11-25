// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aa7f0  size: 4915 bytes
// Name:    FUN_1401aa7f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1420b0210, FUN_140a3b040, FUN_145360210, FUN_140c4e860, FUN_1401a8bc0, FUN_144e76200, FUN_141fb38e0, FUN_140b2c7d0, FUN_140b2b510, FUN_140b2c820, FUN_144d9d7a0, FUN_140313300, FUN_140b2cb00, FUN_144efd1d0, FUN_140b2b210, FUN_144dd7510, FUN_1419eecd0, FUN_1428e1880, FUN_1451d02f0, FUN_1440f8a80, FUN_1452b2cb0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401aa7f0(longlong param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  float *pfVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  uint *puVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  undefined8 uVar37;
  undefined1 auVar38 [64];
  undefined1 in_ZMM9 [64];
  undefined1 auVar39 [64];
  float fVar40;
  undefined1 auVar42 [64];
  float fVar43;
  undefined1 auVar44 [64];
  uint uStack_29c;
  longlong lStack_298;
  char cStack_289;
  float *pfStack_288;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined1 uStack_271;
  uint *puStack_270;
  uint *puStack_268;
  float *pfStack_260;
  float afStack_258 [3];
  int iStack_24c;
  uint auStack_248 [6];
  int iStack_230;
  uint *apuStack_228 [3];
  float *pfStack_210;
  float **ppfStack_208;
  undefined1 *puStack_200;
  undefined1 auStack_1f8 [16];
  uint *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_b8 [16];
  undefined1 auVar41 [64];
  
  auStack_b8 = in_ZMM9._0_16_;
  if (_DAT_1499aaab4 == 0) {
    return;
  }
  pfVar22 = *(float **)(param_1 + 8);
  pfStack_260 = pfVar22;
  if (pfVar22 == (float *)0x0) {
    uStack_27c = 0;
  }
  else {
    lVar10 = FUN_144dd7510(pfVar22[0x27]);
    uStack_27c = (undefined4)CONCAT71((int7)((ulonglong)lVar10 >> 8),lVar10 != 0);
  }
  lVar10 = FUN_144efd1d0(pfVar22,0);
  uVar15 = 0;
  if (lVar10 != 0) {
    lVar10 = func_0x000145112f90();
    if ((lVar10 == 0) || (lVar10 = *(longlong *)(lVar10 + 0x10), lVar10 == 0)) {
      uVar15 = 0;
    }
    else {
      uVar15 = (undefined4)
               CONCAT71((int7)((ulonglong)(longlong)*(float *)(lVar10 + 0xb8) >> 8),
                        *(int *)(lVar10 + 0xa0) != (int)(longlong)*(float *)(lVar10 + 0xb8));
    }
  }
  puStack_270 = (uint *)CONCAT44(puStack_270._4_4_,uVar15);
  lStack_298 = param_1;
  pfStack_288 = pfVar22;
  plVar11 = (longlong *)FUN_144e76200();
  cStack_289 = (**(code **)(*plVar11 + 0xf0))(plVar11);
  pfVar22 = pfStack_288;
  iStack_230 = 0;
  iStack_24c = 0;
  if ((ulonglong)_DAT_1499aaab4 != 0) {
    lVar10 = 0;
    iVar9 = 0;
    iVar24 = 0;
    do {
      iVar18 = 3;
      if (iVar24 != 3) {
        uVar20 = *(uint *)(_DAT_1499aaab8 + 0xc + lVar10);
        uVar19 = (ulonglong)uVar20 & 0x1ffff;
        if ((uVar19 == 0x1ffff) ||
           (plVar11 = *(longlong **)((ulonglong)(uVar20 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
           plVar11 == (longlong *)0x0)) {
          lVar23 = 0;
        }
        else {
          uVar8 = *(uint *)(plVar11[5] + uVar19 * 4);
          lVar23 = (ulonglong)(uint)((int)plVar11[1] * (int)uVar19) + *plVar11;
          if (uVar20 >> 0x16 != (uVar8 >> 0x11 & 0x3ff) ||
              (uVar8 & *(uint *)(plVar11 + 6)) != *(uint *)(plVar11 + 6)) {
            lVar23 = 0;
          }
        }
        iVar18 = iVar24 + 1;
        iStack_230 = iVar18;
        *(longlong *)(auStack_248 + (longlong)iVar24 * 2) = lVar23;
        iStack_24c = iVar9 + 1;
        afStack_258[iVar9] = 0.0;
        iVar9 = iVar9 + 1;
      }
      lVar10 = lVar10 + 0x70;
      iVar24 = iVar18;
    } while ((ulonglong)_DAT_1499aaab4 * 0x70 - lVar10 != 0);
  }
  uVar20 = 3;
  if (_DAT_1499aaab4 < 3) {
    uVar20 = _DAT_1499aaab4;
  }
  uStack_29c = uVar20;
  lVar23 = func_0x000144ef6280();
  lVar10 = lStack_298;
  if (lVar23 == 0) {
    bVar5 = 0;
LAB_1401aaa38:
    if (((char)puStack_270 == '\0' && bVar5 == 0) &&
       ((((*(short *)(lStack_298 + 0x28) != 0 || (*(short *)(lStack_298 + 0x18) != 0)) ||
         (*(short *)(lStack_298 + 0x38) != 0)) &&
        ((cVar6 = FUN_1401a8bc0(), cVar6 != '\0' && (cVar6 = FUN_141fb38e0(), cVar6 == '\0')))))) {
      uStack_f8 = *(undefined8 *)(pfVar22 + 0x1c);
      uStack_f0 = *(undefined8 *)(pfVar22 + 0x1e);
      func_0x000144dc3790(&uStack_f8,auStack_1f8);
      uVar2 = *(ushort *)(lVar10 + 0x18);
      apuStack_228[0] = (uint *)auStack_1f8;
      apuStack_228[1] = &uStack_29c;
      apuStack_228[2] = auStack_248;
      pfStack_210 = afStack_258;
      ppfStack_208 = &pfStack_260;
      puStack_200 = &uStack_271;
      uStack_271 = uVar2 != 0;
      fVar36 = _DAT_14615dd8c;
      if (((~(uint)pfVar22[0x29] & 0x7ffe) != 0) &&
         (cVar6 = FUN_144d9d7a0(pfVar22[0x28],(uint)pfVar22[0x28] >> 0x10), fVar36 = _DAT_14615dd8c,
         cVar6 != '\0')) {
        fVar36 = _DAT_146159cb0;
      }
      if (*(short *)(lVar10 + 0x28) != 0) {
        uVar19 = 0;
        auVar38 = ZEXT1264(ZEXT812(0));
        fVar30 = _DAT_146159c58;
        do {
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x20) + uVar19 * 8);
          if ((((*(byte *)(lVar10 + 0x91) & 8) == 0) && ((*(byte *)(lVar10 + 0x93) & 0x20) == 0)) &&
             ((cVar6 = func_0x00014068b2e0(), cVar6 != '\0' &&
              (uVar20 = *(uint *)(lVar10 + 0x20), uVar20 != 0x1ffff)))) {
            uVar8 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar20 & 0x1ffff) * 4);
            if ((((~uVar8 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
                ((uVar8 & 0x7fe0000) == (uVar20 & 0xfffe0000))) && (*_DAT_14abb6918 != 0)) {
              lVar25 = *_DAT_14abb6918 + (ulonglong)((uVar20 & 0x1ffff) * (int)_DAT_14abb6918[1]);
              uStack_178 = *(undefined8 *)(lVar25 + 0x70);
              uStack_170 = *(undefined8 *)(lVar25 + 0x78);
              func_0x000144dc3790(&uStack_178,auStack_138);
              auVar32 = vsubps_avx(auStack_138,auStack_1f8);
              auVar31._0_4_ = auVar32._0_4_ * auVar32._0_4_;
              auVar31._4_4_ = auVar32._4_4_ * auVar32._4_4_;
              auVar31._8_4_ = auVar32._8_4_ * auVar32._8_4_;
              auVar31._12_4_ = auVar32._12_4_ * auVar32._12_4_;
              auVar32 = vblendps_avx(auVar31,auVar38._0_16_,8);
              auVar32 = vhaddps_avx(auVar32,auVar32);
              auVar32 = vhaddps_avx(auVar32,auVar32);
              auVar39 = ZEXT1664(auVar32);
              lVar12 = func_0x000145311f50(*(undefined4 *)(lVar25 + 0x9c));
              cVar6 = FUN_1420b0210(lVar25);
              lVar23 = lStack_298;
              if (cVar6 == '\0') {
                if (auVar39._0_4_ < fVar36) {
                  cVar6 = FUN_140c4e860(*(undefined8 *)(lStack_298 + 8),lVar25);
                  lVar10 = *(longlong *)(*(longlong *)(lVar23 + 0x20) + uVar19 * 8);
                  cVar7 = '\x01';
                  if (cVar6 != '\0') goto LAB_1401aac92;
                  uVar20 = *(uint *)(lVar10 + 0x20);
                  if (uVar20 == 0x1ffff) goto LAB_1401aad2b;
                }
                uVar8 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar20 & 0x1ffff) * 4);
                if ((((~uVar8 & *(uint *)(_DAT_14abb6918 + 6)) == 0) &&
                    ((uVar8 & 0x7fe0000) == (uVar20 & 0xfffe0000))) && (*_DAT_14abb6918 != 0)) {
                  lVar23 = *_DAT_14abb6918 +
                           (ulonglong)((uVar20 & 0x1ffff) * (int)_DAT_14abb6918[1]);
                  cVar6 = FUN_1420b0210(lVar23);
                  if (cVar6 == '\0') {
                    pfStack_288 = (float *)CONCAT44(pfStack_288._4_4_,*(undefined4 *)(lVar23 + 0x9c)
                                                   );
                    lVar23 = func_0x000144da10f0();
                    if (lVar23 != 0) {
                      lVar23 = func_0x000144f3ea40(*(undefined8 *)(lVar23 + 0x650),0x1ba);
                      cVar7 = '\x01';
                      if (lVar23 != 0) goto LAB_1401aac92;
                    }
                    lVar23 = *(longlong *)(lStack_298 + 8);
                    lVar12 = func_0x000145311f50((ulonglong)pfStack_288 & 0xffffffff);
                    if ((lVar23 != 0) && (lVar12 != 0)) {
                      cVar6 = FUN_140a3b040(lVar12,lVar23);
                      cVar7 = '\x01';
                      if (cVar6 != '\0') goto LAB_1401aac92;
                    }
                    iVar9 = FUN_1419eecd0(*(undefined8 *)(lStack_298 + 0x10),
                                          *(undefined2 *)(lStack_298 + 0x18));
                    cVar7 = '\x01';
                    if (iVar9 != -1) goto LAB_1401aac92;
                  }
                }
              }
              else {
                cVar7 = '\x01';
                if (fVar30 <= auVar39._0_4_) {
                  if (lVar12 == 0) goto LAB_1401aad2b;
                  cVar7 = FUN_140a3b040(lVar12,pfStack_260);
                }
LAB_1401aac92:
                if (((cVar7 != '\0') && ((*(byte *)(lVar10 + 0x92) & 2) == 0)) &&
                   ((lVar10 = func_0x000144fdf400(*(undefined4 *)(lVar25 + 0x9c)), lVar10 == 0 ||
                    (cVar6 = FUN_1451d02f0(lVar10,pfStack_260), cVar6 == '\0')))) {
                  FUN_1440f8a80(apuStack_228,lVar25);
                }
              }
            }
          }
LAB_1401aad2b:
          uVar19 = uVar19 + 1;
          lVar10 = lStack_298;
        } while (uVar19 < *(ushort *)(lStack_298 + 0x28));
        uVar2 = *(ushort *)(lStack_298 + 0x18);
      }
      uVar20 = (uint)uVar2;
      if (uVar2 != 0) {
        uVar19 = 0;
        do {
          lVar10 = *(longlong *)(lVar10 + 0x10);
          uVar17 = (uint)uVar19;
          uVar8 = *(uint *)(lVar10 + uVar19 * 4);
          if (uVar8 == 0x1ffff) {
LAB_1401aae7e:
            *(short *)(lStack_298 + 0x18) = (short)(uVar20 - 1);
            *(undefined4 *)(lVar10 + (ulonglong)(uVar17 & 0xffff) * 4) =
                 *(undefined4 *)(lVar10 + (ulonglong)(uVar20 - 1 & 0xffff) * 4);
            uVar17 = uVar17 - 1;
          }
          else {
            uVar3 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar8 & 0x1ffff) * 4);
            if ((((~uVar3 & *(uint *)(_DAT_14abb6918 + 6)) != 0) ||
                ((uVar3 & 0x7fe0000) != (uVar8 & 0xfffe0000))) || (*_DAT_14abb6918 == 0))
            goto LAB_1401aae7e;
            lVar10 = *_DAT_14abb6918 + (ulonglong)((uVar8 & 0x1ffff) * (int)_DAT_14abb6918[1]);
            uStack_188 = *(undefined8 *)(lVar10 + 0x70);
            uStack_180 = *(undefined8 *)(lVar10 + 0x78);
            cVar6 = FUN_145360210();
            if (cVar6 == '\0') {
              FUN_1440f8a80(apuStack_228,lVar10);
            }
          }
          uVar20 = (uint)*(ushort *)(lStack_298 + 0x18);
          uVar19 = (ulonglong)(uVar17 + 1);
          lVar10 = lStack_298;
        } while ((int)(uVar17 + 1) < (int)uVar20);
      }
      uVar8 = (uint)*(ushort *)(lVar10 + 0x38);
      uVar20 = uStack_29c;
      if (*(ushort *)(lVar10 + 0x38) != 0) {
        uVar19 = 0;
        do {
          lVar10 = *(longlong *)(lVar10 + 0x30);
          uVar17 = (uint)uVar19;
          uVar20 = *(uint *)(lVar10 + uVar19 * 4);
          uVar19 = (ulonglong)uVar20 & 0x1ffff;
          if (((uVar19 == 0x1ffff) ||
              (plVar11 = *(longlong **)((ulonglong)(uVar20 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
              plVar11 == (longlong *)0x0)) ||
             ((uVar3 = *(uint *)(plVar11[5] + uVar19 * 4), (uVar3 >> 0x11 & 0x3ff) != uVar20 >> 0x16
              || (((uVar3 & *(uint *)(plVar11 + 6)) != *(uint *)(plVar11 + 6) || (*plVar11 == 0)))))
             ) {
            *(short *)(lStack_298 + 0x38) = (short)(uVar8 - 1);
            *(undefined4 *)(lVar10 + (ulonglong)(uVar17 & 0xffff) * 4) =
                 *(undefined4 *)(lVar10 + (ulonglong)(uVar8 - 1 & 0xffff) * 4);
            uVar17 = uVar17 - 1;
          }
          else {
            lVar10 = *plVar11 + (ulonglong)(uint)((int)uVar19 * (int)plVar11[1]);
            uStack_198 = *(undefined8 *)(lVar10 + 0x70);
            uStack_190 = *(undefined8 *)(lVar10 + 0x78);
            cVar6 = FUN_145360210();
            if (cVar6 == '\0') {
              FUN_1440f8a80(apuStack_228,lVar10);
            }
          }
          uVar8 = (uint)*(ushort *)(lStack_298 + 0x38);
          uVar19 = (ulonglong)(uVar17 + 1);
          lVar10 = lStack_298;
          uVar20 = uStack_29c;
        } while ((int)(uVar17 + 1) < (int)uVar8);
      }
    }
  }
  else if ((*(byte *)(lVar23 + 0x86) & 0x40) == 0) {
    bVar5 = (*(byte *)(lVar23 + 0x112) & 0x40) >> 6;
    goto LAB_1401aaa38;
  }
  lVar10 = _DAT_1499aaab8;
  if ((uVar20 != 0) && ((uint *)(ulonglong)_DAT_1499aaab4 != (uint *)0x0)) {
    puStack_270 = (uint *)(ulonglong)uVar20;
    puVar21 = (uint *)0x0;
    pfStack_288 = (float *)(_DAT_1499aaab8 + 0xc);
    do {
      puVar26 = (uint *)0x0;
      pfVar22 = pfStack_288;
      do {
        if (puVar21 != puVar26) {
          fVar36 = *pfVar22;
          uVar19 = (ulonglong)(uint)fVar36 & 0x1ffff;
          if ((uVar19 == 0x1ffff) ||
             (plVar11 = *(longlong **)((ulonglong)((uint)fVar36 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
             plVar11 == (longlong *)0x0)) {
            lVar23 = 0;
          }
          else {
            uVar20 = *(uint *)(plVar11[5] + uVar19 * 4);
            lVar23 = (ulonglong)(uint)((int)plVar11[1] * (int)uVar19) + *plVar11;
            if ((uint)fVar36 >> 0x16 != (uVar20 >> 0x11 & 0x3ff) ||
                (uVar20 & *(uint *)(plVar11 + 6)) != *(uint *)(plVar11 + 6)) {
              lVar23 = 0;
            }
          }
          if (lVar23 == *(longlong *)(auStack_248 + (longlong)puVar21 * 2)) {
            uVar37 = *(undefined8 *)(auStack_248 + (longlong)puVar26 * 2);
            *(longlong *)(auStack_248 + (longlong)puVar26 * 2) =
                 *(longlong *)(auStack_248 + (longlong)puVar21 * 2);
            *(undefined8 *)(auStack_248 + (longlong)puVar21 * 2) = uVar37;
          }
        }
        puVar26 = (uint *)((longlong)puVar26 + 1);
        pfVar22 = pfVar22 + 0x1c;
      } while ((uint *)(ulonglong)_DAT_1499aaab4 != puVar26);
      puVar21 = (uint *)((longlong)puVar21 + 1);
    } while (puVar21 != puStack_270);
  }
  if ((longlong)iStack_24c == 0) {
    bVar5 = 1;
  }
  else {
    auVar32._0_12_ = ZEXT812(0);
    auVar32._12_4_ = 0;
    lVar23 = 0;
    do {
      fVar36 = *(float *)((longlong)afStack_258 + lVar23);
      auVar31 = vcmpss_avx(auVar32,ZEXT416((uint)fVar36),0);
      bVar5 = auVar31[0] & 1;
      if ((fVar36 != 0.0) || (NAN(fVar36))) break;
      bVar27 = (longlong)iStack_24c * 4 + -4 != lVar23;
      lVar23 = lVar23 + 4;
    } while (bVar27);
  }
  uVar19 = (ulonglong)_DAT_1499aaab4;
  if (uVar19 != 0) {
    lVar23 = 0;
    fVar36 = 0.0;
    do {
      uVar20 = *(uint *)(lVar10 + 0xc + lVar23);
      uVar13 = (ulonglong)uVar20 & 0x1ffff;
      if ((uVar13 != 0x1ffff) &&
         (plVar11 = *(longlong **)((ulonglong)(uVar20 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar11 != (longlong *)0x0)) {
        uVar8 = *(uint *)(plVar11[5] + uVar13 * 4);
        if (uVar20 >> 0x16 == (uVar8 >> 0x11 & 0x3ff) &&
            (uVar8 & *(uint *)(plVar11 + 6)) == *(uint *)(plVar11 + 6)) {
          lVar12 = (ulonglong)(uint)((int)uVar13 * (int)plVar11[1]) + *plVar11;
        }
        else {
          lVar12 = 0;
        }
        fVar30 = *(float *)(lVar10 + 0x10 + lVar23);
        if ((((fVar30 != fVar36) || (NAN(fVar30) || NAN(fVar36))) && (lVar12 != 0)) &&
           ((*(char *)(lVar12 + 0x30) == '\x03' &&
            (cVar6 = FUN_1452b2cb0(*(undefined4 *)(lVar12 + 0x9c)), cVar6 != '\0')))) {
          if (uStack_29c != 0) {
            uVar19 = 0;
            do {
              lVar10 = *(longlong *)(auStack_248 + uVar19 * 2);
              if (((lVar10 == 0) || (*(char *)(lVar10 + 0x30) != '\x03')) ||
                 (cVar6 = FUN_1452b2cb0(*(undefined4 *)(lVar10 + 0x9c)), cVar6 == '\0')) {
                (auStack_248 + uVar19 * 2)[0] = 0;
                (auStack_248 + uVar19 * 2)[1] = 0;
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < uStack_29c);
          }
          break;
        }
      }
      lVar23 = lVar23 + 0x70;
    } while (uVar19 * 0x70 - lVar23 != 0);
  }
  uVar19 = (ulonglong)_DAT_1499aab40 & 0x1ffff;
  if ((((uVar19 != 0x1ffff) &&
       (plVar11 = *(longlong **)((ulonglong)(_DAT_1499aab40 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar11 != (longlong *)0x0)) &&
      (uVar20 = *(uint *)(plVar11[5] + uVar19 * 4),
      (uVar20 >> 0x11 & 0x3ff) == _DAT_1499aab40 >> 0x16)) &&
     (((uVar20 & *(uint *)(plVar11 + 6)) == *(uint *)(plVar11 + 6) &&
      (lVar10 = *plVar11, lVar10 != 0)))) {
    if (bVar5 != 0) {
      lVar23 = plVar11[1];
      cVar6 = FUN_141fb38e0();
      if (cVar6 == '\0') {
        lVar10 = lVar10 + (ulonglong)(uint)((int)uVar19 * (int)lVar23);
        uStack_108 = *(undefined8 *)(lVar10 + 0x70);
        uStack_100 = *(undefined8 *)(lVar10 + 0x78);
        cVar6 = FUN_145360210();
        if (cVar6 == '\0') {
          *(longlong *)(auStack_248 + (ulonglong)(uStack_29c - 1) * 2) = lVar10;
          afStack_258[uStack_29c - 1] = 1.0;
        }
        goto LAB_1401ab209;
      }
    }
    func_0x0001440f8e70(0);
  }
LAB_1401ab209:
  uVar19 = (ulonglong)_DAT_1499aab44 & 0x1ffff;
  if (((uVar19 != 0x1ffff) &&
      (plVar11 = *(longlong **)((ulonglong)(_DAT_1499aab44 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
      plVar11 != (longlong *)0x0)) &&
     ((uVar20 = *(uint *)(plVar11[5] + uVar19 * 4),
      (uVar20 >> 0x11 & 0x3ff) == _DAT_1499aab44 >> 0x16 &&
      (((uVar20 & *(uint *)(plVar11 + 6)) == *(uint *)(plVar11 + 6) &&
       (lVar10 = *plVar11, lVar10 != 0)))))) {
    if (bVar5 != 0) {
      lVar23 = plVar11[1];
      cVar6 = FUN_141fb38e0();
      if (cVar6 == '\0') {
        lVar10 = lVar10 + (ulonglong)(uint)((int)uVar19 * (int)lVar23);
        uStack_118 = *(undefined8 *)(lVar10 + 0x70);
        uStack_110 = *(undefined8 *)(lVar10 + 0x78);
        cVar6 = FUN_145360210();
        if (cVar6 == '\0') {
          *(longlong *)(auStack_248 + (ulonglong)(uStack_29c - 1) * 2) = lVar10;
          afStack_258[uStack_29c - 1] = 1.0;
        }
        goto LAB_1401ab27f;
      }
    }
    func_0x0001440f8e70(1);
  }
LAB_1401ab27f:
  uVar19 = (ulonglong)_DAT_1499aab48 & 0x1ffff;
  if ((((uVar19 != 0x1ffff) &&
       (plVar11 = *(longlong **)((ulonglong)(_DAT_1499aab48 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar11 != (longlong *)0x0)) &&
      (uVar20 = *(uint *)(plVar11[5] + uVar19 * 4),
      (uVar20 >> 0x11 & 0x3ff) == _DAT_1499aab48 >> 0x16)) &&
     (((uVar20 & *(uint *)(plVar11 + 6)) == *(uint *)(plVar11 + 6) &&
      (lVar10 = *plVar11, lVar10 != 0)))) {
    if (bVar5 != 0) {
      lVar23 = plVar11[1];
      cVar6 = FUN_141fb38e0();
      if (cVar6 == '\0') {
        lVar10 = lVar10 + (ulonglong)(uint)((int)uVar19 * (int)lVar23);
        uStack_128 = *(undefined8 *)(lVar10 + 0x70);
        uStack_120 = *(undefined8 *)(lVar10 + 0x78);
        cVar6 = FUN_145360210();
        if (cVar6 == '\0') {
          *(longlong *)(auStack_248 + (ulonglong)(uStack_29c - 1) * 2) = lVar10;
          afStack_258[uStack_29c - 1] = 1.0;
        }
        goto LAB_1401ab2fd;
      }
    }
    func_0x0001440f8e70(2);
  }
LAB_1401ab2fd:
  if (uStack_29c != 0) {
    auVar38 = ZEXT464(_DAT_145fc6ed8);
    auVar42 = ZEXT464(_DAT_14615a220);
    pfVar22 = (float *)0x1499aab4c;
    auVar39 = ZEXT1264(ZEXT812(0));
    lVar10 = 0;
    uVar19 = 0;
    fVar36 = _DAT_14615a458;
    do {
      lVar23 = _DAT_1499aaab8;
      auVar32 = auVar39._0_16_;
      if (uVar19 < 3) {
        auVar31 = vcmpss_avx(auVar32,ZEXT416((uint)*pfVar22),4);
        uVar20 = auVar31._0_4_ & 1;
      }
      else {
        uVar20 = 0;
      }
      uVar8 = *(uint *)(_DAT_1499aaab8 + 0xc + lVar10);
      uVar13 = (ulonglong)uVar8;
      uVar16 = uVar13 & 0x1ffff;
      if ((uVar16 == 0x1ffff) ||
         (plVar11 = *(longlong **)((ulonglong)(uVar8 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
         plVar11 == (longlong *)0x0)) {
        lVar12 = 0;
      }
      else {
        uVar17 = *(uint *)(plVar11[5] + uVar16 * 4);
        lVar12 = (ulonglong)(uint)((int)plVar11[1] * (int)uVar16) + *plVar11;
        uVar13 = 0;
        if (uVar8 >> 0x16 != (uVar17 >> 0x11 & 0x3ff) ||
            (uVar17 & *(uint *)(plVar11 + 6)) != *(uint *)(plVar11 + 6)) {
          lVar12 = 0;
        }
      }
      fVar30 = auVar39._0_4_;
      if (((afStack_258[uVar19] == fVar30) && (!NAN(afStack_258[uVar19]) && !NAN(fVar30))) ||
         (lVar12 != *(longlong *)(auStack_248 + uVar19 * 2))) {
        auVar33 = ZEXT416((uint)(fVar36 * _DAT_14a943774 +
                                *(float *)(_DAT_1499aaab8 + 0x10 + lVar10)));
        auVar31 = vminss_avx(auVar38._0_16_,auVar33);
        auVar32 = vcmpss_avx(auVar33,auVar32,1);
        fVar28 = (float)(~auVar32._0_4_ & auVar31._0_4_);
        *(float *)(_DAT_1499aaab8 + 0x10 + lVar10) = fVar28;
        if ((fVar28 == fVar30) && (!NAN(fVar28) && !NAN(fVar30))) {
          lVar12 = *(longlong *)(auStack_248 + uVar19 * 2);
          if (lVar12 == 0) {
            uVar8 = 0x1ffff;
          }
          else {
            plVar11 = *(longlong **)((ulonglong)*(byte *)(lVar12 + 0x30) * 8 + 0x14abbe7c0);
            uVar8 = (uint)((ulonglong)(lVar12 - *plVar11) / (ulonglong)*(uint *)(plVar11 + 1)) &
                    0x1ffff;
            uVar8 = (*(byte *)(lVar12 + 0x30) & 0x1f) << 0x11 | uVar8 |
                    (*(uint *)(plVar11[5] + (ulonglong)uVar8 * 4) & 0x7fe0000) << 5;
          }
          *(uint *)(lVar23 + 0xc + lVar10) = uVar8;
        }
        uStack_278 = 0;
      }
      else {
        auVar33 = ZEXT416((uint)(_DAT_146159bd4 * _DAT_14a943774 +
                                *(float *)(_DAT_1499aaab8 + 0x10 + lVar10)));
        uStack_278 = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
        auVar31 = vminss_avx(auVar38._0_16_,auVar33);
        auVar32 = vcmpss_avx(auVar33,auVar32,1);
        fVar28 = (float)(~auVar32._0_4_ & auVar31._0_4_);
        *(float *)(_DAT_1499aaab8 + 0x10 + lVar10) = fVar28;
      }
      if ((char)uVar20 == '\0') {
LAB_1401ab4bf:
        if (lVar12 != 0) goto LAB_1401ab4c8;
        cVar6 = FUN_140313300(*(undefined4 *)(lVar23 + lVar10));
        if (((cVar6 != '\0') ||
            (cVar6 = FUN_140313300(*(undefined4 *)(_DAT_1499aaab8 + 4 + lVar10)), cVar6 != '\0')) ||
           (cVar6 = FUN_140313300(*(undefined4 *)(_DAT_1499aaab8 + 8 + lVar10)), cVar6 != '\0')) {
          FUN_140b2c820(*(undefined4 *)(_DAT_1499aaab8 + lVar10),0);
          FUN_140b2c820(*(undefined4 *)(_DAT_1499aaab8 + 4 + lVar10),0);
          uVar20 = *(uint *)(_DAT_1499aaab8 + 8 + lVar10);
          goto LAB_1401ab944;
        }
      }
      else {
        if (lVar12 == 0) {
LAB_1401ab4b9:
          *pfVar22 = 0.0;
          goto LAB_1401ab4bf;
        }
        if ((fVar28 == fVar30) && (!NAN(fVar28) && !NAN(fVar30))) goto LAB_1401ab4b9;
LAB_1401ab4c8:
        pfStack_288 = (float *)CONCAT44(pfStack_288._4_4_,uVar20);
        if (*(char *)(lVar12 + 0x30) == '\x03') {
          uVar15 = *(undefined4 *)(lVar12 + 0x9c);
          bVar5 = func_0x000144e72530(uVar15);
          cVar6 = FUN_1452b2cb0(uVar15);
          lVar25 = uVar19 * 0x70;
          apuStack_228[1] = (uint *)(_DAT_1499aaab8 + 4 + lVar10);
          puStack_270 = (uint *)(_DAT_1499aaab8 + 8 + lVar10);
          apuStack_228[0] = (uint *)(_DAT_1499aaab8 + lVar10);
          apuStack_228[2] = puStack_270;
          lVar23 = _DAT_1499aaab8;
          if (cVar6 == '\0') {
            puStack_268 = (uint *)(_DAT_1499aaab8 + 8 + lVar25);
            puStack_270 = apuStack_228[bVar5];
            puStack_1e0 = apuStack_228[1];
            if (bVar5 != 0) {
              puStack_1e0 = (uint *)(_DAT_1499aaab8 + lVar10);
            }
          }
          else {
            puStack_268 = (uint *)(_DAT_1499aaab8 + 4 + lVar25);
            puStack_1e0 = (uint *)(_DAT_1499aaab8 + lVar25);
          }
        }
        else {
          puStack_270 = (uint *)(lVar23 + lVar10);
          puStack_268 = (uint *)(lVar23 + 8 + lVar10);
          puStack_1e0 = (uint *)(lVar23 + 4 + lVar10);
          apuStack_228[0] = puStack_270;
          apuStack_228[1] = puStack_1e0;
          apuStack_228[2] = puStack_268;
        }
        if (*(char *)(lVar12 + 0x30) == '\x03') {
          uVar15 = *(undefined4 *)(lVar12 + 0x9c);
          lVar25 = FUN_144dd7510(uVar15);
          bVar27 = lVar25 != 0;
          cVar6 = func_0x000144e72530(uVar15);
          if (cVar6 == '\0') goto LAB_1401ab692;
          iVar9 = FUN_1419eecd0(*(undefined8 *)(lStack_298 + 0x10),
                                *(undefined2 *)(lStack_298 + 0x18),lVar12);
          fVar29 = _DAT_146159c58;
          fVar30 = _DAT_14615a7f8;
          if (((byte)uStack_27c & lVar25 != 0) == 0) {
            fVar29 = _DAT_146159d50;
            fVar30 = _DAT_14615b980;
          }
          cVar6 = (char)pfStack_288;
          fVar28 = _DAT_146159bd0;
          if (iVar9 != -1) {
            fVar28 = fVar29;
          }
        }
        else {
          bVar27 = false;
LAB_1401ab692:
          fVar28 = _DAT_146159c58;
          fVar30 = _DAT_14615a7f8;
          if (((byte)uStack_27c & bVar27) == 0) {
            fVar28 = _DAT_146159d50;
            fVar30 = _DAT_14615b980;
          }
          cVar6 = (char)pfStack_288;
        }
        uStack_1a8 = *(undefined8 *)(lVar12 + 0x70);
        uStack_1a0 = *(undefined8 *)(lVar12 + 0x78);
        func_0x000144dc3790(&uStack_1a8,auStack_1f8);
        uStack_1b8 = *(undefined8 *)(pfStack_260 + 0x1c);
        uStack_1b0 = *(undefined8 *)(pfStack_260 + 0x1e);
        func_0x000144dc3790(&uStack_1b8,auStack_148);
        auVar32 = vsubps_avx(auStack_1f8,auStack_148);
        auVar33._0_4_ = auVar32._0_4_ * auVar32._0_4_;
        auVar33._4_4_ = auVar32._4_4_ * auVar32._4_4_;
        auVar33._8_4_ = auVar32._8_4_ * auVar32._8_4_;
        auVar33._12_4_ = auVar32._12_4_ * auVar32._12_4_;
        auVar32 = vblendps_avx(auVar33,_DAT_14614f7c0,8);
        auVar32 = vhaddps_avx(auVar32,auVar32);
        auVar32 = vhaddps_avx(auVar32,auVar32);
        auVar44 = ZEXT1664(auVar32);
        auVar31 = vrsqrtss_avx(auVar32,auVar32);
        auVar41 = ZEXT1664(auVar31);
        fVar40 = auVar31._0_4_;
        fVar43 = auVar32._0_4_ * fVar40 * fVar40 * _DAT_145fc6f08 + _DAT_145fc6edc;
        fVar29 = auVar42._0_4_;
        if (*(char *)(lVar12 + 0x30) == '\x03') {
          cVar7 = FUN_1420b0210(lVar12);
          fVar40 = auVar41._0_4_;
          auVar32 = auVar44._0_16_;
          fVar29 = auVar42._0_4_;
          if (cVar7 == '\0') {
            uVar15 = *(undefined4 *)(lVar12 + 0x9c);
            lVar25 = func_0x000144da10f0(uVar15);
            if (lVar25 == 0) {
LAB_1401ab79e:
              lVar25 = *(longlong *)(lStack_298 + 8);
              lVar14 = func_0x000145311f50(uVar15);
              if ((lVar25 != 0) && (lVar14 != 0)) {
                cVar7 = FUN_140a3b040(lVar14,lVar25);
                fVar40 = auVar41._0_4_;
                auVar32 = auVar44._0_16_;
                if (cVar7 != '\0') goto LAB_1401ab7e9;
              }
              iVar9 = FUN_1419eecd0(*(undefined8 *)(lStack_298 + 0x10),
                                    *(undefined2 *)(lStack_298 + 0x18),lVar12);
              fVar40 = auVar41._0_4_;
              auVar32 = auVar44._0_16_;
              fVar29 = _DAT_146159ca4;
              if (iVar9 == -1) goto LAB_1401ab7ed;
            }
            else {
              lVar25 = func_0x000144f3ea40(*(undefined8 *)(lVar25 + 0x650),0x1ba);
              fVar40 = auVar41._0_4_;
              auVar32 = auVar44._0_16_;
              if (lVar25 == 0) goto LAB_1401ab79e;
            }
LAB_1401ab7e9:
            fVar29 = auVar42._0_4_;
          }
        }
LAB_1401ab7ed:
        auVar41 = ZEXT1264(ZEXT812(0));
        if (cStack_289 == '\0') {
          auVar35._4_4_ = _DAT_145fc6ed8;
          auVar35._0_4_ = _DAT_145fc6ed8;
          auVar35._8_4_ = _DAT_145fc6ed8;
          auVar35._12_4_ = _DAT_145fc6ed8;
          auVar31 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar32,2);
          auVar34._0_4_ =
               ((float)(auVar31._0_4_ & (uint)((fVar43 * fVar40 + fVar40) * auVar32._0_4_)) - fVar30
               ) / (fVar28 - fVar30);
          auVar34._4_12_ = SUB6012((undefined1  [60])0x0,0);
          auVar31 = vminss_avx(auVar38._0_16_,auVar34);
          auVar32 = vcmpss_avx(auVar34,auVar39._0_16_,1);
          auVar32 = vblendvps_avx(ZEXT416((uint)(auVar38._0_4_ - auVar31._0_4_)),auVar35,auVar32);
          auVar41 = ZEXT464((uint)(fVar29 * auVar32._0_4_ * *(float *)(lVar23 + 0x10 + lVar10)));
        }
        fVar30 = (float)FUN_1428e1880();
        puVar26 = puStack_268;
        puVar21 = puStack_270;
        if (cVar6 == '\0') {
          fVar30 = auVar41._0_4_ * fVar30;
        }
        else {
          fVar30 = *pfVar22 * *(float *)(lVar23 + 0x10 + lVar10);
        }
        auVar41 = ZEXT464((uint)fVar30);
        lVar25 = lVar23 + 0x20 + lVar10;
        cVar6 = FUN_140313300(*puStack_270);
        puVar4 = puStack_1e0;
        if ((cVar6 != '\0') || (auVar41._0_4_ <= auVar39._0_4_)) {
          pfStack_288 = pfVar22;
          cVar6 = FUN_140313300(*puStack_1e0);
          if (cVar6 != '\0') {
            FUN_140b2c820(*puVar4,0);
          }
          cVar6 = FUN_140313300(*puVar26);
          pfVar22 = pfStack_288;
          uVar37 = auVar41._0_8_;
          if (cVar6 != '\0') {
            FUN_140b2c820(*puVar26,0);
            uVar37 = auVar41._0_8_;
          }
        }
        else {
          FUN_140b2cb00(*puVar21,0,0,auVar38._0_8_,0);
          uStack_1c8 = *(undefined8 *)(lVar12 + 0x70);
          uStack_1c0 = *(undefined8 *)(lVar12 + 0x78);
          func_0x000144dc3790(&uStack_1c8,&uStack_158);
          puVar1 = (undefined8 *)(lVar23 + 0x40 + lVar10);
          *puVar1 = uStack_158;
          puVar1[1] = uStack_150;
          *(undefined4 *)(lVar23 + 0x24 + lVar10) = 0x40c90fdb;
          *(undefined1 *)(lVar23 + 0x30 + lVar10) = 1;
          *(undefined4 *)(lVar23 + 0x2c + lVar10) = 0x3e19999a;
          FUN_140b2c7d0(lVar25);
          uVar37 = auVar41._0_8_;
          *(uint *)(lVar23 + 0x20 + lVar10) = *puVar21;
        }
        uVar20 = *puVar21;
        if (auVar39._0_4_ < (float)uVar37) {
          FUN_140b2b210(uVar20,uVar37,0);
          if ((char)uStack_278 != '\0') {
            uStack_1d8 = *(undefined8 *)(lVar12 + 0x70);
            uStack_1d0 = *(undefined8 *)(lVar12 + 0x78);
            func_0x000144dc3790(&uStack_1d8,&uStack_168);
            puVar1 = (undefined8 *)(lVar23 + 0x40 + lVar10);
            *puVar1 = uStack_168;
            puVar1[1] = uStack_160;
            FUN_140b2b510(lVar25);
          }
        }
        else {
LAB_1401ab944:
          FUN_140b2c820(uVar20,0);
        }
      }
      uVar19 = uVar19 + 1;
      lVar10 = lVar10 + 0x70;
      pfVar22 = pfVar22 + 1;
    } while (uVar19 < uStack_29c);
  }
  return;
}

