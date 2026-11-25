// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401424c0  size: 2504 bytes
// Name:    FUN_1401424c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1455db934, FUN_1455db8cc
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401424c0(longlong param_1,ulonglong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined2 uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  longlong lVar29;
  longlong unaff_GS_OFFSET;
  bool bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  
  uVar2 = *(uint *)(param_1 + 0x168);
  if (*(int *)(param_1 + 0x104) == 0) {
    uVar10 = uVar2 / *(uint *)(param_1 + 0x110);
    param_2 = (ulonglong)uVar2 % (ulonglong)*(uint *)(param_1 + 0x110);
    *(uint *)(param_1 + 0x104) = uVar10 + (uVar10 == 0);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    func_0x000144d9c130(*(longlong *)(param_1 + 0x38),param_2);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (uVar2 == 0) {
    uVar24 = 0;
  }
  else {
    uVar14 = func_0x000144d9c140(4,(longlong)(int)uVar2 << 2);
    uVar24 = (undefined2)uVar2;
    *(undefined2 *)(param_1 + 0x42) = uVar24;
    *(undefined8 *)(param_1 + 0x38) = uVar14;
  }
  *(undefined2 *)(param_1 + 0x40) = uVar24;
  if ((*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)__tls_index * 8) +
               4) < _DAT_147649c48) && (FUN_1455db8cc(&DAT_147649c48), _DAT_147649c48 == -1)) {
    _DAT_147649c44 = 0x1f;
    FUN_1455db934(&DAT_147649c48);
  }
  uVar10 = *(uint *)(param_1 + 0xf8) / *(uint *)(param_1 + 0x100);
  if (*(int *)(param_1 + 0x114) == 1) {
    uVar19 = 1;
    if (1 < (int)uVar10) {
      uVar19 = uVar10;
    }
    uVar10 = uVar19;
    iVar11 = ((int)uVar2 / (int)uVar10) * *(int *)(param_1 + 0x110);
    iVar12 = iVar11 + 0xf;
    if (-1 < iVar11) {
      iVar12 = iVar11;
    }
    uVar28 = 2;
    if (2 < iVar12 >> 4) {
      uVar28 = iVar12 >> 4;
    }
    uVar19 = (uint)*(short *)(param_1 + 0x10c);
    if (*(short *)(param_1 + 0x10c) < 0) {
      bVar30 = uVar28 < 10;
      uVar19 = 10;
    }
    else {
      bVar30 = uVar28 < uVar19;
    }
    if (bVar30) {
      uVar19 = uVar28;
    }
  }
  else {
    uVar19 = 2;
  }
  uVar28 = (uint)*(ushort *)(param_1 + 0x108);
  if (*(ushort *)(param_1 + 0x108) == 0) {
    lVar29 = 0x10 / (longlong)*(int *)(param_1 + 0x110);
    uVar28 = (uint)lVar29;
    *(short *)(param_1 + 0x108) = (short)lVar29;
  }
  iVar12 = (uVar2 - 1) + uVar28;
  uVar13 = iVar12 / (int)uVar28;
  if ((int)(uVar10 * uVar19) < (int)uVar13) {
    uVar13 = uVar10 * uVar19;
  }
  uVar10 = _DAT_147649c44;
  if ((int)uVar13 < (int)_DAT_147649c44) {
    uVar10 = uVar13;
  }
  uVar23 = 1;
  if (0 < (int)uVar13) {
    uVar23 = (ulonglong)uVar10;
  }
  iVar11 = (int)uVar23;
  uVar10 = 0;
  if (*(char *)(param_1 + 0x196) == '\x01') {
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      func_0x000144d9c130(*(longlong *)(param_1 + 0xb0),
                          (longlong)iVar12 % (longlong)(int)uVar28 & 0xffffffff);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(uint *)(param_1 + 0xbc) = uVar2;
    uVar10 = (int)(uVar2 + 0x1f) >> 5;
    *(uint *)(param_1 + 0xb8) = uVar10;
    if (0x1f < uVar2 + 0x1f) {
      puVar15 = (undefined4 *)func_0x000144f97130((ulonglong)uVar10 << 2);
      *(undefined4 **)(param_1 + 0xb0) = puVar15;
      if (uVar10 == 1) {
        *puVar15 = 0;
      }
      else {
        func_0x000145f40580(puVar15,0,(ulonglong)uVar10 << 2);
      }
    }
    uVar20 = 1;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      uVar20 = uVar23;
    }
    uVar10 = (uint)uVar20;
    lVar26 = (longlong)(int)((uVar2 - 1) + uVar10) / (longlong)(int)uVar10;
    lVar29 = *(longlong *)(param_1 + 0x30);
    uVar19 = *(uint *)(param_1 + 0x2c);
    if ((ulonglong)uVar19 != 0) {
      lVar21 = 0;
      do {
        if ((*(short *)(lVar29 + 10 + lVar21) != 0) && (*(longlong *)(lVar29 + lVar21) != 0)) {
          func_0x000144d9c130();
        }
        lVar21 = lVar21 + 0x20;
      } while ((ulonglong)uVar19 << 5 != lVar21);
      lVar29 = *(longlong *)(param_1 + 0x30);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    if (lVar29 == 0) {
      uVar19 = 0;
    }
    else {
      func_0x000144d9c130(lVar29);
      uVar19 = *(uint *)(param_1 + 0x2c);
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (uVar19 < uVar10) {
      lVar21 = func_0x000144d9c140(8,uVar20 * 0x20);
      lVar29 = *(longlong *)(param_1 + 0x30);
      if ((ulonglong)*(uint *)(param_1 + 0x2c) != 0) {
        lVar27 = (ulonglong)*(uint *)(param_1 + 0x2c) << 5;
        lVar18 = 0;
        do {
          if (lVar21 + lVar18 != 0) {
            *(undefined8 *)(lVar21 + lVar18) = *(undefined8 *)(lVar29 + lVar18);
            *(undefined4 *)(lVar21 + 8 + lVar18) = *(undefined4 *)(lVar29 + 8 + lVar18);
            *(undefined8 *)(lVar29 + lVar18) = 0;
            *(undefined4 *)(lVar29 + 8 + lVar18) = 0;
            *(undefined8 *)(lVar21 + 0x10 + lVar18) = *(undefined8 *)(lVar29 + 0x10 + lVar18);
            *(undefined2 *)(lVar21 + 0x18 + lVar18) = *(undefined2 *)(lVar29 + 0x18 + lVar18);
            *(undefined2 *)(lVar21 + 0x1a + lVar18) = *(undefined2 *)(lVar29 + 0x1a + lVar18);
          }
          lVar18 = lVar18 + 0x20;
        } while (lVar27 != lVar18);
        lVar18 = 0;
        do {
          if ((*(short *)(lVar29 + 10 + lVar18) != 0) && (*(longlong *)(lVar29 + lVar18) != 0)) {
            func_0x000144d9c130();
          }
          lVar18 = lVar18 + 0x20;
        } while (lVar27 != lVar18);
        lVar29 = *(longlong *)(param_1 + 0x30);
      }
      if (lVar29 != 0) {
        func_0x000144d9c130(lVar29);
      }
      *(longlong *)(param_1 + 0x30) = lVar21;
      *(uint *)(param_1 + 0x28) = uVar10;
      uVar19 = *(uint *)(param_1 + 0x2c);
      if (uVar19 != uVar10) {
        puVar16 = (undefined8 *)(lVar21 + (ulonglong)uVar19 * 0x20);
        lVar29 = uVar20 * 0x20 + (ulonglong)uVar19 * -0x20;
        do {
          if (puVar16 != (undefined8 *)0x0) {
            *puVar16 = 0;
            *(undefined4 *)(puVar16 + 1) = 0;
            puVar16[2] = 0;
            *(undefined2 *)(puVar16 + 3) = 0;
            *(undefined2 *)((longlong)puVar16 + 0x1a) = 0;
          }
          puVar16 = puVar16 + 4;
          lVar29 = lVar29 + -0x20;
        } while (lVar29 != 0);
      }
    }
    else if (uVar10 < uVar19) {
      plVar22 = (longlong *)(uVar20 << 5);
      do {
        if ((*(short *)((longlong)plVar22 + 10) != 0) && (*plVar22 != 0)) {
          func_0x000144d9c130();
        }
        plVar22 = plVar22 + 4;
      } while ((longlong *)((ulonglong)uVar19 << 5) != plVar22);
    }
    *(uint *)(param_1 + 0x2c) = uVar10;
    if (0 < (int)uVar10) {
      lVar29 = *(longlong *)(param_1 + 0x30);
      uVar19 = (uint)lVar26;
      lVar21 = 0;
      do {
        if (*(ushort *)(lVar29 + 10 + lVar21) < uVar19) {
          uVar1 = *(ushort *)(lVar29 + 8 + lVar21);
          puVar16 = *(undefined8 **)(lVar29 + lVar21);
          puVar17 = (undefined8 *)func_0x000144d9c140(2,(longlong)(int)uVar19 * 2);
          auVar36 = in_ZMM5._0_16_;
          if (uVar1 == 0) {
LAB_1401427ed:
            auVar36 = in_ZMM5._0_16_;
            if (puVar16 != (undefined8 *)0x0) goto LAB_14014281b;
          }
          else {
            uVar28 = (uint)uVar1;
            if (uVar28 == 0x10) {
              uVar14 = *puVar16;
              uVar31 = puVar16[1];
              uVar32 = puVar16[2];
              uVar33 = puVar16[3];
            }
            else {
              if (uVar28 != 0x20) {
                func_0x000145f40560(puVar17,puVar16,uVar28 * 2);
                goto LAB_1401427ed;
              }
              uVar14 = *puVar16;
              uVar31 = puVar16[1];
              uVar32 = puVar16[2];
              uVar33 = puVar16[3];
              uVar7 = puVar16[5];
              uVar8 = puVar16[6];
              uVar9 = puVar16[7];
              puVar17[4] = puVar16[4];
              puVar17[5] = uVar7;
              puVar17[6] = uVar8;
              puVar17[7] = uVar9;
            }
            *puVar17 = uVar14;
            puVar17[1] = uVar31;
            puVar17[2] = uVar32;
            puVar17[3] = uVar33;
LAB_14014281b:
            in_ZMM5 = ZEXT1664(auVar36);
            func_0x000144d9c130(puVar16);
          }
          *(short *)(lVar29 + 10 + lVar21) = (short)lVar26;
          *(undefined8 **)(lVar29 + lVar21) = puVar17;
          lVar29 = *(longlong *)(param_1 + 0x30);
        }
        *(undefined4 *)(lVar29 + 0x14 + lVar21) = 0;
        lVar21 = lVar21 + 0x20;
      } while (uVar20 << 5 != lVar21);
    }
    *(undefined2 *)(param_1 + 400) = 0;
  }
  lVar29 = *(longlong *)(param_1 + 0xe0);
  if (lVar29 == 0) goto LAB_140142a6f;
  uVar10 = uVar10 + iVar11;
  if ((*(uint *)(lVar29 + 0x94) < uVar10) && (*(uint *)(lVar29 + 0x90) < uVar10)) {
    uVar14 = func_0x000144d9c140(8,(ulonglong)uVar10 << 3);
    if ((ulonglong)*(uint *)(lVar29 + 0x94) != 0) {
      func_0x000145f40560(uVar14,*(undefined8 *)(lVar29 + 0x98),
                          (ulonglong)*(uint *)(lVar29 + 0x94) << 3);
    }
    if (*(longlong *)(lVar29 + 0x98) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)(lVar29 + 0x98) = uVar14;
    *(uint *)(lVar29 + 0x90) = uVar10;
  }
  auVar37 = in_ZMM5._0_32_;
  *(uint *)(lVar29 + 0x94) = uVar10;
  *(undefined1 *)(lVar29 + 0xb8) = 1;
  if (((*(int *)(param_1 + 0x114) != 0) || (*(longlong *)(param_1 + 0xe0) == 0)) ||
     (*(longlong *)(param_1 + 0x150) == 0)) goto LAB_140142a6f;
  uVar10 = uVar10 >> 1 | uVar10;
  uVar19 = *(uint *)(param_1 + 0x1a0);
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = (uVar10 >> 0x10 | uVar10) + 1;
  if (uVar19 < uVar10) {
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      func_0x000144d9c130();
    }
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
      func_0x000144d9c130();
    }
    lVar29 = func_0x000144f97130((ulonglong)uVar10 * 4);
    *(longlong *)(param_1 + 0x1b0) = lVar29;
    uVar14 = func_0x000144f97130();
    auVar37 = in_ZMM5._0_32_;
    *(undefined8 *)(param_1 + 0x1b8) = uVar14;
    *(uint *)(param_1 + 0x1a0) = uVar10;
LAB_1401429af:
    iVar12 = _DAT_145f43840;
    auVar34._8_8_ = _DAT_145f437c0;
    auVar34._0_8_ = _DAT_145f437c0;
    auVar34._16_8_ = _DAT_145f437c0;
    auVar34._24_8_ = _DAT_145f437c0;
    auVar4 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43800));
    auVar5 = vpmovsxbq_avx2(ZEXT416(_DAT_145f43804));
    auVar37 = vpcmpeqd_avx2(auVar37,auVar37);
    if (uVar10 < uVar19) {
      uVar10 = uVar19;
    }
    uVar25 = (ulonglong)(uVar10 + (uVar10 == 0));
    uVar20 = 0;
    lVar26 = uVar25 - 1;
    auVar35._8_8_ = lVar26;
    auVar35._0_8_ = lVar26;
    auVar35._16_8_ = lVar26;
    auVar35._24_8_ = lVar26;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = _DAT_146159b28;
    auVar3 = vpmovsxbd_avx2(auVar36);
    do {
      auVar38._8_8_ = uVar20;
      auVar38._0_8_ = uVar20;
      auVar38._16_8_ = uVar20;
      auVar38._24_8_ = uVar20;
      auVar6 = vpor_avx2(auVar38,auVar4);
      auVar39 = vpor_avx2(auVar38,auVar5);
      auVar39 = vpcmpgtq_avx2(auVar39 ^ auVar34,auVar35 ^ auVar34);
      auVar6 = vpcmpgtq_avx2(auVar6 ^ auVar34,auVar35 ^ auVar34);
      auVar39 = vpackssdw_avx2(auVar6,auVar39);
      auVar36 = vpackssdw_avx(SUB3216(auVar39 ^ auVar37,0),SUB3216(auVar39 ^ auVar37,0x10));
      auVar36 = vpshufd_avx(auVar36,0xd8);
      auVar39 = vpmovzxwd_avx2(auVar36);
      auVar39 = vpslld_avx2(auVar39,0x1f);
      auVar39 = vpmaskmovd_avx2(auVar39,auVar3);
      *(undefined1 (*) [32])(lVar29 + uVar20 * 4) = auVar39;
      uVar20 = uVar20 + 8;
      auVar39._0_4_ = auVar3._0_4_ + iVar12;
      auVar39._4_4_ = auVar3._4_4_ + iVar12;
      auVar39._8_4_ = auVar3._8_4_ + iVar12;
      auVar39._12_4_ = auVar3._12_4_ + iVar12;
      auVar39._16_4_ = auVar3._16_4_ + iVar12;
      auVar39._20_4_ = auVar3._20_4_ + iVar12;
      auVar39._24_4_ = auVar3._24_4_ + iVar12;
      auVar39._28_4_ = auVar3._28_4_ + iVar12;
      auVar3 = auVar39;
    } while ((uVar25 + 7 & 0xfffffffffffffff8) != uVar20);
  }
  else if (uVar19 != 0) {
    lVar29 = *(longlong *)(param_1 + 0x1b0);
    goto LAB_1401429af;
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  UNLOCK();
LAB_140142a6f:
  lVar26 = (longlong)(int)((uVar2 - 1) + iVar11) / (longlong)iVar11;
  uVar1 = *(ushort *)(param_1 + 0x22);
  lVar29 = *(longlong *)(param_1 + 0x18);
  if (uVar1 != 0) {
    lVar21 = 0;
    do {
      if ((*(short *)(lVar29 + 10 + lVar21) != 0) && (*(longlong *)(lVar29 + lVar21) != 0)) {
        func_0x000144d9c130();
      }
      lVar21 = lVar21 + 0x20;
    } while ((ulonglong)uVar1 * 0x20 != lVar21);
  }
  if (lVar29 != 0) {
    func_0x000144d9c130(lVar29);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  lVar29 = func_0x000144d9c140(8,(longlong)iVar11 * 0x20);
  lVar21 = 0;
  do {
    if (lVar29 + lVar21 != 0) {
      *(undefined8 *)(lVar29 + lVar21) = 0;
      *(undefined4 *)(lVar29 + 8 + lVar21) = 0;
      *(undefined8 *)(lVar29 + 0x10 + lVar21) = 0;
      *(undefined2 *)(lVar29 + 0x18 + lVar21) = 0;
      *(undefined2 *)(lVar29 + 0x1a + lVar21) = 0;
    }
    lVar21 = lVar21 + 0x20;
  } while ((longlong)iVar11 * 0x20 != lVar21);
  uVar1 = *(ushort *)(param_1 + 0x22);
  if (uVar1 != 0) {
    plVar22 = (longlong *)0x0;
    do {
      if ((*(short *)((longlong)plVar22 + 10) != 0) && (*plVar22 != 0)) {
        func_0x000144d9c130();
      }
      plVar22 = plVar22 + 4;
    } while ((longlong *)((ulonglong)uVar1 * 0x20) != plVar22);
  }
  *(short *)(param_1 + 0x22) = (short)uVar23;
  *(longlong *)(param_1 + 0x18) = lVar29;
  *(short *)(param_1 + 0x20) = (short)uVar23;
  if (0 < iVar11) {
    uVar10 = (uint)lVar26;
    lVar21 = 0;
    do {
      if (*(ushort *)(lVar29 + 10 + lVar21) < uVar10) {
        uVar1 = *(ushort *)(lVar29 + 8 + lVar21);
        puVar16 = *(undefined8 **)(lVar29 + lVar21);
        puVar17 = (undefined8 *)func_0x000144d9c140(2,(longlong)(int)uVar10 * 2);
        if (uVar1 == 0) {
LAB_140142b45:
          if (puVar16 != (undefined8 *)0x0) goto LAB_140142b76;
        }
        else {
          uVar19 = (uint)uVar1;
          if (uVar19 == 0x10) {
            uVar14 = *puVar16;
            uVar31 = puVar16[1];
            uVar32 = puVar16[2];
            uVar33 = puVar16[3];
          }
          else {
            if (uVar19 != 0x20) {
              func_0x000145f40560(puVar17,puVar16,uVar19 * 2);
              goto LAB_140142b45;
            }
            uVar14 = *puVar16;
            uVar31 = puVar16[1];
            uVar32 = puVar16[2];
            uVar33 = puVar16[3];
            uVar7 = puVar16[5];
            uVar8 = puVar16[6];
            uVar9 = puVar16[7];
            puVar17[4] = puVar16[4];
            puVar17[5] = uVar7;
            puVar17[6] = uVar8;
            puVar17[7] = uVar9;
          }
          *puVar17 = uVar14;
          puVar17[1] = uVar31;
          puVar17[2] = uVar32;
          puVar17[3] = uVar33;
LAB_140142b76:
          func_0x000144d9c130(puVar16);
        }
        *(short *)(lVar29 + 10 + lVar21) = (short)lVar26;
        *(undefined8 **)(lVar29 + lVar21) = puVar17;
        lVar29 = *(longlong *)(param_1 + 0x18);
      }
      *(undefined4 *)(lVar29 + 0x14 + lVar21) = 0;
      lVar21 = lVar21 + 0x20;
    } while (uVar23 << 5 != lVar21);
  }
  *(undefined2 *)(param_1 + 0x178) = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    uVar23 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + uVar23 * 4) = 0xffffffff;
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ushort *)(param_1 + 0x40));
  }
  if (*(char *)(param_1 + 0x197) != '\0') {
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      func_0x000144d9c130();
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(uint *)(param_1 + 0xac) = uVar2;
    uVar10 = (int)(uVar2 + 0x1f) >> 5;
    *(uint *)(param_1 + 0xa8) = uVar10;
    if (uVar2 + 0x1f < 0x20) {
      puVar15 = (undefined4 *)0x0;
    }
    else {
      lVar29 = (ulonglong)uVar10 * 4;
      puVar15 = (undefined4 *)func_0x000144f97130(lVar29);
      *(undefined4 **)(param_1 + 0xa0) = puVar15;
      if (uVar10 == 1) {
        *puVar15 = 0;
      }
      else {
        func_0x000145f40580(puVar15,0,lVar29);
      }
    }
    if ((uVar2 != 0) && (*(char *)(param_1 + 0x195) != '\0')) {
      func_0x000145f40580(puVar15,0xff,(ulonglong)uVar10 << 2);
      puVar15[uVar10 - 1] =
           puVar15[uVar10 - 1] & (-(uint)((uVar2 & 0x1f) == 0) | ~(-1 << (uVar2 & 0x1f)));
    }
  }
  return;
}

