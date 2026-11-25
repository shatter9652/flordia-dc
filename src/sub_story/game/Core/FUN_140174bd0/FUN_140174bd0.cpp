// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140174bd0  size: 330 bytes
// Name:    FUN_140174bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_142447f50, FUN_1402a6d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140174bd0(uint *param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  
  uVar2 = param_1[1];
  if (uVar2 == *param_1) {
    uVar6 = 1;
    if (1 < uVar2) {
      uVar6 = uVar2 >> 1;
    }
    uVar3 = FUN_142447f50(uVar6 + uVar2);
    if ((ulonglong)param_1[1] != 0) {
      lVar7 = 0;
      if (*(longlong *)(param_1 + 2) != 1) {
        lVar7 = *(longlong *)(param_1 + 2) + 8 + (longlong)param_1;
      }
      func_0x000145f40560(uVar3,lVar7,(ulonglong)param_1[1] << 2);
    }
    uVar5 = _DAT_149e4ff10;
    puVar1 = _DAT_149e4ff08;
    uVar4 = *(longlong *)(param_1 + 2) + (longlong)(param_1 + 2);
    if (uVar4 != 0 && *(longlong *)(param_1 + 2) != 1) {
      if ((uVar4 < _DAT_149e4ff18 || _DAT_149e4ff18 == 0) || _DAT_149e4ff18 + 0x1000000 <= uVar4) {
        func_0x000144d9c130(uVar4);
      }
      else if ((ulonglong)_DAT_149e4ff10 != 0) {
        lVar7 = (ulonglong)_DAT_149e4ff10 * 0x18;
        puVar8 = _DAT_149e4ff08;
        do {
          if (*puVar8 == uVar4) {
            *(undefined1 *)(puVar8 + 2) = 0;
            break;
          }
          puVar8 = puVar8 + 3;
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
        if (0 < (int)uVar5) {
          uVar5 = uVar5 - 1;
          if (puVar1[(ulonglong)uVar5 * 3] == uVar4) {
            _DAT_149e4ff20 = _DAT_149e4ff20 - puVar1[(ulonglong)uVar5 * 3 + 1];
            _DAT_149e4ff10 = uVar5;
          }
        }
      }
    }
    FUN_1402a6d50(param_1 + 2);
    *param_1 = uVar6 + uVar2;
    uVar2 = param_1[1];
  }
  lVar7 = 0;
  if (*(longlong *)(param_1 + 2) != 1) {
    lVar7 = *(longlong *)(param_1 + 2) + 8 + (longlong)param_1;
  }
  param_1[1] = uVar2 + 1;
  *(undefined4 *)(lVar7 + (ulonglong)uVar2 * 4) = *param_2;
  return;
}

