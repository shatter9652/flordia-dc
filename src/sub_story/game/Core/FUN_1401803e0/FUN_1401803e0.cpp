// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401803e0  size: 998 bytes
// Name:    FUN_1401803e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144f3d9c0, FUN_1451733d0, FUN_1455a5cb0, FUN_1455a5e60
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401803e0(longlong param_1,longlong param_2,longlong param_3,undefined1 (*param_4) [32],
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,char param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined4 *puVar18;
  undefined4 uVar19;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 auStack_118 [16];
  undefined1 auStack_108 [200];
  
  uVar8 = _UNK_146183cf8;
  uVar2 = _DAT_146183cf0;
  uVar9 = (uint)*(undefined8 *)(param_1 + 0x180);
  if ((uVar9 >> 0x1c & 1) == 0) {
    return;
  }
  lVar6 = *(longlong *)
           (*(longlong *)(param_1 + 0x188) + (ulonglong)(uint)POPCOUNT(uVar9 & 0xfffffff) * 8);
  if (lVar6 == 0) {
    return;
  }
  auVar14._16_16_ = _DAT_145fc6ee0;
  auVar14._0_16_ = _DAT_145fc6ee0;
  uVar3 = param_4[3][0x1a];
  auVar17._0_12_ = ZEXT812(0);
  auVar17._12_4_ = 0;
  auVar15 = *(undefined1 (*) [16])param_4[2];
  uVar4 = param_4[3][0x1b];
  *(undefined1 (*) [16])param_4[4] = auVar17;
  auVar13 = vcvtps2ph_f16c(auVar14,3);
  uVar1 = vmovlps_avx(auVar13);
  *(undefined8 *)(param_4[4] + 0x10) = uVar1;
  uVar1 = _DAT_14615a918;
  *(undefined8 *)(param_4[4] + 0x18) = _DAT_14615a918;
  *(undefined8 *)param_4[5] = uVar1;
  *(undefined4 *)(param_4[5] + 8) = 0xffffffff;
  *(undefined2 *)(param_4[5] + 0xc) = 0x3c00;
  *param_4 = ZEXT832(0) << 0x20;
  *(undefined1 (*) [32])(*param_4 + 0x10) = ZEXT832(0) << 0x20;
  *(undefined8 *)(param_4[1] + 0x10) = uVar2;
  *(undefined8 *)(param_4[1] + 0x18) = uVar8;
  *(undefined1 (*) [16])param_4[2] = auVar17;
  auVar16 = ZEXT1664(auVar15);
  func_0x0001455d89b0(param_4);
  auStack_118._4_4_ = _DAT_145fc6ed8;
  auStack_118._0_4_ = _DAT_145fc6ed8;
  auStack_118._8_4_ = _DAT_145fc6ed8;
  auStack_118._12_4_ = _DAT_145fc6ed8;
  auVar15 = vcvtps2ph_f16c(ZEXT1632(auStack_118),3);
  *(longlong *)(param_4[2] + 0x18) = auVar15._0_8_;
  *(longlong *)param_4[3] = auVar15._0_8_;
  auVar15 = vcvtps2ph_f16c(ZEXT832(0) << 0x20,3);
  uVar2 = vmovlps_avx(auVar15);
  *(undefined8 *)(param_4[3] + 8) = uVar2;
  *(undefined8 *)(param_4[3] + 0x10) = 0xffff000000000000;
  *(undefined4 *)(param_4[3] + 0x18) = 0xffff;
  param_4[3][0x1c] = 0;
  if (param_8 != '\0') {
    param_4[4][10] = param_4[4][10] | 0x80;
  }
  puVar18 = &uStack_128;
  auVar16 = ZEXT1664(auVar16._0_16_);
  uStack_128 = param_7;
  uStack_124 = param_7;
  uStack_120 = param_7;
  uStack_11c = param_7;
  FUN_144f3d9c0(param_1,auStack_108,param_2,param_3,param_6,puVar18,auStack_118);
  uVar19 = (undefined4)((ulonglong)puVar18 >> 0x20);
  *(undefined2 *)(param_4[4] + 8) = *(undefined2 *)(param_2 + 0x3b8);
  *(undefined8 *)param_4[4] = *(undefined8 *)(param_2 + 0x3b0);
  *(undefined4 *)(param_4[4] + 0xc) = 0xffffffff;
  func_0x000144eb9160(param_4);
  auVar15 = *(undefined1 (*) [16])(param_3 + 0x230);
  auVar13 = vblendps_avx(auVar15,*(undefined1 (*) [16])(*param_4 + 0x10),8);
  *(undefined1 (*) [16])(*param_4 + 0x10) = auVar13;
  auVar15 = vblendps_avx(auVar15,*(undefined1 (*) [16])*param_4,8);
  *(undefined1 (*) [16])*param_4 = auVar15;
  *(undefined4 *)(*param_4 + 0x1c) = 0;
  uVar12 = FUN_1455a5cb0(param_3,param_2);
  *(undefined4 *)param_4[5] = uVar12;
  uVar9 = (uint)*(undefined8 *)(param_1 + 0x180);
  if (((char)*(undefined8 *)(param_1 + 0x180) < '\0') &&
     (plVar7 = *(longlong **)
                (*(longlong *)(param_1 + 0x188) + (ulonglong)(uint)POPCOUNT(uVar9 & 0x7f) * 8),
     plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x58))(plVar7,auStack_108,param_4);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x180);
  }
  if (((uVar9 >> 0x13 & 1) != 0) &&
     (plVar7 = *(longlong **)
                (*(longlong *)(param_1 + 0x188) + (ulonglong)(uint)POPCOUNT(uVar9 & 0x7ffff) * 8),
     plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x58))(plVar7,auStack_108,param_4);
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x180);
  }
  auVar15 = auVar16._0_16_;
  if (((uVar9 >> 0x14 & 1) != 0) &&
     (plVar7 = *(longlong **)
                (*(longlong *)(param_1 + 0x188) + (ulonglong)(uint)POPCOUNT(uVar9 & 0xfffff) * 8),
     plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x58))(plVar7,auStack_108,param_4);
    auVar15 = auVar16._0_16_;
    uVar9 = (uint)*(undefined8 *)(param_1 + 0x180);
  }
  if (((uVar9 >> 0x11 & 1) == 0) ||
     (plVar7 = *(longlong **)
                (*(longlong *)(param_1 + 0x188) + (ulonglong)(uint)POPCOUNT(uVar9 & 0x1ffff) * 8),
     plVar7 == (longlong *)0x0)) goto LAB_14018077b;
  iVar5 = (int)plVar7[9];
  if (*(char *)((longlong)plVar7 + 0x56) == '\x01') {
    bVar11 = *(int *)((longlong)plVar7 + 0x74) == 0;
    bVar10 = -((char)param_4[4][10] >> 7);
    if ((bVar10 == 0) && (bVar11 && iVar5 != 0)) {
      bVar10 = (*(byte *)(param_3 + 0x74) & 4) >> 2;
    }
    if ((bVar10 == 0) && (iVar5 != 0)) {
LAB_14018073e:
      param_4[3][0x1a] = uVar3;
      param_4[3][0x1b] = uVar4;
      auVar15 = vblendps_avx(auVar15,*(undefined1 (*) [16])param_4[2],7);
      *(undefined1 (*) [16])param_4[2] = auVar15;
      FUN_1451733d0(plVar7,auStack_108,param_4);
      goto LAB_14018077b;
    }
    if (bVar11 && iVar5 != 0) {
      *(undefined4 *)(param_3 + 0x84) = 0;
    }
  }
  else if ((iVar5 != 0) && ((*(ushort *)(param_4[4] + 10) & 0x80) == 0)) goto LAB_14018073e;
  (**(code **)(*plVar7 + 0x58))(plVar7,auStack_108,param_4);
LAB_14018077b:
  FUN_1455a5e60(lVar6,param_2,param_3,param_4,param_5,CONCAT44(uVar19,param_7));
  return;
}

