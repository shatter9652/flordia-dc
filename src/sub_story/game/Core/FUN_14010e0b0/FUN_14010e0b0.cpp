// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14010e0b0  size: 179 bytes
// Name:    FUN_14010e0b0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144e9b660
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14010e0b0(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  
  func_0x000144da6190();
  plVar5 = *(longlong **)(param_1 + 0x48);
  if (plVar5 != (longlong *)0x0) {
    puVar3 = (undefined1 *)func_0x0001455ac620(*(undefined8 *)(param_1 + 0x58));
    iVar2 = (**(code **)(*plVar5 + 0x48))(plVar5);
    if (iVar2 < 0) {
      if (iVar2 == -0x7ff8fff2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_144e9b660(iVar2);
      *puVar3 = 1;
      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
    }
    *(undefined8 *)(param_1 + 0x48) = 0;
    lVar4 = *(longlong *)(param_1 + 0x68);
    if (lVar4 != 0) {
      plVar5 = *(longlong **)(param_1 + 0x58);
      do {
        *(longlong **)(param_1 + 0x60) = plVar5;
        *plVar5 = lVar4;
        plVar5 = (longlong *)(lVar4 + 0x70);
        *(longlong **)(param_1 + 0x58) = plVar5;
        lVar4 = *(longlong *)(lVar4 + 0x70);
      } while (lVar4 != 0);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(longlong *)(param_1 + 0x70) = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      func_0x000144da9f50(param_1 + -0x12300);
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  return;
}

