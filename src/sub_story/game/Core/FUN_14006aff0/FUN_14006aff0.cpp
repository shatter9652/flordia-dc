// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 14006aff0  size: 135 bytes
// Name:    FUN_14006aff0
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: FUN_144ebb550
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_14006aff0(longlong param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar4 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x10) + 0x14);
    if (uVar4 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
      lVar6 = uVar4 * 0x28;
      do {
        if ((*(longlong *)(lVar5 + 0x10) == 0) ||
           (cVar2 = FUN_144ebb550(*(longlong *)(lVar5 + 0x10)), cVar2 != '\0')) {
          if (lVar5 == *(longlong *)(param_1 + 0x58)) {
            return;
          }
          *(longlong *)(param_1 + 0x58) = lVar5;
          if (*(longlong *)(lVar5 + 0x18) == *(longlong *)(param_1 + 0x60)) {
            return;
          }
          *(longlong *)(param_1 + 0x60) = *(longlong *)(lVar5 + 0x18);
          uVar3 = 0x61e619c3;
          puVar1 = *(undefined4 **)(lVar5 + 0x10);
          *(undefined4 **)(param_1 + 0x18) = puVar1;
          if (puVar1 != (undefined4 *)0x0) {
            uVar3 = *puVar1;
          }
          *(undefined4 *)(param_1 + 0x20) = uVar3;
          return;
        }
        lVar5 = lVar5 + 0x28;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
    }
  }
  return;
}

