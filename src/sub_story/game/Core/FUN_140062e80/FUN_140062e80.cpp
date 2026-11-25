// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062e80  size: 57 bytes
// Name:    FUN_140062e80
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ea39f0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140062e80(undefined8 *param_1)

{
  int *piVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  char cVar7;
  longlong lVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  bool bVar16;
  longlong lVar17;
  
  FUN_144ea39f0();
  puVar3 = (undefined8 *)param_1[8];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 2);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *param_1 = &UNK_14668b560;
  FUN_144ea34a0();
  *param_1 = &UNK_14668b4c0;
  FUN_144ea34c0();
  puVar4 = (undefined4 *)param_1[5];
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  if (puVar4 != (undefined4 *)0x0) {
    if (((undefined4 *)CONCAT44(uRam0000000149e47724,_DAT_149e47720) <= puVar4) &&
       (puVar4 < (undefined4 *)
                 ((longlong)CONCAT44(uRam0000000149e47724,_DAT_149e47720) +
                 (ulonglong)(uint)(_DAT_149e47728 * 0x5000)))) {
      puVar9 = (undefined2 *)func_0x0001455cfab0();
      uVar2 = puVar9[2];
      if (uVar2 < uRam0000000149e476f4) {
        puVar12 = (ulonglong *)((ulonglong)uVar2 * 8 + lRam0000000149e47708);
        uVar15 = (int)puVar4 - _DAT_149e47720;
        uVar10 = *puVar12;
        do {
          *puVar4 = (int)uVar10;
          LOCK();
          uVar11 = *puVar12;
          bVar16 = uVar10 == uVar11;
          if (bVar16) {
            *puVar12 = (uVar10 & 0xffffffff00000000 | (ulonglong)uVar15) + 0x100000000;
            uVar11 = uVar10;
          }
          UNLOCK();
          uVar10 = uVar11;
        } while (!bVar16);
        return;
      }
      plVar13 = (longlong *)
                ((ulonglong)(uVar2 - uRam0000000149e476f4) * 0x28 + lRam0000000149e47710);
      puVar12 = (ulonglong *)(plVar13 + 1);
      FUN_140004b40(puVar12);
      func_0x000144f845b0(puVar9);
      puVar5 = (undefined2 *)*plVar13;
      if (*(uint *)(puVar9 + 6) == (uint)(ushort)puVar9[5]) {
        if (puVar5 == puVar9) {
          *plVar13 = *(longlong *)(puVar5 + 8);
        }
        else {
          lVar17 = *(longlong *)(puVar9 + 8);
          lVar8 = *(longlong *)(puVar9 + 0xc);
          if (lVar8 != 0) {
            *(longlong *)(lVar8 + 0x10) = lVar17;
            *(undefined8 *)(puVar9 + 0xc) = 0;
          }
          if (lVar17 != 0) {
            *(longlong *)(lVar17 + 0x18) = lVar8;
            *(undefined8 *)(puVar9 + 8) = 0;
          }
        }
        uVar15 = (int)puVar9 - _DAT_149e47720;
        uVar10 = (ulonglong)_DAT_149e4772c;
        uVar11 = _DAT_149e47718;
        do {
          *puVar9 = (short)(uVar11 >> 0x20);
          LOCK();
          bVar16 = uVar11 != _DAT_149e47718;
          uVar6 = (ulonglong)((int)uVar11 + 1) |
                  (uVar11 & 0xffff000000000000 | (uVar15 / uVar10 & 0xffff) << 0x20) +
                  0x1000000000000;
          if (bVar16) {
            uVar11 = _DAT_149e47718;
            uVar6 = _DAT_149e47718;
          }
          _DAT_149e47718 = uVar6;
          UNLOCK();
        } while (bVar16);
      }
      else if (puVar5 != puVar9) {
        lVar17 = *(longlong *)(puVar9 + 8);
        lVar8 = *(longlong *)(puVar9 + 0xc);
        if (lVar8 != 0) {
          *(longlong *)(lVar8 + 0x10) = lVar17;
          *(undefined8 *)(puVar9 + 0xc) = 0;
        }
        if (lVar17 != 0) {
          *(longlong *)(lVar17 + 0x18) = lVar8;
        }
        if (puVar5 != (undefined2 *)0x0) {
          *(undefined2 **)(puVar5 + 0xc) = puVar9;
        }
        *(undefined2 **)(puVar9 + 8) = puVar5;
        *plVar13 = (longlong)puVar9;
      }
      plVar14 = plVar13 + 3;
      *(int *)plVar14 = (int)*plVar14 + -1;
      uVar10 = *puVar12;
      if ((int)*plVar14 == 0) {
        do {
          uVar11 = uVar10;
          LOCK();
          uVar10 = *puVar12;
          if (uVar11 == uVar10) {
            *puVar12 = (ulonglong)((int)uVar11 - 1) | 0xffffffff00000000;
            uVar10 = uVar11;
          }
          UNLOCK();
        } while (uVar11 != uVar10);
        if ((uVar11 & 0xfffffffe) != 0) {
          plVar14 = plVar13 + 2;
          lVar17 = plVar13[2];
          do {
            while (lVar17 < 0) {
              cVar7 = FUN_1400062d0(plVar14,1,&stack0xffffffffffffffe0);
              if (cVar7 != '\0') {
                return;
              }
            }
            LOCK();
            lVar8 = *plVar14;
            if (lVar17 == lVar8) {
              *plVar14 = lVar17 + 0x100000000;
              lVar8 = lVar17;
            }
            UNLOCK();
            bVar16 = lVar17 != lVar8;
            lVar17 = lVar8;
          } while (bVar16);
          return;
        }
      }
      return;
    }
    if (_DAT_149e47980 != (code *)0x0) {
      (*_DAT_149e47980)();
    }
  }
  return;
}

