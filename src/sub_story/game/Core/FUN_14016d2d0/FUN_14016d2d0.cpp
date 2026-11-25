// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14016d2d0  size: 816 bytes
// Name:    FUN_14016d2d0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145247300
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14016d2d0(longlong param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  char cVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  lVar14 = *(longlong *)(param_1 + 0x408);
  if ((*(byte *)(lVar14 + 0xac) & 1) == 0) {
    uVar11 = func_0x000144f12500(*(undefined4 *)(*(longlong *)(param_1 + 0x410) + 0x9c));
    lVar12 = FUN_145247300(uVar11);
    uVar9 = _DAT_146159c28;
    fVar3 = _DAT_145fc6ed8;
    lVar13 = lVar12;
    if (_DAT_14abbef18 == lVar12) {
LAB_14016d31b:
      lVar15 = 0x14abbef80;
      if (*(longlong *)(lVar13 + 0x48) != 0) {
        lVar15 = *(longlong *)(lVar13 + 0x48);
      }
    }
    else {
      lVar15 = *(longlong *)(lVar12 + 0x48);
      if (lVar15 == 0) {
        piVar1 = (int *)(lVar12 + 0x88);
        iVar16 = 0;
        do {
          lVar13 = _DAT_14abbef18;
          if ((*piVar1 <= iVar16) || (lVar12 = *(longlong *)(lVar12 + 0x80), lVar12 == 0))
          goto LAB_14016d31b;
          lVar15 = *(longlong *)(lVar12 + 0x48);
          iVar16 = iVar16 + 1;
        } while (lVar15 == 0);
      }
    }
    auVar19._0_12_ = ZEXT812(0);
    auVar19._12_4_ = 0;
    *(undefined1 *)(param_1 + 0x47a) = *(undefined1 *)(lVar14 + 0xbc);
    *(undefined1 *)(param_1 + 0x47b) = *(undefined1 *)(lVar14 + 0xbd);
    *(undefined1 *)(param_1 + 0x47c) = *(undefined1 *)(lVar14 + 0xbe);
    *(undefined1 *)(param_1 + 0x47d) = *(undefined1 *)(lVar14 + 0xbf);
    *(undefined1 *)(param_1 + 0x47e) = *(undefined1 *)(lVar14 + 0xc0);
    *(undefined1 *)(param_1 + 0x480) = *(undefined1 *)(lVar14 + 0xc3);
    lVar12 = (ulonglong)*(byte *)(lVar14 + 0xc1) * 4;
    lVar13 = (ulonglong)*(byte *)(lVar14 + 0xc2) * 4;
    fVar2 = *(float *)(lVar15 + 0x2d0 + lVar12);
    auVar8 = vcmpss_avx(ZEXT416((uint)fVar2),auVar19,4);
    auVar8 = vblendvps_avx(ZEXT416(uVar9),ZEXT416((uint)(fVar3 / fVar2)),auVar8);
    *(int *)(param_1 + 0x3e0) = auVar8._0_4_;
    fVar2 = *(float *)(lVar15 + 0x2d0 + lVar13);
    auVar17._0_4_ = fVar3 / fVar2;
    auVar17._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar19 = vcmpss_avx(ZEXT416((uint)fVar2),auVar19,4);
    auVar19 = vblendvps_avx(ZEXT416(uVar9),auVar17,auVar19);
    *(int *)(param_1 + 0x3e4) = auVar19._0_4_;
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(lVar15 + 0x324 + lVar12);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(lVar15 + 0x324 + lVar13);
    *(int *)(param_1 + 1000) = auVar8._0_4_;
    *(int *)(param_1 + 0x3ec) = auVar19._0_4_;
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(lVar15 + 0x324 + lVar12);
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(lVar15 + 0x324 + lVar13);
    *(undefined4 *)(param_1 + 0x474) = *(undefined4 *)(lVar14 + 0xc4);
    *(undefined2 *)(param_1 + 0x478) = *(undefined2 *)(lVar14 + 200);
    *(undefined1 *)(param_1 + 0x300) = *(undefined1 *)(lVar14 + 0xca);
    *(undefined1 *)(param_1 + 0x301) = *(undefined1 *)(lVar14 + 0xcb);
    lVar14 = *(longlong *)(param_1 + 0x408);
  }
  cVar10 = func_0x000145090400(*(undefined4 *)(lVar14 + 0x154));
  if ((cVar10 != '\0') && ((*(byte *)(lVar14 + 0x108) & 1) == 0)) {
    uVar4 = *(undefined1 *)(lVar14 + 0x114);
    uVar5 = *(undefined1 *)(lVar14 + 0x115);
    bVar6 = *(byte *)(lVar14 + 0x116);
    bVar7 = *(byte *)(lVar14 + 0x117);
    uVar11 = func_0x000144f12500(*(undefined4 *)(*(longlong *)(param_1 + 0x410) + 0x9c));
    lVar14 = FUN_145247300(uVar11);
    lVar12 = lVar14;
    if (_DAT_14abbef18 == lVar14) {
LAB_14016d515:
      lVar13 = 0x14abbef80;
      if (*(longlong *)(lVar12 + 0x48) != 0) {
        lVar13 = *(longlong *)(lVar12 + 0x48);
      }
    }
    else {
      lVar13 = *(longlong *)(lVar14 + 0x48);
      if (lVar13 == 0) {
        piVar1 = (int *)(lVar14 + 0x88);
        iVar16 = 0;
        do {
          lVar12 = _DAT_14abbef18;
          if ((*piVar1 <= iVar16) || (lVar14 = *(longlong *)(lVar14 + 0x80), lVar14 == 0))
          goto LAB_14016d515;
          lVar13 = *(longlong *)(lVar14 + 0x48);
          iVar16 = iVar16 + 1;
        } while (lVar13 == 0);
      }
    }
    *(undefined1 *)(param_1 + 0x47d) = uVar4;
    *(undefined1 *)(param_1 + 0x47f) = uVar5;
    fVar2 = _DAT_145fc6ed8;
    lVar14 = (ulonglong)bVar6 * 4;
    auVar20._0_12_ = ZEXT812(0);
    auVar20._12_4_ = 0;
    lVar12 = (ulonglong)bVar7 * 4;
    fVar3 = *(float *)(lVar13 + 0x2d0 + lVar14);
    auVar8 = vcmpss_avx(ZEXT416((uint)fVar3),auVar20,4);
    auVar19 = ZEXT416(_DAT_146159c28);
    auVar8 = vblendvps_avx(auVar19,ZEXT416((uint)(_DAT_145fc6ed8 / fVar3)),auVar8);
    *(int *)(param_1 + 1000) = auVar8._0_4_;
    fVar3 = *(float *)(lVar13 + 0x2d0 + lVar12);
    auVar18._0_4_ = fVar2 / fVar3;
    auVar18._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar8 = vcmpss_avx(ZEXT416((uint)fVar3),auVar20,4);
    auVar8 = vblendvps_avx(auVar19,auVar18,auVar8);
    *(int *)(param_1 + 0x3ec) = auVar8._0_4_;
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(lVar13 + 0x324 + lVar14);
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(lVar13 + 0x324 + lVar12);
  }
  return;
}

