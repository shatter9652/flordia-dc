// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140128c60  size: 71 bytes
// Name:    FUN_140128c60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


int FUN_140128c60(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined1 auVar16 [64];
  undefined2 uStack_7a;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0x140128c77;
  lVar6 = func_0x000144f20050(*(undefined4 *)(param_1 + 0x9c));
  if (lVar6 == 0) {
    iVar5 = 2;
  }
  else {
    lVar7 = lVar6 + 0x18;
    uStack_78 = *(undefined8 *)(param_2 + 0x70);
    uStack_70 = *(undefined8 *)(param_2 + 0x78);
    uStack_40 = unaff_XMM6_Qb;
    uStack_38 = unaff_XMM7_Qa;
    func_0x000144dc3790(&uStack_78,auStack_58);
    FUN_144ef43e0(lVar7,&uStack_68);
    auVar1._8_8_ = puStack_60;
    auVar1._0_8_ = uStack_68;
    auVar15._0_12_ = ZEXT812(0);
    auVar15._12_4_ = 0;
    auVar1 = vsubps_avx(auVar1,auStack_58);
    uStack_7a = 0;
    auVar14._0_4_ = auVar1._0_4_ * auVar1._0_4_;
    auVar14._4_4_ = auVar1._4_4_ * auVar1._4_4_;
    auVar14._8_4_ = auVar1._8_4_ * auVar1._8_4_;
    auVar14._12_4_ = auVar1._12_4_ * auVar1._12_4_;
    auVar1 = vblendps_avx(auVar14,auVar15,8);
    auVar1 = vhaddps_avx(auVar1,auVar1);
    auVar1 = vhaddps_avx(auVar1,auVar1);
    auVar16 = ZEXT1664(auVar1);
    FUN_140080650(&uStack_7a,*(undefined8 *)(lVar6 + 0x48),param_2);
    uVar13 = FUN_144ef4340(param_2);
    uVar2 = uStack_7a;
    iVar5 = 0;
    fVar12 = (float)FUN_140080870(lVar7,uStack_7a,uVar13,0,1);
    if (fVar12 * fVar12 < auVar16._0_4_) {
      fVar12 = (float)FUN_140080870(lVar7,uVar2,uVar13,1,1);
      iVar5 = 2;
      if ((auVar16._0_4_ <= fVar12 * fVar12) &&
         (((((*(char *)(param_2 + 0x30) != '\x03' ||
             (lVar7 = FUN_144dd7510(*(undefined4 *)(param_2 + 0x9c)), lVar7 == 0)) ||
            (cVar3 = FUN_140083460(lVar7), cVar3 == '\0')) ||
           ((lVar7 = func_0x000144eb3780(*(undefined4 *)(lVar7 + 0x9c)), lVar7 == 0 ||
            (lVar7 = FUN_140394a60(lVar7,param_2), lVar7 == 0)))) ||
          ((*(byte *)(lVar7 + 0x31) & 0x20) != 0)))) {
        iVar5 = 1;
      }
    }
    param_1 = *(longlong *)(lVar6 + 0x48);
  }
  if (iVar5 != 2) {
    return iVar5;
  }
  uVar8 = *(undefined4 *)(param_1 + 0x9c);
  puStack_60 = &UNK_144fbfbff;
  lVar6 = func_0x000144ef6110(uVar8);
  if (lVar6 == 0) {
    puStack_60 = &UNK_144fbfc0f;
    lVar6 = func_0x000144fdf400(uVar8);
    if (lVar6 != 0) {
      bVar11 = false;
code_r0x000144fbfc1a:
      if ((param_2 == 0) || (*(char *)(param_2 + 0x30) != '\x03')) {
        if (!bVar11) {
          return 2;
        }
      }
      else {
        if (!bVar11) {
          uStack_38 = CONCAT71(uStack_38._1_7_,1);
          puStack_60 = &UNK_144fbfc48;
          cVar3 = FUN_144fbfe40(lVar6,param_2,1,1);
          if (cVar3 == '\0') {
            return 2;
          }
        }
        puStack_60 = &UNK_144fbfc5e;
        cVar3 = FUN_140113a60(param_1,param_2);
        if (cVar3 != '\0') goto code_r0x000144fbfe1b;
        puStack_60 = &UNK_144fbfc74;
        cVar3 = FUN_145125430(param_1,param_2,0);
        if (cVar3 != '\0') {
          return 2;
        }
        uVar8 = *(undefined4 *)(param_1 + 0x9c);
      }
      goto code_r0x000144fbfc87;
    }
code_r0x000144fbfe1b:
    iVar5 = 2;
  }
  else {
    puStack_60 = &UNK_144fbfd7a;
    lVar7 = func_0x000144ef6100(lVar6);
    if ((*(byte *)(lVar7 + 0xe) & 0x40) != 0) {
      return 2;
    }
    puStack_60 = &UNK_144fbfd97;
    lVar7 = FUN_144f81f90(*(undefined4 *)(lVar6 + 0x128));
    uVar8 = *(undefined4 *)(param_1 + 0x9c);
    bVar11 = lVar7 != 0;
    puStack_60 = &UNK_144fbfdae;
    lVar6 = func_0x000144fdf400(uVar8);
    if (lVar6 != 0) goto code_r0x000144fbfc1a;
    if (lVar7 == 0) {
      return 2;
    }
code_r0x000144fbfc87:
    puStack_60 = &UNK_144fbfc8e;
    lVar6 = FUN_144fdf3e0(uVar8);
    puStack_60 = &UNK_144fbfc98;
    lVar7 = func_0x000144da10f0(uVar8);
    bVar11 = true;
    bVar10 = true;
    if (lVar6 != 0) {
      if ((*(byte *)(lVar6 + 0x2c) & 10) == 0) {
        bVar10 = (*(byte *)(lVar6 + 0x2c) & 4) == 0;
      }
      else {
        bVar10 = false;
      }
    }
    if (lVar7 != 0) {
      if (((*(ulonglong *)(lVar7 + 0x3c0) >> 0x3a & 1) != 0) &&
         (0 < (longlong)*(int *)(lVar7 + 0x3b8))) {
        lVar6 = 0;
        do {
          if (*(short *)(lVar7 + 0x352 + lVar6 * 4) == 0x1ba) goto code_r0x000144fbfe1b;
          lVar6 = lVar6 + 1;
        } while (*(int *)(lVar7 + 0x3b8) != lVar6);
      }
      if (((*(ulonglong *)(lVar7 + 0x3c0) >> 0x29 & 1) != 0) &&
         (0 < (longlong)*(int *)(lVar7 + 0x3b8))) {
        lVar6 = 0;
        do {
          uVar9 = *(uint *)(lVar7 + 0x350 + lVar6 * 4);
          if ((uVar9 & 0xffff0000) == 0x1690000) break;
          lVar6 = lVar6 + 1;
          uVar9 = 0xffffffff;
        } while (*(int *)(lVar7 + 0x3b8) != lVar6);
        bVar11 = uVar9 == 0xffffffff;
      }
    }
    if (!(bool)(bVar10 & bVar11)) {
      return 2;
    }
    if ((param_2 == 0) || (*(char *)(param_2 + 0x30) != '\x03')) {
      puStack_60 = &UNK_144fbfe2d;
      lVar6 = FUN_144fcdf30(param_1);
      bVar11 = lVar6 == 0;
    }
    else {
      puStack_60 = &UNK_144fbfd3a;
      lVar6 = FUN_144fcdf30(param_1);
      if (lVar6 != 0) goto code_r0x000144fbfe1b;
      puStack_60 = &UNK_144fbfd4e;
      cVar3 = FUN_140113c30(param_1,param_2);
      bVar11 = cVar3 == '\0';
    }
    iVar5 = 2;
    if (bVar11) {
      puStack_60 = &UNK_144fbfd65;
      bVar4 = FUN_1450a0e20(param_1,0);
      iVar5 = bVar4 + 1;
    }
  }
  return iVar5;
}

