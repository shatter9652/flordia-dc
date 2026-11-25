// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140104090  size: 1058 bytes
// Name:    FUN_140104090
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400063f0, FUN_1400716e0, FUN_1451a2b50, FUN_1451a2bd0, FUN_1402c59f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140104090(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  short *psVar1;
  ushort *puVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  longlong lVar5;
  float fVar6;
  uint uVar9;
  char cVar10;
  short sVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong unaff_GS_OFFSET;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar27;
  undefined1 auVar26 [16];
  undefined8 uVar28;
  undefined8 uVar29;
  float fVar7;
  float fVar8;
  
  param_3 = param_3 & 0xffffffff;
  uVar18 = 0xffffffff;
  lVar15 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  if (*(short *)(lVar15 + 0x12e8) == 0) {
    psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370);
    sVar11 = *psVar1;
    if (sVar11 == 0) {
      FUN_1400716e0(0x14a95deb8);
      sVar11 = *psVar1;
    }
    *psVar1 = sVar11 + 1;
    lVar13 = *(longlong *)(param_2 + 0x38);
    if (lVar13 != 0) {
      puVar2 = (ushort *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
      uVar4 = *puVar2;
      uVar18 = (uint)uVar4;
      cVar10 = *(char *)((*(longlong **)(unaff_GS_OFFSET + 0x58))[__tls_index] + 8);
      if ((ulonglong)uVar4 == 0) {
        uVar18 = 0;
LAB_1401041df:
        *puVar2 = (short)uVar18 + 1;
        if (cVar10 == '\0') {
          func_0x0001455db994();
        }
      }
      else {
        lVar14 = *(longlong *)(lVar13 + 0xa8);
        if (cVar10 == '\0') {
          uVar16 = 0;
          plVar12 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
          cVar10 = '\0';
          do {
            if (cVar10 == '\0') {
              func_0x0001455db994();
              cVar10 = *(char *)(*(longlong *)
                                  (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                  (ulonglong)__tls_index * 8) + 8);
            }
            if (*plVar12 == lVar14) {
              param_3 = CONCAT71((int7)((ulonglong)plVar12 >> 8),(char)param_3);
              goto LAB_14010422f;
            }
            uVar18 = (uint)*puVar2;
            uVar16 = uVar16 + 1;
            plVar12 = plVar12 + 2;
          } while (uVar16 < *puVar2);
          param_3 = CONCAT71((int7)((ulonglong)plVar12 >> 8),(char)param_3);
          goto LAB_1401041df;
        }
        uVar16 = 0;
        plVar12 = (longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f0);
        do {
          if (*plVar12 == lVar14) goto LAB_14010422f;
          uVar16 = uVar16 + 1;
          plVar12 = plVar12 + 2;
        } while (uVar4 != uVar16);
        *puVar2 = uVar4 + 1;
      }
      lVar13 = *(longlong *)(lVar13 + 0xa8);
      lVar14 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      *(longlong *)(lVar14 + 0x12f0 + (ulonglong)(uVar18 << 4)) = lVar13;
      *(undefined2 *)(lVar14 + 0x12f8 + (ulonglong)(uVar18 << 4)) = 1;
      FUN_1400716e0(lVar13 + 8);
    }
  }
  goto LAB_14010424a;
LAB_14010422f:
  uVar18 = (uint)uVar16 & 0xffff;
  psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12f8 + uVar16 * 0x10);
  *psVar1 = *psVar1 + 1;
LAB_14010424a:
  lVar13 = *(longlong *)(param_2 + 0x20);
  lVar14 = *(longlong *)(param_2 + 0x38);
  if (lVar13 == 0) {
    if (lVar14 == 0) {
      FUN_1451a2b50(*(undefined8 *)(_DAT_14abbf348 + 0x141b0),param_1,param_2,param_3 & 0xffffffff);
      goto LAB_1401042d6;
    }
    lVar13 = param_2;
    if ((*(byte *)(param_2 + 0x1c) & 8) != 0) {
      lVar13 = *(longlong *)(**(longlong **)(lVar14 + 0xa8) + 0x80);
    }
    lVar13 = FUN_1451a2bd0(*(undefined8 *)(_DAT_14abbf348 + 0x141b0),*(undefined1 *)(lVar13 + 0x19),
                           *(undefined2 *)(lVar13 + 0x152),param_3 & 0xffffffff);
    if (lVar13 == 0) {
      uVar21 = *(undefined8 *)(param_2 + 0x50);
      uVar22 = *(undefined8 *)(param_2 + 0x58);
      uVar23 = *(undefined8 *)(param_2 + 0x60);
      uVar24 = *(undefined8 *)(param_2 + 0x68);
      uVar25 = *(undefined8 *)(param_2 + 0x68);
      uVar27 = *(undefined8 *)(param_2 + 0x70);
      uVar28 = *(undefined8 *)(param_2 + 0x78);
      param_1[2] = *(undefined8 *)(param_2 + 0x60);
      param_1[3] = uVar25;
      param_1[4] = uVar27;
      param_1[5] = uVar28;
      *param_1 = uVar21;
      param_1[1] = uVar22;
      param_1[2] = uVar23;
      param_1[3] = uVar24;
      auVar3 = *(undefined1 (*) [16])(param_2 + 0x80);
      auVar26 = vpunpckhwd_avx(auVar3,auVar3);
      auVar26 = vpsrad_avx(auVar26,0x10);
      auVar26 = vcvtdq2ps_avx(auVar26);
      auVar26 = vshufpd_avx(auVar26,auVar26,3);
      fVar6 = auVar26._4_4_ * _UNK_146159c94;
      fVar7 = auVar26._8_4_ * _UNK_146159c98;
      fVar8 = auVar26._12_4_ * _UNK_146159c9c;
      *(float *)(param_1 + 6) = auVar26._0_4_ * _DAT_146159c90 + auVar3._0_4_;
      *(float *)((longlong)param_1 + 0x34) = fVar6 + auVar3._4_4_;
      *(float *)(param_1 + 7) = fVar7 + auVar3._8_4_;
      *(float *)((longlong)param_1 + 0x3c) = fVar8 + auVar3._12_4_;
      goto LAB_1401042d6;
    }
LAB_1401042c3:
    uVar21 = *(undefined8 *)(lVar14 + 0x40);
    uVar22 = *(undefined8 *)(lVar14 + 0x48);
    uVar23 = *(undefined8 *)(lVar14 + 0x50);
    uVar24 = *(undefined8 *)(lVar14 + 0x58);
    uVar25 = *(undefined8 *)(lVar14 + 0x60);
    uVar27 = *(undefined8 *)(lVar14 + 0x68);
    uVar28 = *(undefined8 *)(lVar14 + 0x70);
    uVar29 = *(undefined8 *)(lVar14 + 0x78);
  }
  else {
    if (lVar14 != 0) goto LAB_1401042c3;
    uVar21 = *(undefined8 *)(lVar13 + 0x1e0);
    uVar22 = *(undefined8 *)(lVar13 + 0x1e8);
    uVar23 = *(undefined8 *)(lVar13 + 0x1f0);
    uVar24 = *(undefined8 *)(lVar13 + 0x1f8);
    uVar25 = *(undefined8 *)(lVar13 + 0x200);
    uVar27 = *(undefined8 *)(lVar13 + 0x208);
    uVar28 = *(undefined8 *)(lVar13 + 0x210);
    uVar29 = *(undefined8 *)(lVar13 + 0x218);
  }
  param_1[4] = uVar25;
  param_1[5] = uVar27;
  param_1[6] = uVar28;
  param_1[7] = uVar29;
  *param_1 = uVar21;
  param_1[1] = uVar22;
  param_1[2] = uVar23;
  param_1[3] = uVar24;
LAB_1401042d6:
  if (*(short *)(lVar15 + 0x12e8) == 0) {
    if (-1 < (int)uVar18) {
      if (*(char *)(*(longlong *)
                     (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) + 8) ==
          '\0') {
        func_0x0001455db994();
      }
      lVar15 = **(longlong **)(unaff_GS_OFFSET + 0x58);
      psVar1 = (short *)(lVar15 + 0x12f8 + (ulonglong)uVar18 * 0x10);
      *psVar1 = *psVar1 + -1;
      if (*psVar1 == 0) {
        lVar15 = *(longlong *)(lVar15 + 0x12f0 + (ulonglong)uVar18 * 0x10);
        lVar13 = *(longlong *)(lVar15 + 0x20);
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar14 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
        }
        else {
          lVar5 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined1 *)(lVar5 + 0x1440) = 1;
          lVar14 = FUN_1400063f0();
          *(longlong *)(lVar5 + 0x1438) = lVar14;
        }
        if (lVar14 != lVar13) {
          FUN_1402c59f0(lVar15 + 8);
        }
        psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x12ea);
        *psVar1 = *psVar1 + -1;
      }
    }
    psVar1 = (short *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1370);
    *psVar1 = *psVar1 + -1;
    lVar15 = _DAT_14a95ded0;
    if (*psVar1 == 0) {
      if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
        lVar13 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
      }
      else {
        lVar14 = **(longlong **)(unaff_GS_OFFSET + 0x58);
        *(undefined1 *)(lVar14 + 0x1440) = 1;
        lVar13 = FUN_1400063f0();
        *(longlong *)(lVar14 + 0x1438) = lVar13;
      }
      lVar14 = _DAT_14a95ded0;
      if (lVar13 != lVar15) {
        if (*(char *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1440) == '\x01') {
          lVar15 = *(longlong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1438);
        }
        else {
          lVar13 = **(longlong **)(unaff_GS_OFFSET + 0x58);
          *(undefined1 *)(lVar13 + 0x1440) = 1;
          lVar15 = FUN_1400063f0();
          *(longlong *)(lVar13 + 0x1438) = lVar15;
        }
        if (lVar15 != lVar14) {
          LOCK();
          uVar18 = uRam000000014a95deb8 - 1;
          UNLOCK();
          uVar17 = uRam000000014a95deb8 - 1;
          uRam000000014a95deb8 = uVar18;
          if ((char)uVar17 == '\0') {
            if ((uVar17 & 0xff0000) == 0) {
              if ((uVar17 & 0xff00) != 0) {
                do {
                  LOCK();
                  bVar19 = uVar18 != uRam000000014a95deb8;
                  uVar17 = uVar18 & 0xffff00ff;
                  if (bVar19) {
                    uVar18 = uRam000000014a95deb8;
                    uVar17 = uRam000000014a95deb8;
                  }
                  uRam000000014a95deb8 = uVar17;
                  UNLOCK();
                } while (bVar19);
                uVar18 = uVar18 >> 8 & 0xff;
                if (uVar18 != 0) {
                  lVar15 = lRam000000014a95dec0;
                  do {
                    while (-1 < lVar15) {
                      LOCK();
                      lVar13 = lVar15;
                      lVar14 = lVar15 + ((ulonglong)uVar18 << 0x20);
                      if (lVar15 != lRam000000014a95dec0) {
                        lVar13 = lRam000000014a95dec0;
                        lVar14 = lRam000000014a95dec0;
                      }
                      lRam000000014a95dec0 = lVar14;
                      UNLOCK();
                      bVar19 = lVar15 == lVar13;
                      lVar15 = lVar13;
                      if (bVar19) {
                        return;
                      }
                    }
                    cVar10 = FUN_1400062d0(0x14a95dec0,uVar18,&stack0xffffffffffffffc8);
                  } while (cVar10 == '\0');
                }
              }
            }
            else {
              do {
                if ((uVar17 & 0xff0000) == 0) {
                  return;
                }
                LOCK();
                bVar19 = uVar17 != uRam000000014a95deb8;
                uVar18 = uVar17;
                uVar9 = uVar17 - 0x10000;
                if (bVar19) {
                  uVar18 = uRam000000014a95deb8;
                  uVar9 = uRam000000014a95deb8;
                }
                uRam000000014a95deb8 = uVar9;
                UNLOCK();
                lVar15 = lRam000000014a95dec8;
                if (!bVar19) {
                  do {
                    while (lVar15 < 0) {
                      cVar10 = FUN_1400062d0(0x14a95dec8,1,&stack0xffffffffffffffc8);
                      uVar18 = uVar17;
                      if (cVar10 != '\0') goto code_r0x0001402c5ac2;
                    }
                    LOCK();
                    lVar13 = lVar15;
                    lVar14 = lVar15 + 0x100000000;
                    if (lVar15 != lRam000000014a95dec8) {
                      lVar13 = lRam000000014a95dec8;
                      lVar14 = lRam000000014a95dec8;
                    }
                    lRam000000014a95dec8 = lVar14;
                    UNLOCK();
                    bVar20 = lVar15 != lVar13;
                    uVar18 = uVar17;
                    lVar15 = lVar13;
                  } while (bVar20);
                }
code_r0x0001402c5ac2:
                uVar17 = uVar18;
              } while (bVar19);
            }
          }
        }
        return;
      }
    }
  }
  return;
}

