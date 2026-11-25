// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140067360  size: 884 bytes
// Name:    FUN_140067360
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ead890, FUN_14551dd20, FUN_140448850, FUN_140c96050, FUN_140448d60, FUN_144eada10, FUN_14551d6b0, FUN_141106f00, FUN_1455719d0, FUN_14527f200
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140067360(longlong param_1,float *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 unaff_R15;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (*(char *)(param_1 + 0x42d) != '\x01') {
    return;
  }
  if (*(char *)(param_1 + 0x434) != '\x01') {
    return;
  }
  if (*(longlong *)(param_1 + 0x290) == 0) {
    return;
  }
  fVar4 = _DAT_145fc6edc;
  if ((*(byte *)(param_1 + 0x424) & 1) == 0) {
    fVar4 = _DAT_14615a3e4;
  }
  auVar13 = ZEXT416((uint)(*param_2 * fVar4 + *(float *)(param_1 + 0x48c)));
  auVar14._0_12_ = ZEXT812(0);
  auVar14._12_4_ = 0;
  lVar1 = *(longlong *)(param_1 + 0x10);
  auVar2 = vminss_avx(ZEXT416(_DAT_145fc6ed8),auVar13);
  auVar13 = vcmpss_avx(auVar13,auVar14,1);
  *(uint *)(param_1 + 0x48c) = ~auVar13._0_4_ & auVar2._0_4_;
  if (*(longlong *)(param_1 + 0x280) == 0) {
    return;
  }
  auVar16 = ZEXT464(_DAT_14abbef4c);
  iVar7 = func_0x0001455b90d0(param_1);
  *(undefined1 *)(param_1 + 0x489) = 0;
  FUN_1455719d0(param_1);
  uVar9 = *(undefined4 *)(param_1 + 0x314);
  uVar12 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),*(undefined1 *)(param_1 + 0x424));
  uVar8 = func_0x0001455b9100(uVar9,uVar12 & 0xffffffff,iVar7);
  uVar9 = func_0x0001455b9120(uVar9,uVar12 & 0xffffffff,iVar7);
  func_0x0001455b9140(param_1 + 800,auVar16._0_8_,uVar9,uVar8);
  auVar13._0_12_ = ZEXT812(0);
  auVar13._12_4_ = 0;
  *(undefined1 (*) [16])(param_1 + 0x380) = auVar13;
  if (iVar7 == 2) {
    cVar5 = FUN_144ead890(lVar1);
    uVar15 = auVar16._0_8_;
    if (cVar5 == '\0') {
      bVar6 = FUN_144eada10(lVar1);
      uVar15 = auVar16._0_8_;
      bVar6 = bVar6 ^ 1;
    }
    else {
      bVar6 = 0;
    }
    FUN_140448850(param_1,uVar15,uVar8,uVar9,bVar6);
    goto LAB_1400676aa;
  }
  if (iVar7 == 1) {
    FUN_141106f00(param_1,auVar16._0_8_,uVar8,uVar9);
    goto LAB_1400676aa;
  }
  if (iVar7 != 0) {
    return;
  }
  func_0x00014084ace0(param_1 + 800);
  lVar10 = func_0x000144e63d10(*(undefined4 *)(lVar1 + 0x9c));
  if (lVar10 == 0) {
    auStack_a8._0_12_ = ZEXT812(0);
    auStack_a8._12_4_ = 0;
  }
  else {
    if ((*(longlong *)(lVar10 + 0x860) != 0) &&
       ((*(byte *)(*(longlong *)(lVar10 + 0x860) + 0x1d) & 2) != 0)) {
      uStack_98 = *(undefined8 *)(lVar10 + 0x688);
      uStack_78 = 0xffffffff00000000;
      auVar13 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
      uVar11 = auVar13._0_2_ | 0x10000;
      cVar5 = FUN_140c96050(lVar10,&uStack_98,&uStack_78,uVar11);
      if (cVar5 != '\0') {
        auVar16 = ZEXT1664(*(undefined1 (*) [16])(lVar10 + 0x630));
        FUN_14551d6b0(uStack_78,&uStack_98,uVar11);
        auVar2._8_8_ = uStack_90;
        auVar2._0_8_ = uStack_98;
        auStack_a8 = vsubps_avx(auVar16._0_16_,auVar2);
        goto LAB_14006759e;
      }
    }
    auStack_a8 = vsubps_avx(*(undefined1 (*) [16])(lVar10 + 0x630),
                            *(undefined1 (*) [16])(lVar10 + 0x840));
  }
LAB_14006759e:
  FUN_14527f200(param_1,auStack_a8);
  lVar10 = func_0x000144e63d10(*(undefined4 *)(lVar1 + 0x9c));
  if (lVar10 == 0) {
    auStack_b8._0_12_ = ZEXT812(0);
    auStack_b8._12_4_ = 0;
  }
  else {
    if ((*(longlong *)(lVar10 + 0x860) != 0) &&
       ((*(byte *)(*(longlong *)(lVar10 + 0x860) + 0x1d) & 2) != 0)) {
      uStack_98 = *(undefined8 *)(lVar10 + 0x688);
      uStack_80 = 0xffffffff00000000;
      auVar13 = vcvtps2ph_f16c(ZEXT416(_DAT_145fc6f48),3);
      uVar11 = auVar13._0_2_ | 0x10000;
      cVar5 = FUN_140c96050(lVar10,&uStack_98,&uStack_80,uVar11);
      if (cVar5 != '\0') {
        uStack_58 = *(undefined8 *)(lVar1 + 0x70);
        uStack_50 = *(undefined8 *)(lVar1 + 0x78);
        auVar16 = ZEXT1664(*(undefined1 (*) [16])(lVar10 + 0x620));
        func_0x000144dc3790(&uStack_58,&uStack_78);
        uStack_68 = uStack_78;
        uStack_60 = uStack_70;
        FUN_14551dd20(uStack_80,&uStack_98,&uStack_68,uVar11);
        auVar3._8_8_ = uStack_90;
        auVar3._0_8_ = uStack_98;
        auStack_b8 = vsubps_avx(auVar16._0_16_,auVar3);
        goto LAB_140067697;
      }
    }
    auStack_b8 = vsubps_avx(*(undefined1 (*) [16])(lVar10 + 0x620),
                            *(undefined1 (*) [16])(lVar10 + 0x830));
  }
LAB_140067697:
  FUN_140448d60(param_1,auStack_b8);
LAB_1400676aa:
  if (*(char *)(param_1 + 0x489) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return;
}

