// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401b17f0  size: 1143 bytes
// Name:    FUN_1401b17f0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14286ced0, FUN_141479bf0, FUN_1401bd1f0, FUN_1401b24f0, FUN_1401b1c70, FUN_1403c9020, FUN_1401b20c0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401b17f0(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [64];
  undefined8 in_stack_fffffffffffffe38;
  undefined4 uVar17;
  undefined8 *puStack_190;
  undefined1 auStack_188 [16];
  undefined4 uStack_16c;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [16];
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint uStack_110;
  undefined1 auStack_10c [12];
  undefined2 uStack_100;
  byte bStack_fe;
  unkbyte9 Stack_fd;
  undefined *puStack_f0;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 auStack_90 [12];
  undefined1 auStack_80 [16];
  undefined2 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  
  uVar17 = (undefined4)((ulonglong)in_stack_fffffffffffffe38 >> 0x20);
  uVar2 = *(uint *)(param_1 + 0x48);
  uVar10 = (ulonglong)uVar2 & 0x1ffff;
  if ((((uVar10 == 0x1ffff) ||
       (plVar4 = *(longlong **)((ulonglong)(uVar2 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
       plVar4 == (longlong *)0x0)) ||
      (uVar3 = *(uint *)(plVar4[5] + uVar10 * 4), (uVar3 >> 0x11 & 0x3ff) != uVar2 >> 0x16)) ||
     (((uVar3 & *(uint *)(plVar4 + 6)) != *(uint *)(plVar4 + 6) || (*plVar4 == 0)))) {
    func_0x000144fa06a0(param_1 + 0x20,auStack_188);
    bVar6 = true;
    lVar13 = 0;
  }
  else {
    auStack_188._0_12_ = ZEXT812(0);
    auStack_188._12_4_ = 0;
    bVar6 = false;
    lVar13 = *plVar4 + (ulonglong)(uint)((int)uVar10 * (int)plVar4[1]);
  }
  auStack_148._0_12_ = ZEXT812(0);
  auStack_148._12_4_ = 0;
  auVar16 = ZEXT1664(auStack_148);
  uStack_138 = 0;
  FUN_1401bd1f0(auStack_130,0,0);
  uStack_100 = 0;
  bStack_fe = 0;
  Stack_fd = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  auStack_10c = (undefined1  [12])0x0;
  auVar16 = ZEXT1664(auVar16._0_16_);
  uStack_e8 = func_0x000144fc2180(0,0);
  puStack_f0 = &UNK_1466fe170;
  uStack_e4 = 0;
  uStack_d8 = 0xffffffffffffffff;
  uStack_d0 = 0;
  FUN_141479bf0(&puStack_f0);
  puStack_f0 = &UNK_1466fe130;
  auStack_c8 = auVar16._0_16_;
  uStack_b8 = 0x10001ffff;
  uStack_a8 = 0;
  uStack_68 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a0 = auVar16._0_4_;
  uStack_9c = auVar16._4_4_;
  uStack_98 = auVar16._8_4_;
  auStack_90 = auVar16._4_12_;
  uStack_70 = 0x100;
  uStack_6c = *(undefined4 *)(param_1 + 0x15c);
  uStack_94 = uStack_a0;
  auStack_80 = auStack_c8;
  if (bVar6) {
    auVar5 = vcmpps_avx(auStack_c8,auStack_188,0);
    uVar9 = vmovmskps_avx(auVar5);
    if ((~(byte)uVar9 & 7) == 0) goto LAB_1401b1a8e;
  }
  iVar8 = *(int *)(param_1 + 0xdc);
  if (iVar8 == 0) {
    func_0x000140019da0(*(undefined4 *)(param_1 + 0xc0),&puStack_190);
    uVar12 = 0x184;
    if ((*(uint *)(param_1 + 0xa8) >> 10 & 1) == 0) {
      uVar12 = 0;
    }
    uStack_168 = auStack_188._0_8_;
    uStack_160 = auStack_188._8_8_;
    FUN_14286ced0(auStack_148,(ulonglong)puStack_190 & 0xffffffff,*(undefined4 *)(param_1 + 0xd8),0,
                  uVar12,lVar13,&uStack_168,3,0,0);
    uStack_118 = 0;
    uStack_114 = 0;
  }
  else {
    lVar11 = func_0x0001400fce20(iVar8);
    if (lVar11 == 0) goto LAB_1401b1a8e;
    uStack_138 = CONCAT44(iVar8,(undefined4)uStack_138);
    func_0x000140019da0(*(undefined4 *)(param_1 + 0xc0),&uStack_16c);
    uStack_158 = auStack_188._0_8_;
    uStack_150 = auStack_188._8_8_;
    FUN_1401b24f0(auStack_148,lVar13,&uStack_158,lVar11,CONCAT44(uVar17,uStack_16c),param_1 + 0x78);
  }
  if ((*(byte *)(param_1 + 0xa9) & 8) != 0) {
    bStack_fe = bStack_fe | 8;
    auStack_148._8_4_ = 0;
  }
  puStack_190 = (undefined8 *)0x0;
  _DAT_149e24f90 = _DAT_149e24f90 + 1;
  uStack_110 = (uint)_DAT_149e24f90;
  iVar8 = FUN_1401b20c0();
  puVar7 = puStack_190;
  *(int *)(param_1 + 0x154) = iVar8;
  if (-1 < iVar8) {
    if (puStack_190 != (undefined8 *)0x0) {
      if (*(int *)(param_1 + 0xdc) == 0) {
        *(byte *)((longlong)puStack_190 + 0x82U) = *(byte *)((longlong)puStack_190 + 0x82U) | 0x30;
      }
      else {
        FUN_1401b1c70(puStack_190,0);
        pbVar1 = (byte *)((longlong)puVar7 + 0x82);
        *pbVar1 = *pbVar1 | 0x30;
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x90);
        if (0 < (int)*(uint *)(param_1 + 0x90)) {
          uVar15 = 0;
          do {
            lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x88) + uVar15 * 8);
            if (lVar11 != 0) goto LAB_1401b1c08;
            uVar15 = uVar15 + 1;
          } while (uVar10 != uVar15);
        }
      }
    }
    goto LAB_1401b1a5b;
  }
  goto LAB_1401b1a71;
LAB_1401b1c08:
  do {
    plVar4 = *(longlong **)(lVar11 + 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,puVar7);
      uVar10 = (ulonglong)*(uint *)(param_1 + 0x90);
    }
    lVar11 = *(longlong *)(lVar11 + 0x10);
    if (lVar11 == 0) {
      iVar8 = (int)uVar15 + 1;
      if (iVar8 < (int)uVar10) {
        uVar14 = (longlong)iVar8;
        do {
          uVar15 = uVar14;
          uVar14 = uVar15 + 1;
          lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x88) + -8 + uVar14 * 8);
          if (lVar11 != 0) break;
        } while ((longlong)uVar14 < (longlong)(int)uVar10);
      }
    }
  } while (lVar11 != 0);
LAB_1401b1a5b:
  if ((!bVar6) && (*(char *)(lVar13 + 0x30) == '\x04')) {
    func_0x0001401b24e0(lVar13,1);
  }
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) | 0x40;
LAB_1401b1a71:
  auStack_80._4_4_ = 0;
  if (auStack_80._8_8_ != 0) {
    func_0x000144d9c130();
  }
LAB_1401b1a8e:
  auStack_80._0_8_ = auStack_80._4_8_ << 0x20;
  auStack_80._8_8_ = 0;
  uStack_9c = 0;
  if (CONCAT44(uStack_94,uStack_98) != 0) {
    func_0x000144d9c130();
  }
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  FUN_1403c9020(auStack_130);
  return;
}

