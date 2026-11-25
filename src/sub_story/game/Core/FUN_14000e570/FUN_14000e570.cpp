// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000e570  size: 1354 bytes
// Name:    FUN_14000e570
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14513baf0, FUN_144e24640, FUN_14000a9c0, FUN_14000be40, FUN_144fe3470, FUN_14522be80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000e570(longlong param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  byte bVar13;
  bool bVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auVar24 [64];
  undefined8 in_stack_fffffffffffffec8;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 auStack_88 [2];
  undefined1 aauStack_78 [3] [16];
  
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x88);
  if (uVar1 == 0x1ffff) {
    return;
  }
  uVar10 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
  if ((~uVar10 & *(uint *)(_DAT_14abbe8c8 + 6)) != 0) {
    return;
  }
  uVar10 = uVar10 & 0x7fe0000;
  if (uVar10 != (uVar1 & 0xfffe0000)) {
    return;
  }
  if (*_DAT_14abbe8c8 == 0) {
    return;
  }
  plVar12 = (longlong *)(*_DAT_14abbe8c8 + (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abbe8c8[1]));
  uVar2 = *(undefined4 *)((longlong)plVar12 + 0x9c);
  lVar6 = FUN_144e24640(uVar2,uVar1 & 0xfffe0000,uVar10,0);
  if (lVar6 == 0) {
    return;
  }
  bVar13 = *(byte *)(lVar6 + 0xec);
  if ((bVar13 & 1) == 0) {
    return;
  }
  uVar1 = *(uint *)(lVar6 + 0xe4);
  if (uVar1 == 2) {
    lVar8 = FUN_14522be80(uVar2);
    if ((lVar8 != 0) && (1 < *(int *)(lVar8 + 0x15f0))) {
      fVar21 = 0.0;
      iVar11 = *(int *)(lVar8 + 0x15f0) + -2;
      do {
        fVar15 = (float)FUN_14000be40(lVar8);
        if ((fVar15 != fVar21) || (NAN(fVar15) || NAN(fVar21))) {
          puVar9 = (undefined8 *)(lVar8 + 0x20 + (ulonglong)(iVar11 + 1) * 0xa0);
          uVar22 = *puVar9;
          uVar23 = puVar9[1];
          fStack_108 = (float)uVar22;
          fStack_104 = (float)((ulonglong)uVar22 >> 0x20);
          fStack_100 = (float)uVar23;
          fStack_fc = (float)((ulonglong)uVar23 >> 0x20);
          goto LAB_14000e794;
        }
        bVar14 = 0 < iVar11;
        iVar11 = iVar11 + -1;
      } while (bVar14);
    }
    aauStack_78[0] = *(undefined1 (*) [16])(lVar6 + 0xc0);
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    auVar19 = vcmpps_avx(aauStack_78[0],auVar19,0);
    uVar5 = vmovmskps_avx(auVar19);
    if ((~(byte)uVar5 & 7) == 0) {
      return;
    }
    FUN_14513baf0(param_2,aauStack_78,_DAT_14615bdb0,&fStack_108,0,0xffffffff,0xffffffff,1,0);
    goto LAB_14000e794;
  }
  if ((uVar1 & 0xfffffffe) == 4) {
    uVar10 = *(uint *)(param_1 + 0x74);
    lStack_f0 = lVar6;
    if (((uVar10 >> 0xd & 1) != 0) &&
       ((plVar7 = (longlong *)func_0x000144dd0bd0(*(undefined4 *)(param_1 + 0x38)),
        plVar12 != plVar7 || ((bVar13 & 4) != 0)))) {
      FUN_14000a9c0(param_1);
      uVar10 = *(uint *)(param_1 + 0x74);
    }
    if ((uVar10 >> 0xd & 1) != 0) {
      return;
    }
    lVar6 = func_0x000144eb3640(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
    if ((lVar6 == 0) ||
       (plVar7 = (longlong *)func_0x000140383930(*(undefined4 *)(lVar6 + 0x3df4)), plVar7 != plVar12
       )) {
LAB_14000e864:
      if ((*(byte *)(lStack_f0 + 0xec) & 4) != 0) {
        return;
      }
      if ((*(int *)(param_1 + 0xb4) == 5) || (*(int *)(param_1 + 0xb4) == 2)) {
        bVar13 = *(byte *)(lStack_f0 + 0xec) & 8;
        if (bVar13 == 0) {
          lVar6 = FUN_144e24640(*(undefined4 *)((longlong)plVar12 + 0x9c));
          if (((lVar6 == 0) || ((*(byte *)(lVar6 + 0x646) & 2) == 0)) ||
             (*(char *)(lVar6 + 400) != '\x01')) goto LAB_14000e94c;
          bVar13 = 0;
          bVar14 = false;
          if (*(float *)(lVar6 + 0x188) < _DAT_145fc6f00) goto LAB_14000ea6f;
        }
        else {
          bVar13 = bVar13 >> 3;
        }
      }
      else {
LAB_14000e94c:
        bVar13 = 0;
      }
      bVar4 = *param_3 != 3 | bVar13;
      if (bVar4 == 0) {
        if (uVar1 == 5) {
          puVar9 = auStack_88;
          (**(code **)(*plVar12 + 0x450))(plVar12,puVar9,0);
          uVar2 = _DAT_14615bdb0;
        }
        else {
          puVar9 = &uStack_98;
          uStack_98 = *(undefined8 *)(lStack_f0 + 0xb0);
          uStack_90 = *(undefined8 *)(lStack_f0 + 0xb8);
          uVar2 = _DAT_145fc6f04;
        }
        uVar5 = 0;
        FUN_14513baf0(param_2,puVar9,uVar2,&fStack_108,0,0xffffffff,0xffffffff,1,0);
      }
      bVar14 = (bool)(bVar4 ^ 1);
      if (bVar13 == 0) goto LAB_14000e91f;
    }
    else {
      bVar14 = false;
      FUN_144fe3470(&fStack_108,plVar12,0);
      auVar20._0_12_ = ZEXT812(0);
      auVar20._12_4_ = 0;
      auVar18._0_4_ = fStack_108 * fStack_108;
      auVar18._4_4_ = fStack_104 * fStack_104;
      auVar18._8_4_ = fStack_100 * fStack_100;
      auVar18._12_4_ = fStack_fc * fStack_fc;
      auVar19 = vblendps_avx(auVar18,auVar20,8);
      auVar19 = vhaddps_avx(auVar19,auVar19);
      auVar19 = vhaddps_avx(auVar19,auVar19);
      if (_DAT_146159ca4 <= auVar19._0_4_) goto LAB_14000e864;
    }
LAB_14000ea6f:
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 0x20;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((longlong)plVar12 + 0x9c);
    lVar6 = func_0x000144dc4490(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
    if (lVar6 != 0) {
      func_0x000144dc42f0(lVar6 + 0x20,plVar12,9,0,CONCAT44(uVar5,1));
    }
  }
  else {
    if (uVar1 != 3) {
      return;
    }
    bVar14 = (bVar13 & 4) == 0;
    if (bVar14) {
      (**(code **)(*plVar12 + 0x450))(plVar12,auStack_a8,0);
      FUN_14513baf0(param_2,auStack_a8,_DAT_14615bdb0,&fStack_108,0,0xffffffff,0xffffffff,1,0);
    }
    plVar7 = (longlong *)func_0x000144dd0bd0(*(undefined4 *)(param_1 + 0x38));
    if ((plVar12 != plVar7) || ((*(byte *)(lVar6 + 0xec) & 4) != 0)) {
      FUN_14000a9c0(param_1);
      if ((bVar13 & 4) != 0) {
        return;
      }
      goto LAB_14000e794;
    }
  }
LAB_14000e91f:
  if (bVar14 == false) {
    return;
  }
LAB_14000e794:
  if (*param_3 == 4) {
    uVar22 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70);
    uVar23 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78);
    uStack_d8 = uVar22;
    uStack_d0 = uVar23;
    func_0x000144dc3790(&uStack_d8,auStack_b8);
    auVar19 = vsubps_avx(*(undefined1 (*) [16])(param_1 + 0x80),auStack_b8);
    auVar16._0_4_ = auVar19._0_4_ * auVar19._0_4_;
    auVar16._4_4_ = auVar19._4_4_ * auVar19._4_4_;
    auVar16._8_4_ = auVar19._8_4_ * auVar19._8_4_;
    auVar16._12_4_ = auVar19._12_4_ * auVar19._12_4_;
    auVar19 = vhaddps_avx(auVar16,auVar16);
    auVar24 = ZEXT1664(auVar19);
    uStack_e8 = uVar22;
    uStack_e0 = uVar23;
    func_0x000144dc3790(&uStack_e8,auStack_c8);
    auVar3._4_4_ = fStack_104;
    auVar3._0_4_ = fStack_108;
    auVar3._8_4_ = fStack_100;
    auVar3._12_4_ = fStack_fc;
    auVar19 = vsubps_avx(auVar3,auStack_c8);
    auVar17._0_4_ = auVar19._0_4_ * auVar19._0_4_;
    auVar17._4_4_ = auVar19._4_4_ * auVar19._4_4_;
    auVar17._8_4_ = auVar19._8_4_ * auVar19._8_4_;
    auVar17._12_4_ = auVar19._12_4_ * auVar19._12_4_;
    auVar19 = vhaddps_avx(auVar17,auVar17);
    if (auVar24._0_4_ <= auVar19._0_4_) {
      return;
    }
  }
  *param_3 = 5;
  *(ulonglong *)(param_1 + 0x80) = CONCAT44(fStack_104,fStack_108);
  *(ulonglong *)(param_1 + 0x88) = CONCAT44(fStack_fc,fStack_100);
  return;
}

