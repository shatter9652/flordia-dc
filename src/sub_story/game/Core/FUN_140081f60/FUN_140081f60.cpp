// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140081f60  size: 917 bytes
// Name:    FUN_140081f60
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


undefined8 FUN_140081f60(uint *param_1,undefined1 *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  undefined8 uVar5;
  uint *puVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar2 = param_1[1];
  if ((((uVar2 == 0) ||
       (uVar3 = func_0x00014376f600(*(undefined4 *)(param_2 + 8)),
       (uVar2 >> (uVar3 & 0x1f) & 1) != 0)) &&
      ((uVar2 = *param_1, uVar2 == 0 ||
       (uVar3 = func_0x000144ef3280(*(undefined4 *)(param_2 + 4)),
       (uVar2 >> (uVar3 & 0x1f) & 1) != 0)))) &&
     ((uVar2 = param_1[2], uVar2 == 0 ||
      (uVar3 = func_0x000144dda2e0(*param_2), (uVar2 >> (uVar3 & 0x1f) & 1) != 0)))) {
    piVar4 = (int *)0x0;
    if ((ulonglong)param_1[5] == 0) {
LAB_14008218f:
      if ((ulonglong)param_1[9] != 0) {
        piVar4 = *(int **)(param_1 + 10);
        lVar9 = *(longlong *)(param_2 + 0x18);
        lVar10 = *(longlong *)(param_2 + 0x20);
        uVar2 = *(uint *)(*(longlong *)(param_2 + 0x10) + 4);
        piVar7 = piVar4 + param_1[9];
        do {
          if (uVar2 != 0) {
            lVar12 = 0;
            do {
              if (*(int *)(*(longlong *)(param_2 + 0x10) + 8 + lVar12) == *piVar4)
              goto LAB_140082235;
              lVar12 = lVar12 + 4;
            } while ((ulonglong)uVar2 << 2 != lVar12);
          }
          if ((lVar9 != 0) && ((ulonglong)*(uint *)(lVar9 + 4) != 0)) {
            lVar12 = 0;
            do {
              if (*(int *)(*(longlong *)(lVar9 + 8) + lVar12) == *piVar4) goto LAB_140082235;
              lVar12 = lVar12 + 4;
            } while ((ulonglong)*(uint *)(lVar9 + 4) << 2 != lVar12);
          }
          if (lVar10 == 0) {
            return 0;
          }
          if ((ulonglong)*(uint *)(lVar10 + 4) == 0) {
            return 0;
          }
          lVar12 = 0;
          while (*(int *)(*(longlong *)(lVar10 + 8) + lVar12) != *piVar4) {
            lVar12 = lVar12 + 4;
            if ((ulonglong)*(uint *)(lVar10 + 4) << 2 == lVar12) {
              return 0;
            }
          }
LAB_140082235:
          piVar4 = piVar4 + 1;
        } while (piVar4 != piVar7);
      }
      uVar5 = CONCAT71((int7)((ulonglong)piVar4 >> 8),1);
      if ((ulonglong)param_1[0xd] == 0) {
        return uVar5;
      }
      piVar7 = *(int **)(param_1 + 0xe);
      lVar9 = *(longlong *)(param_2 + 0x18);
      lVar10 = *(longlong *)(param_2 + 0x20);
      uVar2 = *(uint *)(*(longlong *)(param_2 + 0x10) + 4);
      piVar4 = piVar7 + param_1[0xd];
      do {
        if (uVar2 != 0) {
          lVar12 = 0;
          do {
            if (*(int *)(*(longlong *)(param_2 + 0x10) + 8 + lVar12) == *piVar7) {
              return 0;
            }
            lVar12 = lVar12 + 4;
          } while ((ulonglong)uVar2 << 2 != lVar12);
        }
        if ((lVar9 != 0) && ((ulonglong)*(uint *)(lVar9 + 4) != 0)) {
          lVar12 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar9 + 8) + lVar12) == *piVar7) {
              return 0;
            }
            lVar12 = lVar12 + 4;
          } while ((ulonglong)*(uint *)(lVar9 + 4) << 2 != lVar12);
        }
        if ((lVar10 != 0) && ((ulonglong)*(uint *)(lVar10 + 4) != 0)) {
          lVar12 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar10 + 8) + lVar12) == *piVar7) {
              return 0;
            }
            lVar12 = lVar12 + 4;
          } while ((ulonglong)*(uint *)(lVar10 + 4) << 2 != lVar12);
        }
        piVar7 = piVar7 + 1;
      } while (piVar7 != piVar4);
      return uVar5;
    }
    lVar9 = *(longlong *)(param_2 + 0x10);
    puVar6 = *(uint **)(param_1 + 6);
    lVar10 = *(longlong *)(param_2 + 0x18);
    lVar12 = *(longlong *)(param_2 + 0x20);
    uVar2 = *(uint *)(lVar9 + 4);
    puVar1 = puVar6 + param_1[5];
    lVar8 = (ulonglong)uVar2 << 2;
    if (lVar10 == 0) {
      if (lVar12 != 0) {
        do {
          if (uVar2 != 0) {
            piVar4 = (int *)(ulonglong)*puVar6;
            lVar10 = 0;
            do {
              if (*(uint *)(lVar9 + 8 + lVar10) == *puVar6) goto LAB_14008218f;
              lVar10 = lVar10 + 4;
            } while (lVar8 != lVar10);
          }
          if ((ulonglong)*(uint *)(lVar12 + 4) != 0) {
            piVar4 = (int *)((ulonglong)*(uint *)(lVar12 + 4) << 2);
            piVar7 = (int *)0x0;
            do {
              if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)piVar7) == *puVar6)
              goto LAB_14008218f;
              piVar7 = piVar7 + 1;
            } while (piVar4 != piVar7);
          }
          puVar6 = puVar6 + 1;
          if (puVar6 == puVar1) {
            return 0;
          }
        } while( true );
      }
      if (uVar2 != 0) {
        do {
          piVar4 = (int *)(ulonglong)*puVar6;
          lVar10 = 0;
          do {
            if (*(uint *)(lVar9 + 8 + lVar10) == *puVar6) goto LAB_14008218f;
            lVar10 = lVar10 + 4;
          } while (lVar8 != lVar10);
          puVar6 = puVar6 + 1;
          if (puVar6 == puVar1) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      if (lVar12 != 0) {
        do {
          if (uVar2 != 0) {
            piVar4 = (int *)(ulonglong)*puVar6;
            lVar11 = 0;
            do {
              if (*(uint *)(lVar9 + 8 + lVar11) == *puVar6) goto LAB_14008218f;
              lVar11 = lVar11 + 4;
            } while (lVar8 != lVar11);
          }
          if ((ulonglong)*(uint *)(lVar10 + 4) != 0) {
            piVar4 = (int *)((ulonglong)*(uint *)(lVar10 + 4) << 2);
            piVar7 = (int *)0x0;
            do {
              if (*(uint *)(*(longlong *)(lVar10 + 8) + (longlong)piVar7) == *puVar6)
              goto LAB_14008218f;
              piVar7 = piVar7 + 1;
            } while (piVar4 != piVar7);
          }
          if ((ulonglong)*(uint *)(lVar12 + 4) != 0) {
            piVar4 = (int *)((ulonglong)*(uint *)(lVar12 + 4) << 2);
            piVar7 = (int *)0x0;
            do {
              if (*(uint *)(*(longlong *)(lVar12 + 8) + (longlong)piVar7) == *puVar6)
              goto LAB_14008218f;
              piVar7 = piVar7 + 1;
            } while (piVar4 != piVar7);
          }
          puVar6 = puVar6 + 1;
          if (puVar6 == puVar1) {
            return 0;
          }
        } while( true );
      }
      if (uVar2 != 0) {
        do {
          uVar2 = *puVar6;
          piVar4 = (int *)(ulonglong)uVar2;
          lVar12 = 0;
          do {
            if (*(uint *)(lVar9 + 8 + lVar12) == uVar2) goto LAB_14008218f;
            lVar12 = lVar12 + 4;
          } while (lVar8 != lVar12);
          if ((ulonglong)*(uint *)(lVar10 + 4) != 0) {
            lVar12 = 0;
            do {
              if (*(uint *)(*(longlong *)(lVar10 + 8) + lVar12) == uVar2) goto LAB_14008218f;
              lVar12 = lVar12 + 4;
            } while ((ulonglong)*(uint *)(lVar10 + 4) << 2 != lVar12);
          }
          puVar6 = puVar6 + 1;
          if (puVar6 == puVar1) {
            return 0;
          }
        } while( true );
      }
      if ((ulonglong)*(uint *)(lVar10 + 4) != 0) {
        do {
          piVar4 = (int *)(ulonglong)*puVar6;
          lVar9 = 0;
          do {
            if (*(uint *)(*(longlong *)(lVar10 + 8) + lVar9) == *puVar6) goto LAB_14008218f;
            lVar9 = lVar9 + 4;
          } while ((ulonglong)*(uint *)(lVar10 + 4) << 2 != lVar9);
          puVar6 = puVar6 + 1;
          if (puVar6 == puVar1) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}

