// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401adba0  size: 491 bytes
// Name:    FUN_1401adba0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401ae630, FUN_1401addf0, FUN_1401aedd0, FUN_1401013c0, FUN_1401add90, FUN_144f9a2a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401adba0(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 aauStack_58 [2] [16];
  
  cVar6 = FUN_144f9a2a0(*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xdc));
  if ((cVar6 != '\0') && (*(int *)(param_2 + 0x160) == 1)) {
    FUN_1401aedd0(param_2,param_1);
    uVar11 = FUN_1401addf0(*(undefined4 *)(param_2 + 0x154));
    if (param_1[2] == 0) {
      bVar7 = 1;
    }
    else {
      bVar7 = FUN_1401add90(*(undefined4 *)(param_1[2] + 0x10),param_2 + 0x20);
      bVar7 = bVar7 ^ 1;
    }
    if (*(int *)(param_2 + 0xfc) != 0) {
      uVar9 = 0;
      do {
        uVar1 = *(uint *)(*(longlong *)(param_2 + 0x100) + uVar9 * 4);
        if (uVar1 == 0x1ffff) {
LAB_1401adcb6:
          lVar8 = 0;
        }
        else {
          uVar2 = *(uint *)(_DAT_14a9b3f48[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
          if (0x1ffff < (uVar1 ^ uVar2)) goto LAB_1401adcb6;
          lVar8 = 0;
          if ((uVar2 & *(uint *)(_DAT_14a9b3f48 + 6)) == *(uint *)(_DAT_14a9b3f48 + 6)) {
            lVar8 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14a9b3f48[1]) + *_DAT_14a9b3f48;
          }
        }
        if ((((*(uint *)(lVar8 + 0x88) & 8) == 0) && ((*(uint *)(lVar8 + 0x88) >> 8 & 1) != 0)) &&
           (*(int *)(lVar8 + 0x78) == 1)) {
          if ((*(byte *)(lVar8 + 0xd3) & 2) == 0) {
            func_0x000144fa06a0(lVar8 + 0x30,auStack_98);
          }
          else {
            FUN_1401013c0(auStack_98,lVar8 + 0x30);
          }
          uVar4 = *(undefined8 *)(*param_1 + 0x70);
          uVar5 = *(undefined8 *)(*param_1 + 0x78);
          if ((*(byte *)(lVar8 + 0xd3) & 4) == 0) {
            uStack_88 = uVar4;
            uStack_80 = uVar5;
            func_0x000144dc3790(&uStack_88,auStack_68);
            auVar14._0_12_ = ZEXT812(0);
            auVar14._12_4_ = 0;
            auVar3 = vsubps_avx(auStack_98,auStack_68);
            auVar12._0_4_ = auVar3._0_4_ * auVar3._0_4_;
            auVar12._4_4_ = auVar3._4_4_ * auVar3._4_4_;
            auVar12._8_4_ = auVar3._8_4_ * auVar3._8_4_;
            auVar12._12_4_ = auVar3._12_4_ * auVar3._12_4_;
            auVar3 = vblendps_avx(auVar12,auVar14,8);
            auVar3 = vhaddps_avx(auVar3,auVar3);
            auVar3 = vhaddps_avx(auVar3,auVar3);
            fVar10 = auVar3._0_4_;
          }
          else {
            uStack_78 = uVar4;
            uStack_70 = uVar5;
            func_0x000144dc3790(&uStack_78,aauStack_58);
            auVar3 = vsubps_avx(auStack_98,aauStack_58[0]);
            auVar13._0_4_ = auVar3._0_4_ * auVar3._0_4_;
            auVar13._4_4_ = auVar3._4_4_ * auVar3._4_4_;
            auVar13._8_4_ = auVar3._8_4_ * auVar3._8_4_;
            auVar13._12_4_ = auVar3._12_4_ * auVar3._12_4_;
            auVar3 = vhaddps_avx(auVar13,auVar13);
            fVar10 = auVar3._0_4_;
          }
          if ((bVar7 & (float)uVar11 < fVar10) == 0) {
            func_0x0001401ae770(lVar8,0x22e);
          }
          else {
            FUN_1401ae630(lVar8,0x22d);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(param_2 + 0xfc));
    }
  }
  return;
}

