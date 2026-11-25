// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140195f10  size: 1075 bytes
// Name:    FUN_140195f10
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140f29d30, FUN_14129c590, FUN_1409a0d60, FUN_140d60ae0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140195f10(longlong param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [32];
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  ushort uVar8;
  uint *puVar9;
  ulonglong uVar10;
  ushort uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar35 [64];
  longlong lStack_70;
  undefined8 uStack_60;
  undefined1 auStack_58 [16];
  
  auStack_58 = in_ZMM6._0_16_;
  if (param_2 == 0) {
    lVar6 = param_1 + 0x10 + (longlong)_DAT_149e38b98 * 0x10;
    if (*(int *)(lVar6 + 4) != 0) {
      uVar14 = 0;
      do {
        FUN_14129c590(param_1);
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(lVar6 + 4));
    }
    *(undefined4 *)(lVar6 + 4) = 0;
  }
  uVar14 = (ulonglong)*(int *)(param_1 + 0x48);
  if (0 < (longlong)uVar14) {
    uVar13 = 0;
    do {
      puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x40) + uVar13 * 8);
      if (puVar12 != (undefined4 *)0x0) {
        uVar11 = 0;
        lStack_70 = 0;
        uVar8 = 0;
        do {
          auVar15 = in_ZMM6._0_16_;
          plVar2 = *(longlong **)(puVar12 + 2);
          if (param_2 == 0) {
            lVar6 = plVar2[2];
            auVar35 = ZEXT1664(auVar15);
            lVar5 = func_0x00014129c780((int)lVar6);
            auVar15 = auVar35._0_16_;
            if (lVar5 != 0) {
              FUN_140d60ae0(*(undefined8 *)(param_1 + 0x40),uVar14 & 0xffffffff,(int)lVar6,lVar5);
              auVar15 = auVar35._0_16_;
            }
          }
          in_ZMM6 = ZEXT1664(auVar15);
          iVar4 = (**(code **)(*plVar2 + 0x18))(plVar2);
          if (iVar4 == param_2) {
            uStack_60 = 0xffffffff00000000;
            iVar4 = FUN_140f29d30(plVar2,&uStack_60);
            FUN_1409a0d60(plVar2 + 2,iVar4,&uStack_60);
            if (iVar4 == 5) {
              uVar14 = (ulonglong)uVar11;
              if (uVar11 == uVar8) {
                lVar6 = func_0x000144d9c140(4,(uint)uVar11 * 4 + 0x40);
                auVar16 = in_ZMM6._0_32_;
                if (uVar11 != 0) {
                  func_0x000145f40560(lVar6,lStack_70,(uint)uVar11 * 4);
                  auVar16 = in_ZMM6._0_32_;
                }
                auVar3 = vpcmpeqd_avx2(auVar16,auVar16);
                in_ZMM6 = ZEXT3264(auVar3);
                auVar15._8_8_ = 0;
                auVar15._0_8_ = lVar6 + 0xc + uVar14 * 4;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = lVar6 + 8 + uVar14 * 4;
                auVar15 = vpunpcklqdq_avx(auVar17,auVar15);
                auVar18._8_8_ = 0;
                auVar18._0_8_ = lVar6 + 4 + uVar14 * 4;
                auVar23._8_8_ = 0;
                auVar23._0_8_ = lVar6 + uVar14 * 4;
                auVar17 = vpunpcklqdq_avx(auVar23,auVar18);
                auVar17 = ZEXT116(0) * auVar15 | ZEXT116(1) * auVar17;
                auVar16._0_8_ = -(ulonglong)(auVar17._0_8_ == 0);
                lVar5 = SUB648(ZEXT1664((undefined1  [16])0x0),8);
                auVar16._8_8_ = -(ulonglong)(auVar17._8_8_ == lVar5);
                auVar16._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar15,0) == 0);
                auVar16._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar15,8) == 0);
                auVar19._8_8_ = 0;
                auVar19._0_8_ = lVar6 + 0x1c + uVar14 * 4;
                auVar24._8_8_ = 0;
                auVar24._0_8_ = lVar6 + 0x18 + uVar14 * 4;
                auVar15 = vpunpcklqdq_avx(auVar24,auVar19);
                auVar25._8_8_ = 0;
                auVar25._0_8_ = lVar6 + 0x14 + uVar14 * 4;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = lVar6 + 0x10 + uVar14 * 4;
                auVar17 = vpunpcklqdq_avx(auVar30,auVar25);
                auVar17 = ZEXT116(0) * auVar15 | ZEXT116(1) * auVar17;
                auVar21._0_8_ = -(ulonglong)(auVar17._0_8_ == 0);
                auVar21._8_8_ = -(ulonglong)(auVar17._8_8_ == lVar5);
                auVar21._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar15,0) == 0);
                auVar21._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar15,8) == 0);
                auVar16 = vpackssdw_avx2(auVar16,auVar21);
                auVar15 = vpackssdw_avx(SUB3216(auVar16 ^ auVar3,0),SUB3216(auVar16 ^ auVar3,0x10));
                auVar15 = vpshufd_avx(auVar15,0xd8);
                auVar16 = vpmovzxwd_avx2(auVar15);
                auVar20._8_8_ = 0;
                auVar20._0_8_ = lVar6 + 0x2c + uVar14 * 4;
                auVar26._8_8_ = 0;
                auVar26._0_8_ = lVar6 + 0x28 + uVar14 * 4;
                auVar15 = vpunpcklqdq_avx(auVar26,auVar20);
                auVar27._8_8_ = 0;
                auVar27._0_8_ = lVar6 + 0x24 + uVar14 * 4;
                auVar31._8_8_ = 0;
                auVar31._0_8_ = lVar6 + 0x20 + uVar14 * 4;
                auVar17 = vpunpcklqdq_avx(auVar31,auVar27);
                auVar16 = vpslld_avx2(auVar16,0x1f);
                auVar17 = ZEXT116(0) * auVar15 | ZEXT116(1) * auVar17;
                auVar21 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
                auVar16 = vpmaskmovd_avx2(auVar16,auVar21);
                *(undefined1 (*) [32])(lVar6 + uVar14 * 4) = auVar16;
                auVar22._0_8_ = -(ulonglong)(auVar17._0_8_ == 0);
                auVar22._8_8_ = -(ulonglong)(auVar17._8_8_ == lVar5);
                auVar22._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar15,0) == 0);
                auVar22._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar15,8) == 0);
                auVar28._8_8_ = 0;
                auVar28._0_8_ = lVar6 + 0x3c + uVar14 * 4;
                auVar32._8_8_ = 0;
                auVar32._0_8_ = lVar6 + 0x38 + uVar14 * 4;
                auVar15 = vpunpcklqdq_avx(auVar32,auVar28);
                auVar33._8_8_ = 0;
                auVar33._0_8_ = lVar6 + 0x34 + uVar14 * 4;
                auVar34._8_8_ = 0;
                auVar34._0_8_ = lVar6 + 0x30 + uVar14 * 4;
                auVar17 = vpunpcklqdq_avx(auVar34,auVar33);
                auVar17 = ZEXT116(0) * auVar15 | ZEXT116(1) * auVar17;
                auVar29._0_8_ = -(ulonglong)(auVar17._0_8_ == 0);
                auVar29._8_8_ = -(ulonglong)(auVar17._8_8_ == lVar5);
                auVar29._16_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar15,0) == 0);
                auVar29._24_8_ = -(ulonglong)(SUB168(ZEXT116(1) * auVar15,8) == 0);
                auVar16 = vpackssdw_avx2(auVar22,auVar29);
                auVar15 = vpackssdw_avx(SUB3216(auVar16 ^ auVar3,0),SUB3216(auVar16 ^ auVar3,0x10));
                auVar15 = vpshufd_avx(auVar15,0xd8);
                auVar16 = vpmovzxwd_avx2(auVar15);
                auVar16 = vpslld_avx2(auVar16,0x1f);
                auVar16 = vpmaskmovd_avx2(auVar16,auVar21);
                *(undefined1 (*) [32])(lVar6 + 0x20 + uVar14 * 4) = auVar16;
                if (lStack_70 != 0) {
                  in_ZMM6 = ZEXT1664(auVar3._0_16_);
                  func_0x000144d9c130();
                }
                uVar8 = uVar11 + 0x10;
                lStack_70 = lVar6;
              }
              uVar11 = uVar11 + 1;
              *(undefined4 *)(lStack_70 + uVar14 * 4) = *puVar12;
            }
          }
          uVar1 = *(uint *)(param_1 + 0x48);
          uVar14 = (ulonglong)uVar1;
          puVar12 = *(undefined4 **)(puVar12 + 4);
          if ((puVar12 == (undefined4 *)0x0) && (iVar4 = (int)uVar13 + 1, iVar4 < (int)uVar1)) {
            uVar10 = (longlong)iVar4;
            do {
              uVar13 = uVar10;
              uVar10 = uVar13 + 1;
              puVar12 = *(undefined4 **)(*(longlong *)(param_1 + 0x40) + -8 + uVar10 * 8);
              if (puVar12 != (undefined4 *)0x0) break;
            } while ((longlong)uVar10 < (longlong)(int)uVar1);
          }
        } while (puVar12 != (undefined4 *)0x0);
        if (uVar11 != 0) {
          uVar14 = 0;
          do {
            if (*(uint *)(param_1 + 0x48) != 0) {
              uVar1 = *(uint *)(lStack_70 + uVar14 * 4);
              for (puVar9 = *(uint **)(*(longlong *)(param_1 + 0x40) +
                                      ((ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x48)) * 8)
                  ; puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 4)) {
                if (*puVar9 == uVar1) {
                  puVar9 = puVar9 + 2;
                  goto LAB_140196282;
                }
              }
            }
            puVar9 = (uint *)0x0;
LAB_140196282:
            (**(code **)(**(longlong **)puVar9 + 8))();
            if (*(undefined8 **)puVar9 != (undefined8 *)0x0) {
              (**(code **)**(undefined8 **)puVar9)();
            }
            if (*(uint *)(param_1 + 0x48) != 0) {
              uVar1 = *(uint *)(lStack_70 + uVar14 * 4);
              uVar13 = (ulonglong)uVar1 % (ulonglong)*(uint *)(param_1 + 0x48);
              puVar9 = *(uint **)(*(longlong *)(param_1 + 0x40) + uVar13 * 8);
              if (puVar9 != (uint *)0x0) {
                if (*puVar9 == uVar1) {
                  puVar7 = (uint *)(*(longlong *)(param_1 + 0x40) + uVar13 * 8);
                }
                else {
                  do {
                    puVar7 = puVar9;
                    puVar9 = *(uint **)(puVar7 + 4);
                    if (puVar9 == (uint *)0x0) goto LAB_1401962dc;
                  } while (*puVar9 != uVar1);
                  puVar7 = puVar7 + 4;
                }
                *(undefined8 *)puVar7 = *(undefined8 *)(puVar9 + 4);
                func_0x000144d9c130();
                *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
              }
            }
LAB_1401962dc:
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar11);
        }
        if (uVar8 == 0) {
          return;
        }
        if (lStack_70 == 0) {
          return;
        }
        func_0x000144d9c130(lStack_70);
        return;
      }
      uVar13 = uVar13 + 1;
    } while (uVar14 != uVar13);
  }
  return;
}

