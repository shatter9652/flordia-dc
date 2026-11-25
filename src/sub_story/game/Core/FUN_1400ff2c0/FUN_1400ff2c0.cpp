// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400ff2c0  size: 568 bytes
// Name:    FUN_1400ff2c0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14006e840
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400ff2c0(undefined4 *param_1,longlong param_2,undefined1 (*param_3) [16],longlong *param_4
                  )

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  byte abStack_c0 [4];
  int iStack_bc;
  undefined1 (*pauStack_b8) [16];
  undefined4 *puStack_b0;
  undefined1 auStack_a8 [20];
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 auStack_88 [72];
  
  uVar6 = 0;
  puStack_b0 = param_1;
  if ((param_4 != (longlong *)0x0) &&
     (pauStack_b8 = param_3, cVar3 = (**(code **)(*param_4 + 0x288))(param_4), uVar6 = 0,
     cVar3 != '\0')) {
    lVar4 = func_0x0001450da490(*(undefined4 *)((longlong)param_4 + 0x9c));
    uVar7 = *(ushort *)(param_2 + 0x20);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
    if (uVar7 != 0) {
      auVar11 = ZEXT464(_DAT_145fc6f50);
      if (lVar4 == 0) {
        uVar8 = 0;
        auVar12 = ZEXT864(0);
        do {
          lVar4 = *(longlong *)(param_2 + 0x18);
          stack0xffffffffffffff5c = ZEXT828(SUB128(ZEXT812(0),4));
          auStack_a8._0_4_ = 0x3f800000;
          uStack_94 = 0x3f800000;
          uStack_90 = 0;
          auStack_88._0_12_ = ZEXT412(0x3f800000) << 0x40;
          auStack_88._0_32_ = ZEXT1232(auStack_88._0_12_);
          auVar11 = ZEXT1664(auVar11._0_16_);
          auVar12 = ZEXT1664(auVar12._0_16_);
          uVar5 = (**(code **)(*param_4 + 0xa8))(param_4);
          FUN_14006e840(uVar5,abStack_c0,*(undefined4 *)(lVar4 + uVar8 * 8));
          if ((iStack_bc != -1 & abStack_c0[0]) == 1) {
            (**(code **)(*param_4 + 0xe8))(param_4,iStack_bc,auStack_a8);
            auVar2 = vsubps_avx(*pauStack_b8,auStack_88._16_16_);
            auVar10._0_4_ = auVar2._0_4_ * auVar2._0_4_;
            auVar10._4_4_ = auVar2._4_4_ * auVar2._4_4_;
            auVar10._8_4_ = auVar2._8_4_ * auVar2._8_4_;
            auVar10._12_4_ = auVar2._12_4_ * auVar2._12_4_;
            auVar2 = vblendps_avx(auVar10,auVar12._0_16_,8);
            auVar2 = vhaddps_avx(auVar2,auVar2);
            auVar2 = vhaddps_avx(auVar2,auVar2);
            if (auVar2._0_4_ < auVar11._0_4_) {
              uVar6 = *(undefined4 *)(lVar4 + 4 + uVar8 * 8);
              auVar11 = ZEXT1664(auVar2);
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(param_2 + 0x20));
      }
      else {
        uVar8 = 0;
        auVar12 = ZEXT864(0);
        do {
          lVar1 = *(longlong *)(param_2 + 0x18);
          cVar3 = func_0x0001440b92d0(lVar4,*(undefined4 *)(lVar1 + uVar8 * 8));
          if (cVar3 == '\0') {
            stack0xffffffffffffff5c = ZEXT828(SUB128(ZEXT812(0),4));
            auStack_a8._0_4_ = 0x3f800000;
            uStack_94 = 0x3f800000;
            uStack_90 = 0;
            auStack_88._0_12_ = ZEXT412(0x3f800000) << 0x40;
            auStack_88._0_32_ = ZEXT1232(auStack_88._0_12_);
            auVar11 = ZEXT1664(auVar11._0_16_);
            auVar12 = ZEXT1664(auVar12._0_16_);
            uVar5 = (**(code **)(*param_4 + 0xa8))(param_4);
            FUN_14006e840(uVar5,abStack_c0,*(undefined4 *)(lVar1 + uVar8 * 8));
            if ((iStack_bc != -1 & abStack_c0[0]) == 1) {
              (**(code **)(*param_4 + 0xe8))(param_4,iStack_bc,auStack_a8);
              auVar2 = vsubps_avx(*pauStack_b8,auStack_88._16_16_);
              auVar9._0_4_ = auVar2._0_4_ * auVar2._0_4_;
              auVar9._4_4_ = auVar2._4_4_ * auVar2._4_4_;
              auVar9._8_4_ = auVar2._8_4_ * auVar2._8_4_;
              auVar9._12_4_ = auVar2._12_4_ * auVar2._12_4_;
              auVar2 = vblendps_avx(auVar9,auVar12._0_16_,8);
              auVar2 = vhaddps_avx(auVar2,auVar2);
              auVar2 = vhaddps_avx(auVar2,auVar2);
              if (auVar2._0_4_ < auVar11._0_4_) {
                uVar6 = *(undefined4 *)(lVar1 + 4 + uVar8 * 8);
                auVar11 = ZEXT1664(auVar2);
              }
            }
            uVar7 = *(ushort *)(param_2 + 0x20);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar7);
      }
    }
  }
  *puStack_b0 = uVar6;
  return;
}

