// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e250  size: 575 bytes
// Name:    FUN_14010e250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140133150, FUN_145378c70, FUN_144fb0910
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14010e250(longlong param_1,longlong *param_2,uint param_3,ulonglong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  uint uVar11;
  undefined1 (*pauVar12) [16];
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  ulonglong uVar19;
  undefined8 unaff_RDI;
  char cVar20;
  undefined8 unaff_R12;
  ulonglong uVar21;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar22 [64];
  
  func_0x0001455ac350(param_1,param_2,param_4 & 0xffffffff);
  lVar16 = *param_2;
  *(longlong *)(param_5 + 0x38) = lVar16;
  *(undefined8 *)(param_5 + 0x40) = param_6;
  FUN_144fb0910(param_1,lVar16 + 0xffffffffffffc0U & 0xffffffffffffff | param_4 << 0x38,0);
  puVar1 = (undefined8 *)
           ((ulonglong)(((uint)param_4 & 0xff) - (uint)*(byte *)(param_1 + 0x20)) * 0x210 +
            *(longlong *)(param_1 + 0x18) + (ulonglong)((uint)lVar16 & 0x3f) * 8);
  *puVar1 = 0xff00000000000000;
  *(undefined8 **)(param_5 + 0x48) = puVar1;
  pauVar12 = (undefined1 (*) [16])FUN_145378c70(param_1,param_3);
  func_0x0001455ac3a0(pauVar12,param_7);
  func_0x0001455ac3d0();
  cVar20 = *(char *)(param_5 + 0x10);
  uVar13 = 0;
  lVar16 = 0;
  LOCK();
  auVar3 = *pauVar12;
  if (ZEXT816(0) == auVar3) {
    *(undefined8 *)*pauVar12 = 0;
    *(undefined8 *)(*pauVar12 + 8) = 0;
  }
  else {
    lVar16 = auVar3._8_8_;
    uVar13 = auVar3._0_8_;
  }
  UNLOCK();
  if (cVar20 == '\0') {
    do {
      if ((uVar13 & 0xff00000000) != 0) goto LAB_14010e3cb;
      *(longlong *)(param_5 + 0x30) = lVar16;
      LOCK();
      auVar3 = *pauVar12;
      auVar5._8_8_ = lVar16;
      auVar5._0_8_ = uVar13;
      if (auVar5 == auVar3) {
        *(ulonglong *)*pauVar12 = uVar13 | 0x200000000;
        *(longlong *)(*pauVar12 + 8) = param_5;
        uVar14 = uVar13;
        lVar17 = lVar16;
      }
      else {
        uVar14 = auVar3._0_8_;
        lVar17 = auVar3._8_8_;
      }
      UNLOCK();
      bVar9 = uVar13 != uVar14;
      bVar10 = lVar16 != lVar17;
      lVar16 = lVar17;
      uVar13 = uVar14;
    } while (bVar9 || bVar10);
  }
  else {
    do {
      if ((uVar13 & 0xff00000000) != 0) {
LAB_14010e3cb:
        *(undefined8 *)(param_5 + 0x30) = 0;
        if ((char)(uVar13 >> 0x28) == -1) {
          uVar11 = func_0x000144fdffd0(param_1);
          FUN_140133150(param_1,uVar11,1,param_5);
          if (cVar20 != '\0') {
            do {
              LOCK();
              auVar3 = *pauVar12;
              auVar6._8_8_ = lVar16;
              auVar6._0_8_ = uVar13;
              if (auVar6 == auVar3) {
                *(ulonglong *)*pauVar12 =
                     uVar13 & 0xffff00ffffffffff | (ulonglong)(byte)uVar11 << 0x28;
                *(undefined8 *)(*pauVar12 + 8) = 0;
                uVar14 = uVar13;
                lVar17 = lVar16;
              }
              else {
                uVar14 = auVar3._0_8_;
                lVar17 = auVar3._8_8_;
              }
              UNLOCK();
              bVar9 = uVar13 != uVar14;
              bVar10 = lVar16 != lVar17;
              uVar13 = uVar14;
              lVar16 = lVar17;
            } while (bVar9 || bVar10);
            return;
          }
        }
        else {
          FUN_140133150(param_1,uVar13 >> 0x28,1,param_5);
          uVar11 = (uint)(uVar13 >> 0x28);
          if (cVar20 != '\0') {
            return;
          }
        }
        uVar13 = (ulonglong)uVar11;
        lVar16 = param_1 + 0x30;
        auVar22 = ZEXT1264(ZEXT812(0));
        do {
          uVar14 = 0;
          lVar17 = 0;
          lVar18 = 0;
          pauVar12 = (undefined1 (*) [16])(lVar16 + (ulonglong)((param_3 & 0x3f) << 5));
          LOCK();
          auVar3 = *pauVar12;
          if (ZEXT816(0) == auVar3) {
            *(undefined8 *)*pauVar12 = 0;
            *(undefined8 *)(*pauVar12 + 8) = 0;
          }
          else {
            lVar17 = auVar3._8_8_;
            uVar14 = auVar3._0_8_;
          }
          UNLOCK();
          while( true ) {
            uVar21 = uVar14 >> 0x20 & 0xff;
            cVar20 = (char)uVar13;
            if (uVar21 != 0) break;
            if (lVar18 != lVar17) {
              uVar13 = uVar13 & 0xffffffff;
              if (cVar20 == -1) {
                uVar11 = func_0x000144fdffd0(param_1);
                uVar13 = (ulonglong)uVar11;
              }
              FUN_144fe0070(param_1,uVar13,1,lVar17,lVar18,lVar16,unaff_XMM6_Qa,unaff_XMM6_Qb,
                            param_8,unaff_RBX,unaff_RBP,unaff_RDI,unaff_RSI,unaff_R12,unaff_R13,
                            unaff_R14,unaff_R15);
              lVar18 = lVar17;
            }
            LOCK();
            auVar3 = *pauVar12;
            auVar8._8_8_ = lVar17;
            auVar8._0_8_ = uVar14;
            if (auVar8 == auVar3) {
              *(ulonglong *)*pauVar12 =
                   (uVar13 & 0xff) << 0x28 | uVar14 & 0xff0000ffffffff | 0x100000000;
              *(undefined8 *)(*pauVar12 + 8) = 0;
              uVar21 = uVar14;
              lVar15 = lVar17;
            }
            else {
              uVar21 = auVar3._0_8_;
              lVar15 = auVar3._8_8_;
            }
            UNLOCK();
            bVar9 = uVar14 == uVar21;
            bVar10 = lVar17 == lVar15;
            lVar17 = lVar15;
            uVar14 = uVar21;
            if (bVar9 && bVar10) {
              return;
            }
          }
          uVar19 = uVar14 >> 0x28;
          if (cVar20 != -1) {
            uVar19 = uVar13 & 0xff;
          }
          uVar11 = (uint)uVar19;
          if (lVar18 != lVar17) {
            if ((char)uVar19 == -1) {
              uVar11 = func_0x000144fdffd0(param_1);
              uVar19 = (ulonglong)uVar11;
            }
            uVar11 = (uint)uVar19;
            FUN_144fe0070(param_1,uVar19,(int)uVar21 == 2,lVar17,lVar18,lVar16,unaff_XMM6_Qa,
                          unaff_XMM6_Qb,param_8,unaff_RBX,unaff_RBP,unaff_RDI,unaff_RSI,unaff_R12,
                          unaff_R13,unaff_R14,unaff_R15);
          }
          if ((char)uVar11 != -1) {
            lVar18 = *(longlong *)pauVar12[1];
            uVar13 = (ulonglong)((uVar11 & 0xff) - (uint)*(byte *)(param_1 + 8));
            lVar15 = *(longlong *)(param_1 + 0x10);
            if (lVar18 != 0) {
              do {
                if (*(char *)(lVar18 + 0x30) == -1) {
                  *(char *)(lVar18 + 0x30) = (char)uVar11;
                  piVar2 = (int *)(lVar15 + uVar13 * 4);
                  *piVar2 = *piVar2 + 1;
                }
                lVar18 = *(longlong *)(lVar18 + 0x38);
              } while (lVar18 != 0);
              lVar15 = *(longlong *)(param_1 + 0x10);
            }
            if (*(int *)(lVar15 + uVar13 * 4) == 0) {
              func_0x000144fe0020(param_1,uVar11);
            }
          }
          *(undefined8 *)pauVar12[1] = 0;
          lVar18 = *(longlong *)(pauVar12[1] + 8);
          while (lVar18 != 0) {
            uVar11 = (uint)*(byte *)(lVar18 + 0x30) - (uint)*(byte *)(param_1 + 8);
            if (uVar11 < *(uint *)(param_1 + 0xc)) {
              piVar2 = (int *)(*(longlong *)(param_1 + 0x10) + (ulonglong)uVar11 * 4);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                func_0x000144fe0020();
              }
            }
            *(undefined1 *)(lVar18 + 0x30) = 0xff;
            *(undefined1 (*) [16])(lVar18 + 0x38) = auVar22._0_16_;
            lVar18 = *(longlong *)(lVar18 + 0x40);
          }
          *(undefined8 *)(pauVar12[1] + 8) = 0;
          do {
            uVar13 = uVar14;
            LOCK();
            auVar3 = *pauVar12;
            auVar7._8_8_ = lVar17;
            auVar7._0_8_ = uVar13;
            if (auVar7 == auVar3) {
              *(ulonglong *)*pauVar12 = (ulonglong)(param_3 + 0x40) | 0xff0000000000;
              *(undefined8 *)(*pauVar12 + 8) = 0;
              uVar14 = uVar13;
              lVar18 = lVar17;
            }
            else {
              uVar14 = auVar3._0_8_;
              lVar18 = auVar3._8_8_;
            }
            UNLOCK();
            bVar9 = lVar17 != lVar18;
            lVar17 = lVar18;
          } while (uVar14 != uVar13 || bVar9);
          uVar13 = uVar13 >> 0x30 & 0xff;
          if (uVar13 != 0) {
            func_0x000140005930();
          }
          param_3 = param_3 + 1;
          uVar13 = CONCAT71((int7)(uVar13 >> 8),0xff);
        } while( true );
      }
      *(longlong *)(param_5 + 0x30) = lVar16;
      LOCK();
      auVar3 = *pauVar12;
      auVar4._8_8_ = lVar16;
      auVar4._0_8_ = uVar13;
      if (auVar4 == auVar3) {
        *(ulonglong *)*pauVar12 = uVar13;
        *(longlong *)(*pauVar12 + 8) = param_5;
        uVar14 = uVar13;
        lVar17 = lVar16;
      }
      else {
        uVar14 = auVar3._0_8_;
        lVar17 = auVar3._8_8_;
      }
      UNLOCK();
      bVar9 = uVar13 != uVar14;
      bVar10 = lVar16 != lVar17;
      lVar16 = lVar17;
      uVar13 = uVar14;
    } while (bVar9 || bVar10);
  }
  return;
}

