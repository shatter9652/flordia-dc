// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14014e530  size: 166 bytes
// Name:    FUN_14014e530
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14014e5e0, FUN_145009180
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14014e530(longlong param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(param_1 + 0x9c);
  cVar1 = func_0x000144e238f0(uVar6);
  if (cVar1 == '\0') {
    return 0;
  }
  lVar4 = FUN_145009180(uVar6);
  if (((lVar4 != 0) && (lVar4 = FUN_14014e5e0(lVar4,1), lVar4 != 0)) &&
     (*(longlong *)(lVar4 + 0x1c0) != 0)) {
    bVar2 = func_0x000142a90ac0(*(longlong *)(lVar4 + 0x1c0),*(undefined4 *)(lVar4 + 0x26c));
    uVar3 = func_0x000142aaa880();
    if (uVar3 <= bVar2) {
      if (param_2 == '\0') {
        return 0;
      }
      if (*(char *)(lVar4 + 0x26) != '\x01') {
        return 0;
      }
    }
  }
  lVar4 = func_0x000144ef6280(*(undefined4 *)(param_1 + 0x9c));
  if (lVar4 != 0) {
    if ((*(byte *)(lVar4 + 0x5f) & 4) != 0) {
      return 0;
    }
    if ((*(byte *)(lVar4 + 0xeb) & 4) != 0) {
      return 0;
    }
  }
  uVar6 = *(undefined4 *)(param_1 + 0x9c);
  lVar4 = func_0x000144fdf400(uVar6);
  if ((lVar4 != 0) && (cVar1 = func_0x000144eacc20(uVar6), cVar1 != '\0')) {
    lVar4 = func_0x000144f01400(uVar6);
    if (lVar4 != 0) {
      cVar1 = func_0x00014523a4c0(*(undefined8 *)(lVar4 + 0x68));
      if (cVar1 != '\0') {
        return 0;
      }
      uVar6 = *(undefined4 *)(param_1 + 0x9c);
    }
    lVar4 = func_0x000144db7b80(uVar6);
    if (lVar4 == 0) {
code_r0x00014523a473:
      uVar5 = FUN_14523a4d0(param_1);
      return uVar5 ^ 1;
    }
    cVar1 = FUN_144e3fa30(uVar6);
    if (cVar1 == '\0') {
      uVar3 = *(uint *)(lVar4 + 0x14);
      cVar1 = func_0x0001401781c0(uVar3);
      if (cVar1 != '\0') {
        return 0;
      }
      if ((uVar3 & 0x10) != 0) {
        return 0;
      }
      if ((-1 < *(int *)(lVar4 + 0x10)) && (cVar1 = FUN_144e71090(uVar6), cVar1 == '\0'))
      goto code_r0x00014523a473;
    }
  }
  return 0;
}

