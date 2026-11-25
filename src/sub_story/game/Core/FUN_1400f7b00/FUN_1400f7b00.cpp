// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1400f7b00  size: 84 bytes
// Name:    FUN_1400f7b00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140018d70, FUN_142275150
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400f7b00(longlong *param_1,uint param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ushort uVar3;
  longlong lVar4;
  uint *puVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  bool bVar17;
  
  if (*param_1 != 0) {
    if (*(uint *)(*param_1 + 0x30) == param_2) {
      return;
    }
    FUN_140018d70(param_1);
  }
  if (param_2 != 0) {
    FUN_142275150(param_1,param_2);
    lVar10 = *param_1;
    if (lVar10 != 0) {
      if ((param_2 == 0) ||
         (((uVar13 = (ulonglong)param_2, lVar10 == 0 || (*(uint *)(lVar10 + 0x30) != param_2)) &&
          (lVar10 = FUN_142274a20(uVar13), lVar10 == 0)))) {
        return;
      }
      lVar9 = _DAT_14800a0e8;
      if (*(uint *)(_DAT_14800a0e8 + 0x28) != 0) {
        for (puVar12 = *(uint **)(*(longlong *)(_DAT_14800a0e8 + 0x20) +
                                 (uVar13 % (ulonglong)*(uint *)(_DAT_14800a0e8 + 0x28)) * 8);
            puVar12 != (uint *)0x0; puVar12 = *(uint **)(puVar12 + 4)) {
          if (*puVar12 == param_2) {
            LOCK();
            puVar12[2] = puVar12[2] + 1;
            UNLOCK();
            return;
          }
        }
      }
      puVar2 = (ulonglong *)(_DAT_14800a0e8 + 0x50);
      FUN_140004b40(puVar2);
      if (*(uint *)(lVar9 + 0x28) != 0) {
        for (puVar12 = *(uint **)(*(longlong *)(lVar9 + 0x20) +
                                 (uVar13 % (ulonglong)*(uint *)(lVar9 + 0x28)) * 8);
            puVar12 != (uint *)0x0; puVar12 = *(uint **)(puVar12 + 4)) {
          if (*puVar12 == param_2) {
            LOCK();
            puVar12[2] = puVar12[2] + 1;
            UNLOCK();
            goto code_r0x0001422753eb;
          }
        }
      }
      FUN_142275410(lVar10);
      uVar3 = *(ushort *)(lVar10 + 0x28);
      if ((ulonglong)uVar3 != 0) {
        uVar16 = 0;
        do {
          FUN_142275960(*(undefined4 *)(*(longlong *)(lVar10 + 0x20) + uVar16 * 4));
          uVar16 = uVar16 + 1;
        } while (uVar3 != uVar16);
      }
      if (*(int *)(lVar10 + 0x40) != 0) {
        FUN_142275180(*(int *)(lVar10 + 0x40),0,0xffff);
      }
      uVar8 = *(uint *)(lVar9 + 0x28);
      if (uVar8 == 0) {
        uVar8 = func_0x0001400f6200(10);
        *(uint *)(lVar9 + 0x28) = uVar8;
        lVar10 = -1;
        if (-1 < (int)uVar8) {
          lVar10 = (ulonglong)uVar8 * 8;
        }
        uVar11 = func_0x000144f97130(lVar10);
        *(undefined8 *)(lVar9 + 0x20) = uVar11;
        if (uVar8 != 0) {
          uVar16 = 0;
          do {
            *(undefined8 *)(*(longlong *)(lVar9 + 0x20) + uVar16 * 8) = 0;
            uVar16 = uVar16 + 1;
          } while (uVar8 != uVar16);
        }
        bVar17 = false;
        *(undefined1 *)(lVar9 + 0x40) = 1;
      }
      else {
        bVar17 = *(char *)(lVar9 + 0x40) == '\0';
      }
      uVar14 = *(int *)(lVar9 + 0x30) + 1;
      *(uint *)(lVar9 + 0x30) = uVar14;
      if ((uVar14 != uVar8) || (bVar17)) {
        lVar10 = *(longlong *)(lVar9 + 0x20);
      }
      else {
        uVar14 = func_0x0001400f6200(uVar8);
        lVar10 = -1;
        if (-1 < (int)uVar14) {
          lVar10 = (ulonglong)uVar14 << 3;
        }
        lVar10 = func_0x000144f97130(lVar10);
        func_0x000145f40580(lVar10,0,(ulonglong)uVar14 << 3);
        lVar4 = *(longlong *)(lVar9 + 0x20);
        if (uVar8 != 0) {
          uVar16 = 0;
          do {
            puVar12 = *(uint **)(lVar4 + uVar16 * 8);
            while (puVar12 != (uint *)0x0) {
              puVar5 = *(uint **)(puVar12 + 4);
              *(undefined8 *)(puVar12 + 4) =
                   *(undefined8 *)(lVar10 + ((ulonglong)*puVar12 % (ulonglong)uVar14) * 8);
              *(uint **)(lVar10 + ((ulonglong)*puVar12 % (ulonglong)uVar14) * 8) = puVar12;
              puVar12 = puVar5;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != uVar8);
        }
        *(uint *)(lVar9 + 0x28) = uVar14;
        uVar8 = uVar14;
        if (lVar4 != 0) {
          func_0x000144d9c130();
          uVar8 = *(uint *)(lVar9 + 0x28);
        }
        *(longlong *)(lVar9 + 0x20) = lVar10;
      }
      lVar4 = *(longlong *)(lVar9 + 0x38);
      puVar12 = (uint *)0x0;
      if (lVar4 != 0) {
        puVar12 = *(uint **)(lVar4 + 0x10);
        if (puVar12 == (uint *)0x0) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = *(undefined8 *)(lVar10 + (uVar13 % (ulonglong)uVar8) * 8);
        *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)puVar12;
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        *puVar12 = param_2;
        puVar12[1] = 0;
        puVar12[2] = 1;
        *(undefined1 *)(puVar12 + 3) = 0;
        *(undefined8 *)(puVar12 + 4) = uVar11;
      }
      *(uint **)(*(longlong *)(lVar9 + 0x20) + (uVar13 % (ulonglong)uVar8) * 8) = puVar12;
code_r0x0001422753eb:
      uVar13 = *puVar2;
      piVar1 = (int *)(lVar9 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        do {
          uVar16 = uVar13;
          LOCK();
          uVar13 = *puVar2;
          if (uVar16 == uVar13) {
            *puVar2 = (ulonglong)((int)uVar16 - 1) | 0xffffffff00000000;
            uVar13 = uVar16;
          }
          UNLOCK();
        } while (uVar16 != uVar13);
        if ((uVar16 & 0xfffffffe) != 0) {
          plVar15 = (longlong *)(lVar9 + 0x58);
          lVar10 = *(longlong *)(lVar9 + 0x58);
          do {
            while (lVar10 < 0) {
              cVar7 = FUN_1400062d0(plVar15,1,&stack0xffffffffffffffe0);
              if (cVar7 != '\0') {
                return;
              }
            }
            LOCK();
            lVar9 = *plVar15;
            if (lVar10 == lVar9) {
              *plVar15 = lVar10 + 0x100000000;
              lVar9 = lVar10;
            }
            UNLOCK();
            bVar17 = lVar10 != lVar9;
            lVar10 = lVar9;
          } while (bVar17);
          return;
        }
      }
      return;
    }
  }
  return;
}

