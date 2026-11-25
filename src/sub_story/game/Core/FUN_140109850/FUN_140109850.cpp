// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140109850  size: 304 bytes
// Name:    FUN_140109850
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402a6d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140109850(undefined4 *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  iVar2 = param_1[1];
  plVar1 = (longlong *)(param_1 + 2);
  if ((longlong)iVar2 < 0) {
    FUN_1402a6d50(plVar1,0);
    param_1[1] = 0;
  }
  else {
    lVar7 = *plVar1;
    puVar4 = (undefined8 *)(lVar7 + (longlong)plVar1);
    puVar5 = (undefined8 *)0x0;
    if (lVar7 != 1) {
      puVar5 = puVar4;
    }
    if (iVar2 != 0) {
      lVar7 = (longlong)iVar2 * 0x48;
      do {
        (**(code **)*puVar5)(puVar5,0);
        puVar5 = puVar5 + 9;
        lVar7 = lVar7 + -0x48;
      } while (lVar7 != 0);
      lVar7 = *plVar1;
      puVar4 = (undefined8 *)(lVar7 + (longlong)plVar1);
    }
    param_1[1] = 0;
    uVar3 = _DAT_149e4ff10;
    puVar5 = _DAT_149e4ff08;
    if (puVar4 != (undefined8 *)0x0 && lVar7 != 1) {
      if ((puVar4 < _DAT_149e4ff18 || _DAT_149e4ff18 == (undefined8 *)0x0) ||
          _DAT_149e4ff18 + 0x200000 <= puVar4) {
        func_0x000144d9c130();
      }
      else if ((ulonglong)_DAT_149e4ff10 != 0) {
        lVar7 = (ulonglong)_DAT_149e4ff10 * 0x18;
        puVar6 = _DAT_149e4ff08;
        do {
          if ((undefined8 *)*puVar6 == puVar4) {
            *(undefined1 *)(puVar6 + 2) = 0;
            break;
          }
          puVar6 = puVar6 + 3;
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
        if (0 < (int)uVar3) {
          uVar3 = uVar3 - 1;
          if ((undefined8 *)puVar5[(ulonglong)uVar3 * 3] == puVar4) {
            _DAT_149e4ff20 = _DAT_149e4ff20 - puVar5[(ulonglong)uVar3 * 3 + 1];
            _DAT_149e4ff10 = uVar3;
          }
        }
      }
    }
    func_0x000140194af0(plVar1);
  }
  *param_1 = 0;
  return;
}

