// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14004f730  size: 264 bytes
// Name:    FUN_14004f730
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_140189080, FUN_14004fba0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14004f730(longlong param_1,int param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  
  piVar2 = *(int **)(param_1 + 0x1d00);
  if ((piVar2 == (int *)0x0) || ((param_2 != 0 && (*piVar2 != param_2)))) {
    uVar7 = 0;
  }
  else {
    FUN_14004fba0(piVar2);
    plVar4 = _DAT_1492de7b8;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (longlong)piVar2 - *_DAT_1492de7b8;
    uVar8 = SUB164(auVar3 / ZEXT416(*(uint *)(_DAT_1492de7b8 + 1)),0);
    puVar1 = (ulonglong *)(_DAT_1492de7b8 + 4);
    uVar9 = (*(uint *)(_DAT_1492de7b8[5] +
                      (SUB168(auVar3 / ZEXT416(*(uint *)(_DAT_1492de7b8 + 1)),0) & 0xffffffff) * 4)
             & 0x7f000000 | uVar8) + 0x1000000;
    uVar8 = uVar8 & 0xffffff | 0x1000000;
    if ((uVar9 & 0x7f000000) != 0) {
      uVar8 = uVar9;
    }
    LOCK();
    *(int *)(_DAT_1492de7b8 + 2) = (int)_DAT_1492de7b8[2] + -1;
    UNLOCK();
    uVar5 = *puVar1;
    do {
      *(uint *)(plVar4[5] + (ulonglong)(uVar8 & 0xffffff) * 4) =
           (uint)uVar5 & 0xffffff | uVar8 & 0x7f000000;
      LOCK();
      uVar6 = plVar4[4];
      bVar10 = uVar5 == uVar6;
      if (bVar10) {
        plVar4[4] = (uVar5 & 0xffffffff00000000 | (ulonglong)(uVar8 & 0xffffff)) + 0x100000000;
        uVar6 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar6;
    } while (!bVar10);
    if (plVar4[3] != 0) {
      FUN_140189080(plVar4,piVar2);
    }
    *(undefined8 *)(param_1 + 0x1d00) = 0;
    uVar7 = 1;
  }
  return uVar7;
}

