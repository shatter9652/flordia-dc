// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140062ec0  size: 85 bytes
// Name:    FUN_140062ec0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ea3a30
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140062ec0(undefined8 *param_1)

{
  int *piVar1;
  ushort uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  ulonglong uVar5;
  char cVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  uint uVar14;
  bool bVar15;
  longlong lVar16;
  
  *param_1 = &UNK_146678080;
  FUN_144ea3a30();
  lVar16 = param_1[9];
  if (lVar16 != 0) {
    LOCK();
    piVar1 = (int *)(lVar16 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      func_0x000144e3f350(lVar16);
      func_0x000144d9c130(lVar16,0x40);
    }
  }
  func_0x000144e2aa90(param_1 + 8);
  *param_1 = &UNK_14668b4c0;
  FUN_144ea34c0();
  puVar3 = (undefined4 *)param_1[5];
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  if (puVar3 != (undefined4 *)0x0) {
    if (((undefined4 *)CONCAT44(uRam0000000149e47724,_DAT_149e47720) <= puVar3) &&
       (puVar3 < (undefined4 *)
                 ((longlong)CONCAT44(uRam0000000149e47724,_DAT_149e47720) +
                 (ulonglong)(uint)(_DAT_149e47728 * 0x5000)))) {
      puVar8 = (undefined2 *)func_0x0001455cfab0();
      uVar2 = puVar8[2];
      if (uVar2 < uRam0000000149e476f4) {
        puVar11 = (ulonglong *)((ulonglong)uVar2 * 8 + lRam0000000149e47708);
        uVar14 = (int)puVar3 - _DAT_149e47720;
        uVar9 = *puVar11;
        do {
          *puVar3 = (int)uVar9;
          LOCK();
          uVar10 = *puVar11;
          bVar15 = uVar9 == uVar10;
          if (bVar15) {
            *puVar11 = (uVar9 & 0xffffffff00000000 | (ulonglong)uVar14) + 0x100000000;
            uVar10 = uVar9;
          }
          UNLOCK();
          uVar9 = uVar10;
        } while (!bVar15);
        return;
      }
      plVar12 = (longlong *)
                ((ulonglong)(uVar2 - uRam0000000149e476f4) * 0x28 + lRam0000000149e47710);
      puVar11 = (ulonglong *)(plVar12 + 1);
      FUN_140004b40(puVar11);
      func_0x000144f845b0(puVar8);
      puVar4 = (undefined2 *)*plVar12;
      if (*(uint *)(puVar8 + 6) == (uint)(ushort)puVar8[5]) {
        if (puVar4 == puVar8) {
          *plVar12 = *(longlong *)(puVar4 + 8);
        }
        else {
          lVar16 = *(longlong *)(puVar8 + 8);
          lVar7 = *(longlong *)(puVar8 + 0xc);
          if (lVar7 != 0) {
            *(longlong *)(lVar7 + 0x10) = lVar16;
            *(undefined8 *)(puVar8 + 0xc) = 0;
          }
          if (lVar16 != 0) {
            *(longlong *)(lVar16 + 0x18) = lVar7;
            *(undefined8 *)(puVar8 + 8) = 0;
          }
        }
        uVar14 = (int)puVar8 - _DAT_149e47720;
        uVar9 = (ulonglong)_DAT_149e4772c;
        uVar10 = _DAT_149e47718;
        do {
          *puVar8 = (short)(uVar10 >> 0x20);
          LOCK();
          bVar15 = uVar10 != _DAT_149e47718;
          uVar5 = (ulonglong)((int)uVar10 + 1) |
                  (uVar10 & 0xffff000000000000 | (uVar14 / uVar9 & 0xffff) << 0x20) +
                  0x1000000000000;
          if (bVar15) {
            uVar10 = _DAT_149e47718;
            uVar5 = _DAT_149e47718;
          }
          _DAT_149e47718 = uVar5;
          UNLOCK();
        } while (bVar15);
      }
      else if (puVar4 != puVar8) {
        lVar16 = *(longlong *)(puVar8 + 8);
        lVar7 = *(longlong *)(puVar8 + 0xc);
        if (lVar7 != 0) {
          *(longlong *)(lVar7 + 0x10) = lVar16;
          *(undefined8 *)(puVar8 + 0xc) = 0;
        }
        if (lVar16 != 0) {
          *(longlong *)(lVar16 + 0x18) = lVar7;
        }
        if (puVar4 != (undefined2 *)0x0) {
          *(undefined2 **)(puVar4 + 0xc) = puVar8;
        }
        *(undefined2 **)(puVar8 + 8) = puVar4;
        *plVar12 = (longlong)puVar8;
      }
      plVar13 = plVar12 + 3;
      *(int *)plVar13 = (int)*plVar13 + -1;
      uVar9 = *puVar11;
      if ((int)*plVar13 == 0) {
        do {
          uVar10 = uVar9;
          LOCK();
          uVar9 = *puVar11;
          if (uVar10 == uVar9) {
            *puVar11 = (ulonglong)((int)uVar10 - 1) | 0xffffffff00000000;
            uVar9 = uVar10;
          }
          UNLOCK();
        } while (uVar10 != uVar9);
        if ((uVar10 & 0xfffffffe) != 0) {
          plVar13 = plVar12 + 2;
          lVar16 = plVar12[2];
          do {
            while (lVar16 < 0) {
              cVar6 = FUN_1400062d0(plVar13,1,&stack0xffffffffffffffe0);
              if (cVar6 != '\0') {
                return;
              }
            }
            LOCK();
            lVar7 = *plVar13;
            if (lVar16 == lVar7) {
              *plVar13 = lVar16 + 0x100000000;
              lVar7 = lVar16;
            }
            UNLOCK();
            bVar15 = lVar16 != lVar7;
            lVar16 = lVar7;
          } while (bVar15);
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

