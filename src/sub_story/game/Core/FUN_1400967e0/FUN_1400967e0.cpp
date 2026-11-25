// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400967e0  size: 1661 bytes
// Name:    FUN_1400967e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e7cd20, FUN_145647140
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400967e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined7 uVar21;
  longlong *plVar22;
  longlong *plVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar28 [64];
  uint auStackX_8 [2];
  undefined1 auStackX_10 [8];
  longlong lStackX_18;
  char cStackX_27;
  undefined8 uStack_48;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  
  uStack_48 = 0x1400967f6;
  lVar13 = FUN_145647140();
  lVar13 = -lVar13;
  *(undefined8 *)(&stack0x000014a0 + lVar13) = unaff_XMM6_Qa;
  *(undefined8 *)(&stack0x000014a8 + lVar13) = unaff_XMM6_Qb;
  *(longlong *)(&stack0x00000068 + lVar13) = param_1;
  uVar18 = (ulonglong)(param_2 - param_1) >> 5;
  if (0 < (int)uVar18) {
    auVar28 = ZEXT1264(ZEXT812(0));
    uVar19 = 0;
    *(ulonglong *)(&stack0x00000088 + lVar13) = _DAT_148fdc4e0 | _DAT_1498e6410;
    *(longlong *)(&stack0x00000078 + lVar13) = *(longlong *)(&stack0x00000068 + lVar13) + 0x2c;
    do {
      *(int *)(&stack0x0000003c + lVar13) = (int)uVar19;
      *(ulonglong *)(&stack0x00000080 + lVar13) = uVar18;
      *(undefined8 *)(&stack0x00000028 + lVar13) = 0;
      uVar11 = 0x80;
      if ((uint)uVar18 < 0x80) {
        uVar11 = (uint)uVar18;
      }
      uVar18 = 0;
      *(undefined8 *)(&stack0x00000898 + lVar13) = 0x80;
      *(undefined8 *)(&stack0x00000090 + lVar13) = 0x80;
      *(uint *)(&stack0x00000038 + lVar13) = uVar11;
      plVar22 = (longlong *)(*(longlong *)(&stack0x00000068 + lVar13) + uVar19 * 0x20);
      uVar19 = (ulonglong)(uVar11 << 5);
      plVar1 = (longlong *)((longlong)plVar22 + uVar19);
      plVar23 = plVar22;
      do {
        uVar11 = (int)(uVar19 >> 5) - 1;
        if (7 < uVar11) {
          uVar11 = 8;
        }
        if (plVar23 == plVar22) {
          uVar16 = (int)((ulonglong)((longlong)plVar1 - (longlong)plVar23) >> 5) - 1;
          uVar17 = 8;
          if (uVar16 < 8) {
            uVar17 = uVar16;
          }
          if (uVar16 != 0) {
            iVar12 = -uVar11;
            do {
              iVar12 = iVar12 + 1;
            } while (iVar12 != 0);
          }
          plVar22 = plVar23 + (ulonglong)uVar17 * 4;
        }
        lVar4 = *plVar23;
        if (lVar4 != 0 && (*(byte *)((longlong)plVar23 + 0xc) & 1) != 0) {
          uVar20 = plVar23[3];
          uVar11 = (uint)(uVar20 >> 0x20);
          if ((0x759eU >> (uVar11 >> 1 & 0xf) & 1) != 0) {
            puVar6 = (ulonglong *)(plVar23 + 2);
            uVar15 = *puVar6 >> 8 & *(ulonglong *)(&stack0x00000088 + lVar13);
            if (*(longlong *)(lVar4 + 0x28) == 0) {
              if ((*(longlong *)(lVar4 + 0x20) != 0) &&
                 ((uVar20 = uVar20 & 0x1e00000000, uVar20 != 0x400000000 ||
                  (uVar20 = 0, (*(uint *)(lVar4 + 0xb4) & 0x3e) == 0x18)))) {
                bVar2 = *(byte *)(*(longlong *)(lVar4 + 0x20) + 0x84);
                uVar21 = (undefined7)(uVar20 >> 8);
                if ((bVar2 & 8) == 0) {
                  if ((bVar2 & 0x40) == 0) {
                    *(ulonglong **)(&stack0x00000070 + lVar13) = puVar6;
                    *(char **)((longlong)&lStackX_18 + lVar13) = &cStackX_27 + lVar13;
                    (&cStackX_27)[lVar13] = '\0';
                    auStackX_10[lVar13] = 0;
                    *(undefined4 *)(&stack0xffffffffffffffe8 + lVar13) = _DAT_149f3612c;
                    *(undefined4 *)(&stack0xffffffffffffffe0 + lVar13) = _DAT_149f36128;
                    *(uint *)((longlong)auStackX_8 + lVar13) = uVar11 >> 7 & 2 | _DAT_149f36124;
                    *(undefined1 **)(&stack0xfffffffffffffff8 + lVar13) = &stack0x00000050 + lVar13;
                    *(undefined8 *)(&stack0x00000050 + lVar13) = _DAT_149f36140;
                    *(undefined8 *)(&stack0x00000058 + lVar13) = uRam0000000149f36148;
                    *(undefined8 *)(&stack0x00000040 + lVar13) = _DAT_149f36130;
                    *(undefined8 *)(&stack0x00000048 + lVar13) = uRam0000000149f36138;
                    *(undefined4 *)(&stack0x00000000 + lVar13) = _DAT_149f36150;
                    *(undefined1 **)(&stack0xfffffffffffffff0 + lVar13) = &stack0x00000040 + lVar13;
                    *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0x140096b22;
                    auVar26._0_8_ = FUN_144e7cd20(plVar23,lVar4,puVar6,CONCAT71(uVar21,uVar15 != 0))
                    ;
                    auVar26._8_56_ = extraout_var;
                    auVar9 = vmaxss_avx(auVar26._0_16_,auVar28._0_16_);
                    if ((*(float *)((ulonglong)(*(ushort *)(lVar4 + 0x96) & 0xf) * 4 + 0x149f36104)
                         <= auVar9._0_4_) && ((&cStackX_27)[lVar13] == '\0')) {
                      iVar12 = (int)uVar18 + 1;
                      *(int *)(&stack0x00000034 + lVar13) = iVar12;
                      *(int *)(&stack0x0000089c + lVar13) = iVar12;
                      bVar2 = (&stack0x000008b0)[uVar18 * 0x18 + lVar13];
                      *(longlong *)(&stack0x000008a0 + uVar18 * 0x18 + lVar13) = lVar4;
                      plVar5 = *(longlong **)((ulonglong)*(byte *)(lVar4 + 0x30) * 8 + 0x14abbe7c0);
                      uVar11 = (uint)((ulonglong)(lVar4 - *plVar5) /
                                     (ulonglong)*(uint *)(plVar5 + 1)) & 0x1ffff;
                      puVar6 = *(ulonglong **)(&stack0x00000070 + lVar13);
                      *(uint *)(&stack0x000008a8 + uVar18 * 0x18 + lVar13) =
                           (*(byte *)(lVar4 + 0x30) & 0x1f) << 0x11 | uVar11 |
                           (*(uint *)(plVar5[5] + (ulonglong)uVar11 * 4) & 0x7fe0000) << 5;
                      *(float *)(&stack0x000008ac + uVar18 * 0x18 + lVar13) = auVar9._0_4_;
                      (&stack0x000008b0)[uVar18 * 0x18 + lVar13] =
                           ((1L << ((ulonglong)DAT_1476d5590 & 0x3f) |
                            1L << ((ulonglong)DAT_1476d558c & 0x3f)) & *puVar6 >> 8) != 0 |
                           bVar2 & 0xfe;
                      uVar18 = (ulonglong)*(uint *)(&stack0x00000034 + lVar13);
                    }
                  }
                }
                else {
                  *(char **)((longlong)&lStackX_18 + lVar13) = &cStackX_27 + lVar13;
                  (&cStackX_27)[lVar13] = '\0';
                  auStackX_10[lVar13] = 0;
                  *(uint *)((longlong)auStackX_8 + lVar13) = _DAT_149f36124;
                  *(undefined4 *)(&stack0xffffffffffffffe8 + lVar13) = _DAT_149f3612c;
                  *(undefined4 *)(&stack0xffffffffffffffe0 + lVar13) = _DAT_149f36128;
                  *(undefined1 **)(&stack0xfffffffffffffff8 + lVar13) = &stack0x00000050 + lVar13;
                  *(undefined1 **)(&stack0xfffffffffffffff0 + lVar13) = &stack0x00000040 + lVar13;
                  *(undefined8 *)(&stack0x00000050 + lVar13) = _DAT_149f36140;
                  *(undefined8 *)(&stack0x00000058 + lVar13) = uRam0000000149f36148;
                  *(undefined8 *)(&stack0x00000040 + lVar13) = _DAT_149f36130;
                  *(undefined8 *)(&stack0x00000048 + lVar13) = uRam0000000149f36138;
                  *(undefined4 *)(&stack0x00000000 + lVar13) = _DAT_149f36150;
                  *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0x140096ca4;
                  auVar27._0_8_ = FUN_144e7cd20(plVar23,lVar4,puVar6,CONCAT71(uVar21,uVar15 != 0));
                  auVar27._8_56_ = extraout_var_00;
                  auVar9 = vmaxss_avx(auVar27._0_16_,auVar28._0_16_);
                  if ((*(float *)((ulonglong)(*(ushort *)(lVar4 + 0x96) & 0xf) * 4 + 0x149f36104) <=
                       auVar9._0_4_) && ((&cStackX_27)[lVar13] == '\0')) {
                    uVar11 = (int)*(ulonglong *)(&stack0x00000028 + lVar13) + 1;
                    lVar14 = (*(ulonglong *)(&stack0x00000028 + lVar13) & 0xffffffff) * 0x10;
                    *(uint *)(&stack0x00000094 + lVar13) = uVar11;
                    *(longlong *)(&stack0x00000098 + lVar14 + lVar13) = lVar4;
                    *(float *)(&stack0x000000a0 + lVar14 + lVar13) = auVar9._0_4_;
                    *(ulonglong *)(&stack0x00000028 + lVar13) = (ulonglong)uVar11;
                  }
                }
              }
            }
            else if ((1 << ((byte)(uVar20 >> 0x21) & 0xf) & 0x101eU) != 0) {
              auVar9._8_8_ = uRam0000000149f36148;
              auVar9._0_8_ = _DAT_149f36140;
              *(undefined8 *)((longlong)&lStackX_18 + lVar13) = 0;
              auStackX_10[lVar13] = 0;
              *(uint *)((longlong)auStackX_8 + lVar13) = _DAT_149f36124;
              *(undefined4 *)(&stack0xffffffffffffffe8 + lVar13) = _DAT_149f3612c;
              *(undefined4 *)(&stack0xffffffffffffffe0 + lVar13) = _DAT_149f36128;
              *(undefined1 **)(&stack0xfffffffffffffff8 + lVar13) = &stack0x00000050 + lVar13;
              *(undefined1 **)(&stack0xfffffffffffffff0 + lVar13) = &stack0x00000040 + lVar13;
              *(undefined1 (*) [16])(&stack0x00000050 + lVar13) = auVar9;
              *(undefined8 *)(&stack0x00000040 + lVar13) = _DAT_149f36130;
              *(undefined8 *)(&stack0x00000048 + lVar13) = uRam0000000149f36138;
              *(undefined4 *)(&stack0x00000000 + lVar13) = _DAT_149f36150;
              *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0x140096a12;
              uVar25 = FUN_144e7cd20(plVar23,lVar4,puVar6,uVar15 != 0);
              *(undefined4 *)(lVar4 + 200) = uVar25;
            }
          }
        }
        plVar23 = plVar23 + 4;
        uVar19 = uVar19 - 0x20;
      } while (plVar23 != plVar1);
      uVar7 = *(undefined8 *)(&stack0x00000080 + lVar13);
      iVar12 = *(int *)(&stack0x0000003c + lVar13);
      uVar8 = *(undefined8 *)(&stack0x00000028 + lVar13);
      uVar11 = (uint)uVar18;
      if ((uVar11 != 0) && (uVar17 = _DAT_149f160c0 - _DAT_149f160c4, uVar17 != 0)) {
        uVar16 = _DAT_149f160c4;
        if (uVar11 <= uVar17) {
          uVar17 = uVar11;
        }
        do {
          LOCK();
          bVar24 = uVar16 == _DAT_149f160c4;
          uVar10 = uVar17 + uVar16;
          if (!bVar24) {
            uVar16 = _DAT_149f160c4;
            uVar10 = _DAT_149f160c4;
          }
          _DAT_149f160c4 = uVar10;
          UNLOCK();
          if (bVar24) {
            if (uVar17 != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0x140096db6;
              func_0x000145f40560((ulonglong)uVar16 * 0x18 + _DAT_149f160c8,
                                  &stack0x000008a0 + lVar13,
                                  (((ulonglong)uVar17 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18);
            }
            break;
          }
          uVar17 = _DAT_149f160c0 - uVar16;
          if (uVar11 <= _DAT_149f160c0 - uVar16) {
            uVar17 = uVar11;
          }
        } while (_DAT_149f160c0 != uVar16);
      }
      uVar11 = (uint)uVar8;
      if (((uVar11 != 0) && (_DAT_149f160f4 != _DAT_149f160f0)) &&
         (uVar17 = _DAT_149f160f0 - _DAT_149f160f4, uVar17 != 0)) {
        uVar16 = _DAT_149f160f4;
        if (uVar11 <= uVar17) {
          uVar17 = uVar11;
        }
        do {
          LOCK();
          bVar24 = uVar16 == _DAT_149f160f4;
          uVar10 = uVar17 + uVar16;
          if (!bVar24) {
            uVar16 = _DAT_149f160f4;
            uVar10 = _DAT_149f160f4;
          }
          _DAT_149f160f4 = uVar10;
          UNLOCK();
          if (bVar24) {
            if (uVar17 != 0) {
              *(undefined8 *)((longlong)&uStack_48 + lVar13) = 0x140096e2c;
              func_0x000145f40560((ulonglong)uVar16 * 0x10 + 0x149f160f8,&stack0x00000098 + lVar13,
                                  (ulonglong)uVar17 << 4);
            }
            break;
          }
          uVar17 = _DAT_149f160f0 - uVar16;
          if (uVar11 <= _DAT_149f160f0 - uVar16) {
            uVar17 = uVar11;
          }
        } while (_DAT_149f160f0 != uVar16);
      }
      iVar3 = *(int *)(&stack0x00000038 + lVar13);
      uVar19 = (ulonglong)(uint)(iVar12 + iVar3);
      uVar11 = (int)uVar7 - iVar3;
      uVar18 = (ulonglong)uVar11;
    } while (uVar11 != 0 && iVar3 <= (int)uVar7);
  }
  return;
}

