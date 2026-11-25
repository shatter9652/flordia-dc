// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007da30  size: 5127 bytes
// Name:    FUN_14007da30
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1443ab2a0, FUN_1450267e0, FUN_1443aacc0, FUN_14007da30, FUN_140641050, FUN_1443aac60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14007da30(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined8 uVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  bool bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auStack_108 [8];
  ulonglong uStack_100;
  undefined1 auStack_f8 [8];
  ulonglong uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [4];
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined8 uStack_a4;
  undefined5 uStack_9c;
  undefined3 uStack_97;
  float fStack_94;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined1 (*pauStack_78) [16];
  undefined1 (*pauStack_70) [16];
  undefined1 (*pauStack_68) [16];
  undefined8 *puStack_60;
  
  uVar17 = (longlong)param_2 - (longlong)param_1;
  do {
    if ((longlong)uVar17 < 0x1290) {
      if ((param_1 != param_2) && (param_1 + 9 != param_2)) {
        pauStack_70 = param_1 + 2;
        pauStack_78 = param_1 + 3;
        pauVar25 = param_1 + 0xe;
        lVar20 = -0x90;
        auVar31 = ZEXT1264(ZEXT812(0));
        pauVar27 = param_1 + 9;
        pauVar28 = param_1;
        do {
          pauVar24 = pauVar27;
          uVar3 = *(uint *)(pauVar28[9] + 4);
          auStack_108._0_4_ = *(undefined4 *)pauVar28[9];
          if (auStack_108._0_4_ == 0 && (ulonglong)uVar3 != 0) {
            stack0xfffffffffffffefc = auVar31._4_12_;
            auStack_108._0_4_ = uVar3;
            uVar22 = *(undefined8 *)(pauVar28[9] + 8);
            func_0x000145f40560(0,uVar22,(ulonglong)uVar3 * 0x14);
            auStack_108._0_4_ = *(undefined4 *)*pauVar24;
          }
          else {
            uVar22 = *(undefined8 *)(pauVar28[9] + 8);
          }
          auStack_108._4_4_ = uVar3;
          *(undefined4 *)(pauVar28[9] + 4) = 0;
          uStack_100 = uVar22;
          *(undefined4 *)*pauVar24 = 0;
          auStack_f8._0_4_ = *(undefined4 *)(pauVar28[10] + 4);
          uVar22 = *(undefined8 *)pauVar28[10];
          if (*(int *)pauVar28[10] == 0 && (ulonglong)(uint)auStack_f8._0_4_ != 0) {
            stack0xffffffffffffff0c = auVar31._4_12_;
            uVar26 = *(undefined8 *)(pauVar28[10] + 8);
            func_0x000145f40560(0,uVar26,(ulonglong)(uint)auStack_f8._0_4_ << 2);
          }
          else {
            uVar26 = *(undefined8 *)(pauVar28[10] + 8);
          }
          *(undefined4 *)(pauVar28[10] + 4) = 0;
          uStack_f0 = uVar26;
          auStack_f8 = (undefined1  [8])uVar22;
          *(undefined4 *)pauVar28[10] = 0;
          auVar30 = auVar31._0_16_;
          uVar3 = *(uint *)(pauVar28[0xb] + 4);
          auStack_e8._0_8_ = *(undefined8 *)pauVar28[0xb];
          if (*(int *)pauVar28[0xb] == 0 && (ulonglong)uVar3 != 0) {
            auStack_e8 = auVar30;
            lVar18 = func_0x000144d9c140(4,(ulonglong)uVar3 << 2);
            auStack_e8._8_8_ = lVar18;
            if (lVar18 == 0) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            auStack_e8._0_4_ = uVar3;
            func_0x000145f40560(lVar18,*(undefined8 *)(pauVar28[0xb] + 8),
                                (ulonglong)*(uint *)(pauVar28[0xb] + 4) << 2);
            auVar30 = auVar31._0_16_;
            auStack_e8._0_8_ = *(undefined8 *)pauVar28[0xb];
            *(undefined4 *)pauVar28[0xb] = 0;
            *(undefined4 *)(pauVar28[0xb] + 4) = 0;
            if (auStack_e8._8_8_ != 0) {
              func_0x000144d9c130();
              auVar30 = auVar31._0_16_;
            }
          }
          else {
            *(undefined4 *)(pauVar28[0xb] + 4) = 0;
          }
          auStack_e8._8_8_ = *(undefined8 *)(pauVar28[0xb] + 8);
          *(undefined8 *)(pauVar28[0xb] + 8) = 0;
          *(undefined4 *)pauVar28[0xb] = 0;
          uStack_d8 = *(undefined8 *)pauVar28[0xc];
          uStack_d0 = *(undefined8 *)(pauVar28[0xc] + 8);
          uStack_c8 = *(undefined8 *)pauVar28[0xd];
          uStack_c0 = *(undefined8 *)(pauVar28[0xd] + 8);
          auVar31 = ZEXT1664(auVar30);
          func_0x0001443aac50(auStack_b8,pauVar28 + 0xe);
          auVar30 = auVar31._0_16_;
          fStack_94 = (float)((ulonglong)*(undefined8 *)(pauVar28[0x10] + 1) >> 0x18);
          uStack_90 = (undefined1)((ulonglong)*(undefined8 *)(pauVar28[0x10] + 1) >> 0x38);
          uStack_b4 = *(undefined8 *)(pauVar28[0xe] + 4);
          uStack_ac = *(undefined8 *)(pauVar28[0xe] + 0xc);
          uStack_a4 = *(undefined8 *)(pauVar28[0xf] + 4);
          uStack_9c = (undefined5)*(undefined8 *)(pauVar28[0xf] + 0xc);
          uStack_97 = (undefined3)((ulonglong)*(undefined8 *)(pauVar28[0xf] + 0xc) >> 0x28);
          uStack_80 = pauVar28[0x11][8];
          uStack_88 = *(undefined8 *)pauVar28[0x11];
          lVar18 = lVar20;
          pauVar27 = pauVar25;
          if (*(float *)(param_1[7] + 4) <= fStack_94) {
            pauVar28 = pauVar24;
            pauVar27 = pauVar24;
            if (fStack_94 < *(float *)(pauVar24[-2] + 4)) {
              do {
                auVar30 = auVar31._0_16_;
                *pauVar28 = auVar30;
                uVar3 = *(uint *)(pauVar28[-9] + 4);
                iVar15 = *(int *)pauVar28[-9];
                if (iVar15 == 0 && (ulonglong)uVar3 != 0) {
                  *(uint *)*pauVar28 = uVar3;
                  uVar22 = *(undefined8 *)(pauVar28[-9] + 8);
                  auVar31 = ZEXT1664(auVar30);
                  func_0x000145f40560(0,uVar22,(ulonglong)uVar3 * 0x14);
                  auVar30 = auVar31._0_16_;
                }
                else {
                  uVar22 = *(undefined8 *)(pauVar28[-9] + 8);
                }
                *(int *)*pauVar28 = iVar15;
                *(uint *)(*pauVar28 + 4) = uVar3;
                *(undefined8 *)(*pauVar28 + 8) = uVar22;
                *(undefined8 *)pauVar28[-9] = 0;
                pauVar28[1] = auVar30;
                uVar3 = *(uint *)(pauVar28[-8] + 4);
                iVar15 = *(int *)pauVar28[-8];
                if (iVar15 == 0 && (ulonglong)uVar3 != 0) {
                  *(uint *)pauVar28[1] = uVar3;
                  uVar22 = *(undefined8 *)(pauVar28[-8] + 8);
                  auVar31 = ZEXT1664(auVar30);
                  func_0x000145f40560(0,uVar22,(ulonglong)uVar3 << 2);
                  auVar30 = auVar31._0_16_;
                }
                else {
                  uVar22 = *(undefined8 *)(pauVar28[-8] + 8);
                }
                *(int *)pauVar28[1] = iVar15;
                *(uint *)(pauVar28[1] + 4) = uVar3;
                *(undefined8 *)(pauVar28[1] + 8) = uVar22;
                *(undefined8 *)pauVar28[-8] = 0;
                *(undefined4 *)(pauVar28[2] + 4) = 0;
                if (*(longlong *)(pauVar28[2] + 8) != 0) {
                  auVar31 = ZEXT1664(auVar30);
                  func_0x000144d9c130();
                  auVar30 = auVar31._0_16_;
                }
                uVar3 = *(uint *)(pauVar28[-7] + 4);
                if (*(int *)pauVar28[-7] == 0 && (ulonglong)uVar3 != 0) {
                  *(undefined8 *)(pauVar28[2] + 8) = 0;
                  *(undefined4 *)pauVar28[2] = 0;
                  auVar31 = ZEXT1664(auVar30);
                  lVar18 = func_0x000144d9c140(4,(ulonglong)uVar3 << 2);
                  *(longlong *)(pauVar28[2] + 8) = lVar18;
                  if (lVar18 == 0) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  *(uint *)pauVar28[2] = uVar3;
                  func_0x000145f40560(lVar18,*(undefined8 *)(pauVar28[-7] + 8),
                                      (ulonglong)*(uint *)(pauVar28[-7] + 4) << 2);
                  auVar30 = auVar31._0_16_;
                  uVar22 = *(undefined8 *)pauVar28[-7];
                  lVar18 = *(longlong *)(pauVar28[2] + 8);
                  *(undefined8 *)pauVar28[-7] = 0;
                  *(undefined8 *)pauVar28[2] = uVar22;
                  if (lVar18 != 0) {
                    func_0x000144d9c130();
                    auVar30 = auVar31._0_16_;
                  }
                }
                else {
                  *(int *)pauVar28[2] = *(int *)pauVar28[-7];
                  *(uint *)(pauVar28[2] + 4) = uVar3;
                  *(undefined4 *)(pauVar28[-7] + 4) = 0;
                }
                pauVar27 = pauVar28 + -9;
                *(undefined8 *)(pauVar28[2] + 8) = *(undefined8 *)(pauVar28[-7] + 8);
                *(undefined8 *)(pauVar28[-7] + 8) = 0;
                *(undefined4 *)pauVar28[-7] = 0;
                uVar22 = *(undefined8 *)(pauVar28[-6] + 8);
                uVar26 = *(undefined8 *)pauVar28[-5];
                uVar5 = *(undefined8 *)(pauVar28[-5] + 8);
                *(undefined8 *)pauVar28[3] = *(undefined8 *)pauVar28[-6];
                *(undefined8 *)(pauVar28[3] + 8) = uVar22;
                *(undefined8 *)pauVar28[4] = uVar26;
                *(undefined8 *)(pauVar28[4] + 8) = uVar5;
                auVar31 = ZEXT1664(auVar30);
                FUN_1443aac60(pauVar28 + 5,pauVar28 + -4);
                auVar30 = auVar31._0_16_;
                uVar22 = *(undefined8 *)(pauVar28[-4] + 0xc);
                uVar26 = *(undefined8 *)(pauVar28[-3] + 4);
                uVar5 = *(undefined8 *)(pauVar28[-3] + 0xc);
                *(undefined8 *)(pauVar28[5] + 4) = *(undefined8 *)(pauVar28[-4] + 4);
                *(undefined8 *)(pauVar28[5] + 0xc) = uVar22;
                *(undefined8 *)(pauVar28[6] + 4) = uVar26;
                *(undefined8 *)(pauVar28[6] + 0xc) = uVar5;
                *(undefined8 *)(pauVar28[7] + 1) = *(undefined8 *)(pauVar28[-2] + 1);
                pauVar28[8][8] = pauVar28[-1][8];
                *(undefined8 *)pauVar28[8] = *(undefined8 *)pauVar28[-1];
                pauVar23 = pauVar28 + -0xb;
                pauVar28 = pauVar27;
              } while (fStack_94 < *(float *)(*pauVar23 + 4));
            }
            if ((undefined1 (*) [16])auStack_108 != pauVar27) {
              *pauVar27 = auVar30;
              uVar14 = auStack_108._4_4_;
              uVar17 = uStack_100;
              if (auStack_108._0_4_ == 0 && (ulonglong)(uint)auStack_108._4_4_ != 0) {
                *(undefined4 *)*pauVar27 = auStack_108._4_4_;
                auVar31 = ZEXT1664(auVar30);
                func_0x000145f40560(0,uStack_100,(ulonglong)(uint)auStack_108._4_4_ * 0x14);
                auVar30 = auVar31._0_16_;
              }
              *(undefined4 *)*pauVar27 = auStack_108._0_4_;
              *(undefined4 *)(*pauVar27 + 4) = uVar14;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uStack_100;
              _auStack_108 = auVar11 << 0x40;
              *(ulonglong *)(*pauVar27 + 8) = uVar17;
              auVar7._12_4_ = 0;
              auVar7._0_12_ = stack0xfffffffffffffefc;
              _auStack_108 = auVar7 << 0x20;
              pauVar27[1] = auVar30;
              uVar14 = auStack_f8._4_4_;
              uVar17 = uStack_f0;
              if (auStack_f8._0_4_ == 0 && (ulonglong)(uint)auStack_f8._4_4_ != 0) {
                *(undefined4 *)pauVar27[1] = auStack_f8._4_4_;
                auVar31 = ZEXT1664(auVar30);
                func_0x000145f40560(0,uStack_f0,(ulonglong)(uint)auStack_f8._4_4_ << 2);
                auVar30 = auVar31._0_16_;
              }
              *(undefined4 *)pauVar27[1] = auStack_f8._0_4_;
              *(undefined4 *)(pauVar27[1] + 4) = uVar14;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uStack_f0;
              _auStack_f8 = auVar13 << 0x40;
              *(ulonglong *)(pauVar27[1] + 8) = uVar17;
              auVar9._12_4_ = 0;
              auVar9._0_12_ = stack0xffffffffffffff0c;
              _auStack_f8 = auVar9 << 0x20;
            }
            auVar31 = ZEXT1664(auVar30);
            FUN_140641050(pauVar27 + 2,auStack_e8);
            auVar30 = auVar31._0_16_;
            *(undefined8 *)pauVar27[3] = uStack_d8;
            *(undefined8 *)(pauVar27[3] + 8) = uStack_d0;
            *(undefined8 *)pauVar27[4] = uStack_c8;
            *(undefined8 *)(pauVar27[4] + 8) = uStack_c0;
          }
          else {
            do {
              auVar30 = auVar31._0_16_;
              pauVar27[-5] = auVar30;
              uVar3 = *(uint *)(pauVar27[-0xe] + 4);
              iVar15 = *(int *)pauVar27[-0xe];
              if (iVar15 == 0 && (ulonglong)uVar3 != 0) {
                *(uint *)pauVar27[-5] = uVar3;
                uVar22 = *(undefined8 *)(pauVar27[-0xe] + 8);
                auVar31 = ZEXT1664(auVar30);
                func_0x000145f40560(0,uVar22,(ulonglong)uVar3 * 0x14);
                auVar30 = auVar31._0_16_;
                iVar15 = *(int *)pauVar27[-0xe];
              }
              else {
                uVar22 = *(undefined8 *)(pauVar27[-0xe] + 8);
              }
              *(int *)pauVar27[-5] = iVar15;
              *(uint *)(pauVar27[-5] + 4) = uVar3;
              *(undefined8 *)(pauVar27[-5] + 8) = uVar22;
              *(undefined8 *)pauVar27[-0xe] = 0;
              pauVar27[-4] = auVar30;
              uVar3 = *(uint *)(pauVar27[-0xd] + 4);
              iVar15 = *(int *)pauVar27[-0xd];
              if (iVar15 == 0 && (ulonglong)uVar3 != 0) {
                *(uint *)pauVar27[-4] = uVar3;
                uVar22 = *(undefined8 *)(pauVar27[-0xd] + 8);
                auVar31 = ZEXT1664(auVar30);
                func_0x000145f40560(0,uVar22,(ulonglong)uVar3 << 2);
                auVar30 = auVar31._0_16_;
                iVar15 = *(int *)pauVar27[-0xd];
              }
              else {
                uVar22 = *(undefined8 *)(pauVar27[-0xd] + 8);
              }
              *(int *)pauVar27[-4] = iVar15;
              *(uint *)(pauVar27[-4] + 4) = uVar3;
              *(undefined8 *)(pauVar27[-4] + 8) = uVar22;
              *(undefined8 *)pauVar27[-0xd] = 0;
              *(undefined4 *)(pauVar27[-3] + 4) = 0;
              if (*(longlong *)(pauVar27[-3] + 8) != 0) {
                auVar31 = ZEXT1664(auVar30);
                func_0x000144d9c130();
                auVar30 = auVar31._0_16_;
              }
              *(undefined8 *)(pauVar27[-3] + 8) = 0;
              *(undefined4 *)pauVar27[-3] = 0;
              uVar3 = *(uint *)(pauVar27[-0xc] + 4);
              if (*(int *)pauVar27[-0xc] == 0 && (ulonglong)uVar3 != 0) {
                auVar31 = ZEXT1664(auVar30);
                lVar16 = func_0x000144d9c140(4,(ulonglong)uVar3 << 2);
                *(longlong *)(pauVar27[-3] + 8) = lVar16;
                if (lVar16 == 0) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(uint *)pauVar27[-3] = uVar3;
                func_0x000145f40560(lVar16,*(undefined8 *)(pauVar27[-0xc] + 8),
                                    (ulonglong)*(uint *)(pauVar27[-0xc] + 4) << 2);
                auVar30 = auVar31._0_16_;
                lVar16 = *(longlong *)(pauVar27[-3] + 8);
                *(undefined8 *)pauVar27[-3] = *(undefined8 *)pauVar27[-0xc];
                *(undefined8 *)pauVar27[-0xc] = 0;
                if (lVar16 != 0) {
                  func_0x000144d9c130();
                  auVar30 = auVar31._0_16_;
                }
              }
              else {
                *(int *)pauVar27[-3] = *(int *)pauVar27[-0xc];
                *(uint *)(pauVar27[-3] + 4) = uVar3;
                *(undefined4 *)(pauVar27[-0xc] + 4) = 0;
              }
              *(undefined8 *)(pauVar27[-3] + 8) = *(undefined8 *)(pauVar27[-0xc] + 8);
              *(undefined8 *)(pauVar27[-0xc] + 8) = 0;
              *(undefined4 *)pauVar27[-0xc] = 0;
              uVar22 = *(undefined8 *)(pauVar27[-0xb] + 8);
              uVar26 = *(undefined8 *)pauVar27[-10];
              uVar5 = *(undefined8 *)(pauVar27[-10] + 8);
              *(undefined8 *)pauVar27[-2] = *(undefined8 *)pauVar27[-0xb];
              *(undefined8 *)(pauVar27[-2] + 8) = uVar22;
              *(undefined8 *)pauVar27[-1] = uVar26;
              *(undefined8 *)(pauVar27[-1] + 8) = uVar5;
              auVar31 = ZEXT1664(auVar30);
              FUN_1443aac60(pauVar27,pauVar27 + -9);
              auVar30 = auVar31._0_16_;
              uVar22 = *(undefined8 *)(pauVar27[-9] + 0xc);
              uVar26 = *(undefined8 *)(pauVar27[-8] + 4);
              uVar5 = *(undefined8 *)(pauVar27[-8] + 0xc);
              lVar18 = lVar18 + 0x90;
              *(undefined8 *)(*pauVar27 + 4) = *(undefined8 *)(pauVar27[-9] + 4);
              *(undefined8 *)(*pauVar27 + 0xc) = uVar22;
              *(undefined8 *)(pauVar27[1] + 4) = uVar26;
              *(undefined8 *)(pauVar27[1] + 0xc) = uVar5;
              *(undefined8 *)(pauVar27[2] + 1) = *(undefined8 *)(pauVar27[-7] + 1);
              *(undefined8 *)pauVar27[3] = *(undefined8 *)pauVar27[-6];
              pauVar27[3][8] = pauVar27[-6][8];
              pauVar27 = pauVar27 + -9;
            } while (lVar18 != 0);
            if ((undefined1 (*) [16])auStack_108 != param_1) {
              *param_1 = auVar30;
              uVar14 = auStack_108._4_4_;
              uVar17 = uStack_100;
              if (auStack_108._0_4_ == 0 && (ulonglong)(uint)auStack_108._4_4_ != 0) {
                *(undefined4 *)*param_1 = auStack_108._4_4_;
                auVar31 = ZEXT1664(auVar30);
                func_0x000145f40560(0,uStack_100,(ulonglong)(uint)auStack_108._4_4_ * 0x14);
                auVar30 = auVar31._0_16_;
              }
              *(undefined4 *)*param_1 = auStack_108._0_4_;
              *(undefined4 *)(*param_1 + 4) = uVar14;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uStack_100;
              _auStack_108 = auVar10 << 0x40;
              *(ulonglong *)(*param_1 + 8) = uVar17;
              auVar6._12_4_ = 0;
              auVar6._0_12_ = stack0xfffffffffffffefc;
              _auStack_108 = auVar6 << 0x20;
              param_1[1] = auVar30;
              uVar14 = auStack_f8._4_4_;
              uVar17 = uStack_f0;
              if (auStack_f8._0_4_ == 0 && (ulonglong)(uint)auStack_f8._4_4_ != 0) {
                *(undefined4 *)param_1[1] = auStack_f8._4_4_;
                auVar31 = ZEXT1664(auVar30);
                func_0x000145f40560(0,uStack_f0,(ulonglong)(uint)auStack_f8._4_4_ << 2);
                auVar30 = auVar31._0_16_;
              }
              *(undefined4 *)param_1[1] = auStack_f8._0_4_;
              *(undefined4 *)(param_1[1] + 4) = uVar14;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = uStack_f0;
              _auStack_f8 = auVar12 << 0x40;
              *(ulonglong *)(param_1[1] + 8) = uVar17;
              auVar8._12_4_ = 0;
              auVar8._0_12_ = stack0xffffffffffffff0c;
              _auStack_f8 = auVar8 << 0x20;
            }
            auVar31 = ZEXT1664(auVar30);
            FUN_140641050(pauStack_70,auStack_e8);
            auVar30 = auVar31._0_16_;
            *(undefined8 *)*pauStack_78 = uStack_d8;
            *(undefined8 *)(*pauStack_78 + 8) = uStack_d0;
            *(undefined8 *)pauStack_78[1] = uStack_c8;
            *(undefined8 *)(pauStack_78[1] + 8) = uStack_c0;
            pauVar27 = param_1;
          }
          auVar31 = ZEXT1664(auVar30);
          FUN_1443aac60(pauVar27 + 5,auStack_b8);
          *(undefined8 *)(pauVar27[5] + 4) = uStack_b4;
          *(undefined8 *)(pauVar27[5] + 0xc) = uStack_ac;
          *(undefined8 *)(pauVar27[6] + 4) = uStack_a4;
          *(ulonglong *)(pauVar27[6] + 0xc) = CONCAT35(uStack_97,uStack_9c);
          *(ulonglong *)(pauVar27[7] + 1) = CONCAT17(uStack_90,CONCAT43(fStack_94,uStack_97));
          *(undefined8 *)pauVar27[8] = uStack_88;
          pauVar27[8][8] = uStack_80;
          auVar31 = ZEXT1664(auVar31._0_16_);
          FUN_1450267e0(auStack_b8);
          auStack_e8._4_4_ = 0;
          if (auStack_e8._8_8_ != 0) {
            func_0x000144d9c130();
          }
          lVar20 = lVar20 + -0x90;
          pauVar25 = pauVar25 + 9;
          pauVar27 = pauVar24 + 9;
          pauVar28 = pauVar24;
        } while (pauVar24 + 9 != param_2);
      }
      return;
    }
    uVar19 = uVar17 / 0x120;
    if ((longlong)param_3 < 1) {
      uVar21 = uVar19 + 1;
      auVar31 = ZEXT1264(ZEXT812(0));
      pauVar25 = param_1 + uVar19 * 9 + -4;
      do {
        uVar3 = *(uint *)(pauVar25[-5] + 4);
        auStack_108._0_4_ = *(undefined4 *)pauVar25[-5];
        if (auStack_108._0_4_ == 0 && (ulonglong)uVar3 != 0) {
          stack0xfffffffffffffefc = auVar31._4_12_;
          auStack_108._0_4_ = uVar3;
          uVar22 = *(undefined8 *)(pauVar25[-5] + 8);
          func_0x000145f40560(0,uVar22,(ulonglong)uVar3 * 0x14);
          auStack_108._0_4_ = *(undefined4 *)pauVar25[-5];
        }
        else {
          uVar22 = *(undefined8 *)(pauVar25[-5] + 8);
        }
        auStack_108._4_4_ = uVar3;
        *(undefined4 *)(pauVar25[-5] + 4) = 0;
        uStack_100 = uVar22;
        *(undefined4 *)pauVar25[-5] = 0;
        uVar3 = *(uint *)(pauVar25[-4] + 4);
        auStack_f8._0_4_ = *(undefined4 *)pauVar25[-4];
        if (auStack_f8._0_4_ == 0 && (ulonglong)uVar3 != 0) {
          stack0xffffffffffffff0c = auVar31._4_12_;
          auStack_f8._0_4_ = uVar3;
          uVar22 = *(undefined8 *)(pauVar25[-4] + 8);
          func_0x000145f40560(0,uVar22,(ulonglong)uVar3 << 2);
          auStack_f8._0_4_ = *(undefined4 *)pauVar25[-4];
        }
        else {
          uVar22 = *(undefined8 *)(pauVar25[-4] + 8);
        }
        auStack_f8._4_4_ = uVar3;
        *(undefined4 *)(pauVar25[-4] + 4) = 0;
        uStack_f0 = uVar22;
        *(undefined4 *)pauVar25[-4] = 0;
        auVar30 = auVar31._0_16_;
        uVar3 = *(uint *)(pauVar25[-3] + 4);
        auStack_e8._0_8_ = *(undefined8 *)pauVar25[-3];
        if (*(int *)pauVar25[-3] == 0 && (ulonglong)uVar3 != 0) {
          auStack_e8 = auVar30;
          lVar20 = func_0x000144d9c140(4,(ulonglong)uVar3 << 2);
          auStack_e8._8_8_ = lVar20;
          if (lVar20 == 0) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          auStack_e8._0_4_ = uVar3;
          func_0x000145f40560(lVar20,*(undefined8 *)(pauVar25[-3] + 8),
                              (ulonglong)*(uint *)(pauVar25[-3] + 4) << 2);
          auVar30 = auVar31._0_16_;
          auStack_e8._0_8_ = *(undefined8 *)pauVar25[-3];
          *(undefined8 *)pauVar25[-3] = 0;
          if (auStack_e8._8_8_ != 0) {
            func_0x000144d9c130();
            auVar30 = auVar31._0_16_;
          }
        }
        else {
          *(undefined4 *)(pauVar25[-3] + 4) = 0;
        }
        auStack_e8._8_8_ = *(undefined8 *)(pauVar25[-3] + 8);
        *(undefined8 *)(pauVar25[-3] + 8) = 0;
        *(undefined4 *)pauVar25[-3] = 0;
        uStack_d8 = *(undefined8 *)pauVar25[-2];
        uStack_d0 = *(undefined8 *)(pauVar25[-2] + 8);
        uStack_c8 = *(undefined8 *)pauVar25[-1];
        uStack_c0 = *(undefined8 *)(pauVar25[-1] + 8);
        auVar31 = ZEXT1664(auVar30);
        func_0x0001443aac50(auStack_b8,pauVar25);
        fStack_94 = (float)((ulonglong)*(undefined8 *)(pauVar25[2] + 1) >> 0x18);
        uStack_90 = (undefined1)((ulonglong)*(undefined8 *)(pauVar25[2] + 1) >> 0x38);
        uStack_b4 = *(undefined8 *)(*pauVar25 + 4);
        uStack_ac = *(undefined8 *)(*pauVar25 + 0xc);
        uStack_a4 = *(undefined8 *)(pauVar25[1] + 4);
        uStack_9c = (undefined5)*(undefined8 *)(pauVar25[1] + 0xc);
        uStack_97 = (undefined3)((ulonglong)*(undefined8 *)(pauVar25[1] + 0xc) >> 0x28);
        uStack_88 = *(undefined8 *)pauVar25[3];
        uStack_80 = pauVar25[3][8];
        auVar31 = ZEXT1664(auVar31._0_16_);
        FUN_1443aacc0(param_1,uVar21 - 2,uVar17 / 0x90,auStack_108);
        FUN_1450267e0(auStack_b8);
        auStack_e8._4_4_ = 0;
        if (auStack_e8._8_8_ != 0) {
          func_0x000144d9c130();
        }
        uVar21 = uVar21 - 1;
        pauVar25 = pauVar25 + -9;
      } while (1 < uVar21);
      lVar20 = (longlong)param_2 - (longlong)param_1;
      if (lVar20 < 0x91) {
        return;
      }
      pauStack_70 = param_1 + 2;
      pauStack_78 = param_1 + 3;
      auVar31 = ZEXT1264(ZEXT812(0));
      puStack_60 = (undefined8 *)(param_1[5] + 4);
      pauStack_68 = param_1 + 8;
      do {
        pauVar25 = param_2 + -9;
        uVar3 = *(uint *)(param_2[-9] + 4);
        auStack_108._0_4_ = *(undefined4 *)*pauVar25;
        if (auStack_108._0_4_ == 0 && (ulonglong)uVar3 != 0) {
          stack0xfffffffffffffefc = auVar31._4_12_;
          auStack_108._0_4_ = uVar3;
          uVar22 = *(undefined8 *)(param_2[-9] + 8);
          func_0x000145f40560(0,uVar22,(ulonglong)uVar3 * 0x14);
          auStack_108._0_4_ = *(undefined4 *)*pauVar25;
        }
        else {
          uVar22 = *(undefined8 *)(param_2[-9] + 8);
        }
        auStack_108._4_4_ = uVar3;
        *(undefined4 *)(param_2[-9] + 4) = 0;
        uStack_100 = uVar22;
        *(undefined4 *)*pauVar25 = 0;
        uVar3 = *(uint *)(param_2[-8] + 4);
        auStack_f8._0_4_ = *(undefined4 *)param_2[-8];
        if (auStack_f8._0_4_ == 0 && (ulonglong)uVar3 != 0) {
          stack0xffffffffffffff0c = auVar31._4_12_;
          auStack_f8._0_4_ = uVar3;
          uVar22 = *(undefined8 *)(param_2[-8] + 8);
          func_0x000145f40560(0,uVar22,(ulonglong)uVar3 << 2);
          auStack_f8._0_4_ = *(undefined4 *)param_2[-8];
        }
        else {
          uVar22 = *(undefined8 *)(param_2[-8] + 8);
        }
        auStack_f8._4_4_ = uVar3;
        *(undefined4 *)(param_2[-8] + 4) = 0;
        uStack_f0 = uVar22;
        *(undefined4 *)param_2[-8] = 0;
        auVar30 = auVar31._0_16_;
        uVar3 = *(uint *)(param_2[-7] + 4);
        auStack_e8._0_8_ = *(undefined8 *)param_2[-7];
        if (*(int *)param_2[-7] == 0 && (ulonglong)uVar3 != 0) {
          auStack_e8 = auVar30;
          lVar18 = func_0x000144d9c140(4,(ulonglong)uVar3 << 2);
          auStack_e8._8_8_ = lVar18;
          if (lVar18 == 0) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          auStack_e8._0_4_ = uVar3;
          func_0x000145f40560(lVar18,*(undefined8 *)(param_2[-7] + 8),
                              (ulonglong)*(uint *)(param_2[-7] + 4) << 2);
          auVar30 = auVar31._0_16_;
          auStack_e8._0_8_ = *(undefined8 *)param_2[-7];
          *(undefined8 *)param_2[-7] = 0;
          if (auStack_e8._8_8_ != 0) {
            func_0x000144d9c130();
            auVar30 = auVar31._0_16_;
          }
        }
        else {
          *(undefined4 *)(param_2[-7] + 4) = 0;
        }
        auStack_e8._8_8_ = *(undefined8 *)(param_2[-7] + 8);
        *(undefined8 *)(param_2[-7] + 8) = 0;
        *(undefined4 *)param_2[-7] = 0;
        uStack_d8 = *(undefined8 *)param_2[-6];
        uStack_d0 = *(undefined8 *)(param_2[-6] + 8);
        uStack_c8 = *(undefined8 *)param_2[-5];
        uStack_c0 = *(undefined8 *)(param_2[-5] + 8);
        auVar31 = ZEXT1664(auVar30);
        func_0x0001443aac50(auStack_b8,param_2 + -4);
        auVar30 = auVar31._0_16_;
        fStack_94 = (float)((ulonglong)*(undefined8 *)(param_2[-2] + 1) >> 0x18);
        uStack_90 = (undefined1)((ulonglong)*(undefined8 *)(param_2[-2] + 1) >> 0x38);
        uStack_b4 = *(undefined8 *)(param_2[-4] + 4);
        uStack_ac = *(undefined8 *)(param_2[-4] + 0xc);
        uStack_a4 = *(undefined8 *)(param_2[-3] + 4);
        uStack_9c = (undefined5)*(undefined8 *)(param_2[-3] + 0xc);
        uStack_97 = (undefined3)((ulonglong)*(undefined8 *)(param_2[-3] + 0xc) >> 0x28);
        uStack_88 = *(undefined8 *)param_2[-1];
        uStack_80 = param_2[-1][8];
        if (pauVar25 != param_1) {
          *pauVar25 = auVar30;
          uVar3 = *(uint *)(*param_1 + 4);
          iVar15 = *(int *)*param_1;
          if (iVar15 == 0 && (ulonglong)uVar3 != 0) {
            *(uint *)*pauVar25 = uVar3;
            uVar22 = *(undefined8 *)(*param_1 + 8);
            auVar31 = ZEXT1664(auVar30);
            func_0x000145f40560(0,uVar22,(ulonglong)uVar3 * 0x14);
            auVar30 = auVar31._0_16_;
            iVar15 = *(int *)*param_1;
          }
          else {
            uVar22 = *(undefined8 *)(*param_1 + 8);
          }
          *(int *)*pauVar25 = iVar15;
          *(uint *)(param_2[-9] + 4) = uVar3;
          *(undefined4 *)(*param_1 + 4) = 0;
          *(undefined8 *)(param_2[-9] + 8) = uVar22;
          *(undefined4 *)*param_1 = 0;
          param_2[-8] = auVar30;
          uVar3 = *(uint *)(param_1[1] + 4);
          iVar15 = *(int *)param_1[1];
          if (iVar15 == 0 && (ulonglong)uVar3 != 0) {
            *(uint *)param_2[-8] = uVar3;
            uVar22 = *(undefined8 *)(param_1[1] + 8);
            auVar31 = ZEXT1664(auVar30);
            func_0x000145f40560(0,uVar22,(ulonglong)uVar3 << 2);
            auVar30 = auVar31._0_16_;
            iVar15 = *(int *)param_1[1];
          }
          else {
            uVar22 = *(undefined8 *)(param_1[1] + 8);
          }
          *(int *)param_2[-8] = iVar15;
          *(uint *)(param_2[-8] + 4) = uVar3;
          *(undefined4 *)(param_1[1] + 4) = 0;
          *(undefined8 *)(param_2[-8] + 8) = uVar22;
          *(undefined4 *)param_1[1] = 0;
        }
        auVar31 = ZEXT1664(auVar30);
        FUN_140641050(param_2 + -7,pauStack_70);
        uVar22 = *(undefined8 *)(*pauStack_78 + 8);
        uVar26 = *(undefined8 *)pauStack_78[1];
        uVar5 = *(undefined8 *)(pauStack_78[1] + 8);
        *(undefined8 *)param_2[-6] = *(undefined8 *)*pauStack_78;
        *(undefined8 *)(param_2[-6] + 8) = uVar22;
        *(undefined8 *)param_2[-5] = uVar26;
        *(undefined8 *)(param_2[-5] + 8) = uVar5;
        auVar31 = ZEXT1664(auVar31._0_16_);
        FUN_1443aac60(param_2 + -4,param_1 + 5);
        *(undefined8 *)(param_2[-2] + 1) = *(undefined8 *)((longlong)puStack_60 + 0x1d);
        uVar22 = puStack_60[1];
        uVar26 = puStack_60[2];
        uVar5 = puStack_60[3];
        *(undefined8 *)(param_2[-4] + 4) = *puStack_60;
        *(undefined8 *)(param_2[-4] + 0xc) = uVar22;
        *(undefined8 *)(param_2[-3] + 4) = uVar26;
        *(undefined8 *)(param_2[-3] + 0xc) = uVar5;
        *(undefined8 *)param_2[-1] = *(undefined8 *)*pauStack_68;
        param_2[-1][8] = (*pauStack_68)[8];
        auVar31 = ZEXT1664(auVar31._0_16_);
        FUN_1443aacc0(param_1,0,(lVar20 + -0x90 >> 4) * -0x71c71c71c71c71c7,auStack_108);
        FUN_1450267e0(auStack_b8);
        auStack_e8._4_4_ = 0;
        if (auStack_e8._8_8_ != 0) {
          func_0x000144d9c130();
        }
        lVar20 = lVar20 + -0x90;
        param_2 = pauVar25;
      } while (0x90 < lVar20);
      return;
    }
    pauVar25 = param_2 + -9;
    pauVar28 = (undefined1 (*) [16])(uVar19 * 0x90);
    pauVar27 = param_1 + uVar19 * 9;
    pauStack_70 = param_2;
    if ((longlong)pauVar25 - (longlong)param_1 < 0x1681) {
      fVar2 = *(float *)(pauVar27[7] + 4);
      if (fVar2 < *(float *)(param_1[7] + 4)) {
        FUN_1443ab2a0(pauVar27,param_1);
        fVar2 = *(float *)(pauVar27[7] + 4);
      }
      if (*(float *)(param_2[-2] + 4) < fVar2) {
        FUN_1443ab2a0(pauVar25,pauVar27);
        fVar2 = *(float *)(param_1[7] + 4);
        pauVar24 = param_1;
        goto LAB_14007dc92;
      }
    }
    else {
      uVar17 = ((ulonglong)((longlong)pauVar25 - (longlong)param_1) >> 4) * -0x71c71c71c71c71c7 + 1
               >> 3;
      fVar2 = *(float *)(param_1[uVar17 * 9 + 7] + 4);
      pauVar24 = param_1 + uVar17 * 9;
      pauStack_78 = pauVar28;
      if (fVar2 < *(float *)(param_1[7] + 4)) {
        FUN_1443ab2a0(pauVar24,param_1);
        fVar2 = *(float *)(pauVar24[7] + 4);
      }
      if ((*(float *)((param_1 + uVar17 * 0x12)[7] + 4) < fVar2) &&
         (FUN_1443ab2a0(param_1 + uVar17 * 0x12,pauVar24),
         *(float *)(pauVar24[7] + 4) < *(float *)(param_1[7] + 4))) {
        FUN_1443ab2a0(pauVar24,param_1);
      }
      fVar2 = *(float *)(pauVar27[7] + 4);
      pauVar28 = pauVar27 + uVar17 * -9;
      if (fVar2 < *(float *)(pauVar27[uVar17 * -9 + 7] + 4)) {
        FUN_1443ab2a0(pauVar27,pauVar28);
        fVar2 = *(float *)(pauVar27[7] + 4);
      }
      if ((*(float *)((pauVar27 + uVar17 * 9)[7] + 4) < fVar2) &&
         (FUN_1443ab2a0(pauVar27 + uVar17 * 9,pauVar27),
         *(float *)(pauVar27[7] + 4) < *(float *)(pauVar28[7] + 4))) {
        FUN_1443ab2a0(pauVar27,pauVar28);
      }
      fVar2 = *(float *)(param_2[uVar17 * -9 + -2] + 4);
      pauVar23 = pauVar25 + uVar17 * -9;
      pauVar28 = pauVar25 + uVar17 * -0x12;
      if (fVar2 < *(float *)(param_2[uVar17 * -0x12 + -2] + 4)) {
        FUN_1443ab2a0(pauVar23,pauVar28);
        fVar2 = *(float *)(pauVar23[7] + 4);
      }
      if ((*(float *)(param_2[-2] + 4) < fVar2) &&
         (FUN_1443ab2a0(pauVar25,pauVar23),
         *(float *)(pauVar23[7] + 4) < *(float *)(pauVar28[7] + 4))) {
        FUN_1443ab2a0(pauVar23,pauVar28);
      }
      fVar2 = *(float *)(pauVar27[7] + 4);
      if (fVar2 < *(float *)(pauVar24[7] + 4)) {
        FUN_1443ab2a0(pauVar27,pauVar24);
        fVar2 = *(float *)(pauVar27[7] + 4);
      }
      pauVar28 = pauStack_78;
      if (*(float *)(pauVar23[7] + 4) < fVar2) {
        FUN_1443ab2a0(pauVar23,pauVar27);
        fVar2 = *(float *)(pauVar24[7] + 4);
LAB_14007dc92:
        if (*(float *)(pauVar27[7] + 4) < fVar2) {
          FUN_1443ab2a0(pauVar27,pauVar24);
        }
      }
    }
    do {
      pauVar25 = pauVar27;
      if (pauVar25 <= param_1) break;
      pauVar27 = pauVar25 + -9;
    } while (*(float *)(pauVar25[-2] + 4) == *(float *)(pauVar25[7] + 4));
    pauVar27 = (undefined1 (*) [16])(param_1[9] + (longlong)pauVar28);
    do {
      pauVar23 = pauVar27;
      pauVar28 = pauVar25;
      pauVar24 = pauVar23;
      if (param_2 <= pauVar23) break;
      pauVar27 = pauVar23 + 9;
    } while (*(float *)(pauVar23[7] + 4) == *(float *)(pauVar25[7] + 4));
LAB_14007dceb:
    pauVar27 = pauVar25;
    if (pauVar24 < param_2) {
      if (*(float *)(pauVar24[7] + 4) <= *(float *)(pauVar28[7] + 4)) {
        if (*(float *)(pauVar24[7] + 4) < *(float *)(pauVar28[7] + 4)) goto joined_r0x00014007dd2b;
        if (pauVar24 != pauVar23) {
          FUN_1443ab2a0(pauVar23,pauVar24);
        }
        pauVar23 = pauVar23 + 9;
      }
      pauVar24 = pauVar24 + 9;
      goto LAB_14007dceb;
    }
joined_r0x00014007dd2b:
    while (pauVar25 = pauVar27, param_1 < pauVar25) {
      pauVar27 = pauVar25 + -9;
      if (*(float *)(pauVar28[7] + 4) <= *(float *)(pauVar25[-2] + 4)) {
        if (*(float *)(pauVar28[7] + 4) < *(float *)(pauVar25[-2] + 4)) break;
        pauVar1 = pauVar28 + -9;
        bVar29 = pauVar25 != pauVar28;
        pauVar28 = pauVar1;
        if (bVar29) {
          FUN_1443ab2a0(pauVar1,pauVar27);
        }
      }
    }
    if ((pauVar24 != param_2) || (pauVar25 != param_1)) {
      if (pauVar25 == param_1) {
        if (pauVar23 != pauVar24) {
          FUN_1443ab2a0(pauVar28,pauVar23);
        }
        pauVar23 = pauVar23 + 9;
        FUN_1443ab2a0(pauVar28,pauVar24);
        pauVar28 = pauVar28 + 9;
        pauVar24 = pauVar24 + 9;
      }
      else {
        pauVar27 = pauVar25 + -9;
        if (pauVar24 == param_2) {
          pauVar1 = pauVar28 + -9;
          if (pauVar25 != pauVar28) {
            FUN_1443ab2a0(pauVar27,pauVar1);
          }
          pauVar23 = pauVar23 + -9;
          FUN_1443ab2a0(pauVar1,pauVar23);
          pauVar25 = pauVar27;
          pauVar28 = pauVar1;
        }
        else {
          FUN_1443ab2a0(pauVar24,pauVar27);
          pauVar25 = pauVar27;
          pauVar24 = pauVar24 + 9;
        }
      }
      goto LAB_14007dceb;
    }
    param_3 = (param_3 >> 2) + (param_3 >> 1);
    if ((longlong)pauVar28 - (longlong)param_1 < (longlong)pauStack_70 - (longlong)pauVar23) {
      FUN_14007da30(param_1,pauVar28,param_3);
      pauVar28 = param_2;
      param_1 = pauVar23;
    }
    else {
      FUN_14007da30(pauVar23,param_2,param_3);
    }
    uVar17 = (longlong)pauVar28 - (longlong)param_1;
    param_2 = pauVar28;
  } while( true );
}

