// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140014250  size: 1013 bytes
// Name:    FUN_140014250
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1459bbd50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140014250(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 in_ZMM8 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 in_ZMM12 [64];
  undefined1 auStack_10c [4];
  uint uStack_108;
  undefined1 auStack_104 [108];
  undefined1 auStack_98 [16];
  undefined1 auStack_58 [16];
  
  uVar8 = _DAT_145f437c0;
  auStack_58 = in_ZMM12._0_16_;
  auStack_98 = in_ZMM8._0_16_;
  if (*(int *)(*(longlong *)(param_2 + 0x20) + 0x14c) != 0) {
    auVar27 = ZEXT1664(CONCAT88(_DAT_146165ea8,_DAT_146165ea8));
    plVar9 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x150);
    auVar26 = ZEXT1264(ZEXT812(0));
    plVar13 = plVar9;
    do {
      uVar11 = (uint)((ulonglong)((longlong)plVar13 - (longlong)plVar9) >> 5);
      if (0x7a < uVar11) {
        return;
      }
      *(longlong **)(param_2 + 0x28) = plVar13;
      lVar14 = (ulonglong)(uVar11 & 0x7f) * 0x2f0;
      uVar11 = *(uint *)(param_3 + 4);
      if (uVar11 != 0 && auVar26._0_4_ < *(float *)(param_4 + 0x18 + lVar14)) {
        puVar15 = *(undefined8 **)(param_3 + 8);
        do {
          auVar26 = ZEXT1664(auVar26._0_16_);
          auVar27 = ZEXT1664(auVar27._0_16_);
          in_ZMM12 = ZEXT1664(in_ZMM12._0_16_);
          (**(code **)(*(longlong *)*puVar15 + 0x48))((longlong *)*puVar15,param_2);
          uVar11 = *(uint *)(param_3 + 4);
          puVar15 = puVar15 + 1;
        } while (puVar15 != (undefined8 *)((ulonglong)uVar11 * 8 + *(longlong *)(param_3 + 8)));
      }
      lVar14 = lVar14 + param_4 + 8;
      iVar2 = *(int *)(lVar14 + 0x1c);
      if (iVar2 != 0) {
        if (uVar11 != 0) {
          puVar15 = *(undefined8 **)(param_3 + 8);
          do {
            auVar26 = ZEXT1664(auVar26._0_16_);
            auVar27 = ZEXT1664(auVar27._0_16_);
            auVar25 = ZEXT1664(in_ZMM12._0_16_);
            (**(code **)(*(longlong *)*puVar15 + 0x60))((longlong *)*puVar15,auStack_10c);
            auVar28 = auVar25._0_16_;
            if ((ulonglong)uStack_108 == 0) {
LAB_140014562:
              auVar26 = ZEXT1664(auVar26._0_16_);
              auVar27 = ZEXT1664(auVar27._0_16_);
              in_ZMM12 = ZEXT1664(auVar28);
              (**(code **)(*(longlong *)*puVar15 + 0x30))((longlong *)*puVar15,param_2,lVar14);
            }
            else {
              uVar10 = (ulonglong)uStack_108 + 0x3fffffffffffffff & 0x3fffffffffffffff;
              lVar3 = *(longlong *)(*(longlong *)(*plVar13 + 8) + 0x30);
              auVar29 = auVar25._0_32_;
              if (plVar13[1] == 0) {
                auVar6._8_8_ = uVar8;
                auVar6._0_8_ = uVar8;
                auVar6._16_8_ = uVar8;
                auVar6._24_8_ = uVar8;
                auVar23._8_8_ = uVar10;
                auVar23._0_8_ = uVar10;
                auVar23._16_8_ = uVar10;
                auVar23._24_8_ = uVar10;
                auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
                auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
                auVar25 = ZEXT1664((undefined1  [16])0x0);
                auVar29 = vpcmpeqd_avx2(auVar29,auVar29);
                auVar23 = vpor_avx2(auVar6,auVar23);
                uVar1 = *(undefined4 *)
                         (lVar3 + (ulonglong)*(uint *)(*(longlong *)(*plVar13 + 0x10) + 0xc) * 0x18)
                ;
                auVar17._4_4_ = uVar1;
                auVar17._0_4_ = uVar1;
                auVar17._8_4_ = uVar1;
                auVar17._12_4_ = uVar1;
                auVar17._16_4_ = uVar1;
                auVar17._20_4_ = uVar1;
                auVar17._24_4_ = uVar1;
                auVar17._28_4_ = uVar1;
                uVar12 = 0;
                do {
                  auVar22 = auVar25._0_16_;
                  auVar24._8_8_ = uVar12;
                  auVar24._0_8_ = uVar12;
                  auVar24._16_8_ = uVar12;
                  auVar24._24_8_ = uVar12;
                  auVar7 = vpor_avx2(auVar4,auVar24);
                  auVar24 = vpor_avx2(auVar5,auVar24);
                  auVar24 = vpcmpgtq_avx2(auVar6 ^ auVar24,auVar23);
                  auVar7 = vpcmpgtq_avx2(auVar6 ^ auVar7,auVar23);
                  auVar24 = vpackssdw_avx2(auVar7,auVar24);
                  auVar19 = SUB3216(auVar29 ^ auVar24,0);
                  auVar21 = SUB3216(auVar29 ^ auVar24,0x10);
                  auVar28 = vpackssdw_avx(auVar19,auVar21);
                  auVar28 = vpshufd_avx(auVar28,0xd8);
                  auVar24 = vpmovzxwd_avx2(auVar28);
                  auVar24 = vpslld_avx2(auVar24,0x1f);
                  auVar24 = vpmaskmovd_avx2(auVar24,*(undefined1 (*) [32])(auStack_104 + uVar12 * 4)
                                           );
                  uVar12 = uVar12 + 8;
                  auVar24 = vpcmpeqd_avx2(auVar24,auVar17);
                  auVar28 = vpackssdw_avx(auVar24._0_16_,auVar24._16_16_);
                  auVar28 = vpor_avx(auVar22,auVar28);
                  auVar25 = ZEXT1664(auVar28);
                } while ((uVar10 + 8 & 0x7ffffffffffffff8) != uVar12);
                auVar19 = vpackssdw_avx(auVar19,auVar21);
                auVar19 = vpshufd_avx(auVar19,0xd8);
                auVar19 = vpblendvb_avx(auVar22,auVar28,auVar19);
              }
              else {
                auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
                auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
                auVar7._8_8_ = uVar8;
                auVar7._0_8_ = uVar8;
                auVar7._16_8_ = uVar8;
                auVar7._24_8_ = uVar8;
                auVar16._8_8_ = uVar10;
                auVar16._0_8_ = uVar10;
                auVar16._16_8_ = uVar10;
                auVar16._24_8_ = uVar10;
                auVar25 = ZEXT1664((undefined1  [16])0x0);
                auVar29 = vpcmpeqd_avx2(auVar29,auVar29);
                uVar1 = *(undefined4 *)(lVar3 + (ulonglong)*(uint *)(plVar13[1] + 4) * 0x18);
                auVar18._4_4_ = uVar1;
                auVar18._0_4_ = uVar1;
                auVar18._8_4_ = uVar1;
                auVar18._12_4_ = uVar1;
                auVar18._16_4_ = uVar1;
                auVar18._20_4_ = uVar1;
                auVar18._24_4_ = uVar1;
                auVar18._28_4_ = uVar1;
                uVar12 = 0;
                do {
                  auVar22 = auVar25._0_16_;
                  auVar6 = vpor_avx2(auVar7,auVar16);
                  auVar20._8_8_ = uVar12;
                  auVar20._0_8_ = uVar12;
                  auVar20._16_8_ = uVar12;
                  auVar20._24_8_ = uVar12;
                  auVar17 = vpor_avx2(auVar4,auVar20);
                  auVar23 = vpor_avx2(auVar5,auVar20);
                  auVar23 = vpcmpgtq_avx2(auVar7 ^ auVar23,auVar6);
                  auVar6 = vpcmpgtq_avx2(auVar7 ^ auVar17,auVar6);
                  auVar23 = vpackssdw_avx2(auVar6,auVar23);
                  auVar19 = SUB3216(auVar29 ^ auVar23,0);
                  auVar21 = SUB3216(auVar29 ^ auVar23,0x10);
                  auVar28 = vpackssdw_avx(auVar19,auVar21);
                  auVar28 = vpshufd_avx(auVar28,0xd8);
                  auVar23 = vpmovzxwd_avx2(auVar28);
                  auVar23 = vpslld_avx2(auVar23,0x1f);
                  auVar23 = vpmaskmovd_avx2(auVar23,*(undefined1 (*) [32])(auStack_104 + uVar12 * 4)
                                           );
                  uVar12 = uVar12 + 8;
                  auVar23 = vpcmpeqd_avx2(auVar23,auVar18);
                  auVar28 = vpackssdw_avx(auVar23._0_16_,auVar23._16_16_);
                  auVar28 = vpor_avx(auVar22,auVar28);
                  auVar25 = ZEXT1664(auVar28);
                } while ((uVar10 + 8 & 0x7ffffffffffffff8) != uVar12);
                auVar19 = vpackssdw_avx(auVar19,auVar21);
                auVar19 = vpshufd_avx(auVar19,0xd8);
                auVar19 = vpblendvb_avx(auVar22,auVar28,auVar19);
              }
              in_ZMM12 = ZEXT3264(auVar29);
              auVar28 = auVar29._0_16_;
              if ((auVar27._0_16_ & auVar19) != (undefined1  [16])0x0) goto LAB_140014562;
            }
            puVar15 = puVar15 + 1;
          } while (puVar15 !=
                   (undefined8 *)
                   ((ulonglong)*(uint *)(param_3 + 4) * 8 + *(longlong *)(param_3 + 8)));
          iVar2 = *(int *)(lVar14 + 0x1c);
          if (iVar2 == 0) goto LAB_1400145b3;
        }
        if ((*(byte *)(lVar14 + (ulonglong)(iVar2 - 1) * 0x78 + 0x66) & 2) != 0) {
          auVar26 = ZEXT1664(auVar26._0_16_);
          auVar27 = ZEXT1664(auVar27._0_16_);
          in_ZMM12 = ZEXT1664(in_ZMM12._0_16_);
          FUN_1459bbd50(param_1);
        }
      }
LAB_1400145b3:
      plVar13 = plVar13 + 4;
      plVar9 = *(longlong **)(*(longlong *)(param_2 + 0x20) + 0x150);
    } while (plVar13 != plVar9 + (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x20) + 0x14c) * 4);
  }
  return;
}

