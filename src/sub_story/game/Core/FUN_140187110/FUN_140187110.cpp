// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140187110  size: 1202 bytes
// Name:    FUN_140187110
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140187110
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140187110(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  longlong lVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  longlong *plStack_98;
  undefined8 uStack_90;
  ulonglong uStack_88;
  undefined4 uStack_7c;
  undefined1 auVar30 [32];
  
  if (param_3 == 0) {
    lVar25 = *param_1;
    if (lVar25 != 0) {
      plVar20 = (longlong *)(lVar25 + 0x10);
      lVar25 = *(longlong *)(lVar25 + 8) + 1 + (ulonglong)(*(longlong *)(lVar25 + 8) == -1);
      do {
        if (*plVar20 != -2) {
          *plVar20 = -2;
        }
        plVar20 = plVar20 + 3;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      (**(code **)(*_DAT_14abcc310 + 0x60))();
      *param_1 = 0;
    }
  }
  else {
    if (param_3 < 8) {
      lVar25 = 8;
    }
    else {
      uVar26 = param_3 - 1;
      if (param_3 < 0x100000001) {
        if (param_3 < 0x10001) {
          if (param_3 < 0x101) {
            uVar26 = (ulonglong)(byte)(&UNK_14674a6ef)[param_3];
          }
          else {
            uVar26 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar26 >> 8] + 8);
          }
        }
        else if (param_3 < 0x1000001) {
          uVar26 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar26 >> 0x10] + 0x10);
        }
        else {
          uVar26 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar26 >> 0x18] + 0x18);
        }
      }
      else if (param_3 < 0x1000000000001) {
        if (param_3 < 0x10000000001) {
          uVar26 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar26 >> 0x20] + 0x20);
        }
        else {
          uVar26 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar26 >> 0x28] + 0x28);
        }
      }
      else if (param_3 < 0x100000000000001) {
        uVar26 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar26 >> 0x30] + 0x30);
      }
      else {
        uVar26 = (ulonglong)(byte)((&UNK_14674a6f0)[uVar26 >> 0x38] + 0x38);
      }
      lVar25 = 2L << (uVar26 & 0x3f);
    }
    uStack_7c = 2;
    plVar20 = (longlong *)
              (**(code **)(*_DAT_14abcc310 + 0x70))(_DAT_14abcc310,param_2,lVar25 * 0x18 + 0x10);
    lVar18 = _DAT_145fc1608;
    lVar1 = lVar25 + -1;
    auVar27._8_8_ = _DAT_145f437c0;
    auVar27._0_8_ = _DAT_145f437c0;
    auVar28._8_8_ = _DAT_145f437c0;
    auVar28._0_8_ = _DAT_145f437c0;
    auVar28._16_8_ = _DAT_145f437c0;
    auVar28._24_8_ = _DAT_145f437c0;
    *plVar20 = 0;
    auVar14 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
    plVar20[1] = lVar1;
    plVar21 = plVar20 + 2;
    uVar26 = lVar25 + 3U & 0xfffffffffffffffc;
    auVar29._8_8_ = lVar1;
    auVar29._0_8_ = lVar1;
    auVar30._16_8_ = lVar1;
    auVar30._0_16_ = auVar29;
    auVar30._24_8_ = lVar1;
    auVar17 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    do {
      auVar15 = vpcmpgtq_avx(auVar17._0_16_ ^ auVar27,auVar29 ^ auVar27);
      if ((~auVar15._0_4_ & 1) != 0) {
        *plVar21 = -2;
      }
      auVar15 = vpcmpgtq_avx(auVar17._0_16_ ^ auVar27,auVar29 ^ auVar27);
      auVar15 = vpshufd_avx(auVar15,0xaa);
      if (((auVar15[4] ^ auVar14[4]) & 1) != 0) {
        plVar21[3] = -2;
      }
      auVar16 = vpcmpgtq_avx2(auVar17 ^ auVar28,auVar30 ^ auVar28);
      if (((auVar16[0x10] ^ auVar14[8]) & 1) != 0) {
        plVar21[6] = -2;
      }
      auVar15 = vpshufd_avx(auVar16._16_16_,0xaa);
      if (((auVar15[0xc] ^ auVar14[0xc]) & 1) != 0) {
        plVar21[9] = -2;
      }
      plVar21 = plVar21 + 0xc;
      auVar16._0_8_ = auVar17._0_8_ + lVar18;
      auVar16._8_8_ = auVar17._8_8_ + lVar18;
      auVar16._16_8_ = auVar17._16_8_ + lVar18;
      auVar16._24_8_ = auVar17._24_8_ + lVar18;
      uVar26 = uVar26 - 4;
      auVar17 = auVar16;
    } while (uVar26 != 0);
    if (*param_1 != 0) {
      uStack_88 = *(ulonglong *)(*param_1 + 8);
      uVar26 = 0;
      lVar25 = 0;
      plStack_98 = plVar20;
      uStack_90 = param_2;
      do {
        if (*(longlong *)(*param_1 + 0x10 + uVar26 * 0x18) != -2) {
          puVar3 = (undefined8 *)(*param_1 + 0x10 + uVar26 * 0x18);
          lVar1 = puVar3[2];
          cVar5 = *(char *)(lVar1 + 0x19);
          uVar12 = *(ulonglong *)(lVar1 + 0x20);
          uVar9 = *(uint *)(lVar1 + 0x14);
          uVar10 = *(uint *)(lVar1 + 0x10);
          cVar6 = *(char *)(lVar1 + 0x1b);
          cVar7 = *(char *)(lVar1 + 0x18);
          uVar22 = *(ulonglong *)(lVar1 + 0x28);
          uVar11 = **(uint **)(lVar1 + 0x30);
          cVar8 = *(char *)(lVar1 + 0x1a);
          if (plVar20 == (longlong *)0x0) {
            lVar25 = 8;
LAB_140187442:
            FUN_140187110(&plStack_98,uStack_90,lVar25);
            lVar25 = *plStack_98;
            plVar20 = plStack_98;
          }
          else if (plVar20[1] * 4 + 4U < (ulonglong)(lVar25 * 5)) {
            lVar25 = (plVar20[1] + 1) * 2;
            goto LAB_140187442;
          }
          lVar25 = lVar25 + 1;
          *plVar20 = lVar25;
          uVar23 = (uVar12 >> 2 ^ uVar22 ^ (ulonglong)uVar11 ^
                   (ulonglong)
                   ((uint)(byte)(cVar6 * '\x03' + cVar8) << 4 ^
                   uVar9 ^ uVar10 ^ (uint)(byte)(cVar5 * '\x03' + cVar7) << 2)) & plVar20[1];
          puVar4 = (ulonglong *)(plVar20 + uVar23 * 3 + 2);
          uVar12 = *puVar4;
          uVar22 = uVar23;
          if (uVar12 == 0xfffffffffffffffe) {
            *puVar4 = 0xffffffffffffffff;
            puVar4[2] = puVar3[2];
          }
          else {
            do {
              uVar22 = uVar22 + 1 & plVar20[1];
            } while (plVar20[uVar22 * 3 + 2] != -2);
            puVar2 = (ulonglong *)(plVar20 + uVar22 * 3 + 2);
            uVar13 = puVar4[1];
            uVar19 = uVar13;
            if (uVar13 == uVar23) {
              *puVar2 = uVar12;
              puVar2[1] = uVar23;
              puVar2[2] = puVar4[2];
            }
            else {
              do {
                uVar24 = uVar19;
                uVar19 = plVar20[uVar24 * 3 + 2];
              } while (plVar20[uVar24 * 3 + 2] != uVar23);
              *puVar2 = uVar12;
              puVar2[1] = uVar13;
              puVar2[2] = puVar4[2];
              plVar20[uVar24 * 3 + 2] = uVar22;
              uVar22 = 0xffffffffffffffff;
            }
            puVar4[2] = puVar3[2];
            *puVar4 = uVar22;
          }
          puVar4[1] = uVar23;
          *puVar3 = 0xfffffffffffffffe;
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 <= uStack_88);
      (**(code **)(*_DAT_14abcc310 + 0x60))(_DAT_14abcc310,*param_1);
    }
    *param_1 = (longlong)plVar20;
  }
  return;
}

