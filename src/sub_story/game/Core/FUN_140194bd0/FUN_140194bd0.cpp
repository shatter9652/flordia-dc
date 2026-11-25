// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140194bd0  size: 256 bytes
// Name:    FUN_140194bd0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402a6d50
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140194bd0(undefined4 *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar7;
  
  uVar2 = param_1[1];
  param_1[1] = uVar2 & 0x80000000;
  uVar6 = _DAT_149e4ff10;
  puVar3 = _DAT_149e4ff08;
  plVar1 = (longlong *)(param_1 + 2);
  if ((int)uVar2 < 0) {
    FUN_1402a6d50(plVar1,0);
    param_1[1] = 0;
  }
  else {
    uVar5 = *plVar1 + (longlong)plVar1;
    if (uVar5 != 0 && *plVar1 != 1) {
      if ((uVar5 < _DAT_149e4ff18 || _DAT_149e4ff18 == 0) || _DAT_149e4ff18 + 0x1000000 <= uVar5) {
        func_0x000144d9c130();
      }
      else if ((ulonglong)_DAT_149e4ff10 != 0) {
        lVar4 = (ulonglong)_DAT_149e4ff10 * 0x18;
        puVar7 = _DAT_149e4ff08;
        do {
          if (*puVar7 == uVar5) {
            *(undefined1 *)(puVar7 + 2) = 0;
            break;
          }
          puVar7 = puVar7 + 3;
          lVar4 = lVar4 + -0x18;
        } while (lVar4 != 0);
        if (0 < (int)uVar6) {
          uVar6 = uVar6 - 1;
          if (puVar3[(ulonglong)uVar6 * 3] == uVar5) {
            _DAT_149e4ff20 = _DAT_149e4ff20 - puVar3[(ulonglong)uVar6 * 3 + 1];
            _DAT_149e4ff10 = uVar6;
          }
        }
      }
    }
    func_0x00014504d8b0(plVar1);
  }
  *param_1 = 0;
  return;
}

