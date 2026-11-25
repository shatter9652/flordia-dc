// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014ea90  size: 659 bytes
// Name:    FUN_14014ea90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140082c90, FUN_1454387e0, FUN_1405e4840, FUN_140133280, FUN_140133500, FUN_144e92640
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14014ea90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  bool bVar12;
  undefined1 uStack_42;
  undefined1 uStack_41;
  ulonglong uVar11;
  
  uVar1 = *(undefined4 *)(param_2 + 0x9c);
  lVar7 = func_0x000144f3aef0(uVar1);
  lVar8 = func_0x000144da10f0(uVar1);
  if (lVar7 == 0) {
    return 0;
  }
  if (lVar8 == 0) {
    return 0;
  }
  iVar4 = FUN_140082c90(param_2,0x17,param_1);
  if (iVar4 == 0) {
LAB_14014eaec:
    iVar4 = FUN_140082c90(param_2,0x48,param_1);
    if (iVar4 == 0) {
      bVar2 = false;
    }
    else {
      uVar5 = func_0x000144dc06c0(iVar4);
      bVar2 = uVar5 <= _DAT_14a9ae158;
    }
  }
  else {
    uVar5 = func_0x000144dc06c0(iVar4);
    bVar2 = true;
    if (_DAT_14a9ae150 < uVar5) goto LAB_14014eaec;
  }
  iVar4 = FUN_140082c90(param_2,1,param_1);
  if ((iVar4 == 0) || (uVar5 = func_0x000144dc06c0(iVar4), _DAT_14a9ae154 < uVar5)) {
    uVar11 = 0;
    bVar10 = false;
  }
  else {
    iVar4 = func_0x00014068e100(lVar7 + 0x4d0,0x30);
    uVar6 = func_0x000144dc06c0(iVar4);
    bVar10 = uVar5 < uVar6 || iVar4 == 0;
    uVar11 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar10);
  }
  iVar4 = FUN_144e92640(lVar8 + 0x120,0xcf);
  if ((iVar4 == -1) || (lVar7 = func_0x0001452e3580(*(undefined8 *)(lVar8 + 0x650)), lVar7 == 0)) {
    bVar12 = false;
  }
  else {
    lVar7 = func_0x00014041e240(*(undefined4 *)(lVar7 + 0x328));
    bVar12 = lVar7 == param_1;
  }
  lVar7 = func_0x000144f01400(*(undefined4 *)(param_2 + 0x9c));
  if (lVar7 != 0) {
    FUN_140133280(&uStack_42,1,1);
    lVar7 = func_0x000144f01450(lVar7 + 0x10);
    if (((lVar7 != 0) &&
        (lVar9 = func_0x000144f200a0(*(undefined4 *)(lVar7 + 0x68)), lVar9 == param_1)) &&
       ((cVar3 = func_0x000144f3ad40(lVar7), cVar3 != '\0' ||
        (cVar3 = FUN_1405e4840(lVar7), cVar3 != '\0')))) {
      FUN_140133500(uStack_42,uStack_41);
      goto LAB_14014ebfe;
    }
    FUN_140133500(uStack_42,uStack_41);
  }
  if ((bVar2 || bVar10) || bVar12) {
LAB_14014ebfe:
    return CONCAT71((int7)(uVar11 >> 8),1);
  }
  lVar7 = func_0x000144eda820();
  if (lVar7 != 0) {
    cVar3 = func_0x0001453d8250(lVar7,1,1,1);
    if (cVar3 != '\0') {
      return CONCAT71((int7)(uVar11 >> 8),1);
    }
  }
  if (((*(byte *)(lVar8 + 0x192) & 4) != 0) && (0 < (longlong)*(int *)(lVar8 + 0x188))) {
    lVar7 = 0;
    uVar11 = 0;
    while (*(short *)(lVar8 + 0x122 + lVar7 * 4) != 0x52) {
      lVar7 = lVar7 + 1;
      if (*(int *)(lVar8 + 0x188) == lVar7) {
        return 0;
      }
    }
    lVar7 = func_0x000144f68b80(*(undefined4 *)(param_1 + 0x9c));
    if (lVar7 != 0) {
      cVar3 = FUN_1454387e0(lVar7);
      if (cVar3 != '\0') goto LAB_14014ebfe;
      if ((*(byte *)(lVar7 + 0x10) & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}

