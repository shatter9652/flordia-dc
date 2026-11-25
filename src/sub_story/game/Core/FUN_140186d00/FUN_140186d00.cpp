// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140186d00  size: 153 bytes
// Name:    FUN_140186d00
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_1402b8320
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


/* WARNING: Removing unreachable block (ram,0x000141aa4dc5) */
/* WARNING: Removing unreachable block (ram,0x000141aa4dd4) */
/* WARNING: Removing unreachable block (ram,0x000141aa4e6e) */
/* WARNING: Removing unreachable block (ram,0x000141aa4e76) */
/* WARNING: Removing unreachable block (ram,0x000141aa4e9f) */
/* WARNING: Removing unreachable block (ram,0x000141aa4ddd) */
/* WARNING: Removing unreachable block (ram,0x000141aa4e89) */
/* WARNING: Removing unreachable block (ram,0x000141aa4df9) */
/* WARNING: Removing unreachable block (ram,0x000141aa4e12) */
/* WARNING: Removing unreachable block (ram,0x000141aa4e15) */

void FUN_140186d00(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != param_3) {
    lVar2 = *plVar3;
    if (param_3 != 0) {
      lVar4 = param_3;
      do {
        puVar1 = *(undefined8 **)(lVar2 + -8 + param_2 * 8 + lVar4 * 8);
        if (puVar1 != (undefined8 *)0x146d328f8) {
          FUN_1402b8320(*puVar1);
        }
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0x20);
    }
    lVar2 = lVar2 + param_2 * 8;
    func_0x000145f40570(lVar2,lVar2 + param_3 * 8,((lVar4 - param_3) - param_2) * 8);
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) - param_3;
    return;
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    lVar2 = *plVar3;
    do {
      puVar1 = *(undefined8 **)(lVar2 + -8 + lVar4 * 8);
      if (puVar1 != (undefined8 *)0x146d328f8) {
        FUN_1402b8320(*puVar1,plVar3);
      }
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if (*(ulonglong *)(param_1 + 0x28) >> 1 != 0) {
      FUN_145821bf0(plVar3,plVar3,0);
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

