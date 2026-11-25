// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14000dce0  size: 1468 bytes
// Name:    FUN_14000dce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144a65b00, FUN_1451bb950, FUN_144dc2ce0, FUN_145544980, FUN_14000e2a0, FUN_14000a9c0, FUN_14000e570
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000dce0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  char cVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  uint uStack_11c;
  undefined4 auStack_118 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 uStack_b8;
  undefined2 uStack_b7;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  undefined2 uStack_a8;
  ulonglong uStack_a4;
  undefined8 uStack_9c;
  undefined1 auStack_88 [32];
  
  uStack_11c = 0;
  if (*(int *)(param_1 + 0xb4) != 5) {
    if (*(int *)(param_1 + 0xb4) == 4) {
      uStack_11c = 4;
      cVar6 = func_0x000144a65ab0(param_1);
      if (cVar6 != '\0') {
        FUN_144a65b00(param_1,param_2,&uStack_11c);
        goto LAB_14000de5f;
      }
      uStack_11c = 2;
    }
LAB_14000dd30:
    *(undefined4 *)(param_1 + 0xbc) = 0;
    FUN_14000e2a0(param_1,param_2,&uStack_11c);
    if ((uStack_11c == 3) && (cVar6 = func_0x000144a65ab0(param_1), cVar6 != '\0')) {
      FUN_144a65b00(param_1,param_2,&uStack_11c);
    }
    FUN_14000e570(param_1,param_2,&uStack_11c);
    if (uStack_11c == 2) {
      *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfe;
    }
    else {
      if (uStack_11c == 3) {
        *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfe;
        goto LAB_14000de6e;
      }
      if ((uStack_11c & 0xfffffffe) == 4) goto LAB_14000de6a;
    }
    lVar8 = func_0x000144e24670(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
    if (((*(uint *)(lVar8 + 0x10) >> 0x13 & 1) != 0) &&
       (*(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) & 0xfff7ffff,
       *(longlong *)(lVar8 + 0x30) != 0 || *(longlong *)(lVar8 + 0x20) != 0)) {
      (**(code **)(lVar8 + 0x38))(lVar8 + 0x20,0x13);
    }
    uVar14 = *(uint *)(param_1 + 0x74) & 0xfffff7ff;
    goto LAB_14000dd9c;
  }
  uStack_11c = 3;
  FUN_14000e570(param_1,param_2);
LAB_14000de5f:
  if (uStack_11c != 4) goto LAB_14000dd30;
LAB_14000de6a:
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) | 1;
LAB_14000de6e:
  uVar9 = func_0x00014000b0d0(*(undefined8 *)(param_1 + 0x10),param_1);
  FUN_144dc2ce0(auStack_118,*(undefined8 *)(param_1 + 0x10),uVar9);
  uVar9 = uStack_110;
  puVar10 = (undefined4 *)func_0x000144dc2c90(auStack_118[0],uStack_110);
  uVar13 = auStack_118[0];
  if (puVar10 != (undefined4 *)0x0) {
    *puVar10 = 4;
    lVar8 = func_0x000144dc2c90(auStack_118[0],uVar9);
    *(byte *)(lVar8 + 0xd3) = *(byte *)(lVar8 + 0xd3) | 2;
    lVar8 = func_0x000144dc2c90(uVar13,uVar9);
    *(undefined1 *)(lVar8 + 0xd4) = 0;
    lVar8 = func_0x000144dc2c90(uVar13,uVar9);
    *(undefined2 *)(lVar8 + 4) = 0;
    uVar1 = *(undefined2 *)(param_2 + 0x15f0);
    lVar8 = func_0x000144dc2c90(uVar13,uVar9);
    *(undefined2 *)(lVar8 + 6) = uVar1;
    lVar8 = func_0x000144dc2c90(uVar13,uVar9);
    *(undefined4 *)(lVar8 + 0xc) = 0;
    if (*(longlong *)(lVar8 + 0x10) != 0 && lVar8 + 0x18 != *(longlong *)(lVar8 + 0x10)) {
      func_0x000144d9c130();
      uVar9 = uStack_110;
      uVar13 = auStack_118[0];
    }
    *(longlong *)(lVar8 + 0x10) = lVar8 + 0x18;
    *(undefined4 *)(lVar8 + 8) = 10;
    lVar8 = func_0x000144dc2c90(uVar13,uVar9);
    sVar2 = *(short *)(lVar8 + 4);
    lVar15 = (longlong)sVar2;
    lVar8 = func_0x000144dc2c90(uVar13,uVar9);
    if (sVar2 < *(short *)(lVar8 + 6)) {
      auVar21 = ZEXT464(_DAT_14615a220);
      pbVar12 = (byte *)(lVar15 * 0xa0 + 0xae + param_2);
      fVar20 = _DAT_146159ca4;
      fVar19 = _DAT_145fc6edc;
      do {
        lVar8 = FUN_145544980(lVar8 + 8);
        auVar16._0_4_ =
             (fVar20 + *(float *)(param_1 + 100)) / (fVar19 * *(float *)(pbVar12 + -0x22));
        auVar16._4_12_ = SUB6012((undefined1  [60])0x0,0);
        auVar16 = vmaxss_avx(auVar16,auVar21._0_16_);
        uVar13 = auVar16._0_4_;
        if ((*pbVar12 & 1) == 0) {
          uVar13 = 0;
        }
        *(undefined4 *)(lVar8 + 4) = uVar13;
        lVar15 = lVar15 + 1;
        lVar8 = func_0x000144dc2c90(auStack_118[0],uStack_110);
        pbVar12 = pbVar12 + 0xa0;
      } while (lVar15 < *(short *)(lVar8 + 6));
    }
    *(undefined4 *)(param_2 + 0x1cc0) = 0x40600000;
    *(undefined4 *)(param_1 + 0xc0) = _DAT_14abbef40;
  }
  if (*(int *)(param_2 + 0x1684) < 0) {
    bVar7 = 1;
  }
  else {
    auStack_e8 = *(undefined1 (*) [16])(param_2 + 0x1650);
    auVar21 = ZEXT464(_DAT_146159bfc);
    auVar16 = vsubps_avx(auStack_e8,*(undefined1 (*) [16])(param_2 + 0x16a0));
    auVar22 = ZEXT1664(auVar16);
    fVar20 = _DAT_145fc6f08;
    cVar6 = func_0x00014000bbd0(param_2);
    if (cVar6 == '\0') {
      auVar17._0_4_ = auVar22._0_4_ * auVar22._0_4_;
      auVar17._4_4_ = auVar22._4_4_ * auVar22._4_4_;
      auVar17._8_4_ = auVar22._8_4_ * auVar22._8_4_;
      auVar17._12_4_ = auVar22._12_4_ * auVar22._12_4_;
      auVar17 = vhaddps_avx(auVar17,auVar17);
      auVar16 = vrsqrtss_avx(auVar17,auVar17);
      fVar19 = auVar16._0_4_;
      auVar16 = vcmpss_avx(auVar21._0_16_,auVar17,2);
      if (_DAT_145fc6ed8 <=
          (float)(auVar16._0_4_ &
                 (uint)(((fVar20 * fVar19 * fVar19 * auVar17._0_4_ + _DAT_145fc6edc) * fVar19 +
                        fVar19) * auVar17._0_4_))) {
        bVar7 = 0;
        goto LAB_14000e111;
      }
    }
    bVar7 = 1;
    (**(code **)(**(longlong **)(param_1 + 8) + 0x450))(*(longlong **)(param_1 + 8),&uStack_108,1);
    auStack_c8._0_12_ = ZEXT812(0);
    auStack_c8._12_4_ = 0;
    uStack_a8 = 0;
    uStack_a4 = 0xffffffffffffffff;
    uStack_9c = 0;
    uStack_b8 = 0;
    uStack_b4 = 0x2300000000;
    auStack_88 = ZEXT432(0) << 0x20;
    uStack_d8 = uStack_108;
    uStack_d0 = uStack_100;
    uStack_ac = 0;
    uStack_b7 = 0;
    auVar21 = ZEXT1664(auVar21._0_16_);
    (**(code **)(**(longlong **)(param_1 + 8) + 0x470))(*(longlong **)(param_1 + 8),auStack_c8,0);
    cVar6 = FUN_1451bb950(param_2,&uStack_d8);
    if (cVar6 != '\0') {
      auVar5._8_8_ = uStack_d0;
      auVar5._0_8_ = uStack_d8;
      auVar16 = vsubps_avx(auVar5,auStack_88._0_16_);
      auVar18._0_4_ = auVar16._0_4_ * auVar16._0_4_;
      auVar18._4_4_ = auVar16._4_4_ * auVar16._4_4_;
      auVar18._8_4_ = auVar16._8_4_ * auVar16._8_4_;
      auVar18._12_4_ = auVar16._12_4_ * auVar16._12_4_;
      auVar17 = vhaddps_avx(auVar18,auVar18);
      auVar16 = vrsqrtss_avx(auVar17,auVar17);
      fVar19 = auVar16._0_4_;
      auVar16 = vcmpss_avx(auVar21._0_16_,auVar17,2);
      bVar4 = (float)(auVar16._0_4_ &
                     (uint)(((fVar19 * fVar19 * auVar17._0_4_ * fVar20 + _DAT_145fc6edc) * fVar19 +
                            fVar19) * auVar17._0_4_)) < _DAT_146159bd4;
      uStack_f8 = uStack_108;
      uStack_f0 = uStack_100;
      bVar7 = func_0x00014000bbd0(param_2,&uStack_f8,uStack_a4 & 0xffffffff);
      bVar7 = bVar7 | bVar4;
    }
  }
LAB_14000e111:
  lVar8 = func_0x000144e24670(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c));
  if ((bVar7 != ((byte)(*(uint *)(lVar8 + 0x10) >> 0x13) & 1)) &&
     (*(uint *)(lVar8 + 0x10) = *(uint *)(lVar8 + 0x10) & 0xfff7ffff | (uint)bVar7 << 0x13,
     *(longlong *)(lVar8 + 0x30) != 0 || *(longlong *)(lVar8 + 0x20) != 0)) {
    (**(code **)(lVar8 + 0x38))(lVar8 + 0x20,0x13);
  }
  uVar14 = (uint)bVar7 << 0xb | *(uint *)(param_1 + 0x74) & 0xfffff7ff;
LAB_14000dd9c:
  *(uint *)(param_1 + 0x74) = uVar14;
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0x88);
  if ((((uVar3 != 0x1ffff) &&
       (uVar11 = *(uint *)(_DAT_14abbe8c8[5] + (ulonglong)(uVar3 & 0x1ffff) * 4),
       (~uVar11 & *(uint *)(_DAT_14abbe8c8 + 6)) == 0)) &&
      (uVar11 = uVar11 & 0x7fe0000, uVar11 == (uVar3 & 0xfffe0000))) && (*_DAT_14abbe8c8 != 0)) {
    uVar9 = func_0x000144da0df0(*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x9c),uVar11,0);
    func_0x000140743850(uVar9);
    uVar14 = *(uint *)(param_1 + 0x74);
  }
  if ((uVar14 >> 0xd & 1) == 0) {
    FUN_14000a9c0(param_1);
  }
  *(uint *)(param_1 + 0xb4) = uStack_11c;
  *(uint *)(param_1 + 0xb8) = uStack_11c;
  return;
}

