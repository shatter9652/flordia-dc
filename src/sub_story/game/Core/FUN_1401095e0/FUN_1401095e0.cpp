// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 1401095e0  size: 527 bytes
// Name:    FUN_1401095e0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1401097f0, FUN_140109850
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401095e0(undefined8 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong unaff_GS_OFFSET;
  undefined8 auStack_80 [6];
  undefined8 uStack_50;
  
  *param_1 = &UNK_1465a28b0;
  uStack_50 = 0x1401095fd;
  FUN_1401097f0();
  uStack_50 = 0x140109609;
  FUN_140109850(param_1 + 3);
  lVar5 = param_1[4];
  plVar1 = param_1 + 4;
  puVar3 = (undefined8 *)(lVar5 + 0x20 + (longlong)param_1);
  puVar4 = (undefined8 *)0x0;
  if (lVar5 != 1) {
    puVar4 = puVar3;
  }
  if ((ulonglong)*(uint *)((longlong)param_1 + 0x1c) != 0) {
    lVar5 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c) * 0x48;
    do {
      uStack_50 = 0x1401096ff;
      (**(code **)*puVar4)(puVar4,0);
      puVar4 = puVar4 + 9;
      lVar5 = lVar5 + -0x48;
    } while (lVar5 != 0);
    lVar5 = *plVar1;
    puVar3 = (undefined8 *)(lVar5 + (longlong)plVar1);
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  uVar2 = _DAT_149e4ff10;
  puVar4 = _DAT_149e4ff08;
  if (puVar3 != (undefined8 *)0x0 && lVar5 != 1) {
    if ((puVar3 < _DAT_149e4ff18 || _DAT_149e4ff18 == (undefined8 *)0x0) ||
        _DAT_149e4ff18 + 0x200000 <= puVar3) {
      uStack_50 = 0x1401096b9;
      func_0x000144d9c130();
    }
    else if ((ulonglong)_DAT_149e4ff10 != 0) {
      lVar5 = (ulonglong)_DAT_149e4ff10 * 0x18;
      puVar6 = _DAT_149e4ff08;
      do {
        if ((undefined8 *)*puVar6 == puVar3) {
          *(undefined1 *)(puVar6 + 2) = 0;
          break;
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
      if (0 < (int)uVar2) {
        uVar2 = uVar2 - 1;
        if ((undefined8 *)puVar4[(ulonglong)uVar2 * 3] == puVar3) {
          _DAT_149e4ff20 = _DAT_149e4ff20 - puVar4[(ulonglong)uVar2 * 3 + 1];
          _DAT_149e4ff10 = uVar2;
        }
      }
    }
  }
  uStack_50 = 0x14010964d;
  func_0x000140194af0(plVar1);
  *(undefined4 *)(param_1 + 3) = 0;
  uVar2 = _DAT_149e4ff10;
  puVar3 = _DAT_149e4ff08;
  puVar4 = (undefined8 *)(*plVar1 + (longlong)plVar1);
  if (puVar4 != (undefined8 *)0x0 && *plVar1 != 1) {
    if ((puVar4 < _DAT_149e4ff18 || _DAT_149e4ff18 == (undefined8 *)0x0) ||
        _DAT_149e4ff18 + 0x200000 <= puVar4) {
      uStack_50 = 0x1401096e8;
      func_0x000144d9c130();
    }
    else if ((ulonglong)_DAT_149e4ff10 != 0) {
      lVar5 = (ulonglong)_DAT_149e4ff10 * 0x18;
      puVar6 = _DAT_149e4ff08;
      do {
        if ((undefined8 *)*puVar6 == puVar4) {
          *(undefined1 *)(puVar6 + 2) = 0;
          break;
        }
        puVar6 = puVar6 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
      if (0 < (int)uVar2) {
        uVar2 = uVar2 - 1;
        if ((undefined8 *)puVar3[(ulonglong)uVar2 * 3] == puVar4) {
          _DAT_149e4ff20 = _DAT_149e4ff20 - puVar3[(ulonglong)uVar2 * 3 + 1];
          _DAT_149e4ff10 = uVar2;
        }
      }
    }
  }
  uStack_50 = 0x14010966f;
  func_0x000140194af0(plVar1);
  *param_1 = &UNK_146209118;
  if (param_1[1] != 0) {
    auStack_80[0] = 0;
    FUN_140108550(param_1[1],auStack_80);
    FUN_144faf900(auStack_80);
    *(undefined8 **)(**(longlong **)(unaff_GS_OFFSET + 0x58) + 0x880) = param_1;
  }
  return;
}

