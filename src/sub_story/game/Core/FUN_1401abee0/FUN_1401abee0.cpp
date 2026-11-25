// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401abee0  size: 1395 bytes
// Name:    FUN_1401abee0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a89b0, FUN_145234a80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401abee0(longlong param_1,ulonglong param_2,uint param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  byte bVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  longlong lStack_58;
  longlong lStack_50;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x20) + (param_2 & 0xffffffff) * 8);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x20) + (ulonglong)param_3 * 8);
  bVar4 = *(byte *)((longlong)plVar1 + 0x91);
  if (((bVar4 & 0x20) != 0) || ((*(byte *)((longlong)plVar2 + 0x91) & 0x20) != 0)) {
    uVar14 = (ulonglong)*(byte *)((longlong)plVar1 + 0x92) & 0xffffffffffffff40;
    if (SUB81(uVar14 >> 6,0) == ((*(byte *)((longlong)plVar2 + 0x92) >> 6 & 1) != 0)) {
LAB_1401abf3e:
      bVar7 = 0x20;
    }
    else {
      if ((char)uVar14 != '\0') {
        if ((bVar4 & 0x20) == 0) goto LAB_1401abf55;
        goto LAB_1401abf3e;
      }
      if ((*(byte *)((longlong)plVar2 + 0x91) & 0x20) != 0) goto LAB_1401abf3e;
LAB_1401abf55:
      bVar7 = 0;
    }
    bVar4 = bVar4 & 0xdf | bVar7;
    *(byte *)((longlong)plVar1 + 0x91) = bVar4;
  }
  if (((bVar4 & 0x40) != 0) || (bVar7 = *(byte *)((longlong)plVar2 + 0x91), (bVar7 & 0x40) != 0)) {
    uVar14 = (ulonglong)*(byte *)((longlong)plVar1 + 0x92) & 0xffffffffffffff40;
    if (SUB81(uVar14 >> 6,0) == ((*(byte *)((longlong)plVar2 + 0x92) >> 6 & 1) != 0)) {
LAB_1401abf94:
      bVar7 = 0x40;
    }
    else {
      if ((char)uVar14 != '\0') {
        if ((bVar4 & 0x40) == 0) goto LAB_1401abfab;
        goto LAB_1401abf94;
      }
      if ((*(byte *)((longlong)plVar2 + 0x91) & 0x40) != 0) goto LAB_1401abf94;
LAB_1401abfab:
      bVar7 = 0;
    }
    bVar4 = bVar4 & 0xbf | bVar7;
    *(byte *)((longlong)plVar1 + 0x91) = bVar4;
    bVar7 = *(byte *)((longlong)plVar2 + 0x91);
  }
  if (((bVar7 & 4) != 0) && ((bVar4 & 4) == 0)) {
    *(byte *)((longlong)plVar1 + 0x91) = bVar4 | 4;
    *(int *)(plVar1 + 0xb) = (int)plVar2[0xb];
  }
  uVar12 = *(uint *)(plVar1 + 4);
  if (uVar12 == 0x1ffff) {
LAB_1401ac029:
    lVar8 = 0;
  }
  else {
    uVar5 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar12 & 0x1ffff) * 4);
    uVar11 = ~uVar5 & *(uint *)(_DAT_14abb6918 + 6);
    param_4 = (ulonglong)uVar11;
    if ((uVar11 != 0) || ((uVar5 & 0x7fe0000) != (uVar12 & 0xfffe0000))) goto LAB_1401ac029;
    lVar8 = (ulonglong)((uVar12 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
  }
  uVar12 = *(uint *)(plVar2 + 4);
  if (uVar12 == 0x1ffff) {
LAB_1401ac074:
    lVar13 = 0;
  }
  else {
    uVar5 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar12 & 0x1ffff) * 4);
    uVar11 = ~uVar5 & *(uint *)(_DAT_14abb6918 + 6);
    param_4 = (ulonglong)uVar11;
    if ((uVar11 != 0) || ((uVar5 & 0x7fe0000) != (uVar12 & 0xfffe0000))) goto LAB_1401ac074;
    lVar13 = (ulonglong)((uVar12 & 0x1ffff) * (int)_DAT_14abb6918[1]) + *_DAT_14abb6918;
  }
  if (lVar8 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = FUN_145234a80(lVar8,0,0,param_4);
  }
  if (lVar13 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = FUN_145234a80(lVar13,0,0);
  }
  if ((lVar8 != 0) && (lVar8 == lVar13)) {
    uStack_78 = *(undefined8 *)(lVar8 + 0x70);
    uStack_70 = *(undefined8 *)(lVar8 + 0x78);
    func_0x000144dc3790(&uStack_78,&lStack_58);
    plVar1[2] = lStack_58;
    plVar1[3] = lStack_50;
    uStack_88 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70);
    uStack_80 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x78);
    func_0x000144dc3790(&uStack_88,auStack_68);
    auVar3._8_8_ = lStack_50;
    auVar3._0_8_ = lStack_58;
    auVar18._0_12_ = ZEXT812(0);
    auVar18._12_4_ = 0;
    auVar3 = vsubps_avx(auVar3,auStack_68);
    auVar16._0_4_ = auVar3._0_4_ * auVar3._0_4_;
    auVar16._4_4_ = auVar3._4_4_ * auVar3._4_4_;
    auVar16._8_4_ = auVar3._8_4_ * auVar3._8_4_;
    auVar16._12_4_ = auVar3._12_4_ * auVar3._12_4_;
    auVar3 = vblendps_avx(auVar16,auVar18,8);
    auVar3 = vhaddps_avx(auVar3,auVar3);
    auVar16 = vhaddps_avx(auVar3,auVar3);
    auVar3 = vrsqrtss_avx(auVar16,auVar16);
    fVar17 = auVar3._0_4_;
    auVar3 = vcmpss_avx(ZEXT416(_DAT_146159bfc),auVar16,2);
    *(uint *)((longlong)plVar1 + 0x44) =
         auVar3._0_4_ &
         (uint)(((fVar17 * fVar17 * auVar16._0_4_ * _DAT_145fc6f08 + _DAT_145fc6edc) * fVar17 +
                fVar17) * auVar16._0_4_);
  }
  if (*(float *)((longlong)plVar2 + 0x4c) < *(float *)((longlong)plVar1 + 0x4c)) {
    *(float *)((longlong)plVar1 + 0x4c) = *(float *)((longlong)plVar2 + 0x4c);
  }
  auVar3 = vminss_avx(ZEXT416(*(uint *)((longlong)plVar1 + 0x5c)),
                      ZEXT416(*(uint *)((longlong)plVar2 + 0x5c)));
  *(int *)((longlong)plVar1 + 0x5c) = auVar3._0_4_;
  if (*(float *)(plVar1 + 6) < *(float *)(plVar2 + 6)) {
    *(float *)(plVar1 + 6) = *(float *)(plVar2 + 6);
  }
  if (*(float *)((longlong)plVar2 + 0x34) < *(float *)((longlong)plVar1 + 0x34)) {
    *(float *)((longlong)plVar1 + 0x34) = *(float *)((longlong)plVar2 + 0x34);
  }
  uVar12 = *(uint *)((longlong)plVar2 + 0x8c);
  if (uVar12 < 0x10) {
    if (*(uint *)((longlong)plVar1 + 0x8c) < 0x10) {
      FUN_1401a89b0(plVar2,1);
    }
    else {
      *(int *)(plVar1 + 0xc) = (int)plVar2[0xc];
      *(uint *)((longlong)plVar1 + 0x8c) = uVar12;
      *(int *)(plVar1 + 0x11) = (int)plVar2[0x11];
      *(undefined4 *)((longlong)plVar2 + 0x8c) = 0xffffffff;
    }
  }
  else if (*(uint *)((longlong)plVar1 + 0x8c) < 0x10) {
    *(int *)(plVar2 + 0xc) = (int)plVar1[0xc];
  }
  lVar8 = *plVar1;
  if ((short)plVar2[1] == 0) {
    uVar9 = *(ushort *)(plVar1 + 1);
    uVar12 = (uint)*(ushort *)((longlong)plVar1 + 10);
  }
  else {
    uVar9 = *(ushort *)(plVar1 + 1);
    uVar12 = (uint)*(ushort *)((longlong)plVar1 + 10);
    uVar14 = 0;
    do {
      lVar13 = *plVar2;
      uVar10 = uVar9;
      if (uVar9 == (ushort)uVar12) {
        uVar5 = uVar12 & 0xffff;
        lVar6 = func_0x000144d9c140(4,uVar5 * 4 + 0x40);
        if ((ushort)uVar12 != 0) {
          func_0x000145f40560(lVar6,lVar8,uVar5 * 4);
        }
        if (lVar8 != 0) {
          func_0x000144d9c130(lVar8);
        }
        uVar12 = uVar5 + 0x10;
        *(short *)((longlong)plVar1 + 10) = (short)uVar12;
        *plVar1 = lVar6;
        lVar8 = lVar6;
        uVar10 = *(ushort *)(plVar1 + 1);
      }
      uVar15 = *(undefined4 *)(lVar13 + uVar14 * 4);
      uVar9 = uVar10 + 1;
      uVar14 = uVar14 + 1;
      *(ushort *)(plVar1 + 1) = uVar9;
      *(undefined4 *)(lVar8 + (ulonglong)uVar10 * 4) = uVar15;
    } while (uVar14 < *(ushort *)(plVar2 + 1));
  }
  uVar10 = (ushort)uVar12;
  lVar13 = lVar8;
  if (uVar9 == uVar10) {
    lVar13 = func_0x000144d9c140(4,(uVar12 & 0xffff) * 4 + 0x40);
    if (uVar10 != 0) {
      func_0x000145f40560(lVar13,lVar8,(uVar12 & 0xffff) * 4);
    }
    if (lVar8 != 0) {
      func_0x000144d9c130(lVar8);
    }
    *(ushort *)((longlong)plVar1 + 10) = uVar10 + 0x10;
    *plVar1 = lVar13;
    uVar9 = *(ushort *)(plVar1 + 1);
  }
  *(ushort *)(plVar1 + 1) = uVar9 + 1;
  *(uint *)(lVar13 + (ulonglong)uVar9 * 4) = param_3;
  bVar4 = *(byte *)((longlong)plVar1 + 0x92) & 0x40;
  if ((bool)(bVar4 >> 6) == ((*(byte *)((longlong)plVar2 + 0x92) >> 6 & 1) != 0)) {
    auVar3 = vmaxss_avx(ZEXT416(*(uint *)((longlong)plVar1 + 0x3c)),
                        ZEXT416(*(uint *)((longlong)plVar2 + 0x3c)));
    uVar15 = auVar3._0_4_;
  }
  else if (bVar4 == 0) {
    uVar15 = *(undefined4 *)((longlong)plVar2 + 0x3c);
  }
  else {
    uVar15 = *(undefined4 *)((longlong)plVar1 + 0x3c);
  }
  *(undefined4 *)(plVar1 + 9) = uVar15;
  uVar12 = *(uint *)(plVar1 + 0xf);
  if (uVar12 == 0) {
    uVar5 = *(uint *)(plVar2 + 0xf);
  }
  else {
    uVar5 = *(uint *)(plVar2 + 0xf);
    if (uVar5 != 0) {
      if (uVar12 < uVar5) {
        uVar5 = uVar12;
      }
      goto LAB_1401ac397;
    }
    uVar5 = 0;
  }
  if (uVar5 < uVar12) {
    uVar5 = uVar12;
  }
LAB_1401ac397:
  *(uint *)(plVar1 + 0xf) = uVar5;
  *(uint *)(plVar2 + 0xf) = uVar5;
  bVar4 = 1;
  if ((*(byte *)((longlong)plVar1 + 0x91) & 1) == 0) {
    bVar4 = *(byte *)((longlong)plVar2 + 0x91) & 1;
  }
  *(byte *)((longlong)plVar1 + 0x91) = *(byte *)((longlong)plVar1 + 0x91) & 0xfe | bVar4;
  bVar7 = *(byte *)((longlong)plVar2 + 0x91);
  *(byte *)((longlong)plVar2 + 0x91) = bVar7 & 0xfe | bVar4;
  bVar4 = 2;
  if ((*(byte *)((longlong)plVar1 + 0x91) & 2) == 0) {
    bVar4 = bVar7 & 2;
  }
  *(byte *)((longlong)plVar1 + 0x91) = *(byte *)((longlong)plVar1 + 0x91) & 0xfd | bVar4;
  *(byte *)((longlong)plVar2 + 0x91) = *(byte *)((longlong)plVar2 + 0x91) & 0xfd | bVar4;
  *(byte *)((longlong)plVar2 + 0x92) = *(byte *)((longlong)plVar2 + 0x92) | 1;
  return;
}

