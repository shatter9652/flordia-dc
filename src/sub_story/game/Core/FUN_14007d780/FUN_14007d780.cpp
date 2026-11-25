// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14007d780  size: 57 bytes
// Name:    FUN_14007d780
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1408422e0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14007d780(longlong param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uVar14;
  
  *(undefined1 *)(param_1 + 0x27e) = 0;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x27e) = 1;
    return 0;
  }
  lVar9 = FUN_1408422e0(param_2);
  if ((((lVar9 != 0) && (*(uint *)(lVar9 + 9) < 0x31)) &&
      (uVar3 = *(uint *)(lVar9 + 5), uVar3 < 0x11)) && (*(uint *)(lVar9 + 0xd) < 5)) {
    *(undefined2 *)(param_1 + 0x274) = *(undefined2 *)(lVar9 + 0x21);
    *(char *)(param_1 + 0x279) = (char)uVar3;
    *(undefined1 *)(param_1 + 0x27c) = *(undefined1 *)(lVar9 + 9);
    cVar6 = (char)*(undefined4 *)(lVar9 + 0xd);
    *(char *)(param_1 + 0x27d) = cVar6;
    if (cVar6 != '\0') {
      uVar7 = 0;
      do {
        *(undefined1 *)(param_1 + 0x10 + uVar7) = *(undefined1 *)(lVar9 + 0x11 + uVar7);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(byte *)(param_1 + 0x27d));
    }
    *(longlong *)(param_1 + 8) = lVar9 + 0x25;
    uVar3 = *(uint *)(lVar9 + 0x15);
    *(short *)(param_1 + 0x276) = (short)uVar3;
    bVar2 = *(byte *)(lVar9 + 0x19);
    *(byte *)(param_1 + 0x27a) = bVar2;
    if ((bVar2 < 0x41) &&
       (bVar2 = *(byte *)(lVar9 + 0x1d), *(byte *)(param_1 + 0x27b) = bVar2, bVar2 < 9)) {
      uVar7 = (ulonglong)(uVar3 & 0xffff);
      uVar3 = *(uint *)(lVar9 + 0x25 + (ulonglong)*(uint *)(lVar9 + 0x15));
      uVar12 = uVar3 & 0xff;
      *(char *)(param_1 + 0x278) = (char)uVar3;
      piVar1 = (int *)(lVar9 + 0x25 + uVar7 + 4 + (ulonglong)uVar12 * 4);
      iVar4 = *piVar1;
      lVar10 = (longlong)iVar4;
      *(int *)(param_1 + 0xd4) = iVar4;
      *(int *)(param_1 + 0x198) = iVar4;
      uVar5 = _DAT_145fc6ed8;
      if (0 < lVar10) {
        lVar13 = 0;
        lVar11 = lVar9 + 0x31 + uVar7 + (ulonglong)uVar12 * 4;
        do {
          iVar4 = *(int *)(lVar11 + -4 + lVar13 * 8);
          *(int *)(param_1 + 0x14 + lVar13 * 4) = iVar4;
          uVar14 = uVar5;
          if (iVar4 != 0x31ff1bc8) {
            uVar14 = *(undefined4 *)(lVar11 + lVar13 * 8);
          }
          *(undefined4 *)(param_1 + 0xd8 + lVar13 * 4) = uVar14;
          lVar13 = lVar13 + 1;
          lVar10 = (longlong)*(int *)(param_1 + 0xd4);
        } while (lVar13 < lVar10);
      }
      iVar4 = piVar1[lVar10 * 2 + 1];
      uVar8 = CONCAT71((int7)((ulonglong)piVar1 >> 8),1);
      *(int *)(param_1 + 0x1ec) = iVar4;
      *(int *)(param_1 + 0x240) = iVar4;
      if (iVar4 < 1) {
        return uVar8;
      }
      lVar11 = 0;
      lVar9 = lVar9 + 0x35 + (ulonglong)uVar12 * 4 + lVar10 * 8 + uVar7;
      do {
        *(undefined4 *)(param_1 + 0x19c + lVar11 * 4) = *(undefined4 *)(lVar9 + -4 + lVar11 * 8);
        *(undefined4 *)(param_1 + 0x1f0 + lVar11 * 4) = *(undefined4 *)(lVar9 + lVar11 * 8);
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x1ec));
      return uVar8;
    }
  }
  *(undefined1 *)(param_1 + 0x27e) = 1;
  return 0;
}

