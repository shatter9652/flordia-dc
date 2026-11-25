// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140111aa0  size: 2877 bytes
// Name:    FUN_140111aa0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140006180, FUN_1400062d0, FUN_144e409c0, FUN_144dc2420, FUN_144fae500
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000140111c67) */
/* WARNING: Removing unreachable block (ram,0x000140111c74) */
/* WARNING: Removing unreachable block (ram,0x000140111c92) */
/* WARNING: Removing unreachable block (ram,0x000140112068) */
/* WARNING: Removing unreachable block (ram,0x000140112075) */
/* WARNING: Removing unreachable block (ram,0x000140112093) */
/* WARNING: Removing unreachable block (ram,0x000140111c5c) */
/* WARNING: Removing unreachable block (ram,0x00014011205d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140111aa0(longlong param_1,undefined1 (*param_2) [16])

{
  uint *puVar1;
  int *piVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [8];
  ulonglong uVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  short sVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  undefined4 uVar19;
  longlong *plVar20;
  ushort uVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  longlong unaff_GS_OFFSET;
  bool bVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  undefined1 auStack_d8 [8];
  float fStack_d0;
  undefined1 (*pauStack_c0) [16];
  longlong lStack_b8;
  longlong lStack_b0;
  undefined1 aauStack_a8 [6] [16];
  
  lVar10 = *(longlong *)(param_1 + 0x1160);
  uVar19 = *(undefined4 *)(lVar10 + 0x9c);
  cVar4 = func_0x000144fe33d0(uVar19);
  if (cVar4 == '\0') {
    auVar27._0_12_ = ZEXT812(0);
    auVar27._12_4_ = 0;
    *param_2 = auVar27;
    return;
  }
  lVar6 = *(longlong *)(lVar10 + 0x38);
  auVar27 = *(undefined1 (*) [16])(lVar6 + 0x80);
  auVar29 = ZEXT1664(auVar27);
  auVar34 = ZEXT1664(*(undefined1 (*) [16])(lVar6 + 0x50));
  auVar32 = ZEXT1664(*(undefined1 (*) [16])(lVar6 + 0x60));
  auVar31 = ZEXT1664(*(undefined1 (*) [16])(lVar6 + 0x70));
  auVar26 = vpunpckhwd_avx(auVar27,auVar27);
  auVar26 = vpsrad_avx(auVar26,0x10);
  auVar26 = vcvtdq2ps_avx(auVar26);
  auVar26 = vshufpd_avx(auVar26,auVar26,3);
  auVar35 = ZEXT1664(auVar26);
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
    auVar27 = auVar29._0_16_;
    auVar26 = auVar35._0_16_;
    uVar19 = *(undefined4 *)(lVar10 + 0x9c);
  }
  auVar29 = ZEXT1664(CONCAT412(auVar26._12_4_ * _UNK_146159c9c + auVar27._12_4_,
                               CONCAT48(auVar26._8_4_ * _UNK_146159c98 + auVar27._8_4_,
                                        CONCAT44(auVar26._4_4_ * _UNK_146159c94 + auVar27._4_4_,
                                                 auVar26._0_4_ * _DAT_146159c90 + auVar27._0_4_))));
  lVar10 = **(longlong **)(unaff_GS_OFFSET + 0x58);
  cVar4 = *(char *)(lVar10 + 0x138b);
  lVar6 = func_0x000144e25990(uVar19);
  if ((lVar6 == 0) || (cVar4 == '\0')) {
LAB_140111bb9:
    FUN_144dc2420(*(undefined8 *)(param_1 + 0x1160),*(undefined4 *)(param_1 + 0x11a0),auStack_d8);
    auVar27 = auVar31._0_16_;
    auVar26 = auVar32._0_16_;
    auVar33 = auVar34._0_16_;
  }
  else {
    uVar22 = (ulonglong)*(ushort *)(lVar6 + 0x14);
    uVar7 = uVar22 & 0xff;
    if ((uVar7 != 0xff) &&
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar7 >> 6) * 8) >>
         (uVar22 & 0x3f) & 1) != 0)) goto LAB_140111bb9;
    uVar14 = (uint)*(ushort *)(lVar6 + 0x14);
    iVar17 = (uVar14 & 0xffffff00) + 0x100 + (int)uVar7;
    while( true ) {
      LOCK();
      uVar21 = *(ushort *)(lVar6 + 0x14);
      bVar24 = (ushort)uVar14 == uVar21;
      if (bVar24) {
        *(ushort *)(lVar6 + 0x14) = (ushort)iVar17;
      }
      else {
        uVar14 = (uint)uVar21;
      }
      UNLOCK();
      if (bVar24) break;
      uVar22 = (ulonglong)uVar14;
      iVar17 = uVar14 + 0x100;
    }
    if ((ushort)uVar22 < 0x100) {
      do {
        do {
          uVar21 = (ushort)(_DAT_14a9b3da8 >> 0x20);
        } while (uVar21 == 0x40);
        uVar7 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
        LOCK();
        UNLOCK();
        bVar12 = (byte)(_DAT_14a9b3da8 >> 0x20);
        uVar21 = uVar21 & 0xff;
        _DAT_14a9b3da8 = uVar7;
      } while (0x3f < uVar21);
      uVar14 = (uint)uVar22 | 0x100;
      LOCK();
      uVar3 = *(ushort *)(lVar6 + 0x14);
      bVar24 = (ushort)uVar14 == uVar3;
      if (bVar24) {
        *(ushort *)(lVar6 + 0x14) = uVar21 | 0x100;
      }
      else {
        uVar14 = (uint)uVar3;
      }
      UNLOCK();
      while (!bVar24) {
        LOCK();
        uVar3 = *(ushort *)(lVar6 + 0x14);
        bVar24 = (ushort)uVar14 == uVar3;
        if (bVar24) {
          *(ushort *)(lVar6 + 0x14) = (ushort)uVar14 & 0xff00 | uVar21;
        }
        else {
          uVar14 = (uint)uVar3;
        }
        UNLOCK();
      }
    }
    else {
      bVar12 = (byte)uVar22;
      while (bVar12 == 0xff) {
        bVar12 = (byte)*(undefined2 *)(lVar6 + 0x14);
      }
    }
    uVar7 = (ulonglong)bVar12;
    puVar1 = (uint *)(uVar7 * 0x18 + 0x14a9b3708);
    puVar23 = (ulonglong *)(uVar7 * 0x18 + 0x14a9b3710);
    uVar14 = *puVar1;
    pauStack_c0 = param_2;
    lStack_b8 = lVar10;
    lStack_b0 = param_1;
LAB_140111d1c:
    do {
      uVar5 = uVar14;
      param_1 = lStack_b0;
      if ((uVar5 & 0x1ff0000) != 0) {
        LOCK();
        uVar14 = *puVar1;
        bVar24 = uVar5 == uVar14;
        if (bVar24) {
          *puVar1 = uVar5 + 0x100;
          uVar14 = uVar5;
        }
        UNLOCK();
        if (bVar24) {
          uVar18 = (uint)(*puVar23 >> 7) & 0xffffff;
          uVar22 = *puVar23;
          if ((*puVar23 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar22 < 0x100000000) {
                uVar15 = *puVar23;
              }
              else {
                LOCK();
                uVar15 = *puVar23;
                if (uVar22 == uVar15) {
                  *puVar23 = uVar22 - 0x100000000;
                  uVar15 = uVar22;
                }
                UNLOCK();
                uVar14 = uVar5;
                if (uVar22 == uVar15) goto LAB_140111d1c;
              }
              uVar18 = uVar18 - 1;
              uVar22 = uVar15;
            } while (uVar18 != 0);
          }
          uVar22 = *puVar23;
          do {
            auStack_d8 = (undefined1  [8])uVar22;
            auVar8 = (undefined1  [8])uVar22;
            while ((longlong)auVar8 < 0x100000000) {
              cVar4 = FUN_140006180(puVar23,1,auStack_d8);
              uVar14 = uVar5;
              if (cVar4 != '\0') goto LAB_140111d1c;
              auVar8 = auStack_d8;
            }
            LOCK();
            uVar22 = *puVar23;
            if (auVar8 == (undefined1  [8])uVar22) {
              *puVar23 = (longlong)auVar8 - 0x100000000;
              uVar22 = (ulonglong)auVar8;
            }
            UNLOCK();
            uVar14 = uVar5;
          } while (auStack_d8 != (undefined1  [8])uVar22);
        }
        goto LAB_140111d1c;
      }
      LOCK();
      uVar14 = *puVar1;
      bVar24 = uVar5 == uVar14;
      if (bVar24) {
        *puVar1 = uVar5 + 1;
        uVar14 = uVar5;
      }
      UNLOCK();
    } while (!bVar24);
    lVar10 = **(longlong **)(unaff_GS_OFFSET + 0x58);
    puVar23 = (ulonglong *)(lVar10 + 0x1398 + (ulonglong)(bVar12 >> 6) * 8);
    *puVar23 = *puVar23 | 1L << (uVar7 & 0x3f);
    FUN_144dc2420(*(undefined8 *)(lStack_b0 + 0x1160),*(undefined4 *)(lStack_b0 + 0x11a0));
    auVar27 = auVar31._0_16_;
    auVar26 = auVar32._0_16_;
    auVar33 = auVar34._0_16_;
    bVar11 = (byte)*(undefined2 *)(lVar6 + 0x14);
    bVar12 = bVar11 & 0x3f;
    puVar23 = (ulonglong *)(lVar10 + 0x1398 + (ulonglong)(bVar11 >> 6) * 8);
    *puVar23 = *puVar23 & (-2L << bVar12 | 0xfffffffffffffffeU >> 0x40 - bVar12);
    uVar7 = (ulonglong)(byte)*(undefined2 *)(lVar6 + 0x14);
    LOCK();
    piVar2 = (int *)(uVar7 * 0x18 + 0x14a9b3708);
    iVar17 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    uVar14 = iVar17 - 1;
    if ((char)uVar14 == '\0') {
      lVar10 = uVar7 * 0x18;
      puVar1 = (uint *)(lVar10 + 0x14a9b3708);
      if ((uVar14 & 0xff0000) == 0) {
        if ((uVar14 & 0xff00) != 0) {
          uVar14 = *puVar1;
          do {
            LOCK();
            uVar5 = *puVar1;
            bVar24 = uVar14 == uVar5;
            if (bVar24) {
              *puVar1 = uVar14 & 0xffff00ff;
              uVar5 = uVar14;
            }
            uVar14 = uVar5;
            UNLOCK();
          } while (!bVar24);
          uVar14 = uVar14 >> 8 & 0xff;
          if (uVar14 != 0) {
            puVar23 = (ulonglong *)(lVar10 + 0x14a9b3710);
            uVar22 = *(ulonglong *)(lVar10 + 0x14a9b3710);
            do {
              while( true ) {
                uStack_e8 = uVar22;
                auVar27 = auVar31._0_16_;
                auVar26 = auVar32._0_16_;
                auVar33 = auVar34._0_16_;
                if ((longlong)uStack_e8 < 0) break;
                LOCK();
                uVar22 = *puVar23;
                if (uStack_e8 == uVar22) {
                  *puVar23 = uStack_e8 + ((ulonglong)uVar14 << 0x20);
                  uVar22 = uStack_e8;
                }
                UNLOCK();
                if (uStack_e8 == uVar22) goto LAB_140111e47;
              }
              cVar4 = FUN_1400062d0(puVar23,uVar14);
              auVar27 = auVar31._0_16_;
              auVar26 = auVar32._0_16_;
              auVar33 = auVar34._0_16_;
              uVar22 = uStack_e8;
            } while (cVar4 == '\0');
          }
        }
      }
      else {
        puVar23 = (ulonglong *)(lVar10 + 0x14a9b3718);
        do {
          auVar27 = auVar31._0_16_;
          auVar26 = auVar32._0_16_;
          auVar33 = auVar34._0_16_;
          if ((uVar14 & 0xff0000) == 0) break;
          LOCK();
          uVar5 = *puVar1;
          bVar24 = uVar14 == uVar5;
          if (bVar24) {
            *puVar1 = uVar14 - 0x10000;
            uVar5 = uVar14;
          }
          UNLOCK();
          if (bVar24) {
            uVar22 = *puVar23;
            do {
              while (uStack_e8 = uVar22, -1 < (longlong)uStack_e8) {
                LOCK();
                uVar22 = *puVar23;
                if (uStack_e8 == uVar22) {
                  *puVar23 = uStack_e8 + 0x100000000;
                  uVar22 = uStack_e8;
                }
                UNLOCK();
                uVar5 = uVar14;
                if (uStack_e8 == uVar22) goto LAB_14011215b;
              }
              cVar4 = FUN_1400062d0(puVar23,1);
              uVar5 = uVar14;
              uVar22 = uStack_e8;
            } while (cVar4 == '\0');
          }
LAB_14011215b:
          uVar14 = uVar5;
          auVar27 = auVar31._0_16_;
          auVar26 = auVar32._0_16_;
          auVar33 = auVar34._0_16_;
        } while (!bVar24);
      }
    }
LAB_140111e47:
    uVar3 = *(ushort *)(lVar6 + 0x14);
    sVar13 = *(byte *)(lVar6 + 0x15) - 1;
    bVar12 = (byte)sVar13;
    LOCK();
    uVar21 = *(ushort *)(lVar6 + 0x14);
    bVar24 = uVar3 == uVar21;
    if (bVar24) {
      *(ushort *)(lVar6 + 0x14) =
           (ushort)(byte)(-(bVar12 == 0) | *(byte *)(lVar6 + 0x14)) | sVar13 * 0x100;
      uVar21 = uVar3;
    }
    uVar14 = (uint)uVar21;
    UNLOCK();
    while (!bVar24) {
      uVar21 = (ushort)uVar14 & 0xff;
      bVar12 = (char)(uVar14 >> 8) - 1;
      if (bVar12 == 0) {
        uVar21 = 0xff;
      }
      LOCK();
      uVar3 = *(ushort *)(lVar6 + 0x14);
      bVar24 = (ushort)uVar14 == uVar3;
      if (bVar24) {
        *(ushort *)(lVar6 + 0x14) = uVar21 | (ushort)bVar12 << 8;
      }
      else {
        uVar14 = (uint)uVar3;
      }
      UNLOCK();
    }
    lVar10 = lStack_b8;
    param_2 = pauStack_c0;
    if (bVar12 == 0) {
      uVar16 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
      uVar22 = _DAT_14a9b3da8 >> 0x30;
      uVar15 = _DAT_14a9b3da8 & 0xffffffff;
      do {
        *(short *)(uVar7 * 2 + 0x14a9b3d20) = (short)uVar16;
        uVar9 = uVar15 & 0xffffffff;
        uVar15 = (uVar16 & 0xffff) << 0x20 | uVar22 << 0x30 | uVar9;
        LOCK();
        bVar24 = uVar15 != _DAT_14a9b3da8;
        uVar22 = uVar16 << 0x30 | uVar7 << 0x20 | uVar9;
        if (bVar24) {
          uVar15 = _DAT_14a9b3da8;
          uVar22 = _DAT_14a9b3da8;
        }
        _DAT_14a9b3da8 = uVar22;
        UNLOCK();
        uVar16 = uVar15 >> 0x20;
        uVar22 = uVar15 >> 0x30;
      } while (bVar24);
    }
  }
  auVar30._0_4_ =
       fStack_d0 * auVar27._0_4_ +
       (float)auStack_d8._4_4_ * auVar26._0_4_ +
       (float)auStack_d8._0_4_ * auVar33._0_4_ + auVar29._0_4_;
  auVar30._4_4_ =
       fStack_d0 * auVar27._4_4_ +
       (float)auStack_d8._4_4_ * auVar26._4_4_ +
       (float)auStack_d8._0_4_ * auVar33._4_4_ + auVar29._4_4_;
  auVar30._8_4_ =
       fStack_d0 * auVar27._8_4_ +
       (float)auStack_d8._4_4_ * auVar26._8_4_ +
       (float)auStack_d8._0_4_ * auVar33._8_4_ + auVar29._8_4_;
  auVar30._12_4_ =
       fStack_d0 * auVar27._12_4_ +
       (float)auStack_d8._4_4_ * auVar26._12_4_ +
       (float)auStack_d8._0_4_ * auVar33._12_4_ + auVar29._12_4_;
  auVar31 = ZEXT1664(auVar30);
  lVar6 = *(longlong *)(param_1 + 0x1160);
  _auStack_d8 = auVar30;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  if (lVar6 == 0) {
    lVar10 = 0;
  }
  else {
    cVar4 = *(char *)(lVar10 + 0x138b);
    lVar10 = func_0x000144db7a10(*(undefined4 *)(lVar6 + 0x9c));
    bVar24 = false;
    if ((lVar10 == 0) || (bVar24 = false, cVar4 == '\0')) goto LAB_14011227f;
    uVar22 = (ulonglong)*(ushort *)(lVar10 + 0x214);
    uVar7 = uVar22 & 0xff;
    if ((uVar7 == 0xff) ||
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar7 >> 6) * 8) >>
         (uVar22 & 0x3f) & 1) == 0)) {
      uVar14 = (uint)*(ushort *)(lVar10 + 0x214);
      iVar17 = (uVar14 & 0xffffff00) + 0x100 + (int)uVar7;
      while( true ) {
        LOCK();
        uVar21 = *(ushort *)(lVar10 + 0x214);
        bVar24 = (ushort)uVar14 == uVar21;
        if (bVar24) {
          *(ushort *)(lVar10 + 0x214) = (ushort)iVar17;
        }
        else {
          uVar14 = (uint)uVar21;
        }
        UNLOCK();
        if (bVar24) break;
        uVar22 = (ulonglong)uVar14;
        iVar17 = uVar14 + 0x100;
      }
      if ((ushort)uVar22 < 0x100) {
        do {
          do {
            uVar21 = (ushort)(_DAT_14a9b3da8 >> 0x20);
          } while (uVar21 == 0x40);
          uVar7 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                  (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                  (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
          LOCK();
          UNLOCK();
          bVar12 = (byte)(_DAT_14a9b3da8 >> 0x20);
          uVar21 = uVar21 & 0xff;
          _DAT_14a9b3da8 = uVar7;
        } while (0x3f < uVar21);
        uVar14 = (uint)uVar22 | 0x100;
        LOCK();
        uVar3 = *(ushort *)(lVar10 + 0x214);
        bVar24 = (ushort)uVar14 == uVar3;
        if (bVar24) {
          *(ushort *)(lVar10 + 0x214) = uVar21 | 0x100;
        }
        else {
          uVar14 = (uint)uVar3;
        }
        UNLOCK();
        while (!bVar24) {
          LOCK();
          uVar3 = *(ushort *)(lVar10 + 0x214);
          bVar24 = (ushort)uVar14 == uVar3;
          if (bVar24) {
            *(ushort *)(lVar10 + 0x214) = (ushort)uVar14 & 0xff00 | uVar21;
          }
          else {
            uVar14 = (uint)uVar3;
          }
          UNLOCK();
        }
      }
      else {
        bVar12 = (byte)uVar22;
        while (bVar12 == 0xff) {
          bVar12 = (byte)*(undefined2 *)(lVar10 + 0x214);
        }
      }
      uVar7 = (ulonglong)bVar12;
      puVar1 = (uint *)(uVar7 * 0x18 + 0x14a9b3708);
      puVar23 = (ulonglong *)(uVar7 * 0x18 + 0x14a9b3710);
      uVar14 = *puVar1;
      pauStack_c0 = param_2;
LAB_1401121ac:
      do {
        uVar5 = uVar14;
        if ((uVar5 & 0x1ff0000) != 0) {
          LOCK();
          uVar14 = *puVar1;
          bVar24 = uVar5 == uVar14;
          if (bVar24) {
            *puVar1 = uVar5 + 0x100;
            uVar14 = uVar5;
          }
          UNLOCK();
          if (bVar24) {
            uVar18 = (uint)(*puVar23 >> 7) & 0xffffff;
            uVar22 = *puVar23;
            if ((*puVar23 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar22 < 0x100000000) {
                  uVar15 = *puVar23;
                }
                else {
                  LOCK();
                  uVar15 = *puVar23;
                  if (uVar22 == uVar15) {
                    *puVar23 = uVar22 - 0x100000000;
                    uVar15 = uVar22;
                  }
                  UNLOCK();
                  uVar14 = uVar5;
                  if (uVar22 == uVar15) goto LAB_1401121ac;
                }
                uVar18 = uVar18 - 1;
                uVar22 = uVar15;
              } while (uVar18 != 0);
            }
            uVar22 = *puVar23;
            do {
              while (uStack_e8 = uVar22, 0xffffffff < (longlong)uStack_e8) {
                LOCK();
                uVar22 = *puVar23;
                if (uStack_e8 == uVar22) {
                  *puVar23 = uStack_e8 - 0x100000000;
                  uVar22 = uStack_e8;
                }
                UNLOCK();
                uVar14 = uVar5;
                if (uStack_e8 == uVar22) goto LAB_1401121ac;
              }
              cVar4 = FUN_140006180(puVar23,1,&uStack_e8);
              uVar14 = uVar5;
              uVar22 = uStack_e8;
            } while (cVar4 == '\0');
          }
          goto LAB_1401121ac;
        }
        LOCK();
        uVar14 = *puVar1;
        bVar24 = uVar5 == uVar14;
        if (bVar24) {
          *puVar1 = uVar5 + 1;
          uVar14 = uVar5;
        }
        UNLOCK();
      } while (!bVar24);
      auVar31 = ZEXT1664(_auStack_d8);
      puVar23 = (ulonglong *)
                (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar12 >> 6) * 8);
      *puVar23 = *puVar23 | 1L << (uVar7 & 0x3f);
      bVar24 = true;
      param_2 = pauStack_c0;
      goto LAB_14011227f;
    }
  }
  bVar24 = false;
LAB_14011227f:
  FUN_144e409c0(lVar10,&uStack_e8);
  FUN_144fae500(lVar10,aauStack_a8);
  auVar26 = vsubps_avx(auVar31._0_16_,auVar29._0_16_);
  auVar27 = vshufps_avx(auVar26,auVar26,0xd2);
  auVar26 = vshufps_avx(auVar26,auVar26,0xc9);
  auVar33 = vshufps_avx(aauStack_a8[0],aauStack_a8[0],0xc9);
  auVar30 = vshufps_avx(aauStack_a8[0],aauStack_a8[0],0xd2);
  auVar28._0_4_ =
       -(auVar30._0_4_ * auVar26._0_4_) + auVar33._0_4_ * auVar27._0_4_ + (float)uStack_e8;
  auVar28._4_4_ = -(auVar30._4_4_ * auVar26._4_4_) + auVar33._4_4_ * auVar27._4_4_ + uStack_e8._4_4_
  ;
  auVar28._8_4_ = -(auVar30._8_4_ * auVar26._8_4_) + auVar33._8_4_ * auVar27._8_4_ + fStack_e0;
  auVar28._12_4_ = -(auVar30._12_4_ * auVar26._12_4_) + auVar33._12_4_ * auVar27._12_4_ + fStack_dc;
  *param_2 = auVar28;
  if (bVar24) {
    bVar11 = (byte)*(undefined2 *)(lVar10 + 0x214);
    bVar12 = bVar11 & 0x3f;
    puVar23 = (ulonglong *)
              (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar11 >> 6) * 8);
    *puVar23 = *puVar23 & (-2L << bVar12 | 0xfffffffffffffffeU >> 0x40 - bVar12);
    uVar7 = (ulonglong)(byte)*(undefined2 *)(lVar10 + 0x214);
    LOCK();
    piVar2 = (int *)(uVar7 * 0x18 + 0x14a9b3708);
    iVar17 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    uVar14 = iVar17 - 1;
    if ((char)uVar14 == '\0') {
      lVar6 = uVar7 * 0x18;
      puVar1 = (uint *)(lVar6 + 0x14a9b3708);
      if ((uVar14 & 0xff0000) == 0) {
        if ((uVar14 & 0xff00) != 0) {
          uVar14 = *puVar1;
          do {
            LOCK();
            uVar5 = *puVar1;
            bVar24 = uVar14 == uVar5;
            if (bVar24) {
              *puVar1 = uVar14 & 0xffff00ff;
              uVar5 = uVar14;
            }
            uVar14 = uVar5;
            UNLOCK();
          } while (!bVar24);
          uVar14 = uVar14 >> 8 & 0xff;
          if (uVar14 != 0) {
            plVar20 = (longlong *)(lVar6 + 0x14a9b3710);
            uStack_e8 = *(longlong *)(lVar6 + 0x14a9b3710);
            do {
              while (-1 < (longlong)uStack_e8) {
                LOCK();
                lVar6 = *plVar20;
                if (uStack_e8 == lVar6) {
                  *plVar20 = uStack_e8 + ((ulonglong)uVar14 << 0x20);
                  lVar6 = uStack_e8;
                }
                UNLOCK();
                bVar24 = uStack_e8 == lVar6;
                uStack_e8 = lVar6;
                if (bVar24) goto LAB_14011232f;
              }
              cVar4 = FUN_1400062d0(plVar20,uVar14);
            } while (cVar4 == '\0');
          }
        }
      }
      else {
        plVar20 = (longlong *)(lVar6 + 0x14a9b3718);
        do {
          if ((uVar14 & 0xff0000) == 0) break;
          LOCK();
          uVar5 = *puVar1;
          bVar24 = uVar14 == uVar5;
          if (bVar24) {
            *puVar1 = uVar14 - 0x10000;
            uVar5 = uVar14;
          }
          UNLOCK();
          if (bVar24) {
            uStack_e8 = *plVar20;
            do {
              while (-1 < (longlong)uStack_e8) {
                LOCK();
                lVar6 = *plVar20;
                if (uStack_e8 == lVar6) {
                  *plVar20 = uStack_e8 + 0x100000000;
                  lVar6 = uStack_e8;
                }
                UNLOCK();
                bVar25 = uStack_e8 == lVar6;
                uVar5 = uVar14;
                uStack_e8 = lVar6;
                if (bVar25) goto LAB_1401124c5;
              }
              cVar4 = FUN_1400062d0(plVar20,1);
              uVar5 = uVar14;
            } while (cVar4 == '\0');
          }
LAB_1401124c5:
          uVar14 = uVar5;
        } while (!bVar24);
      }
    }
LAB_14011232f:
    uVar3 = *(ushort *)(lVar10 + 0x214);
    sVar13 = *(byte *)(lVar10 + 0x215) - 1;
    bVar12 = (byte)sVar13;
    LOCK();
    uVar21 = *(ushort *)(lVar10 + 0x214);
    bVar24 = uVar3 == uVar21;
    if (bVar24) {
      *(ushort *)(lVar10 + 0x214) =
           (ushort)(byte)(-(bVar12 == 0) | *(byte *)(lVar10 + 0x214)) | sVar13 * 0x100;
      uVar21 = uVar3;
    }
    uVar14 = (uint)uVar21;
    UNLOCK();
    while (!bVar24) {
      uVar21 = (ushort)uVar14 & 0xff;
      bVar12 = (char)(uVar14 >> 8) - 1;
      if (bVar12 == 0) {
        uVar21 = 0xff;
      }
      LOCK();
      uVar3 = *(ushort *)(lVar10 + 0x214);
      bVar24 = (ushort)uVar14 == uVar3;
      if (bVar24) {
        *(ushort *)(lVar10 + 0x214) = uVar21 | (ushort)bVar12 << 8;
      }
      else {
        uVar14 = (uint)uVar3;
      }
      UNLOCK();
    }
    if (bVar12 == 0) {
      uVar16 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
      uVar22 = _DAT_14a9b3da8 >> 0x30;
      uVar15 = _DAT_14a9b3da8 & 0xffffffff;
      do {
        *(short *)(uVar7 * 2 + 0x14a9b3d20) = (short)uVar16;
        uVar9 = uVar15 & 0xffffffff;
        uVar15 = (uVar16 & 0xffff) << 0x20 | uVar22 << 0x30 | uVar9;
        LOCK();
        bVar24 = uVar15 != _DAT_14a9b3da8;
        uVar22 = uVar16 << 0x30 | uVar7 << 0x20 | uVar9;
        if (bVar24) {
          uVar15 = _DAT_14a9b3da8;
          uVar22 = _DAT_14a9b3da8;
        }
        _DAT_14a9b3da8 = uVar22;
        UNLOCK();
        uVar16 = uVar15 >> 0x20;
        uVar22 = uVar15 >> 0x30;
      } while (bVar24);
    }
  }
  return;
}

