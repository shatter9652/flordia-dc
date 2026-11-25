// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007aed0  size: 76 bytes
// Name:    FUN_14007aed0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e66270, FUN_14007af20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14007aed0(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  
  *(undefined1 *)(param_1 + 0x27e) = 0;
  iVar6 = FUN_144e66270(param_2);
  if (iVar6 == 0) {
    *(undefined1 *)(param_1 + 0x27e) = 1;
    return 0;
  }
  FUN_144e66270(param_2);
  lVar7 = FUN_14007af20(param_2);
  if ((((lVar7 != 0) && (*(uint *)(lVar7 + 9) < 0x31)) &&
      (uVar3 = *(uint *)(lVar7 + 5), uVar3 < 0x11)) && (*(uint *)(lVar7 + 0xd) < 5)) {
    *(undefined2 *)(param_1 + 0x274) = *(undefined2 *)(lVar7 + 0x21);
    *(char *)(param_1 + 0x279) = (char)uVar3;
    *(undefined1 *)(param_1 + 0x27c) = *(undefined1 *)(lVar7 + 9);
    cVar5 = (char)*(undefined4 *)(lVar7 + 0xd);
    *(char *)(param_1 + 0x27d) = cVar5;
    if (cVar5 != '\0') {
      uVar8 = 0;
      do {
        *(undefined1 *)(param_1 + 0x10 + uVar8) = *(undefined1 *)(lVar7 + 0x11 + uVar8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(byte *)(param_1 + 0x27d));
    }
    *(longlong *)(param_1 + 8) = lVar7 + 0x25;
    uVar3 = *(uint *)(lVar7 + 0x15);
    *(short *)(param_1 + 0x276) = (short)uVar3;
    bVar2 = *(byte *)(lVar7 + 0x19);
    *(byte *)(param_1 + 0x27a) = bVar2;
    if ((bVar2 < 0x41) &&
       (bVar2 = *(byte *)(lVar7 + 0x1d), *(byte *)(param_1 + 0x27b) = bVar2, bVar2 < 9)) {
      uVar8 = (ulonglong)(uVar3 & 0xffff);
      uVar3 = *(uint *)(lVar7 + 0x25 + (ulonglong)*(uint *)(lVar7 + 0x15));
      uVar12 = uVar3 & 0xff;
      *(char *)(param_1 + 0x278) = (char)uVar3;
      piVar1 = (int *)(lVar7 + 0x25 + uVar8 + 4 + (ulonglong)uVar12 * 4);
      iVar6 = *piVar1;
      lVar10 = (longlong)iVar6;
      *(int *)(param_1 + 0xd4) = iVar6;
      *(int *)(param_1 + 0x198) = iVar6;
      uVar4 = _DAT_145fc6ed8;
      if (0 < lVar10) {
        lVar13 = 0;
        lVar11 = lVar7 + 0x31 + uVar8 + (ulonglong)uVar12 * 4;
        do {
          iVar6 = *(int *)(lVar11 + -4 + lVar13 * 8);
          *(int *)(param_1 + 0x14 + lVar13 * 4) = iVar6;
          uVar14 = uVar4;
          if (iVar6 != 0x31ff1bc8) {
            uVar14 = *(undefined4 *)(lVar11 + lVar13 * 8);
          }
          *(undefined4 *)(param_1 + 0xd8 + lVar13 * 4) = uVar14;
          lVar13 = lVar13 + 1;
          lVar10 = (longlong)*(int *)(param_1 + 0xd4);
        } while (lVar13 < lVar10);
      }
      iVar6 = piVar1[lVar10 * 2 + 1];
      uVar9 = CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
      *(int *)(param_1 + 0x1ec) = iVar6;
      *(int *)(param_1 + 0x240) = iVar6;
      if (iVar6 < 1) {
        return uVar9;
      }
      lVar11 = 0;
      lVar7 = lVar7 + 0x35 + (ulonglong)uVar12 * 4 + lVar10 * 8 + uVar8;
      do {
        *(undefined4 *)(param_1 + 0x19c + lVar11 * 4) = *(undefined4 *)(lVar7 + -4 + lVar11 * 8);
        *(undefined4 *)(param_1 + 0x1f0 + lVar11 * 4) = *(undefined4 *)(lVar7 + lVar11 * 8);
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x1ec));
      return uVar9;
    }
  }
  *(undefined1 *)(param_1 + 0x27e) = 1;
  return 0;
}

