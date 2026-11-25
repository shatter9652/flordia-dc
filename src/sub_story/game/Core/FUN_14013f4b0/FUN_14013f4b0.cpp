// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14013f4b0  size: 472 bytes
// Name:    FUN_14013f4b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144fac3c0, FUN_1454c26e0, FUN_144f65d90, FUN_140004b40, FUN_142bdbe50, FUN_144e96700
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_14013f4b0(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  cVar1 = (char)param_4;
  if (((cVar1 != '\x03') && ((param_4 & 0xff) != 0)) || (*(longlong *)(param_1 + 8) == param_3)) {
    uVar9 = 0;
    goto LAB_14013f623;
  }
  FUN_140004b40(0x147c17c70);
  lVar5 = (ulonglong)((uint)DAT_1492e3528 * 2) * 3;
  bVar7 = *(byte *)(param_3 + 0x18 + lVar5);
  if ((((bVar7 == 0x1e) && (bVar7 = *(byte *)(param_3 + 0x19 + lVar5), bVar7 == 0x1e)) &&
      ((bVar7 = *(byte *)(param_3 + 0x1a + lVar5), bVar7 == 0x1e &&
       ((bVar7 = *(byte *)(param_3 + 0x1b + lVar5), bVar7 == 0x1e &&
        (bVar7 = *(byte *)(param_3 + 0x1c + lVar5), bVar7 == 0x1e)))))) &&
     (bVar7 = *(byte *)(param_3 + 0x1d + lVar5), bVar7 == 0x1e)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_3 + 0xa0 + (ulonglong)bVar7 * 8);
  }
  if ((ulonglong)*(ushort *)(param_1 + 0x20) != 0) {
    uVar9 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 8);
      if ((*(longlong *)(lVar3 + 8) == lVar5) && (*(char *)(lVar3 + 0x18) == cVar1)) {
        FUN_142bdbe50(param_2);
        goto LAB_14013f614;
      }
      uVar9 = uVar9 + 1;
    } while (*(ushort *)(param_1 + 0x20) != uVar9);
  }
  cVar2 = FUN_1454c26e0(lVar5,param_1,param_4);
  if (cVar2 == '\0') {
    lVar3 = FUN_144e96700(0x147c17ca8);
    if (lVar3 == 0) {
      uVar6 = func_0x000144fc99c0(0,0);
      lVar3 = FUN_144fac3c0(uVar6,0x20,0x10);
      if (lVar3 != 0) goto LAB_14013f5a1;
      lVar3 = 0;
    }
    else {
LAB_14013f5a1:
      FUN_144f65d90(lVar3,param_1,param_2,lVar5,cVar1);
    }
    uVar8 = *(ushort *)(param_1 + 0x20);
    lVar5 = *(longlong *)(param_1 + 0x18);
    if (uVar8 == *(ushort *)(param_1 + 0x22)) {
      lVar4 = func_0x000144d9c140(8,(uint)uVar8 * 8 + 0x80);
      if (uVar8 != 0) {
        func_0x000145f40560(lVar4,lVar5,(ulonglong)uVar8 << 3);
      }
      if (lVar5 != 0) {
        func_0x000144d9c130(lVar5);
      }
      *(ushort *)(param_1 + 0x22) = uVar8 + 0x10;
      *(longlong *)(param_1 + 0x18) = lVar4;
      uVar8 = *(ushort *)(param_1 + 0x20);
      lVar5 = lVar4;
    }
    *(ushort *)(param_1 + 0x20) = uVar8 + 1;
    *(longlong *)(lVar5 + (ulonglong)uVar8 * 8) = lVar3;
LAB_14013f614:
    uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar9 = 0;
  }
  func_0x000144d9dab0(0x147c17c70);
LAB_14013f623:
  return uVar9 & 0xffffffff;
}

