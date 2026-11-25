// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140001340  size: 244 bytes
// Name:    FUN_140001340
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001340(longlong param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  void *pvVar16;
  float *pfVar17;
  void *pvVar18;
  ulonglong uVar19;
  void *pvVar20;
  byte bVar21;
  longlong *plVar22;
  ulonglong uVar23;
  byte bVar24;
  uint uVar25;
  bool bVar26;
  float fVar27;
  float fVar33;
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 extraout_var [56];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  uint uVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [64];
  uint uVar54;
  undefined1 auVar52 [64];
  float fVar55;
  float fVar57;
  undefined8 uVar56;
  float fVar58;
  float fVar60;
  undefined8 uVar59;
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar64 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  undefined8 unaff_XMM10_Qb;
  float fVar72;
  uint uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined1 auStack_1d8 [16];
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
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  float fStack_138;
  float fStack_134;
  undefined *puStack_110;
  undefined4 uStack_e8;
  undefined1 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined *puStack_30;
  undefined1 auVar65 [64];
  
  uVar13 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
  if (uVar13 != 0) {
    uVar1 = *(undefined4 *)(uVar13 + 0x9c);
    uStack_40 = 0x140001365;
    cVar11 = func_0x000144da28f0(uVar1);
    if (cVar11 != '\0') {
      uStack_40 = 0x140001374;
      lVar14 = func_0x000144ef6280(uVar1);
      if ((lVar14 == 0) ||
         (((*(byte *)(lVar14 + 0x77) & 8) == 0 && ((*(byte *)(lVar14 + 0x103) & 8) == 0)))) {
        uStack_40 = 0x140001397;
        lVar14 = func_0x000144e63d10(uVar1);
        if (lVar14 == 0) {
          bVar21 = 0;
        }
        else {
          bVar21 = *(byte *)(lVar14 + 0x22c) & 1;
        }
        uStack_40 = 0x1400013b0;
        lVar14 = func_0x000144eda820(uVar1);
        if (lVar14 != 0) {
          uVar12 = *(uint *)(lVar14 + 0x10);
          if (((uVar12 >> 0x16 & 1) != 0) || ((~bVar21 & (uVar12 >> 0x15 & 1) == 0) != 0)) {
            if (((uVar12 >> 0x17 & 1) == 0) && ((*(byte *)(lVar14 + 0x16) & 1) != 0)) {
              uVar13 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
              uStack_40 = unaff_XMM10_Qb;
              cVar11 = FUN_143620600(uVar13);
              if ((cVar11 != '\0') &&
                 (uVar12 = func_0x000144dc06d0(*(undefined4 *)(param_1 + 0x3190),_DAT_14abbef40),
                 uRam00000001492deef8 <= uVar12)) {
                plVar22 = (longlong *)(param_1 + 0x32e0);
                if ((*(int *)(param_1 + 0x3300) == 4) &&
                   (((*(short *)(param_1 + 0x32fe) != 0 &&
                     (pvVar16 = (void *)func_0x00014540d1f0(*(undefined4 *)(*plVar22 + 0x20)),
                     pvVar16 != (void *)0x0)) &&
                    ((0x1cU >> (*(uint *)((longlong)pvVar16 + 0x30) & 0x1f) & 1) != 0)))) {
                  func_0x000141b85150(auStack_148);
                  lVar14 = *(longlong *)((longlong)pvVar16 + 0x20);
                  if (lVar14 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar19 = *(ulonglong *)(lVar14 + 0x60);
                  }
                  if (iRam00000001492deea0 != 0) {
                    bVar21 = (byte)uVar19;
                    bVar24 = bVar21 & 0x7f;
                    uVar23 = uVar19 >> 7 & 0x1ffffff;
                    auVar29._0_8_ =
                         CONCAT17(bVar21,CONCAT16(bVar21,CONCAT15(bVar21,CONCAT14(bVar21,CONCAT13(
                                                  bVar21,CONCAT12(bVar21,CONCAT11(bVar21,bVar21)))))
                                                 )) & 0x7f7f7f7f7f7f7f7f;
                    auVar29[8] = bVar24;
                    auVar29[9] = bVar24;
                    auVar29[10] = bVar24;
                    auVar29[0xb] = bVar24;
                    auVar29[0xc] = bVar24;
                    auVar29[0xd] = bVar24;
                    auVar29[0xe] = bVar24;
                    auVar29[0xf] = bVar24;
                    while( true ) {
                      uVar12 = (uint)uVar23 & iRam00000001492deea0 - 1U;
                      auVar32 = *(undefined1 (*) [16])
                                 (lRam00000001492deea8 + (ulonglong)uVar12 * 0xd10);
                      auVar30 = vpcmpeqb_avx(auVar32,auVar29);
                      uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) |
                              (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
                              (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                              (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                              (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                              (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                              (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                              (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                              (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                              (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                              (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                              (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                              (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                              (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                              (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
                      if (uVar5 != 0) {
                        uVar25 = (uint)uVar5;
                        do {
                          uVar53 = 0;
                          for (uVar54 = uVar25; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000
                              ) {
                            uVar53 = uVar53 + 1;
                          }
                          if (*(ulonglong *)
                               ((ulonglong)uVar12 * 0xd10 + lRam00000001492deea8 + 0x10 +
                               (ulonglong)uVar53 * 0xd0) == uVar19) {
                            if ((uVar53 | uVar12 << 4) == 0xffffffff) goto code_r0x000143cc43f4;
                            if (lVar14 == 0) {
                              uVar19 = 0;
                            }
                            else {
                              uVar19 = *(ulonglong *)(lVar14 + 0x60);
                            }
                            bVar21 = (byte)uVar19;
                            bVar24 = bVar21 & 0x7f;
                            uVar23 = uVar19 >> 7 & 0x1ffffff;
                            auVar32._0_8_ =
                                 CONCAT17(bVar21,CONCAT16(bVar21,CONCAT15(bVar21,CONCAT14(bVar21,
                                                  CONCAT13(bVar21,CONCAT12(bVar21,CONCAT11(bVar21,
                                                  bVar21))))))) & 0x7f7f7f7f7f7f7f7f;
                            auVar32[8] = bVar24;
                            auVar32[9] = bVar24;
                            auVar32[10] = bVar24;
                            auVar32[0xb] = bVar24;
                            auVar32[0xc] = bVar24;
                            auVar32[0xd] = bVar24;
                            auVar32[0xe] = bVar24;
                            auVar32[0xf] = bVar24;
                            goto code_r0x000143cc410c;
                          }
                          uVar25 = uVar25 - 1 & uVar25;
                        } while (uVar25 != 0);
                      }
                      auVar32 = vpsignb_avx(auVar32,auVar32);
                      if ((((((((((((((((SUB161(auVar32 >> 7,0) & 1) != 0 ||
                                       (SUB161(auVar32 >> 0xf,0) & 1) != 0) ||
                                      (SUB161(auVar32 >> 0x17,0) & 1) != 0) ||
                                     (SUB161(auVar32 >> 0x1f,0) & 1) != 0) ||
                                    (SUB161(auVar32 >> 0x27,0) & 1) != 0) ||
                                   (SUB161(auVar32 >> 0x2f,0) & 1) != 0) ||
                                  (SUB161(auVar32 >> 0x37,0) & 1) != 0) ||
                                 (SUB161(auVar32 >> 0x3f,0) & 1) != 0) ||
                                (SUB161(auVar32 >> 0x47,0) & 1) != 0) ||
                               (SUB161(auVar32 >> 0x4f,0) & 1) != 0) ||
                              (SUB161(auVar32 >> 0x57,0) & 1) != 0) ||
                             (SUB161(auVar32 >> 0x5f,0) & 1) != 0) ||
                            (SUB161(auVar32 >> 0x67,0) & 1) != 0) ||
                           (SUB161(auVar32 >> 0x6f,0) & 1) != 0) ||
                          (SUB161(auVar32 >> 0x77,0) & 1) != 0) || auVar32[0xf] < '\0') break;
                      uVar23 = (ulonglong)(uVar12 + 1);
                    }
                  }
                }
                goto code_r0x000143cc43f4;
              }
            }
code_r0x000144d99320:
            puStack_30 = &UNK_144d99334;
            FUN_144d99420(param_1 + 0x3198);
            puStack_30 = &UNK_144d9933f;
            func_0x000144e71130(*(undefined4 *)(param_1 + 0x32f8));
            *(undefined2 *)(param_1 + 0x32fe) = 0;
            *(undefined4 *)(param_1 + 0x3300) = 0;
            if (*(longlong *)(param_1 + 0x32e0) != 0) {
              puStack_30 = &UNK_144d99371;
              func_0x000145f40580(*(longlong *)(param_1 + 0x32e0),0,
                                  (ulonglong)*(ushort *)(param_1 + 0x32fc) << 6);
              if (*(short *)(param_1 + 0x32fc) != 0) {
                lVar14 = 0x2a;
                uVar13 = 0;
                do {
                  lVar15 = *(longlong *)(param_1 + 0x32e0);
                  uVar13 = uVar13 + 1;
                  *(undefined8 *)(lVar15 + -10 + lVar14) = 0xffffffff00000000;
                  *(undefined1 *)(lVar15 + lVar14) = 0;
                  *(undefined2 *)(lVar15 + -2 + lVar14) = 0xffff;
                  lVar14 = lVar14 + 0x40;
                } while (uVar13 < *(ushort *)(param_1 + 0x32fc));
              }
            }
            *(undefined4 *)(param_1 + 0x3160) = 0;
            *(undefined1 *)(param_1 + 0x3164) = 0;
            if (*(longlong *)(param_1 + 0x3168) != 0) {
              plVar22 = (longlong *)(param_1 + 0x3168);
              puStack_30 = &UNK_144d993ed;
              FUN_140004b40(&uRam000000014abbf350);
              if (*plVar22 != 0) {
                puStack_30 = &UNK_144d99415;
                FUN_1452dfd90(*plVar22,plVar22);
              }
              *plVar22 = 0;
              iRam000000014abbf360 = iRam000000014abbf360 + -1;
              uVar13 = uRam000000014abbf350;
              if (iRam000000014abbf360 == 0) {
                do {
                  uVar23 = uVar13;
                  LOCK();
                  uVar13 = uVar23;
                  uVar19 = (ulonglong)((int)uVar23 - 1) | 0xffffffff00000000;
                  if (uVar23 != uRam000000014abbf350) {
                    uVar13 = uRam000000014abbf350;
                    uVar19 = uRam000000014abbf350;
                  }
                  uRam000000014abbf350 = uVar19;
                  UNLOCK();
                } while (uVar23 != uVar13);
                if ((uVar23 & 0xfffffffe) != 0) {
                  iRam000000014abbf360 = 0;
                  lVar14 = lRam000000014abbf358;
                  do {
                    while (lVar14 < 0) {
                      uStack_50 = 0x140019c89;
                      cVar11 = FUN_1400062d0(&lRam000000014abbf358,1,&stack0xffffffffffffffe0);
                      if (cVar11 != '\0') {
                        return;
                      }
                    }
                    LOCK();
                    lVar15 = lVar14;
                    lVar10 = lVar14 + 0x100000000;
                    if (lVar14 != lRam000000014abbf358) {
                      lVar15 = lRam000000014abbf358;
                      lVar10 = lRam000000014abbf358;
                    }
                    lRam000000014abbf358 = lVar10;
                    UNLOCK();
                    bVar26 = lVar14 != lVar15;
                    lVar14 = lVar15;
                  } while (bVar26);
                  return;
                }
              }
              return;
            }
            return;
          }
          uStack_40 = 0x1400013ed;
          lVar14 = func_0x000144d9f7c0(uVar1);
          if (lVar14 != 0) {
            uStack_40 = 0x140001405;
            cVar11 = func_0x000140002070(*(undefined4 *)(lVar14 + 0x149c),
                                         *(undefined4 *)(lVar14 + 0x14a0));
            if (cVar11 != '\0') {
              uVar13 = *(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0;
              if (uVar13 != 0) {
                uStack_40 = 0x140002adc;
                cVar11 = FUN_140002b30(uVar13);
                if (cVar11 != '\0') {
                  uStack_40 = 0x140002afe;
                  cVar11 = func_0x000143620390(param_1 + 0x3198);
                  if (cVar11 != '\0') {
                    uStack_40 = 0x140002b0d;
                    cVar11 = FUN_143cc4590(param_1,uVar13);
                    if (cVar11 == '\0') {
                      uStack_40 = 0x140002b19;
                      FUN_144d99320(param_1);
                    }
                  }
                  puStack_110 = &UNK_14362092c;
                  FUN_143620b00(uVar13,param_1 + 0x3290,param_1 + 0x32b8);
                  puStack_110 = &UNK_143620934;
                  cVar11 = func_0x0001436203e0(param_1 + 0x3198);
                  if (cVar11 != '\0') {
                    puStack_110 = &UNK_143620947;
                    cVar11 = func_0x000144da28f0(*(undefined4 *)(uVar13 + 0x9c));
                    uStack_a8 = *(undefined8 *)(uVar13 + 0x70);
                    uStack_a0 = *(undefined8 *)(uVar13 + 0x78);
                    puStack_110 = &UNK_143620961;
                    func_0x000144dc3790(&uStack_a8,&fStack_b8);
                    if (*(int *)(param_1 + 0x319c) != 0) {
                      fVar27 = *(float *)(uVar13 + 0x50);
                      fVar33 = *(float *)(uVar13 + 0x54);
                      fVar34 = *(float *)(uVar13 + 0x58);
                      fVar35 = *(float *)(uVar13 + 0x5c);
                      auVar50._0_12_ = ZEXT812(0);
                      auVar50._12_4_ = 0;
                      auVar52 = ZEXT1664(auVar50);
                      fVar63 = *(float *)(uVar13 + 0x60);
                      fVar66 = *(float *)(uVar13 + 100);
                      fVar67 = *(float *)(uVar13 + 0x68);
                      fVar68 = *(float *)(uVar13 + 0x6c);
                      pfVar17 = (float *)0x1492deed4;
                      lVar14 = param_1 + 0x31a0;
                      if (cVar11 != '\0') {
                        pfVar17 = (float *)0x1492deeb8;
                      }
                      uVar19 = 0;
                      fVar69 = *pfVar17;
                      auVar43._0_4_ = fVar27 * fVar27;
                      auVar43._4_4_ = fVar33 * fVar33;
                      auVar43._8_4_ = fVar34 * fVar34;
                      auVar43._12_4_ = fVar35 * fVar35;
                      auVar29 = vblendps_avx(auVar43,auVar50,8);
                      auVar29 = vhaddps_avx(auVar29,auVar29);
                      auVar29 = vhaddps_avx(auVar29,auVar29);
                      auVar32 = vrsqrtps_avx(auVar29);
                      fVar55 = auVar32._0_4_;
                      fVar57 = auVar32._4_4_;
                      fVar58 = auVar32._8_4_;
                      fVar60 = auVar32._12_4_;
                      fVar27 = ((_DAT_145fc6f08 * fVar55 * fVar55 * auVar29._0_4_ - _DAT_145fc6f08)
                                * fVar55 + fVar55) * fVar27;
                      fVar33 = ((_DAT_145fc6f08 * fVar57 * fVar57 * auVar29._4_4_ - _DAT_145fc6f08)
                                * fVar57 + fVar57) * fVar33;
                      fVar34 = ((_DAT_145fc6f08 * fVar58 * fVar58 * auVar29._8_4_ - _DAT_145fc6f08)
                                * fVar58 + fVar58) * fVar34;
                      fVar35 = ((_DAT_145fc6f08 * fVar60 * fVar60 * auVar29._12_4_ - _DAT_145fc6f08)
                                * fVar60 + fVar60) * fVar35;
                      auVar28._0_4_ = fVar63 * fVar63;
                      auVar28._4_4_ = fVar66 * fVar66;
                      auVar28._8_4_ = fVar67 * fVar67;
                      auVar28._12_4_ = fVar68 * fVar68;
                      auVar29 = vblendps_avx(auVar28,auVar50,8);
                      auVar29 = vhaddps_avx(auVar29,auVar29);
                      auVar29 = vhaddps_avx(auVar29,auVar29);
                      auVar32 = vrsqrtps_avx(auVar29);
                      fVar55 = auVar32._0_4_;
                      fVar57 = auVar32._4_4_;
                      fVar58 = auVar32._8_4_;
                      fVar60 = auVar32._12_4_;
                      fVar63 = ((_DAT_145fc6f08 * fVar55 * fVar55 * auVar29._0_4_ - _DAT_145fc6f08)
                                * fVar55 + fVar55) * fVar63;
                      fVar66 = ((_DAT_145fc6f08 * fVar57 * fVar57 * auVar29._4_4_ - _DAT_145fc6f08)
                                * fVar57 + fVar57) * fVar66;
                      fVar67 = ((_DAT_145fc6f08 * fVar58 * fVar58 * auVar29._8_4_ - _DAT_145fc6f08)
                                * fVar58 + fVar58) * fVar67;
                      fVar68 = ((_DAT_145fc6f08 * fVar60 * fVar60 * auVar29._12_4_ - _DAT_145fc6f08)
                                * fVar60 + fVar60) * fVar68;
                      fVar55 = _DAT_145fc6f08;
                      fVar57 = _DAT_145fc6f08;
                      fVar58 = _DAT_145fc6f08;
                      fVar60 = _DAT_145fc6f08;
                      fVar70 = fVar69;
                      fVar71 = fVar69;
                      fVar72 = fVar69;
                      do {
                        fVar36 = -(fRam00000001492deec4 * (float)(int)uVar19) + fRam00000001492deec0
                        ;
                        auStack_d8._0_4_ =
                             fVar63 * fVar36 + fVar27 * fRam00000001492deebc + fStack_b8;
                        auStack_d8._4_4_ =
                             fVar66 * fVar36 + fVar33 * fRam00000001492deebc + fStack_b4;
                        auStack_d8._8_4_ =
                             fVar67 * fVar36 + fVar34 * fRam00000001492deebc + fStack_b0;
                        auStack_d8._12_4_ =
                             fVar68 * fVar36 + fVar35 * fRam00000001492deebc + fStack_ac;
                        fVar6 = *(float *)(uVar13 + 0x50);
                        fVar7 = *(float *)(uVar13 + 0x54);
                        fVar8 = *(float *)(uVar13 + 0x58);
                        fVar9 = *(float *)(uVar13 + 0x5c);
                        uStack_e0 = 1;
                        auVar44._0_4_ = fVar6 * fVar6;
                        auVar44._4_4_ = fVar7 * fVar7;
                        auVar44._8_4_ = fVar8 * fVar8;
                        auVar44._12_4_ = fVar9 * fVar9;
                        auVar29 = vblendps_avx(auVar44,auVar52._0_16_,8);
                        auVar29 = vhaddps_avx(auVar29,auVar29);
                        auVar29 = vhaddps_avx(auVar29,auVar29);
                        auVar32 = vrsqrtps_avx(auVar29);
                        fVar36 = auVar32._0_4_;
                        fVar2 = auVar32._4_4_;
                        fVar3 = auVar32._8_4_;
                        fVar4 = auVar32._12_4_;
                        uStack_e8 = uRam00000001492deeb4;
                        auStack_c8._0_4_ =
                             ((fVar55 * fVar36 * fVar36 * auVar29._0_4_ - fVar55) * fVar36 + fVar36)
                             * fVar69 * fVar6 + auStack_d8._0_4_;
                        auStack_c8._4_4_ =
                             ((fVar57 * fVar2 * fVar2 * auVar29._4_4_ - fVar57) * fVar2 + fVar2) *
                             fVar70 * fVar7 + auStack_d8._4_4_;
                        auStack_c8._8_4_ =
                             ((fVar58 * fVar3 * fVar3 * auVar29._8_4_ - fVar58) * fVar3 + fVar3) *
                             fVar71 * fVar8 + auStack_d8._8_4_;
                        auStack_c8._12_4_ =
                             ((fVar60 * fVar4 * fVar4 * auVar29._12_4_ - fVar60) * fVar4 + fVar4) *
                             fVar72 * fVar9 + auStack_d8._12_4_;
                        puStack_110 = &UNK_143620a9e;
                        FUN_1436214e0(uVar13,lVar14,auStack_d8,auStack_c8);
                        uVar19 = uVar19 + 1;
                        lVar14 = lVar14 + 0x28;
                      } while (uVar19 < *(uint *)(param_1 + 0x319c));
                    }
                  }
                  return;
                }
              }
              goto code_r0x000144d99320;
            }
          }
        }
      }
    }
  }
  return;
code_r0x000143cc410c:
  uVar12 = (uint)uVar23 & iRam00000001492deea0 - 1U;
  auVar29 = *(undefined1 (*) [16])(lRam00000001492deea8 + (ulonglong)uVar12 * 0xd10);
  auVar30 = vpcmpeqb_avx(auVar29,auVar32);
  uVar5 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar30[0xf] >> 7) << 0xf;
  if (uVar5 != 0) {
    uVar25 = (uint)uVar5;
    do {
      uVar53 = 0;
      for (uVar54 = uVar25; (uVar54 & 1) == 0; uVar54 = uVar54 >> 1 | 0x80000000) {
        uVar53 = uVar53 + 1;
      }
      if (*(ulonglong *)
           ((ulonglong)uVar12 * 0xd10 + lRam00000001492deea8 + 0x10 + (ulonglong)uVar53 * 0xd0) ==
          uVar19) {
        uVar23 = (ulonglong)(uVar53 | uVar12 << 4);
        goto code_r0x000143cc416d;
      }
      uVar25 = uVar25 - 1 & uVar25;
    } while (uVar25 != 0);
  }
  auVar29 = vpsignb_avx(auVar29,auVar29);
  uVar23 = 0xffffffff;
  if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar29 >> 0x17,0) & 1) != 0) || (SUB161(auVar29 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar29 >> 0x27,0) & 1) != 0) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') goto code_r0x000143cc416d;
  uVar23 = (ulonglong)(uVar12 + 1);
  goto code_r0x000143cc410c;
code_r0x000143cc416d:
  uVar12 = (uint)uVar23;
  pvVar20 = (void *)((ulonglong)(uVar12 & 0xf) * 0xd0 + 0x10 +
                    lRam00000001492deea8 + (uVar23 >> 4) * 0xd10);
  if (uVar12 == 0xffffffff) {
    pvVar20 = (void *)0x0;
  }
  pvVar20 = (void *)((longlong)pvVar20 + 0x10);
  if (uVar12 == 0xffffffff) {
    pvVar20 = (void *)0x0;
  }
  func_0x000145f40560(auStack_148,pvVar20,0xc0);
  pvVar18 = pvVar16;
  cVar11 = FUN_1436207b0();
  if (cVar11 != '\0') {
    fVar63 = *(float *)((longlong)pvVar16 + 0x50);
    fVar66 = *(float *)((longlong)pvVar16 + 0x54);
    fVar67 = *(float *)((longlong)pvVar16 + 0x58);
    fVar68 = *(float *)((longlong)pvVar16 + 0x5c);
    auVar64._0_12_ = ZEXT812(0);
    auVar64._12_4_ = 0;
    auVar65 = ZEXT1664(auVar64);
    auVar30._0_4_ = fVar63 * fVar63;
    auVar30._4_4_ = fVar66 * fVar66;
    auVar30._8_4_ = fVar67 * fVar67;
    auVar30._12_4_ = fVar68 * fVar68;
    auVar29 = vblendps_avx(auVar30,auVar64,8);
    auVar29 = vhaddps_avx(auVar29,auVar29);
    auVar29 = vhaddps_avx(auVar29,auVar29);
    auVar32 = vrsqrtps_avx(auVar29);
    fVar27 = auVar32._0_4_;
    fVar33 = auVar32._4_4_;
    fVar34 = auVar32._8_4_;
    fVar35 = auVar32._12_4_;
    fVar27 = -((_DAT_145fc6f08 * fVar27 * fVar27 * auVar29._0_4_ - _DAT_145fc6f08) * fVar27) -
             fVar27;
    fVar33 = -((_DAT_145fc6f08 * fVar33 * fVar33 * auVar29._4_4_ - _DAT_145fc6f08) * fVar33) -
             fVar33;
    fVar34 = -((_DAT_145fc6f08 * fVar34 * fVar34 * auVar29._8_4_ - _DAT_145fc6f08) * fVar34) -
             fVar34;
    fVar35 = -((_DAT_145fc6f08 * fVar35 * fVar35 * auVar29._12_4_ - _DAT_145fc6f08) * fVar35) -
             fVar35;
    auVar37._0_4_ = fVar27 * fVar63;
    auVar37._4_4_ = fVar33 * fVar66;
    auVar37._8_4_ = fVar34 * fVar67;
    auVar37._12_4_ = fVar35 * fVar68;
    auVar52 = ZEXT1664(CONCAT412(-(fVar68 * fVar35) - 0.0,
                                 CONCAT48(-(fVar67 * fVar34) - 0.0,
                                          CONCAT44(-(fVar66 * fVar33) - 0.0,-(fVar63 * fVar27) - 0.0
                                                  ))));
    vmovshdup_avx(auVar37);
    fVar69 = _DAT_145fc6f08;
    fVar55 = _DAT_145fc6f08;
    fVar57 = _DAT_145fc6f08;
    fVar58 = _DAT_145fc6f08;
    atan2f(pvVar18,pvVar20);
    uVar56 = *(undefined8 *)((longlong)pvVar16 + 0x70);
    uVar59 = *(undefined8 *)((longlong)pvVar16 + 0x78);
    auVar51 = ZEXT1664(auVar52._0_16_);
    uStack_188 = uVar56;
    uStack_180 = uVar59;
    func_0x000144dc3790(&uStack_188,auStack_1d8);
    uVar61 = *(undefined8 *)(uVar13 + 0x70);
    uVar62 = *(undefined8 *)(uVar13 + 0x78);
    uStack_198 = uVar61;
    uStack_190 = uVar62;
    func_0x000144dc3790(&uStack_198,auStack_158);
    auVar29 = vsubps_avx(auStack_1d8,auStack_158);
    fVar27 = auVar29._0_4_;
    auVar38._0_4_ = fVar27 * fVar27;
    fVar34 = auVar29._4_4_;
    auVar38._4_4_ = fVar34 * fVar34;
    fVar63 = auVar29._8_4_;
    auVar38._8_4_ = fVar63 * fVar63;
    fVar67 = auVar29._12_4_;
    auVar38._12_4_ = fVar67 * fVar67;
    auVar29 = vblendps_avx(auVar38,auVar65._0_16_,8);
    auVar29 = vhaddps_avx(auVar29,auVar29);
    auVar32 = vhaddps_avx(auVar29,auVar29);
    auVar29 = vrsqrtps_avx(auVar32);
    fVar33 = auVar29._0_4_;
    fVar35 = auVar29._4_4_;
    fVar66 = auVar29._8_4_;
    fVar68 = auVar29._12_4_;
    auVar47._4_4_ = _DAT_145fc6f14;
    auVar47._0_4_ = _DAT_145fc6f14;
    auVar47._8_4_ = _DAT_145fc6f14;
    auVar47._12_4_ = _DAT_145fc6f14;
    auVar29 = vcmpps_avx(auVar47,auVar32,1);
    auVar31._0_8_ =
         CONCAT44(auVar29._4_4_ &
                  (uint)(((fVar55 * fVar35 * fVar35 * auVar32._4_4_ - fVar55) * fVar35 + fVar35) *
                        fVar34),
                  auVar29._0_4_ &
                  (uint)(((fVar69 * fVar33 * fVar33 * auVar32._0_4_ - fVar69) * fVar33 + fVar33) *
                        fVar27));
    auVar31._8_4_ =
         auVar29._8_4_ &
         (uint)(((fVar57 * fVar66 * fVar66 * auVar32._8_4_ - fVar57) * fVar66 + fVar66) * fVar63);
    auVar31._12_4_ =
         auVar29._12_4_ &
         (uint)(((fVar58 * fVar68 * fVar68 * auVar32._12_4_ - fVar58) * fVar68 + fVar68) * fVar67);
    auVar29 = vshufps_avx(auVar31,auVar31,0xf5);
    auVar52._0_8_ = func_0x000144f7b090(auVar31._0_8_,auVar29._0_8_);
    auVar52._8_56_ = extraout_var;
    auVar48._4_4_ = _DAT_145fc6f80;
    auVar48._0_4_ = _DAT_145fc6f80;
    auVar48._8_4_ = _DAT_145fc6f80;
    auVar48._12_4_ = _DAT_145fc6f80;
    auVar32 = vinsertps_avx(auVar51._0_16_,auVar52._0_16_,0x10);
    auVar52 = ZEXT464((uint)_DAT_145fc6f80);
    fVar27 = auVar32._0_4_;
    auVar49._0_4_ = fVar27 + _DAT_145fc6f80;
    fVar33 = auVar32._4_4_;
    auVar49._4_4_ = fVar33 + _DAT_145fc6f80;
    fVar34 = auVar32._8_4_;
    auVar49._8_4_ = fVar34 + _DAT_145fc6f80;
    fVar35 = auVar32._12_4_;
    auVar49._12_4_ = fVar35 + _DAT_145fc6f80;
    auVar45._0_4_ = fVar27 + _DAT_145fc6f84;
    auVar45._4_4_ = fVar33 + _DAT_145fc6f84;
    auVar45._8_4_ = fVar34 + _DAT_145fc6f84;
    auVar45._12_4_ = fVar35 + _DAT_145fc6f84;
    auVar39._0_4_ = fVar27 + _DAT_14615a920;
    auVar39._4_4_ = fVar33 + _DAT_14615a920;
    auVar39._8_4_ = fVar34 + _DAT_14615a920;
    auVar39._12_4_ = fVar35 + _DAT_14615a920;
    auVar29 = vcmpps_avx(auVar65._0_16_,auVar49,2);
    auVar29 = vblendvps_avx(auVar45,auVar32,auVar29);
    auVar32 = vcmpps_avx(auVar32,auVar48,2);
    auVar29 = vblendvps_avx(auVar39,auVar29,auVar32);
    auVar46._4_4_ = _DAT_146159be0;
    auVar46._0_4_ = _DAT_146159be0;
    auVar46._8_4_ = _DAT_146159be0;
    auVar46._12_4_ = _DAT_146159be0;
    auVar32 = vhsubps_avx(auVar29,auVar29);
    auVar29 = vcmpss_avx(ZEXT416(0) << 0x20,auVar32,2);
    auVar29 = vblendvps_avx(auVar46,ZEXT416((uint)_DAT_145fc6f80),auVar29);
    auVar51 = ZEXT1664(auVar29);
    fVar27 = (float)func_0x000145f40820(auVar29._0_4_ + auVar32._0_4_,_DAT_145fc6f84);
    auVar32 = ZEXT416((uint)(fVar27 - auVar51._0_4_));
    auVar29 = vcmpss_avx(auVar32,ZEXT416(_DAT_146159be0),2);
    auVar29 = vblendvps_avx(auVar32,auVar52._0_16_,auVar29);
    auVar40._0_4_ = auVar29._0_4_ ^ _DAT_145fc6f10;
    auVar40._4_4_ = auVar29._4_4_ ^ _DAT_145fc6f10;
    auVar40._8_4_ = auVar29._8_4_ ^ _DAT_145fc6f10;
    auVar40._12_4_ = auVar29._12_4_ ^ _DAT_145fc6f10;
    auVar29 = vmaxss_avx(auVar40,auVar29);
    if (auVar29._0_4_ * _DAT_146159c20 < fStack_138) {
      uStack_1ec = 0xbf800000;
      uVar12 = _DAT_145fc6f10;
      uVar25 = _DAT_145fc6f10;
      uVar53 = _DAT_145fc6f10;
      uVar54 = _DAT_145fc6f10;
      uStack_1a8 = uVar56;
      uStack_1a0 = uVar59;
      func_0x000144dc3790(&uStack_1a8,auStack_1d8);
      uStack_1b8 = uVar61;
      uStack_1b0 = uVar62;
      func_0x000144dc3790(&uStack_1b8,auStack_168);
      cVar11 = FUN_142f8e0d0(auStack_168,auStack_1d8,&uStack_1ec,0);
      if ((cVar11 != '\0') &&
         (auVar41._0_4_ = uStack_1ec ^ uVar12, auVar41._4_4_ = uVar25, auVar41._8_4_ = uVar53,
         auVar41._12_4_ = uVar54, auVar29 = vmaxss_avx(auVar41,ZEXT416(uStack_1ec)),
         auVar29._0_4_ * _DAT_146159c20 < fStack_134)) {
        *(undefined1 *)(param_1 + 0x3164) = 1;
        FUN_145302dc0(param_1 + 0x3168,pvVar16);
      }
    }
  }
code_r0x000143cc43f4:
  uStack_1c8 = *(undefined8 *)(uVar13 + 0x70);
  uStack_1c0 = *(undefined8 *)(uVar13 + 0x78);
  func_0x000144dc3790(&uStack_1c8,&fStack_1e8);
  auVar29 = *(undefined1 (*) [16])(uVar13 + 0x50);
  fVar27 = auVar29._0_4_;
  auVar42._0_4_ = fVar27 * fVar27;
  fVar34 = auVar29._4_4_;
  auVar42._4_4_ = fVar34 * fVar34;
  fVar63 = auVar29._8_4_;
  auVar42._8_4_ = fVar63 * fVar63;
  fVar67 = auVar29._12_4_;
  auVar42._12_4_ = fVar67 * fVar67;
  auVar29 = vblendps_avx(auVar42,(undefined1  [16])0x0,8);
  auVar29 = vhaddps_avx(auVar29,auVar29);
  auVar29 = vhaddps_avx(auVar29,auVar29);
  auVar32 = vrsqrtps_avx(auVar29);
  fVar33 = auVar32._0_4_;
  fVar35 = auVar32._4_4_;
  fVar66 = auVar32._8_4_;
  fVar68 = auVar32._12_4_;
  auVar52 = ZEXT1664(CONCAT412(((fVar68 * fVar68 * auVar29._12_4_ * _DAT_145fc6f08 - _DAT_145fc6f08)
                                * fVar68 + fVar68) * fRam00000001492deedc * fVar67 + fStack_1dc,
                               CONCAT48(((fVar66 * fVar66 * auVar29._8_4_ * _DAT_145fc6f08 -
                                         _DAT_145fc6f08) * fVar66 + fVar66) *
                                        fRam00000001492deedc * fVar63 + fStack_1e0,
                                        CONCAT44(((fVar35 * fVar35 * auVar29._4_4_ * _DAT_145fc6f08
                                                  - _DAT_145fc6f08) * fVar35 + fVar35) *
                                                 fRam00000001492deedc * fVar34 + fStack_1e4,
                                                 ((fVar33 * fVar33 * auVar29._0_4_ * _DAT_145fc6f08
                                                  - _DAT_145fc6f08) * fVar33 + fVar33) *
                                                 fRam00000001492deedc * fVar27 + fStack_1e8))));
  func_0x000144e71130(*(undefined4 *)(param_1 + 0x32f8));
  auStack_178 = auVar52._0_16_;
  *(undefined2 *)(param_1 + 0x32fe) = 0;
  *(undefined4 *)(param_1 + 0x3300) = 0;
  if (*(longlong *)(param_1 + 0x32e0) != 0) {
    func_0x000145f40580(*(longlong *)(param_1 + 0x32e0),0,
                        (ulonglong)*(ushort *)(param_1 + 0x32fc) << 6);
    auStack_178 = auVar52._0_16_;
    if (*(short *)(param_1 + 0x32fc) != 0) {
      lVar14 = 0x2a;
      uVar19 = 0;
      do {
        lVar15 = *(longlong *)(param_1 + 0x32e0);
        uVar19 = uVar19 + 1;
        *(undefined8 *)(lVar15 + -10 + lVar14) = 0xffffffff00000000;
        *(undefined1 *)(lVar15 + lVar14) = 0;
        *(undefined2 *)(lVar15 + -2 + lVar14) = 0xffff;
        lVar14 = lVar14 + 0x40;
      } while (uVar19 < *(ushort *)(param_1 + 0x32fc));
    }
    if (*plVar22 != 0) {
      FUN_144ec6720();
      if (*plVar22 != 0) {
        func_0x000144d9c130();
      }
      *(undefined8 *)(param_1 + 0x32e0) = 0;
      FUN_144ec6670();
      auStack_178 = auVar52._0_16_;
      *(undefined1 *)(param_1 + 0x3304) = 0;
    }
  }
  *(undefined2 *)(param_1 + 0x32fc) = 1;
  FUN_1436214e0(uVar13,plVar22,&fStack_1e8,auStack_178,fRam00000001492deedc,0);
  return;
}

