// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140069300  size: 1574 bytes
// Name:    FUN_140069300
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40, FUN_1406edf70, FUN_144e40a00, FUN_1409c9a60, FUN_140006180, FUN_1400062d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x0001400694a4) */
/* WARNING: Removing unreachable block (ram,0x0001400694b1) */
/* WARNING: Removing unreachable block (ram,0x0001400694cf) */
/* WARNING: Removing unreachable block (ram,0x000140069499) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140069300(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  byte bVar10;
  short sVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  undefined8 unaff_RBP;
  ushort uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong *puVar20;
  uint uVar21;
  longlong unaff_GS_OFFSET;
  bool bVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined4 uVar25;
  undefined8 uStack_d8;
  float fStack_d0;
  float fStack_cc;
  longlong lStack_c0;
  uint uStack_b4;
  longlong lStack_b0;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [56];
  
  lVar19 = *(longlong *)(param_3 + 0x18);
  if (lVar19 == 0) {
    return;
  }
  auStack_78._0_12_ = ZEXT812(0);
  auStack_78._12_4_ = 0;
  auVar24 = ZEXT1664(auStack_78._0_16_);
  FUN_1406edf70(param_3,param_2,auStack_78);
  auVar23._4_4_ = auStack_78._12_4_;
  auVar23._0_4_ = auStack_78._12_4_;
  auVar23._8_4_ = auStack_78._12_4_;
  auVar23._12_4_ = auStack_78._12_4_;
  uVar25 = 0;
  auStack_a8 = vsubps_avx(auStack_78._0_16_,auVar23);
  auStack_98._0_4_ = (float)auStack_78._12_4_ + auStack_78._0_4_;
  auStack_98._4_4_ = (float)auStack_78._12_4_ + auStack_78._4_4_;
  auStack_98._8_4_ = (float)auStack_78._12_4_ + auStack_78._8_4_;
  auStack_98._12_4_ = (float)auStack_78._12_4_ + (float)auStack_78._12_4_;
  if ((0x1cU >> (*(uint *)(param_2 + 0x30) & 0x1f) & 1) == 0) goto LAB_1400697b1;
  if (*(char *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               8) == '\0') {
    func_0x0001455db994();
  }
  bVar16 = *(byte *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x138b);
  lVar7 = func_0x0001450bb780(*(undefined4 *)(param_2 + 0x9c));
  bVar16 = lVar7 != 0 & bVar16;
  uVar18 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar16);
  if (bVar16 == 1) {
    uVar12 = (ulonglong)*(ushort *)(lVar7 + 0x214);
    uVar8 = uVar12 & 0xff;
    if ((uVar8 == 0xff) ||
       ((*(ulonglong *)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (uVar8 >> 6) * 8) >>
         (uVar12 & 0x3f) & 1) == 0)) {
      uVar21 = (uint)*(ushort *)(lVar7 + 0x214);
      iVar14 = (uVar21 & 0xffffff00) + 0x100 + (int)uVar8;
      while( true ) {
        LOCK();
        uVar17 = *(ushort *)(lVar7 + 0x214);
        bVar22 = (ushort)uVar21 == uVar17;
        if (bVar22) {
          *(ushort *)(lVar7 + 0x214) = (ushort)iVar14;
        }
        else {
          uVar21 = (uint)uVar17;
        }
        UNLOCK();
        if (bVar22) break;
        uVar12 = (ulonglong)uVar21;
        iVar14 = uVar21 + 0x100;
      }
      uStack_b4 = (uint)uVar18;
      if ((ushort)uVar12 < 0x100) {
        do {
          do {
            uVar17 = (ushort)(_DAT_14a9b3da8 >> 0x20);
          } while (uVar17 == 0x40);
          uVar18 = (ulonglong)((int)_DAT_14a9b3da8 + 1) |
                   (_DAT_14a9b3da8 >> 0x30) << 0x20 |
                   (ulonglong)*(ushort *)((_DAT_14a9b3da8 >> 0x30) * 2 + 0x14a9b3d20) << 0x30;
          LOCK();
          UNLOCK();
          bVar16 = (byte)(_DAT_14a9b3da8 >> 0x20);
          uVar17 = uVar17 & 0xff;
          _DAT_14a9b3da8 = uVar18;
        } while (0x3f < uVar17);
        uVar21 = (uint)uVar12 | 0x100;
        LOCK();
        uVar4 = *(ushort *)(lVar7 + 0x214);
        bVar22 = (ushort)uVar21 == uVar4;
        if (bVar22) {
          *(ushort *)(lVar7 + 0x214) = uVar17 | 0x100;
        }
        else {
          uVar21 = (uint)uVar4;
        }
        UNLOCK();
        while (!bVar22) {
          LOCK();
          uVar4 = *(ushort *)(lVar7 + 0x214);
          bVar22 = (ushort)uVar21 == uVar4;
          if (bVar22) {
            *(ushort *)(lVar7 + 0x214) = (ushort)uVar21 & 0xff00 | uVar17;
          }
          else {
            uVar21 = (uint)uVar4;
          }
          UNLOCK();
        }
      }
      else {
        bVar16 = (byte)uVar12;
        while (bVar16 == 0xff) {
          bVar16 = (byte)*(undefined2 *)(lVar7 + 0x214);
        }
      }
      uVar8 = (ulonglong)bVar16;
      puVar3 = (uint *)(uVar8 * 0x18 + 0x14a9b3708);
      puVar20 = (ulonglong *)(uVar8 * 0x18 + 0x14a9b3710);
      uVar21 = *puVar3;
      lStack_c0 = param_1;
      lStack_b0 = lVar19;
LAB_140069562:
      do {
        uVar6 = uVar21;
        if ((uVar6 & 0x1ff0000) != 0) {
          LOCK();
          uVar21 = *puVar3;
          bVar22 = uVar6 == uVar21;
          if (bVar22) {
            *puVar3 = uVar6 + 0x100;
            uVar21 = uVar6;
          }
          UNLOCK();
          if (bVar22) {
            uVar15 = (uint)(*puVar20 >> 7) & 0xffffff;
            uVar18 = *puVar20;
            if ((*puVar20 >> 7 & 0xffffff) != 0) {
              do {
                if ((longlong)uVar18 < 0x100000000) {
                  uVar12 = *puVar20;
                }
                else {
                  LOCK();
                  uVar12 = *puVar20;
                  if (uVar18 == uVar12) {
                    *puVar20 = uVar18 - 0x100000000;
                    uVar12 = uVar18;
                  }
                  UNLOCK();
                  uVar21 = uVar6;
                  if (uVar18 == uVar12) goto LAB_140069562;
                }
                uVar15 = uVar15 - 1;
                uVar18 = uVar12;
              } while (uVar15 != 0);
            }
            uVar18 = *puVar20;
            do {
              while (uStack_d8 = uVar18, 0xffffffff < (longlong)uStack_d8) {
                LOCK();
                uVar18 = *puVar20;
                if (uStack_d8 == uVar18) {
                  *puVar20 = uStack_d8 - 0x100000000;
                  uVar18 = uStack_d8;
                }
                UNLOCK();
                uVar21 = uVar6;
                if (uStack_d8 == uVar18) goto LAB_140069562;
              }
              cVar5 = FUN_140006180(puVar20,1,&uStack_d8);
              uVar21 = uVar6;
              uVar18 = uStack_d8;
            } while (cVar5 == '\0');
          }
          goto LAB_140069562;
        }
        LOCK();
        uVar21 = *puVar3;
        bVar22 = uVar6 == uVar21;
        if (bVar22) {
          *puVar3 = uVar6 + 1;
          uVar21 = uVar6;
        }
        UNLOCK();
      } while (!bVar22);
      uVar18 = (ulonglong)uStack_b4;
      puVar20 = (ulonglong *)
                (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar16 >> 6) * 8);
      *puVar20 = *puVar20 | 1L << (uVar8 & 0x3f);
      lVar19 = lStack_b0;
      param_1 = lStack_c0;
      goto LAB_140069634;
    }
    cVar5 = '\0';
  }
  else {
LAB_140069634:
    cVar5 = (char)uVar18;
    if (lVar7 == 0) goto LAB_1400697b1;
  }
  FUN_144e40a00(lVar7,&uStack_d8);
  uVar25 = _DAT_14875e504;
  auVar24 = ZEXT1664(CONCAT412(_DAT_14875e500 * fStack_cc,
                               CONCAT48(_DAT_14875e500 * fStack_d0,
                                        CONCAT44(_DAT_14875e500 * uStack_d8._4_4_,
                                                 _DAT_14875e500 * (float)uStack_d8))));
  if (cVar5 != '\0') {
    bVar10 = (byte)*(undefined2 *)(lVar7 + 0x214);
    bVar16 = bVar10 & 0x3f;
    puVar20 = (ulonglong *)
              (**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x1398 + (ulonglong)(bVar10 >> 6) * 8);
    *puVar20 = *puVar20 & (-2L << bVar16 | 0xfffffffffffffffeU >> 0x40 - bVar16);
    uVar18 = (ulonglong)(byte)*(undefined2 *)(lVar7 + 0x214);
    LOCK();
    piVar2 = (int *)(uVar18 * 0x18 + 0x14a9b3708);
    iVar14 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    uVar21 = iVar14 - 1;
    lStack_c0 = param_1;
    if ((char)uVar21 == '\0') {
      lVar1 = uVar18 * 0x18;
      puVar3 = (uint *)(lVar1 + 0x14a9b3708);
      if ((uVar21 & 0xff0000) == 0) {
        if ((uVar21 & 0xff00) != 0) {
          uVar21 = *puVar3;
          do {
            LOCK();
            uVar6 = *puVar3;
            bVar22 = uVar21 == uVar6;
            if (bVar22) {
              *puVar3 = uVar21 & 0xffff00ff;
              uVar6 = uVar21;
            }
            uVar21 = uVar6;
            UNLOCK();
          } while (!bVar22);
          uVar21 = uVar21 >> 8 & 0xff;
          if (uVar21 != 0) {
            puVar20 = (ulonglong *)(lVar1 + 0x14a9b3710);
            uVar8 = *(ulonglong *)(lVar1 + 0x14a9b3710);
            do {
              while (uStack_d8 = uVar8, -1 < (longlong)uStack_d8) {
                LOCK();
                uVar8 = *puVar20;
                if (uStack_d8 == uVar8) {
                  *puVar20 = uStack_d8 + ((ulonglong)uVar21 << 0x20);
                  uVar8 = uStack_d8;
                }
                UNLOCK();
                if (uStack_d8 == uVar8) goto LAB_1400696cd;
              }
              cVar5 = FUN_1400062d0(puVar20,uVar21);
              uVar8 = uStack_d8;
            } while (cVar5 == '\0');
          }
        }
      }
      else {
        puVar20 = (ulonglong *)(lVar1 + 0x14a9b3718);
        do {
          if ((uVar21 & 0xff0000) == 0) break;
          LOCK();
          uVar6 = *puVar3;
          bVar22 = uVar21 == uVar6;
          if (bVar22) {
            *puVar3 = uVar21 - 0x10000;
            uVar6 = uVar21;
          }
          UNLOCK();
          if (bVar22) {
            uVar8 = *puVar20;
            do {
              while (uStack_d8 = uVar8, -1 < (longlong)uStack_d8) {
                LOCK();
                uVar8 = *puVar20;
                if (uStack_d8 == uVar8) {
                  *puVar20 = uStack_d8 + 0x100000000;
                  uVar8 = uStack_d8;
                }
                UNLOCK();
                uVar6 = uVar21;
                if (uStack_d8 == uVar8) goto LAB_140069890;
              }
              cVar5 = FUN_1400062d0(puVar20,1);
              uVar6 = uVar21;
              uVar8 = uStack_d8;
            } while (cVar5 == '\0');
          }
LAB_140069890:
          uVar21 = uVar6;
        } while (!bVar22);
      }
    }
LAB_1400696cd:
    uVar4 = *(ushort *)(lVar7 + 0x214);
    sVar11 = *(byte *)(lVar7 + 0x215) - 1;
    bVar16 = (byte)sVar11;
    LOCK();
    uVar17 = *(ushort *)(lVar7 + 0x214);
    bVar22 = uVar4 == uVar17;
    if (bVar22) {
      *(ushort *)(lVar7 + 0x214) =
           (ushort)(byte)(-(bVar16 == 0) | *(byte *)(lVar7 + 0x214)) | sVar11 * 0x100;
      uVar17 = uVar4;
    }
    uVar21 = (uint)uVar17;
    UNLOCK();
    while (!bVar22) {
      uVar17 = (ushort)uVar21 & 0xff;
      bVar16 = (char)(uVar21 >> 8) - 1;
      if (bVar16 == 0) {
        uVar17 = 0xff;
      }
      LOCK();
      uVar4 = *(ushort *)(lVar7 + 0x214);
      bVar22 = (ushort)uVar21 == uVar4;
      if (bVar22) {
        *(ushort *)(lVar7 + 0x214) = uVar17 | (ushort)bVar16 << 8;
      }
      else {
        uVar21 = (uint)uVar4;
      }
      UNLOCK();
    }
    param_1 = lStack_c0;
    if (bVar16 == 0) {
      uVar13 = _DAT_14a9b3da8 >> 0x20 & 0xffff;
      uVar8 = _DAT_14a9b3da8 >> 0x30;
      uVar12 = _DAT_14a9b3da8 & 0xffffffff;
      do {
        *(short *)(uVar18 * 2 + 0x14a9b3d20) = (short)uVar13;
        uVar9 = uVar12 & 0xffffffff;
        uVar12 = (uVar13 & 0xffff) << 0x20 | uVar8 << 0x30 | uVar9;
        LOCK();
        bVar22 = uVar12 != _DAT_14a9b3da8;
        uVar8 = uVar13 << 0x30 | uVar18 << 0x20 | uVar9;
        if (bVar22) {
          uVar12 = _DAT_14a9b3da8;
          uVar8 = _DAT_14a9b3da8;
        }
        _DAT_14a9b3da8 = uVar8;
        UNLOCK();
        uVar13 = uVar12 >> 0x20;
        uVar8 = uVar12 >> 0x30;
      } while (bVar22);
    }
  }
LAB_1400697b1:
  FUN_140004b40(0x14875e4d0);
  auStack_88 = auVar24._0_16_;
  FUN_1409c9a60(*(undefined8 *)(param_1 + 0x38),lVar19,auStack_a8,auStack_88,uVar25);
  func_0x000144d9dab0(0x14875e4d0);
  return;
}

