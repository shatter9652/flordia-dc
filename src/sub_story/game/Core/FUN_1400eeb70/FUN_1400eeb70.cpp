// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400eeb70  size: 567 bytes
// Name:    FUN_1400eeb70
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14528cc50, FUN_1406e5a30, FUN_145380a20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400eeb70(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 auStack_78 [2];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar8 = *(longlong *)(param_1 + 8);
  func_0x0001400eedb0(param_1 + 0x20);
  *(longlong *)(param_1 + 0x20) = param_2;
  uStack_68 = *(undefined8 *)(param_3 + 0xff0);
  uStack_60 = *(undefined8 *)(param_3 + 0xff8);
  lVar7 = func_0x000144e63d10(*(undefined4 *)(param_2 + 0x9c));
  if (lVar7 == 0) {
    uStack_58 = *(undefined8 *)(param_2 + 0x70);
    uStack_50 = *(undefined8 *)(param_2 + 0x78);
    func_0x000144dc3790(&uStack_58,auStack_78);
  }
  else {
    FUN_1406e5a30(lVar7 + 0x640,auStack_78);
  }
  auVar15._4_4_ = _DAT_145fc6f70;
  auVar15._0_4_ = _DAT_145fc6f70;
  auVar15._8_4_ = _DAT_145fc6f70;
  auVar15._12_4_ = _DAT_145fc6f70;
  auVar14._0_4_ = _DAT_145fc6f4c & (uint)uStack_68;
  auVar14._4_4_ = _DAT_145fc6f4c & uStack_68._4_4_;
  auVar14._8_4_ = _DAT_145fc6f4c & (uint)uStack_60;
  auVar14._12_4_ = _DAT_145fc6f4c & uStack_60._4_4_;
  auVar14 = vcmpps_avx(auVar14,auVar15,0x11);
  uVar10 = vmovmskps_avx(auVar14);
  bVar13 = (~(byte)uVar10 & 7) == 0;
  puVar12 = auStack_78;
  if (bVar13) {
    puVar12 = &uStack_68;
  }
  uVar9 = puVar12[1];
  *(undefined8 *)(param_1 + 0x70) = *puVar12;
  *(undefined8 *)(param_1 + 0x78) = uVar9;
  if ((ulonglong)*(byte *)(param_3 + 0x1650) == 0xff) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_14528cc50(param_3 + 0x40 + (ulonglong)*(byte *)(param_3 + 0x1650) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar9;
  if ((ulonglong)*(byte *)(param_3 + 0x1651) == 0xff) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_14528cc50(param_3 + 0x40 + (ulonglong)*(byte *)(param_3 + 0x1651) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar9;
  uVar9 = *(undefined8 *)(param_3 + 0x1668);
  uVar3 = *(undefined8 *)(param_3 + 0x1670);
  uVar4 = *(undefined8 *)(param_3 + 0x1678);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_3 + 0x1660);
  *(undefined8 *)(param_1 + 0x48) = uVar9;
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  uVar9 = param_4[1];
  *(undefined8 *)(param_1 + 0x60) = *param_4;
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(lVar8 + 0x14);
  lVar8 = func_0x000144d9f7c0(*(undefined4 *)(param_2 + 0x9c));
  if ((((lVar7 != 0) && (lVar8 != 0)) && (lVar2 = *(longlong *)(lVar7 + 0x928), lVar2 != 0)) &&
     (0xfd < (byte)(*(char *)(lVar2 + 0xc) - 3U))) {
    uVar10 = *(undefined4 *)(lVar8 + 0x14);
    cVar6 = FUN_145380a20(*(undefined8 *)(lVar8 + 8),uVar10);
    if (cVar6 == '\0') {
      cVar6 = func_0x000144f14c70(uVar10,2);
      lVar8 = 0x70;
      if (cVar6 != '\0') {
        lVar8 = 0x84;
      }
      lVar11 = 0xb0;
      if (cVar6 != '\0') {
        lVar11 = 0xc4;
      }
    }
    else {
      lVar11 = 0xc0;
      lVar8 = 0x80;
    }
    uVar5 = _DAT_145fc6f10;
    fVar1 = *(float *)(lVar2 + lVar11);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(lVar2 + lVar8);
    auVar16._0_4_ = (uint)fVar1 ^ uVar5;
    auVar16._4_4_ = uVar5;
    auVar16._8_4_ = uVar5;
    auVar16._12_4_ = uVar5;
    auVar14 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x84)),auVar16);
    *(int *)(param_1 + 0x84) = auVar14._0_4_;
    *(float *)(param_1 + 0x88) = fVar1;
    if (lVar7 != 0 || bVar13) {
      *(float *)(param_1 + 0x88) = fVar1 + *(float *)(lVar2 + 0x28);
    }
  }
  return;
}

