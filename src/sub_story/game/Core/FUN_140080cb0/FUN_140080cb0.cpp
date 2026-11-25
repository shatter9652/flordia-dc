// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140080cb0  size: 149 bytes
// Name:    FUN_140080cb0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1400833d0, FUN_144ef60c0, FUN_144ef6160, FUN_1413ca6e0, FUN_144dd7510
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140080cb0(ulonglong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  byte bVar6;
  byte bVar7;
  longlong *plVar8;
  
  param_1 = param_1 & 0xfffffffffffffff0;
  plVar8 = param_2;
  cVar1 = FUN_144ef6160(param_1);
  bVar6 = (byte)plVar8;
  if (((cVar1 == '\0') && (cVar1 = FUN_144ef60c0(param_1), cVar1 == '\0')) ||
     ((lVar3 = FUN_144dd7510(*(undefined4 *)(param_1 + 0x9c)), lVar3 != 0 &&
      ((*(byte *)(lVar3 + 0xfa) < 7 && ((0x62U >> (*(byte *)(lVar3 + 0xfa) & 0x1f) & 1) != 0)))))) {
    return 0;
  }
  lVar3 = (**(code **)(*param_2 + 0x10))(param_2);
  if (lVar3 != 0) {
    uVar4 = FUN_1400833d0(lVar3);
    if ((char)uVar4 != '\0') {
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
      bVar2 = 1;
      bVar7 = 0;
      goto LAB_140080d3c;
    }
    uVar4 = FUN_1413ca6e0(param_1,lVar3);
    uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
    bVar2 = 1;
    bVar7 = 1;
    bVar6 = 1;
    if ((char)uVar4 != '\0') goto LAB_140080d3c;
  }
  bVar7 = bVar6;
  bVar2 = 0;
  uVar5 = 0;
LAB_140080d3c:
  return CONCAT71(uVar5,bVar2 & bVar7);
}

