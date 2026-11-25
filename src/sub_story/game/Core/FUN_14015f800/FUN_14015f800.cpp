// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14015f800  size: 1265 bytes
// Name:    FUN_14015f800
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1409ea7e0, FUN_144de6230, FUN_143bf29c0, FUN_1416fe050
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14015f800(longlong param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  longlong lStack_90;
  longlong lStack_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  
  uVar12 = *(ulonglong *)(param_1 + 8);
  lVar11 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x24);
  if ((ulonglong)uVar2 != 0) {
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar11 + lVar8);
      if (lVar5 != 0) {
        FUN_143bf29c0(lVar5);
        func_0x000144d9c130(lVar5,0xc0);
      }
      lVar8 = lVar8 + 8;
    } while ((ulonglong)uVar2 << 3 != lVar8);
    lVar11 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (lVar11 != 0) {
    func_0x000144d9c130(lVar11);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  lVar11 = *(longlong *)(param_1 + 0x38);
  uVar2 = *(uint *)(param_1 + 0x34);
  if ((ulonglong)uVar2 != 0) {
    lVar8 = 0;
    do {
      func_0x000141276940(*(undefined4 *)(lVar11 + lVar8));
      lVar8 = lVar8 + 4;
    } while ((ulonglong)uVar2 << 2 != lVar8);
    lVar11 = *(longlong *)(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (lVar11 != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar11 = *(longlong *)(param_1 + 0x48);
  uVar2 = *(uint *)(param_1 + 0x44);
  if ((ulonglong)uVar2 != 0) {
    lVar8 = 0;
    do {
      func_0x0001412bdf90(*(undefined4 *)(lVar11 + lVar8));
      lVar8 = lVar8 + 4;
    } while ((ulonglong)uVar2 << 2 != lVar8);
    lVar11 = *(longlong *)(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (lVar11 != 0) {
    func_0x000144d9c130(lVar11);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar2 = *(uint *)(param_1 + 0xc4);
  if ((ulonglong)uVar2 != 0) {
    fVar26 = 0.0;
    fVar27 = 0.0;
    lStack_90 = *(longlong *)(param_1 + 200);
    uVar12 = uVar12 & 0xfffffffffffffff0;
    lVar11 = 0;
    auVar28 = ZEXT1264(ZEXT812(0));
    fVar24 = _DAT_146159c90;
    fVar25 = _UNK_146159c94;
    do {
      puVar3 = *(undefined8 **)(lStack_90 + lVar11);
      plVar4 = (longlong *)puVar3[0x1f];
      if (plVar4 == (longlong *)0x0) {
LAB_14015fabe:
        (**(code **)*puVar3)(puVar3,1);
      }
      else {
        uVar9 = *(undefined4 *)((longlong)plVar4 + 0x9c);
        cVar6 = func_0x00014509c490(uVar9);
        if (cVar6 == '\0') {
          if ((char)plVar4[6] == '\x02') {
            if (param_2 == '\0') {
              lStack_78 = plVar4[0xe];
              lStack_70 = plVar4[0xf];
              func_0x000144dc3790(&lStack_78,&fStack_a8);
              lVar8 = *(longlong *)(uVar12 + 0x20);
              if (lVar8 != 0) {
                auVar21 = *(undefined1 (*) [16])(uVar12 + 0x70);
                auVar23._0_12_ = ZEXT812(0);
                auVar23._12_4_ = 0;
                auVar19 = vpunpckhwd_avx(auVar21,auVar21);
                auVar19 = vpsrad_avx(auVar19,0x10);
                auVar19 = vcvtdq2ps_avx(auVar19);
                auVar19 = vshufpd_avx(auVar19,auVar19,3);
                fVar13 = (-(auVar19._0_4_ * _DAT_146159c90) - auVar21._0_4_) + fStack_a8;
                fVar16 = (-(auVar19._4_4_ * _UNK_146159c94) - auVar21._4_4_) + fStack_a4;
                fVar17 = (-(auVar19._8_4_ * _UNK_146159c98) - auVar21._8_4_) + fStack_a0;
                fVar18 = (-(auVar19._12_4_ * _UNK_146159c9c) - auVar21._12_4_) + fStack_9c;
                auVar21._0_4_ = fVar13 * *(float *)(uVar12 + 0x40);
                auVar21._4_4_ = fVar16 * *(float *)(uVar12 + 0x44);
                auVar21._8_4_ = fVar17 * *(float *)(uVar12 + 0x48);
                auVar21._12_4_ = fVar18 * *(float *)(uVar12 + 0x4c);
                auVar19._0_4_ = fVar13 * *(float *)(uVar12 + 0x50);
                auVar19._4_4_ = fVar16 * *(float *)(uVar12 + 0x54);
                auVar19._8_4_ = fVar17 * *(float *)(uVar12 + 0x58);
                auVar19._12_4_ = fVar18 * *(float *)(uVar12 + 0x5c);
                auVar15._0_4_ = fVar13 * *(float *)(uVar12 + 0x60);
                auVar15._4_4_ = fVar16 * *(float *)(uVar12 + 100);
                auVar15._8_4_ = fVar17 * *(float *)(uVar12 + 0x68);
                auVar15._12_4_ = fVar18 * *(float *)(uVar12 + 0x6c);
                auVar21 = vblendps_avx(auVar21,auVar23,8);
                auVar19 = vblendps_avx(auVar19,auVar23,8);
                auVar15 = vblendps_avx(auVar15,auVar23,8);
                auVar15 = vhaddps_avx(auVar15,auVar19);
                auVar21 = vhaddps_avx(auVar21,auVar19);
                auVar19 = vhaddps_avx(auVar21,auVar15);
                auVar21 = vcmpps_avx(auVar19,*(undefined1 (*) [16])(lVar8 + 0x40),1);
                uVar10 = vmovmskps_avx(auVar21);
                if ((~(byte)uVar10 & 7) == 0) {
                  auVar21 = vcmpps_avx(*(undefined1 (*) [16])(lVar8 + 0x30),auVar19,1);
                  uVar10 = vmovmskps_avx(auVar21);
                  if ((~(byte)uVar10 & 7) == 0) goto LAB_14015fc1a;
                }
                lVar8 = func_0x0001408a1820(uVar9);
                if (lVar8 != 0) {
                  FUN_1416fe050(lVar8);
                  goto LAB_14015fabe;
                }
              }
            }
LAB_14015fc1a:
            FUN_1409ea7e0(plVar4,0);
          }
          else {
            uVar7 = FUN_144de6230(uVar9);
            if (uVar7 == 0) {
              uVar1 = *(ushort *)(param_1 + 0x298);
              if ((uVar1 & 0x40) == 0) {
LAB_14015fa03:
                if ((uVar1 >> 10 & 1) == 0) {
                  lStack_88 = plVar4[0xe];
                  lStack_80 = plVar4[0xf];
                  func_0x000144dc3790(&lStack_88,&fStack_a8);
                  lVar8 = *(longlong *)(uVar12 + 0x20);
                  if (lVar8 != 0) {
                    auVar21 = *(undefined1 (*) [16])(uVar12 + 0x70);
                    auVar19 = vpunpckhwd_avx(auVar21,auVar21);
                    auVar19 = vpsrad_avx(auVar19,0x10);
                    auVar19 = vcvtdq2ps_avx(auVar19);
                    auVar19 = vshufpd_avx(auVar19,auVar19,3);
                    fVar13 = (-(auVar19._0_4_ * fVar24) - auVar21._0_4_) + fStack_a8;
                    fVar16 = (-(auVar19._4_4_ * fVar25) - auVar21._4_4_) + fStack_a4;
                    fVar17 = (-(auVar19._8_4_ * fVar26) - auVar21._8_4_) + fStack_a0;
                    fVar18 = (-(auVar19._12_4_ * fVar27) - auVar21._12_4_) + fStack_9c;
                    auVar20._0_4_ = fVar13 * *(float *)(uVar12 + 0x40);
                    auVar20._4_4_ = fVar16 * *(float *)(uVar12 + 0x44);
                    auVar20._8_4_ = fVar17 * *(float *)(uVar12 + 0x48);
                    auVar20._12_4_ = fVar18 * *(float *)(uVar12 + 0x4c);
                    auVar22._0_4_ = fVar13 * *(float *)(uVar12 + 0x50);
                    auVar22._4_4_ = fVar16 * *(float *)(uVar12 + 0x54);
                    auVar22._8_4_ = fVar17 * *(float *)(uVar12 + 0x58);
                    auVar22._12_4_ = fVar18 * *(float *)(uVar12 + 0x5c);
                    auVar14._0_4_ = fVar13 * *(float *)(uVar12 + 0x60);
                    auVar14._4_4_ = fVar16 * *(float *)(uVar12 + 100);
                    auVar14._8_4_ = fVar17 * *(float *)(uVar12 + 0x68);
                    auVar14._12_4_ = fVar18 * *(float *)(uVar12 + 0x6c);
                    auVar15 = auVar28._0_16_;
                    auVar21 = vblendps_avx(auVar20,auVar15,8);
                    auVar19 = vblendps_avx(auVar22,auVar15,8);
                    auVar15 = vblendps_avx(auVar14,auVar15,8);
                    auVar15 = vhaddps_avx(auVar15,auVar19);
                    auVar21 = vhaddps_avx(auVar21,auVar19);
                    auVar19 = vhaddps_avx(auVar21,auVar15);
                    auVar21 = vcmpps_avx(auVar19,*(undefined1 (*) [16])(lVar8 + 0x40),1);
                    uVar9 = vmovmskps_avx(auVar21);
                    if ((~(byte)uVar9 & 7) == 0) {
                      auVar21 = vcmpps_avx(*(undefined1 (*) [16])(lVar8 + 0x30),auVar19,1);
                      uVar9 = vmovmskps_avx(auVar21);
                      if ((~(byte)uVar9 & 7) == 0) goto LAB_14015fab2;
                    }
                  }
                }
                goto LAB_14015fabe;
              }
            }
            else if (uVar7 != uVar12) {
              uVar1 = *(ushort *)(param_1 + 0x298);
              goto LAB_14015fa03;
            }
LAB_14015fab2:
            (**(code **)(*plVar4 + 0x278))(plVar4);
          }
          goto LAB_14015fabe;
        }
      }
      lVar11 = lVar11 + 8;
    } while ((ulonglong)uVar2 << 3 != lVar11);
  }
  lVar11 = *(longlong *)(param_1 + 0xe0);
  if (lVar11 != 0) {
    do {
      if (*(longlong *)(param_1 + 0xd0) != 0) {
        func_0x000143bf2a10((longlong *)(param_1 + 0xd0));
        lVar11 = *(longlong *)(param_1 + 0xe0);
      }
    } while (lVar11 != 0);
  }
  lVar11 = *(longlong *)(param_1 + 0xf8);
  if (lVar11 != 0) {
    do {
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        func_0x000143bf2ac0((longlong *)(param_1 + 0xe8));
        lVar11 = *(longlong *)(param_1 + 0xf8);
      }
    } while (lVar11 != 0);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(byte *)(param_1 + 0x2c0) = *(byte *)(param_1 + 0x2c0) | 0x10;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    func_0x000144d9c130();
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  func_0x00014015fd00(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x140) = 0;
  *(byte *)(param_1 + 0x2c1) = *(byte *)(param_1 + 0x2c1) & 0xef;
  return;
}

