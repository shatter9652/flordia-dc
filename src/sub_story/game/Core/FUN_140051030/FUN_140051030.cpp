// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140051030  size: 1848 bytes
// Name:    FUN_140051030
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1403443b0, FUN_144e6ea00, FUN_14156d270
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140051030(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [32];
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar29 [64];
  longlong *plStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_58 [16];
  undefined1 auVar23 [32];
  undefined1 auVar25 [32];
  
  auStack_58 = in_ZMM7._0_16_;
  plStack_90 = (longlong *)0x0;
  iVar15 = *(int *)(param_1 + 0xe0);
  if ((iVar15 != 0) && (uVar14 = *(ulonglong *)(param_2 + 0x10), uVar14 != 0)) {
    uVar10 = (uVar14 >> 0x21 ^ uVar14) * -0xae502812aa7333;
    lVar11 = *(longlong *)(param_1 + 0xe8);
    lVar16 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
    uVar19 = (ulonglong)(((uint)((ulonglong)lVar16 >> 0x21) ^ (uint)lVar16) & iVar15 - 1U);
    uVar10 = uVar19 * 0x10;
    bVar21 = *(ulonglong *)(lVar11 + uVar10) != 0;
    if (*(ulonglong *)(lVar11 + uVar10) != uVar14 && bVar21) {
      do {
        uVar19 = (ulonglong)((uint)(uVar19 * 0x10 + 0x10 >> 4) & iVar15 - 1U);
        uVar10 = uVar19 * 0x10;
        bVar21 = *(ulonglong *)(lVar11 + uVar10) != 0;
      } while (bVar21 && *(ulonglong *)(lVar11 + uVar10) != uVar14);
    }
    if (bVar21) {
      uVar10 = uVar10 >> 4;
      while (iVar9 = (int)uVar10, iVar15 != iVar9) {
        if (*(longlong *)(lVar11 + uVar10 * 0x10) != 0) {
          if (iVar9 != iVar15) {
            plVar13 = *(longlong **)(lVar11 + 8 + uVar10 * 0x10);
            goto LAB_140051479;
          }
          break;
        }
        uVar10 = (ulonglong)(iVar9 + 1);
      }
    }
  }
  uVar5 = FUN_144e6ea00(*(undefined8 *)(param_1 + 0x48),0);
  FUN_14156d270(*(undefined8 *)(param_2 + 0x28),&plStack_90,uVar5);
  if (plStack_90 == (longlong *)0x0) {
    return 1;
  }
  uVar14 = *(ulonglong *)(param_2 + 0x10);
  auVar28 = ZEXT1664(CONCAT88(_DAT_145f437c0,_DAT_145f437c0));
  auVar26 = ZEXT3264(CONCAT824(_DAT_145f437c0,
                               CONCAT816(_DAT_145f437c0,CONCAT88(_DAT_145f437c0,_DAT_145f437c0))));
  auVar22 = vpcmpeqd_avx(in_ZMM7._0_16_,in_ZMM7._0_16_);
  auVar29 = ZEXT1664(auVar22);
  uVar10 = (uVar14 >> 0x21 ^ uVar14) * -0xae502812aa7333;
  lVar11 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
LAB_140051188:
  uVar20 = *(uint *)(param_1 + 0xe0);
  puVar8 = *(ulonglong **)(param_1 + 0xe8);
  uVar4 = 0;
  if (uVar20 != 0) {
    uVar4 = uVar20 - 1;
    uVar19 = (ulonglong)(uVar4 & ((uint)((ulonglong)lVar11 >> 0x21) ^ (uint)lVar11));
    uVar10 = puVar8[uVar19 * 2];
    while( true ) {
      plVar13 = plStack_90;
      if (uVar10 == uVar14) {
        if (uVar20 == (uint)uVar19) goto LAB_140051479;
        goto LAB_140051734;
      }
      puVar12 = puVar8 + uVar19 * 2;
      if (uVar10 == 0) break;
      uVar19 = (ulonglong)
               ((uint)((ulonglong)((longlong)puVar12 + (0x10 - (longlong)puVar8)) >> 4) & uVar4);
      uVar10 = puVar8[uVar19 * 2];
    }
    uVar4 = uVar20;
    if (*(uint *)(param_1 + 0xe4) != (uVar20 * 0x4b) / 100) goto LAB_14005141e;
  }
  auStack_88 = auVar26._0_32_;
  uVar2 = uVar20 * 2;
  if (uVar20 * 2 < 0x21) {
    uVar2 = 0x20;
  }
  uVar19 = (ulonglong)uVar2;
  auVar28 = ZEXT1664(auVar28._0_16_);
  auVar29 = ZEXT1664(auVar29._0_16_);
  lVar6 = func_0x000144d9c140(8,uVar19 << 4);
  auVar1 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
  lVar16 = uVar19 - 1;
  *(longlong *)(param_1 + 0xe8) = lVar6;
  puVar7 = (undefined8 *)(lVar6 + 0x30);
  *(uint *)(param_1 + 0xe0) = uVar2;
  uVar10 = 0;
  auVar22._8_8_ = lVar16;
  auVar22._0_8_ = lVar16;
  auVar23._16_8_ = lVar16;
  auVar23._0_16_ = auVar22;
  auVar23._24_8_ = lVar16;
  auVar27 = auVar28._0_16_;
  do {
    auVar24._8_8_ = uVar10;
    auVar24._0_8_ = uVar10;
    auVar25._16_8_ = uVar10;
    auVar25._0_16_ = auVar24;
    auVar25._24_8_ = uVar10;
    auVar24 = vpcmpgtq_avx(auVar24 ^ auVar27,auVar22 ^ auVar27);
    if ((~auVar24._0_4_ & 1) != 0) {
      puVar7[-6] = 0;
    }
    auVar25 = vpor_avx2(auVar25,auVar1);
    auVar24 = vpcmpgtq_avx(auVar25._0_16_ ^ auVar27,auVar22 ^ auVar27);
    auVar24 = vpshufd_avx(auVar24,0xaa);
    if (((auVar24[4] ^ auVar29[4]) & 1) != 0) {
      puVar7[-4] = 0;
    }
    auVar25 = vpcmpgtq_avx2(auVar25 ^ auStack_88,auVar23 ^ auStack_88);
    if (((auVar25[0x10] ^ auVar29[8]) & 1) != 0) {
      puVar7[-2] = 0;
    }
    auVar24 = vpshufd_avx(auVar25._16_16_,0xaa);
    if (((auVar24[0xc] ^ auVar29[0xc]) & 1) != 0) {
      *puVar7 = 0;
    }
    uVar10 = uVar10 + 4;
    puVar7 = puVar7 + 8;
  } while ((uVar19 + 3 & 0xfffffffffffffffc) != uVar10);
  if (uVar4 != 0) {
    puVar12 = puVar8;
    do {
      uVar10 = *puVar12;
      if (uVar10 != 0) {
        uVar19 = (uVar10 >> 0x21 ^ uVar10) * -0xae502812aa7333;
        lVar16 = *(longlong *)(param_1 + 0xe8);
        lVar6 = (uVar19 >> 0x21 ^ uVar19) * -0x3b314601e57a13ad;
        uVar20 = *(int *)(param_1 + 0xe0) - 1;
        uVar19 = (ulonglong)(((uint)((ulonglong)lVar6 >> 0x21) ^ (uint)lVar6) & uVar20);
        lVar18 = uVar19 * 0x10;
        lVar6 = *(longlong *)(lVar16 + lVar18);
        while (lVar6 != 0) {
          uVar19 = (ulonglong)((uint)(uVar19 * 0x10 + 0x10 >> 4) & uVar20);
          lVar18 = uVar19 * 0x10;
          lVar6 = *(longlong *)(lVar16 + lVar18);
        }
        *(ulonglong *)(lVar16 + lVar18) = uVar10;
        ((ulonglong *)(lVar16 + lVar18))[1] = puVar12[1];
        *puVar12 = 0;
      }
      puVar12 = puVar12 + 2;
    } while (puVar12 != puVar8 + (ulonglong)uVar4 * 2);
  }
  auVar26 = ZEXT3264(auStack_88);
  if (puVar8 != (ulonglong *)0x0) {
    auVar28 = ZEXT1664(auVar27);
    auVar29 = ZEXT1664(auVar29._0_16_);
    func_0x000144d9c130(puVar8);
    auVar26 = ZEXT3264(auStack_88);
  }
  goto LAB_140051188;
  while (uVar19 = (ulonglong)(uVar20 + 1), uVar4 != uVar20) {
LAB_140051734:
    uVar20 = (uint)uVar19;
    if (puVar8[uVar19 * 2] != 0) break;
  }
LAB_140051479:
  if (plVar13[1] != 0) {
    (**(code **)(*plVar13 + 8))();
  }
  uVar3 = _DAT_14abbef44;
  uVar14 = *(ulonglong *)(param_2 + 0x10);
  iVar15 = *(int *)(param_1 + 0xf0);
  uVar10 = (uVar14 >> 0x21 ^ uVar14) * -0xae502812aa7333;
  lVar11 = (uVar10 >> 0x21 ^ uVar10) * -0x3b314601e57a13ad;
  uVar20 = (uint)((ulonglong)lVar11 >> 0x21) ^ (uint)lVar11;
  if ((iVar15 != 0) && (uVar14 != 0)) {
    lVar11 = *(longlong *)(param_1 + 0xf8);
    uVar19 = (ulonglong)(iVar15 - 1U & uVar20);
    uVar17 = uVar19 * 0x10;
    uVar10 = *(ulonglong *)(lVar11 + uVar17);
    while ((uVar10 != 0 && (uVar10 != uVar14))) {
      uVar19 = (ulonglong)((uint)(uVar19 * 0x10 + 0x10 >> 4) & iVar15 - 1U);
      uVar17 = uVar19 * 0x10;
      uVar10 = *(ulonglong *)(lVar11 + uVar17);
    }
    if (uVar10 != 0) {
      uVar17 = uVar17 >> 4;
      while (iVar9 = (int)uVar17, iVar15 != iVar9) {
        if (*(longlong *)(lVar11 + uVar17 * 0x10) != 0) {
          if (iVar9 != iVar15) {
            *(undefined4 *)(lVar11 + 8 + uVar17 * 0x10) = _DAT_14abbef44;
            goto LAB_140051605;
          }
          break;
        }
        uVar17 = (ulonglong)(iVar9 + 1);
      }
    }
  }
  do {
    if (iVar15 != 0) {
      uVar4 = iVar15 - 1;
      lVar11 = *(longlong *)(param_1 + 0xf8);
      uVar19 = (ulonglong)(uVar4 & uVar20);
      lVar16 = uVar19 * 0x10;
      uVar10 = *(ulonglong *)(lVar11 + lVar16);
      while( true ) {
        if (uVar10 == uVar14) {
          if (iVar15 == (int)uVar19) goto LAB_140051605;
          goto LAB_14005170c;
        }
        puVar8 = (ulonglong *)(lVar16 + lVar11);
        if (uVar10 == 0) break;
        uVar19 = (ulonglong)((uint)((ulonglong)((longlong)puVar8 + (0x10 - lVar11)) >> 4) & uVar4);
        lVar16 = uVar19 * 0x10;
        uVar10 = *(ulonglong *)(lVar11 + lVar16);
      }
      if (*(uint *)(param_1 + 0xf4) != (uint)(iVar15 * 0x4b) / 100) goto LAB_1400515c4;
    }
    FUN_1403443b0((int *)(param_1 + 0xf0),iVar15 * 2);
    iVar15 = *(int *)(param_1 + 0xf0);
  } while( true );
LAB_14005141e:
  *puVar12 = uVar14;
  *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
  lVar11 = *(longlong *)(param_1 + 0xe8);
  uVar14 = (ulonglong)((longlong)puVar12 - lVar11) >> 4;
  uVar4 = (uint)uVar14;
  uVar20 = uVar4;
  while ((*(uint *)(param_1 + 0xe0) != uVar4 &&
         (uVar20 = (uint)uVar14, *(longlong *)(lVar11 + (uVar14 & 0xffffffff) * 0x10) == 0))) {
    uVar4 = uVar20 + 1;
    uVar14 = (ulonglong)uVar4;
    uVar20 = *(uint *)(param_1 + 0xe0);
  }
  *(longlong **)(lVar11 + 8 + (ulonglong)uVar20 * 0x10) = plStack_90;
  goto LAB_140051479;
LAB_1400515c4:
  *puVar8 = uVar14;
  *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
  lVar11 = *(longlong *)(param_1 + 0xf8);
  uVar14 = (ulonglong)((longlong)puVar8 - lVar11) >> 4;
  uVar4 = (uint)uVar14;
  uVar20 = uVar4;
  while ((*(uint *)(param_1 + 0xf0) != uVar4 &&
         (uVar20 = (uint)uVar14, *(longlong *)(lVar11 + (uVar14 & 0xffffffff) * 0x10) == 0))) {
    uVar4 = uVar20 + 1;
    uVar14 = (ulonglong)uVar4;
    uVar20 = *(uint *)(param_1 + 0xf0);
  }
  *(undefined4 *)(lVar11 + 8 + (ulonglong)uVar20 * 0x10) = uVar3;
  goto LAB_140051605;
  while (uVar19 = (ulonglong)(uVar20 + 1), uVar4 != uVar20) {
LAB_14005170c:
    uVar20 = (uint)uVar19;
    if (*(longlong *)(lVar11 + uVar19 * 0x10) != 0) break;
  }
LAB_140051605:
  if ((ulonglong)*(ushort *)(param_2 + 0x20) != 0) {
    uVar20 = *(uint *)(param_3 + 4);
    uVar14 = (ulonglong)*(ushort *)(param_2 + 0x20) + 1;
    do {
      uVar10 = (ulonglong)uVar20;
      uVar20 = uVar20 + 1;
      uVar5 = *(undefined8 *)(*(longlong *)(param_2 + 0x18) + -0x10 + uVar14 * 8);
      uVar14 = uVar14 - 1;
      *(uint *)(param_3 + 4) = uVar20;
      *(undefined8 *)(param_3 + 8 + uVar10 * 0x18) = uVar5;
      *(longlong *)(param_3 + 0x10 + uVar10 * 0x18) = param_2;
      *(undefined4 *)(param_3 + 0x18 + uVar10 * 0x18) = 0;
      *(undefined1 *)(param_3 + 0x1c + uVar10 * 0x18) = 0;
    } while (1 < uVar14);
  }
  return 0;
}

