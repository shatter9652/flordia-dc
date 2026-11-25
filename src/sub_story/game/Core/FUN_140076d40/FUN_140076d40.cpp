// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140076d40  size: 108 bytes
// Name:    FUN_140076d40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f57870, FUN_144d9d7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140076d40(longlong param_1)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined1 (*pauVar18) [16];
  undefined8 unaff_RDI;
  undefined7 uVar19;
  uint uVar20;
  byte bVar21;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined8 uVar35;
  undefined8 uVar37;
  undefined1 auVar36 [64];
  uint uStack_16c;
  longlong lStack_168;
  uint uStack_15c;
  int aiStack_158 [2];
  undefined8 uStack_150;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined8 uStack_78;
  uint uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 in_stack_ffffffffffffffe0;
  byte bVar22;
  
  uStack_50 = 0x140076d5d;
  cVar8 = FUN_144d9d7a0(*(undefined2 *)(param_1 + 0xb0),*(undefined2 *)(param_1 + 0xb2));
  if (cVar8 != '\0') {
    uVar25 = *(uint *)(param_1 + 0xb0);
    uStack_50 = 0x140076d81;
    lVar13 = FUN_144f57870(uVar25);
    if (lVar13 != 0) {
      uStack_50 = 0x140076d9b;
      func_0x000144d9d8a0(uVar25 >> 0x10,&stack0xffffffffffffffe4);
      iVar12 = (int)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
      uVar16 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (*(char *)(lVar13 + 0xc1) == '\0') goto code_r0x000144ee60aa;
      puStack_a0 = &UNK_144ee5f80;
      cVar8 = func_0x000144ee63d0();
      plVar7 = _DAT_149e576c8;
      if (cVar8 == '\0') goto code_r0x000144ee60aa;
      if (iVar12 == -1) goto code_r0x000144ee638d;
      if (iVar12 == 0) {
        puStack_a0 = &UNK_144ee633f;
        cVar8 = FUN_144d9d7a0(uRam0000000149276d38 & 0xffff,uRam0000000149276d38 >> 0x10);
        uVar16 = 0;
        if ((cVar8 == '\0') || (lRam0000000149276d30 == 0)) goto code_r0x000144ee60aa;
        puStack_a0 = &UNK_144ee635c;
        iVar12 = func_0x000143b5c110();
        bVar26 = iVar12 == -1;
code_r0x000144ee6307:
        uVar16 = CONCAT71((int7)(uVar16 >> 8),bVar26);
        goto code_r0x000144ee60aa;
      }
      uVar23 = lVar13 - *_DAT_149e576c8;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar23;
      auVar2 = auVar2 / ZEXT416(*(uint *)(_DAT_149e576c8 + 1));
      uVar16 = auVar2._0_8_;
      puStack_a0 = &UNK_144ee5fc6;
      FUN_144ee6410(&uStack_70,uVar16 & 0xffffffff,iVar12);
      puStack_a0 = &UNK_144ee5fd9;
      cVar8 = FUN_144d9d7a0(uRam0000000149276d40 & 0xffff,uRam0000000149276d40 >> 0x10);
      if (cVar8 == '\0') {
code_r0x000144ee5fe1:
        uVar25 = uRam0000000149276d38;
        iVar11 = iRam000000014926e83c;
        if (iRam000000014926e83c != 0) {
          uVar10 = uRam0000000149276d38 >> 0x10;
          puStack_a0 = &UNK_144ee60dc;
          cVar8 = FUN_144d9d7a0(uRam0000000149276d38 & 0xffff,uVar10);
          if ((cVar8 == '\0') || ((int)(short)uVar25 == auVar2._0_4_)) {
            if (iRam0000000149276d14 != 0) {
              lVar13 = *(longlong *)(lVar13 + 200);
              puStack_a0 = &UNK_144ee61af;
              func_0x000144d9d8a0(uVar10,&iStack_6c);
              if (iStack_6c != iVar12) {
                puStack_a0 = &UNK_144ee61c9;
                uVar25 = func_0x000144ee6940(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xd8),
                                             iVar12);
                uVar16 = CONCAT71((int7)((ulonglong)&iStack_6c >> 8),1);
                if (iRam0000000149276d10 != 0) {
                  bVar22 = (byte)uVar25;
                  bVar21 = bVar22 & 0x7f;
                  uVar10 = uVar25 >> 7;
                  auVar32._0_8_ =
                       CONCAT17(bVar22,CONCAT16(bVar22,CONCAT15(bVar22,CONCAT14(bVar22,CONCAT13(
                                                  bVar22,CONCAT12(bVar22,CONCAT11(bVar22,bVar22)))))
                                               )) & 0x7f7f7f7f7f7f7f7f;
                  auVar32[8] = bVar21;
                  auVar32[9] = bVar21;
                  auVar32[10] = bVar21;
                  auVar32[0xb] = bVar21;
                  auVar32[0xc] = bVar21;
                  auVar32[0xd] = bVar21;
                  auVar32[0xe] = bVar21;
                  auVar32[0xf] = bVar21;
                  while( true ) {
                    uVar10 = uVar10 & iRam0000000149276d10 - 1U;
                    auVar2 = *(undefined1 (*) [16])(lRam0000000149276d18 + (ulonglong)uVar10 * 0x50)
                    ;
                    auVar31 = vpcmpeqb_avx(auVar2,auVar32);
                    uVar3 = (ushort)(SUB161(auVar31 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar31 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar31 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar31 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar31 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar31 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar31 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar31 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar31 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar31 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar31 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar31 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar31 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar31 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar31 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar31[0xf] >> 7) << 0xf;
                    if (uVar3 != 0) {
                      uVar20 = (uint)uVar3;
                      do {
                        uVar4 = 0;
                        for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
                          uVar4 = uVar4 + 1;
                        }
                        if (*(uint *)((ulonglong)uVar10 * 0x50 + lRam0000000149276d18 + 0x10 +
                                     (ulonglong)uVar4 * 4) == uVar25) {
                          bVar26 = (uVar4 | uVar10 << 4) == 0xffffffff;
                          goto code_r0x000144ee6307;
                        }
                        uVar20 = uVar20 - 1 & uVar20;
                      } while (uVar20 != 0);
                    }
                    auVar2 = vpsignb_avx(auVar2,auVar2);
                    if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 ||
                                     (SUB161(auVar2 >> 0xf,0) & 1) != 0) ||
                                    (SUB161(auVar2 >> 0x17,0) & 1) != 0) ||
                                   (SUB161(auVar2 >> 0x1f,0) & 1) != 0) ||
                                  (SUB161(auVar2 >> 0x27,0) & 1) != 0) ||
                                 (SUB161(auVar2 >> 0x2f,0) & 1) != 0) ||
                                (SUB161(auVar2 >> 0x37,0) & 1) != 0) ||
                               (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
                              (SUB161(auVar2 >> 0x47,0) & 1) != 0) ||
                             (SUB161(auVar2 >> 0x4f,0) & 1) != 0) ||
                            (SUB161(auVar2 >> 0x57,0) & 1) != 0) ||
                           (SUB161(auVar2 >> 0x5f,0) & 1) != 0) ||
                          (SUB161(auVar2 >> 0x67,0) & 1) != 0) ||
                         (SUB161(auVar2 >> 0x6f,0) & 1) != 0) || (SUB161(auVar2 >> 0x77,0) & 1) != 0
                        ) || auVar2[0xf] < '\0') break;
                    uVar10 = uVar10 + 1;
                  }
                }
                goto code_r0x000144ee60aa;
              }
            }
            goto code_r0x000144ee638d;
          }
          puStack_a0 = &UNK_144ee60f7;
          cVar8 = FUN_140076db0(uVar16 & 0xffffffff);
          if (cVar8 != '\0') {
            puStack_a0 = &UNK_144ee63a6;
            FUN_144ee6410(&iStack_6c,uVar16 & 0xffffffff,iVar12);
            puStack_a0 = &UNK_144ee63bb;
            iVar12 = FUN_143b5c190(_DAT_149276e20,_DAT_149276e28,&iStack_6c);
            bVar26 = iVar12 == -1;
            goto code_r0x000144ee6307;
          }
          uVar16 = CONCAT71(auVar2._1_7_,1);
          if (iVar11 != 1) goto code_r0x000144ee60aa;
          if (lRam0000000149276d30 != 0) {
            if (iRam0000000149276d10 != 0) {
              auVar31[1] = UNK_14615950f;
              auVar31[0] = UNK_14615950f;
              auVar31[2] = UNK_14615950f;
              auVar31[3] = UNK_14615950f;
              auVar31[4] = UNK_14615950f;
              auVar31[5] = UNK_14615950f;
              auVar31[6] = UNK_14615950f;
              auVar31[7] = UNK_14615950f;
              auVar31[8] = UNK_14615950f;
              auVar31[9] = UNK_14615950f;
              auVar31[10] = UNK_14615950f;
              auVar31[0xb] = UNK_14615950f;
              auVar31[0xc] = UNK_14615950f;
              auVar31[0xd] = UNK_14615950f;
              auVar31[0xe] = UNK_14615950f;
              auVar31[0xf] = UNK_14615950f;
              uVar25 = 0x1cd3c99;
              while( true ) {
                uVar25 = uVar25 & iRam0000000149276d10 - 1U;
                auVar2 = *(undefined1 (*) [16])(lRam0000000149276d18 + (ulonglong)uVar25 * 0x50);
                auVar32 = vpcmpeqb_avx(auVar2,auVar31);
                uVar3 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
                        (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                        (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                        (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                        (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                        (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                        (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                        (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                        (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                        (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                        (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                        (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                        (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                        (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                        (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                        (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
                if (uVar3 != 0) {
                  uVar10 = (uint)uVar3;
                  do {
                    uVar20 = 0;
                    for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                      uVar20 = uVar20 + 1;
                    }
                    if (*(int *)((ulonglong)uVar25 * 0x50 + lRam0000000149276d18 + 0x10 +
                                (ulonglong)uVar20 * 4) == -0x1961b37c) {
                      if ((uVar20 | uVar25 << 4) != 0xffffffff) goto code_r0x000144ee5ff1;
                      goto code_r0x000144ee60aa;
                    }
                    uVar10 = uVar10 - 1 & uVar10;
                  } while (uVar10 != 0);
                }
                auVar2 = vpsignb_avx(auVar2,auVar2);
                if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 ||
                                 (SUB161(auVar2 >> 0xf,0) & 1) != 0) ||
                                (SUB161(auVar2 >> 0x17,0) & 1) != 0) ||
                               (SUB161(auVar2 >> 0x1f,0) & 1) != 0) ||
                              (SUB161(auVar2 >> 0x27,0) & 1) != 0) ||
                             (SUB161(auVar2 >> 0x2f,0) & 1) != 0) ||
                            (SUB161(auVar2 >> 0x37,0) & 1) != 0) ||
                           (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
                          (SUB161(auVar2 >> 0x47,0) & 1) != 0) ||
                         (SUB161(auVar2 >> 0x4f,0) & 1) != 0) || (SUB161(auVar2 >> 0x57,0) & 1) != 0
                        ) || (SUB161(auVar2 >> 0x5f,0) & 1) != 0) ||
                      (SUB161(auVar2 >> 0x67,0) & 1) != 0) || (SUB161(auVar2 >> 0x6f,0) & 1) != 0)
                    || (SUB161(auVar2 >> 0x77,0) & 1) != 0) || auVar2[0xf] < '\0') break;
                uVar25 = uVar25 + 1;
              }
            }
            goto code_r0x000144ee60aa;
          }
        }
code_r0x000144ee5ff1:
        lVar13 = *(longlong *)(lVar13 + 200);
        puStack_a0 = &UNK_144ee600c;
        lVar14 = FUN_144ee64a0(uVar23 / *(uint *)(plVar7 + 1) & 0xffffffff,
                               uVar23 % (ulonglong)*(uint *)(plVar7 + 1));
        uVar19 = (undefined7)((ulonglong)lVar13 >> 8);
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0x20) != 0)) {
          auVar30[1] = UNK_14615950f;
          auVar30[0] = UNK_14615950f;
          auVar30[2] = UNK_14615950f;
          auVar30[3] = UNK_14615950f;
          auVar30[4] = UNK_14615950f;
          auVar30[5] = UNK_14615950f;
          auVar30[6] = UNK_14615950f;
          auVar30[7] = UNK_14615950f;
          auVar30[8] = UNK_14615950f;
          auVar30[9] = UNK_14615950f;
          auVar30[10] = UNK_14615950f;
          auVar30[0xb] = UNK_14615950f;
          auVar30[0xc] = UNK_14615950f;
          auVar30[0xd] = UNK_14615950f;
          auVar30[0xe] = UNK_14615950f;
          auVar30[0xf] = UNK_14615950f;
          lVar15 = *(longlong *)(lVar14 + 0x28);
          uVar25 = 0x1cd3c99;
          while( true ) {
            uVar25 = uVar25 & *(int *)(lVar14 + 0x20) - 1U;
            auVar2 = *(undefined1 (*) [16])(lVar15 + (ulonglong)uVar25 * 400);
            auVar32 = vpcmpeqb_avx(auVar2,auVar30);
            uVar3 = (ushort)(SUB161(auVar32 >> 7,0) & 1) |
                    (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                    (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                    (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                    (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                    (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                    (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                    (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                    (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                    (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                    (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                    (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                    (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                    (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                    (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                    (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
            if (uVar3 != 0) {
              uVar10 = (uint)uVar3;
              do {
                uVar20 = 0;
                for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar20 = uVar20 + 1;
                }
                if (*(int *)((ulonglong)uVar25 * 400 + lVar15 + 0x10 + (ulonglong)uVar20 * 0x18) ==
                    -0x1961b37c) {
                  uVar25 = uVar25 << 4 | uVar20;
                  if (uVar25 == 0xffffffff) goto code_r0x000144ee608f;
                  lVar15 = lVar15 + (ulonglong)(uVar25 >> 4) * 400;
                  puStack_a0 = &UNK_144ee6280;
                  iVar12 = func_0x000144ee6940(*(undefined8 *)(*(longlong *)(lVar13 + 0x20) + 0xd8),
                                               iVar12);
                  uVar23 = (ulonglong)*(uint *)(lVar15 + 0x1c + (ulonglong)(uVar20 & 0xf) * 0x18);
                  uVar16 = CONCAT71(uVar19,1);
                  if (uVar23 == 0) goto code_r0x000144ee60aa;
                  pcVar17 = *(char **)(lVar15 + 0x20 + (ulonglong)(uVar20 & 0xf) * 0x18);
                  pcVar1 = pcVar17 + uVar23 * 0x48;
                  uVar35 = uRam000000014926e810;
                  uVar37 = uRam000000014926e818;
                  goto code_r0x000144ee62ad;
                }
                uVar10 = uVar10 - 1 & uVar10;
              } while (uVar10 != 0);
            }
            auVar2 = vpsignb_avx(auVar2,auVar2);
            if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 || (SUB161(auVar2 >> 0xf,0) & 1) != 0
                             ) || (SUB161(auVar2 >> 0x17,0) & 1) != 0) ||
                           (SUB161(auVar2 >> 0x1f,0) & 1) != 0) ||
                          (SUB161(auVar2 >> 0x27,0) & 1) != 0) ||
                         (SUB161(auVar2 >> 0x2f,0) & 1) != 0) || (SUB161(auVar2 >> 0x37,0) & 1) != 0
                        ) || (SUB161(auVar2 >> 0x3f,0) & 1) != 0) ||
                      (SUB161(auVar2 >> 0x47,0) & 1) != 0) || (SUB161(auVar2 >> 0x4f,0) & 1) != 0)
                    || (SUB161(auVar2 >> 0x57,0) & 1) != 0) || (SUB161(auVar2 >> 0x5f,0) & 1) != 0)
                  || (SUB161(auVar2 >> 0x67,0) & 1) != 0) || (SUB161(auVar2 >> 0x6f,0) & 1) != 0) ||
                (SUB161(auVar2 >> 0x77,0) & 1) != 0) || auVar2[0xf] < '\0') break;
            uVar25 = uVar25 + 1;
          }
        }
code_r0x000144ee608f:
        puStack_a0 = &UNK_144ee60a4;
        iVar12 = func_0x000144ee6450(*(undefined4 *)(lVar13 + 0x164),*(undefined8 *)(lVar13 + 0x168)
                                     ,iVar12);
        uVar16 = CONCAT71(uVar19,iVar12 < 1);
      }
      else {
        if (uRam0000000149276d40 != uStack_70) {
          puStack_a0 = &UNK_144ee6384;
          iVar11 = FUN_143b5c190(uRam0000000149276d68,uRam0000000149276d70,&uStack_70);
          if (iVar11 == -1) goto code_r0x000144ee5fe1;
        }
code_r0x000144ee638d:
        uVar16 = 0;
      }
code_r0x000144ee60aa:
      return uVar16 & 0xffffffff;
    }
  }
  pauVar18 = (undefined1 (*) [16])(param_1 + 0x10);
  cVar8 = FUN_144d9d7a0(uRam0000000149276d38 & 0xffff,uRam0000000149276d38 >> 0x10);
  uVar16 = 0;
  if ((cVar8 != '\0') && (lRam0000000149276d30 != 0)) {
    func_0x000140e04e90(&uStack_78);
    auVar6._8_4_ = uStack_70;
    auVar6._0_8_ = uStack_78;
    auVar6._12_4_ = iStack_6c;
    auVar36 = ZEXT1664(auVar6);
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0;
    auVar2 = vcmpps_avx(auVar6,auVar27,0);
    uVar9 = vmovmskps_avx(auVar2);
    if (((~(byte)uVar9 & 7) != 0) && (iVar12 = func_0x0001400f5030(), 0 < iVar12)) {
      auVar33._0_12_ = ZEXT812(0);
      auVar33._12_4_ = 0;
      auVar2 = vsubps_avx(*pauVar18,auVar36._0_16_);
      auVar29._0_4_ = auVar2._0_4_ * auVar2._0_4_;
      auVar29._4_4_ = auVar2._4_4_ * auVar2._4_4_;
      auVar29._8_4_ = auVar2._8_4_ * auVar2._8_4_;
      auVar29._12_4_ = auVar2._12_4_ * auVar2._12_4_;
      auVar2 = vblendps_avx(auVar29,auVar33,8);
      auVar2 = vhaddps_avx(auVar2,auVar2);
      auVar2 = vhaddps_avx(auVar2,auVar2);
      if (auVar2._0_4_ < (float)(iVar12 * iVar12)) {
code_r0x000144ee5e81:
        uVar16 = 0;
        goto code_r0x000144ee5abb;
      }
    }
    uVar25 = uRam0000000149276d38;
    lVar13 = lRam0000000149276d18;
    iVar12 = iRam0000000149276d10;
    uVar16 = CONCAT71((int7)((ulonglong)&uStack_78 >> 8),1);
    if (iRam0000000149276d10 != 0) {
      auVar28[1] = UNK_14615950d;
      auVar28[0] = UNK_14615950d;
      auVar28[2] = UNK_14615950d;
      auVar28[3] = UNK_14615950d;
      auVar28[4] = UNK_14615950d;
      auVar28[5] = UNK_14615950d;
      auVar28[6] = UNK_14615950d;
      auVar28[7] = UNK_14615950d;
      auVar28[8] = UNK_14615950d;
      auVar28[9] = UNK_14615950d;
      auVar28[10] = UNK_14615950d;
      auVar28[0xb] = UNK_14615950d;
      auVar28[0xc] = UNK_14615950d;
      auVar28[0xd] = UNK_14615950d;
      auVar28[0xe] = UNK_14615950d;
      auVar28[0xf] = UNK_14615950d;
      uVar10 = 0x1cd3c99;
      while( true ) {
        uVar10 = uVar10 & iRam0000000149276d10 - 1U;
        auVar2 = *(undefined1 (*) [16])(lRam0000000149276d18 + (ulonglong)uVar10 * 0x50);
        auVar32 = vpcmpeqb_avx(auVar2,auVar28);
        uVar3 = (ushort)(SUB161(auVar32 >> 7,0) & 1) | (ushort)(SUB161(auVar32 >> 0xf,0) & 1) << 1 |
                (ushort)(SUB161(auVar32 >> 0x17,0) & 1) << 2 |
                (ushort)(SUB161(auVar32 >> 0x1f,0) & 1) << 3 |
                (ushort)(SUB161(auVar32 >> 0x27,0) & 1) << 4 |
                (ushort)(SUB161(auVar32 >> 0x2f,0) & 1) << 5 |
                (ushort)(SUB161(auVar32 >> 0x37,0) & 1) << 6 |
                (ushort)(SUB161(auVar32 >> 0x3f,0) & 1) << 7 |
                (ushort)(SUB161(auVar32 >> 0x47,0) & 1) << 8 |
                (ushort)(SUB161(auVar32 >> 0x4f,0) & 1) << 9 |
                (ushort)(SUB161(auVar32 >> 0x57,0) & 1) << 10 |
                (ushort)(SUB161(auVar32 >> 0x5f,0) & 1) << 0xb |
                (ushort)(SUB161(auVar32 >> 0x67,0) & 1) << 0xc |
                (ushort)(SUB161(auVar32 >> 0x6f,0) & 1) << 0xd |
                (ushort)(SUB161(auVar32 >> 0x77,0) & 1) << 0xe |
                (ushort)(byte)(auVar32[0xf] >> 7) << 0xf;
        if (uVar3 != 0) {
          uVar20 = (uint)uVar3;
          do {
            uVar4 = 0;
            for (uVar5 = uVar20; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
              uVar4 = uVar4 + 1;
            }
            if (*(int *)((ulonglong)uVar10 * 0x50 + lRam0000000149276d18 + 0x10 +
                        (ulonglong)uVar4 * 4) == -0x1961b37c) {
              if (((uVar4 | uVar10 << 4) == 0xffffffff) ||
                 (lVar14 = FUN_144f57850(uRam0000000149276d38), lVar14 == 0))
              goto code_r0x000144ee5abb;
              func_0x000144d9d8a0(uVar25 >> 0x10,&uStack_15c);
              iVar11 = func_0x00014509de40(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xd8),
                                           uStack_15c);
              if (iVar11 < 1) goto code_r0x000144ee5c2d;
              iVar24 = 0;
              goto code_r0x000144ee5be9;
            }
            uVar20 = uVar20 - 1 & uVar20;
          } while (uVar20 != 0);
        }
        auVar2 = vpsignb_avx(auVar2,auVar2);
        if ((((((((((((((((SUB161(auVar2 >> 7,0) & 1) != 0 || (SUB161(auVar2 >> 0xf,0) & 1) != 0) ||
                        (SUB161(auVar2 >> 0x17,0) & 1) != 0) || (SUB161(auVar2 >> 0x1f,0) & 1) != 0)
                      || (SUB161(auVar2 >> 0x27,0) & 1) != 0) || (SUB161(auVar2 >> 0x2f,0) & 1) != 0
                     ) || (SUB161(auVar2 >> 0x37,0) & 1) != 0) ||
                   (SUB161(auVar2 >> 0x3f,0) & 1) != 0) || (SUB161(auVar2 >> 0x47,0) & 1) != 0) ||
                 (SUB161(auVar2 >> 0x4f,0) & 1) != 0) || (SUB161(auVar2 >> 0x57,0) & 1) != 0) ||
               (SUB161(auVar2 >> 0x5f,0) & 1) != 0) || (SUB161(auVar2 >> 0x67,0) & 1) != 0) ||
             (SUB161(auVar2 >> 0x6f,0) & 1) != 0) || (SUB161(auVar2 >> 0x77,0) & 1) != 0) ||
            auVar2[0xf] < '\0') break;
        uVar10 = uVar10 + 1;
      }
    }
  }
code_r0x000144ee5abb:
  return uVar16 & 0xffffffff;
  while (pcVar17 = pcVar17 + 0x48, pcVar17 != pcVar1) {
code_r0x000144ee62ad:
    puStack_a0 = &UNK_144ee62be;
    uStack_68 = uVar35;
    uStack_60 = uVar37;
    cVar8 = FUN_144ee6580(pcVar17);
    if (cVar8 != '\0') {
      if (*pcVar17 != '\0') goto code_r0x000144ee638d;
      if ((ulonglong)*(uint *)(pcVar17 + 0xc) != 0) {
        lVar13 = 0;
        do {
          if (*(int *)(*(longlong *)(pcVar17 + 0x10) + lVar13) == iVar12) goto code_r0x000144ee638d;
          lVar13 = lVar13 + 4;
        } while ((ulonglong)*(uint *)(pcVar17 + 0xc) << 2 != lVar13);
      }
    }
  }
  goto code_r0x000144ee60aa;
code_r0x000144ee5be9:
  do {
    func_0x000144eba120(*(undefined8 *)(lVar14 + 0x118),*(undefined8 *)(lVar14 + 0x168),aiStack_158,
                        uStack_15c,iVar24,0);
    if (aiStack_158[0] == 0) {
      func_0x0001451a26b0(lVar14,aiStack_158,uStack_15c,iVar24);
      auStack_98 = *pauVar18;
      auVar36 = ZEXT1664(auStack_98);
      cVar8 = FUN_145241cc0(aiStack_158);
      if (cVar8 == '\0') goto code_r0x000144ee5e81;
      uStack_b8 = uStack_138;
      uStack_b0 = uStack_130;
      puStack_a0 = (undefined *)uStack_150;
      auStack_c8 = auVar36._0_16_;
      func_0x000140524960(auStack_a8,&uStack_b8,auStack_88);
      auVar34._4_4_ = _DAT_14615bcf4;
      auVar34._0_4_ = _DAT_14615bcf4;
      auVar34._8_4_ = _DAT_14615bcf4;
      auVar34._12_4_ = _DAT_14615bcf4;
      auVar2 = vcmpps_avx(auStack_88,auVar34,5);
      if ((((SUB161(auVar2 >> 0x1f,0) & 1) == 0 && (SUB161(auVar2 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar2 >> 0x5f,0) & 1) == 0) && -1 < auVar2[0xf]) goto code_r0x000144ee5e81;
    }
    iVar24 = iVar24 + 1;
    lVar13 = lRam0000000149276d18;
    iVar12 = iRam0000000149276d10;
  } while (iVar11 != iVar24);
code_r0x000144ee5c2d:
  uVar25 = iVar12 << 4;
  if (uVar25 == 0) {
    uVar10 = 0;
  }
  else {
    uVar20 = 0;
    do {
      uVar10 = uVar20;
      if (!SBORROW1('\0',*(char *)((ulonglong)(uVar20 & 0xf) +
                                  (ulonglong)(uVar20 >> 4) * 0x50 + lVar13))) break;
      uVar20 = uVar20 + 1;
      uVar10 = uVar25;
    } while (uVar25 != uVar20);
  }
  lVar15 = (ulonglong)(uVar10 >> 4) * 0x50;
  if (lVar15 + (ulonglong)(uVar10 & 0xf) * 4 != (ulonglong)uVar25 * 5) {
    auVar36 = ZEXT1664(CONCAT412(_DAT_14615bcf4,
                                 CONCAT48(_DAT_14615bcf4,CONCAT44(_DAT_14615bcf4,_DAT_14615bcf4))));
    lStack_168 = (ulonglong)uVar25 * 5 + 0x10;
    lVar15 = lVar15 + 0x10 + (ulonglong)(uVar10 & 0xf) * 4;
    do {
      uVar20 = uVar10;
      if (*(int *)(lVar13 + lVar15) != -0x1961b37c) {
        uVar35 = *(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xd8);
        FUN_144ee68e0(uVar35,&uStack_16c);
        uVar10 = uStack_16c;
        if ((uStack_16c != uStack_15c && uStack_16c < 0x1f) &&
           (iVar12 = func_0x00014509de40(uVar35,uStack_16c), 0 < iVar12)) {
          iVar11 = 0;
          do {
            func_0x000144eba120(*(undefined8 *)(lVar14 + 0x118),*(undefined8 *)(lVar14 + 0x168),
                                aiStack_158,uVar10,iVar11,0);
            if (aiStack_158[0] == 0) {
              func_0x0001451a26b0(lVar14,aiStack_158,uVar10,iVar11);
              uVar35 = *(undefined8 *)*pauVar18;
              uVar37 = *(undefined8 *)(param_1 + 0x18);
              uStack_e8 = uVar35;
              uStack_e0 = uVar37;
              cVar8 = FUN_145241cc0(aiStack_158,&uStack_e8);
              if (cVar8 == '\0') goto code_r0x000144ee5e81;
              uStack_f0 = uStack_150;
              uStack_118 = uVar35;
              uStack_110 = uVar37;
              func_0x000140524960(auStack_f8,auStack_108,auStack_d8,&uStack_118);
              auVar2 = vcmpps_avx(auStack_d8,auVar36._0_16_,5);
              if ((((SUB161(auVar2 >> 0x1f,0) & 1) == 0 && (SUB161(auVar2 >> 0x3f,0) & 1) == 0) &&
                  (SUB161(auVar2 >> 0x5f,0) & 1) == 0) && -1 < auVar2[0xf])
              goto code_r0x000144ee5e81;
            }
            iVar11 = iVar11 + 1;
          } while (iVar12 != iVar11);
        }
      }
      while (uVar10 = uVar25, uVar20 != uVar25) {
        while (uVar10 = uVar20 + 1, uVar20 = uVar10, uVar10 < uVar25) {
          if (!SBORROW1('\0',*(char *)((ulonglong)(uVar10 & 0xf) +
                                      (ulonglong)(uVar10 >> 4) * 0x50 + lVar13)))
          goto code_r0x000144ee5e15;
        }
      }
code_r0x000144ee5e15:
      lVar15 = (ulonglong)(uVar10 >> 4) * 0x50 + 0x10 + (ulonglong)(uVar10 & 0xf) * 4;
    } while (lVar15 != lStack_168);
  }
  goto code_r0x000144ee5abb;
}

