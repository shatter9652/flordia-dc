// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400b0c90  size: 547 bytes
// Name:    FUN_1400b0c90
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144db8060, FUN_1451540e0, FUN_144341100, FUN_144dd7510, FUN_141a0d7f0, FUN_145451d40, FUN_142533dd0, FUN_144d9d7a0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400b0c90(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  byte bVar7;
  undefined4 uVar8;
  
  uVar8 = *(undefined4 *)(param_2 + 0x9c);
  lVar6 = FUN_144dd7510(uVar8);
  if (lVar6 != 0) {
    return 1;
  }
  cVar3 = func_0x000144e238f0(uVar8);
  if (cVar3 != '\0') {
    lVar6 = func_0x000144da10f0(uVar8);
    if ((lVar6 != 0) &&
       (lVar6 = func_0x000144f3ea40(*(undefined8 *)(lVar6 + 0x650),0x12), lVar6 != 0)) {
      cVar3 = func_0x000140a3f350(lVar6);
      if (cVar3 != '\0') {
        return 1;
      }
      uVar8 = *(undefined4 *)(param_2 + 0x9c);
    }
    cVar3 = FUN_1451540e0(uVar8,1);
    if (cVar3 != '\0') {
      return 1;
    }
    cVar3 = FUN_144341100(uVar8);
    if (cVar3 != '\0') {
      return 1;
    }
    cVar3 = FUN_141a0d7f0(*(undefined8 *)(param_1 + 0x20));
    if (cVar3 == '\0') {
      return 1;
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28);
    if ((lVar6 != 0) && (cVar3 = func_0x0001450e1330(lVar6,0xbd), cVar3 != '\0')) {
      return 0;
    }
    cVar3 = FUN_142533dd0(param_1,*(undefined4 *)(param_2 + 0x9c));
    goto LAB_1400b0ea4;
  }
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28);
  if (((((lVar6 != 0) && (cVar3 = func_0x0001450e1330(lVar6,0xbd), cVar3 == '\0')) &&
       (lVar6 = func_0x000145226dc0(uVar8), lVar6 != 0)) &&
      ((uVar1 = *(uint *)(lVar6 + 0x664), uVar1 != 0x1ffff &&
       (uVar2 = *(uint *)(_DAT_14abb6918[5] + (ulonglong)(uVar1 & 0x1ffff) * 4),
       (~uVar2 & *(uint *)(_DAT_14abb6918 + 6)) == 0)))) &&
     (((uVar2 & 0x7fe0000) == (uVar1 & 0xfffe0000) && (*_DAT_14abb6918 != 0)))) {
    cVar3 = FUN_142533dd0(param_1,uVar8,0);
    if (cVar3 == '\0') {
      return 1;
    }
    uVar8 = *(undefined4 *)(param_2 + 0x9c);
  }
  lVar6 = func_0x000144ef6280(uVar8);
  if (lVar6 != 0) {
    if ((*(byte *)(lVar6 + 0x61) & 1) != 0) {
      return 1;
    }
    if ((*(byte *)(lVar6 + 0xed) & 1) != 0) {
      return 1;
    }
    if (((*(byte *)(lVar6 + 0x85) & 0x40) != 0) || ((*(byte *)(lVar6 + 0x111) & 0x40) != 0)) {
      cVar3 = FUN_142533dd0(param_1,uVar8);
      if (cVar3 == '\0') {
        return 1;
      }
      uVar8 = *(undefined4 *)(param_2 + 0x9c);
    }
  }
  cVar3 = FUN_145451d40(uVar8,0x8d);
  cVar4 = FUN_144db8060();
  if (cVar4 == '\0') {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
    if ((~*(uint *)(param_2 + 0xa4) & 0x7ffe) != 0) {
      bVar5 = FUN_144d9d7a0(*(uint *)(param_2 + 0xa0),*(uint *)(param_2 + 0xa0) >> 0x10);
      bVar5 = bVar5 ^ 1;
    }
  }
  if (lVar6 == 0) {
    bVar7 = 0;
LAB_1400b0e8e:
    if ((cVar3 == '\0' && bVar5 == 0) && (bVar7 == 0)) {
      return 1;
    }
  }
  else if ((*(byte *)(lVar6 + 0x5c) & 2) == 0) {
    bVar7 = (*(byte *)(lVar6 + 0xe8) & 2) >> 1;
    goto LAB_1400b0e8e;
  }
  cVar3 = FUN_141a0d7f0(*(undefined8 *)(param_1 + 0x20));
LAB_1400b0ea4:
  if (cVar3 != '\0') {
    return 0;
  }
  return 1;
}

