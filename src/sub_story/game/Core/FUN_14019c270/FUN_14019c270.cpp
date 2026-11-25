// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14019c270  size: 272 bytes
// Name:    FUN_14019c270
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401a05d0
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14019c270(undefined4 *param_1)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (*(undefined8 **)(param_1 + 0x2f4) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x2f4) = 6;
    FUN_1401a05d0();
  }
  param_1[0x271] = 0;
  if ((param_1 + 0x274 != *(undefined4 **)(param_1 + 0x272)) &&
     (*(undefined4 **)(param_1 + 0x272) != (undefined4 *)0x0)) {
    func_0x000144d9c130();
  }
  param_1[0x270] = 6;
  *(undefined8 *)(param_1 + 0x272) = 0;
  puVar1 = *(undefined4 **)(param_1 + 4);
  uVar5 = param_1[1];
  if ((ulonglong)uVar5 != 0) {
    lVar8 = 0;
    do {
      *(undefined8 *)((longlong)puVar1 + lVar8) = 3;
      lVar8 = lVar8 + 0x130;
    } while ((ulonglong)uVar5 * 0x130 - lVar8 != 0);
  }
  param_1[1] = 0;
  if ((param_1 + 8 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
    func_0x000144d9c130();
  }
  *param_1 = 8;
  *(undefined8 *)(param_1 + 4) = 0;
  cVar4 = func_0x000144eca830(0x149fee3c8,param_1);
  if (cVar4 == '\0') {
    plVar6 = (longlong *)func_0x000144fc99c0(0,0);
    if (param_1 == (undefined4 *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014009342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))();
    return;
  }
  if (param_1 != (undefined4 *)0x0) {
    uVar5 = (int)param_1 - iRam0000000149fee3d0;
    uVar2 = (ulonglong)uRam0000000149fee3dc;
    uVar7 = uRam0000000149fee3c8;
    do {
      *(short *)param_1 = (short)(uVar7 >> 0x20);
      LOCK();
      bVar9 = uVar7 != uRam0000000149fee3c8;
      uVar3 = (ulonglong)((int)uVar7 + 1) |
              (uVar7 & 0xffff000000000000 | (uVar5 / uVar2 & 0xffff) << 0x20) + 0x1000000000000;
      if (bVar9) {
        uVar7 = uRam0000000149fee3c8;
        uVar3 = uRam0000000149fee3c8;
      }
      uRam0000000149fee3c8 = uVar3;
      UNLOCK();
    } while (bVar9);
  }
  return;
}

