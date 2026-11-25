// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140152d50  size: 48 bytes
// Name:    FUN_140152d50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1454a3450
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140152d50(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  short *psVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined *puVar7;
  char cVar8;
  ushort uVar9;
  short sVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  undefined1 *puVar20;
  short sVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_120 [4];
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong *plStack_d0;
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  longlong lStack_b8;
  undefined1 *puStack_b0;
  short *psStack_a8;
  undefined1 *puStack_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_90;
  longlong lStack_88;
  ushort *puStack_80;
  longlong *plStack_78;
  undefined *puStack_70;
  short *psStack_68;
  longlong lStack_60;
  uint uStack_58;
  uint uStack_54;
  ulonglong uStack_50;
  undefined1 auStack_44 [3];
  char cStack_41;
  undefined8 uStack_40;
  
  lVar23 = param_1 + 0x10;
  uStack_40 = 0x140152d6c;
  plVar12 = (longlong *)FUN_1454a3450(*(ulonglong *)(param_1 + 8) & 0xfffffffffffffff0);
  if ((*(char *)(param_1 + 0x92) == '\x01') && (*(char *)(param_1 + 0x95) != param_2)) {
    *(char *)(param_1 + 0x95) = param_2;
    lVar13 = *(longlong *)(param_1 + 0x20);
    uVar24 = (ulonglong)*(uint *)(param_1 + 0x1c);
    if (param_2 == '\0') {
      if (uVar24 != 0) {
        lVar23 = 0;
        do {
          lVar26 = **(longlong **)(lVar13 + lVar23);
          if ((lVar26 != 0) && (*(int *)(lVar26 + 0x10) != 0)) {
            puStack_70 = &UNK_14269af83;
            FUN_1454352a0();
          }
          lVar23 = lVar23 + 8;
        } while (uVar24 << 3 != lVar23);
      }
    }
    else {
      if (uVar24 != 0) {
        lVar26 = 0;
        do {
          plVar27 = *(longlong **)(lVar13 + lVar26);
          lVar19 = *plVar27;
          if (lVar19 != 0) {
            puStack_70 = &UNK_14269af1d;
            FUN_140a85660(auStack_44,lVar19);
            if ((*(byte *)(lVar19 + 0x19) & 0x10) == 0) {
              *(longlong *)(lVar19 + 0x100) = plVar27[5];
            }
          }
          lVar26 = lVar26 + 8;
        } while (uVar24 << 3 != lVar26);
      }
      if ((plVar12 != (longlong *)0x0) && (*(char *)(param_1 + 0x93) == '\0')) {
        *(int *)(param_1 + 0x88) = (int)plVar12[2];
        cVar8 = *(char *)(param_1 + 0x93);
        *(undefined1 *)(param_1 + 0x93) = 1;
        uVar24 = (ulonglong)*(uint *)(param_1 + 0x1c);
        puVar20 = auStack_f8;
        if (uVar24 != 0) {
          puStack_100 = &UNK_14096085a;
          cStack_41 = cVar8;
          lVar13 = FUN_145647140();
          lVar13 = -lVar13;
          puStack_a0 = auStack_f8 + lVar13;
          *(undefined **)(auStack_f8 + lVar13 + -8) = &UNK_140960872;
          lVar26 = FUN_145647140();
          lVar26 = -lVar26;
          puVar25 = auStack_f8 + lVar26 + lVar13;
          lStack_b8 = lVar23;
          plVar27 = *(longlong **)(param_1 + 0x20);
          uVar22 = 0;
          plStack_d0 = plVar27 + uVar24;
          lVar23 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          uStack_58 = 0;
          psStack_a8 = (short *)(lVar23 + 0x12e8);
          psStack_68 = (short *)(lVar23 + 0x1370);
          puStack_80 = (ushort *)(lVar23 + 0x12ea);
          plStack_78 = (longlong *)(lVar23 + 0x1438);
          do {
            plVar4 = (longlong *)*plVar27;
            if (*plVar4 != 0) {
              puStack_70 = (undefined *)(ulonglong)*(ushort *)(plVar4 + 3);
              uVar24 = (ulonglong)*(uint *)(plVar12 + 2);
              pcVar5 = *(code **)(*plVar12 + 0xb0);
              lStack_60 = *plVar4;
              *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_1409608fb;
              cVar8 = (*pcVar5)(plVar12);
              uStack_54 = uVar22;
              if ((cVar8 == '\0') || (iVar3 = *(int *)((longlong)plVar4 + 0x1c), iVar3 == 0)) {
                uVar17 = 0xffff000000000000;
              }
              else {
                uVar14 = *(undefined8 *)(*(longlong *)(plVar12[0x35] + 0x18) + 0x18);
                *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_14096092e;
                FUN_14002cac0(uVar14,&uStack_98,iVar3);
                uVar17 = 0xffff000000000000;
                if ((char)uStack_98 == '\0') {
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960950;
                  uVar11 = FUN_14010a630(plVar12,iVar3);
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_14096095f;
                  FUN_14540c4c0(plVar12,&uStack_98,uVar11);
                  uVar24 = CONCAT44(uStack_94,uStack_98);
                  uVar17 = ((ulonglong)uStack_94 & 0xffff0000) << 0x20;
                  puStack_70 = (undefined *)(ulonglong)uStack_94;
                }
              }
              puVar7 = puStack_70;
              uVar16 = (ulonglong)(uint)((int)(uVar24 & 0xffff) << 4);
              sVar21 = (short)(uVar24 >> 0x10);
              if (((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar16) == sVar21) &&
                  (lVar23 = *(longlong *)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar16),
                  lVar23 != 0)) &&
                 (lVar19 = *(longlong *)(*(longlong *)(lVar23 + 8) + 0x20), lVar19 != 0)) {
                uStack_c8 = uVar17;
                uStack_c0 = uVar24 & 0xffff;
                if ((*(char *)(lVar19 + 0x10) == '\x06') && ((short)puStack_70 != -2)) {
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_1409609ee;
                  uVar9 = func_0x0001403dc2f0(lVar23,puVar7);
                  if ((uVar9 == 0xffff) ||
                     ((*(ushort *)(lVar19 + 0x9a) <= uVar9 ||
                      (*(longlong *)(*(longlong *)(lVar19 + 0x70) + (ulonglong)uVar9 * 8) == 0))))
                  goto code_r0x000140960a3c;
                }
                lVar23 = lStack_60;
                if ((*(byte *)(lStack_60 + 0x1a) & 0x20) == 0) {
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960a28;
                  FUN_140a85330(plVar4,plVar12);
                  uVar17 = ((ulonglong)puStack_70 & 0xffff) << 0x20;
                }
                else {
                  cVar8 = *(char *)(*(longlong *)
                                     (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                     (ulonglong)__tls_index * 8) + 8);
                  if (cVar8 == '\0') {
                    *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960a94;
                    func_0x0001455db994();
                    cVar8 = *(char *)(*(longlong *)
                                       (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                       (ulonglong)__tls_index * 8) + 8);
                    if (cVar8 == '\0') {
                      *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960abe;
                      func_0x0001455db994();
                      cVar8 = *(char *)(*(longlong *)
                                         (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                         (ulonglong)__tls_index * 8) + 8);
                    }
                  }
                  uVar17 = 0xffffffff;
                  if (*psStack_a8 == 0) {
                    if (cVar8 == '\0') {
                      *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960afc;
                      func_0x0001455db994();
                    }
                    if (*psStack_68 == 0) {
                      *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960b20;
                      FUN_1400716e0(0x14a95deb8);
                    }
                    cVar8 = *(char *)(*(longlong *)
                                       (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                       (ulonglong)__tls_index * 8) + 8);
                    if (cVar8 == '\0') {
                      *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960b50;
                      func_0x0001455db994();
                      cVar8 = *(char *)(*(longlong *)
                                         (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                         (ulonglong)__tls_index * 8) + 8);
                    }
                    uVar17 = 0xffffffff;
                    *psStack_68 = *psStack_68 + 1;
                    lVar19 = *(longlong *)(lVar23 + 0x38);
                    if (lVar19 != 0) {
                      lStack_88 = lVar19;
                      uVar17 = 0;
                      uStack_50 = *(ulonglong *)(lVar19 + 0xa8);
                      puStack_b0 = puVar25;
                      puVar18 = (ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
                      while( true ) {
                        if (cVar8 == '\0') {
                          *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960bc0;
                          func_0x0001455db994();
                          cVar8 = *(char *)(*(longlong *)
                                             (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                             (ulonglong)__tls_index * 8) + 8);
                        }
                        uVar9 = *puStack_80;
                        if (uVar9 <= uVar17) {
                          if (cVar8 == '\0') {
                            *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) =
                                 &UNK_140960c59;
                            func_0x0001455db994();
                            uVar17 = (ulonglong)*puStack_80;
                            cVar8 = *(char *)(*(longlong *)
                                               (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                               (ulonglong)__tls_index * 8) + 8);
                            *puStack_80 = *puStack_80 + 1;
                            if (cVar8 == '\0') {
                              *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) =
                                   &UNK_140960c92;
                              func_0x0001455db994();
                            }
                          }
                          else {
                            *puStack_80 = uVar9 + 1;
                            uVar17 = (ulonglong)uVar9;
                          }
                          plVar6 = *(longlong **)(unaff_GS_OFFSET + 0x58);
                          uVar16 = (ulonglong)(uint)((int)uVar17 << 4);
                          lVar23 = *plVar6;
                          lVar19 = *(longlong *)(lStack_88 + 0xa8);
                          *(longlong *)(lVar23 + 0x12f0 + uVar16) = lVar19;
                          *(undefined2 *)(lVar23 + 0x12f8 + uVar16) = 1;
                          *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960cd6;
                          FUN_1400716e0(lVar19 + 8);
                          cVar8 = *(char *)(plVar6[__tls_index] + 8);
                          lVar23 = lStack_60;
                          puVar25 = puStack_b0;
                          goto code_r0x000140960cf5;
                        }
                        if (cVar8 == '\0') {
                          *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960bfd;
                          func_0x0001455db994();
                          cVar8 = *(char *)(*(longlong *)
                                             (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                             (ulonglong)__tls_index * 8) + 8);
                        }
                        if (*puVar18 == uStack_50) break;
                        uVar17 = uVar17 + 1;
                        puVar18 = puVar18 + 2;
                      }
                      *(short *)(puVar18 + 1) = (short)puVar18[1] + 1;
                      lVar23 = lStack_60;
                      puVar25 = puStack_b0;
                    }
                  }
code_r0x000140960cf5:
                  uVar16 = *(ulonglong *)(*(longlong *)(lVar23 + 0x38) + 0xb0);
                  if (cVar8 == '\0') {
                    uStack_50 = uVar16;
                    *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960d14;
                    func_0x0001455db994();
                    uVar16 = uStack_50;
                  }
                  if (*psStack_a8 == 0) {
                    if (-1 < (int)uVar17) {
                      if (*(char *)(*(longlong *)
                                     (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                     (ulonglong)__tls_index * 8) + 8) == '\0') {
                        uStack_50 = uVar16;
                        *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960d62;
                        func_0x0001455db994();
                        uVar16 = uStack_50;
                      }
                      lVar19 = (uVar17 & 0xffffffff) * 0x10;
                      lVar23 = **(longlong **)(unaff_GS_OFFSET + 0x58);
                      psVar2 = (short *)(lVar23 + 0x12f8 + lVar19);
                      *psVar2 = *psVar2 + -1;
                      if (*psVar2 == 0) {
                        lVar23 = *(longlong *)(lVar23 + 0x12f0 + lVar19);
                        lVar19 = *(longlong *)(lVar23 + 0x20);
                        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
                          lVar15 = *plStack_78;
                        }
                        else {
                          *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
                          lStack_88 = lVar23;
                          uStack_50 = uVar16;
                          *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140961063;
                          lVar15 = FUN_1400063f0();
                          *plStack_78 = lVar15;
                          lVar23 = lStack_88;
                          uVar16 = uStack_50;
                        }
                        if (lVar15 != lVar19) {
                          *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960dd2;
                          FUN_1402c59f0(lVar23 + 8);
                        }
                        if (*(char *)(*(longlong *)
                                       (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                       (ulonglong)__tls_index * 8) + 8) == '\0') {
                          *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960e01;
                          func_0x0001455db994();
                        }
                        *puStack_80 = *puStack_80 - 1;
                      }
                    }
                    if (*(char *)(*(longlong *)
                                   (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                   (ulonglong)__tls_index * 8) + 8) == '\0') {
                      *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960e45;
                      func_0x0001455db994();
                      sVar10 = *psStack_68 + -1;
                      cVar8 = *(char *)(*(longlong *)
                                         (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                         (ulonglong)__tls_index * 8) + 8);
                      *psStack_68 = sVar10;
                      if (cVar8 == '\0') {
                        *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960e7d;
                        func_0x0001455db994();
                        sVar10 = *psStack_68;
                      }
                    }
                    else {
                      sVar10 = *psStack_68 + -1;
                      *psStack_68 = sVar10;
                    }
                    lVar23 = _DAT_14a95ded0;
                    if (sVar10 == 0) {
                      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
                        lVar19 = *plStack_78;
                      }
                      else {
                        *(undefined1 *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) = 1;
                        uStack_50 = uVar16;
                        *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_14096102b;
                        lVar19 = FUN_1400063f0();
                        *plStack_78 = lVar19;
                        uVar16 = uStack_50;
                      }
                      if (lVar19 != lVar23) {
                        *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960ecf;
                        FUN_1402c59f0(0x14a95deb8);
                      }
                    }
                  }
                  lVar23 = lStack_60;
                  uVar17 = ((ulonglong)puStack_70 & 0xffff) << 0x20;
                  uVar22 = uStack_54;
                  if ((uVar16 & 0xffffffffffff) == uVar17 + (uVar24 & 0xffffffff))
                  goto code_r0x000140960a5b;
                  uStack_98 = CONCAT31(uStack_98._1_3_,4);
                  uStack_94 = 0;
                  uStack_90 = 1;
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960f1e;
                  FUN_1454357e0(lVar23,0,&uStack_98);
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960f29;
                  FUN_140a85330(plVar4,plVar12);
                }
                uVar24 = uStack_c8 | uVar24 & 0xffffffff;
                *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960f47;
                FUN_141f970a0(&uStack_f0,plVar4,uVar24 | uVar17);
                lVar23 = lStack_60;
                uVar24 = (ulonglong)(uint)((int)uStack_c0 << 4);
                if ((*(short *)(*(longlong *)(_DAT_14abbf348 + 0x28) + 8 + uVar24) == sVar21) &&
                   (*(longlong **)(*(longlong *)(_DAT_14abbf348 + 0x28) + uVar24) == plVar12)) {
                  *(longlong *)(puStack_a0 + (ulonglong)uStack_58 * 0x28) = lStack_60;
                  puVar1 = (undefined8 *)(puStack_a0 + (ulonglong)uStack_58 * 0x28 + 8);
                  *puVar1 = uStack_f0;
                  puVar1[1] = uStack_e8;
                  puVar1[2] = uStack_e0;
                  puVar1[3] = uStack_d8;
                  uStack_58 = uStack_58 + 1;
                }
                else {
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960f7d;
                  FUN_14102e0c0(lVar23,&uStack_f0);
                }
                uVar22 = uStack_54;
                pcVar5 = *(code **)(*plVar12 + 0xb0);
                *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960f97;
                cVar8 = (*pcVar5)(plVar12);
                if ((cVar8 != '\0') && ((*(byte *)((longlong)plVar4 + 0x55) & 1) != 0)) {
                  lVar23 = plVar12[0x2e];
                  lVar19 = plVar12[0x34];
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960fc6;
                  uVar14 = func_0x000144e25940(lVar23,lVar19);
                  *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960fd1;
                  FUN_140103c40(plVar4,uVar14);
                  *(byte *)((longlong)plVar4 + 0x55) = *(byte *)((longlong)plVar4 + 0x55) & 0xfe;
                }
              }
              else {
code_r0x000140960a3c:
                *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140960a4b;
                FUN_140a85330(plVar4,plVar12);
                uVar22 = uStack_54;
              }
              *(longlong **)(puVar25 + (ulonglong)uVar22 * 8) = plVar4;
              uVar22 = uVar22 + 1;
            }
code_r0x000140960a5b:
            plVar27 = plVar27 + 1;
          } while (plVar27 != plStack_d0);
          if (uStack_58 != 0) {
            uStack_98 = SUB84(puStack_a0,0);
            uStack_94 = (uint)((ulonglong)puStack_a0 >> 0x20);
            uStack_90 = uStack_58;
            *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_140961099;
            FUN_14102e1a0();
          }
          cVar8 = cStack_41;
          lVar23 = lStack_b8;
          puVar20 = auStack_f8 + lVar26 + lVar13;
          if (uVar22 != 0) {
            lVar19 = 0;
            do {
              lVar15 = **(longlong **)(puVar25 + lVar19);
              if (lVar15 != 0) {
                if ((*(byte *)(lVar15 + 0x1a) & 0x20) == 0) {
                  *(undefined1 *)(lVar23 + 0x83) = 0;
                  if (*(char *)(lVar15 + 0x155) != '\x04') {
                    *(byte *)(lVar15 + 0x18) = *(byte *)(lVar15 + 0x18) | 0x20;
                  }
                  if (*(char *)(lVar15 + 0x156) == '\x01') {
                    *(undefined **)((longlong)auStack_120 + lVar26 + lVar13) = &UNK_1409610f8;
                    FUN_1414b2d80(lVar15,0x149fedda8,0);
                  }
                }
                else if (*(char *)(lVar15 + 0x155) != '\x04') {
                  *(byte *)(lVar15 + 0x18) = *(byte *)(lVar15 + 0x18) & 0xdf;
                }
              }
              lVar19 = lVar19 + 8;
              puVar20 = auStack_f8 + lVar26 + lVar13;
            } while ((ulonglong)uVar22 << 3 != lVar19);
          }
        }
        if (((cVar8 != '\0') && (*(char *)(lVar23 + 0x83) == '\0')) &&
           (*(char *)(lVar23 + 0x85) == '\x01')) {
          *(undefined **)(puVar20 + -0x28) = &UNK_140961141;
          (*pcRam0000000149095bb0)(&DAT_149095b98,lVar23);
        }
        return;
      }
    }
  }
  return;
}

