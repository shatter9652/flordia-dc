// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401aea50  size: 550 bytes
// Name:    FUN_1401aea50
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141159b80
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1401aea50(uint param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar5 = _DAT_14ab56e38;
  uVar7 = param_1 & 0x1ffff;
  if ((uVar7 == 0x1ffff) ||
     (plVar2 = *(longlong **)((ulonglong)(param_1 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0),
     plVar2 == (longlong *)0x0)) {
    lVar12 = 0;
  }
  else {
    uVar1 = *(uint *)(plVar2[5] + (ulonglong)uVar7 * 4);
    lVar12 = 0;
    if (param_1 >> 0x16 == (uVar1 >> 0x11 & 0x3ff) &&
        (uVar1 & *(uint *)(plVar2 + 6)) == *(uint *)(plVar2 + 6)) {
      lVar12 = (ulonglong)(uVar7 * (int)plVar2[1]) + *plVar2;
    }
  }
  if (_DAT_14ab56e38 == 0) {
    return 0x1c9;
  }
  if ((((lVar12 == 0) && (lVar8 = func_0x000144da6540(), lVar8 != 0)) &&
      (lVar8 = *(longlong *)(lVar8 + 0x10c8), lVar8 != 0)) &&
     ((cVar6 = func_0x00014501bbd0(*(undefined4 *)(lVar8 + 0x14f0),*(undefined1 *)(lVar8 + 0x1540)),
      cVar6 != '\0' && (lVar9 = func_0x000144de7c70(), lVar9 == 0)))) {
    FUN_141159b80(lVar8 + 0x1490,&fStack_48);
    bVar4 = true;
    if ((*(uint *)(param_2 + 0x10) & 0x7f) == 4) {
      fVar16 = fStack_48;
      fVar17 = fStack_44;
      fVar18 = fStack_40;
      fVar19 = fStack_3c;
      func_0x000144fa06a0(param_2,&fStack_48);
      auVar3._4_4_ = fStack_44;
      auVar3._0_4_ = fStack_48;
      auVar3._8_4_ = fStack_40;
      auVar3._12_4_ = fStack_3c;
      auVar14._0_4_ = fVar16 + _DAT_146159f9c;
      auVar14._4_4_ = fVar17 + _DAT_146159f9c;
      auVar14._8_4_ = fVar18 + _DAT_146159f9c;
      auVar14._12_4_ = fVar19 + _DAT_146159f9c;
      auVar15._0_4_ = fVar16 + _DAT_145fc6f00;
      auVar15._4_4_ = fVar17 + _DAT_145fc6f00;
      auVar15._8_4_ = fVar18 + _DAT_145fc6f00;
      auVar15._12_4_ = fVar19 + _DAT_145fc6f00;
      auVar14 = vcmpps_avx(auVar14,auVar3,2);
      auVar3 = vcmpps_avx(auVar3,auVar15,2);
      auVar13._0_4_ = auVar14._0_4_ & auVar3._0_4_;
      auVar13._4_4_ = auVar14._4_4_ & auVar3._4_4_;
      auVar13._8_4_ = auVar14._8_4_ & auVar3._8_4_;
      auVar13._12_4_ = auVar14._12_4_ & auVar3._12_4_;
      uVar10 = vmovmskps_avx(auVar13);
      if ((~(byte)uVar10 & 7) == 0) {
        return 1;
      }
      return 0x1fa;
    }
  }
  else {
    if ((*(uint *)(param_2 + 0x10) & 0x7f) == 4) {
      return 0x1f9;
    }
    bVar4 = false;
  }
  uVar7 = *(uint *)(param_2 + 0x28);
  uVar11 = (ulonglong)uVar7 & 0x1ffff;
  if (uVar11 == 0x1ffff) {
    return 0x1f8;
  }
  plVar2 = *(longlong **)((ulonglong)(uVar7 >> 0x11 & 0x1f) * 8 + 0x14abbe7c0);
  if (plVar2 == (longlong *)0x0) {
    return 0x1f8;
  }
  uVar1 = *(uint *)(plVar2[5] + uVar11 * 4);
  lVar8 = 0;
  if (uVar7 >> 0x16 == (uVar1 >> 0x11 & 0x3ff) &&
      (uVar1 & *(uint *)(plVar2 + 6)) == *(uint *)(plVar2 + 6)) {
    lVar8 = (ulonglong)(uint)((int)plVar2[1] * (int)uVar11) + *plVar2;
  }
  if (bVar4 || lVar8 == 0) {
    return 0x1f8;
  }
  if (lVar8 == lVar5) {
    return 0x1f7;
  }
  if (lVar12 == lVar8) {
    return 1;
  }
  return 499;
}

