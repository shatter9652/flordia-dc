// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140018ce0  size: 82 bytes
// Name:    FUN_140018ce0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140018ce0(undefined4 *param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint uVar12;
  bool bVar13;
  longlong lVar14;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((_DAT_149e47720 <= param_1) &&
       (param_1 < (undefined4 *)
                  ((longlong)_DAT_149e47720 + (ulonglong)(uint)(_DAT_149e47728 * 0x5000)))) {
      puVar6 = (undefined2 *)func_0x0001455cfab0();
      uVar1 = puVar6[2];
      if (uVar1 < uRam0000000149e476f4) {
        puVar9 = (ulonglong *)((ulonglong)uVar1 * 8 + lRam0000000149e47708);
        uVar12 = (int)param_1 - _DAT_149e47720;
        uVar7 = *puVar9;
        do {
          *param_1 = (int)uVar7;
          LOCK();
          uVar8 = *puVar9;
          bVar13 = uVar7 == uVar8;
          if (bVar13) {
            *puVar9 = (uVar7 & 0xffffffff00000000 | (ulonglong)uVar12) + 0x100000000;
            uVar8 = uVar7;
          }
          UNLOCK();
          uVar7 = uVar8;
        } while (!bVar13);
        return;
      }
      plVar10 = (longlong *)
                ((ulonglong)(uVar1 - uRam0000000149e476f4) * 0x28 + lRam0000000149e47710);
      puVar9 = (ulonglong *)(plVar10 + 1);
      FUN_140004b40(puVar9);
      func_0x000144f845b0(puVar6);
      puVar2 = (undefined2 *)*plVar10;
      if (*(uint *)(puVar6 + 6) == (uint)(ushort)puVar6[5]) {
        if (puVar2 == puVar6) {
          *plVar10 = *(longlong *)(puVar2 + 8);
        }
        else {
          lVar14 = *(longlong *)(puVar6 + 8);
          lVar5 = *(longlong *)(puVar6 + 0xc);
          if (lVar5 != 0) {
            *(longlong *)(lVar5 + 0x10) = lVar14;
            *(undefined8 *)(puVar6 + 0xc) = 0;
          }
          if (lVar14 != 0) {
            *(longlong *)(lVar14 + 0x18) = lVar5;
            *(undefined8 *)(puVar6 + 8) = 0;
          }
        }
        uVar12 = (int)puVar6 - _DAT_149e47720;
        uVar7 = (ulonglong)_DAT_149e4772c;
        uVar8 = _DAT_149e47718;
        do {
          *puVar6 = (short)(uVar8 >> 0x20);
          LOCK();
          bVar13 = uVar8 != _DAT_149e47718;
          uVar3 = (ulonglong)((int)uVar8 + 1) |
                  (uVar8 & 0xffff000000000000 | (uVar12 / uVar7 & 0xffff) << 0x20) + 0x1000000000000
          ;
          if (bVar13) {
            uVar8 = _DAT_149e47718;
            uVar3 = _DAT_149e47718;
          }
          _DAT_149e47718 = uVar3;
          UNLOCK();
        } while (bVar13);
      }
      else if (puVar2 != puVar6) {
        lVar14 = *(longlong *)(puVar6 + 8);
        lVar5 = *(longlong *)(puVar6 + 0xc);
        if (lVar5 != 0) {
          *(longlong *)(lVar5 + 0x10) = lVar14;
          *(undefined8 *)(puVar6 + 0xc) = 0;
        }
        if (lVar14 != 0) {
          *(longlong *)(lVar14 + 0x18) = lVar5;
        }
        if (puVar2 != (undefined2 *)0x0) {
          *(undefined2 **)(puVar2 + 0xc) = puVar6;
        }
        *(undefined2 **)(puVar6 + 8) = puVar2;
        *plVar10 = (longlong)puVar6;
      }
      plVar11 = plVar10 + 3;
      *(int *)plVar11 = (int)*plVar11 + -1;
      uVar7 = *puVar9;
      if ((int)*plVar11 == 0) {
        do {
          uVar8 = uVar7;
          LOCK();
          uVar7 = *puVar9;
          if (uVar8 == uVar7) {
            *puVar9 = (ulonglong)((int)uVar8 - 1) | 0xffffffff00000000;
            uVar7 = uVar8;
          }
          UNLOCK();
        } while (uVar8 != uVar7);
        if ((uVar8 & 0xfffffffe) != 0) {
          plVar11 = plVar10 + 2;
          lVar14 = plVar10[2];
          do {
            while (lVar14 < 0) {
              cVar4 = FUN_1400062d0(plVar11,1,&stack0xffffffffffffffe0);
              if (cVar4 != '\0') {
                return;
              }
            }
            LOCK();
            lVar5 = *plVar11;
            if (lVar14 == lVar5) {
              *plVar11 = lVar14 + 0x100000000;
              lVar5 = lVar14;
            }
            UNLOCK();
            bVar13 = lVar14 != lVar5;
            lVar14 = lVar5;
          } while (bVar13);
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

