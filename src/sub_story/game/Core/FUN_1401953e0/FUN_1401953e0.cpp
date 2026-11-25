// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401953e0  size: 913 bytes
// Name:    FUN_1401953e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145073ad0, FUN_145025b00, FUN_14117f370, FUN_140195780, FUN_144e75ec0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401953e0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [48];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulonglong uStack_c8;
  int iStack_c0;
  longlong lStack_b8;
  uint uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  uint uStack_98;
  int iStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  byte bStack_88;
  
  uVar1 = *param_1;
  if (uVar1 == 0x1ffff) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    uVar20 = *(uint *)(_DAT_14abbe940[5] + (ulonglong)(uVar1 & 0x1ffff) * 4);
    if (((uVar1 ^ uVar20) < 0x20000) &&
       ((uVar20 & *(uint *)(_DAT_14abbe940 + 6)) == *(uint *)(_DAT_14abbe940 + 6))) {
      lVar8 = (ulonglong)((uVar1 & 0x1ffff) * (int)_DAT_14abbe940[1]) + *_DAT_14abbe940;
    }
  }
  uVar1 = param_1[1];
  uVar10 = (ulonglong)uVar1 & 0x1ffff;
  if ((uVar10 == 0x1ffff) ||
     (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
     plVar3 == (longlong *)0x0)) {
    lVar9 = 0;
  }
  else {
    uVar20 = *(uint *)(plVar3[5] + uVar10 * 4);
    lVar9 = 0;
    if (uVar1 >> 0x16 == (uVar20 >> 0x11 & 0x3ff) &&
        (uVar20 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
      lVar9 = (ulonglong)(uint)((int)plVar3[1] * (int)uVar10) + *plVar3;
    }
  }
  uVar1 = param_1[2];
  uVar10 = (ulonglong)uVar1 & 0x1ffff;
  if ((uVar10 == 0x1ffff) ||
     (plVar3 = *(longlong **)((ulonglong)(uVar1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
     plVar3 == (longlong *)0x0)) {
    lVar12 = 0;
  }
  else {
    uVar20 = *(uint *)(plVar3[5] + uVar10 * 4);
    lVar12 = 0;
    if (uVar1 >> 0x16 == (uVar20 >> 0x11 & 0x3ff) &&
        (uVar20 & *(uint *)(plVar3 + 6)) == *(uint *)(plVar3 + 6)) {
      lVar12 = (ulonglong)(uint)((int)plVar3[1] * (int)uVar10) + *plVar3;
    }
  }
  if (lVar9 == 0) {
    return;
  }
  uVar1 = param_1[8];
  if (uVar1 == 0xffffffff) {
    return;
  }
  uVar18 = *(undefined8 *)(param_1 + 4);
  uVar19 = *(undefined8 *)(param_1 + 6);
  uVar20 = param_1[10];
  uVar2 = param_1[9];
  piVar7 = (int *)func_0x00014117e830(*(undefined4 *)(lVar8 + 0x1128));
  if (piVar7 == (int *)0x0) {
    return;
  }
  if (lVar12 != 0) {
    if (*(char *)(lVar12 + 0x30) == '\x03') {
      cVar4 = func_0x000144da28f0(*(undefined4 *)(lVar12 + 0x9c));
      bVar13 = true;
      if (cVar4 != '\0') goto LAB_1401955a1;
    }
    else if (*(char *)(lVar12 + 0x30) == '\x02') {
      bVar13 = _DAT_14ab760c8 == lVar12;
      goto LAB_1401955a1;
    }
  }
  bVar13 = false;
LAB_1401955a1:
  bVar5 = FUN_145073ad0(1,1,0);
  bVar6 = FUN_14117f370();
  iVar11 = *piVar7;
  if (((bVar5 & bVar13) == 1) && (piVar7[1] != 0)) {
    iVar11 = piVar7[1];
  }
  if ((bVar6 & bVar13) == 0 && iVar11 != 0) {
    FUN_145025b00(auStack_118,lVar9,uVar1,0,0,1);
    fVar16 = (float)piVar7[6] * (float)piVar7[6];
    uStack_128 = uStack_e8;
    uStack_120 = uStack_e0;
    fVar14 = (float)FUN_144e75ec0(&uStack_128,0);
    if (fVar14 < fVar16) {
      uStack_138 = uStack_e8;
      uStack_130 = uStack_e0;
      func_0x000144fe4760(&uStack_d8,&uStack_138,5);
      auVar17._0_12_ = ZEXT812(0);
      auVar17._12_4_ = 0;
      auVar15._0_4_ = (float)uStack_d8 * (float)uStack_d8;
      auVar15._4_4_ = uStack_d8._4_4_ * uStack_d8._4_4_;
      auVar15._8_4_ = (float)uStack_d0 * (float)uStack_d0;
      auVar15._12_4_ = uStack_d0._4_4_ * uStack_d0._4_4_;
      auVar15 = vblendps_avx(auVar15,auVar17,8);
      auVar15 = vhaddps_avx(auVar15,auVar15);
      auVar17 = vhaddps_avx(auVar15,auVar15);
      auVar15 = vrsqrtss_avx(auVar17,auVar17);
      fVar16 = auVar15._0_4_;
      auVar15 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar17,2);
      uStack_90 = func_0x000144e8f130(auVar15._0_4_ &
                                      (uint)(((fVar16 * fVar16 * auVar17._0_4_ * _DAT_145fc6f08 +
                                              _DAT_145fc6edc) * fVar16 + fVar16) * auVar17._0_4_),
                                      piVar7[10],piVar7[0xb]);
      uStack_c8 = (ulonglong)(uVar2 + 0x22);
      uStack_d8 = 0x1ffff;
      iStack_94 = piVar7[8];
      iStack_8c = piVar7[7];
      uStack_d0 = lVar8;
      iStack_c0 = iVar11;
      lStack_b8 = lVar9;
      uStack_b0 = uVar1;
      uStack_a8 = uVar18;
      uStack_a0 = uVar19;
      uStack_98 = uVar20;
      bStack_88 = bVar5 & bVar13;
      FUN_140195780(&uStack_d8);
    }
  }
  return;
}

