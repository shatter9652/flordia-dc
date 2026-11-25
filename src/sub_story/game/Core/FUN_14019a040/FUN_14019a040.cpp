// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019a040  size: 74 bytes
// Name:    FUN_14019a040
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_14019a090, FUN_14019a0d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14019a040(undefined8 *param_1)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  char cVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  longlong lVar15;
  
  *param_1 = &UNK_14668bf60;
  FUN_14019a090();
  if ((*(short *)((longlong)param_1 + 0xf2) != 0) && (param_1[0x1d] != 0)) {
    func_0x000144d9c130();
  }
  FUN_14019a0d0(param_1 + 8);
  *param_1 = &UNK_14668b560;
  FUN_144ea34a0();
  *param_1 = &UNK_14668b4c0;
  FUN_144ea34c0();
  puVar2 = (undefined4 *)param_1[5];
  if (puVar2 == (undefined4 *)0x0) {
    return;
  }
  if (puVar2 != (undefined4 *)0x0) {
    if (((undefined4 *)CONCAT44(uRam0000000149e47724,_DAT_149e47720) <= puVar2) &&
       (puVar2 < (undefined4 *)
                 ((longlong)CONCAT44(uRam0000000149e47724,_DAT_149e47720) +
                 (ulonglong)(uint)(_DAT_149e47728 * 0x5000)))) {
      puVar7 = (undefined2 *)func_0x0001455cfab0();
      uVar1 = puVar7[2];
      if (uVar1 < uRam0000000149e476f4) {
        puVar10 = (ulonglong *)((ulonglong)uVar1 * 8 + lRam0000000149e47708);
        uVar13 = (int)puVar2 - _DAT_149e47720;
        uVar8 = *puVar10;
        do {
          *puVar2 = (int)uVar8;
          LOCK();
          uVar9 = *puVar10;
          bVar14 = uVar8 == uVar9;
          if (bVar14) {
            *puVar10 = (uVar8 & 0xffffffff00000000 | (ulonglong)uVar13) + 0x100000000;
            uVar9 = uVar8;
          }
          UNLOCK();
          uVar8 = uVar9;
        } while (!bVar14);
        return;
      }
      plVar11 = (longlong *)
                ((ulonglong)(uVar1 - uRam0000000149e476f4) * 0x28 + lRam0000000149e47710);
      puVar10 = (ulonglong *)(plVar11 + 1);
      FUN_140004b40(puVar10);
      func_0x000144f845b0(puVar7);
      puVar3 = (undefined2 *)*plVar11;
      if (*(uint *)(puVar7 + 6) == (uint)(ushort)puVar7[5]) {
        if (puVar3 == puVar7) {
          *plVar11 = *(longlong *)(puVar3 + 8);
        }
        else {
          lVar15 = *(longlong *)(puVar7 + 8);
          lVar6 = *(longlong *)(puVar7 + 0xc);
          if (lVar6 != 0) {
            *(longlong *)(lVar6 + 0x10) = lVar15;
            *(undefined8 *)(puVar7 + 0xc) = 0;
          }
          if (lVar15 != 0) {
            *(longlong *)(lVar15 + 0x18) = lVar6;
            *(undefined8 *)(puVar7 + 8) = 0;
          }
        }
        uVar13 = (int)puVar7 - _DAT_149e47720;
        uVar8 = (ulonglong)_DAT_149e4772c;
        uVar9 = _DAT_149e47718;
        do {
          *puVar7 = (short)(uVar9 >> 0x20);
          LOCK();
          bVar14 = uVar9 != _DAT_149e47718;
          uVar4 = (ulonglong)((int)uVar9 + 1) |
                  (uVar9 & 0xffff000000000000 | (uVar13 / uVar8 & 0xffff) << 0x20) + 0x1000000000000
          ;
          if (bVar14) {
            uVar9 = _DAT_149e47718;
            uVar4 = _DAT_149e47718;
          }
          _DAT_149e47718 = uVar4;
          UNLOCK();
        } while (bVar14);
      }
      else if (puVar3 != puVar7) {
        lVar15 = *(longlong *)(puVar7 + 8);
        lVar6 = *(longlong *)(puVar7 + 0xc);
        if (lVar6 != 0) {
          *(longlong *)(lVar6 + 0x10) = lVar15;
          *(undefined8 *)(puVar7 + 0xc) = 0;
        }
        if (lVar15 != 0) {
          *(longlong *)(lVar15 + 0x18) = lVar6;
        }
        if (puVar3 != (undefined2 *)0x0) {
          *(undefined2 **)(puVar3 + 0xc) = puVar7;
        }
        *(undefined2 **)(puVar7 + 8) = puVar3;
        *plVar11 = (longlong)puVar7;
      }
      plVar12 = plVar11 + 3;
      *(int *)plVar12 = (int)*plVar12 + -1;
      uVar8 = *puVar10;
      if ((int)*plVar12 == 0) {
        do {
          uVar9 = uVar8;
          LOCK();
          uVar8 = *puVar10;
          if (uVar9 == uVar8) {
            *puVar10 = (ulonglong)((int)uVar9 - 1) | 0xffffffff00000000;
            uVar8 = uVar9;
          }
          UNLOCK();
        } while (uVar9 != uVar8);
        if ((uVar9 & 0xfffffffe) != 0) {
          plVar12 = plVar11 + 2;
          lVar15 = plVar11[2];
          do {
            while (lVar15 < 0) {
              cVar5 = FUN_1400062d0(plVar12,1,&stack0xffffffffffffffe0);
              if (cVar5 != '\0') {
                return;
              }
            }
            LOCK();
            lVar6 = *plVar12;
            if (lVar15 == lVar6) {
              *plVar12 = lVar15 + 0x100000000;
              lVar6 = lVar15;
            }
            UNLOCK();
            bVar14 = lVar15 != lVar6;
            lVar15 = lVar6;
          } while (bVar14);
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

