// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14001c6c0  size: 506 bytes
// Name:    FUN_14001c6c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140005d90
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14001c6c0(longlong param_1,longlong *param_2,undefined4 param_3,int param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar24 [64];
  undefined1 auVar23 [16];
  
  piVar1 = (int *)(param_1 + 0x20 + (longlong)param_4 * 0x18);
  do {
    iVar8 = *piVar1;
    while (iVar8 != -1) {
      LOCK();
      iVar2 = *piVar1;
      bVar12 = iVar8 == iVar2;
      if (bVar12) {
        *piVar1 = iVar8 + 1;
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      UNLOCK();
      if (bVar12) {
        lVar10 = FUN_140005d90(param_1,param_3,param_4);
        if (lVar10 == 0) {
          uVar11 = 0;
        }
        else {
          auVar24 = ZEXT1664(CONCAT412(param_5 * *(float *)(lVar10 + 0x2c),
                                       CONCAT48(param_5 * *(float *)(lVar10 + 0x28),
                                                CONCAT44(param_5 * *(float *)(lVar10 + 0x24),
                                                         param_5 * *(float *)(lVar10 + 0x20)))));
          uVar9 = (**(code **)(*param_2 + 8))(param_2);
          uVar7 = _DAT_145fc6f10;
          uVar11 = 0;
          fVar22 = auVar24._0_4_;
          auVar23 = auVar24._0_16_;
          switch(uVar9) {
          case 0:
            fVar13 = auVar24._4_4_ * _DAT_145fc6edc;
            fVar14 = auVar24._8_4_ * _DAT_145fc6edc;
            fVar15 = auVar24._12_4_ * _DAT_145fc6edc;
            *(float *)(param_2 + 2) = fVar22 * _DAT_145fc6edc;
            *(float *)((longlong)param_2 + 0x14) = fVar13;
            *(float *)(param_2 + 3) = fVar14;
            *(float *)((longlong)param_2 + 0x1c) = fVar15;
            break;
          case 1:
            *(float *)(param_2 + 1) = fVar22;
            break;
          case 2:
          case 5:
            auVar23 = vmovshdup_avx(auVar23);
            fVar13 = auVar23._0_4_ * _DAT_145fc6edc;
            *(float *)(param_2 + 1) = fVar22;
            *(float *)((longlong)param_2 + 0xc) = fVar13;
            break;
          case 3:
          case 6:
            auVar4 = vshufps_avx(auVar23,auVar23,0xe1);
            lVar10 = vmovlps_avx(auVar4);
            param_2[1] = lVar10;
            auVar23 = vshufpd_avx(auVar23,auVar23,1);
            *(float *)(param_2 + 2) = auVar23._0_4_ * _DAT_145fc6edc;
            break;
          default:
            goto LAB_14001c88d;
          case 8:
            fVar13 = *(float *)(lVar10 + 0x30);
            auVar20._0_8_ = CONCAT44(_DAT_145fc6f10,_DAT_145fc6f10);
            auVar20._8_4_ = _DAT_145fc6f10;
            auVar20._12_4_ = _DAT_145fc6f10;
            auVar4 = vmovshdup_avx(auVar23);
            auVar5 = vshufps_avx(auVar23,auVar23,0xff);
            auVar21._0_4_ = (uint)fVar22 ^ _DAT_145fc6f10;
            auVar21._4_4_ = (uint)auVar24._4_4_ ^ _DAT_145fc6f10;
            auVar21._8_4_ = (uint)auVar24._8_4_ ^ _DAT_145fc6f10;
            auVar21._12_4_ = (uint)auVar24._12_4_ ^ _DAT_145fc6f10;
            auVar18._0_4_ = auVar4._0_4_ ^ _DAT_145fc6f10;
            auVar18._4_4_ = auVar4._4_4_ ^ _DAT_145fc6f10;
            auVar18._8_4_ = auVar4._8_4_ ^ _DAT_145fc6f10;
            auVar18._12_4_ = auVar4._12_4_ ^ _DAT_145fc6f10;
            auVar16 = ZEXT416((uint)(fVar13 * param_5));
            auVar4 = vinsertps_avx(auVar21,auVar16,0x1c);
            auVar16 = vinsertps_avx(auVar23,auVar16,0x10);
            auVar3 = vmovlhps_avx(auVar4,auVar18);
            auVar6 = vshufps_avx(auVar4,auVar23,0xd4);
            auVar4 = vinsertps_avx(auVar3,auVar21,0x30);
            auVar3 = vinsertps_avx(auVar6,auVar21,0x30);
            *(undefined1 (*) [16])(param_2 + 2) = auVar4;
            *(undefined1 (*) [16])(param_2 + 4) = auVar3;
            auVar3 = vshufps_avx(auVar16,auVar23,0x14);
            auVar4 = vmovlhps_avx(auVar16,auVar18);
            auVar6 = ZEXT416((uint)(-(fVar13 * param_5) - 0.0));
            auVar4 = vinsertps_avx(auVar4,auVar23,0x30);
            auVar16 = vshufpd_avx(auVar23,auVar23,1);
            *(undefined1 (*) [16])(param_2 + 6) = auVar3;
            *(undefined1 (*) [16])(param_2 + 8) = auVar4;
            auVar17._0_4_ = auVar5._0_4_ ^ uVar7;
            auVar17._4_4_ = auVar5._4_4_ ^ uVar7;
            auVar17._8_4_ = auVar5._8_4_ ^ uVar7;
            auVar17._12_4_ = auVar5._12_4_ ^ uVar7;
            auVar19._0_8_ = auVar16._0_8_ ^ auVar20._0_8_;
            auVar19._8_8_ = auVar16._8_8_ ^ auVar20._8_8_;
            auVar4 = vinsertps_avx(auVar19,auVar6,0x1c);
            auVar16 = vinsertps_avx(auVar16,auVar6,0x10);
            auVar3 = vmovlhps_avx(auVar4,auVar17);
            auVar6 = vshufps_avx(auVar16,auVar23,0xb4);
            auVar5 = vmovlhps_avx(auVar16,auVar17);
            auVar16 = vshufps_avx(auVar4,auVar23,0xf4);
            auVar4 = vinsertps_avx(auVar3,auVar19,0x30);
            auVar16 = vinsertps_avx(auVar16,auVar19,0x30);
            auVar23 = vinsertps_avx(auVar5,auVar23,0xb0);
            *(undefined1 (*) [16])(param_2 + 10) = auVar4;
            *(undefined1 (*) [16])(param_2 + 0xc) = auVar16;
            *(undefined1 (*) [16])(param_2 + 0xe) = auVar6;
            *(undefined1 (*) [16])(param_2 + 0x10) = auVar23;
            break;
          case 9:
            auVar23 = vshufpd_avx(auVar23,auVar23,1);
            *(undefined1 (*) [16])(param_2 + 1) = auVar23;
            *(float *)(param_2 + 3) = param_5 * *(float *)(lVar10 + 0x30);
          }
          uVar11 = 1;
        }
LAB_14001c88d:
        iVar8 = *piVar1;
        do {
          LOCK();
          iVar2 = *piVar1;
          bVar12 = iVar8 == iVar2;
          if (bVar12) {
            *piVar1 = iVar8 + -1;
            iVar2 = iVar8;
          }
          iVar8 = iVar2;
          UNLOCK();
        } while (!bVar12);
        return uVar11;
      }
    }
  } while( true );
}

