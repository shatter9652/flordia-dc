// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000cce0  size: 2474 bytes
// Name:    FUN_14000cce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14513baf0, FUN_144dc2ce0, FUN_144fe3300, FUN_14000d6e0, FUN_144dc4120, FUN_141ff9360, FUN_140b418d0, FUN_141ff9390, FUN_1451b06a0, FUN_1451c1630, FUN_144eb35a0, FUN_14000b940, FUN_1402f7d20, FUN_144fe3840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000cce0(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined2 uVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 extraout_var [56];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int *piVar34;
  undefined4 *in_stack_fffffffffffffd00;
  undefined4 *in_stack_fffffffffffffd08;
  undefined4 uVar35;
  uint in_stack_fffffffffffffd10;
  float fStack_2dc;
  uint uStack_2d8;
  undefined4 uStack_2d4;
  longlong lStack_2d0;
  longlong lStack_2c8;
  int iStack_2c0;
  int iStack_2bc;
  uint auStack_2b8 [2];
  undefined8 uStack_2b0;
  float fStack_2a4;
  longlong lStack_2a0;
  undefined4 auStack_298 [4];
  undefined1 auStack_288 [16];
  longlong lStack_278;
  int iStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  undefined1 auStack_238 [16];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [16];
  longlong lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_170;
  longlong alStack_168 [18];
  undefined1 auStack_d8 [16];
  undefined1 extraout_var_00 [56];
  
  auStack_d8 = in_ZMM7._0_16_;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfff7fdff;
  lVar17 = (longlong)*(int *)(param_1 + 0xf4);
  if (lVar17 != 0) {
    uStack_170 = 0x10;
    if (*(int *)(param_1 + 0xf4) < 1) {
      qsort(alStack_168,lVar17,8,&UNK_144a65a80);
    }
    else {
      lVar16 = param_1 + 0x100;
      lVar9 = 0;
      do {
        alStack_168[lVar9] = lVar16;
        lVar9 = lVar9 + 1;
        lVar16 = lVar16 + 0x90;
      } while (lVar17 != lVar9);
      uStack_170 = CONCAT44((int)lVar9,0x10);
      qsort(alStack_168,lVar17,8,&UNK_144a65a80);
      lStack_2c8 = func_0x000144dc4490(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
      auVar28 = ZEXT464((uint)_DAT_145fc6f50);
      auVar27 = ZEXT464((uint)_DAT_145fc6f48);
      lStack_278 = lStack_2c8 + 0x3c04;
      lStack_2d0 = lStack_2c8 + 0x20;
      lVar16 = 0;
      lStack_2a0 = param_2 + 0x10;
      auVar24 = ZEXT464((uint)_DAT_145fc6f50);
      uVar29 = _DAT_145fc6f10;
      uVar30 = _DAT_145fc6f10;
      fVar31 = _DAT_145fc6f04;
      fVar32 = _DAT_14614f808;
      fVar33 = _DAT_145fc6ed8;
      do {
        puVar13 = (undefined4 *)alStack_168[lVar16];
        lVar9 = func_0x000144dd0bd0(*puVar13);
        if (lVar9 != 0) {
          if (*(char *)((longlong)puVar13 + 0x7e) == '\x01') {
            uVar10 = func_0x000144da0df0(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
            func_0x000140743850(uVar10);
            if (lStack_2c8 != 0) {
              lStack_208 = 0;
              FUN_141ff9390(lStack_2d0,&lStack_208,auStack_288);
              if (((*(char *)((longlong)puVar13 + 0x82) != '\x01') || (lStack_208 != lVar9)) ||
                 (fVar33 <= (float)puVar13[0x18])) {
                FUN_141ff9360(lStack_2d0,*(undefined4 *)(lVar9 + 0x9c));
              }
              else {
                FUN_14000b940(lStack_2d0,*(undefined4 *)(lVar9 + 0x9c));
              }
            }
            uVar7 = *(uint *)(param_1 + 0x74);
            *(uint *)(param_1 + 0x74) = uVar7 | 0x200;
            if (*(char *)((longlong)puVar13 + 0x81) == '\x01') {
              *(uint *)(param_1 + 0x74) = uVar7 | 0x201;
              fVar20 = (float)puVar13[0x1a];
              auVar25 = ZEXT464((uint)puVar13[0x1b]);
              fVar19 = (float)*(int *)(param_2 + 0x1684) + *(float *)(param_2 + 0x1690);
              fVar18 = (float)func_0x0001451c14b0(param_2,puVar13[0x1b],
                                                  CONCAT44(uVar30,(uint)fVar20 ^ uVar29));
              if (fVar18 < fVar19) {
                *(uint *)(param_1 + 0x74) = uVar7 | 0x10201;
              }
              fVar19 = (float)func_0x0001451c14b0(param_2,auVar25._0_8_,fVar31 - fVar20);
              if (fVar19 < *(float *)(param_1 + 0x60)) {
                *(float *)(param_1 + 0x60) = fVar19;
              }
              if (fVar19 < auVar24._0_4_) {
                auVar24._0_8_ =
                     func_0x0001451c14b0(param_2,auVar25._0_8_,
                                         fVar20 + fVar32 + *(float *)(param_1 + 0x68));
                auVar24._8_56_ = extraout_var;
                auVar24 = ZEXT1664(auVar24._0_16_);
              }
            }
          }
          else {
            if ((*(char *)((longlong)puVar13 + 0x7f) == '\x01') &&
               (*(char *)(lVar9 + 0x30) == '\x02')) {
              plVar3 = *(longlong **)(param_1 + 8);
              cVar5 = FUN_14000d6e0(*(undefined4 *)((longlong)plVar3 + 0x9c),lVar9);
              uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffd00 >> 0x20);
              uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
              if (cVar5 != '\0') goto LAB_14000cef3;
              if (lStack_2c8 == 0) {
LAB_14000d01e:
                fStack_2dc = 0.0;
                auStack_228 = *(undefined1 (*) [16])(puVar13 + 8);
                in_stack_fffffffffffffd10 = in_stack_fffffffffffffd10 & 0xffffff00;
                piVar34 = (int *)0x0;
                in_stack_fffffffffffffd08 = (undefined4 *)CONCAT44(uVar35,0xffffffff);
                in_stack_fffffffffffffd00 = (undefined4 *)CONCAT44(uVar6,0xffffffff);
                cVar5 = FUN_14513baf0(param_2,auStack_228,CONCAT44(uVar30,uVar29 ^ puVar13[0x1a]),
                                      auStack_288,0,in_stack_fffffffffffffd00,
                                      in_stack_fffffffffffffd08,in_stack_fffffffffffffd10,
                                      &fStack_2dc);
                if (cVar5 == '\0') goto LAB_14000d5b6;
                uVar6 = FUN_144fe3840(plVar3,0);
                (**(code **)(*plVar3 + 0x450))(plVar3,auStack_238,uVar6);
                plVar3 = *(longlong **)(param_1 + 8);
                auVar21 = vsubps_avx(auStack_288,auStack_238);
                auVar25 = ZEXT1664(auVar21);
                uVar6 = FUN_144fe3840(plVar3,0);
                (**(code **)(*plVar3 + 0x470))(plVar3,&fStack_248,uVar6);
                auVar21._0_4_ = auVar25._0_4_ * fStack_248;
                auVar21._4_4_ = auVar25._4_4_ * fStack_244;
                auVar21._8_4_ = auVar25._8_4_ * fStack_240;
                auVar21._12_4_ = auVar25._12_4_ * fStack_23c;
                auVar21 = vblendps_avx(auVar21,_DAT_14614f7c0,8);
                auVar21 = vhaddps_avx(auVar21,auVar21);
                auVar21 = vhaddps_avx(auVar21,auVar21);
                if (_DAT_14615b7a0 <= auVar21._0_4_) {
                  auVar23._0_8_ = func_0x000144f4a750(param_2,fStack_2dc,1);
                  auVar23._8_56_ = extraout_var_00;
                  auVar26 = ZEXT1664(auVar23._0_16_);
                  if (_DAT_145fc6f48 < (float)auVar23._0_8_) {
                    uVar10 = func_0x00014000b0d0(*(undefined8 *)(param_1 + 0x10),param_1);
                    FUN_144dc2ce0(auStack_2b8,*(undefined8 *)(param_1 + 0x10),uVar10);
                    lVar11 = func_0x000144dc2c90(auStack_2b8[0],uStack_2b0);
                    uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffd00 >> 0x20);
                    uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
                    if (lVar11 != 0) {
                      lVar11 = *(longlong *)(param_1 + 8);
                      lVar12 = FUN_144eb35a0(*(undefined1 *)(lVar11 + 0x30),
                                             *(undefined4 *)(lVar11 + 0x9c));
                      if ((((lVar12 != 0) &&
                           (auVar22._0_4_ = auVar25._0_4_ * auVar25._0_4_,
                           auVar22._4_4_ = auVar25._4_4_ * auVar25._4_4_,
                           auVar22._8_4_ = auVar25._8_4_ * auVar25._8_4_,
                           auVar22._12_4_ = auVar25._12_4_ * auVar25._12_4_,
                           auVar21 = vhaddps_avx(auVar22,auVar22), auVar21._0_4_ < _DAT_14615dc14))
                          && (*(short *)(lVar12 + 0xec) != -1)) &&
                         (*(float *)(lVar12 + 0x17c) < auVar28._0_4_)) {
                        FUN_144fe3300(lVar11,&uStack_2d4,&fStack_2a4);
                        in_stack_fffffffffffffd10 =
                             CONCAT31((int3)(in_stack_fffffffffffffd10 >> 8),1);
                        iStack_2bc = -1;
                        in_stack_fffffffffffffd08 = (undefined4 *)CONCAT44(uVar35,0xffffffff);
                        in_stack_fffffffffffffd00 = (undefined4 *)CONCAT44(uVar6,0xffffffff);
                        piVar34 = &iStack_2bc;
                        auStack_258 = auStack_288;
                        cVar5 = FUN_14513baf0(param_2,auStack_258,
                                              fStack_2a4 * _DAT_14614f804 + _DAT_14614f804,
                                              &lStack_208,piVar34,in_stack_fffffffffffffd00,
                                              in_stack_fffffffffffffd08,in_stack_fffffffffffffd10,0)
                        ;
                        if ((cVar5 != '\0') &&
                           ((-1 < *(char *)(lStack_2a0 + 0x9c + (longlong)iStack_2bc * 0xa0) ||
                            (-1 < *(char *)(lStack_2a0 + 0x9c + (longlong)(int)fStack_2dc * 0xa0))))
                           ) {
                          uVar10 = FUN_140b418d0();
                          uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
                          fVar20 = (float)uVar10;
                          if ((fVar20 != auVar28._0_4_) || (NAN(fVar20) || NAN(auVar28._0_4_))) {
                            if (fVar20 < _DAT_14615b6d0) goto LAB_14000cfc8;
                            fVar20 = (float)func_0x000144dc76b0(param_2,uVar10);
                            iStack_2c0 = -1;
                            uStack_268 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70);
                            uStack_260 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78);
                            func_0x000144dc3790(&uStack_268,auStack_218);
                            piVar34 = &iStack_26c;
                            in_stack_fffffffffffffd10 = 0xffffffff;
                            cVar5 = FUN_1451b06a0(param_2,auStack_218,auStack_298,&iStack_2c0,
                                                  piVar34,(ulonglong)in_stack_fffffffffffffd00 &
                                                          0xffffffffffffff00,
                                                  CONCAT44(uVar6,0xffffffff),0xffffffff,1);
                            if (((cVar5 != '\0') && ((float)iStack_2c0 <= fVar20)) &&
                               (fVar20 <= fStack_2dc)) {
                              fStack_2dc = fVar20;
                            }
                          }
                        }
                        lVar11 = *(longlong *)(param_1 + 8);
                      }
                      in_stack_fffffffffffffd08 = &uStack_2d4;
                      in_stack_fffffffffffffd00 = auStack_298;
                      auStack_298[0] = 0;
                      uStack_2d4 = 0;
                      FUN_1402f7d20(param_2,lVar11,&lStack_208,fStack_2dc,
                                    (ulonglong)piVar34 & 0xffffffff00000000,
                                    in_stack_fffffffffffffd00,in_stack_fffffffffffffd08);
                      uVar10 = uStack_2b0;
                      puVar13 = (undefined4 *)func_0x000144dc2c90(auStack_2b8[0],uStack_2b0);
                      uVar7 = auStack_2b8[0];
                      *puVar13 = 3;
                      lVar11 = func_0x000144dc2c90(auStack_2b8[0],uVar10);
                      *(byte *)(lVar11 + 0xd3) = *(byte *)(lVar11 + 0xd3) | 4;
                      lVar11 = func_0x000144dc2c90(uVar7,uVar10);
                      *(undefined1 *)(lVar11 + 0xd4) = 0;
                      uVar4 = (undefined2)auStack_298[0];
                      lVar11 = func_0x000144dc2c90(uVar7,uVar10);
                      *(undefined2 *)(lVar11 + 4) = uVar4;
                      sVar1 = (short)uStack_2d4;
                      lVar11 = func_0x000144dc2c90(uVar7,uVar10);
                      *(short *)(lVar11 + 6) = sVar1 + 1;
                      uStack_2d8 = uVar7;
                      lVar11 = func_0x000144dc2c90(uVar7,uVar10);
                      *(undefined4 *)(lVar11 + 0xc) = 0;
                      if (*(longlong *)(lVar11 + 0x10) != 0 &&
                          lVar11 + 0x18 != *(longlong *)(lVar11 + 0x10)) {
                        func_0x000144d9c130();
                        uStack_2d8 = auStack_2b8[0];
                        uVar10 = uStack_2b0;
                      }
                      uVar7 = uStack_2d8;
                      *(longlong *)(lVar11 + 0x10) = lVar11 + 0x18;
                      *(undefined4 *)(lVar11 + 8) = 10;
                      lVar11 = func_0x000144dc2c90(uStack_2d8,uVar10);
                      sVar1 = *(short *)(lVar11 + 4);
                      lVar12 = (longlong)sVar1;
                      lVar11 = func_0x000144dc2c90(uVar7,uVar10);
                      fVar20 = auVar26._0_4_;
                      if (sVar1 < *(short *)(lVar11 + 6)) {
                        do {
                          uVar7 = *(uint *)(lVar11 + 0xc);
                          if (uVar7 == *(uint *)(lVar11 + 8)) {
                            uStack_2d8 = uVar7 >> 1;
                            if (uVar7 < 2) {
                              uStack_2d8 = 1;
                            }
                            uStack_2d8 = uStack_2d8 + uVar7;
                            if (uStack_2d8 < 0xb) {
                              lVar15 = lVar11 + 0x18;
                            }
                            else {
                              lVar15 = func_0x000144d9c140(4,(ulonglong)uStack_2d8 << 4);
                              uVar7 = *(uint *)(lVar11 + 0xc);
                            }
                            if (uVar7 != 0) {
                              func_0x000145f40560(lVar15,*(undefined8 *)(lVar11 + 0x10),
                                                  (ulonglong)uVar7 << 4);
                            }
                            if (*(longlong *)(lVar11 + 0x10) != 0 &&
                                lVar11 + 0x18 != *(longlong *)(lVar11 + 0x10)) {
                              func_0x000144d9c130();
                            }
                            *(longlong *)(lVar11 + 0x10) = lVar15;
                            *(uint *)(lVar11 + 8) = uStack_2d8;
                            uVar7 = *(uint *)(lVar11 + 0xc);
                          }
                          else {
                            lVar15 = *(longlong *)(lVar11 + 0x10);
                          }
                          *(uint *)(lVar11 + 0xc) = uVar7 + 1;
                          puVar14 = (undefined8 *)((ulonglong)uVar7 * 0x10 + lVar15);
                          if (lVar15 != 0) {
                            uVar10 = vmovlps_avx(auVar27._0_16_);
                            *puVar14 = uVar10;
                            *(undefined4 *)(puVar14 + 1) = 0;
                            *(undefined2 *)((longlong)puVar14 + 0xc) = 0xffff;
                          }
                          lVar11 = lVar12 * 4;
                          lVar12 = lVar12 + 1;
                          *(undefined4 *)puVar14 = *(undefined4 *)((longlong)&lStack_208 + lVar11);
                          lVar11 = func_0x000144dc2c90(auStack_2b8[0],uStack_2b0);
                          fVar20 = auVar26._0_4_;
                        } while (lVar12 < *(short *)(lVar11 + 6));
                      }
                      if (fVar20 < _DAT_146159d50) {
                        lVar11 = func_0x000144eb3550(*(undefined4 *)(lVar9 + 0x9c));
                        if (lVar11 != 0) {
                          uVar7 = func_0x000144eb3520(lVar11 + 0x80,3);
                          uVar8 = func_0x000144eb3520(lVar11 + 0x80,4);
                          if (uVar7 < uVar8) {
                            uVar7 = uVar8;
                          }
                          if (uVar7 < 0x7531) goto LAB_14000d5b6;
                        }
                        *(byte *)(param_1 + 0x76) = *(byte *)(param_1 + 0x76) | 8;
                      }
LAB_14000d5b6:
                      if (lStack_2c8 != 0) {
                        uVar2 = *(undefined4 *)(lVar9 + 0x9c);
                        goto LAB_14000cf0b;
                      }
                    }
                  }
                }
                goto LAB_14000cfc8;
              }
              uVar2 = *(undefined4 *)(lVar9 + 0x9c);
              cVar5 = FUN_144dc4120(lStack_278,uVar2,1);
              if (cVar5 == '\0') {
                lVar11 = func_0x000144dc3fb0(*(undefined4 *)(lStack_2c8 + 0x3e08));
                uVar6 = (undefined4)((ulonglong)in_stack_fffffffffffffd00 >> 0x20);
                uVar35 = (undefined4)((ulonglong)in_stack_fffffffffffffd08 >> 0x20);
                if (lVar11 != lVar9) goto LAB_14000d01e;
              }
            }
            else {
LAB_14000cef3:
              if (lStack_2c8 == 0) goto LAB_14000cfc8;
              uVar2 = *(undefined4 *)(lVar9 + 0x9c);
            }
LAB_14000cf0b:
            FUN_14000b940(lStack_2d0,uVar2);
          }
        }
LAB_14000cfc8:
        lVar16 = lVar16 + 1;
      } while (lVar16 != lVar17);
      if ((auVar24._0_4_ != _DAT_145fc6f50) || (NAN(auVar24._0_4_) || NAN(_DAT_145fc6f50))) {
        FUN_1451c1630(param_2,&lStack_208,auVar24._0_8_);
        *(longlong *)(param_1 + 0xa0) = lStack_208;
        *(undefined8 *)(param_1 + 0xa8) = uStack_200;
      }
    }
  }
  return;
}

