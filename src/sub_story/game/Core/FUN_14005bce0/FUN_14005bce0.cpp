// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14005bce0  size: 1432 bytes
// Name:    FUN_14005bce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1421fb450, FUN_145429040, FUN_1455a9c20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14005bce0(longlong param_1,longlong param_2,uint param_3,uint param_4,int param_5,
             undefined8 *param_6,undefined8 *param_7,undefined4 *param_8,undefined4 *param_9,
             uint *param_10)

{
  byte bVar1;
  longlong *plVar2;
  ulonglong uVar3;
  bool bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  byte bVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint *puVar14;
  undefined1 auVar16 [32];
  undefined1 auVar17 [64];
  undefined1 extraout_var_00 [56];
  undefined1 in_ZMM6 [64];
  undefined1 auVar18 [64];
  undefined4 uVar19;
  undefined1 auVar20 [64];
  float fVar21;
  byte bStack_e1;
  longlong *plStack_e0;
  longlong lStack_d8;
  ulonglong uStack_d0;
  longlong lStack_c8;
  byte bStack_bd;
  undefined4 uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  ulonglong uStack_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  uint *puStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  longlong lStack_88;
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [16];
  undefined1 auVar15 [16];
  undefined1 extraout_var [56];
  
  auStack_78 = in_ZMM6._0_16_;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0xbf800000;
  if ((((param_2 != 0) &&
       (auVar16._0_8_ = -(ulonglong)(*(longlong *)(param_1 + 0x50) == 0),
       auVar16._8_8_ = -(ulonglong)(*(longlong *)(param_1 + 0x58) == 0),
       auVar16._16_8_ = -(ulonglong)(*(longlong *)(param_1 + 0x60) == 0),
       auVar16._24_8_ = -(ulonglong)(*(longlong *)(param_1 + 0x68) == 0),
       uVar7 = vmovmskpd_avx(auVar16), param_3 < (uint)POPCOUNT(uVar7 ^ 0xf))) &&
      (plVar2 = *(longlong **)(param_1 + 0x50 + (ulonglong)param_3 * 8),
      (int)param_4 < (int)(uint)*(ushort *)(plVar2 + 1))) &&
     (lVar10 = *(longlong *)(*plVar2 + (ulonglong)param_4 * 8), lVar10 != 0)) {
    uStack_90 = (ulonglong)*(byte *)(param_1 + 0xb8);
    plVar2 = *(longlong **)
              (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) +
              (ulonglong)*(ushort *)(*(longlong *)(lVar10 + 0x20) + (longlong)param_5 * 2) * 8);
    lVar10 = ((longlong *)*plVar2)[0x1a2];
    bVar1 = *(byte *)(*(longlong *)*plVar2 + 4);
    lStack_88 = 0;
    fStack_a8 = 1.0;
    uStack_a4 = 0;
    uStack_b8 = param_3;
    uStack_b4 = param_4;
    lStack_98 = param_2;
    FUN_145429040(param_2,uStack_90,plVar2,param_3,param_4,param_5,&lStack_88,&fStack_a8,&uStack_a4,
                  auStack_7c);
    uVar6 = uStack_a4;
    bVar5 = DAT_147129160;
    uVar13 = 0;
    if (bVar1 == 0) {
      return 0;
    }
    auVar20 = ZEXT464(_DAT_145fc6f48);
    uStack_d0 = 0;
    uVar7 = 0;
    uStack_b0 = 0;
    puStack_a0 = (uint *)0x0;
    lStack_c8 = lStack_88;
    plStack_e0 = _DAT_147129158;
    fVar21 = fStack_a8;
    uStack_bc = (int)lVar10;
    do {
      bVar11 = (char)uVar7 + 1;
      if (bVar11 != 0) {
        lVar10 = (ulonglong)bVar11 * 0x10;
        if (((*(char *)(*(longlong *)(*(longlong *)*plVar2 + 0x50) + -4 + lVar10) == '\0') &&
            (uVar3 = *(ulonglong *)
                      (plVar2[2] +
                      (ulonglong)
                      *(ushort *)(*(longlong *)(*(longlong *)*plVar2 + 0x50) + lVar10 + -8) * 8),
            (longlong)uVar3 < 0)) &&
           ((puVar14 = (uint *)(uVar3 & 0x7fffffffffffffff), puVar14 != (uint *)0x0 &&
            (iVar8 = func_0x000144de7de0(*puVar14), iVar8 != 0)))) {
          lStack_d8 = func_0x0001450e2130(puVar14);
          uVar19 = auVar20._0_4_;
          if ((param_6 != (undefined8 *)0x0) && (*(ushort *)(param_6 + 1) != 0)) {
            lVar10 = (ulonglong)*(ushort *)(param_6 + 1) << 4;
            plVar12 = (longlong *)*param_6;
            do {
              if (lStack_d8 == *plVar12) {
                lStack_d8 = plVar12[1];
                break;
              }
              plVar12 = plVar12 + 2;
              lVar10 = lVar10 + -0x10;
            } while (lVar10 != 0);
          }
          if (((bVar5 & 1) == 0) ||
             (((((*plStack_e0 != lStack_d8 && (plStack_e0[1] != lStack_d8)) &&
                (plStack_e0[2] != lStack_d8)) &&
               ((((plStack_e0[3] != lStack_d8 && (plStack_e0[4] != lStack_d8)) &&
                 ((plStack_e0[5] != lStack_d8 &&
                  ((plStack_e0[6] != lStack_d8 && (plStack_e0[7] != lStack_d8)))))) &&
                (plStack_e0[8] != lStack_d8)))) &&
              ((plStack_e0[9] != lStack_d8 && (plStack_e0[10] != lStack_d8)))))) {
            if (param_10 != (uint *)0x0) {
              uVar9 = param_10[1];
              if (uVar9 == *param_10) break;
              param_10[1] = uVar9 + 1;
              *(longlong *)(*(longlong *)(param_10 + 2) + (ulonglong)uVar9 * 8) = lStack_d8;
            }
            bStack_e1 = 0;
            if ((uint)uStack_90 < 3) {
              auVar18._0_8_ =
                   FUN_1421fb450(lStack_98,uStack_b8,uStack_b4,param_5,uStack_bc,lStack_d8,
                                 &bStack_e1);
              auVar18._8_56_ = extraout_var_00;
              auVar15 = auVar18._0_16_;
            }
            else {
              auVar17._0_8_ =
                   FUN_1455a9c20(lStack_98,uStack_b8,uStack_b4,param_5,uVar6,uStack_bc,lStack_d8,
                                 &bStack_e1);
              auVar17._8_56_ = extraout_var;
              auVar15 = auVar17._0_16_;
            }
            auVar18 = ZEXT1664(auVar15);
            bStack_bd = bStack_e1;
            lVar10 = (ulonglong)(*puVar14 & 0xfff) * 0x38;
            uVar9 = func_0x0001455a9d90(*(undefined2 *)(lVar10 + 0x149c3e1d8),
                                        *(undefined2 *)(lVar10 + 0x149c3e1da));
            bVar4 = (uint)uVar13 < (uint)(longlong)(fVar21 * (float)uVar9);
            if (lStack_c8 != 0) {
              bVar4 = lStack_c8 == lStack_d8;
            }
            bVar11 = (byte)(uStack_b0 & 0xffffffff) | bStack_bd;
            if ((((((byte)uStack_b0 ^ 1) & bStack_bd) != 0) || (((bVar11 ^ 1) & bVar4) != 0)) ||
               ((bStack_bd & (byte)uStack_b0 & bVar4) != 0)) {
              auVar20 = ZEXT1664(auVar18._0_16_);
              uVar13 = (longlong)(fVar21 * (float)uVar9) & 0xffffffff;
              uStack_d0 = 1;
              uStack_b0 = CONCAT71((int7)((uStack_b0 & 0xffffffff) >> 8),bVar11);
              puStack_a0 = puVar14;
            }
          }
        }
      }
      uVar19 = auVar20._0_4_;
      uVar7 = uVar7 + 1;
    } while (uVar7 != bVar1);
    if ((uStack_d0 & 1) != 0) {
      *param_7 = puStack_a0;
      *param_8 = (int)uVar13;
      *param_9 = uVar19;
      return CONCAT71((int7)(uVar13 >> 8),1);
    }
  }
  return 0;
}

