// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140127cd0  size: 197 bytes
// Name:    FUN_140127cd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1451cca70
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


ulonglong FUN_140127cd0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  *(undefined8 *)(param_1 + 0x88) = 0xffffffffffffffff;
  uVar3 = *(ushort *)(param_1 + 0x80);
  if (uVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x78);
    uVar7 = (uint)uVar3;
    uVar11 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar5 + uVar11 * 8) + 0x54) != 6) {
        uVar10 = (uint)uVar11;
        *(uint *)(param_1 + 0x88) = uVar10;
        if (uVar10 < uVar7) {
          uVar9 = uVar10 + 1;
          uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
          *(uint *)(param_1 + 0x8c) = uVar10;
          if ((int)uVar7 <= (int)uVar9) goto LAB_140127d20;
          if (*(char *)(param_1 + 0x90) == '\0') goto LAB_140127d69;
          lVar5 = *(longlong *)(lVar5 + (ulonglong)uVar9 * 8);
          iVar4 = *(int *)(lVar5 + 0x54);
          if ((iVar4 == 5) ||
             ((iVar4 == 4 && (cVar6 = FUN_1451cca70(*(undefined2 *)(lVar5 + 0x50)), cVar6 != '\0')))
             ) goto LAB_140127d8d;
          goto LAB_140127d20;
        }
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar7 != uVar11);
  }
  uVar8 = 0;
LAB_140127d20:
  return uVar8 & 0xffffffff;
LAB_140127d69:
  do {
    lVar2 = uVar11 * 8;
    uVar1 = uVar11 + 2;
    uVar11 = uVar11 + 1;
  } while (*(int *)(*(longlong *)(lVar5 + 8 + lVar2) + 0x54) == 6 && uVar1 < uVar3);
  uVar9 = (uint)uVar11;
LAB_140127d8d:
  *(uint *)(param_1 + 0x8c) = uVar9;
  goto LAB_140127d20;
}

