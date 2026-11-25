// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016c440  size: 2743 bytes
// Name:    FUN_14016c440
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144cd5bd0, FUN_140acba60, FUN_14214f460, FUN_1407ec3a0, FUN_141a5c700, FUN_144cd5ab0, FUN_1408f6170, FUN_144cd5760, FUN_140c2a4c0, FUN_14214f400, FUN_1414e5890, FUN_144ceb5b0, FUN_14214f380, FUN_141a5c630, FUN_1408f6410, FUN_1408f6520, FUN_144cd55d0, FUN_1414e5c50, FUN_144cd5920, FUN_14065fb10, FUN_141351f90, FUN_140acbbe0, FUN_140acc040, FUN_1450278b0, FUN_144cd5690, FUN_1443702c0, FUN_14214f300, FUN_144ceb710
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14016c440(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  undefined4 uVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined8 in_stack_fffffffffffffe98;
  undefined8 *puVar17;
  undefined4 uVar18;
  ulonglong in_stack_fffffffffffffea0;
  undefined4 uVar20;
  undefined8 uVar19;
  undefined8 *in_stack_fffffffffffffeb0;
  uint uStack_124;
  undefined8 uStack_120;
  undefined4 uStack_118;
  longlong lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  longlong lStack_f0;
  longlong lStack_e8;
  undefined8 uStack_e0;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [16];
  undefined1 aauStack_78 [3] [16];
  
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe98 >> 0x20);
  if ((*(char *)(param_1 + 0xa98) != -1) && (bVar1 = *(byte *)(param_1 + 0xa9d), -1 < (char)bVar1))
  {
    lVar6 = func_0x000145028560(*(undefined8 *)(param_1 + 0x6b0));
    if ((bVar1 & 8) == 0 && lVar6 != 0) {
      uVar9 = (ulonglong)*(byte *)(lVar6 + 0xc0 + (ulonglong)DAT_14abc3b50);
      if (uVar9 == 0xff) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(longlong *)(lVar6 + 0x10 + uVar9 * 8);
      }
      uVar9 = (ulonglong)*(byte *)(lVar6 + 0xc0 + (ulonglong)DAT_14abc3b60);
      if (uVar9 == 0xff) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(longlong *)(lVar6 + 0x10 + uVar9 * 8);
      }
      uVar9 = (ulonglong)*(byte *)(lVar6 + 0xc0 + (ulonglong)DAT_14abc3ac0);
      if (uVar9 != 0xff) {
        uVar10 = 0;
        if (((lVar12 == 0) || (lVar11 == 0)) ||
           (lVar6 = *(longlong *)(lVar6 + 0x10 + uVar9 * 8), lVar6 == 0)) goto LAB_14016c6b0;
        cVar3 = FUN_1407ec3a0(param_1,*(undefined8 *)(lVar6 + 0x20));
        if (cVar3 != '\0') {
          func_0x000144cd55a0(*(undefined8 *)(param_1 + 0x6f8),lVar12);
          func_0x000144cd55b0(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(lVar11 + 0x20));
          func_0x000144cd55c0(*(undefined8 *)(param_1 + 0x6f8),*(undefined8 *)(lVar6 + 0x20));
          func_0x000144cd5cd0(*(undefined8 *)(param_1 + 0x6f8),param_1 + 0xa84);
          lVar6 = *(longlong *)(param_1 + 0x6f8);
          cVar3 = FUN_144ceb5b0(param_1,(int *)(lVar6 + 0x5a0));
          if (cVar3 != '\0') {
            lStack_f0 = lVar12;
            uVar7 = FUN_1450278b0(param_1);
            FUN_141351f90(param_1,&uStack_d4,uVar7);
            uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + 0xc);
            uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x28);
            func_0x00014016cf40(uVar7);
            bVar1 = *(byte *)(param_1 + 0x5fa);
            lVar12 = param_1 + 0x50;
            bVar4 = FUN_144ceb710(param_1,*(undefined1 *)(param_1 + 0x5f9));
            puVar17 = &uStack_e0;
            uStack_e0 = 0;
            func_0x000144cd7c90(lVar12,puVar17,0);
            lStack_110 = lVar12;
            func_0x000144cd7ca0(lVar12,(longlong)&uStack_e0 + 4,0);
            uStack_100 = uStack_e0;
            lStack_e8 = lVar6;
            if (*(int *)(lVar6 + 0x5b4) == 2) {
              auVar15 = ZEXT464(uStack_a8);
              uVar9 = CONCAT71((int7)(in_stack_fffffffffffffea0 >> 8),bVar1 >> 4) &
                      0xffffffffffffff01;
              bVar5 = FUN_1408f6170(*(undefined8 *)(param_1 + 0x6f8),uVar2,uVar7,uStack_a8,puVar17,
                                    uVar9);
              in_stack_fffffffffffffea0 =
                   CONCAT71((int7)(uVar9 >> 8),bVar1 >> 4) & 0xffffffffffffff01;
              uVar8 = FUN_1414e5890(*(undefined8 *)(param_1 + 0x6f8),uVar2,uVar7,auVar15._0_8_,
                                    puVar17,in_stack_fffffffffffffea0);
              uVar18 = (undefined4)((ulonglong)puVar17 >> 0x20);
              uStack_124 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),(byte)uVar8 | bVar5);
            }
            else {
              FUN_1408f6520(*(undefined8 *)(param_1 + 0x6f8));
              FUN_1414e5c50(*(undefined8 *)(param_1 + 0x6f8));
              uStack_124 = 0;
            }
            lVar11 = lStack_e8;
            lVar12 = lStack_110;
            if (*(int *)(lVar6 + 0x5a0) == 2) {
              auVar15 = ZEXT464(uStack_d4);
              puVar17 = &uStack_120;
              uStack_120 = 0;
              func_0x000144cd7c90(lStack_110,puVar17,1);
              func_0x000144cd7ca0(lVar12,(longlong)&uStack_120 + 4,1);
              in_stack_fffffffffffffea0 =
                   CONCAT71((int7)(in_stack_fffffffffffffea0 >> 8),(bVar1 & 0x10) >> 4);
              FUN_144cd55d0(*(undefined8 *)(param_1 + 0x6f8),uVar2,uVar7,auVar15._0_8_,puVar17,
                            in_stack_fffffffffffffea0);
              uVar18 = (undefined4)((ulonglong)puVar17 >> 0x20);
            }
            else {
              FUN_14214f300(*(undefined8 *)(param_1 + 0x6f8));
            }
            lVar6 = lStack_110;
            uStack_108 = uVar7;
            if (*(int *)(lVar11 + 0x5a4) == 2) {
              auVar15 = ZEXT464(uStack_d0);
              auVar16 = ZEXT464(uStack_cc);
              puVar17 = &uStack_120;
              uStack_120 = 0;
              func_0x000144cd7c90(lStack_110,puVar17,2);
              func_0x000144cd7ca0(lVar6,(longlong)&uStack_120 + 4,2);
              uVar9 = CONCAT71((int7)(in_stack_fffffffffffffea0 >> 8),bVar1 >> 4) &
                      0xffffffffffffff01;
              FUN_144cd5690(*(undefined8 *)(param_1 + 0x6f8),uVar2,uStack_108,auVar16._0_8_,puVar17,
                            uVar9);
              func_0x000144cd7c90(lVar6,puVar17,3);
              func_0x000144cd7ca0(lVar6,(longlong)&uStack_120 + 4,3);
              uVar7 = uStack_108;
              uVar9 = CONCAT71((int7)(uVar9 >> 8),bVar1 >> 4) & 0xffffffffffffff01;
              FUN_141a5c630(*(undefined8 *)(param_1 + 0x6f8),uVar2,uStack_108,auVar15._0_8_,puVar17,
                            uVar9);
              uVar20 = (undefined4)(uVar9 >> 0x20);
              uVar18 = (undefined4)((ulonglong)puVar17 >> 0x20);
            }
            else {
              FUN_14214f380(*(undefined8 *)(param_1 + 0x6f8));
              uVar20 = (undefined4)(in_stack_fffffffffffffea0 >> 0x20);
              FUN_141a5c700(*(undefined8 *)(param_1 + 0x6f8));
            }
            lVar6 = lStack_110;
            if ((*(byte *)(param_1 + 0xa9d) & 8) == 0) {
              if (*(int *)(lVar11 + 0x5c0) == 2) {
                uStack_120 = 0;
                uVar14 = uStack_c8;
                func_0x000144cd7c90(lStack_110,&uStack_120,4);
                func_0x000144cd7ca0(lVar6,(longlong)&uStack_120 + 4,4);
                in_stack_fffffffffffffeb0 =
                     (undefined8 *)
                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffeb0 >> 8),(bVar1 & 0x10) >> 4)
                ;
                uVar8 = CONCAT44(uVar18,uVar14);
                uVar19 = CONCAT44(uVar20,*(undefined4 *)(param_1 + 0x730));
                FUN_140acba60(*(undefined8 *)(param_1 + 0x6f8),uVar2,uVar7,0,uVar8,uVar19,
                              &uStack_120,in_stack_fffffffffffffeb0);
                uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
                uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
              }
              else {
                FUN_140acc040(*(undefined8 *)(param_1 + 0x6f8),0);
              }
            }
            lVar6 = lStack_110;
            if (*(int *)(lVar11 + 0x5a8) == 2) {
              puVar17 = &uStack_120;
              uStack_f8 = 0;
              bVar13 = bVar1 >> 4 & 1;
              uStack_120 = uStack_c4;
              uStack_118 = uStack_bc;
              func_0x000144cd7c90(lStack_110,&uStack_f8,6);
              func_0x000144cd7ca0(lVar6,(longlong)&uStack_f8 + 4,6);
              uVar8 = CONCAT44(uVar20,*(undefined4 *)(param_1 + 0x730));
              bVar5 = FUN_144cd5760(*(undefined8 *)(param_1 + 0x6f8),uVar2,uStack_108,0,puVar17,
                                    uVar8,&uStack_f8,&uStack_100,bVar13,bVar4);
              uVar7 = uStack_108;
              in_stack_fffffffffffffeb0 = &uStack_100;
              uVar19 = CONCAT44((int)((ulonglong)uVar8 >> 0x20),*(undefined4 *)(param_1 + 0x730));
              uVar8 = CONCAT44((int)((ulonglong)puVar17 >> 0x20),uStack_98);
              bVar13 = FUN_144cd5ab0(*(undefined8 *)(param_1 + 0x6f8),uVar2,uStack_108,0,uVar8,
                                     uVar19,&uStack_f8,in_stack_fffffffffffffeb0,bVar13,bVar4);
              uVar20 = (undefined4)((ulonglong)uVar19 >> 0x20);
              uVar18 = (undefined4)((ulonglong)uVar8 >> 0x20);
              uStack_124 = CONCAT31((int3)(uStack_124 >> 8),(byte)uStack_124 | bVar13 | bVar5);
            }
            else {
              FUN_14065fb10(*(undefined8 *)(param_1 + 0x6f8),0);
              FUN_140c2a4c0(*(undefined8 *)(param_1 + 0x6f8),0);
            }
            lVar6 = lStack_110;
            if ((*(byte *)(param_1 + 0xa9d) & 8) == 0) {
              if (*(int *)(lVar11 + 0x5c4) == 2) {
                uStack_120 = 0;
                uVar14 = uStack_b8;
                func_0x000144cd7c90(lStack_110,&uStack_120,5);
                func_0x000144cd7ca0(lVar6,(longlong)&uStack_120 + 4,5);
                in_stack_fffffffffffffeb0 =
                     (undefined8 *)
                     CONCAT71((int7)((ulonglong)in_stack_fffffffffffffeb0 >> 8),(bVar1 & 0x10) >> 4)
                ;
                uVar8 = CONCAT44(uVar20,*(undefined4 *)(param_1 + 0x734));
                FUN_140acba60(*(undefined8 *)(param_1 + 0x6f8),uVar2,uVar7,1,CONCAT44(uVar18,uVar14)
                              ,uVar8,&uStack_120,in_stack_fffffffffffffeb0);
                uVar20 = (undefined4)((ulonglong)uVar8 >> 0x20);
              }
              else {
                FUN_140acc040(*(undefined8 *)(param_1 + 0x6f8),1);
              }
            }
            lVar6 = lStack_110;
            if (*(int *)(lVar11 + 0x5ac) == 2) {
              uStack_f8 = 0;
              bVar13 = bVar1 >> 4 & 1;
              uStack_120 = uStack_b4;
              uStack_118 = uStack_ac;
              func_0x000144cd7c90(lStack_110,&uStack_f8,7);
              func_0x000144cd7ca0(lVar6,(longlong)&uStack_f8 + 4,7);
              bVar5 = FUN_144cd5760(*(undefined8 *)(param_1 + 0x6f8),uVar2,uStack_108,1,&uStack_120,
                                    CONCAT44(uVar20,*(undefined4 *)(param_1 + 0x734)),&uStack_f8,
                                    &uStack_100,bVar13,bVar4);
              uVar7 = uStack_108;
              in_stack_fffffffffffffeb0 = &uStack_100;
              uVar8 = FUN_144cd5ab0(*(undefined8 *)(param_1 + 0x6f8),uVar2,uStack_108,1,uStack_94,
                                    *(undefined4 *)(param_1 + 0x734),&uStack_f8,
                                    in_stack_fffffffffffffeb0,bVar13,bVar4);
              uStack_124 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),
                                          (byte)uVar8 | bVar5 | (byte)uStack_124);
            }
            else {
              FUN_14065fb10(*(undefined8 *)(param_1 + 0x6f8),1);
              FUN_140c2a4c0(*(undefined8 *)(param_1 + 0x6f8),1);
            }
            lVar6 = lStack_110;
            if (*(int *)(lVar11 + 0x5b8) == 2) {
              auVar15 = ZEXT1664(CONCAT412(uStack_a4,
                                           CONCAT48(uStack_a4,CONCAT44(uStack_a4,uStack_a4))));
              uStack_120 = 0;
              func_0x000144cd7c90(lStack_110,&uStack_120,8);
              func_0x000144cd7ca0(lVar6,(longlong)&uStack_120 + 4,8);
              aauStack_78[0] = auVar15._0_16_;
              uVar9 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffeb0 >> 8),bVar1 >> 4) &
                      0xffffffffffffff01;
              bVar5 = FUN_144cd5920(*(undefined8 *)(param_1 + 0x6f8),uVar2,uStack_108,0,aauStack_78,
                                    &uStack_120,&uStack_100,uVar9);
              uVar7 = uStack_108;
              in_stack_fffffffffffffeb0 =
                   (undefined8 *)(CONCAT71((int7)(uVar9 >> 8),bVar1 >> 4) & 0xffffffffffffff01);
              uVar8 = FUN_144cd5bd0(*(undefined8 *)(param_1 + 0x6f8),uVar2,uStack_108,0,uStack_90,
                                    &uStack_120,&uStack_100,in_stack_fffffffffffffeb0);
              uStack_124 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),
                                          (byte)uVar8 | bVar5 | (byte)uStack_124);
            }
            else {
              FUN_14214f460(*(undefined8 *)(param_1 + 0x6f8),0);
              FUN_14214f400(*(undefined8 *)(param_1 + 0x6f8),0);
            }
            lVar6 = lStack_110;
            if (*(int *)(lVar11 + 0x5bc) == 2) {
              auVar15 = ZEXT1664(CONCAT412(uStack_a0,
                                           CONCAT48(uStack_a0,CONCAT44(uStack_a0,uStack_a0))));
              uStack_120 = 0;
              func_0x000144cd7c90(lStack_110,&uStack_120,9);
              func_0x000144cd7ca0(lVar6,(longlong)&uStack_120 + 4,9);
              auStack_88 = auVar15._0_16_;
              uVar9 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffeb0 >> 8),bVar1 >> 4) &
                      0xffffffffffffff01;
              bVar5 = FUN_144cd5920(*(undefined8 *)(param_1 + 0x6f8),uVar2,uVar7,1,auStack_88,
                                    &uStack_120,&uStack_100,uVar9);
              uVar7 = FUN_144cd5bd0(*(undefined8 *)(param_1 + 0x6f8),uVar2,uVar7,1,uStack_8c,
                                    &uStack_120,&uStack_100,
                                    CONCAT71((int7)(uVar9 >> 8),bVar1 >> 4) & 0xffffffffffffff01);
              uVar9 = CONCAT71((int7)((ulonglong)uVar7 >> 8),(byte)uVar7 | bVar5 | (byte)uStack_124)
                      & 0xffffffff;
            }
            else {
              FUN_14214f460(*(undefined8 *)(param_1 + 0x6f8),1);
              FUN_14214f400(*(undefined8 *)(param_1 + 0x6f8),1);
              uVar9 = (ulonglong)uStack_124;
            }
            lVar6 = lStack_f0;
            if ((bVar4 & (byte)uVar9) == 1) {
              FUN_1408f6410(&uStack_100,0xfffffffe);
              FUN_140acbbe0(&uStack_120,uStack_100 & 0xffffffff,uStack_100._4_4_);
              uVar9 = *(ulonglong *)(lVar6 + 0x78);
              FUN_1443702c0(uVar9,&uStack_120);
            }
            uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
            goto LAB_14016c6b0;
          }
        }
      }
    }
  }
  uVar10 = 0;
LAB_14016c6b0:
  return uVar10 & 0xffffffff;
}

