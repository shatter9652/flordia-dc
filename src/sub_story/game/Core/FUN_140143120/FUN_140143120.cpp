// Recovered from game_scarlett_master.exe (GTA VI, Xbox Series X, PE32+ x64)
// Address: 140143120  size: 189 bytes
// Name:    FUN_140143120
// Subsystem: core
//
// Referenced strings (0 in this body, 0 including direct callees):
// Callees: 
//
// Generated decompilation. Formatting follows MiscRef/GTAVSRC conventions;
// identifiers are recovered, not original. See ../../../README.md.

#include "gta6decomp/rage_types.h"


void FUN_140143120(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [64];
  
  *(undefined2 *)(param_1 + 0x90) = 0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    auVar3 = ZEXT1264(ZEXT812(0));
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar2 * 8);
      *(undefined2 *)(lVar1 + 0xc9) = 0;
      if (*(longlong *)(lVar1 + 0x90) != 0) {
        func_0x000144d9c130(*(longlong *)(lVar1 + 0x90));
      }
      *(undefined8 *)(lVar1 + 0x90) = 0;
      *(undefined4 *)(lVar1 + 0x98) = 0;
      *(undefined4 *)(lVar1 + 0xbc) = 0;
      if (*(longlong *)(lVar1 + 0xc0) != 0) {
        func_0x000144d9c130(*(longlong *)(lVar1 + 0xc0));
      }
      *(undefined8 *)(lVar1 + 0xc0) = 0;
      *(undefined1 (*) [16])(lVar1 + 0xa0) = auVar3._0_16_;
      *(undefined1 (*) [16])(lVar1 + 0xac) = auVar3._0_16_;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x3c));
  }
  return;
}

