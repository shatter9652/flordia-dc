// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077e60  size: 286 bytes
// Name:    FUN_140077e60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140512e20
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140077e60(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  if ((_DAT_14a922f30 != 0) && (uVar2 = *(ulonglong *)(param_1 + 0x60), uVar2 != 0)) {
    if ((*(char *)(_DAT_14a922f30 + 0x20) == '\x01') && (*(char *)(_DAT_14a922f30 + 0x21) != '\x01')
       ) {
      iVar7 = 0;
      iVar9 = *(int *)(_DAT_14a922f30 + 0x14) + -1;
      if (iVar9 < 0) {
        return 0;
      }
      do {
        uVar6 = (uint)(iVar7 + iVar9) >> 1;
        uVar8 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922f30 + 0x18) + (ulonglong)uVar6 * 4);
        uVar12 = _DAT_14ab83ec0 + uVar8;
        if (uVar8 != 0) {
          uVar8 = uVar12;
        }
        if (*(ulonglong *)(uVar8 + 0x20) == uVar2) goto LAB_140077f13;
        if (*(ulonglong *)(uVar8 + 0x20) < uVar2) {
          iVar7 = uVar6 + 1;
        }
        else {
          iVar9 = uVar6 - 1;
        }
      } while (iVar7 <= iVar9);
    }
    else if ((ulonglong)*(uint *)(_DAT_14a922f30 + 0x14) != 0) {
      lVar11 = 0;
      do {
        uVar8 = (ulonglong)*(uint *)(*(longlong *)(_DAT_14a922f30 + 0x18) + lVar11);
        uVar12 = _DAT_14ab83ec0 + uVar8;
        if (uVar8 != 0) {
          uVar8 = uVar12;
        }
        if (*(ulonglong *)(uVar8 + 0x20) == uVar2) goto LAB_140077f13;
        lVar11 = lVar11 + 4;
      } while ((ulonglong)*(uint *)(_DAT_14a922f30 + 0x14) << 2 != lVar11);
    }
  }
  return 0;
LAB_140077f13:
  if (uVar12 == 0) {
    return 0;
  }
  if (*(char *)(uVar12 + 0x19) != '\x01') {
    return 0;
  }
  lVar11 = func_0x0001401ec9a0(*(undefined8 *)(uVar12 + 0x10));
  piVar5 = *(int **)(lVar11 + 8);
  uVar2 = (ulonglong)*(uint *)(lVar11 + 4);
  piVar10 = piVar5;
  if (uVar2 == 0) {
LAB_140077f64:
    if (piVar10 != piVar5 + uVar2) {
      uVar3 = FUN_140512e20(*(undefined4 *)(param_1 + 0x5c));
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      piVar5 = (int *)(ulonglong)(byte)((byte)uVar3 ^ 1);
      goto LAB_140077f5d;
    }
  }
  else {
    lVar11 = uVar2 * 4;
    do {
      if (*piVar10 == 0xabe4d46) goto LAB_140077f64;
      piVar10 = piVar10 + 1;
      lVar11 = lVar11 + -4;
    } while (lVar11 != 0);
  }
  bVar1 = 0;
  uVar4 = 0;
LAB_140077f5d:
  return CONCAT71(uVar4,bVar1 & (byte)piVar5);
}

