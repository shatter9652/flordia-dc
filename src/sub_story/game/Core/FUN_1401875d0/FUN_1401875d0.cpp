// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401875d0  size: 1124 bytes
// Name:    FUN_1401875d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401875d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401875d0(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar23 [32];
  undefined1 auVar24 [16];
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined4 uStack_7c;
  undefined1 auVar25 [32];
  
  if (param_3 == 0) {
    lVar19 = *param_1;
    if (lVar19 != 0) {
      plVar14 = (longlong *)(lVar19 + 0x10);
      lVar19 = *(longlong *)(lVar19 + 8) + 1 + (ulonglong)(*(longlong *)(lVar19 + 8) == -1);
      do {
        if (*plVar14 != -2) {
          *plVar14 = -2;
        }
        plVar14 = plVar14 + 3;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      (**(code **)(*_DAT_14abcc310 + 0x60))();
      *param_1 = 0;
    }
  }
  else {
    if (param_3 < 8) {
      lVar19 = 8;
    }
    else {
      uVar20 = param_3 - 1;
      if (param_3 < 0x100000001) {
        if (param_3 < 0x10001) {
          if (param_3 < 0x101) {
            uVar20 = (ulonglong)(byte)(&UNK_14674a6ef)[param_3];
          }
          else {
            uVar20 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar20 >> 8] + 8);
          }
        }
        else if (param_3 < 0x1000001) {
          uVar20 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar20 >> 0x10] + 0x10);
        }
        else {
          uVar20 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar20 >> 0x18] + 0x18);
        }
      }
      else if (param_3 < 0x1000000000001) {
        if (param_3 < 0x10000000001) {
          uVar20 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar20 >> 0x20] + 0x20);
        }
        else {
          uVar20 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar20 >> 0x28] + 0x28);
        }
      }
      else if (param_3 < 0x100000000000001) {
        uVar20 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar20 >> 0x30] + 0x30);
      }
      else {
        uVar20 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar20 >> 0x38] + 0x38);
      }
      lVar19 = 2L << (uVar20 & 0x3f);
    }
    uStack_7c = 2;
    plVar14 = (longlong *)
              (**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_2,lVar19 * 0x18 + 0x10);
    lVar11 = _DAT_145fc1608;
    lVar1 = lVar19 + -1;
    auVar22._8_8_ = _DAT_145f437c0;
    auVar22._0_8_ = _DAT_145f437c0;
    auVar23._8_8_ = _DAT_145f437c0;
    auVar23._0_8_ = _DAT_145f437c0;
    auVar23._16_8_ = _DAT_145f437c0;
    auVar23._24_8_ = _DAT_145f437c0;
    *plVar14 = 0;
    auVar7 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
    plVar14[1] = lVar1;
    plVar15 = plVar14 + 2;
    uVar20 = lVar19 + 3U & 0xfffffffffffffffc;
    auVar24._8_8_ = lVar1;
    auVar24._0_8_ = lVar1;
    auVar25._16_8_ = lVar1;
    auVar25._0_16_ = auVar24;
    auVar25._24_8_ = lVar1;
    auVar10 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    do {
      auVar8 = vpcmpgtq_avx(auVar10._0_16_ ^ auVar22,auVar24 ^ auVar22);
      if ((~auVar8._0_4_ & 1) != 0) {
        *plVar15 = -2;
      }
      auVar8 = vpcmpgtq_avx(auVar10._0_16_ ^ auVar22,auVar24 ^ auVar22);
      auVar8 = vpshufd_avx(auVar8,0xaa);
      if (((auVar8[4] ^ auVar7[4]) & 1) != 0) {
        plVar15[3] = -2;
      }
      auVar9 = vpcmpgtq_avx2(auVar10 ^ auVar23,auVar25 ^ auVar23);
      if (((auVar9[0x10] ^ auVar7[8]) & 1) != 0) {
        plVar15[6] = -2;
      }
      auVar8 = vpshufd_avx(auVar9._16_16_,0xaa);
      if (((auVar8[0xc] ^ auVar7[0xc]) & 1) != 0) {
        plVar15[9] = -2;
      }
      plVar15 = plVar15 + 0xc;
      auVar9._0_8_ = auVar10._0_8_ + lVar11;
      auVar9._8_8_ = auVar10._8_8_ + lVar11;
      auVar9._16_8_ = auVar10._16_8_ + lVar11;
      auVar9._24_8_ = auVar10._24_8_ + lVar11;
      uVar20 = uVar20 - 4;
      auVar10 = auVar9;
    } while (uVar20 != 0);
    if (*param_1 != 0) {
      uVar20 = *(ulonglong *)(*param_1 + 8);
      lVar19 = 0;
      uVar18 = 0;
      plStack_90 = plVar14;
      uStack_88 = param_2;
      do {
        if (*(longlong *)(*param_1 + 0x10 + uVar18 * 0x18) != -2) {
          puVar3 = (undefined8 *)(*param_1 + 0x10 + uVar18 * 0x18);
          if (*(longlong *)(puVar3[2] + 0x30) == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = func_0x000140185400();
          }
          if (plVar14 == (longlong *)0x0) {
            lVar19 = 8;
LAB_1401878e2:
            FUN_1401875d0(&plStack_90,uStack_88,lVar19);
            lVar19 = *plStack_90;
            plVar14 = plStack_90;
          }
          else if (plVar14[1] * 4 + 4U < (ulonglong)(lVar19 * 5)) {
            lVar19 = (plVar14[1] + 1) * 2;
            goto LAB_1401878e2;
          }
          lVar19 = lVar19 + 1;
          *plVar14 = lVar19;
          uVar16 = (ulonglong)(uVar13 & (uint)plVar14[1]);
          puVar4 = (ulonglong *)(plVar14 + uVar16 * 3 + 2);
          uVar5 = *puVar4;
          uVar17 = uVar16;
          if (uVar5 == 0xfffffffffffffffe) {
            *puVar4 = 0xffffffffffffffff;
            puVar4[2] = puVar3[2];
          }
          else {
            do {
              uVar17 = uVar17 + 1 & plVar14[1];
            } while (plVar14[uVar17 * 3 + 2] != -2);
            puVar2 = (ulonglong *)(plVar14 + uVar17 * 3 + 2);
            uVar6 = puVar4[1];
            uVar12 = uVar6;
            if (uVar6 == uVar16) {
              *puVar2 = uVar5;
              puVar2[1] = uVar16;
              puVar2[2] = puVar4[2];
            }
            else {
              do {
                uVar21 = uVar12;
                uVar12 = plVar14[uVar21 * 3 + 2];
              } while (plVar14[uVar21 * 3 + 2] != uVar16);
              *puVar2 = uVar5;
              puVar2[1] = uVar6;
              puVar2[2] = puVar4[2];
              plVar14[uVar21 * 3 + 2] = uVar17;
              uVar17 = 0xffffffffffffffff;
            }
            puVar4[2] = puVar3[2];
            *puVar4 = uVar17;
          }
          puVar4[1] = uVar16;
          *puVar3 = 0xfffffffffffffffe;
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 <= uVar20);
      (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,*param_1);
    }
    *param_1 = (longlong)plVar14;
  }
  return;
}

