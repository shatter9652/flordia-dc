// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140152a40  size: 350 bytes
// Name:    FUN_140152a40
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_145449350, FUN_140004b40
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140152a40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  bool bVar11;
  
  if (*(char *)(_DAT_1492e3560 + 0x588) != '\x01') {
    return;
  }
  puVar5 = (ulonglong *)(**(code **)(*param_1 + 0x58))();
  FUN_140004b40(puVar5);
  uVar2 = *(uint *)(param_1 + 0x203);
  if (uVar2 != 0) {
    uVar7 = *(uint *)(param_2 + 0x9c) & 0x1ffff;
    uVar6 = (uVar7 >> 0x10 ^ uVar7) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar1 = param_1 + 0x204;
    uVar9 = (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar2 - 1);
    uVar6 = *(uint *)(param_1 + uVar9 + 0x204);
    if (uVar6 == uVar7 || uVar6 == 0xffffffff) {
      if (uVar6 == 0xffffffff) goto LAB_140152adf;
      plVar8 = param_1 + uVar9 + 0x204;
    }
    else {
      do {
        uVar9 = (ulonglong)
                ((uint)((longlong)param_1 + ((uVar9 * 8 + 0x1028) - (longlong)plVar1) >> 3) &
                uVar2 - 1);
        uVar6 = *(uint *)(plVar1 + uVar9);
      } while (uVar6 != 0xffffffff && uVar6 != uVar7);
      if (uVar6 == 0xffffffff) goto LAB_140152adf;
      plVar8 = plVar1 + uVar9;
    }
    uVar9 = (ulonglong)((longlong)plVar8 - (longlong)plVar1) >> 3;
    while (uVar6 = (uint)uVar9, uVar2 != uVar6) {
      if ((int)plVar1[uVar9 & 0xffffffff] != -1) goto joined_r0x000140152b0c;
      uVar9 = (ulonglong)(uVar6 + 1);
    }
  }
LAB_140152adf:
  puVar10 = puVar5 + 2;
  *(int *)puVar10 = (int)*puVar10 + -1;
  uVar9 = *puVar5;
  if ((int)*puVar10 == 0) {
    do {
      uVar4 = uVar9;
      LOCK();
      uVar9 = *puVar5;
      if (uVar4 == uVar9) {
        *puVar5 = (ulonglong)((int)uVar4 - 1) | 0xffffffff00000000;
        uVar9 = uVar4;
      }
      UNLOCK();
    } while (uVar4 != uVar9);
    if ((uVar4 & 0xfffffffe) != 0) {
      puVar10 = puVar5 + 1;
      uVar9 = puVar5[1];
      do {
        while ((longlong)uVar9 < 0) {
          cVar3 = FUN_1400062d0(puVar10,1,&stack0xffffffffffffffe0);
          if (cVar3 != '\0') {
            return;
          }
        }
        LOCK();
        uVar4 = *puVar10;
        if (uVar9 == uVar4) {
          *puVar10 = uVar9 + 0x100000000;
          uVar4 = uVar9;
        }
        UNLOCK();
        bVar11 = uVar9 != uVar4;
        uVar9 = uVar4;
      } while (bVar11);
      return;
    }
  }
  return;
joined_r0x000140152b0c:
  if (uVar6 == uVar2) goto LAB_140152adf;
  uVar4 = uVar9 & 0xffffffff;
  if ((int)plVar1[uVar4] != -1) {
    if ((uint)uVar9 != uVar2) {
      (**(code **)(*param_1 + 0x48))
                (param_1,*(undefined2 *)((longlong)param_1 + uVar4 * 8 + 0x1024));
      FUN_145449350(param_1,*(undefined2 *)((longlong)param_1 + uVar4 * 8 + 0x1024));
    }
    goto LAB_140152adf;
  }
  uVar6 = (uint)uVar9 + 1;
  uVar9 = (ulonglong)uVar6;
  goto joined_r0x000140152b0c;
}

