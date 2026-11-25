// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14018d710  size: 326 bytes
// Name:    FUN_14018d710
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018d710(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  bool bVar11;
  longlong lStack_20;
  
  FUN_140004b40(0x14a4a02b0);
  plVar1 = _DAT_149e2e9f0;
  if ((_DAT_149e2e9f0 != (longlong *)0x0) && ((int)_DAT_149e2e9f0[2] != 0)) {
    if ((DAT_14abbe2e0 == '\0') &&
       (((cVar4 = func_0x000144f7b6a0(), cVar4 == '\0' && (DAT_14abbe2e1 == '\0')) &&
        (cVar4 = func_0x000144f862d0(), cVar4 == '\0')))) {
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        uVar8 = 0;
        do {
          if (*plVar1 != 0 &&
              (~*(uint *)(plVar1[5] + (ulonglong)(uVar8 & 0xffffff) * 4) & *(uint *)(plVar1 + 6)) ==
              0) {
            plVar10 = (longlong *)(*plVar1 + (ulonglong)((uVar8 & 0xffffff) * (int)plVar1[1]));
            func_0x00014524bcd0(plVar10);
            if (((*(byte *)(plVar10[9] + 0x1e) & 8) != 0) &&
               (cVar4 = (**(code **)(*plVar10 + 0xb0))(plVar10), cVar4 != '\0')) {
              *(ushort *)(plVar10[9] + 0x1e) = *(ushort *)(plVar10[9] + 0x1e) | 0x800;
              (**(code **)(*plVar10 + 0x10))(plVar10);
              *(ushort *)(plVar10[9] + 0x1e) = *(ushort *)(plVar10[9] + 0x1e) & 0xf7ff;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)((longlong)plVar1 + 0xc));
      }
    }
    else {
      uVar8 = *(uint *)((longlong)plVar1 + 0xc);
      if (uVar8 != 0) {
        uVar9 = 0;
        do {
          lVar5 = *plVar1;
          if (lVar5 != 0 &&
              (~*(uint *)(plVar1[5] + (ulonglong)(uVar9 & 0xffffff) * 4) & *(uint *)(plVar1 + 6)) ==
              0) {
            uVar7 = (ulonglong)((uVar9 & 0xffffff) * (int)plVar1[1]);
            (**(code **)(*(longlong *)(lVar5 + uVar7) + 0x18))(lVar5 + uVar7);
            uVar8 = *(uint *)((longlong)plVar1 + 0xc);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
      }
    }
  }
  iRam000000014a4a02c0 = iRam000000014a4a02c0 + -1;
  uVar7 = uRam000000014a4a02b0;
  if (iRam000000014a4a02c0 == 0) {
    do {
      uVar6 = uVar7;
      LOCK();
      uVar7 = uVar6;
      uVar2 = (ulonglong)((int)uVar6 - 1) | 0xffffffff00000000;
      if (uVar6 != uRam000000014a4a02b0) {
        uVar7 = uRam000000014a4a02b0;
        uVar2 = uRam000000014a4a02b0;
      }
      uRam000000014a4a02b0 = uVar2;
      UNLOCK();
    } while (uVar6 != uVar7);
    if ((uVar6 & 0xfffffffe) != 0) {
      lStack_20 = lRam000000014a4a02b8;
      iRam000000014a4a02c0 = 0;
      do {
        while (lStack_20 < 0) {
          cVar4 = FUN_1400062d0(0x14a4a02b8,1,&lStack_20);
          if (cVar4 != '\0') {
            return;
          }
        }
        LOCK();
        lVar5 = lStack_20;
        lVar3 = lStack_20 + 0x100000000;
        if (lStack_20 != lRam000000014a4a02b8) {
          lVar5 = lRam000000014a4a02b8;
          lVar3 = lRam000000014a4a02b8;
        }
        lRam000000014a4a02b8 = lVar3;
        UNLOCK();
        bVar11 = lStack_20 != lVar5;
        lStack_20 = lVar5;
      } while (bVar11);
      return;
    }
  }
  return;
}

