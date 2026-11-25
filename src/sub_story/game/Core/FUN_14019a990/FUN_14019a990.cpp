// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a990  size: 415 bytes
// Name:    FUN_14019a990
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019a990(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  
  do {
    LOCK();
    bVar11 = *(char *)(param_1 + 0x3a) == '\0';
    if (bVar11) {
      *(char *)(param_1 + 0x3a) = '\x01';
    }
    UNLOCK();
  } while (!bVar11);
  if ((param_2 != 0) && (uVar2 = *(uint *)(param_1 + 8), uVar2 != 0)) {
    uVar8 = (param_2 >> 0x21 ^ param_2) * -0xae502812aa7333;
    lVar9 = *(longlong *)(param_1 + 0x10);
    lVar6 = (uVar8 >> 0x21 ^ uVar8) * -0x3b314601e57a13ad;
    uVar4 = uVar2 - 1;
    uVar5 = (ulonglong)(((uint)((ulonglong)lVar6 >> 0x21) ^ (uint)lVar6) & uVar4);
    uVar8 = *(ulonglong *)(lVar9 + uVar5 * 8);
    if (uVar8 != param_2 && uVar8 != 0) {
      do {
        uVar5 = (ulonglong)((uint)(uVar5 * 8 + 8 >> 3) & uVar4);
        uVar8 = *(ulonglong *)(lVar9 + uVar5 * 8);
      } while (uVar8 != 0 && uVar8 != param_2);
    }
    if (uVar8 != 0) {
      puVar3 = (ulonglong *)(lVar9 + uVar5 * 8);
      uVar5 = (ulonglong)(uVar4 & (uint)((ulonglong)((longlong)puVar3 + (8 - lVar9)) >> 3));
      uVar8 = *(ulonglong *)(lVar9 + uVar5 * 8);
      if (uVar8 != 0) {
        puVar7 = (ulonglong *)(lVar9 + uVar5 * 8);
        do {
          uVar5 = (uVar8 >> 0x21 ^ uVar8) * -0xae502812aa7333;
          uVar4 = uVar2 - 1;
          lVar6 = (uVar5 >> 0x21 ^ uVar5) * -0x3b314601e57a13ad;
          puVar1 = (ulonglong *)
                   (lVar9 + (ulonglong)(((uint)((ulonglong)lVar6 >> 0x21) ^ (uint)lVar6) & uVar4) *
                            8);
          uVar5 = 0;
          if (puVar3 < puVar1) {
            uVar5 = (ulonglong)uVar2;
          }
          uVar10 = (ulonglong)uVar2;
          if (puVar1 <= puVar7) {
            uVar10 = 0;
          }
          if ((uint)((longlong)puVar3 + (uVar5 * 8 - (longlong)puVar1) >> 3) <
              (uint)((longlong)puVar7 + (uVar10 * 8 - (longlong)puVar1) >> 3)) {
            *puVar3 = uVar8;
            uVar2 = *(uint *)(param_1 + 8);
            lVar9 = *(longlong *)(param_1 + 0x10);
            uVar4 = uVar2 - 1;
            puVar3 = puVar7;
          }
          puVar7 = (ulonglong *)
                   (lVar9 + (ulonglong)
                            (uVar4 & (uint)((ulonglong)((longlong)puVar7 + (8 - lVar9)) >> 3)) * 8);
          uVar8 = *puVar7;
        } while (uVar8 != 0);
      }
      *puVar3 = 0;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
  }
  *(undefined1 *)(param_1 + 0x3a) = 0;
  return;
}

