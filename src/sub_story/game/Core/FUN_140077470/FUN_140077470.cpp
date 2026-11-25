// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140077470  size: 514 bytes
// Name:    FUN_140077470
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_141c8c450, FUN_140189080, FUN_1452d5720, FUN_1400773e0, FUN_1452d56f0, FUN_1452e2b10
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140077470(undefined8 *param_1,int param_2)

{
  ulonglong *puVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  *param_1 = &UNK_14652c420;
  lVar7 = param_1[0x1b];
  if ((ulonglong)*(uint *)((longlong)param_1 + 0xd4) != 0) {
    lVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0xd4) * 0xa8;
    lVar7 = lVar7 + 0xa0;
    do {
      *(undefined **)(lVar7 + -0x90) = &UNK_14652c0d8;
      FUN_1452d5720(lVar7 + -0x90);
      FUN_1452d56f0(lVar7);
      *(undefined8 *)(lVar7 + -0x50) = 0x10;
      if (*(longlong *)(lVar7 + -0x70) != 0) {
        FUN_1452e2b10();
      }
      *(undefined8 *)(lVar7 + -0x70) = 0;
      lVar7 = lVar7 + 0xa8;
      lVar9 = lVar9 + -0xa8;
    } while (lVar9 != 0);
    lVar7 = param_1[0x1b];
  }
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  if (lVar7 != 0) {
    func_0x000144d9c130(lVar7);
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  lVar7 = param_1[0x19];
  if ((ulonglong)*(uint *)((longlong)param_1 + 0xc4) != 0) {
    lVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0xc4) * 200;
    lVar7 = lVar7 + 0x28;
    do {
      FUN_141c8c450(lVar7);
      lVar7 = lVar7 + 200;
      lVar9 = lVar9 + -200;
    } while (lVar9 != 0);
    lVar7 = param_1[0x19];
  }
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  if (lVar7 != 0) {
    func_0x000144d9c130();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  FUN_1400773e0(param_1);
  plVar3 = _DAT_149275070;
  if (param_2 != 0) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (longlong)param_1 - *_DAT_149275070;
    uVar6 = SUB164(auVar2 / ZEXT416(*(uint *)(_DAT_149275070 + 1)),0);
    uVar8 = *(uint *)(_DAT_149275070[5] +
                     (SUB168(auVar2 / ZEXT416(*(uint *)(_DAT_149275070 + 1)),0) & 0xffffffff) * 4) &
            0xfffe0000 | uVar6;
    uVar6 = uVar6 & 0x1ffff | 0x20000;
    if (uVar8 < 0xfffe0000) {
      uVar6 = uVar8 + 0x20000;
    }
    puVar1 = (ulonglong *)(_DAT_149275070 + 4);
    LOCK();
    *(int *)(_DAT_149275070 + 2) = (int)_DAT_149275070[2] + -1;
    UNLOCK();
    uVar4 = *puVar1;
    do {
      *(uint *)(plVar3[5] + (ulonglong)(uVar6 & 0x1ffff) * 4) =
           (uint)uVar4 & 0x1ffff | uVar6 & 0xfffe0000;
      LOCK();
      uVar5 = plVar3[4];
      bVar10 = uVar4 == uVar5;
      if (bVar10) {
        plVar3[4] = (uVar4 & 0xffffffff00000000 | (ulonglong)(uVar6 & 0x1ffff)) + 0x100000000;
        uVar5 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar5;
    } while (!bVar10);
    if (plVar3[3] != 0) {
      FUN_140189080(plVar3,param_1);
    }
  }
  return param_1;
}

