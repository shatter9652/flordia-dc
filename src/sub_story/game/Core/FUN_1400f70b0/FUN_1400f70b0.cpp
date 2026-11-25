// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f70b0  size: 567 bytes
// Name:    FUN_1400f70b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145647140, FUN_140006180, FUN_14241e170
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_1400f70b0(uint *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  bool bVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 uStack_48;
  
  uStack_48 = 0x1400f70c6;
  lVar21 = FUN_145647140();
  lVar21 = -lVar21;
  *(undefined8 *)(&stack0x00004af0 + lVar21) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x00004af8 + lVar21) = unaff_XMM6_Qb;
  uVar20 = param_1[0x16];
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar21) = param_3;
  *(uint *)(&stack0xffffffffffffffe4 + lVar21) = uVar20;
  if (uVar20 == 0) {
    puVar1 = (ulonglong *)(param_1 + 2);
    uVar20 = *param_1;
LAB_1400f7210:
    do {
      uVar19 = uVar20;
      if ((uVar19 & 0x1ff0000) != 0) {
        LOCK();
        uVar20 = *param_1;
        bVar28 = uVar19 == uVar20;
        if (bVar28) {
          *param_1 = uVar19 + 0x100;
          uVar20 = uVar19;
        }
        UNLOCK();
        if (bVar28) {
          uVar23 = (uint)(*puVar1 >> 7) & 0xffffff;
          uVar22 = *puVar1;
          if ((*puVar1 >> 7 & 0xffffff) != 0) {
            do {
              if ((longlong)uVar22 < 0x100000000) {
                uVar24 = *puVar1;
              }
              else {
                LOCK();
                uVar24 = *puVar1;
                if (uVar22 == uVar24) {
                  *puVar1 = uVar22 - 0x100000000;
                  uVar24 = uVar22;
                }
                UNLOCK();
                uVar20 = uVar19;
                if (uVar22 == uVar24) goto LAB_1400f7210;
              }
              uVar23 = uVar23 - 1;
              uVar22 = uVar24;
            } while (uVar23 != 0);
          }
          uVar22 = *puVar1;
          do {
            *(ulonglong *)(&stack0xfffffffffffffff0 + lVar21) = uVar22;
            uVar24 = uVar22;
            while ((longlong)uVar24 < 0x100000000) {
              *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x1400f7290;
              cVar18 = FUN_140006180(puVar1,1,&stack0xfffffffffffffff0 + lVar21);
              uVar20 = uVar19;
              if (cVar18 != '\0') goto LAB_1400f7210;
              uVar24 = *(ulonglong *)(&stack0xfffffffffffffff0 + lVar21);
            }
            LOCK();
            uVar22 = *puVar1;
            if (uVar24 == uVar22) {
              *puVar1 = uVar24 - 0x100000000;
              uVar22 = uVar24;
            }
            UNLOCK();
            uVar20 = uVar19;
          } while (*(ulonglong *)(&stack0xfffffffffffffff0 + lVar21) != uVar22);
        }
        goto LAB_1400f7210;
      }
      LOCK();
      uVar20 = *param_1;
      bVar28 = uVar19 == uVar20;
      if (bVar28) {
        *param_1 = uVar19 + 1;
        uVar20 = uVar19;
      }
      UNLOCK();
    } while (!bVar28);
  }
  uVar22 = (ulonglong)(int)param_1[(ulonglong)(byte)(&stack0x00004b78)[lVar21] + 0x13];
  if ((longlong)uVar22 < 1) {
    iVar27 = *(int *)(&stack0xffffffffffffffe4 + lVar21);
    iVar25 = 0;
  }
  else {
    pfVar5 = *(float **)(&stack0xffffffffffffffe8 + lVar21);
    uVar3 = *param_2;
    auVar30._4_4_ = uVar3;
    auVar30._0_4_ = uVar3;
    auVar30._8_4_ = uVar3;
    auVar30._12_4_ = uVar3;
    uVar3 = param_2[1];
    auVar31._4_4_ = uVar3;
    auVar31._0_4_ = uVar3;
    auVar31._8_4_ = uVar3;
    auVar31._12_4_ = uVar3;
    uVar3 = param_2[2];
    auVar32._4_4_ = uVar3;
    auVar32._0_4_ = uVar3;
    auVar32._8_4_ = uVar3;
    auVar32._12_4_ = uVar3;
    iVar4 = *(int *)(&stack0x00004b70 + lVar21);
    lVar26 = *(longlong *)(param_1 + 8);
    lVar6 = *(longlong *)(param_1 + 10);
    lVar7 = *(longlong *)(param_1 + 0xc);
    lVar8 = *(longlong *)(param_1 + 0xe);
    uVar24 = 0;
    lVar9 = *(longlong *)(param_1 + 6);
    auVar29._0_4_ = *pfVar5 * *pfVar5;
    auVar29._4_4_ = pfVar5[1] * pfVar5[1];
    auVar29._8_4_ = pfVar5[2] * pfVar5[2];
    auVar29._12_4_ = pfVar5[3] * pfVar5[3];
    do {
      auVar10 = vsubps_avx(*(undefined1 (*) [16])(lVar9 + uVar24 * 4),auVar30);
      auVar11 = vsubps_avx(*(undefined1 (*) [16])(lVar26 + uVar24 * 4),auVar31);
      auVar12 = vsubps_avx(*(undefined1 (*) [16])(lVar6 + uVar24 * 4),auVar32);
      auVar33._0_4_ =
           auVar12._0_4_ * auVar12._0_4_ +
           auVar11._0_4_ * auVar11._0_4_ + auVar10._0_4_ * auVar10._0_4_;
      auVar33._4_4_ =
           auVar12._4_4_ * auVar12._4_4_ +
           auVar11._4_4_ * auVar11._4_4_ + auVar10._4_4_ * auVar10._4_4_;
      auVar33._8_4_ =
           auVar12._8_4_ * auVar12._8_4_ +
           auVar11._8_4_ * auVar11._8_4_ + auVar10._8_4_ * auVar10._8_4_;
      auVar33._12_4_ =
           auVar12._12_4_ * auVar12._12_4_ +
           auVar11._12_4_ * auVar11._12_4_ + auVar10._12_4_ * auVar10._12_4_;
      auVar10 = vcmpps_avx(auVar33,auVar29,1);
      puVar2 = (uint *)(lVar8 + uVar24 * 4);
      uVar20 = *puVar2;
      uVar19 = puVar2[1];
      uVar23 = puVar2[2];
      uVar13 = puVar2[3];
      puVar2 = (uint *)(lVar7 + uVar24 * 4);
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      *(undefined1 (*) [16])(&stack0x000018f0 + uVar24 * 4 + lVar21) = auVar33;
      puVar2 = (uint *)(&stack0x000031f0 + uVar24 * 4 + lVar21);
      *puVar2 = auVar10._0_4_ & uVar20;
      puVar2[1] = auVar10._4_4_ & uVar19;
      puVar2[2] = auVar10._8_4_ & uVar23;
      puVar2[3] = auVar10._12_4_ & uVar13;
      puVar2 = (uint *)(&stack0xfffffffffffffff0 + uVar24 * 4 + lVar21);
      *puVar2 = auVar10._0_4_ & uVar14;
      puVar2[1] = auVar10._4_4_ & uVar15;
      puVar2[2] = auVar10._8_4_ & uVar16;
      puVar2[3] = auVar10._12_4_ & uVar17;
      uVar24 = uVar24 + 4;
    } while (uVar24 < uVar22);
    iVar27 = *(int *)(&stack0xffffffffffffffe4 + lVar21);
    uVar24 = 0;
    iVar25 = 0;
    do {
      if (CONCAT44(*(undefined4 *)(&stack0xfffffffffffffff0 + uVar24 * 4 + lVar21),
                   *(undefined4 *)(&stack0x000031f0 + uVar24 * 4 + lVar21)) != 0) {
        lVar26 = (longlong)iVar25;
        iVar25 = iVar25 + 1;
        *(longlong *)(param_4 + lVar26 * 0x10) =
             CONCAT44(*(undefined4 *)(&stack0xfffffffffffffff0 + uVar24 * 4 + lVar21),
                      *(undefined4 *)(&stack0x000031f0 + uVar24 * 4 + lVar21));
        *(undefined4 *)(param_4 + 8 + lVar26 * 0x10) =
             *(undefined4 *)(&stack0x000018f0 + uVar24 * 4 + lVar21);
        if (iVar4 <= iVar25) break;
      }
      uVar24 = uVar24 + 1;
    } while (uVar22 != uVar24);
  }
  *(undefined8 *)((longlong)&uStack_48 + lVar21) = 0x1400f72c8;
  FUN_14241e170(param_1,iVar27 == 0);
  return iVar25;
}

